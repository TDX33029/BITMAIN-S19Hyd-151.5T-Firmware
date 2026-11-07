// FUN_013e1100 @ 013e1100 size=52 calls_out=3 calls_in=2
// strings: 

void FUN_013e1100(int *param_1)

{
  if (*param_1 == -0x80000000) {
    FUN_013f476c(param_1 + 1);
    return;
  }
  FUN_013e1148(param_1);
  FUN_019bb7e0(param_1[0x1a],param_1[0x1b]);
  return;
}

