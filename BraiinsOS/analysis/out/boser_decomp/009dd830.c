// FUN_009dd830 @ 009dd830 size=68 calls_out=3 calls_in=2
// strings: 

void FUN_009dd830(int *param_1)

{
  if (*param_1 == 0) {
    if (param_1[1] == -0x80000000) {
      FUN_018248cc();
      return;
    }
    FUN_019bb7e0(param_1[1],param_1[2]);
    return;
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_01443048(param_1[4],param_1[5]);
  return;
}

