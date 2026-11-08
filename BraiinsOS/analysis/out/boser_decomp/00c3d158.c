// FUN_00c3d158 @ 00c3d158 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_00c3d158(int param_1)

{
  if (*(char *)(param_1 + 0x3c) == '\0') {
    FUN_01443048(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  }
  else {
    if (*(char *)(param_1 + 0x3c) != '\x03') {
      return;
    }
    FUN_0175d85c(param_1 + 0x34);
    FUN_01443048(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  }
  FUN_0175d85c(param_1 + 0x2c);
  return;
}

