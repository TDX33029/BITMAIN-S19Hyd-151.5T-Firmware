// FUN_00d4f404 @ 00d4f404 size=32 calls_out=2 calls_in=1
// strings: 

void FUN_00d4f404(int param_1)

{
  if (*(char *)(param_1 + 0x94) == '\0') {
    FUN_00d4f4f4();
    return;
  }
  if (*(char *)(param_1 + 0x94) == '\x03') {
    FUN_00d4f368(param_1 + 0x2c);
    return;
  }
  return;
}

