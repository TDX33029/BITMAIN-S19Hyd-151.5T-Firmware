// FUN_00b9c0a4 @ 00b9c0a4 size=96 calls_out=1 calls_in=2
// strings: 

void FUN_00b9c0a4(int param_1)

{
  if (*(int *)(param_1 + 0x28) != -0x80000000) {
    FUN_0132b958(*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),8,0x28);
  }
  if (*(int *)(param_1 + 0x50) != -0x80000000) {
    FUN_0132b958(*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),8,0x28);
  }
  if (*(int *)(param_1 + 0x78) == -0x80000000) {
    return;
  }
  FUN_0132b958(*(int *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c),8,0x28);
  return;
}

