// FUN_00a41228 @ 00a41228 size=268 calls_out=6 calls_in=2
// strings: 

void FUN_00a41228(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (*(char *)(param_1 + 0x14c) == '\x03') {
    if (((*(int *)(param_1 + 0xe0) == 1) && (*(char *)(param_1 + 0xe4) != '\x04')) &&
       (*(char *)(param_1 + 0xe4) == '\x03')) {
      puVar2 = *(undefined4 **)(param_1 + 0xe8);
      uVar4 = *puVar2;
      puVar5 = (undefined4 *)puVar2[1];
      pcVar1 = (code *)*puVar5;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(uVar4);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      thunk_FUN_016d3fb4(puVar2);
    }
    FUN_00a41410(param_1 + 0xf4);
    FUN_00a41410(param_1 + 0x120);
    piVar3 = (int *)(param_1 + 0xd0);
    *(undefined2 *)(param_1 + 0x14d) = 0;
    if (*piVar3 != 2) {
      FUN_00a86e98(piVar3);
      if (*(int *)(param_1 + 0xdc) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(piVar3);
    }
    piVar3 = (int *)(param_1 + 0xc0);
    *(undefined1 *)(param_1 + 0x14f) = 0;
    if (*piVar3 != 2) {
      FUN_00a86e98(piVar3);
      if (*(int *)(param_1 + 0xcc) != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(piVar3);
    }
    *(undefined1 *)(param_1 + 0x150) = 0;
    param_1 = param_1 + 0x60;
  }
  else if (*(char *)(param_1 + 0x14c) != '\0') {
    return;
  }
  FUN_00d97900(param_1);
  return;
}

