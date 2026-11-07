// FUN_00c00f84 @ 00c00f84 size=64 calls_out=2 calls_in=2
// strings: 

void FUN_00c00f84(int param_1)

{
  if (*(int *)(param_1 + 0x18) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x24) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  }
  if (*(int *)(param_1 + 0x30) == -0x80000000) {
    return;
  }
  FUN_00b1641c((int *)(param_1 + 0x30));
  return;
}

