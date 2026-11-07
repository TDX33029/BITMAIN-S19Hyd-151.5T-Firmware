// FUN_009df648 @ 009df648 size=76 calls_out=3 calls_in=2
// strings: 

void FUN_009df648(int param_1)

{
  if (*(char *)(param_1 + 0xf8) == '\0') {
    FUN_009df6cc(param_1 + 0x50);
    FUN_009df188(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xf8) == '\x03') {
    FUN_019faf5c(param_1 + 0x30);
    FUN_009df188(param_1 + 0x10);
    FUN_009df6cc(param_1 + 0xa4);
    return;
  }
  return;
}

