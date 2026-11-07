// FUN_00b16510 @ 00b16510 size=120 calls_out=4 calls_in=1
// strings: 

void FUN_00b16510(int *param_1)

{
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      FUN_00db19c4(param_1 + 2);
      return;
    }
    return;
  }
  if ((char)param_1[0x6f] != '\x03') {
    return;
  }
  FUN_008b6720(param_1 + 0x3f);
  if ((char)param_1[0x2d] == '\x03') {
    FUN_00b165cc(param_1 + 2);
  }
  FUN_019bb7e0(param_1[0x3b],param_1[0x3c]);
  if (param_1[0x38] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x38],param_1[0x39]);
  return;
}

