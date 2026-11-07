// FUN_009243d8 @ 009243d8 size=100 calls_out=1 calls_in=10
// strings: 

void FUN_009243d8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 *local_10;
  undefined4 *local_c;
  
  local_10 = (undefined1 *)&local_18;
  local_c = &DAT_0157d360;
  local_18 = param_2;
  uStack_14 = param_3;
  FUN_00600d2c(param_1 + 3,&DAT_0057a25d,&local_10);
  param_1[6] = 0;
  param_1[7] = 4;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  *param_1 = 0;
  return;
}

