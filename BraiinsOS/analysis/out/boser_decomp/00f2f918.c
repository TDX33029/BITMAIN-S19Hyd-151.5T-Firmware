// FUN_00f2f918 @ 00f2f918 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_00f2f918(int *param_1)

{
  if (*param_1 == 0) {
    return;
  }
  if (*param_1 != 2) {
    FUN_0183a528(param_1 + 1);
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_00f80320(param_1[4],param_1[5]);
  return;
}

