// FUN_018fa510 @ 018fa510 size=88 calls_out=3 calls_in=2
// strings: 

void FUN_018fa510(int *param_1)

{
  if (*param_1 < -0x7ffffffe) {
    FUN_0134bd64(param_1[1],param_1[2]);
    return;
  }
  FUN_0134bd64(*param_1,param_1[1]);
  FUN_0134aee0(param_1[3],param_1[4],2,8);
  if (param_1[0xb] != -0x80000000) {
    FUN_0134bd64(param_1[0xb],param_1[0xc]);
  }
  FUN_01703ca8(param_1 + 8);
  return;
}

