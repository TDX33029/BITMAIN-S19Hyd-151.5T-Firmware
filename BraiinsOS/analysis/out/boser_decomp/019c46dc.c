// FUN_019c46dc @ 019c46dc size=48 calls_out=1 calls_in=1
// strings: 

void FUN_019c46dc(int param_1)

{
  if (*(int *)(param_1 + 0x10) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x1c) == -0x80000000) {
    return;
  }
  FUN_0134bd64(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}

