// FUN_0198cd60 @ 0198cd60 size=100 calls_out=2 calls_in=0
// strings: 

void FUN_0198cd60(int param_1)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 100));
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x70));
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x7c));
  }
  if (*(int *)(param_1 + 0x84) == 0) {
    return;
  }
  thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x88));
  return;
}

