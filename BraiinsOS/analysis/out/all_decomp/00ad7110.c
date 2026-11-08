// FUN_00ad7110 @ 00ad7110 size=544 calls_out=4 calls_in=3
// strings: 

void FUN_00ad7110(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  
  cVar1 = *(char *)(param_1 + 0x1c);
  if (cVar1 == '\0') {
    FUN_00ac9c30(param_1);
    piVar3 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    goto LAB_00ad7314;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x3c) == '\x03') {
      iVar4 = param_1 + 0x2c;
    }
    else {
      if (*(char *)(param_1 + 0x3c) != '\0') goto LAB_00ad72ec;
      iVar4 = param_1 + 0x20;
    }
    FUN_00ac9c30(iVar4);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x30) == '\0') {
      piVar3 = *(int **)(param_1 + 0x24);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(*(undefined4 *)(param_1 + 0x24));
      }
      piVar3 = *(int **)(param_1 + 0x2c);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1a50(*(undefined4 *)(param_1 + 0x2c));
      }
    }
    iVar4 = *(int *)(param_1 + 0x20);
    if (iVar4 != 0) {
      piVar3 = (int *)(iVar4 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      DataMemoryBarrier(0xb);
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar4 + 0x10)) {
          puVar6 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar2);
          *puVar6 = *puVar6 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar6 = (uint *)(iVar4 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar7 = *puVar6;
          bVar2 = (bool)hasExclusiveAccess(puVar6);
        } while (!bVar2);
        *puVar6 = uVar7 | 2;
        DataMemoryBarrier(0xb);
        if (uVar7 == 0) {
          iVar5 = *(int *)(iVar4 + 0x18);
          *(undefined4 *)(iVar4 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar6);
          } while (!bVar2);
          *puVar6 = *puVar6 & 0xfffffffd;
          if (iVar5 != 0) {
            (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar4 + 0x1c));
          }
        }
      }
      piVar3 = *(int **)(param_1 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078cf4c(*(undefined4 *)(param_1 + 0x20));
      }
    }
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
LAB_00ad72ec:
  if (*(char *)(param_1 + 0x1d) == '\0') {
    return;
  }
  piVar3 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + -1;
LAB_00ad7314:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1a50(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}

