// FUN_008f02bc @ 008f02bc size=48 calls_out=1 calls_in=2
// strings: 

void FUN_008f02bc(int param_1)

{
  if (*(char *)(param_1 + 0x67b) == '\x03') {
    FUN_008f0278(param_1);
    *(undefined2 *)(param_1 + 0x678) = 0;
    *(undefined1 *)(param_1 + 0x67a) = 0;
    return;
  }
  return;
}

