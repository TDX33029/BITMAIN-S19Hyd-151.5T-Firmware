// FUN_0101f790 @ 0101f790 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_0101f790(int param_1)

{
  if (*(char *)(param_1 + 0x4c) == '\x03') {
    FUN_0101f424(param_1 + 0x10);
    param_1 = param_1 + 8;
  }
  else if (*(char *)(param_1 + 0x4c) != '\0') {
    return;
  }
  FUN_00d38274(param_1);
  return;
}

