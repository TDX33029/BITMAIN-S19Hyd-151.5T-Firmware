// FUN_00acb61c @ 00acb61c size=616 calls_out=5 calls_in=2
// strings: 

void FUN_00acb61c(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  cVar1 = *(char *)(param_1 + 0x1c);
  if (cVar1 == '\0') {
    FUN_00ac9c30(param_1);
    piVar3 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar6 + -1;
    goto LAB_00acb6fc;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x3c) == '\x03') {
      iVar6 = param_1 + 0x2c;
LAB_00acb6d0:
      FUN_00ac9c30(iVar6);
    }
    else if (*(char *)(param_1 + 0x3c) == '\0') {
      iVar6 = param_1 + 0x20;
      goto LAB_00acb6d0;
    }
    cVar1 = *(char *)(param_1 + 0x1d);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x74) == '\0') {
      piVar3 = *(int **)(param_1 + 0x24);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(*(undefined4 *)(param_1 + 0x24));
      }
      piVar3 = *(int **)(param_1 + 0x2c);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + -1;
LAB_00acb764:
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d030dc(*(undefined4 *)(param_1 + 0x2c));
      }
    }
    else if (*(char *)(param_1 + 0x74) == '\x03') {
      FUN_00acb9a8(param_1 + 0x30);
      piVar3 = *(int **)(param_1 + 0x2c);
      *(undefined1 *)(param_1 + 0x75) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + -1;
      goto LAB_00acb764;
    }
    iVar6 = *(int *)(param_1 + 0x20);
    if (iVar6 != 0) {
      piVar3 = (int *)(iVar6 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      DataMemoryBarrier(0xb);
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar6 + 0x10)) {
          puVar5 = (uint *)(iVar6 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar2);
          *puVar5 = *puVar5 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar5 = (uint *)(iVar6 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar7 = *puVar5;
          bVar2 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar2);
        *puVar5 = uVar7 | 2;
        DataMemoryBarrier(0xb);
        if (uVar7 == 0) {
          iVar4 = *(int *)(iVar6 + 0x18);
          *(undefined4 *)(iVar6 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar2);
          *puVar5 = *puVar5 & 0xfffffffd;
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar6 + 0x1c));
          }
        }
      }
      piVar3 = *(int **)(param_1 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078cf4c(*(undefined4 *)(param_1 + 0x20));
      }
    }
    *(undefined1 *)(param_1 + 0x1e) = 0;
    cVar1 = *(char *)(param_1 + 0x1d);
  }
  if (cVar1 == '\0') {
    return;
  }
  piVar3 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar6 + -1;
LAB_00acb6fc:
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d030dc(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}

