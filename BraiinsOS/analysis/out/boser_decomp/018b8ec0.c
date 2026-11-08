// FUN_018b8ec0 @ 018b8ec0 size=44 calls_out=3 calls_in=2
// strings: 

void FUN_018b8ec0(int param_1)

{
  FUN_006a41c0();
  FUN_0134bd64(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x18) == -0x80000000) {
    return;
  }
  FUN_018a8274((int *)(param_1 + 0x18));
  return;
}

