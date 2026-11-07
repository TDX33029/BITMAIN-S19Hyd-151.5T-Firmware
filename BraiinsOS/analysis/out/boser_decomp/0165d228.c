// FUN_0165d228 @ 0165d228 size=56 calls_out=3 calls_in=1
// strings: 

void FUN_0165d228(int param_1)

{
  if (*(int *)(param_1 + 0xc) != -0x80000000) {
    FUN_0134bd64(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
  FUN_01a9287c(param_1);
  if (*(int *)(param_1 + 0x18) == -0x80000000) {
    return;
  }
  FUN_0165cbf8((int *)(param_1 + 0x18));
  return;
}

