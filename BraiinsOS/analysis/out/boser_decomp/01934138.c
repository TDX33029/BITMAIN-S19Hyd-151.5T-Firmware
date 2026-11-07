// FUN_01934138 @ 01934138 size=52 calls_out=1 calls_in=2
// strings: 

void FUN_01934138(int *param_1)

{
  if (*param_1 == -0x80000000) {
    return;
  }
  if (param_1[0xd] != -0x80000000) {
    FUN_0192a3c8(param_1 + 4);
  }
  FUN_01934184();
  FUN_0134aee0(*param_1,param_1[1],8,0x48);
  return;
}

