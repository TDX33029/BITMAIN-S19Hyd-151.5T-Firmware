// FUN_00b9e3b8 @ 00b9e3b8 size=840 calls_out=9 calls_in=3
// strings: 

void FUN_00b9e3b8(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa4));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c));
  }
  if ((*(uint *)(param_1 + 0x20) & 0x7fffffff) == 0) {
    iVar2 = *(int *)(param_1 + 0x120);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
    iVar2 = *(int *)(param_1 + 0x120);
  }
  if (iVar2 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x124));
  }
  iVar2 = *(int *)(param_1 + 0x18c);
  if (iVar2 != 0) {
    piVar6 = (int *)(iVar2 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar4 + -1;
    DataMemoryBarrier(0xb);
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
        puVar5 = (uint *)(iVar2 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar5 = (uint *)(iVar2 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar5;
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar4 = *(int *)(iVar2 + 0x18);
        *(undefined4 *)(iVar2 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar2 + 0x1c));
        }
      }
    }
    piVar6 = *(int **)(param_1 + 0x18c);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(*(undefined4 *)(param_1 + 0x18c));
    }
  }
  piVar6 = *(int **)(param_1 + 0x198);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1a50(*(undefined4 *)(param_1 + 0x198));
  }
  piVar6 = *(int **)(param_1 + 0x19c);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f2e10(*(undefined4 *)(param_1 + 0x19c));
  }
  piVar6 = (int *)(param_1 + 400);
  if (*piVar6 != 0) {
    FUN_016af0b0(piVar6);
    piVar3 = (int *)*piVar6;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar6);
    }
  }
  FUN_00ac8b80(param_1 + 0x160);
  iVar2 = *(int *)(param_1 + 0x1a8);
  if (iVar2 != 0) {
    piVar6 = (int *)(iVar2 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar4 + -1;
    DataMemoryBarrier(0xb);
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar2 + 0x10)) {
        puVar5 = (uint *)(iVar2 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar5 = (uint *)(iVar2 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar5;
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar4 = *(int *)(iVar2 + 0x18);
        *(undefined4 *)(iVar2 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar2 + 0x1c));
        }
      }
    }
    piVar6 = *(int **)(param_1 + 0x1a8);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078459c(*(undefined4 *)(param_1 + 0x1a8));
    }
  }
  piVar6 = *(int **)(param_1 + 0x1a0);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x1a0));
    return;
  }
  return;
}

