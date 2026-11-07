// FUN_006d0d40 @ 006d0d40 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_006d0d40(undefined4 *param_1,int param_2)

{
  param_2 = param_2 + 1;
  while (param_2 = param_2 + -1, param_2 != 0) {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_006c79e0(param_1 + 3);
    param_1 = param_1 + 0x15;
  }
  return;
}

