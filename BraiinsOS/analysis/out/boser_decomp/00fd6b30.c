// FUN_00fd6b30 @ 00fd6b30 size=60 calls_out=1 calls_in=1
// strings: 

void FUN_00fd6b30(int param_1)

{
  if (*(char *)(param_1 + 0x3d) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x2d) == '\x03') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}

