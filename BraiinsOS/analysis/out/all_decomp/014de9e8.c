// FUN_014de9e8 @ 014de9e8 size=448 calls_out=9 calls_in=1
// strings: 

void FUN_014de9e8(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    FUN_01466814(param_1);
    FUN_0145d5e0(param_1 + 0xb0);
    return;
  }
  if (*(char *)(param_1 + 0xe0) == '\x03') {
    uVar5 = *(undefined4 *)(param_1 + 0xa8);
    puVar6 = *(undefined4 **)(param_1 + 0xac);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    FUN_014dfbdc(param_1 + 0x90);
    piVar2 = *(int **)(param_1 + 0xdc);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01561b24(*(undefined4 *)(param_1 + 0xdc));
    }
    piVar2 = *(int **)(param_1 + 0x74);
    *(undefined1 *)(param_1 + 0xe2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010c353c(*(undefined4 *)(param_1 + 0x74));
    }
    piVar2 = *(int **)(param_1 + 0x78);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
    }
    piVar2 = *(int **)(param_1 + 0x84);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01561b24(*(undefined4 *)(param_1 + 0x84));
    }
    piVar2 = *(int **)(param_1 + 0x88);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149e51c(*(undefined4 *)(param_1 + 0x88));
    }
    if (*(char *)(param_1 + 0x70) != '\x02') {
      (**(code **)(*(int *)(param_1 + 0x60) + 0x10))
                (param_1 + 0x6c,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
    }
    piVar2 = *(int **)(param_1 + 0x58);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
      }
    }
    *(undefined1 *)(param_1 + 0xe3) = 0;
  }
  return;
}

