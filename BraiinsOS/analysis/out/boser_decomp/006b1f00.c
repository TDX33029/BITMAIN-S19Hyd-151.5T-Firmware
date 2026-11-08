// FUN_006b1f00 @ 006b1f00 size=72 calls_out=2 calls_in=3
// strings: 

void FUN_006b1f00(int param_1)

{
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x34) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  FUN_011e7044(param_1);
  if (*(int *)(param_1 + 0x40) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  return;
}

