// FUN_00befd44 @ 00befd44 size=56 calls_out=1 calls_in=4
// strings: 

void FUN_00befd44(int param_1)

{
  FUN_019bb7e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (*(int *)(param_1 + 0x14) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x20) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  return;
}

