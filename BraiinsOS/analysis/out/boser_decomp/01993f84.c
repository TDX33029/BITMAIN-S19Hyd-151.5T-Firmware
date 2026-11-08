// FUN_01993f84 @ 01993f84 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_01993f84(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  thunk_FUN_01be4678(*(undefined4 *)(param_1 + 0x14));
  return;
}

