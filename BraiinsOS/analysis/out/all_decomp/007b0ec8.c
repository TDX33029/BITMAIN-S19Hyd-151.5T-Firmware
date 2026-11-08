// FUN_007b0ec8 @ 007b0ec8 size=120 calls_out=6 calls_in=1
// strings: 

void FUN_007b0ec8(int param_1)

{
  if (*(char *)(param_1 + 0xb20) == '\0') {
    FUN_007b18fc(param_1 + 0x10);
    FUN_005e6cdc(param_1);
    if (*(int *)(param_1 + 0xc) != -1) {
      FUN_016dffb2();
    }
    FUN_00a414e8(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xb20) == '\x03') {
    FUN_007b1510(param_1 + 0x860);
    FUN_007b18fc(param_1 + 0x4a0);
    *(undefined1 *)(param_1 + 0xb21) = 0;
    FUN_007b1778(param_1 + 0x3d0);
    *(undefined1 *)(param_1 + 0xb24) = 0;
    *(undefined2 *)(param_1 + 0xb22) = 0;
    return;
  }
  return;
}

