// FUN_0192eac8 @ 0192eac8 size=28 calls_out=1 calls_in=1
// strings: 

void FUN_0192eac8(int *param_1)

{
  if (*param_1 != 0) {
    FUN_0192eb80(param_1 + 2);
    return;
  }
  if (param_1[1] == -0x80000000) {
    return;
  }
  FUN_0134bd64(param_1[1],param_1[2]);
  FUN_0134bd64(param_1[4],param_1[5]);
  return;
}

