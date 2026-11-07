// FUN_01af0948 @ 01af0948 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_01af0948(int *param_1)

{
  if (*param_1 != 0) {
    FUN_01aeb5f4(param_1 + 2);
    return;
  }
  if (param_1[1] != -0x80000000) {
    FUN_0134bd64(param_1[1],param_1[2]);
  }
  if (param_1[4] != -0x80000000) {
    FUN_0134bd64(param_1[4],param_1[5]);
  }
  if (param_1[7] < -0x7ffffffe) {
    return;
  }
  FUN_0134bd64(param_1[7],param_1[8]);
  return;
}

