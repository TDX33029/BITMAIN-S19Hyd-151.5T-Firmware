// FUN_008f0454 @ 008f0454 size=40 calls_out=2 calls_in=3
// strings: 

void FUN_008f0454(int param_1)

{
  if (*(char *)(param_1 + 0x658) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x64c),*(undefined4 *)(param_1 + 0x650));
    return;
  }
  if (*(char *)(param_1 + 0x658) == '\x03') {
    FUN_008f036c();
    return;
  }
  return;
}

