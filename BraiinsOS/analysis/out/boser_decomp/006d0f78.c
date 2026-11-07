// FUN_006d0f78 @ 006d0f78 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_006d0f78(undefined4 *param_1,int param_2)

{
  param_2 = param_2 + 1;
  while (param_2 = param_2 + -1, param_2 != 0) {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_006c787c(param_1 + 3);
    param_1 = param_1 + 0x1b;
  }
  return;
}

