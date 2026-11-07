// FUN_01225714 @ 01225714 size=88 calls_out=2 calls_in=1
// strings: 

void FUN_01225714(int param_1)

{
  if (*(int *)(param_1 + 8) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x14) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x20) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x2c) == -0x80000000) {
    return;
  }
  FUN_0132b958(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),2,4);
  return;
}

