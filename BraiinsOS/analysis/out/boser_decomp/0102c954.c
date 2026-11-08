// FUN_0102c954 @ 0102c954 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_0102c954(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_0102c6d4(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_0102c814(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

