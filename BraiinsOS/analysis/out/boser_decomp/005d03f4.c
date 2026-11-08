// FUN_005d03f4 @ 005d03f4 size=252 calls_out=6 calls_in=1
// strings: internal error: entered unreachable code: datetimes should only be serialized as structs; not maps

void FUN_005d03f4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,byte param_5
                 )

{
  undefined4 uVar1;
  int local_148;
  undefined1 auStack_144 [68];
  undefined4 local_100 [2];
  undefined4 local_f8;
  undefined4 local_ec;
  undefined4 local_e0;
  byte local_d4;
  undefined4 local_a4;
  int local_90 [28];
  
  FUN_00644720();
  if ((undefined1 *)*param_1 == &DAT_80000005) {
    if (*(int *)(param_2 + 0x10) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: datetimes should only be serialized as structs, not maps"
                   ,0xc5,&DAT_01d2bdec);
    }
    if (param_5 != 2) {
      local_148 = *(int *)(param_2 + 0x30);
      *(undefined4 *)(param_2 + 0x30) = 0x80000000;
      uVar1 = 0x80000003;
      if (local_148 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2bdfc);
      }
      FUN_01bed4e2(auStack_144,param_2 + 0x34,0x44);
      local_100[0] = 1;
      local_a4 = 5;
      local_e0 = 0x80000003;
      local_ec = 0x80000003;
      local_f8 = 0x80000003;
      local_d4 = param_5 & 1;
      FUN_01a4b734(local_90,param_2,&local_148,local_100,uVar1);
      if (local_90[0] != 4) {
        FUN_005f6530(local_90);
      }
    }
    *param_1 = &DAT_80000005;
  }
  return;
}

