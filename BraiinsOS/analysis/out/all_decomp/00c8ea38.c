// FUN_00c8ea38 @ 00c8ea38 size=668 calls_out=3 calls_in=2
// strings: 

void FUN_00c8ea38(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint unaff_r6;
  uint uVar6;
  bool bVar7;
  
  switch(*(undefined1 *)(param_1 + 0x14)) {
  case 0:
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      return;
    }
    piVar4 = (int *)(iVar3 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar4;
      bVar7 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar7);
    *piVar4 = iVar1 + -1;
    DataMemoryBarrier(0xb);
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar3 + 0x10)) {
        puVar2 = (uint *)(iVar3 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar7 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar7);
        *puVar2 = *puVar2 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar2 = (uint *)(iVar3 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar2;
        bVar7 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar7);
      *puVar2 = uVar6 | 2;
      DataMemoryBarrier(0xb);
      if (uVar6 == 0) {
        iVar1 = *(int *)(iVar3 + 0x18);
        *(undefined4 *)(iVar3 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar7 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar7);
        *puVar2 = *puVar2 & 0xfffffffd;
        if (iVar1 != 0) {
          (**(code **)(iVar1 + 4))(*(undefined4 *)(iVar3 + 0x1c));
        }
      }
    }
    piVar4 = *(int **)(param_1 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar4;
      bVar7 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar7);
    *piVar4 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f23b4(*(undefined4 *)(param_1 + 8));
      return;
    }
    return;
  default:
    goto switchD_00c8ea54_caseD_1;
  case 3:
    FUN_00aca278(param_1 + 0x20);
    break;
  case 4:
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 != 0) {
      puVar2 = (uint *)(iVar3 + 0x20);
      do {
        unaff_r6 = *puVar2;
        bVar7 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar7);
      *puVar2 = unaff_r6 | 4;
      DataMemoryBarrier(0xb);
      if ((unaff_r6 & 10) == 8) {
        (**(code **)(*(int *)(iVar3 + 0x10) + 8))(*(undefined4 *)(iVar3 + 0x14));
      }
      if ((unaff_r6 & 2) != 0) {
        iVar1 = *(int *)(iVar3 + 8);
        puVar5 = *(undefined4 **)(iVar3 + 0xc);
        *(undefined4 *)(iVar3 + 8) = 0;
        if (iVar1 != 0 && puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(puVar5);
        }
      }
      piVar4 = *(int **)(param_1 + 0x18);
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar7 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar7);
        *piVar4 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4380(*(undefined4 *)(param_1 + 0x18));
        }
      }
    }
    break;
  case 5:
    break;
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  bVar7 = *(char *)(param_1 + 0x10) != '\0';
  if (bVar7) {
    unaff_r6 = *(uint *)(param_1 + 0x18);
  }
  if (bVar7 && unaff_r6 != 0) {
    puVar2 = (uint *)(unaff_r6 + 0x20);
    do {
      uVar6 = *puVar2;
      bVar7 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar7);
    *puVar2 = uVar6 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar6 & 10) == 8) {
      (**(code **)(*(int *)(unaff_r6 + 0x10) + 8))(*(undefined4 *)(unaff_r6 + 0x14));
    }
    if ((uVar6 & 2) != 0) {
      iVar3 = *(int *)(unaff_r6 + 8);
      puVar5 = *(undefined4 **)(unaff_r6 + 0xc);
      *(undefined4 *)(unaff_r6 + 8) = 0;
      if (iVar3 != 0 && puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(puVar5);
      }
    }
    piVar4 = *(int **)(param_1 + 0x18);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar7 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar7);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4380(*(undefined4 *)(param_1 + 0x18));
      }
    }
  }
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
switchD_00c8ea54_caseD_1:
  return;
}

