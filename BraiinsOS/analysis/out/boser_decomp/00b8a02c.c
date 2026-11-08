// FUN_00b8a02c @ 00b8a02c size=112 calls_out=1 calls_in=2
// strings: 

void FUN_00b8a02c(int *param_1)

{
  if (*param_1 == 2) {
    return;
  }
  if (param_1[4] != -0x80000000) {
    FUN_019bb7e0(param_1[4],param_1[5]);
  }
  if (param_1[0xc] != -0x80000000) {
    FUN_019bb7e0(param_1[0xc],param_1[0xd]);
  }
  if (param_1[0x14] != -0x80000000) {
    FUN_019bb7e0(param_1[0x14],param_1[0x15]);
  }
  if (param_1[0x1c] != -0x80000000) {
    FUN_019bb7e0(param_1[0x1c],param_1[0x1d]);
  }
  if (param_1[0x24] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0x24],param_1[0x25]);
  return;
}

