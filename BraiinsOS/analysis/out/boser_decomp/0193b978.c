// FUN_0193b978 @ 0193b978 size=64 calls_out=1 calls_in=4
// strings: 

void FUN_0193b978(int *param_1)

{
  if (*param_1 != -0x80000000) {
    FUN_0134bd64(*param_1,param_1[1]);
  }
  if (param_1[3] != -0x80000000) {
    FUN_0134bd64(param_1[3],param_1[4]);
  }
  if (param_1[6] < -0x7ffffffe) {
    return;
  }
  FUN_0134bd64(param_1[6],param_1[7]);
  return;
}

