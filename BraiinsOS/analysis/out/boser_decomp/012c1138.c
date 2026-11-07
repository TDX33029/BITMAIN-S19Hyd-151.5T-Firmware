// FUN_012c1138 @ 012c1138 size=96 calls_out=2 calls_in=0
// strings: 

void FUN_012c1138(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_012c0a58(&local_30,param_3,param_5,param_6);
  if (local_30 == -0x80000000) {
    *param_1 = 0;
    param_1[1] = local_2c;
  }
  else {
    local_20 = local_30;
    uStack_1c = local_2c;
    uStack_18 = uStack_28;
    FUN_012b1d60(param_1);
  }
  return;
}

