// FUN_00f29e6c @ 00f29e6c size=56 calls_out=2 calls_in=1
// strings: 

void FUN_00f29e6c(int *param_1)

{
  if (*param_1 == 0) {
    if (param_1[2] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[2],param_1[3]);
    return;
  }
  if (*param_1 == 1) {
    FUN_00f29ea4(param_1 + 2);
    return;
  }
  return;
}

