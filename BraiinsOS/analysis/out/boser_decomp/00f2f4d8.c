// FUN_00f2f4d8 @ 00f2f4d8 size=48 calls_out=1 calls_in=2
// strings: 

void FUN_00f2f4d8(int *param_1)

{
  if (*param_1 == 0) {
    if (param_1[2] == -0x7ffffffe) {
      return;
    }
    FUN_005f87f4();
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] != 3 || param_1[3] != 0) {
    FUN_005f0d40();
    return;
  }
  if (param_1[6] == 0) {
    return;
  }
  FUN_00f80320(param_1[6],param_1[7]);
  return;
}

