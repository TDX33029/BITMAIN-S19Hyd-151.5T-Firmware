// FUN_00dec280 @ 00dec280 size=100 calls_out=2 calls_in=1
// strings: 

void FUN_00dec280(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int local_28;
  int local_24;
  int iStack_20;
  int local_1c;
  
  FUN_012c1060(&local_28,param_4,param_5);
  if (local_28 == -0x80000000) {
    local_1c = local_24;
    FUN_0196bf0c(param_3,param_2);
    *param_1 = -0x80000000;
    param_1[1] = local_24;
  }
  else {
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = iStack_20;
  }
  return;
}

