// FUN_00b76c74 @ 00b76c74 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_00b76c74(int param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x03') {
    if (*(short *)(param_1 + 0x3c) == 3) {
      FUN_0187266c(*(undefined1 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x38) == '\x04') {
    FUN_00b76b8c(param_1 + 0x3c);
    return;
  }
  return;
}

