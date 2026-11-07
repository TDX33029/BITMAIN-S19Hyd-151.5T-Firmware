// FUN_01703724 @ 01703724 size=48 calls_out=2 calls_in=1
// strings: 

void FUN_01703724(int *param_1)

{
  if (*param_1 == 3) {
    return;
  }
  if (param_1[1] != -0x80000000) {
    FUN_019bb7e0(param_1[1],param_1[2]);
  }
  FUN_0190f040(param_1 + 4);
  return;
}

