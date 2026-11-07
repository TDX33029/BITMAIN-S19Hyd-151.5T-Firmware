// FUN_0146b7d0 @ 0146b7d0 size=640 calls_out=9 calls_in=11
// strings: 

void FUN_0146b7d0(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  
  FUN_01015c1c();
  iVar8 = *(int *)(param_1 + 0x40);
  if (iVar8 != 0) {
    FUN_0148eea4(iVar8);
    thunk_FUN_016d3fb4(iVar8);
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x48) != '\x01') {
    piVar3 = *(int **)(param_1 + 0x4c);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b53fc(*(undefined4 *)(param_1 + 0x4c));
      }
    }
    FUN_010b6c44(param_1 + 0x50);
    return;
  }
  iVar8 = *(int *)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(iVar8 + 8);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = 0;
  DataMemoryBarrier(0xb);
  if (iVar5 != 0) {
    puVar4 = (uint *)(iVar8 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar4;
      bVar2 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar2);
    *puVar4 = uVar6 | 2;
    DataMemoryBarrier(0xb);
    if (uVar6 == 0) {
      iVar5 = *(int *)(iVar8 + 0xc);
      *(undefined4 *)(iVar8 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar2);
      *puVar4 = *puVar4 & 0xfffffffd;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar8 + 0x10));
      }
    }
  }
  piVar3 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0149d7c4(*(undefined4 *)(param_1 + 0x50));
  }
  piVar9 = (int *)(param_1 + 0x4c);
  FUN_0147d098(piVar9);
  piVar3 = (int *)*piVar9;
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b52b8(*piVar9);
    }
  }
  iVar8 = *(int *)(param_1 + 0x54);
  DataMemoryBarrier(0xb);
  pcVar7 = (char *)(iVar8 + 0x58);
  *(undefined1 *)(iVar8 + 0x68) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar7;
    bVar2 = (bool)hasExclusiveAccess(pcVar7);
  } while (!bVar2);
  *pcVar7 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar5 = *(int *)(iVar8 + 0x50);
    *(undefined4 *)(iVar8 + 0x50) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar8 + 0x58) = 0;
    DataMemoryBarrier(0xb);
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 0xc))(*(undefined4 *)(iVar8 + 0x54));
    }
  }
  pcVar7 = (char *)(iVar8 + 100);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar7;
    bVar2 = (bool)hasExclusiveAccess(pcVar7);
  } while (!bVar2);
  *pcVar7 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar5 = *(int *)(iVar8 + 0x5c);
    *(undefined4 *)(iVar8 + 0x5c) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar8 + 100) = 0;
    DataMemoryBarrier(0xb);
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar8 + 0x60));
    }
  }
  piVar3 = *(int **)(param_1 + 0x54);
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010b5534(*(undefined4 *)(param_1 + 0x54));
    return;
  }
  return;
}

