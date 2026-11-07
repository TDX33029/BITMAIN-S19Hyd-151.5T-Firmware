// FUN_00b60c88 @ 00b60c88 size=64 calls_out=1 calls_in=1
// strings: 

void FUN_00b60c88(int param_1)

{
  if (*(int *)(param_1 + 0x10) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x2c) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x48) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  return;
}

