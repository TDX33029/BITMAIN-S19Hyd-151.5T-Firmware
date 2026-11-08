// FUN_014881d8 @ 014881d8 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_014881d8(undefined4 *param_1,int param_2)

{
  param_2 = param_2 + 1;
  while (param_2 = param_2 + -1, param_2 != 0) {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_00db4764(param_1 + 4);
    param_1 = param_1 + 10;
  }
  return;
}

