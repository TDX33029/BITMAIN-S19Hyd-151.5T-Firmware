// FUN_005bee90 @ 005bee90 size=408 calls_out=6 calls_in=5
// strings: 

void FUN_005bee90(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  puVar7 = (uint *)(param_1 + 0x20);
  uVar2 = *puVar7;
  uVar5 = 0xf;
  if ((int)uVar2 < 0) {
    uVar5 = uVar2 ^ 0x80000000;
  }
  if (uVar5 == 0x17) {
    if (*(int *)(param_1 + 0x24) == 0) goto LAB_005bef20;
    puVar7 = (uint *)(param_1 + 0x28);
  }
  else {
    if (uVar5 != 0xf) {
      if (uVar5 != 0xe) goto LAB_005bef20;
      puVar7 = (uint *)(param_1 + 0x24);
      uVar2 = *puVar7;
    }
    if (uVar2 != 0) {
      thunk_FUN_016d3fb4(puVar7[1]);
    }
    if (puVar7[3] != 0) {
      thunk_FUN_016d3fb4(puVar7[4]);
    }
    if ((puVar7[6] & 0x7fffffff) == 0) goto LAB_005bef20;
    puVar7 = puVar7 + 7;
  }
  thunk_FUN_016d3fb4(*puVar7);
LAB_005bef20:
  piVar3 = *(int **)(param_1 + 0x98);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01626f40(*(undefined4 *)(param_1 + 0x98));
  }
  FUN_005c3a18(param_1 + 0x88);
  FUN_005c3320(param_1);
  iVar6 = *(int *)(param_1 + 0x9c);
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(iVar6 + 0x98);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  DataMemoryBarrier(0xb);
  if (iVar4 == 1) {
    FUN_005c9e50(iVar6 + 0x20);
    puVar7 = (uint *)(iVar6 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *puVar7;
      bVar1 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar1);
    *puVar7 = uVar2 | 2;
    DataMemoryBarrier(0xb);
    if (uVar2 == 0) {
      iVar4 = *(int *)(iVar6 + 0x40);
      *(undefined4 *)(iVar6 + 0x40) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar1);
      *puVar7 = 0;
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar6 + 0x44));
      }
    }
  }
  piVar3 = *(int **)(param_1 + 0x9c);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e45658(*(undefined4 *)(param_1 + 0x9c));
    return;
  }
  return;
}

