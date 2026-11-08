// FUN_0127464c @ 0127464c size=80 calls_out=3 calls_in=40
// strings: 

void FUN_0127464c(int *param_1)

{
  if (*param_1 == 0) {
    FUN_0196afa8(param_1 + 1);
    if (param_1[4] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[4],param_1[5]);
    return;
  }
  if ((char)param_1[2] == '\x06') {
    return;
  }
  FUN_00db4764(param_1 + 2);
  return;
}

