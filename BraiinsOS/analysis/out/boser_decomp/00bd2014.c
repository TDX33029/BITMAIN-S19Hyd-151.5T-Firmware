// FUN_00bd2014 @ 00bd2014 size=44 calls_out=2 calls_in=5
// strings: 

void FUN_00bd2014(int *param_1)

{
  if (*param_1 == 0) {
    FUN_00bd2040(param_1 + 1);
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_00f80320(param_1[4],param_1[5]);
  return;
}

