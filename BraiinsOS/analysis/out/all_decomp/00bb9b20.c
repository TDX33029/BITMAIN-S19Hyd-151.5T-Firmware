// FUN_00bb9b20 @ 00bb9b20 size=52 calls_out=2 calls_in=0
// strings: 

void FUN_00bb9b20(int param_1)

{
  if (*(char *)(param_1 + 0x1c8) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x1b4) == '\x03') {
    FUN_00b9e31c(param_1 + 0x150);
  }
  FUN_00ac8e24(param_1 + 0x40);
  return;
}

