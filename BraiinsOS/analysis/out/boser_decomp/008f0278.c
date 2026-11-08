// FUN_008f0278 @ 008f0278 size=68 calls_out=2 calls_in=2
// strings: 

void FUN_008f0278(int param_1)

{
  if (*(char *)(param_1 + 0x668) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x650),*(undefined4 *)(param_1 + 0x654));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x65c),*(undefined4 *)(param_1 + 0x660));
    return;
  }
  if (*(char *)(param_1 + 0x668) == '\x03') {
    FUN_008f016c(param_1);
    return;
  }
  return;
}

