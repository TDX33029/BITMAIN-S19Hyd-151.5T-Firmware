// FUN_00a2f010 @ 00a2f010 size=100 calls_out=1 calls_in=1
// strings: 

void FUN_00a2f010(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 *local_10;
  undefined4 *local_c;
  
  local_10 = (undefined1 *)&local_18;
  local_c = &DAT_0157d360;
  local_18 = param_2;
  uStack_14 = param_3;
  FUN_00600d2c(param_1 + 3,&DAT_00582dbd,&local_10);
  param_1[6] = 0;
  param_1[7] = 4;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  *param_1 = 0;
  return;
}

