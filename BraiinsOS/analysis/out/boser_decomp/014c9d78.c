// FUN_014c9d78 @ 014c9d78 size=48 calls_out=1 calls_in=8
// strings: 

void FUN_014c9d78(int param_1)

{
  if (*(int *)(param_1 + 8) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x14) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  return;
}

