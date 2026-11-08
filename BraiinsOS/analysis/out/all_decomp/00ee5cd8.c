// FUN_00ee5cd8 @ 00ee5cd8 size=60 calls_out=2 calls_in=0
// strings: 

void FUN_00ee5cd8(int param_1)

{
  if (*(int *)(param_1 + 0x100) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x104));
  }
  if (*(int *)(param_1 + 0x10c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x110));
  }
  FUN_00ee5d14(param_1);
  return;
}

