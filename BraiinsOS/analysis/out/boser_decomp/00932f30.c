// FUN_00932f30 @ 00932f30 size=92 calls_out=2 calls_in=1
// strings: 

void FUN_00932f30(int param_1)

{
  if (*(char *)(param_1 + 0x6c4) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x6ac),*(undefined4 *)(param_1 + 0x6b0));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x6b8),*(undefined4 *)(param_1 + 0x6bc));
    if (*(int *)(param_1 + 0x6a0) == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*(int *)(param_1 + 0x6a0),*(undefined4 *)(param_1 + 0x6a4));
    return;
  }
  if (*(char *)(param_1 + 0x6c4) == '\x03') {
    FUN_00932de4(param_1);
    return;
  }
  return;
}

