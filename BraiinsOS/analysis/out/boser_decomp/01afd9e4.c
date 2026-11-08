// FUN_01afd9e4 @ 01afd9e4 size=112 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01afd9e4(int *param_1,undefined4 param_2,uint param_3)

{
  if ((uint)param_1[1] < param_3) {
    return 0;
  }
  param_1[1] = param_1[1] - param_3;
  *param_1 = *param_1 + param_3;
  FUN_01afd61c(param_2);
  return 1;
}

