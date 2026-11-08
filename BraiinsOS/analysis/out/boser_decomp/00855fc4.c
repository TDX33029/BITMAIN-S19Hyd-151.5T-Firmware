// FUN_00855fc4 @ 00855fc4 size=100 calls_out=1 calls_in=12
// strings: 

void FUN_00855fc4(int *param_1)

{
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  if (param_1[8] != -0x80000000) {
    FUN_019bb7e0(param_1[8],param_1[9]);
  }
  if (param_1[0xb] != -0x80000000) {
    FUN_019bb7e0(param_1[0xb],param_1[0xc]);
  }
  if (param_1[0xe] != -0x80000000) {
    FUN_019bb7e0(param_1[0xe],param_1[0xf]);
  }
  if (param_1[0x11] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x11],param_1[0x12]);
  return;
}

