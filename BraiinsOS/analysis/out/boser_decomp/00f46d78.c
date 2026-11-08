// FUN_00f46d78 @ 00f46d78 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_00f46d78(int param_1)

{
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x114));
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x50) == -0x80000000) {
    return;
  }
  FUN_00f25e18((int *)(param_1 + 0x50));
  return;
}

