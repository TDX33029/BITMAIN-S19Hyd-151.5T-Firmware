// FUN_00b8100c @ 00b8100c size=52 calls_out=1 calls_in=1
// strings: 

void FUN_00b8100c(int param_1)

{
  if (*(char *)(param_1 + 0x3d) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x2c) == '\x03') {
    FUN_00b71be0(param_1 + 0x18);
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}

