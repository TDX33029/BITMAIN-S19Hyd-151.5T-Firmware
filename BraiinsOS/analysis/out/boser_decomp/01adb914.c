// FUN_01adb914 @ 01adb914 size=100 calls_out=4 calls_in=1
// strings: 

void FUN_01adb914(int *param_1)

{
  FUN_0134bd64(param_1[0x32],param_1[0x33]);
  if (param_1[0x2c] != -0x80000000) {
    FUN_0134bd64(param_1[0x2c],param_1[0x2d]);
  }
  if (param_1[0x2f] != -0x80000000) {
    FUN_0134bd64(param_1[0x2f],param_1[0x30]);
  }
  FUN_01adae48(param_1 + 8);
  FUN_01adaeac(param_1 + 0x1a);
  FUN_0134bd64(param_1[0x35],param_1[0x36]);
  if (*param_1 == 0) {
    return;
  }
  FUN_01ada488(param_1);
  return;
}

