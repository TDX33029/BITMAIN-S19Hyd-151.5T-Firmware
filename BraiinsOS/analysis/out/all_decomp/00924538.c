// FUN_00924538 @ 00924538 size=124 calls_out=1 calls_in=12
// strings: 

void FUN_00924538(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  code *local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = FUN_01579bec;
  local_18 = &uStack_28;
  uStack_24 = param_5;
  local_1c = &DAT_0157d360;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  FUN_00600d2c(param_1 + 3,&DAT_00589a0d,&local_20);
  param_1[6] = 0;
  param_1[7] = 4;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  *param_1 = 0;
  return;
}

