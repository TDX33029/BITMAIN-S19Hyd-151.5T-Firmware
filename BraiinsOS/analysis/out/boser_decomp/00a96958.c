// FUN_00a96958 @ 00a96958 size=84 calls_out=1 calls_in=2
// strings: 

void FUN_00a96958(int *param_1)

{
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  if (param_1[0xe] != -0x80000000) {
    FUN_019bb7e0(param_1[0xe],param_1[0xf]);
  }
  if (param_1[0x20] != -0x80000000) {
    FUN_019bb7e0(param_1[0x20],param_1[0x21]);
  }
  if (param_1[0x32] != -0x80000000) {
    FUN_019bb7e0(param_1[0x32],param_1[0x33]);
  }
  FUN_019bb7e0(param_1[0x36],param_1[0x37]);
  return;
}

