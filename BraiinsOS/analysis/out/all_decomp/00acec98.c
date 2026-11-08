// FUN_00acec98 @ 00acec98 size=764 calls_out=7 calls_in=2
// strings: 

void FUN_00acec98(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  cVar1 = *(char *)(param_1 + 0x1c);
  if (cVar1 == '\0') {
    FUN_00ac9c30(param_1);
    piVar2 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar10 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar10);
    *piVar2 = iVar3 + -1;
    goto LAB_00acef48;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x3c) == '\x03') {
      iVar3 = param_1 + 0x2c;
LAB_00aced40:
      FUN_00ac9c30(iVar3);
    }
    else if (*(char *)(param_1 + 0x3c) == '\0') {
      iVar3 = param_1 + 0x20;
      goto LAB_00aced40;
    }
    cVar1 = *(char *)(param_1 + 0x1d);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x3c);
    if (cVar1 == '\0') {
      piVar2 = *(int **)(param_1 + 0x24);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar10 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar10);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(*(undefined4 *)(param_1 + 0x24));
      }
      piVar2 = *(int **)(param_1 + 0x2c);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar10 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar10);
      *piVar2 = iVar3 + -1;
LAB_00acee10:
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00d0668c(*(undefined4 *)(param_1 + 0x2c));
      }
    }
    else {
      if (cVar1 == '\x03') {
        if (*(int *)(param_1 + 0x40) != 0) {
          FUN_00c8204c(*(int *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),1);
        }
LAB_00aced6c:
        piVar2 = *(int **)(param_1 + 0x30);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar10 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar10);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0155edc8(*(undefined4 *)(param_1 + 0x30));
        }
        piVar2 = *(int **)(param_1 + 0x2c);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar10 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar10);
        *piVar2 = iVar3 + -1;
        goto LAB_00acee10;
      }
      if (cVar1 == '\x04') {
        cVar1 = *(char *)(param_1 + 0x58);
        bVar10 = cVar1 == '\x03';
        if (bVar10) {
          cVar1 = *(char *)(param_1 + 0x54);
        }
        if (bVar10 && cVar1 == '\x03') {
          uVar8 = *(undefined4 *)(param_1 + 0x4c);
          puVar9 = *(undefined4 **)(param_1 + 0x50);
          pcVar6 = (code *)*puVar9;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(uVar8);
          }
          if (puVar9[1] != 0) {
            thunk_FUN_016d3fb4(uVar8);
          }
        }
        FUN_00c822ec(*(undefined4 *)(param_1 + 0x38));
        goto LAB_00aced6c;
      }
    }
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar3 != 0) {
      piVar2 = (int *)(iVar3 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar10 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar10);
      *piVar2 = iVar4 + -1;
      DataMemoryBarrier(0xb);
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar3 + 0x10)) {
          puVar5 = (uint *)(iVar3 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar10 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar10);
          *puVar5 = *puVar5 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar5 = (uint *)(iVar3 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar7 = *puVar5;
          bVar10 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar10);
        *puVar5 = uVar7 | 2;
        DataMemoryBarrier(0xb);
        if (uVar7 == 0) {
          iVar4 = *(int *)(iVar3 + 0x18);
          *(undefined4 *)(iVar3 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar10 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar10);
          *puVar5 = *puVar5 & 0xfffffffd;
          if (iVar4 != 0) {
            (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar3 + 0x1c));
          }
        }
      }
      piVar2 = *(int **)(param_1 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar10 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar10);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
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
  piVar2 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar10 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar10);
  *piVar2 = iVar3 + -1;
LAB_00acef48:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d0668c(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}

