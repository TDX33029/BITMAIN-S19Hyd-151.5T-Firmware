// FUN_01ad8610 @ 01ad8610 size=108 calls_out=5 calls_in=1
// strings: 

void FUN_01ad8610(int *param_1)

{
  if (*param_1 == 3) {
    FUN_0134bd64(param_1[1],param_1[2]);
    FUN_0134bd64(param_1[4],param_1[5]);
    FUN_0134bd64(param_1[7],param_1[8]);
    return;
  }
  FUN_0134bd64(param_1[0x20],param_1[0x21]);
  FUN_0134bd64(param_1[0x23],param_1[0x24]);
  FUN_0196afa8(param_1 + 0x29);
  FUN_01ad3410(param_1 + 0x12);
  FUN_0134bd64(param_1[0x26],param_1[0x27]);
  FUN_01ad8720(param_1);
  if (param_1[0x18] == 0) {
    return;
  }
  FUN_01ada488(param_1 + 0x18);
  return;
}

