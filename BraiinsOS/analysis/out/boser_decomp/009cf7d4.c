// FUN_009cf7d4 @ 009cf7d4 size=100 calls_out=3 calls_in=2
// strings: 

void FUN_009cf7d4(int *param_1)

{
  if ((*param_1 == 0 && param_1[1] == 0) || ((char)param_1[0x6f] != '\x03')) {
    return;
  }
  FUN_008b6720(param_1 + 0x3f);
  if ((char)param_1[0x2d] == '\x03') {
    FUN_009cf87c(param_1 + 2);
  }
  FUN_019bb7e0(param_1[0x3b],param_1[0x3c]);
  if (param_1[0x38] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x38],param_1[0x39]);
  return;
}

