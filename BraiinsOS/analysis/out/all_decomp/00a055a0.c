// FUN_00a055a0 @ 00a055a0 size=96 calls_out=2 calls_in=1
// strings: 

void FUN_00a055a0(int param_1,int param_2)

{
  if (param_2 != 0) {
    do {
      if ((*(uint *)(param_1 + 0x10) & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14));
      }
      FUN_016a0ad4(param_1 + 4);
      if ((*(uint *)(param_1 + 0x1c) & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x20));
      }
      param_2 = param_2 + -1;
      param_1 = param_1 + 0x28;
    } while (param_2 != 0);
  }
  return;
}

