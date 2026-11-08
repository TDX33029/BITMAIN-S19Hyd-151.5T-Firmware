// FUN_008038c4 @ 008038c4 size=688 calls_out=5 calls_in=2
// strings: 

void FUN_008038c4(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\0') {
    FUN_007e5878(param_1);
    piVar3 = *(int **)(param_1 + 0xc);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    goto LAB_00803b58;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x40) == '\x03') {
      iVar5 = param_1 + 0x30;
LAB_008039c0:
      FUN_007e5878(iVar5);
    }
    else if (*(char *)(param_1 + 0x40) == '\0') {
      iVar5 = param_1 + 0x24;
      goto LAB_008039c0;
    }
    cVar1 = *(char *)(param_1 + 0x21);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x48) == '\0') {
      piVar3 = *(int **)(param_1 + 0x28);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(*(undefined4 *)(param_1 + 0x28));
      }
      piVar3 = *(int **)(param_1 + 0x30);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
LAB_00803a20:
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
      }
    }
    else if (*(char *)(param_1 + 0x48) == '\x03') {
      uVar9 = *(undefined4 *)(param_1 + 0x40);
      puVar10 = *(undefined4 **)(param_1 + 0x44);
      pcVar4 = (code *)*puVar10;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar9);
      }
      if (puVar10[1] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
      piVar3 = *(int **)(param_1 + 0x38);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(*(undefined4 *)(param_1 + 0x38));
      }
      piVar3 = *(int **)(param_1 + 0x30);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      goto LAB_00803a20;
    }
    iVar5 = *(int *)(param_1 + 0x24);
    if (iVar5 != 0) {
      piVar3 = (int *)(iVar5 + 0x14);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar6 + -1;
      DataMemoryBarrier(0xb);
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        if (0x7fffffff < *(uint *)(iVar5 + 0x10)) {
          puVar7 = (uint *)(iVar5 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar2);
          *puVar7 = *puVar7 & 0x7fffffff;
          DataMemoryBarrier(0xb);
        }
        puVar7 = (uint *)(iVar5 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar8 = *puVar7;
          bVar2 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar2);
        *puVar7 = uVar8 | 2;
        DataMemoryBarrier(0xb);
        if (uVar8 == 0) {
          iVar6 = *(int *)(iVar5 + 0x18);
          *(undefined4 *)(iVar5 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar2);
          *puVar7 = *puVar7 & 0xfffffffd;
          if (iVar6 != 0) {
            (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar5 + 0x1c));
          }
        }
      }
      piVar3 = *(int **)(param_1 + 0x24);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078cf4c(*(undefined4 *)(param_1 + 0x24));
      }
    }
    *(undefined1 *)(param_1 + 0x22) = 0;
    cVar1 = *(char *)(param_1 + 0x21);
  }
  if (cVar1 == '\0') {
    return;
  }
  piVar3 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
LAB_00803b58:
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}

