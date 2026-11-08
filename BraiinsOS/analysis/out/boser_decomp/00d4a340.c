// FUN_00d4a340 @ 00d4a340 size=272 calls_out=6 calls_in=1
// strings: internal error: entered unreachable code: datetimes should only be serialized as structs; not maps

void FUN_00d4a340(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 )

{
  double in_d0;
  undefined4 uVar1;
  int local_150;
  undefined1 auStack_14c [68];
  undefined4 local_108 [2];
  undefined4 local_100;
  undefined4 local_f4;
  double local_e8;
  undefined4 local_e0;
  undefined4 local_ac;
  int local_98 [28];
  
  FUN_00644720();
  if ((undefined1 *)*param_1 == &DAT_80000005) {
    if (*(int *)(param_2 + 0x10) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: datetimes should only be serialized as structs, not maps"
                   ,0xc5,&DAT_01d2bdec);
    }
    if ((param_5 & 1) != 0) {
      local_150 = *(int *)(param_2 + 0x30);
      *(undefined4 *)(param_2 + 0x30) = 0x80000000;
      uVar1 = 0x80000003;
      if (NAN(in_d0)) {
        in_d0 = ABS(in_d0);
      }
      if (local_150 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2bdfc);
      }
      FUN_01bed4e2(auStack_14c,param_2 + 0x34,0x44);
      local_108[0] = 1;
      local_ac = 4;
      local_e0 = 0x80000003;
      local_f4 = 0x80000003;
      local_100 = 0x80000003;
      local_e8 = in_d0;
      FUN_01a4b734(local_98,param_2,&local_150,local_108,uVar1);
      if (local_98[0] != 4) {
        FUN_005f6530(local_98);
      }
    }
    *param_1 = &DAT_80000005;
  }
  return;
}

