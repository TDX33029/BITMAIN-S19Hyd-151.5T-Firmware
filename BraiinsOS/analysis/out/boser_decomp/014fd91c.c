// FUN_014fd91c @ 014fd91c size=52 calls_out=2 calls_in=1
// strings: 

void FUN_014fd91c(undefined4 *param_1,int param_2)

{
  param_2 = param_2 + 1;
  while (param_2 = param_2 + -1, param_2 != 0) {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_014fd998(param_1 + 4);
    param_1 = param_1 + 0x2e;
  }
  return;
}

