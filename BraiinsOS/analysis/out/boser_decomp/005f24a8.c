// FUN_005f24a8 @ 005f24a8 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_005f24a8(int param_1)

{
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
  if (*(int *)(param_1 + 0x24) < 0) {
    return;
  }
  FUN_019bb7e0(*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  return;
}

