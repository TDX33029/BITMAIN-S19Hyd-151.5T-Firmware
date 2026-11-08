// FUN_00e98f48 @ 00e98f48 size=48 calls_out=1 calls_in=0
// strings: 

void FUN_00e98f48(int param_1)

{
  if (*(char *)(param_1 + 0x59c) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x590) == '\x03') {
    FUN_00df9ef8(param_1 + 0x2c8);
    return;
  }
  if (*(char *)(param_1 + 0x590) == '\0') {
    FUN_00df9ef8();
    return;
  }
  return;
}

