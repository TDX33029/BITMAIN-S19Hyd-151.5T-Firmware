// FUN_010c8a78 @ 010c8a78 size=996 calls_out=9 calls_in=0
// strings: 

void FUN_010c8a78(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  
  if (*param_1 == 4 && param_1[1] == 0) {
    return;
  }
  if (*param_1 == 3 && param_1[1] == 0) {
    iVar10 = param_1[2];
    if (iVar10 != 0) {
      puVar8 = (undefined4 *)param_1[3];
      pcVar3 = (code *)*puVar8;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(iVar10);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(iVar10);
      }
    }
    FUN_014432bc(param_1 + 4);
    return;
  }
  if (param_1[7] != 0) {
    thunk_FUN_016d3fb4(param_1[6]);
  }
  iVar14 = param_1[9];
  iVar10 = 0;
  iVar13 = param_1[10];
  iVar9 = 0;
  while (iVar13 != iVar9) {
    iVar11 = iVar14 + iVar10;
    iVar9 = iVar9 + 1;
    if (*(int *)(iVar11 + 0x20) != 0) {
      (**(code **)(*(int *)(iVar11 + 0x20) + 0x10))
                (iVar11 + 0x2c,*(undefined4 *)(iVar11 + 0x24),*(undefined4 *)(iVar11 + 0x28));
    }
    iVar10 = iVar10 + 0x34;
    (**(code **)(*(int *)(iVar11 + 0xc) + 0x10))
              (iVar11 + 0x18,*(undefined4 *)(iVar11 + 0x10),*(undefined4 *)(iVar11 + 0x14));
  }
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(iVar14);
  }
  iVar13 = param_1[0xc];
  iVar9 = param_1[0xd] + 1;
  iVar10 = 0;
  while (iVar9 = iVar9 + -1, iVar9 != 0) {
    iVar14 = iVar13 + iVar10;
    iVar10 = iVar10 + 0x24;
    (**(code **)(*(int *)(iVar14 + 0x10) + 0x10))
              (iVar14 + 0x1c,*(undefined4 *)(iVar14 + 0x14),*(undefined4 *)(iVar14 + 0x18));
  }
  if (param_1[0xb] != 0) {
    thunk_FUN_016d3fb4(iVar13);
  }
  iVar10 = param_1[0x10];
  if (iVar10 != 0) {
    FUN_010cdcec(iVar10);
    thunk_FUN_016d3fb4(iVar10);
  }
  if ((char)param_1[0x12] == '\0') {
    return;
  }
  if ((char)param_1[0x12] != '\x01') {
    piVar4 = (int *)param_1[0x13];
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar10 + -1;
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b53fc(param_1[0x13]);
      }
    }
    FUN_010b6c44(param_1 + 0x14);
    return;
  }
  iVar10 = param_1[0x14];
  DataMemoryBarrier(0xb);
  piVar4 = (int *)(iVar10 + 8);
  do {
    iVar9 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = 0;
  DataMemoryBarrier(0xb);
  if (iVar9 != 0) {
    puVar5 = (uint *)(iVar10 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar5;
      bVar2 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar2);
    *puVar5 = uVar6 | 2;
    DataMemoryBarrier(0xb);
    if (uVar6 == 0) {
      iVar9 = *(int *)(iVar10 + 0xc);
      *(undefined4 *)(iVar10 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar2);
      *puVar5 = *puVar5 & 0xfffffffd;
      if (iVar9 != 0) {
        (**(code **)(iVar9 + 4))(*(undefined4 *)(iVar10 + 0x10));
      }
    }
  }
  piVar4 = (int *)param_1[0x14];
  DataMemoryBarrier(0xb);
  do {
    iVar10 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar10 + -1;
  if (iVar10 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0149d7c4(param_1[0x14]);
  }
  piVar12 = param_1 + 0x13;
  FUN_010cc644(piVar12);
  piVar4 = (int *)*piVar12;
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010b52b8(*piVar12);
    }
  }
  iVar10 = param_1[0x15];
  DataMemoryBarrier(0xb);
  pcVar7 = (char *)(iVar10 + 0x58);
  *(undefined1 *)(iVar10 + 0x68) = 1;
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar7;
    bVar2 = (bool)hasExclusiveAccess(pcVar7);
  } while (!bVar2);
  *pcVar7 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar9 = *(int *)(iVar10 + 0x50);
    *(undefined4 *)(iVar10 + 0x50) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar10 + 0x58) = 0;
    DataMemoryBarrier(0xb);
    if (iVar9 != 0) {
      (**(code **)(iVar9 + 0xc))(*(undefined4 *)(iVar10 + 0x54));
    }
  }
  pcVar7 = (char *)(iVar10 + 100);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar7;
    bVar2 = (bool)hasExclusiveAccess(pcVar7);
  } while (!bVar2);
  *pcVar7 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 == '\0') {
    iVar9 = *(int *)(iVar10 + 0x5c);
    *(undefined4 *)(iVar10 + 0x5c) = 0;
    if (iVar9 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar10 + 100) = 0;
      DataMemoryBarrier(0xb);
    }
    else {
      DataMemoryBarrier(0xb);
      *pcVar7 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar9 + 4))(*(undefined4 *)(iVar10 + 0x60));
    }
  }
  piVar4 = (int *)param_1[0x15];
  DataMemoryBarrier(0xb);
  do {
    iVar10 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar10 + -1;
  if (iVar10 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010b5534(param_1[0x15]);
    return;
  }
  return;
}

