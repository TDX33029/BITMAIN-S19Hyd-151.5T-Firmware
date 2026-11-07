// FUN_009ce4c4 @ 009ce4c4 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_009ce4c4(int param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x03') {
    if (*(char *)(param_1 + 0x3c) == '\x03') {
      FUN_009cdcac(param_1 + 0x24);
    }
    param_1 = param_1 + 0x10;
  }
  else if (*(char *)(param_1 + 0x40) != '\0') {
    return;
  }
  FUN_0101fb5c(param_1);
  return;
}

