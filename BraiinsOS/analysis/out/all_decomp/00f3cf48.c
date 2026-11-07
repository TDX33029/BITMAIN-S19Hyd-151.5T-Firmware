// FUN_00f3cf48 @ 00f3cf48 size=120 calls_out=1 calls_in=16
// strings: 

void FUN_00f3cf48(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  undefined4 *local_10;
  undefined1 *local_c;
  
  local_c = &LAB_0115452c;
  local_10 = &uStack_20;
  local_18 = &uStack_24;
  local_14 = &LAB_00fac484;
  uStack_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  FUN_00600d2c(param_1 + 3,&DAT_005838ab,&local_18);
  param_1[6] = 0;
  param_1[7] = 4;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  *param_1 = 0;
  return;
}

