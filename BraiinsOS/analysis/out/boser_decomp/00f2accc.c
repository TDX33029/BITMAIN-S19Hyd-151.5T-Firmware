// FUN_00f2accc @ 00f2accc size=44 calls_out=2 calls_in=2
// strings: 

void FUN_00f2accc(int *param_1)

{
  if (*param_1 == 0) {
    FUN_00f2acf8(param_1 + 1);
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_00f80320(param_1[4],param_1[5]);
  return;
}

