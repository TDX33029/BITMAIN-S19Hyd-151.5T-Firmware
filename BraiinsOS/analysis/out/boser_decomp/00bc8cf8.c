// FUN_00bc8cf8 @ 00bc8cf8 size=72 calls_out=3 calls_in=5
// strings: 

void FUN_00bc8cf8(int *param_1)

{
  if (*param_1 == 0) {
    if (param_1[1] == -0x80000000) {
      FUN_00b9391c((char)param_1[2],param_1[3]);
      return;
    }
    FUN_019bb7e0(param_1[1],param_1[2]);
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_00f80320(param_1[4],param_1[5]);
  return;
}

