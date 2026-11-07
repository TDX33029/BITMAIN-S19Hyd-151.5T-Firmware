// FUN_00f7ede4 @ 00f7ede4 size=96 calls_out=5 calls_in=0
// strings: 

void FUN_00f7ede4(int param_1)

{
  FUN_012840cc(param_1 + 0x40);
  FUN_01139b38(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
  if (*(int *)(param_1 + 0x84) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
  }
  FUN_015d1230();
  if (*(int *)(param_1 + 0x30) == -0x80000000) {
    return;
  }
  FUN_006a41c0((int *)(param_1 + 0x30));
  return;
}

