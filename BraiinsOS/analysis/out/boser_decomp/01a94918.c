// FUN_01a94918 @ 01a94918 size=48 calls_out=2 calls_in=1
// strings: 

void FUN_01a94918(int param_1)

{
  if (*(int *)(param_1 + 8) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x14) == -0x80000000) {
    return;
  }
  FUN_0165cbf8((int *)(param_1 + 0x14));
  return;
}

