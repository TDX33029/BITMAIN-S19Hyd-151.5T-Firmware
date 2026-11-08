// FUN_008ee6d0 @ 008ee6d0 size=92 calls_out=2 calls_in=2
// strings: 

void FUN_008ee6d0(int param_1)

{
  if (*(char *)(param_1 + 0x6c4) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x6ac),*(undefined4 *)(param_1 + 0x6b0));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x6b8),*(undefined4 *)(param_1 + 0x6bc));
    if (*(int *)(param_1 + 0x6a0) == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*(int *)(param_1 + 0x6a0),*(undefined4 *)(param_1 + 0x6a4));
    return;
  }
  if (*(char *)(param_1 + 0x6c4) == '\x03') {
    FUN_008ee584(param_1);
    return;
  }
  return;
}

