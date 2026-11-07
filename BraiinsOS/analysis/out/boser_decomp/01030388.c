// FUN_01030388 @ 01030388 size=56 calls_out=3 calls_in=1
// strings: 

void FUN_01030388(int param_1)

{
  FUN_010303f0(param_1 + 0x18);
  if (*(int *)(param_1 + 0x14) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x10));
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  return;
}

