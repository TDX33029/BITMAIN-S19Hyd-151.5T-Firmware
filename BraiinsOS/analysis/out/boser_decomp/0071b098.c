// FUN_0071b098 @ 0071b098 size=48 calls_out=1 calls_in=1
// strings: 

void FUN_0071b098(int param_1)

{
  if (*(int *)(param_1 + 0x18) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  }
  if (*(int *)(param_1 + 0x24) == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  return;
}

