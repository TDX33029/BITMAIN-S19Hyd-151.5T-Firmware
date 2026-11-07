// FUN_00f3ce3c @ 00f3ce3c size=116 calls_out=1 calls_in=32
// strings: 

void FUN_00f3ce3c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  
  local_10 = (undefined1 *)&local_20;
  local_c = &LAB_0115452c;
  local_14 = &LAB_01579e10;
  local_20 = param_3;
  uStack_1c = param_4;
  local_18 = param_2;
  FUN_00600d2c(param_1 + 3,&DAT_0057fedd,&local_18);
  param_1[6] = 0;
  param_1[7] = 4;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  *param_1 = 0;
  return;
}

