// FUN_009df0d4 @ 009df0d4 size=76 calls_out=3 calls_in=2
// strings: 

void FUN_009df0d4(int param_1)

{
  if (*(char *)(param_1 + 0x58) == '\0') {
    FUN_009df158(param_1 + 0x4c);
    FUN_009df188(param_1 + 0x30);
    return;
  }
  if (*(char *)(param_1 + 0x58) == '\x03') {
    FUN_019faf5c(param_1);
    FUN_009df188(param_1 + 0x20);
    FUN_009df158(param_1 + 0x40);
    return;
  }
  return;
}

