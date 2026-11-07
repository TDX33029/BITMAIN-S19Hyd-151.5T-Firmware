// FUN_00b8a0e8 @ 00b8a0e8 size=132 calls_out=1 calls_in=2
// strings: 

void FUN_00b8a0e8(int *param_1)

{
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  if (param_1[0x3a] != -0x80000000) {
    FUN_019bb7e0(param_1[0x3a],param_1[0x3b]);
  }
  if (param_1[0x42] != -0x80000000) {
    FUN_019bb7e0(param_1[0x42],param_1[0x43]);
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
  if (param_1[0x4a] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x4a],param_1[0x4b]);
  return;
}

