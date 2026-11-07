// FUN_00a93080 @ 00a93080 size=124 calls_out=1 calls_in=2
// strings: 

void FUN_00a93080(int param_1)

{
  if (*(int *)(param_1 + 0x60) != -0x80000000) {
    FUN_0132b958(*(int *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),8,0x28);
  }
  if (*(int *)(param_1 + 0x88) != -0x80000000) {
    FUN_0132b958(*(int *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),8,0x28);
  }
  if (*(int *)(param_1 + 0xb0) != -0x80000000) {
    FUN_0132b958(*(int *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4),8,0x28);
  }
  if (*(int *)(param_1 + 0xd8) == -0x80000000) {
    return;
  }
  FUN_0132b958(*(int *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),8,0x28);
  return;
}

