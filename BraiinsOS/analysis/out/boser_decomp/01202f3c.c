// FUN_01202f3c @ 01202f3c size=148 calls_out=2 calls_in=1
// strings: 

void FUN_01202f3c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_0165dac4(&local_38,param_2,param_3,&DAT_004c1a35);
  if (local_38 == 2) {
    param_1[1] = local_34;
    param_1[2] = uStack_30;
    param_1[3] = uStack_2c;
    *param_1 = 1;
  }
  else {
    local_28 = local_38;
    local_24 = local_34;
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    FUN_0165d9ac(param_1,&local_28,param_4,param_5,FUN_0165f518);
  }
  return;
}

