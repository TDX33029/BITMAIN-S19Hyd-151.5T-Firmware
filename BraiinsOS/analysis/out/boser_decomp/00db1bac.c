// FUN_00db1bac @ 00db1bac size=84 calls_out=3 calls_in=2
// strings: 

void FUN_00db1bac(int param_1)

{
  if (*(char *)(param_1 + 0x194) != '\x03') {
    return;
  }
  FUN_008b6720(param_1 + 0xd4);
  if (*(char *)(param_1 + 0x8c) == '\x03') {
    FUN_00db1768(param_1);
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200));
  if (*(int *)(param_1 + 0xb8) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
  return;
}

