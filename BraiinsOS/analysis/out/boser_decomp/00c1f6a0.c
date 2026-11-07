// FUN_00c1f6a0 @ 00c1f6a0 size=36 calls_out=2 calls_in=4
// strings: 

void FUN_00c1f6a0(int param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x03') {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
    return;
  }
  if (*(char *)(param_1 + 0x20) == '\x05') {
    FUN_00bd234c(param_1 + 0x24);
    return;
  }
  return;
}

