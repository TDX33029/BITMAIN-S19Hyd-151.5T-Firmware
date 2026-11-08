// FUN_0101f3d4 @ 0101f3d4 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_0101f3d4(int param_1)

{
  if (*(char *)(param_1 + 0x4c) == '\x03') {
    FUN_0101f424(param_1 + 0x10);
    param_1 = param_1 + 8;
  }
  else if (*(char *)(param_1 + 0x4c) != '\0') {
    return;
  }
  FUN_0193cf34(param_1);
  return;
}

