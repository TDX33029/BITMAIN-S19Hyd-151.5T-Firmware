// FUN_00a07d74 @ 00a07d74 size=136 calls_out=4 calls_in=2
// strings: 

void FUN_00a07d74(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x204) == '\x03') {
    FUN_00a07f48(param_1 + 0x158);
    if (*(undefined1 **)(param_1 + 0x140) != &DAT_3b9aca00) {
      uVar1 = *(undefined4 *)(param_1 + 0x148);
      FUN_00a07b4c(uVar1);
      thunk_FUN_016d3fb4(uVar1);
    }
    if (*(undefined1 **)(param_1 + 0x128) != &DAT_3b9aca00) {
      uVar1 = *(undefined4 *)(param_1 + 0x130);
      FUN_00a07b4c(uVar1);
      thunk_FUN_016d3fb4(uVar1);
    }
    FUN_00a07e4c(param_1 + 0x48);
    return;
  }
  if (*(char *)(param_1 + 0x204) == '\0') {
    FUN_00a07e4c(param_1);
    return;
  }
  return;
}

