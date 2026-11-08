// FUN_00c783c0 @ 00c783c0 size=88 calls_out=3 calls_in=2
// strings: 

void FUN_00c783c0(int param_1)

{
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x5d0) == '\x03') {
      FUN_00bb7a58(param_1 + 0x10);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0xc) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0xac) == '\x03') {
    FUN_00c785f4(param_1 + 0x40);
  }
  FUN_00b1e090(param_1 + 0x10);
  return;
}

