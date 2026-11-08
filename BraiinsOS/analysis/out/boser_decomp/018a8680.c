// FUN_018a8680 @ 018a8680 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_018a8680(undefined4 *param_1,int param_2)

{
  param_2 = param_2 + 1;
  while (param_2 = param_2 + -1, param_2 != 0) {
    FUN_0134bd64(*param_1,param_1[1]);
    FUN_018a86fc(param_1 + 3);
    param_1 = param_1 + 6;
  }
  return;
}

