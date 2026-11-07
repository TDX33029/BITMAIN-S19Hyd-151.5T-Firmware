// FUN_00934c88 @ 00934c88 size=56 calls_out=1 calls_in=1
// strings: 

void FUN_00934c88(int param_1)

{
  if (*(int *)(param_1 + 0xd8) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc));
  if (*(int *)(param_1 + 0xcc) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0));
  return;
}

