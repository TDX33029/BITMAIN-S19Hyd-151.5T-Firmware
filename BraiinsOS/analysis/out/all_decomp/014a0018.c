// FUN_014a0018 @ 014a0018 size=780 calls_out=3 calls_in=0
// strings: 

void FUN_014a0018(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    piVar4 = *(int **)(param_1 + 0x10);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    }
    if (1 < *(int *)(param_1 + 0x1c) + 1U) {
      piVar4 = (int *)(*(int *)(param_1 + 0x1c) + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_016d3fb4();
      }
    }
    iVar7 = *(int *)(param_1 + 0x18);
    DataMemoryBarrier(0xb);
    pcVar6 = (char *)(iVar7 + 0x10);
    *(undefined1 *)(iVar7 + 0x20) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar6;
      bVar2 = (bool)hasExclusiveAccess(pcVar6);
    } while (!bVar2);
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar3 = *(int *)(iVar7 + 8);
      *(undefined4 *)(iVar7 + 8) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar7 + 0x10) = 0;
      DataMemoryBarrier(0xb);
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar7 + 0xc));
      }
    }
    pcVar6 = (char *)(iVar7 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar6;
      bVar2 = (bool)hasExclusiveAccess(pcVar6);
    } while (!bVar2);
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar3 = *(int *)(iVar7 + 0x14);
      *(undefined4 *)(iVar7 + 0x14) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar7 + 0x1c) = 0;
      DataMemoryBarrier(0xb);
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar7 + 0x18));
      }
    }
    piVar4 = *(int **)(param_1 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089dea4(*(undefined4 *)(param_1 + 0x18));
      return;
    }
  }
  else if (*(char *)(param_1 + 0x54) == '\x03') {
    iVar7 = *(int *)(param_1 + 0x50);
    DataMemoryBarrier(0xb);
    pcVar6 = (char *)(iVar7 + 0x10);
    *(undefined1 *)(iVar7 + 0x20) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar6;
      bVar2 = (bool)hasExclusiveAccess(pcVar6);
    } while (!bVar2);
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar3 = *(int *)(iVar7 + 8);
      *(undefined4 *)(iVar7 + 8) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar7 + 0x10) = 0;
      DataMemoryBarrier(0xb);
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar7 + 0xc));
      }
    }
    pcVar6 = (char *)(iVar7 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar6;
      bVar2 = (bool)hasExclusiveAccess(pcVar6);
    } while (!bVar2);
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar3 = *(int *)(iVar7 + 0x14);
      *(undefined4 *)(iVar7 + 0x14) = 0;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar7 + 0x1c) = 0;
      DataMemoryBarrier(0xb);
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar7 + 0x18));
      }
    }
    piVar4 = *(int **)(param_1 + 0x50);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089dea4(*(undefined4 *)(param_1 + 0x50));
    }
    uVar8 = *(undefined4 *)(param_1 + 0x40);
    puVar9 = *(undefined4 **)(param_1 + 0x44);
    pcVar5 = (code *)*puVar9;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar8);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(uVar8);
    }
    piVar4 = *(int **)(param_1 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    }
    if (1 < *(int *)(param_1 + 0x3c) + 1U) {
      piVar4 = (int *)(*(int *)(param_1 + 0x3c) + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_016d3fb4();
        *(undefined1 *)(param_1 + 0x55) = 0;
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x55) = 0;
    return;
  }
  return;
}

