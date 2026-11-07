// FUN_00ead754 @ 00ead754 size=392 calls_out=7 calls_in=1
// strings: 

void FUN_00ead754(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (*(char *)(param_1 + 0x264) == '\x03') {
    if (*(char *)(param_1 + 0x25c) == '\x03') {
      if (((*(int *)(param_1 + 0x1f0) == 1) && (*(char *)(param_1 + 500) != '\x04')) &&
         (*(char *)(param_1 + 500) == '\x03')) {
        puVar3 = *(undefined4 **)(param_1 + 0x1f8);
        uVar4 = *puVar3;
        puVar5 = (undefined4 *)puVar3[1];
        pcVar2 = (code *)*puVar5;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(uVar4);
        }
        if (puVar5[1] != 0) {
          thunk_FUN_016d3fb4(uVar4);
        }
        thunk_FUN_016d3fb4(puVar3);
      }
      FUN_00ea2d18(param_1 + 0x204);
      FUN_00ea2d18(param_1 + 0x230);
      piVar1 = (int *)(param_1 + 0x1e0);
      *(undefined2 *)(param_1 + 0x25d) = 0;
      if (*piVar1 != 2) {
        FUN_00a86e98(piVar1);
        if (*(int *)(param_1 + 0x1ec) != -1) {
          FUN_016dffb2();
        }
        FUN_00a414e8(piVar1);
      }
      piVar1 = (int *)(param_1 + 0x1d0);
      *(undefined1 *)(param_1 + 0x25f) = 0;
      if (*piVar1 != 2) {
        FUN_00a86e98(piVar1);
        if (*(int *)(param_1 + 0x1dc) != -1) {
          FUN_016dffb2();
        }
        FUN_00a414e8(piVar1);
      }
      *(undefined1 *)(param_1 + 0x260) = 0;
      piVar1 = (int *)(param_1 + 0x170);
    }
    else {
      if (*(char *)(param_1 + 0x25c) != '\0') goto LAB_00ead8d0;
      piVar1 = (int *)(param_1 + 0x110);
    }
  }
  else {
    if (*(char *)(param_1 + 0x264) != '\0') goto LAB_00ead8d0;
    piVar1 = (int *)(param_1 + 0x50);
    if (*piVar1 == 3) {
      if (*(char *)(param_1 + 0x54) == '\x03') {
        puVar3 = *(undefined4 **)(param_1 + 0x58);
        uVar4 = *puVar3;
        puVar5 = (undefined4 *)puVar3[1];
        pcVar2 = (code *)*puVar5;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(uVar4);
        }
        if (puVar5[1] != 0) {
          thunk_FUN_016d3fb4(uVar4);
        }
        thunk_FUN_016d3fb4(puVar3);
        FUN_00eaab84(param_1);
        return;
      }
      goto LAB_00ead8d0;
    }
  }
  FUN_00d97900(piVar1);
LAB_00ead8d0:
  FUN_00eaab84(param_1);
  return;
}

