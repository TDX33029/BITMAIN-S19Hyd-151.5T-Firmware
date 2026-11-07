// FUN_00b9a82c @ 00b9a82c size=68 calls_out=1 calls_in=4
// strings: 

void FUN_00b9a82c(int *param_1)

{
  if (*param_1 == 2 && param_1[1] == 0) {
    return;
  }
  if (param_1[8] != -0x80000000) {
    FUN_019bb7e0(param_1[8],param_1[9]);
  }
  if (param_1[0xb] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[0xb],param_1[0xc]);
  return;
}

