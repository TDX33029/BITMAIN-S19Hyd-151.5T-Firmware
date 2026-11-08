// FUN_01116bec @ 01116bec size=44 calls_out=2 calls_in=1
// strings: 

void FUN_01116bec(int *param_1)

{
  if (*param_1 == 0) {
    FUN_01116c18(param_1 + 1);
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_00f80320(param_1[4],param_1[5]);
  return;
}

