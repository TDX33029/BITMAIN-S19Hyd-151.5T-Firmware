// FUN_00adbb98 @ 00adbb98 size=476 calls_out=6 calls_in=6
// strings: 

void FUN_00adbb98(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  piVar2 = *(int **)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d02d40(*(undefined4 *)(param_1 + 4));
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 != 0) {
    iVar9 = *(int *)(param_1 + 0xc);
    iVar8 = 0;
    do {
      puVar3 = (undefined4 *)(iVar9 + iVar8 * 8);
      piVar2 = (int *)*puVar3;
      iVar8 = iVar8 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*puVar3,puVar3[1]);
      }
    } while (iVar8 != iVar4);
  }
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc));
  }
  FUN_008e1498(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 0x2c);
  if (iVar4 != 0) {
    piVar2 = (int *)(iVar4 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar8 + -1;
    DataMemoryBarrier(0xb);
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar4 + 0x10)) {
        puVar5 = (uint *)(iVar4 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar5 = (uint *)(iVar4 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar7 = *puVar5;
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = uVar7 | 2;
      DataMemoryBarrier(0xb);
      if (uVar7 == 0) {
        iVar8 = *(int *)(iVar4 + 0x18);
        *(undefined4 *)(iVar4 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar1);
        *puVar5 = *puVar5 & 0xfffffffd;
        if (iVar8 != 0) {
          (**(code **)(iVar8 + 4))(*(undefined4 *)(iVar4 + 0x1c));
        }
      }
    }
    piVar2 = *(int **)(param_1 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078459c(*(undefined4 *)(param_1 + 0x2c));
    }
  }
  piVar2 = *(int **)(param_1 + 0x24);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
    return;
  }
  return;
}

