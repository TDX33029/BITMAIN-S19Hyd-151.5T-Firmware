// FUN_007371b0 @ 007371b0 size=156 calls_out=4 calls_in=1
// strings: 

void FUN_007371b0(int param_1)

{
  if (*(char *)(param_1 + 0x14c) == '\x03') {
    if ((*(int *)(param_1 + 0xe0) == 1) && (*(char *)(param_1 + 0xe4) != '\x04')) {
      FUN_0069d8a4(*(char *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8));
    }
    FUN_00737328(param_1 + 0xf4);
    FUN_00737328(param_1 + 0x120);
    *(undefined2 *)(param_1 + 0x14d) = 0;
    if (*(int *)(param_1 + 0xd0) != 2) {
      FUN_007372d8();
    }
    *(undefined1 *)(param_1 + 0x14f) = 0;
    if (*(int *)(param_1 + 0xc0) != 2) {
      FUN_007372d8();
    }
    *(undefined1 *)(param_1 + 0x150) = 0;
    param_1 = param_1 + 0x60;
  }
  else if (*(char *)(param_1 + 0x14c) != '\0') {
    return;
  }
  FUN_010a7ed4(param_1);
  return;
}

