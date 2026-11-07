// FUN_00d97574 @ 00d97574 size=508 calls_out=7 calls_in=2
// strings: 

void FUN_00d97574(int param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x264) == '\x03') {
    if (*(char *)(param_1 + 0x25c) == '\x03') {
      if (*(int *)(param_1 + 0x1f0) == 1) {
        puVar4 = *(undefined4 **)(param_1 + 0x1f8);
        if ((*(byte *)(param_1 + 500) < 5) && (*(byte *)(param_1 + 500) != 3)) goto LAB_00d97630;
        uVar5 = *puVar4;
        puVar6 = (undefined4 *)puVar4[1];
        pcVar3 = (code *)*puVar6;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar5);
        }
        if (puVar6[1] != 0) {
          thunk_FUN_016d3fb4(uVar5);
        }
        thunk_FUN_016d3fb4(puVar4);
        uVar2 = *(uint *)(param_1 + 0x204);
        if (uVar2 == 1) goto LAB_00d976a4;
LAB_00d9763c:
        bVar7 = uVar2 == 0;
        if (bVar7) {
          uVar2 = (uint)*(byte *)(param_1 + 0x22c);
        }
        if ((bVar7 && uVar2 == 3) && (*(int *)(param_1 + 0x20c) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x210));
        }
      }
      else {
LAB_00d97630:
        uVar2 = *(uint *)(param_1 + 0x204);
        if (uVar2 != 1) goto LAB_00d9763c;
LAB_00d976a4:
        FUN_00d793d8(param_1 + 0x208);
      }
      uVar2 = *(uint *)(param_1 + 0x230);
      if (uVar2 == 1) {
        FUN_00d793d8(param_1 + 0x234);
      }
      else {
        bVar7 = uVar2 == 0;
        if (bVar7) {
          uVar2 = (uint)*(byte *)(param_1 + 600);
        }
        if ((bVar7 && uVar2 == 3) && (*(int *)(param_1 + 0x238) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x23c));
        }
      }
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
      if (*(char *)(param_1 + 0x25c) != '\0') goto LAB_00d97764;
      piVar1 = (int *)(param_1 + 0x110);
    }
  }
  else {
    if (*(char *)(param_1 + 0x264) != '\0') goto LAB_00d97764;
    piVar1 = (int *)(param_1 + 0x50);
    if (*piVar1 == 3) {
      if (*(char *)(param_1 + 0x54) == '\x03') {
        puVar4 = *(undefined4 **)(param_1 + 0x58);
        uVar5 = *puVar4;
        puVar6 = (undefined4 *)puVar4[1];
        pcVar3 = (code *)*puVar6;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar5);
        }
        if (puVar6[1] != 0) {
          thunk_FUN_016d3fb4(uVar5);
        }
        thunk_FUN_016d3fb4(puVar4);
        FUN_00a07b4c(param_1);
        return;
      }
      goto LAB_00d97764;
    }
  }
  FUN_00d97900(piVar1);
LAB_00d97764:
  FUN_00a07b4c(param_1);
  return;
}

