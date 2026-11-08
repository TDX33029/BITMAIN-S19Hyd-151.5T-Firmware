// FUN_00b76664 @ 00b76664 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_00b76664(int param_1)

{
  if (*(char *)(param_1 + 0x1e) == '\x03') {
    if (*(short *)(param_1 + 0x20) == 3) {
      FUN_0187266c(*(undefined1 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x1e) == '\x04') {
    FUN_00b76b8c(param_1 + 0x20);
    return;
  }
  return;
}

