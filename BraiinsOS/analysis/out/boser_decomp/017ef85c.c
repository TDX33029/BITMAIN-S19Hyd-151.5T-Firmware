// FUN_017ef85c @ 017ef85c size=60 calls_out=3 calls_in=0
// strings: 

void FUN_017ef85c(int param_1)

{
  if (*(char *)(param_1 + 0x60) == '\0') {
    FUN_01772dfc(param_1);
    FUN_0177327c(param_1 + 0xc);
    return;
  }
  if (*(char *)(param_1 + 0x60) == '\x03') {
    FUN_017bf184(param_1 + 0x30);
    return;
  }
  return;
}

