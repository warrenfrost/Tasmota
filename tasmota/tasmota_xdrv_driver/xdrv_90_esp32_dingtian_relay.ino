/*
  xdrv_90_esp32_dingtian_relay.ino - Dingtian 8, 16, 24 and 32 relays board based on 74x595+74x165

  Copyright (C) 2021 Barbudor

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifdef ESP32
#ifdef USE_DINGTIAN_RELAY

#define XDRV_90           90

/********************************************************************************************************
 * Global private data
 */

struct DINGTIAN_DATA {
  uint32_t    outputs;          // keep ouputs state
  uint32_t    last_inputs;      // previous inputs state
  uint8_t     count;            // number of relay and input (8 * numver of shift registers)
  uint8_t     first;            // index of 1st Tasmota relay assigned to 1st Dingtian relays
  // pins
  uint8_t     pin_clk, pin_sdi, pin_q7, pin_pl, pin_rck;
} *Dingtian = nullptr;


/********************************************************************************************************
 * Low level operations
 */

uint32_t DingtianReadWrite(uint32_t outputs)
{
  uint32_t inputs = 0;
  uint32_t in_bit = 1;

  // setup
  digitalWrite(Dingtian->pin_rck, 0);    // rclk and clkinh to 0
  digitalWrite(Dingtian->pin_pl, 1);      // load inputs in '165, ready for shift-in (side effect '595 in tri-state)
  for ( int i = Dingtian->count ; i > 0 ; i-- ) {
    // relay out to '595
    digitalWrite(Dingtian->pin_sdi, outputs & 1);
    outputs >>= 1;
    // input from '165
    inputs |= digitalRead(Dingtian->pin_q7) ? in_bit : 0;
    in_bit <<= 1;
    // generate CLK pulse
    digitalWrite(Dingtian->pin_clk, 1);
    digitalWrite(Dingtian->pin_clk, 0);
  }
  // ending
  digitalWrite(Dingtian->pin_rck, 1);    // rclk pulse to load '595 into output registers
  digitalWrite(Dingtian->pin_pl, 0);      // re-enable '595 ouputs

  return inputs;
}

/********************************************************************************************************
 * Driver initialisation
 */

#define DINGTIAN_SET_OUTPUT(pin,value)  { pinMode((pin), OUTPUT); digitalWrite((pin), (value)); }
#define DINGTIAN_SET_INPUT(pin)         { pinMode((pin), INPUT); }

void DingtianInit(void) {
  if (PinUsed(GPIO_DINGTIAN_CLK, GPIO_ANY) && PinUsed(GPIO_DINGTIAN_SDI) && PinUsed(GPIO_DINGTIAN_Q7)
   && PinUsed(GPIO_DINGTIAN_PL) && PinUsed(GPIO_DINGTIAN_RCK)) {
    // allocate Dingtian data structure
    Dingtian = (struct DINGTIAN_DATA*)calloc(1, sizeof(struct DINGTIAN_DATA));
    if (Dingtian) {
      // get pins
      Dingtian->pin_clk = Pin(GPIO_DINGTIAN_CLK, GPIO_ANY);   // shift clock  : 595's SCLK & 165's CLK
      Dingtian->pin_sdi = Pin(GPIO_DINGTIAN_SDI);             // Serial out   : 595's SER
      Dingtian->pin_q7  = Pin(GPIO_DINGTIAN_Q7);              // Serial in    : 165's Q7
      Dingtian->pin_pl  = Pin(GPIO_DINGTIAN_PL);              // Input load   : 595's nOE  & 165's PL (or SH/LD on some datasheet)
      Dingtian->pin_rck = Pin(GPIO_DINGTIAN_RCK);             // Output load  : 595's RCLK & 165's CLKINH
      // number of shift registers is the CLK index
      Dingtian->count   = ((GetPin(Dingtian->pin_clk) - AGPIO(GPIO_DINGTIAN_CLK)) + 1) * 8;

      AddLog(LOG_LEVEL_DEBUG, PSTR("DNGT: clk:%d, sdi:%d, q7:%d, pl:%d, rck:%d, count:%d"),
        Dingtian->pin_clk, Dingtian->pin_sdi, Dingtian->pin_q7, Dingtian->pin_pl, Dingtian->pin_rck, Dingtian->count);

      DINGTIAN_SET_OUTPUT(Dingtian->pin_clk, 0);
      DINGTIAN_SET_OUTPUT(Dingtian->pin_sdi, 0);
      DINGTIAN_SET_INPUT( Dingtian->pin_q7);
      DINGTIAN_SET_OUTPUT(Dingtian->pin_pl, 0);
      DINGTIAN_SET_OUTPUT(Dingtian->pin_rck, 0);

      Dingtian->first = TasmotaGlobal.devices_present;
      TasmotaGlobal.devices_present += Dingtian->count;
      if (TasmotaGlobal.devices_present > POWER_SIZE) {
        TasmotaGlobal.devices_present = POWER_SIZE;
      }
      AddLog(LOG_LEVEL_DEBUG, PSTR("DNGT: Dingtian relays: POWER%d to POWER%d"), Dingtian->first + 1, TasmotaGlobal.devices_present);
    }
  }
}

