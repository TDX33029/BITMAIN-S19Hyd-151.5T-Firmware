// FUN_00f26d54 @ 00f26d54 size=52 calls_out=2 calls_in=2
// strings: 

void FUN_00f26d54(int *param_1)

{
  if (*param_1 == 7) {
    return;
  }
  if (*param_1 != 8) {
    FUN_00f26d88();
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_00f80320(param_1[4],param_1[5]);
  return;
}

