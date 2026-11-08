// FUN_00dd2148 @ 00dd2148 size=60 calls_out=2 calls_in=4
// strings: 

void FUN_00dd2148(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x03') {
    FUN_00dd2194(param_1 + 0x28);
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x04') {
      return;
    }
    FUN_00dd2210(param_1 + 0x28);
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