/********************************************************************************************************
 * Driver operations
 */

void DingtianLoop()
{
  uint32_t inputs = DingtianReadWrite(Dingtian->outputs);
  uint32_t last_inputs = Dingtian->last_inputs;
  Dingtian->last_inputs = inputs;
  if (inputs != last_inputs) {
    AddLog(LOG_LEVEL_DEBUG_MORE, PSTR("DNGT: inputs=0x%08X, last=0x%08X"), inputs, last_inputs);
    bool first_done = false;
    ResponseTime_P(PSTR(",\"DINGTIAN_CHG\":{"));
    for (int i = 0 ; i < Dingtian->count ; i++, last_inputs>>=1, inputs>>=1) {
      if ((last_inputs & 1) != (inputs & 1)) {
        if (first_done) ResponseAppend_P(PSTR(","));
        ResponseAppend_P(PSTR("\"IN%d\":%d"), i +1, (inputs & 1));
        //AddLog(LOG_LEVEL_DEBUG_MORE, PSTR("\"IN%d\":%d"), i +1, (inputs & 1));
        first_done = true;
      }
    }
    ResponseAppend_P(PSTR("}}"));
    if (first_done) {
      MqttPublishPrefixTopicRulesProcess_P(STAT, PSTR("DINGTIAN_CHG"));
    }
  }
}

void DingtianSetPower(void)
{
  // store relay status in structure
  Dingtian->outputs = (XdrvMailbox.index >> Dingtian->first) & ~(0xFFFFFFFF << Dingtian->count);
  //AddLog(LOG_LEVEL_DEBUG_MORE, PSTR("DNGT: outputs=0x%08X"), Dingtian->outputs);
  DingtianLoop();
}

/********************************************************************************************************
 * Driver Results
 */

const char HTTP_DINGTIAN_INPUTS[] PROGMEM = "{s}DINGTIAN " D_SENSOR_INPUT "%d.." D_SENSOR_INPUT "%d{m}%s{e}";

void DingtianShow(bool json)
{
  if (json) {
    bool first_done = false;
    ResponseAppend_P(PSTR(",\"DINGTIAN\":{"));
    for (int i = 0 ; i < Dingtian->count ; i++) {
      if (first_done) ResponseAppend_P(PSTR(","));
      ResponseAppend_P(PSTR("\"IN%d\":%d"), i +1, bitRead(Dingtian->last_inputs, i));
      first_done = true;
    }
    ResponseAppend_P(PSTR("}"));
  }
#ifdef USE_WEBSERVER
  else {
    char input_str[9];
    for (int block_input = 0 ; block_input < Dingtian->count ; block_input += 8 ) {
      for (int i = 0 ; i < 8 ; i++ )
        input_str[i] = '0' + bitRead(Dingtian->last_inputs, block_input +i);
      input_str[8] = '\0';
      WSContentSend_P(HTTP_DINGTIAN_INPUTS, block_input, block_input +7, input_str);
    }
  }
#endif
}


/*********************************************************************************************\
 * Interface
\*********************************************************************************************/

bool Xdrv90(uint32_t function) {
  bool result = false;

  if (FUNC_PRE_INIT == function) {
    DingtianInit();
  } else if (Dingtian) {
    switch (function) {
      case FUNC_SET_POWER:
        DingtianSetPower();
        break;
      case FUNC_EVERY_50_MSECOND:
      //case FUNC_EVERY_250_MSECOND:
        DingtianLoop();
        break;
      case FUNC_JSON_APPEND:
        DingtianShow(1);
        break;
#ifdef USE_WEBSERVER
      case FUNC_WEB_SENSOR:
        DingtianShow(0);
        break;
#endif  // USE_WEBSERVER
    }
  }
  return result;
}

#endif  // USE_DINGTIAN_RELAY
#endif  // ESP32
