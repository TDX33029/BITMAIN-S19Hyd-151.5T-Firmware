// FUN_00c8402c @ 00c8402c size=860 calls_out=10 calls_in=1
// strings: 

void FUN_00c8402c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x94) != '\0') {
    if (*(char *)(param_1 + 0x94) == '\x03') {
      FUN_00887914(param_1 + 0x78);
      return;
    }
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x25)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00d0668c(*(undefined4 *)(param_1 + 0x1c));
    }
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 != 0) {
      piVar2 = (int *)(iVar3 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      DataMemoryBarrier(0xb);
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar3 + 0x10)) {
          puVar5 = (uint *)(iVar3 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar1);
          *puVar5 = *puVar5 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar5 = (uint *)(iVar3 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar6 = *puVar5;
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = uVar6 | 2;
        DataMemoryBarrier(0xb);
        if (uVar6 == 0) {
          iVar4 = *(int *)(iVar3 + 0x18);
          *(undefined4 *)(iVar3 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar1);
          *puVar5 = *puVar5 & 0xfffffffd;
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar3 + 0x1c));
          }
        }
      }
      piVar2 = *(int **)(param_1 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f23b4(*(undefined4 *)(param_1 + 4));
      }
    }
    piVar2 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(*(undefined4 *)(param_1 + 0x20));
      FUN_00ac9c30(param_1 + 0x88);
      return;
    }
  default:
    goto switchD_00c84068_caseD_1;
  case 3:
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_00c8204c(*(int *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),1);
    }
    break;
  case 4:
    if (*(byte *)(param_1 + 0x51) - 3 < 2) {
      FUN_00ad7070(param_1 + 0x54);
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2c));
    }
    FUN_00c822ec(*(undefined4 *)(param_1 + 0x18));
    break;
  case 5:
    FUN_00a07b4c(param_1 + 0x28);
  }
  piVar2 = *(int **)(param_1 + 0x14);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x14));
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar3 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    DataMemoryBarrier(0xb);
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar3 + 0x10)) {
        puVar5 = (uint *)(iVar3 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar5 = (uint *)(iVar3 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar5;
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = uVar6 | 2;
      DataMemoryBarrier(0xb);
      if (uVar6 == 0) {
        iVar4 = *(int *)(iVar3 + 0x18);
        *(undefined4 *)(iVar3 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar4 != 0) {
          (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar3 + 0x1c));
        }
      }
    }
    piVar2 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(*(undefined4 *)(param_1 + 0xc));
    }
  }
  piVar2 = *(int **)(param_1 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d0668c(*(undefined4 *)(param_1 + 0x10));
  }
switchD_00c84068_caseD_1:
  FUN_00ac9c30(param_1 + 0x88);
  return;
}

