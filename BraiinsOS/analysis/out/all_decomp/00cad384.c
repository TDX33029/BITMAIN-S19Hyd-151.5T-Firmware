// FUN_00cad384 @ 00cad384 size=444 calls_out=4 calls_in=0
// strings: 

void FUN_00cad384(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  
  piVar2 = *(int **)(param_1 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 8));
  }
  piVar7 = *(int **)(param_1 + 0xc);
  piVar2 = piVar7 + 0x65;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_0163b708(piVar7 + 0x22);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar7;
    bVar1 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar1);
  *piVar7 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f17d0(*(undefined4 *)(param_1 + 0xc));
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
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    return;
  }
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
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f23b4(*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}

