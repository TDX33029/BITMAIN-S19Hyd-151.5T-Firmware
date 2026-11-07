// FUN_0141852c @ 0141852c size=588 calls_out=6 calls_in=3
// strings: 

void FUN_0141852c(char *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
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
    iVar6 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = 0;
  DataMemoryBarrier(0xb);
  if (iVar6 != 0) {
    puVar5 = (uint *)(iVar3 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar5;
      bVar2 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar2);
    *puVar5 = uVar7 | 2;
    DataMemoryBarrier(0xb);
    if (uVar7 == 0) {
      iVar6 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar2);
      *puVar5 = *puVar5 & 0xfffffffd;
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar3 + 0x10));
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
  FUN_014164ec(piVar9);
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
  iVar3 = *(int *)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  pcVar8 = (char *)(iVar3 + 0x58);
  *(undefined1 *)(iVar3 + 0x68) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar8;
    bVar2 = (bool)hasExclusiveAccess(pcVar8);
  } while (!bVar2);
  *pcVar8 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar6 = *(int *)(iVar3 + 0x50);
    *(undefined4 *)(iVar3 + 0x50) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar3 + 0x58) = 0;
    DataMemoryBarrier(0xb);
    if (iVar6 != 0) {
      (**(code **)(iVar6 + 0xc))(*(undefined4 *)(iVar3 + 0x54));
    }
  }
  pcVar8 = (char *)(iVar3 + 100);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar8;
    bVar2 = (bool)hasExclusiveAccess(pcVar8);
  } while (!bVar2);
  *pcVar8 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar6 = *(int *)(iVar3 + 0x5c);
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar3 + 100) = 0;
    DataMemoryBarrier(0xb);
    if (iVar6 != 0) {
      (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar3 + 0x60));
    }
  }
  piVar4 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010b5534(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}

