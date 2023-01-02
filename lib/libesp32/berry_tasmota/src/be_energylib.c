/********************************************************************
 * Tasmota lib
 * 
 * To use: `import power`
 * 
 * read power values
 *******************************************************************/
#include "be_constobj.h"

#ifdef USE_ENERGY_SENSOR

extern struct ENERGY Energy;

#include "solidify/solidified_energy.h"
#include "be_fixed_energy.h"

/* @const_object_info_begin

module energy (scope: global) {
  init, closure(energy_init_closure)
  _ptr, comptr(&Energy)

  read, closure(energy_read_closure)
  member, closure(energy_member_closure)
  setmember, closure(energy_setmember_closure)
}

@const_object_info_end */

#endif // USE_ENERGY_SENSOR