// FUN_00b8a09c @ 00b8a09c size=76 calls_out=1 calls_in=2
// strings: 

void FUN_00b8a09c(int *param_1)

{
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  FUN_019bb7e0(param_1[0x1a],param_1[0x1b]);
  if (param_1[0x16] != -0x80000000) {
    FUN_019bb7e0(param_1[0x16],param_1[0x17]);
  }
  if (param_1[0xe] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0xe],param_1[0xf]);
  return;
}

