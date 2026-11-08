// FUN_00a618a0 @ 00a618a0 size=76 calls_out=3 calls_in=2
// strings: 

void FUN_00a618a0(int param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x03') {
    if (*(char *)(param_1 + 0xe8) == '\x03') {
      FUN_00b99500(param_1 + 0x2c);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x20) == '\x04') {
    FUN_01431b40(param_1 + 0x38);
    FUN_00a55a24(param_1 + 0x28);
    return;
  }
  return;
}

