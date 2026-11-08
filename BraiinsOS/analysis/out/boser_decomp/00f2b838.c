// FUN_00f2b838 @ 00f2b838 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_00f2b838(int param_1)

{
  if (*(char *)(param_1 + 0x91) == '\0') {
    param_1 = param_1 + 0x30;
  }
  else {
    if (*(char *)(param_1 + 0x91) != '\x03') {
      return;
    }
    FUN_00f2b888(param_1 + 0x60);
  }
  FUN_00f2b720(param_1);
  return;
}

