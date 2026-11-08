// FUN_00f9a440 @ 00f9a440 size=92 calls_out=3 calls_in=1
// strings: 

void FUN_00f9a440(uint *param_1)

{
  if ((*param_1 & 7) != 4) {
    if (*param_1 != 3) {
      FUN_005f6588(param_1);
      return;
    }
    if (param_1[2] != 0x80000000) {
      FUN_019bb7e0(param_1[2],param_1[3]);
      if ((int)param_1[5] < -0x7ffffffe) {
        return;
      }
      FUN_00f21764(param_1 + 5);
      return;
    }
  }
  return;
}

