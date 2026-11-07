// FUN_01a418f8 @ 01a418f8 size=56 calls_out=2 calls_in=1
// strings: 

void FUN_01a418f8(int param_1)

{
  if (*(int *)(param_1 + 0x10) == -0x80000000) {
    return;
  }
  FUN_01272b84(param_1);
  if (*(int *)(param_1 + 0x30) == -0x80000000) {
    return;
  }
  FUN_01a45ab8((int *)(param_1 + 0x30));
  return;
}

