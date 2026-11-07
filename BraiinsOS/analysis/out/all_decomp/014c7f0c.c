// FUN_014c7f0c @ 014c7f0c size=84 calls_out=2 calls_in=0
// strings: 

void FUN_014c7f0c(int param_1)

{
  if (*(byte *)(param_1 + 0x5f4) - 3 < 2) {
    if (*(int *)(param_1 + 0x5e4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x5e8));
    }
    FUN_014c6e20(param_1 + 0x2f0);
    *(undefined1 *)(param_1 + 0x5f5) = 0;
    return;
  }
  if (*(byte *)(param_1 + 0x5f4) == 0) {
    FUN_014c6e20(param_1);
    return;
  }
  return;
}

