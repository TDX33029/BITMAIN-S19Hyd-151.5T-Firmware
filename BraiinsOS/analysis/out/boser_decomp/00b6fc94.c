// FUN_00b6fc94 @ 00b6fc94 size=68 calls_out=2 calls_in=2
// strings: 

void FUN_00b6fc94(int param_1)

{
  if (*(char *)(param_1 + 0x69) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x55) == '\x03') {
    FUN_00740564(param_1);
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}

