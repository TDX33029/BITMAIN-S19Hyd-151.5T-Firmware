// FUN_010e8b10 @ 010e8b10 size=72 calls_out=3 calls_in=1
// strings: 

void FUN_010e8b10(int param_1)

{
  if (*(char *)(param_1 + 0xff6) == '\0') {
    FUN_010e8b98(param_1 + 0x820);
  }
  else {
    if (*(char *)(param_1 + 0xff6) != '\x03') {
      return;
    }
    FUN_010e8b98(param_1);
    FUN_005f312c(param_1 + 0x7c8);
  }
  FUN_005faf6c(param_1 + 0xff0);
  return;
}

