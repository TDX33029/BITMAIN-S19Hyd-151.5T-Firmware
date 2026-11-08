// FUN_00fc8e98 @ 00fc8e98 size=52 calls_out=3 calls_in=0
// strings: 

void FUN_00fc8e98(int *param_1)

{
  if (*param_1 == -0x80000000) {
    FUN_00f80260(param_1 + 1);
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  FUN_00f85da0(param_1 + 3);
  return;
}

