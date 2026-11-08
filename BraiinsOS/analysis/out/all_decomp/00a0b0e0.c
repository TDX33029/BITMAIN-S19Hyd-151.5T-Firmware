// FUN_00a0b0e0 @ 00a0b0e0 size=156 calls_out=4 calls_in=2
// strings: 

void FUN_00a0b0e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x21c) == '\x03') {
    FUN_00a0b348(param_1 + 0x148);
    if (*(int *)(param_1 + 0x128) != -0x80000000) {
      if (*(int *)(param_1 + 0x128) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 300));
      }
      if ((*(uint *)(param_1 + 0x134) & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x138));
      }
    }
    if (*(undefined1 **)(param_1 + 0x110) != &DAT_3b9aca00) {
      uVar1 = *(undefined4 *)(param_1 + 0x118);
      FUN_00a07b4c(uVar1);
      thunk_FUN_016d3fb4(uVar1);
    }
    FUN_00a0b1b8(param_1 + 0x40);
    return;
  }
  if (*(char *)(param_1 + 0x21c) == '\0') {
    FUN_00a0b1b8(param_1);
    return;
  }
  return;
}

