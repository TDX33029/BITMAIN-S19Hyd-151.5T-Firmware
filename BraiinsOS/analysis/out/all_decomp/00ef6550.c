// FUN_00ef6550 @ 00ef6550 size=180 calls_out=5 calls_in=2
// strings: 

void FUN_00ef6550(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x14c) == '\x03') {
    FUN_00ef66a0(param_1 + 0xe0);
    piVar1 = (int *)(param_1 + 0xd0);
    *(undefined2 *)(param_1 + 0x14d) = 0;
    if (*piVar1 != 2) {
      FUN_00a86e98(piVar1);
      if (*(int *)(param_1 + 0xdc) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(piVar1);
    }
    piVar1 = (int *)(param_1 + 0xc0);
    *(undefined1 *)(param_1 + 0x14f) = 0;
    if (*piVar1 != 2) {
      FUN_00a86e98(piVar1);
      if (*(int *)(param_1 + 0xcc) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(piVar1);
    }
    *(undefined1 *)(param_1 + 0x150) = 0;
    FUN_00d97900(param_1 + 0x60);
    return;
  }
  if (*(char *)(param_1 + 0x14c) == '\0') {
    FUN_00d97900(param_1);
    return;
  }
  return;
}

