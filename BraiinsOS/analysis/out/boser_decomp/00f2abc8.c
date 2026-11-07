// FUN_00f2abc8 @ 00f2abc8 size=76 calls_out=3 calls_in=1
// strings: 

void FUN_00f2abc8(int *param_1)

{
  if (*param_1 == 0) {
    if (param_1[2] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[2],param_1[3]);
    FUN_005f76e0(param_1 + 5);
    return;
  }
  if (*param_1 == 1) {
    FUN_00f29ea4(param_1 + 2);
    return;
  }
  return;
}

