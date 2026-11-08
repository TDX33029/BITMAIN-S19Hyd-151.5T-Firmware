// FUN_019d7a84 @ 019d7a84 size=56 calls_out=2 calls_in=1
// strings: 

void FUN_019d7a84(int *param_1)

{
  if (*param_1 == 1) {
    FUN_019d7880(param_1 + 2);
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (param_1[2] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[2],param_1[3]);
  return;
}

