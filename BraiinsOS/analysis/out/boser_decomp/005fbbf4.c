// FUN_005fbbf4 @ 005fbbf4 size=92 calls_out=2 calls_in=2
// strings: 

void FUN_005fbbf4(int param_1)

{
  if (*(char *)(param_1 + 0x149) == '\0') {
    if (*(int *)(param_1 + 0x13c) == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*(int *)(param_1 + 0x13c),*(undefined4 *)(param_1 + 0x140));
    return;
  }
  if (*(char *)(param_1 + 0x149) != '\x03') {
    return;
  }
  FUN_005fbe38(param_1);
  if (*(int *)(param_1 + 0x130) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x134));
  }
  *(undefined1 *)(param_1 + 0x148) = 0;
  return;
}

