// FUN_014ba880 @ 014ba880 size=608 calls_out=6 calls_in=1
// strings: 

void FUN_014ba880(char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  
  if (*param_1 == '\0') {
    return;
  }
  if (*param_1 != '\x01') {
    piVar4 = *(int **)(param_1 + 4);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b53fc(*(undefined4 *)(param_1 + 4));
      }
    }
    FUN_010b6c44(param_1 + 8);
    return;
  }
  iVar3 = *(int *)(param_1 + 8);
  DataMemoryBarrier(0xb);
  piVar4 = (int *)(iVar3 + 8);
  do {
    iVar7 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = 0;
  DataMemoryBarrier(0xb);
  if (iVar7 != 0) {
    puVar5 = (uint *)(iVar3 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar5;
      bVar2 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar2);
    *puVar5 = uVar8 | 2;
    DataMemoryBarrier(0xb);
    if (uVar8 == 0) {
      iVar7 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar2);
      *puVar5 = *puVar5 & 0xfffffffd;
      if (iVar7 != 0) {
        (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar3 + 0x10));
      }
    }
  }
  piVar4 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0149d7c4(*(undefined4 *)(param_1 + 8));
  }
  piVar9 = (int *)(param_1 + 4);
  FUN_0147d098(piVar9);
  piVar4 = (int *)*piVar9;
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b52b8(*piVar9);
    }
  }
  piVar4 = (int *)(param_1 + 0xc);
  iVar3 = *piVar4;
  DataMemoryBarrier(0xb);
  pcVar6 = (char *)(iVar3 + 0x58);
  *(undefined1 *)(iVar3 + 0x68) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar6;
    bVar2 = (bool)hasExclusiveAccess(pcVar6);
  } while (!bVar2);
  *pcVar6 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar7 = *(int *)(iVar3 + 0x50);
    *(undefined4 *)(iVar3 + 0x50) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar3 + 0x58) = 0;
    DataMemoryBarrier(0xb);
    if (iVar7 != 0) {
      (**(code **)(iVar7 + 0xc))(*(undefined4 *)(iVar3 + 0x54));
    }
  }
  pcVar6 = (char *)(iVar3 + 100);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar6;
    bVar2 = (bool)hasExclusiveAccess(pcVar6);
  } while (!bVar2);
  *pcVar6 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar7 = *(int *)(iVar3 + 0x5c);
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar3 + 100) = 0;
    DataMemoryBarrier(0xb);
    if (iVar7 != 0) {
      (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar3 + 0x60));
    }
  }
  piVar9 = (int *)*piVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010b5534(*piVar4);
    return;
  }
  return;
}

