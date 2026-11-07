// FUN_00f98eb0 @ 00f98eb0 size=48 calls_out=2 calls_in=3
// strings: 

void FUN_00f98eb0(int *param_1)

{
  if (*param_1 != -0x80000000) {
    FUN_019bb7e0(*param_1,param_1[1]);
  }
  if (param_1[3] < -0x7ffffffe) {
    return;
  }
  FUN_00f21764(param_1 + 3);
  return;
}

