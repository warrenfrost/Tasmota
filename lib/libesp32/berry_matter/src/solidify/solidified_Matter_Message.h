/* Solidification of Matter_Message.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Frame;

/********************************************************************
** Solidified function: encode_frame
********************************************************************/
be_local_closure(Matter_Frame_encode_frame,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[30]) {     /* constants */
    /* K0   */  be_nested_str_weak(flags),
    /* K1   */  be_const_int(0),
    /* K2   */  be_nested_str_weak(flag_s),
    /* K3   */  be_nested_str_weak(flag_dsiz),
    /* K4   */  be_const_int(3),
    /* K5   */  be_nested_str_weak(add),
    /* K6   */  be_const_int(1),
    /* K7   */  be_nested_str_weak(local_session_id),
    /* K8   */  be_const_int(2),
    /* K9   */  be_nested_str_weak(sec_flags),
    /* K10  */  be_nested_str_weak(sec_p),
    /* K11  */  be_nested_str_weak(sec_c),
    /* K12  */  be_nested_str_weak(sec_sesstype),
    /* K13  */  be_nested_str_weak(message_counter),
    /* K14  */  be_nested_str_weak(source_node_id),
    /* K15  */  be_nested_str_weak(dest_node_id_8),
    /* K16  */  be_nested_str_weak(dest_node_id_2),
    /* K17  */  be_nested_str_weak(payload_idx),
    /* K18  */  be_nested_str_weak(x_flags),
    /* K19  */  be_nested_str_weak(x_flag_v),
    /* K20  */  be_nested_str_weak(x_flag_r),
    /* K21  */  be_nested_str_weak(x_flag_a),
    /* K22  */  be_nested_str_weak(x_flag_i),
    /* K23  */  be_nested_str_weak(opcode),
    /* K24  */  be_nested_str_weak(exchange_id),
    /* K25  */  be_nested_str_weak(protocol_id),
    /* K26  */  be_nested_str_weak(ack_message_counter),
    /* K27  */  be_nested_str_weak(app_payload_idx),
    /* K28  */  be_nested_str_weak(debug),
    /* K29  */  be_nested_str_weak(raw),
    }),
    be_str_weak(encode_frame),
    &be_const_str_solidified,
    ( &(const binstruction[146]) {  /* code */
      0x60080015,  //  0000  GETGBL	R2	G21
      0x7C080000,  //  0001  CALL	R2	0
      0x880C0100,  //  0002  GETMBR	R3	R0	K0
      0x4C100000,  //  0003  LDNIL	R4
      0x1C0C0604,  //  0004  EQ	R3	R3	R4
      0x780E000D,  //  0005  JMPF	R3	#0014
      0x90020101,  //  0006  SETMBR	R0	K0	K1
      0x880C0102,  //  0007  GETMBR	R3	R0	K2
      0x780E0003,  //  0008  JMPF	R3	#000D
      0x880C0100,  //  0009  GETMBR	R3	R0	K0
      0x54120003,  //  000A  LDINT	R4	4
      0x300C0604,  //  000B  OR	R3	R3	R4
      0x90020003,  //  000C  SETMBR	R0	K0	R3
      0x880C0103,  //  000D  GETMBR	R3	R0	K3
      0x780E0004,  //  000E  JMPF	R3	#0014
      0x880C0100,  //  000F  GETMBR	R3	R0	K0
      0x88100103,  //  0010  GETMBR	R4	R0	K3
      0x2C100904,  //  0011  AND	R4	R4	K4
      0x300C0604,  //  0012  OR	R3	R3	R4
      0x90020003,  //  0013  SETMBR	R0	K0	R3
      0x8C0C0505,  //  0014  GETMET	R3	R2	K5
      0x88140100,  //  0015  GETMBR	R5	R0	K0
      0x58180006,  //  0016  LDCONST	R6	K6
      0x7C0C0600,  //  0017  CALL	R3	3
      0x8C0C0505,  //  0018  GETMET	R3	R2	K5
      0x88140107,  //  0019  GETMBR	R5	R0	K7
      0x78160001,  //  001A  JMPF	R5	#001D
      0x88140107,  //  001B  GETMBR	R5	R0	K7
      0x70020000,  //  001C  JMP		#001E
      0x58140001,  //  001D  LDCONST	R5	K1
      0x58180008,  //  001E  LDCONST	R6	K8
      0x7C0C0600,  //  001F  CALL	R3	3
      0x880C0109,  //  0020  GETMBR	R3	R0	K9
      0x4C100000,  //  0021  LDNIL	R4
      0x1C0C0604,  //  0022  EQ	R3	R3	R4
      0x780E0013,  //  0023  JMPF	R3	#0038
      0x90021301,  //  0024  SETMBR	R0	K9	K1
      0x880C010A,  //  0025  GETMBR	R3	R0	K10
      0x780E0003,  //  0026  JMPF	R3	#002B
      0x880C0109,  //  0027  GETMBR	R3	R0	K9
      0x5412007F,  //  0028  LDINT	R4	128
      0x300C0604,  //  0029  OR	R3	R3	R4
      0x90021203,  //  002A  SETMBR	R0	K9	R3
      0x880C010B,  //  002B  GETMBR	R3	R0	K11
      0x780E0003,  //  002C  JMPF	R3	#0031
      0x880C0109,  //  002D  GETMBR	R3	R0	K9
      0x5412003F,  //  002E  LDINT	R4	64
      0x300C0604,  //  002F  OR	R3	R3	R4
      0x90021203,  //  0030  SETMBR	R0	K9	R3
      0x880C010C,  //  0031  GETMBR	R3	R0	K12
      0x780E0004,  //  0032  JMPF	R3	#0038
      0x880C0109,  //  0033  GETMBR	R3	R0	K9
      0x8810010C,  //  0034  GETMBR	R4	R0	K12
      0x2C100904,  //  0035  AND	R4	R4	K4
      0x300C0604,  //  0036  OR	R3	R3	R4
      0x90021203,  //  0037  SETMBR	R0	K9	R3
      0x8C0C0505,  //  0038  GETMET	R3	R2	K5
      0x88140109,  //  0039  GETMBR	R5	R0	K9
      0x58180006,  //  003A  LDCONST	R6	K6
      0x7C0C0600,  //  003B  CALL	R3	3
      0x8C0C0505,  //  003C  GETMET	R3	R2	K5
      0x8814010D,  //  003D  GETMBR	R5	R0	K13
      0x541A0003,  //  003E  LDINT	R6	4
      0x7C0C0600,  //  003F  CALL	R3	3
      0x880C0102,  //  0040  GETMBR	R3	R0	K2
      0x780E0001,  //  0041  JMPF	R3	#0044
      0x880C010E,  //  0042  GETMBR	R3	R0	K14
      0x400C0403,  //  0043  CONNECT	R3	R2	R3
      0x880C0103,  //  0044  GETMBR	R3	R0	K3
      0x1C0C0706,  //  0045  EQ	R3	R3	K6
      0x780E0001,  //  0046  JMPF	R3	#0049
      0x880C010F,  //  0047  GETMBR	R3	R0	K15
      0x400C0403,  //  0048  CONNECT	R3	R2	R3
      0x880C0103,  //  0049  GETMBR	R3	R0	K3
      0x1C0C0708,  //  004A  EQ	R3	R3	K8
      0x780E0003,  //  004B  JMPF	R3	#0050
      0x8C0C0505,  //  004C  GETMET	R3	R2	K5
      0x88140110,  //  004D  GETMBR	R5	R0	K16
      0x58180008,  //  004E  LDCONST	R6	K8
      0x7C0C0600,  //  004F  CALL	R3	3
      0x600C000C,  //  0050  GETGBL	R3	G12
      0x5C100400,  //  0051  MOVE	R4	R2
      0x7C0C0200,  //  0052  CALL	R3	1
      0x90022203,  //  0053  SETMBR	R0	K17	R3
      0x880C0112,  //  0054  GETMBR	R3	R0	K18
      0x4C100000,  //  0055  LDNIL	R4
      0x1C0C0604,  //  0056  EQ	R3	R3	R4
      0x780E0016,  //  0057  JMPF	R3	#006F
      0x90022501,  //  0058  SETMBR	R0	K18	K1
      0x880C0113,  //  0059  GETMBR	R3	R0	K19
      0x780E0003,  //  005A  JMPF	R3	#005F
      0x880C0112,  //  005B  GETMBR	R3	R0	K18
      0x5412000F,  //  005C  LDINT	R4	16
      0x300C0604,  //  005D  OR	R3	R3	R4
      0x90022403,  //  005E  SETMBR	R0	K18	R3
      0x880C0114,  //  005F  GETMBR	R3	R0	K20
      0x780E0003,  //  0060  JMPF	R3	#0065
      0x880C0112,  //  0061  GETMBR	R3	R0	K18
      0x54120003,  //  0062  LDINT	R4	4
      0x300C0604,  //  0063  OR	R3	R3	R4
      0x90022403,  //  0064  SETMBR	R0	K18	R3
      0x880C0115,  //  0065  GETMBR	R3	R0	K21
      0x780E0002,  //  0066  JMPF	R3	#006A
      0x880C0112,  //  0067  GETMBR	R3	R0	K18
      0x300C0708,  //  0068  OR	R3	R3	K8
      0x90022403,  //  0069  SETMBR	R0	K18	R3
      0x880C0116,  //  006A  GETMBR	R3	R0	K22
      0x780E0002,  //  006B  JMPF	R3	#006F
      0x880C0112,  //  006C  GETMBR	R3	R0	K18
      0x300C0706,  //  006D  OR	R3	R3	K6
      0x90022403,  //  006E  SETMBR	R0	K18	R3
      0x8C0C0505,  //  006F  GETMET	R3	R2	K5
      0x88140112,  //  0070  GETMBR	R5	R0	K18
      0x58180006,  //  0071  LDCONST	R6	K6
      0x7C0C0600,  //  0072  CALL	R3	3
      0x8C0C0505,  //  0073  GETMET	R3	R2	K5
      0x88140117,  //  0074  GETMBR	R5	R0	K23
      0x58180006,  //  0075  LDCONST	R6	K6
      0x7C0C0600,  //  0076  CALL	R3	3
      0x8C0C0505,  //  0077  GETMET	R3	R2	K5
      0x88140118,  //  0078  GETMBR	R5	R0	K24
      0x541AFFFE,  //  0079  LDINT	R6	65535
      0x2C140A06,  //  007A  AND	R5	R5	R6
      0x58180008,  //  007B  LDCONST	R6	K8
      0x7C0C0600,  //  007C  CALL	R3	3
      0x8C0C0505,  //  007D  GETMET	R3	R2	K5
      0x88140119,  //  007E  GETMBR	R5	R0	K25
      0x58180008,  //  007F  LDCONST	R6	K8
      0x7C0C0600,  //  0080  CALL	R3	3
      0x880C0115,  //  0081  GETMBR	R3	R0	K21
      0x780E0003,  //  0082  JMPF	R3	#0087
      0x8C0C0505,  //  0083  GETMET	R3	R2	K5
      0x8814011A,  //  0084  GETMBR	R5	R0	K26
      0x541A0003,  //  0085  LDINT	R6	4
      0x7C0C0600,  //  0086  CALL	R3	3
      0x600C000C,  //  0087  GETGBL	R3	G12
      0x5C100400,  //  0088  MOVE	R4	R2
      0x7C0C0200,  //  0089  CALL	R3	1
      0x90023603,  //  008A  SETMBR	R0	K27	R3
      0x78060000,  //  008B  JMPF	R1	#008D
      0x400C0401,  //  008C  CONNECT	R3	R2	R1
      0x8C0C011C,  //  008D  GETMET	R3	R0	K28
      0x5C140400,  //  008E  MOVE	R5	R2
      0x7C0C0400,  //  008F  CALL	R3	2
      0x90023A02,  //  0090  SETMBR	R0	K29	R2
      0x80040400,  //  0091  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: encrypt
********************************************************************/
be_local_closure(Matter_Frame_encrypt,   /* name */
  be_nested_proto(
    15,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[17]) {     /* constants */
    /* K0   */  be_nested_str_weak(crypto),
    /* K1   */  be_nested_str_weak(raw),
    /* K2   */  be_nested_str_weak(session),
    /* K3   */  be_nested_str_weak(get_r2i),
    /* K4   */  be_const_int(0),
    /* K5   */  be_nested_str_weak(payload_idx),
    /* K6   */  be_const_int(1),
    /* K7   */  be_const_int(2147483647),
    /* K8   */  be_nested_str_weak(add),
    /* K9   */  be_nested_str_weak(flags),
    /* K10  */  be_nested_str_weak(message_counter),
    /* K11  */  be_nested_str_weak(is_CASE),
    /* K12  */  be_nested_str_weak(get_device_id),
    /* K13  */  be_nested_str_weak(resize),
    /* K14  */  be_nested_str_weak(AES_CCM),
    /* K15  */  be_nested_str_weak(encrypt),
    /* K16  */  be_nested_str_weak(tag),
    }),
    be_str_weak(encrypt),
    &be_const_str_solidified,
    ( &(const binstruction[57]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x88080101,  //  0001  GETMBR	R2	R0	K1
      0x880C0102,  //  0002  GETMBR	R3	R0	K2
      0x8C100703,  //  0003  GETMET	R4	R3	K3
      0x7C100200,  //  0004  CALL	R4	1
      0x88140105,  //  0005  GETMBR	R5	R0	K5
      0x04140B06,  //  0006  SUB	R5	R5	K6
      0x40160805,  //  0007  CONNECT	R5	K4	R5
      0x94140405,  //  0008  GETIDX	R5	R2	R5
      0x88180105,  //  0009  GETMBR	R6	R0	K5
      0x40180D07,  //  000A  CONNECT	R6	R6	K7
      0x94180406,  //  000B  GETIDX	R6	R2	R6
      0x601C0015,  //  000C  GETGBL	R7	G21
      0x7C1C0000,  //  000D  CALL	R7	0
      0x8C200F08,  //  000E  GETMET	R8	R7	K8
      0x88280109,  //  000F  GETMBR	R10	R0	K9
      0x582C0006,  //  0010  LDCONST	R11	K6
      0x7C200600,  //  0011  CALL	R8	3
      0x8C200F08,  //  0012  GETMET	R8	R7	K8
      0x8828010A,  //  0013  GETMBR	R10	R0	K10
      0x542E0003,  //  0014  LDINT	R11	4
      0x7C200600,  //  0015  CALL	R8	3
      0x8C20070B,  //  0016  GETMET	R8	R3	K11
      0x7C200200,  //  0017  CALL	R8	1
      0x78220005,  //  0018  JMPF	R8	#001F
      0x8C20070C,  //  0019  GETMET	R8	R3	K12
      0x7C200200,  //  001A  CALL	R8	1
      0x78220002,  //  001B  JMPF	R8	#001F
      0x8C20070C,  //  001C  GETMET	R8	R3	K12
      0x7C200200,  //  001D  CALL	R8	1
      0x40200E08,  //  001E  CONNECT	R8	R7	R8
      0x8C200F0D,  //  001F  GETMET	R8	R7	K13
      0x542A000C,  //  0020  LDINT	R10	13
      0x7C200400,  //  0021  CALL	R8	2
      0x8C20030E,  //  0022  GETMET	R8	R1	K14
      0x5C280800,  //  0023  MOVE	R10	R4
      0x5C2C0E00,  //  0024  MOVE	R11	R7
      0x5C300A00,  //  0025  MOVE	R12	R5
      0x6034000C,  //  0026  GETGBL	R13	G12
      0x5C380C00,  //  0027  MOVE	R14	R6
      0x7C340200,  //  0028  CALL	R13	1
      0x543A000F,  //  0029  LDINT	R14	16
      0x7C200C00,  //  002A  CALL	R8	6
      0x8C24110F,  //  002B  GETMET	R9	R8	K15
      0x5C2C0C00,  //  002C  MOVE	R11	R6
      0x7C240400,  //  002D  CALL	R9	2
      0x8C281110,  //  002E  GETMET	R10	R8	K16
      0x7C280200,  //  002F  CALL	R10	1
      0x882C0101,  //  0030  GETMBR	R11	R0	K1
      0x8C2C170D,  //  0031  GETMET	R11	R11	K13
      0x88340105,  //  0032  GETMBR	R13	R0	K5
      0x7C2C0400,  //  0033  CALL	R11	2
      0x882C0101,  //  0034  GETMBR	R11	R0	K1
      0x402C1609,  //  0035  CONNECT	R11	R11	R9
      0x882C0101,  //  0036  GETMBR	R11	R0	K1
      0x402C160A,  //  0037  CONNECT	R11	R11	R10
      0x80000000,  //  0038  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: debug
********************************************************************/
be_local_closure(Matter_Frame_debug,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 5]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(Frame),
    /* K2   */  be_nested_str_weak(message_handler),
    /* K3   */  be_nested_str_weak(decode_header),
    /* K4   */  be_nested_str_weak(decode_payload),
    }),
    be_str_weak(debug),
    &be_const_str_solidified,
    ( &(const binstruction[10]) {  /* code */
      0x80000400,  //  0000  RET	0
      0xB80A0000,  //  0001  GETNGBL	R2	K0
      0x8C080501,  //  0002  GETMET	R2	R2	K1
      0x88100102,  //  0003  GETMBR	R4	R0	K2
      0x5C140200,  //  0004  MOVE	R5	R1
      0x7C080600,  //  0005  CALL	R2	3
      0x8C0C0503,  //  0006  GETMET	R3	R2	K3
      0x7C0C0200,  //  0007  CALL	R3	1
      0x8C0C0504,  //  0008  GETMET	R3	R2	K4
      0x7C0C0200,  //  0009  CALL	R3	1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: build_standalone_ack
********************************************************************/
be_local_closure(Matter_Frame_build_standalone_ack,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[21]) {     /* constants */
    /* K0   */  be_nested_str_weak(message_handler),
    /* K1   */  be_nested_str_weak(remote_ip),
    /* K2   */  be_nested_str_weak(remote_port),
    /* K3   */  be_nested_str_weak(flag_s),
    /* K4   */  be_nested_str_weak(flag_dsiz),
    /* K5   */  be_const_int(1),
    /* K6   */  be_nested_str_weak(dest_node_id_8),
    /* K7   */  be_nested_str_weak(source_node_id),
    /* K8   */  be_const_int(0),
    /* K9   */  be_nested_str_weak(session),
    /* K10  */  be_nested_str_weak(message_counter),
    /* K11  */  be_nested_str_weak(counter_snd_next),
    /* K12  */  be_nested_str_weak(local_session_id),
    /* K13  */  be_nested_str_weak(initiator_session_id),
    /* K14  */  be_nested_str_weak(x_flag_i),
    /* K15  */  be_nested_str_weak(opcode),
    /* K16  */  be_nested_str_weak(exchange_id),
    /* K17  */  be_nested_str_weak(protocol_id),
    /* K18  */  be_nested_str_weak(x_flag_a),
    /* K19  */  be_nested_str_weak(ack_message_counter),
    /* K20  */  be_nested_str_weak(x_flag_r),
    }),
    be_str_weak(build_standalone_ack),
    &be_const_str_solidified,
    ( &(const binstruction[45]) {  /* code */
      0x60080006,  //  0000  GETGBL	R2	G6
      0x5C0C0000,  //  0001  MOVE	R3	R0
      0x7C080200,  //  0002  CALL	R2	1
      0x880C0100,  //  0003  GETMBR	R3	R0	K0
      0x7C080200,  //  0004  CALL	R2	1
      0x880C0101,  //  0005  GETMBR	R3	R0	K1
      0x900A0203,  //  0006  SETMBR	R2	K1	R3
      0x880C0102,  //  0007  GETMBR	R3	R0	K2
      0x900A0403,  //  0008  SETMBR	R2	K2	R3
      0x880C0103,  //  0009  GETMBR	R3	R0	K3
      0x780E0003,  //  000A  JMPF	R3	#000F
      0x900A0905,  //  000B  SETMBR	R2	K4	K5
      0x880C0107,  //  000C  GETMBR	R3	R0	K7
      0x900A0C03,  //  000D  SETMBR	R2	K6	R3
      0x70020000,  //  000E  JMP		#0010
      0x900A0908,  //  000F  SETMBR	R2	K4	K8
      0x880C0109,  //  0010  GETMBR	R3	R0	K9
      0x900A1203,  //  0011  SETMBR	R2	K9	R3
      0x880C0109,  //  0012  GETMBR	R3	R0	K9
      0x8C0C070B,  //  0013  GETMET	R3	R3	K11
      0x7C0C0200,  //  0014  CALL	R3	1
      0x900A1403,  //  0015  SETMBR	R2	K10	R3
      0x880C0109,  //  0016  GETMBR	R3	R0	K9
      0x880C070D,  //  0017  GETMBR	R3	R3	K13
      0x900A1803,  //  0018  SETMBR	R2	K12	R3
      0x880C010E,  //  0019  GETMBR	R3	R0	K14
      0x780E0001,  //  001A  JMPF	R3	#001D
      0x580C0008,  //  001B  LDCONST	R3	K8
      0x70020000,  //  001C  JMP		#001E
      0x580C0005,  //  001D  LDCONST	R3	K5
      0x900A1C03,  //  001E  SETMBR	R2	K14	R3
      0x540E000F,  //  001F  LDINT	R3	16
      0x900A1E03,  //  0020  SETMBR	R2	K15	R3
      0x880C0110,  //  0021  GETMBR	R3	R0	K16
      0x900A2003,  //  0022  SETMBR	R2	K16	R3
      0x900A2308,  //  0023  SETMBR	R2	K17	K8
      0x900A2505,  //  0024  SETMBR	R2	K18	K5
      0x880C010A,  //  0025  GETMBR	R3	R0	K10
      0x900A2603,  //  0026  SETMBR	R2	K19	R3
      0x78060001,  //  0027  JMPF	R1	#002A
      0x580C0005,  //  0028  LDCONST	R3	K5
      0x70020000,  //  0029  JMP		#002B
      0x580C0008,  //  002A  LDCONST	R3	K8
      0x900A2803,  //  002B  SETMBR	R2	K20	R3
      0x80040400,  //  002C  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: build_response
********************************************************************/
be_local_closure(Matter_Frame_build_response,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    4,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[30]) {     /* constants */
    /* K0   */  be_nested_str_weak(message_handler),
    /* K1   */  be_nested_str_weak(remote_ip),
    /* K2   */  be_nested_str_weak(remote_port),
    /* K3   */  be_nested_str_weak(flag_s),
    /* K4   */  be_nested_str_weak(flag_dsiz),
    /* K5   */  be_const_int(1),
    /* K6   */  be_nested_str_weak(dest_node_id_8),
    /* K7   */  be_nested_str_weak(source_node_id),
    /* K8   */  be_const_int(0),
    /* K9   */  be_nested_str_weak(session),
    /* K10  */  be_nested_str_weak(local_session_id),
    /* K11  */  be_nested_str_weak(initiator_session_id),
    /* K12  */  be_nested_str_weak(message_counter),
    /* K13  */  be_nested_str_weak(counter_snd_next),
    /* K14  */  be_nested_str_weak(_counter_insecure_snd),
    /* K15  */  be_nested_str_weak(next),
    /* K16  */  be_nested_str_weak(x_flag_i),
    /* K17  */  be_nested_str_weak(opcode),
    /* K18  */  be_nested_str_weak(exchange_id),
    /* K19  */  be_nested_str_weak(protocol_id),
    /* K20  */  be_nested_str_weak(x_flag_r),
    /* K21  */  be_nested_str_weak(x_flag_a),
    /* K22  */  be_nested_str_weak(ack_message_counter),
    /* K23  */  be_nested_str_weak(matter),
    /* K24  */  be_nested_str_weak(get_opcode_name),
    /* K25  */  be_nested_str_weak(0x_X2502X),
    /* K26  */  be_nested_str_weak(tasmota),
    /* K27  */  be_nested_str_weak(log),
    /* K28  */  be_nested_str_weak(MTR_X3A_X20_X3CReplied_X20_X20_X20_X28_X256i_X29_X20_X25s),
    /* K29  */  be_const_int(3),
    }),
    be_str_weak(build_response),
    &be_const_str_solidified,
    ( &(const binstruction[91]) {  /* code */
      0x4C100000,  //  0000  LDNIL	R4
      0x1C100604,  //  0001  EQ	R4	R3	R4
      0x78120005,  //  0002  JMPF	R4	#0009
      0x60100006,  //  0003  GETGBL	R4	G6
      0x5C140000,  //  0004  MOVE	R5	R0
      0x7C100200,  //  0005  CALL	R4	1
      0x88140100,  //  0006  GETMBR	R5	R0	K0
      0x7C100200,  //  0007  CALL	R4	1
      0x5C0C0800,  //  0008  MOVE	R3	R4
      0x88100101,  //  0009  GETMBR	R4	R0	K1
      0x900E0204,  //  000A  SETMBR	R3	K1	R4
      0x88100102,  //  000B  GETMBR	R4	R0	K2
      0x900E0404,  //  000C  SETMBR	R3	K2	R4
      0x88100103,  //  000D  GETMBR	R4	R0	K3
      0x78120003,  //  000E  JMPF	R4	#0013
      0x900E0905,  //  000F  SETMBR	R3	K4	K5
      0x88100107,  //  0010  GETMBR	R4	R0	K7
      0x900E0C04,  //  0011  SETMBR	R3	K6	R4
      0x70020000,  //  0012  JMP		#0014
      0x900E0908,  //  0013  SETMBR	R3	K4	K8
      0x88100109,  //  0014  GETMBR	R4	R0	K9
      0x900E1204,  //  0015  SETMBR	R3	K9	R4
      0x8810010A,  //  0016  GETMBR	R4	R0	K10
      0x20100908,  //  0017  NE	R4	R4	K8
      0x7812000D,  //  0018  JMPF	R4	#0027
      0x88100109,  //  0019  GETMBR	R4	R0	K9
      0x7812000B,  //  001A  JMPF	R4	#0027
      0x88100109,  //  001B  GETMBR	R4	R0	K9
      0x8810090B,  //  001C  GETMBR	R4	R4	K11
      0x20100908,  //  001D  NE	R4	R4	K8
      0x78120007,  //  001E  JMPF	R4	#0027
      0x88100109,  //  001F  GETMBR	R4	R0	K9
      0x8C10090D,  //  0020  GETMET	R4	R4	K13
      0x7C100200,  //  0021  CALL	R4	1
      0x900E1804,  //  0022  SETMBR	R3	K12	R4
      0x88100109,  //  0023  GETMBR	R4	R0	K9
      0x8810090B,  //  0024  GETMBR	R4	R4	K11
      0x900E1404,  //  0025  SETMBR	R3	K10	R4
      0x70020005,  //  0026  JMP		#002D
      0x88100109,  //  0027  GETMBR	R4	R0	K9
      0x8810090E,  //  0028  GETMBR	R4	R4	K14
      0x8C10090F,  //  0029  GETMET	R4	R4	K15
      0x7C100200,  //  002A  CALL	R4	1
      0x900E1804,  //  002B  SETMBR	R3	K12	R4
      0x900E1508,  //  002C  SETMBR	R3	K10	K8
      0x88100110,  //  002D  GETMBR	R4	R0	K16
      0x78120001,  //  002E  JMPF	R4	#0031
      0x58100008,  //  002F  LDCONST	R4	K8
      0x70020000,  //  0030  JMP		#0032
      0x58100005,  //  0031  LDCONST	R4	K5
      0x900E2004,  //  0032  SETMBR	R3	K16	R4
      0x900E2201,  //  0033  SETMBR	R3	K17	R1
      0x88100112,  //  0034  GETMBR	R4	R0	K18
      0x900E2404,  //  0035  SETMBR	R3	K18	R4
      0x88100113,  //  0036  GETMBR	R4	R0	K19
      0x900E2604,  //  0037  SETMBR	R3	K19	R4
      0x88100114,  //  0038  GETMBR	R4	R0	K20
      0x78120002,  //  0039  JMPF	R4	#003D
      0x900E2B05,  //  003A  SETMBR	R3	K21	K5
      0x8810010C,  //  003B  GETMBR	R4	R0	K12
      0x900E2C04,  //  003C  SETMBR	R3	K22	R4
      0x780A0001,  //  003D  JMPF	R2	#0040
      0x58100005,  //  003E  LDCONST	R4	K5
      0x70020000,  //  003F  JMP		#0041
      0x58100008,  //  0040  LDCONST	R4	K8
      0x900E2804,  //  0041  SETMBR	R3	K20	R4
      0x8810070A,  //  0042  GETMBR	R4	R3	K10
      0x1C100908,  //  0043  EQ	R4	R4	K8
      0x78120014,  //  0044  JMPF	R4	#005A
      0xB8122E00,  //  0045  GETNGBL	R4	K23
      0x8C100918,  //  0046  GETMET	R4	R4	K24
      0x88180711,  //  0047  GETMBR	R6	R3	K17
      0x7C100400,  //  0048  CALL	R4	2
      0x5C140800,  //  0049  MOVE	R5	R4
      0x74160004,  //  004A  JMPT	R5	#0050
      0x60140018,  //  004B  GETGBL	R5	G24
      0x58180019,  //  004C  LDCONST	R6	K25
      0x881C0711,  //  004D  GETMBR	R7	R3	K17
      0x7C140400,  //  004E  CALL	R5	2
      0x5C100A00,  //  004F  MOVE	R4	R5
      0xB8163400,  //  0050  GETNGBL	R5	K26
      0x8C140B1B,  //  0051  GETMET	R5	R5	K27
      0x601C0018,  //  0052  GETGBL	R7	G24
      0x5820001C,  //  0053  LDCONST	R8	K28
      0x88240709,  //  0054  GETMBR	R9	R3	K9
      0x8824130A,  //  0055  GETMBR	R9	R9	K10
      0x5C280800,  //  0056  MOVE	R10	R4
      0x7C1C0600,  //  0057  CALL	R7	3
      0x5820001D,  //  0058  LDCONST	R8	K29
      0x7C140600,  //  0059  CALL	R5	3
      0x80040600,  //  005A  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: initiate_response
********************************************************************/
be_local_closure(Matter_Frame_initiate_response,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    5,                          /* argc */
    4,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[23]) {     /* constants */
    /* K0   */  be_const_class(be_class_Matter_Frame),
    /* K1   */  be_nested_str_weak(matter),
    /* K2   */  be_nested_str_weak(Frame),
    /* K3   */  be_nested_str_weak(remote_ip),
    /* K4   */  be_nested_str_weak(_ip),
    /* K5   */  be_nested_str_weak(remote_port),
    /* K6   */  be_nested_str_weak(_port),
    /* K7   */  be_nested_str_weak(flag_dsiz),
    /* K8   */  be_const_int(0),
    /* K9   */  be_nested_str_weak(session),
    /* K10  */  be_nested_str_weak(initiator_session_id),
    /* K11  */  be_nested_str_weak(message_counter),
    /* K12  */  be_nested_str_weak(counter_snd_next),
    /* K13  */  be_nested_str_weak(local_session_id),
    /* K14  */  be_nested_str_weak(_counter_insecure_snd),
    /* K15  */  be_nested_str_weak(next),
    /* K16  */  be_nested_str_weak(x_flag_i),
    /* K17  */  be_const_int(1),
    /* K18  */  be_nested_str_weak(opcode),
    /* K19  */  be_nested_str_weak(_exchange_id),
    /* K20  */  be_nested_str_weak(exchange_id),
    /* K21  */  be_nested_str_weak(protocol_id),
    /* K22  */  be_nested_str_weak(x_flag_r),
    }),
    be_str_weak(initiate_response),
    &be_const_str_solidified,
    ( &(const binstruction[46]) {  /* code */
      0x58140000,  //  0000  LDCONST	R5	K0
      0x4C180000,  //  0001  LDNIL	R6
      0x1C180806,  //  0002  EQ	R6	R4	R6
      0x781A0004,  //  0003  JMPF	R6	#0009
      0xB81A0200,  //  0004  GETNGBL	R6	K1
      0x8C180D02,  //  0005  GETMET	R6	R6	K2
      0x5C200000,  //  0006  MOVE	R8	R0
      0x7C180400,  //  0007  CALL	R6	2
      0x5C100C00,  //  0008  MOVE	R4	R6
      0x88180304,  //  0009  GETMBR	R6	R1	K4
      0x90120606,  //  000A  SETMBR	R4	K3	R6
      0x88180306,  //  000B  GETMBR	R6	R1	K6
      0x90120A06,  //  000C  SETMBR	R4	K5	R6
      0x90120F08,  //  000D  SETMBR	R4	K7	K8
      0x90121201,  //  000E  SETMBR	R4	K9	R1
      0x78060008,  //  000F  JMPF	R1	#0019
      0x8818030A,  //  0010  GETMBR	R6	R1	K10
      0x20180D08,  //  0011  NE	R6	R6	K8
      0x781A0005,  //  0012  JMPF	R6	#0019
      0x8C18030C,  //  0013  GETMET	R6	R1	K12
      0x7C180200,  //  0014  CALL	R6	1
      0x90121606,  //  0015  SETMBR	R4	K11	R6
      0x8818030A,  //  0016  GETMBR	R6	R1	K10
      0x90121A06,  //  0017  SETMBR	R4	K13	R6
      0x70020004,  //  0018  JMP		#001E
      0x8818030E,  //  0019  GETMBR	R6	R1	K14
      0x8C180D0F,  //  001A  GETMET	R6	R6	K15
      0x7C180200,  //  001B  CALL	R6	1
      0x90121606,  //  001C  SETMBR	R4	K11	R6
      0x90121B08,  //  001D  SETMBR	R4	K13	K8
      0x90122111,  //  001E  SETMBR	R4	K16	K17
      0x90122402,  //  001F  SETMBR	R4	K18	R2
      0x88180313,  //  0020  GETMBR	R6	R1	K19
      0x00180D11,  //  0021  ADD	R6	R6	K17
      0x90062606,  //  0022  SETMBR	R1	K19	R6
      0x88180313,  //  0023  GETMBR	R6	R1	K19
      0x541EFFFF,  //  0024  LDINT	R7	65536
      0x30180C07,  //  0025  OR	R6	R6	R7
      0x90122806,  //  0026  SETMBR	R4	K20	R6
      0x90122B11,  //  0027  SETMBR	R4	K21	K17
      0x780E0001,  //  0028  JMPF	R3	#002B
      0x58180011,  //  0029  LDCONST	R6	K17
      0x70020000,  //  002A  JMP		#002C
      0x58180008,  //  002B  LDCONST	R6	K8
      0x90122C06,  //  002C  SETMBR	R4	K22	R6
      0x80040800,  //  002D  RET	1	R4
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: decode_header
********************************************************************/
be_local_closure(Matter_Frame_decode_header,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[21]) {     /* constants */
    /* K0   */  be_const_int(0),
    /* K1   */  be_nested_str_weak(raw),
    /* K2   */  be_nested_str_weak(flags),
    /* K3   */  be_nested_str_weak(get),
    /* K4   */  be_const_int(1),
    /* K5   */  be_nested_str_weak(flag_s),
    /* K6   */  be_nested_str_weak(getbits),
    /* K7   */  be_const_int(2),
    /* K8   */  be_nested_str_weak(flag_dsiz),
    /* K9   */  be_const_int(3),
    /* K10  */  be_nested_str_weak(sec_flags),
    /* K11  */  be_nested_str_weak(sec_p),
    /* K12  */  be_nested_str_weak(sec_c),
    /* K13  */  be_nested_str_weak(sec_mx),
    /* K14  */  be_nested_str_weak(sec_sesstype),
    /* K15  */  be_nested_str_weak(local_session_id),
    /* K16  */  be_nested_str_weak(message_counter),
    /* K17  */  be_nested_str_weak(source_node_id),
    /* K18  */  be_nested_str_weak(dest_node_id_8),
    /* K19  */  be_nested_str_weak(dest_node_id_2),
    /* K20  */  be_nested_str_weak(payload_idx),
    }),
    be_str_weak(decode_header),
    &be_const_str_solidified,
    ( &(const binstruction[121]) {  /* code */
      0x58040000,  //  0000  LDCONST	R1	K0
      0x88080101,  //  0001  GETMBR	R2	R0	K1
      0x8C0C0503,  //  0002  GETMET	R3	R2	K3
      0x58140000,  //  0003  LDCONST	R5	K0
      0x58180004,  //  0004  LDCONST	R6	K4
      0x7C0C0600,  //  0005  CALL	R3	3
      0x90020403,  //  0006  SETMBR	R0	K2	R3
      0x880C0102,  //  0007  GETMBR	R3	R0	K2
      0x541200F7,  //  0008  LDINT	R4	248
      0x2C0C0604,  //  0009  AND	R3	R3	R4
      0x200C0700,  //  000A  NE	R3	R3	K0
      0x780E0001,  //  000B  JMPF	R3	#000E
      0x500C0000,  //  000C  LDBOOL	R3	0	0
      0x80040600,  //  000D  RET	1	R3
      0x8C0C0506,  //  000E  GETMET	R3	R2	K6
      0x58140007,  //  000F  LDCONST	R5	K7
      0x58180004,  //  0010  LDCONST	R6	K4
      0x7C0C0600,  //  0011  CALL	R3	3
      0x90020A03,  //  0012  SETMBR	R0	K5	R3
      0x8C0C0506,  //  0013  GETMET	R3	R2	K6
      0x58140000,  //  0014  LDCONST	R5	K0
      0x58180007,  //  0015  LDCONST	R6	K7
      0x7C0C0600,  //  0016  CALL	R3	3
      0x90021003,  //  0017  SETMBR	R0	K8	R3
      0x880C0108,  //  0018  GETMBR	R3	R0	K8
      0x1C0C0709,  //  0019  EQ	R3	R3	K9
      0x780E0001,  //  001A  JMPF	R3	#001D
      0x500C0000,  //  001B  LDBOOL	R3	0	0
      0x80040600,  //  001C  RET	1	R3
      0x8C0C0503,  //  001D  GETMET	R3	R2	K3
      0x58140009,  //  001E  LDCONST	R5	K9
      0x58180004,  //  001F  LDCONST	R6	K4
      0x7C0C0600,  //  0020  CALL	R3	3
      0x90021403,  //  0021  SETMBR	R0	K10	R3
      0x8C0C0506,  //  0022  GETMET	R3	R2	K6
      0x54160007,  //  0023  LDINT	R5	8
      0x08161205,  //  0024  MUL	R5	K9	R5
      0x541A0006,  //  0025  LDINT	R6	7
      0x00140A06,  //  0026  ADD	R5	R5	R6
      0x58180004,  //  0027  LDCONST	R6	K4
      0x7C0C0600,  //  0028  CALL	R3	3
      0x90021603,  //  0029  SETMBR	R0	K11	R3
      0x8C0C0506,  //  002A  GETMET	R3	R2	K6
      0x54160007,  //  002B  LDINT	R5	8
      0x08161205,  //  002C  MUL	R5	K9	R5
      0x541A0005,  //  002D  LDINT	R6	6
      0x00140A06,  //  002E  ADD	R5	R5	R6
      0x58180004,  //  002F  LDCONST	R6	K4
      0x7C0C0600,  //  0030  CALL	R3	3
      0x90021803,  //  0031  SETMBR	R0	K12	R3
      0x8C0C0506,  //  0032  GETMET	R3	R2	K6
      0x54160007,  //  0033  LDINT	R5	8
      0x08161205,  //  0034  MUL	R5	K9	R5
      0x541A0004,  //  0035  LDINT	R6	5
      0x00140A06,  //  0036  ADD	R5	R5	R6
      0x58180004,  //  0037  LDCONST	R6	K4
      0x7C0C0600,  //  0038  CALL	R3	3
      0x90021A03,  //  0039  SETMBR	R0	K13	R3
      0x8C0C0506,  //  003A  GETMET	R3	R2	K6
      0x54160007,  //  003B  LDINT	R5	8
      0x08161205,  //  003C  MUL	R5	K9	R5
      0x58180007,  //  003D  LDCONST	R6	K7
      0x7C0C0600,  //  003E  CALL	R3	3
      0x90021C03,  //  003F  SETMBR	R0	K14	R3
      0x880C010E,  //  0040  GETMBR	R3	R0	K14
      0x240C0704,  //  0041  GT	R3	R3	K4
      0x780E0001,  //  0042  JMPF	R3	#0045
      0x500C0000,  //  0043  LDBOOL	R3	0	0
      0x80040600,  //  0044  RET	1	R3
      0x8C0C0503,  //  0045  GETMET	R3	R2	K3
      0x58140004,  //  0046  LDCONST	R5	K4
      0x58180007,  //  0047  LDCONST	R6	K7
      0x7C0C0600,  //  0048  CALL	R3	3
      0x90021E03,  //  0049  SETMBR	R0	K15	R3
      0x8C0C0503,  //  004A  GETMET	R3	R2	K3
      0x54160003,  //  004B  LDINT	R5	4
      0x541A0003,  //  004C  LDINT	R6	4
      0x7C0C0600,  //  004D  CALL	R3	3
      0x90022003,  //  004E  SETMBR	R0	K16	R3
      0x540E0007,  //  004F  LDINT	R3	8
      0x00040203,  //  0050  ADD	R1	R1	R3
      0x880C0105,  //  0051  GETMBR	R3	R0	K5
      0x780E0006,  //  0052  JMPF	R3	#005A
      0x540E0006,  //  0053  LDINT	R3	7
      0x000C0203,  //  0054  ADD	R3	R1	R3
      0x400C0203,  //  0055  CONNECT	R3	R1	R3
      0x940C0403,  //  0056  GETIDX	R3	R2	R3
      0x90022203,  //  0057  SETMBR	R0	K17	R3
      0x540E0007,  //  0058  LDINT	R3	8
      0x00040203,  //  0059  ADD	R1	R1	R3
      0x880C0108,  //  005A  GETMBR	R3	R0	K8
      0x1C0C0704,  //  005B  EQ	R3	R3	K4
      0x780E0007,  //  005C  JMPF	R3	#0065
      0x540E0006,  //  005D  LDINT	R3	7
      0x000C0203,  //  005E  ADD	R3	R1	R3
      0x400C0203,  //  005F  CONNECT	R3	R1	R3
      0x940C0403,  //  0060  GETIDX	R3	R2	R3
      0x90022403,  //  0061  SETMBR	R0	K18	R3
      0x540E0007,  //  0062  LDINT	R3	8
      0x00040203,  //  0063  ADD	R1	R1	R3
      0x70020008,  //  0064  JMP		#006E
      0x880C0108,  //  0065  GETMBR	R3	R0	K8
      0x1C0C0707,  //  0066  EQ	R3	R3	K7
      0x780E0005,  //  0067  JMPF	R3	#006E
      0x8C0C0503,  //  0068  GETMET	R3	R2	K3
      0x5C140200,  //  0069  MOVE	R5	R1
      0x58180007,  //  006A  LDCONST	R6	K7
      0x7C0C0600,  //  006B  CALL	R3	3
      0x90022603,  //  006C  SETMBR	R0	K19	R3
      0x00040307,  //  006D  ADD	R1	R1	K7
      0x880C010D,  //  006E  GETMBR	R3	R0	K13
      0x780E0005,  //  006F  JMPF	R3	#0076
      0x8C0C0503,  //  0070  GETMET	R3	R2	K3
      0x5C140200,  //  0071  MOVE	R5	R1
      0x58180007,  //  0072  LDCONST	R6	K7
      0x7C0C0600,  //  0073  CALL	R3	3
      0x00100707,  //  0074  ADD	R4	R3	K7
      0x00040204,  //  0075  ADD	R1	R1	R4
      0x90022801,  //  0076  SETMBR	R0	K20	R1
      0x500C0200,  //  0077  LDBOOL	R3	1	0
      0x80040600,  //  0078  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Matter_Frame_init,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    5,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 4]) {     /* constants */
    /* K0   */  be_nested_str_weak(message_handler),
    /* K1   */  be_nested_str_weak(raw),
    /* K2   */  be_nested_str_weak(remote_ip),
    /* K3   */  be_nested_str_weak(remote_port),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x90020001,  //  0000  SETMBR	R0	K0	R1
      0x90020202,  //  0001  SETMBR	R0	K1	R2
      0x90020403,  //  0002  SETMBR	R0	K2	R3
      0x90020604,  //  0003  SETMBR	R0	K3	R4
      0x80000000,  //  0004  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: decode_payload
********************************************************************/
be_local_closure(Matter_Frame_decode_payload,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[19]) {     /* constants */
    /* K0   */  be_nested_str_weak(payload_idx),
    /* K1   */  be_nested_str_weak(raw),
    /* K2   */  be_nested_str_weak(x_flags),
    /* K3   */  be_nested_str_weak(get),
    /* K4   */  be_const_int(1),
    /* K5   */  be_nested_str_weak(x_flag_v),
    /* K6   */  be_nested_str_weak(getbits),
    /* K7   */  be_nested_str_weak(x_flag_sx),
    /* K8   */  be_const_int(3),
    /* K9   */  be_nested_str_weak(x_flag_r),
    /* K10  */  be_const_int(2),
    /* K11  */  be_nested_str_weak(x_flag_a),
    /* K12  */  be_nested_str_weak(x_flag_i),
    /* K13  */  be_nested_str_weak(opcode),
    /* K14  */  be_nested_str_weak(exchange_id),
    /* K15  */  be_nested_str_weak(protocol_id),
    /* K16  */  be_nested_str_weak(vendor_id),
    /* K17  */  be_nested_str_weak(ack_message_counter),
    /* K18  */  be_nested_str_weak(app_payload_idx),
    }),
    be_str_weak(decode_payload),
    &be_const_str_solidified,
    ( &(const binstruction[93]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x88080101,  //  0001  GETMBR	R2	R0	K1
      0x8C0C0503,  //  0002  GETMET	R3	R2	K3
      0x5C140200,  //  0003  MOVE	R5	R1
      0x58180004,  //  0004  LDCONST	R6	K4
      0x7C0C0600,  //  0005  CALL	R3	3
      0x90020403,  //  0006  SETMBR	R0	K2	R3
      0x8C0C0506,  //  0007  GETMET	R3	R2	K6
      0x54160007,  //  0008  LDINT	R5	8
      0x08140205,  //  0009  MUL	R5	R1	R5
      0x541A0003,  //  000A  LDINT	R6	4
      0x00140A06,  //  000B  ADD	R5	R5	R6
      0x58180004,  //  000C  LDCONST	R6	K4
      0x7C0C0600,  //  000D  CALL	R3	3
      0x90020A03,  //  000E  SETMBR	R0	K5	R3
      0x8C0C0506,  //  000F  GETMET	R3	R2	K6
      0x54160007,  //  0010  LDINT	R5	8
      0x08140205,  //  0011  MUL	R5	R1	R5
      0x00140B08,  //  0012  ADD	R5	R5	K8
      0x58180004,  //  0013  LDCONST	R6	K4
      0x7C0C0600,  //  0014  CALL	R3	3
      0x90020E03,  //  0015  SETMBR	R0	K7	R3
      0x8C0C0506,  //  0016  GETMET	R3	R2	K6
      0x54160007,  //  0017  LDINT	R5	8
      0x08140205,  //  0018  MUL	R5	R1	R5
      0x00140B0A,  //  0019  ADD	R5	R5	K10
      0x58180004,  //  001A  LDCONST	R6	K4
      0x7C0C0600,  //  001B  CALL	R3	3
      0x90021203,  //  001C  SETMBR	R0	K9	R3
      0x8C0C0506,  //  001D  GETMET	R3	R2	K6
      0x54160007,  //  001E  LDINT	R5	8
      0x08140205,  //  001F  MUL	R5	R1	R5
      0x00140B04,  //  0020  ADD	R5	R5	K4
      0x58180004,  //  0021  LDCONST	R6	K4
      0x7C0C0600,  //  0022  CALL	R3	3
      0x90021603,  //  0023  SETMBR	R0	K11	R3
      0x8C0C0506,  //  0024  GETMET	R3	R2	K6
      0x54160007,  //  0025  LDINT	R5	8
      0x08140205,  //  0026  MUL	R5	R1	R5
      0x58180004,  //  0027  LDCONST	R6	K4
      0x7C0C0600,  //  0028  CALL	R3	3
      0x90021803,  //  0029  SETMBR	R0	K12	R3
      0x8C0C0503,  //  002A  GETMET	R3	R2	K3
      0x00140304,  //  002B  ADD	R5	R1	K4
      0x58180004,  //  002C  LDCONST	R6	K4
      0x7C0C0600,  //  002D  CALL	R3	3
      0x90021A03,  //  002E  SETMBR	R0	K13	R3
      0x8C0C0503,  //  002F  GETMET	R3	R2	K3
      0x0014030A,  //  0030  ADD	R5	R1	K10
      0x5818000A,  //  0031  LDCONST	R6	K10
      0x7C0C0600,  //  0032  CALL	R3	3
      0x90021C03,  //  0033  SETMBR	R0	K14	R3
      0x880C010C,  //  0034  GETMBR	R3	R0	K12
      0x740E0003,  //  0035  JMPT	R3	#003A
      0x880C010E,  //  0036  GETMBR	R3	R0	K14
      0x5412FFFF,  //  0037  LDINT	R4	65536
      0x300C0604,  //  0038  OR	R3	R3	R4
      0x90021C03,  //  0039  SETMBR	R0	K14	R3
      0x8C0C0503,  //  003A  GETMET	R3	R2	K3
      0x54160003,  //  003B  LDINT	R5	4
      0x00140205,  //  003C  ADD	R5	R1	R5
      0x5818000A,  //  003D  LDCONST	R6	K10
      0x7C0C0600,  //  003E  CALL	R3	3
      0x90021E03,  //  003F  SETMBR	R0	K15	R3
      0x540E0005,  //  0040  LDINT	R3	6
      0x00040203,  //  0041  ADD	R1	R1	R3
      0x880C0105,  //  0042  GETMBR	R3	R0	K5
      0x780E0005,  //  0043  JMPF	R3	#004A
      0x8C0C0503,  //  0044  GETMET	R3	R2	K3
      0x5C140200,  //  0045  MOVE	R5	R1
      0x5818000A,  //  0046  LDCONST	R6	K10
      0x7C0C0600,  //  0047  CALL	R3	3
      0x90022003,  //  0048  SETMBR	R0	K16	R3
      0x0004030A,  //  0049  ADD	R1	R1	K10
      0x880C010B,  //  004A  GETMBR	R3	R0	K11
      0x780E0006,  //  004B  JMPF	R3	#0053
      0x8C0C0503,  //  004C  GETMET	R3	R2	K3
      0x5C140200,  //  004D  MOVE	R5	R1
      0x541A0003,  //  004E  LDINT	R6	4
      0x7C0C0600,  //  004F  CALL	R3	3
      0x90022203,  //  0050  SETMBR	R0	K17	R3
      0x540E0003,  //  0051  LDINT	R3	4
      0x00040203,  //  0052  ADD	R1	R1	R3
      0x880C0107,  //  0053  GETMBR	R3	R0	K7
      0x780E0005,  //  0054  JMPF	R3	#005B
      0x8C0C0503,  //  0055  GETMET	R3	R2	K3
      0x5C140200,  //  0056  MOVE	R5	R1
      0x5818000A,  //  0057  LDCONST	R6	K10
      0x7C0C0600,  //  0058  CALL	R3	3
      0x0010070A,  //  0059  ADD	R4	R3	K10
      0x00040204,  //  005A  ADD	R1	R1	R4
      0x90022401,  //  005B  SETMBR	R0	K18	R1
      0x80040000,  //  005C  RET	1	R0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: decrypt
********************************************************************/
be_local_closure(Matter_Frame_decrypt,   /* name */
  be_nested_proto(
    16,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[27]) {     /* constants */
    /* K0   */  be_nested_str_weak(crypto),
    /* K1   */  be_nested_str_weak(session),
    /* K2   */  be_nested_str_weak(raw),
    /* K3   */  be_const_int(2147483647),
    /* K4   */  be_nested_str_weak(get_i2r),
    /* K5   */  be_nested_str_weak(sec_p),
    /* K6   */  be_nested_str_weak(tasmota),
    /* K7   */  be_nested_str_weak(log),
    /* K8   */  be_nested_str_weak(MTR_X3A_X20_X3E_X3E_X3E_X3E_X3E_X3E_X3E_X3E_X3E_X3E_X3E_X3E_X3E_X3E_X3E_X3E_X3E_X3E_X3E_X3E_X20Compute_X20Privacy_X20TODO),
    /* K9   */  be_const_int(2),
    /* K10  */  be_nested_str_weak(get_i2r_privacy),
    /* K11  */  be_nested_str_weak(add),
    /* K12  */  be_nested_str_weak(local_session_id),
    /* K13  */  be_nested_str_weak(payload_idx),
    /* K14  */  be_const_int(1),
    /* K15  */  be_nested_str_weak(AES_CTR),
    /* K16  */  be_nested_str_weak(decrypt),
    /* K17  */  be_const_int(0),
    /* K18  */  be_const_int(3),
    /* K19  */  be_nested_str_weak(flags),
    /* K20  */  be_nested_str_weak(message_counter),
    /* K21  */  be_nested_str_weak(source_node_id),
    /* K22  */  be_nested_str_weak(peer_node_id),
    /* K23  */  be_nested_str_weak(resize),
    /* K24  */  be_nested_str_weak(AES_CCM),
    /* K25  */  be_nested_str_weak(tag),
    /* K26  */  be_nested_str_weak(MTR_X3A_X20rejected_X20packet_X20due_X20to_X20invalid_X20MIC),
    }),
    be_str_weak(decrypt),
    &be_const_str_solidified,
    ( &(const binstruction[105]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x88080101,  //  0001  GETMBR	R2	R0	K1
      0x880C0102,  //  0002  GETMBR	R3	R0	K2
      0x5411FFEF,  //  0003  LDINT	R4	-16
      0x40100903,  //  0004  CONNECT	R4	R4	K3
      0x94100604,  //  0005  GETIDX	R4	R3	R4
      0x8C140504,  //  0006  GETMET	R5	R2	K4
      0x7C140200,  //  0007  CALL	R5	1
      0x88180105,  //  0008  GETMBR	R6	R0	K5
      0x781A0029,  //  0009  JMPF	R6	#0034
      0xB81A0C00,  //  000A  GETNGBL	R6	K6
      0x8C180D07,  //  000B  GETMET	R6	R6	K7
      0x58200008,  //  000C  LDCONST	R8	K8
      0x58240009,  //  000D  LDCONST	R9	K9
      0x7C180600,  //  000E  CALL	R6	3
      0x8C18050A,  //  000F  GETMET	R6	R2	K10
      0x7C180200,  //  0010  CALL	R6	1
      0x601C0015,  //  0011  GETGBL	R7	G21
      0x7C1C0000,  //  0012  CALL	R7	0
      0x8C1C0F0B,  //  0013  GETMET	R7	R7	K11
      0x8824010C,  //  0014  GETMBR	R9	R0	K12
      0x5429FFFD,  //  0015  LDINT	R10	-2
      0x7C1C0600,  //  0016  CALL	R7	3
      0x54220004,  //  0017  LDINT	R8	5
      0x5426000E,  //  0018  LDINT	R9	15
      0x40201009,  //  0019  CONNECT	R8	R8	R9
      0x94200808,  //  001A  GETIDX	R8	R4	R8
      0x001C0E08,  //  001B  ADD	R7	R7	R8
      0x54220003,  //  001C  LDINT	R8	4
      0x8824010D,  //  001D  GETMBR	R9	R0	K13
      0x0424130E,  //  001E  SUB	R9	R9	K14
      0x40201009,  //  001F  CONNECT	R8	R8	R9
      0x88240102,  //  0020  GETMBR	R9	R0	K2
      0x94201208,  //  0021  GETIDX	R8	R9	R8
      0x8C28030F,  //  0022  GETMET	R10	R1	K15
      0x5C300C00,  //  0023  MOVE	R12	R6
      0x7C280400,  //  0024  CALL	R10	2
      0x8C281510,  //  0025  GETMET	R10	R10	K16
      0x5C301000,  //  0026  MOVE	R12	R8
      0x5C340E00,  //  0027  MOVE	R13	R7
      0x58380009,  //  0028  LDCONST	R14	K9
      0x7C280800,  //  0029  CALL	R10	4
      0x5C241400,  //  002A  MOVE	R9	R10
      0x402A2312,  //  002B  CONNECT	R10	K17	K18
      0x882C0102,  //  002C  GETMBR	R11	R0	K2
      0x9428160A,  //  002D  GETIDX	R10	R11	R10
      0x00281409,  //  002E  ADD	R10	R10	R9
      0x882C010D,  //  002F  GETMBR	R11	R0	K13
      0x402C1703,  //  0030  CONNECT	R11	R11	K3
      0x942C100B,  //  0031  GETIDX	R11	R8	R11
      0x0028140B,  //  0032  ADD	R10	R10	R11
      0x9002040A,  //  0033  SETMBR	R0	K2	R10
      0x8818010D,  //  0034  GETMBR	R6	R0	K13
      0x04180D0E,  //  0035  SUB	R6	R6	K14
      0x401A2206,  //  0036  CONNECT	R6	K17	R6
      0x94180606,  //  0037  GETIDX	R6	R3	R6
      0x881C010D,  //  0038  GETMBR	R7	R0	K13
      0x5421FFEE,  //  0039  LDINT	R8	-17
      0x401C0E08,  //  003A  CONNECT	R7	R7	R8
      0x941C0607,  //  003B  GETIDX	R7	R3	R7
      0x60200015,  //  003C  GETGBL	R8	G21
      0x7C200000,  //  003D  CALL	R8	0
      0x8C24110B,  //  003E  GETMET	R9	R8	K11
      0x882C0113,  //  003F  GETMBR	R11	R0	K19
      0x5830000E,  //  0040  LDCONST	R12	K14
      0x7C240600,  //  0041  CALL	R9	3
      0x8C24110B,  //  0042  GETMET	R9	R8	K11
      0x882C0114,  //  0043  GETMBR	R11	R0	K20
      0x54320003,  //  0044  LDINT	R12	4
      0x7C240600,  //  0045  CALL	R9	3
      0x88240115,  //  0046  GETMBR	R9	R0	K21
      0x78260001,  //  0047  JMPF	R9	#004A
      0x40241103,  //  0048  CONNECT	R9	R8	K3
      0x70020006,  //  0049  JMP		#0051
      0x88240516,  //  004A  GETMBR	R9	R2	K22
      0x78260001,  //  004B  JMPF	R9	#004E
      0x88240516,  //  004C  GETMBR	R9	R2	K22
      0x40241009,  //  004D  CONNECT	R9	R8	R9
      0x8C241117,  //  004E  GETMET	R9	R8	K23
      0x542E000C,  //  004F  LDINT	R11	13
      0x7C240400,  //  0050  CALL	R9	2
      0x8C240318,  //  0051  GETMET	R9	R1	K24
      0x5C2C0A00,  //  0052  MOVE	R11	R5
      0x5C301000,  //  0053  MOVE	R12	R8
      0x5C340C00,  //  0054  MOVE	R13	R6
      0x6038000C,  //  0055  GETGBL	R14	G12
      0x5C3C0E00,  //  0056  MOVE	R15	R7
      0x7C380200,  //  0057  CALL	R14	1
      0x543E000F,  //  0058  LDINT	R15	16
      0x7C240C00,  //  0059  CALL	R9	6
      0x8C281310,  //  005A  GETMET	R10	R9	K16
      0x5C300E00,  //  005B  MOVE	R12	R7
      0x7C280400,  //  005C  CALL	R10	2
      0x8C2C1319,  //  005D  GETMET	R11	R9	K25
      0x7C2C0200,  //  005E  CALL	R11	1
      0x20301604,  //  005F  NE	R12	R11	R4
      0x78320006,  //  0060  JMPF	R12	#0068
      0xB8320C00,  //  0061  GETNGBL	R12	K6
      0x8C301907,  //  0062  GETMET	R12	R12	K7
      0x5838001A,  //  0063  LDCONST	R14	K26
      0x583C0012,  //  0064  LDCONST	R15	K18
      0x7C300600,  //  0065  CALL	R12	3
      0x4C300000,  //  0066  LDNIL	R12
      0x80041800,  //  0067  RET	1	R12
      0x80041400,  //  0068  RET	1	R10
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Frame
********************************************************************/
be_local_class(Matter_Frame,
    32,
    NULL,
    be_nested_map(42,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(x_flag_i, -1), be_const_var(22) },
        { be_const_key_weak(dest_node_id_8, 7), be_const_var(16) },
        { be_const_key_weak(x_flags, -1), be_const_var(17) },
        { be_const_key_weak(x_flag_a, -1), be_const_var(21) },
        { be_const_key_weak(exchange_id, -1), be_const_var(24) },
        { be_const_key_weak(opcode, -1), be_const_var(23) },
        { be_const_key_weak(encode_frame, -1), be_const_closure(Matter_Frame_encode_frame_closure) },
        { be_const_key_weak(app_payload_idx, -1), be_const_var(29) },
        { be_const_key_weak(payload_idx, -1), be_const_var(3) },
        { be_const_key_weak(ack_message_counter, 24), be_const_var(27) },
        { be_const_key_weak(build_standalone_ack, -1), be_const_closure(Matter_Frame_build_standalone_ack_closure) },
        { be_const_key_weak(x_flag_v, 6), be_const_var(18) },
        { be_const_key_weak(sec_c, -1), be_const_var(10) },
        { be_const_key_weak(vendor_id, 32), be_const_var(26) },
        { be_const_key_weak(local_session_id, -1), be_const_var(7) },
        { be_const_key_weak(flag_s, -1), be_const_var(5) },
        { be_const_key_weak(debug, -1), be_const_closure(Matter_Frame_debug_closure) },
        { be_const_key_weak(message_handler, 10), be_const_var(0) },
        { be_const_key_weak(encrypt, 34), be_const_closure(Matter_Frame_encrypt_closure) },
        { be_const_key_weak(session, -1), be_const_var(1) },
        { be_const_key_weak(sec_flags, -1), be_const_var(8) },
        { be_const_key_weak(build_response, -1), be_const_closure(Matter_Frame_build_response_closure) },
        { be_const_key_weak(initiate_response, -1), be_const_static_closure(Matter_Frame_initiate_response_closure) },
        { be_const_key_weak(remote_port, -1), be_const_var(31) },
        { be_const_key_weak(sec_sesstype, -1), be_const_var(12) },
        { be_const_key_weak(decode_header, 23), be_const_closure(Matter_Frame_decode_header_closure) },
        { be_const_key_weak(flags, -1), be_const_var(4) },
        { be_const_key_weak(protocol_id, 13), be_const_var(25) },
        { be_const_key_weak(raw, -1), be_const_var(2) },
        { be_const_key_weak(source_node_id, 28), be_const_var(14) },
        { be_const_key_weak(flag_dsiz, -1), be_const_var(6) },
        { be_const_key_weak(x_flag_r, -1), be_const_var(20) },
        { be_const_key_weak(message_counter, -1), be_const_var(13) },
        { be_const_key_weak(init, 14), be_const_closure(Matter_Frame_init_closure) },
        { be_const_key_weak(x_flag_sx, 12), be_const_var(19) },
        { be_const_key_weak(dest_node_id_2, -1), be_const_var(15) },
        { be_const_key_weak(decode_payload, -1), be_const_closure(Matter_Frame_decode_payload_closure) },
        { be_const_key_weak(sec_p, 8), be_const_var(9) },
        { be_const_key_weak(decrypt, -1), be_const_closure(Matter_Frame_decrypt_closure) },
        { be_const_key_weak(sec_extensions, -1), be_const_var(28) },
        { be_const_key_weak(sec_mx, 3), be_const_var(11) },
        { be_const_key_weak(remote_ip, 2), be_const_var(30) },
    })),
    be_str_weak(Matter_Frame)
);
/*******************************************************************/

void be_load_Matter_Frame_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Frame);
    be_setglobal(vm, "Matter_Frame");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
