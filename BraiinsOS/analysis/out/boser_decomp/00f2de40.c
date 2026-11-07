// FUN_00f2de40 @ 00f2de40 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_00f2de40(int param_1)

{
  if (*(char *)(param_1 + 0x6c) == '\x03') {
    FUN_0101f424(param_1 + 0x30);
    param_1 = param_1 + 0x18;
  }
  else if (*(char *)(param_1 + 0x6c) != '\0') {
    return;
  }
  FUN_00d38274(param_1);
  return;
}

