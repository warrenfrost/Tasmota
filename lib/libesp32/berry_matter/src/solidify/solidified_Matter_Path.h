/* Solidification of Matter_Path.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Path;

/********************************************************************
** Solidified function: tostring
********************************************************************/
be_local_closure(Matter_Path_tostring,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[13]) {     /* constants */
    /* K0   */  be_nested_str_weak(),
    /* K1   */  be_nested_str_weak(endpoint),
    /* K2   */  be_nested_str_weak(_X5B_X2502X_X5D),
    /* K3   */  be_nested_str_weak(_X5B_X2A_X2A_X5D),
    /* K4   */  be_nested_str_weak(cluster),
    /* K5   */  be_nested_str_weak(_X2504X_X2F),
    /* K6   */  be_nested_str_weak(_X2A_X2A_X2A_X2A_X2F),
    /* K7   */  be_nested_str_weak(attribute),
    /* K8   */  be_nested_str_weak(_X2504X),
    /* K9   */  be_nested_str_weak(command),
    /* K10  */  be_nested_str_weak(_X2A_X2A_X2A_X2A),
    /* K11  */  be_nested_str_weak(Exception_X3E_X20),
    /* K12  */  be_nested_str_weak(_X2C_X20),
    }),
    be_str_weak(tostring),
    &be_const_str_solidified,
    ( &(const binstruction[74]) {  /* code */
      0xA8020039,  //  0000  EXBLK	0	#003B
      0x58040000,  //  0001  LDCONST	R1	K0
      0x88080101,  //  0002  GETMBR	R2	R0	K1
      0x4C0C0000,  //  0003  LDNIL	R3
      0x20080403,  //  0004  NE	R2	R2	R3
      0x780A0004,  //  0005  JMPF	R2	#000B
      0x60080018,  //  0006  GETGBL	R2	G24
      0x580C0002,  //  0007  LDCONST	R3	K2
      0x88100101,  //  0008  GETMBR	R4	R0	K1
      0x7C080400,  //  0009  CALL	R2	2
      0x70020000,  //  000A  JMP		#000C
      0x58080003,  //  000B  LDCONST	R2	K3
      0x00040202,  //  000C  ADD	R1	R1	R2
      0x88080104,  //  000D  GETMBR	R2	R0	K4
      0x4C0C0000,  //  000E  LDNIL	R3
      0x20080403,  //  000F  NE	R2	R2	R3
      0x780A0004,  //  0010  JMPF	R2	#0016
      0x60080018,  //  0011  GETGBL	R2	G24
      0x580C0005,  //  0012  LDCONST	R3	K5
      0x88100104,  //  0013  GETMBR	R4	R0	K4
      0x7C080400,  //  0014  CALL	R2	2
      0x70020000,  //  0015  JMP		#0017
      0x58080006,  //  0016  LDCONST	R2	K6
      0x00040202,  //  0017  ADD	R1	R1	R2
      0x88080107,  //  0018  GETMBR	R2	R0	K7
      0x4C0C0000,  //  0019  LDNIL	R3
      0x20080403,  //  001A  NE	R2	R2	R3
      0x780A0004,  //  001B  JMPF	R2	#0021
      0x60080018,  //  001C  GETGBL	R2	G24
      0x580C0008,  //  001D  LDCONST	R3	K8
      0x88100107,  //  001E  GETMBR	R4	R0	K7
      0x7C080400,  //  001F  CALL	R2	2
      0x70020000,  //  0020  JMP		#0022
      0x58080000,  //  0021  LDCONST	R2	K0
      0x00040202,  //  0022  ADD	R1	R1	R2
      0x88080109,  //  0023  GETMBR	R2	R0	K9
      0x4C0C0000,  //  0024  LDNIL	R3
      0x20080403,  //  0025  NE	R2	R2	R3
      0x780A0004,  //  0026  JMPF	R2	#002C
      0x60080018,  //  0027  GETGBL	R2	G24
      0x580C0008,  //  0028  LDCONST	R3	K8
      0x88100109,  //  0029  GETMBR	R4	R0	K9
      0x7C080400,  //  002A  CALL	R2	2
      0x70020000,  //  002B  JMP		#002D
      0x58080000,  //  002C  LDCONST	R2	K0
      0x00040202,  //  002D  ADD	R1	R1	R2
      0x88080107,  //  002E  GETMBR	R2	R0	K7
      0x4C0C0000,  //  002F  LDNIL	R3
      0x1C080403,  //  0030  EQ	R2	R2	R3
      0x780A0004,  //  0031  JMPF	R2	#0037
      0x88080109,  //  0032  GETMBR	R2	R0	K9
      0x4C0C0000,  //  0033  LDNIL	R3
      0x1C080403,  //  0034  EQ	R2	R2	R3
      0x780A0000,  //  0035  JMPF	R2	#0037
      0x0004030A,  //  0036  ADD	R1	R1	K10
      0xA8040001,  //  0037  EXBLK	1	1
      0x80040200,  //  0038  RET	1	R1
      0xA8040001,  //  0039  EXBLK	1	1
      0x7002000D,  //  003A  JMP		#0049
      0xAC040002,  //  003B  CATCH	R1	0	2
      0x7002000A,  //  003C  JMP		#0048
      0x600C0008,  //  003D  GETGBL	R3	G8
      0x5C100200,  //  003E  MOVE	R4	R1
      0x7C0C0200,  //  003F  CALL	R3	1
      0x000E1603,  //  0040  ADD	R3	K11	R3
      0x000C070C,  //  0041  ADD	R3	R3	K12
      0x60100008,  //  0042  GETGBL	R4	G8
      0x5C140400,  //  0043  MOVE	R5	R2
      0x7C100200,  //  0044  CALL	R4	1
      0x000C0604,  //  0045  ADD	R3	R3	R4
      0x80040600,  //  0046  RET	1	R3
      0x70020000,  //  0047  JMP		#0049
      0xB0080000,  //  0048  RAISE	2	R0	R0
      0x80000000,  //  0049  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Path
********************************************************************/
be_local_class(Matter_Path,
    6,
    NULL,
    be_nested_map(7,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(log, 4), be_const_var(5) },
        { be_const_key_weak(command, 2), be_const_var(3) },
        { be_const_key_weak(status, -1), be_const_var(4) },
        { be_const_key_weak(tostring, -1), be_const_closure(Matter_Path_tostring_closure) },
        { be_const_key_weak(cluster, 5), be_const_var(1) },
        { be_const_key_weak(endpoint, -1), be_const_var(0) },
        { be_const_key_weak(attribute, -1), be_const_var(2) },
    })),
    be_str_weak(Matter_Path)
);
/*******************************************************************/

void be_load_Matter_Path_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Path);
    be_setglobal(vm, "Matter_Path");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
