// FUN_009d0004 @ 009d0004 size=76 calls_out=2 calls_in=3
// strings: 

void FUN_009d0004(int *param_1)

{
  if ((*param_1 == 0 && param_1[1] == 0) || ((char)param_1[0x4f] != '\x03')) {
    return;
  }
  FUN_008b6720(param_1 + 0x2a);
  FUN_019bb7e0(param_1[0x1a],param_1[0x1b]);
  if (param_1[0x17] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x17],param_1[0x18]);
  return;
}

