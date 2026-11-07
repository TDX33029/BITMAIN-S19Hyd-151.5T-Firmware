// FUN_00956a58 @ 00956a58 size=88 calls_out=2 calls_in=3
// strings: 

void FUN_00956a58(int *param_1)

{
  if (param_1[0xe] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0xe],param_1[0xf]);
  if (param_1[8] != -0x80000000) {
    FUN_019bb7e0(param_1[8],param_1[9]);
  }
  if (param_1[0xb] != -0x80000000) {
    FUN_019bb7e0(param_1[0xb],param_1[0xc]);
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_01ada488(param_1);
  return;
}

