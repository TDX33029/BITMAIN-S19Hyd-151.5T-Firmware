// FUN_00d40780 @ 00d40780 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_00d40780(int param_1)

{
  if (*(char *)(param_1 + 8) == '\x03') {
    if (*(char *)(param_1 + 0x28) == '\x04') {
      FUN_00a07b4c(param_1 + 0x30);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 8) == '\x04') {
    FUN_00a07b4c(param_1 + 0x100);
    FUN_00ac8e24(param_1 + 0x10);
    return;
  }
  return;
}

