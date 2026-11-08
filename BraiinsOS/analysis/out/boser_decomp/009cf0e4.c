// FUN_009cf0e4 @ 009cf0e4 size=76 calls_out=2 calls_in=2
// strings: 

void FUN_009cf0e4(int *param_1)

{
  if ((*param_1 == 0 && param_1[1] == 0) || ((char)param_1[0x56] != '\x03')) {
    return;
  }
  FUN_008b6720(param_1 + 0x31);
  FUN_019bb7e0(param_1[0x1c],param_1[0x1d]);
  if (param_1[0x19] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x19],param_1[0x1a]);
  return;
}

