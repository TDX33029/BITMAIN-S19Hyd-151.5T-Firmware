// FUN_008dfa38 @ 008dfa38 size=60 calls_out=1 calls_in=2
// strings: 

void FUN_008dfa38(int param_1)

{
  if (*(char *)(param_1 + 0x114) == '\0') {
    FUN_008df9e8(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x114) == '\x03') {
    FUN_008df9e8(param_1 + 0x80);
    *(undefined1 *)(param_1 + 0x115) = 0;
    return;
  }
  return;
}

