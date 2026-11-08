// FUN_0074b1e0 @ 0074b1e0 size=92 calls_out=3 calls_in=4
// strings: 

void FUN_0074b1e0(int param_1)

{
  if (*(char *)(param_1 + 0x6ee) == '\0') {
    FUN_0074c4a8(param_1);
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
    return;
  }
  if (*(char *)(param_1 + 0x6ee) == '\x03') {
    FUN_0074c954(param_1 + 0x370);
    *(undefined1 *)(param_1 + 0x6ef) = 0;
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x360),*(undefined4 *)(param_1 + 0x364));
    FUN_0074c4a8(param_1 + 0x1b8);
    return;
  }
  return;
}

