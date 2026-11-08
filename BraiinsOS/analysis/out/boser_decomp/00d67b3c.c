// FUN_00d67b3c @ 00d67b3c size=88 calls_out=3 calls_in=2
// strings: 

void FUN_00d67b3c(int param_1)

{
  FUN_019bb7e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (*(int *)(param_1 + 0x2c) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x38) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  }
  FUN_006a41c0(param_1 + 0x14);
  FUN_00b17058(param_1 + 0x20);
  if (*(int *)(param_1 + 0x44) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  return;
}

