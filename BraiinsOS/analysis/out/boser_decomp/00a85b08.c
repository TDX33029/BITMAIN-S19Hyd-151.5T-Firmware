// FUN_00a85b08 @ 00a85b08 size=56 calls_out=2 calls_in=2
// strings: 

void FUN_00a85b08(int param_1)

{
  if (*(char *)(param_1 + 0x2c8) == '\x03') {
    FUN_00a859a8(param_1 + 0x30);
    param_1 = param_1 + 0x18;
  }
  else if (*(char *)(param_1 + 0x2c8) != '\0') {
    return;
  }
  FUN_0178e1c4(param_1);
  return;
}

