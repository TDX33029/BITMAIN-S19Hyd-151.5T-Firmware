// FUN_005f6008 @ 005f6008 size=32 calls_out=2 calls_in=1
// strings: 

void FUN_005f6008(int param_1)

{
  if (*(char *)(param_1 + 0xec) == '\0') {
    FUN_005fa438();
    return;
  }
  if (*(char *)(param_1 + 0xec) == '\x03') {
    FUN_005fc6ac(param_1 + 0x90);
    return;
  }
  return;
}

