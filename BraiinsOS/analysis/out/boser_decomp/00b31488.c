// FUN_00b31488 @ 00b31488 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_00b31488(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00b311e8(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00b31328(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

