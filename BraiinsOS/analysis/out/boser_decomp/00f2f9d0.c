// FUN_00f2f9d0 @ 00f2f9d0 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_00f2f9d0(int *param_1)

{
  if (*param_1 == 0) {
    if (param_1[2] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[2],param_1[3]);
    return;
  }
  if (*param_1 == 1) {
    FUN_00f2fa08(param_1 + 2);
    return;
  }
  return;
}

