// FUN_0141ab58 @ 0141ab58 size=744 calls_out=5 calls_in=2
// strings: 

void FUN_0141ab58(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 0x1c);
  puVar7 = (undefined4 *)(param_1 + 0x10);
  if (iVar9 != 0) {
    puVar8 = *(undefined4 **)(param_1 + 0x20);
    pcVar5 = (code *)*puVar8;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(iVar9);
    }
    if (puVar8[1] != 0) {
      thunk_FUN_016d3fb4(iVar9);
    }
  }
  piVar2 = *(int **)(param_1 + 0x24);
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x24));
  }
  if (*(char *)(param_1 + 0x18) == '\x02') {
    piVar2 = (int *)*puVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149d7c4(*puVar7);
    }
    iVar9 = *(int *)(param_1 + 0x14);
    DataMemoryBarrier(0xb);
    piVar2 = (int *)(iVar9 + 0x84);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      piVar2 = (int *)(iVar9 + 0x24);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = *piVar2 + 1;
      DataMemoryBarrier(0xb);
      iVar3 = FUN_01405d28(iVar9 + 0x20);
      puVar4 = (uint *)(iVar3 + 0xa88);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 | 0x20000;
      puVar4 = (uint *)(iVar9 + 0x48);
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = uVar6 | 2;
      DataMemoryBarrier(0xb);
      if (uVar6 == 0) {
        iVar3 = *(int *)(iVar9 + 0x40);
        *(undefined4 *)(iVar9 + 0x40) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = 0;
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar9 + 0x44));
        }
      }
    }
    piVar2 = *(int **)(param_1 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar9 + -1;
  }
  else {
    piVar2 = (int *)*puVar7;
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149d7c4(*puVar7);
    }
    iVar9 = *(int *)(param_1 + 0x14);
    DataMemoryBarrier(0xb);
    piVar2 = (int *)(iVar9 + 0x84);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      piVar2 = (int *)(iVar9 + 0x24);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = *piVar2 + 1;
      DataMemoryBarrier(0xb);
      iVar3 = FUN_01405d28(iVar9 + 0x20);
      puVar4 = (uint *)(iVar3 + 0xa88);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 | 0x20000;
      puVar4 = (uint *)(iVar9 + 0x48);
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar4;
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = uVar6 | 2;
      DataMemoryBarrier(0xb);
      if (uVar6 == 0) {
        iVar3 = *(int *)(iVar9 + 0x40);
        *(undefined4 *)(iVar9 + 0x40) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar1);
        *puVar4 = 0;
        if (iVar3 != 0) {
          (**(code **)(iVar3 + 4))(*(undefined4 *)(iVar9 + 0x44));
        }
      }
    }
    piVar2 = *(int **)(param_1 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar9 + -1;
  }
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143ea24(*(undefined4 *)(param_1 + 0x14));
    return;
  }
  return;
}

