// FUN_00bd7904 @ 00bd7904 size=64 calls_out=2 calls_in=5
// strings: 

void FUN_00bd7904(int param_1)

{
  if (*(char *)(param_1 + 0x134) != '\x03') {
    return;
  }
  FUN_008b6720(param_1 + 0xa0);
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  if (*(int *)(param_1 + 0x54) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  return;
}

