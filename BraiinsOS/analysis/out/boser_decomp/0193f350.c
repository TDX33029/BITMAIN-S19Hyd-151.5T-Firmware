// FUN_0193f350 @ 0193f350 size=60 calls_out=2 calls_in=5
// strings: 

void FUN_0193f350(int param_1)

{
  if (*(char *)(param_1 + 0x49) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x1c) == '\x03') {
    FUN_009cdcac(param_1 + 4);
  }
  FUN_0193d87c(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}

