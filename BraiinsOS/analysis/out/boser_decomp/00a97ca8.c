// FUN_00a97ca8 @ 00a97ca8 size=100 calls_out=3 calls_in=1
// strings: 

void FUN_00a97ca8(int *param_1)

{
  if ((*param_1 == 0 && param_1[1] == 0) || ((char)param_1[0x6f] != '\x03')) {
    return;
  }
  FUN_008b6720(param_1 + 0x3f);
  if ((char)param_1[0x2d] == '\x03') {
    FUN_0093a454(param_1 + 2);
  }
  FUN_019bb7e0(param_1[0x3b],param_1[0x3c]);
  if (param_1[0x38] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x38],param_1[0x39]);
  return;
}

