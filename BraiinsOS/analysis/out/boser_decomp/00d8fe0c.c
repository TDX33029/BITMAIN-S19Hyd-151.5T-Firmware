// FUN_00d8fe0c @ 00d8fe0c size=68 calls_out=1 calls_in=3
// strings: 

void FUN_00d8fe0c(int *param_1)

{
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  if (param_1[0xc] != -0x80000000) {
    FUN_019bb7e0(param_1[0xc],param_1[0xd]);
  }
  if (param_1[0xf] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0xf],param_1[0x10]);
  return;
}

