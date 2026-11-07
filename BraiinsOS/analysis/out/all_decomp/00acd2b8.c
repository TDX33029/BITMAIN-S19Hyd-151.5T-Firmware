// FUN_00acd2b8 @ 00acd2b8 size=844 calls_out=15 calls_in=4
// strings: 

void FUN_00acd2b8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int local_1c;
  int local_18;
  uint *local_14;
  
  piVar2 = *(int **)(param_1 + 0x618);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1030(*(undefined4 *)(param_1 + 0x618));
  }
  piVar2 = *(int **)(param_1 + 0x61c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad0bc(*(undefined4 *)(param_1 + 0x61c));
  }
  piVar2 = *(int **)(param_1 + 0x620);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d06258(*(undefined4 *)(param_1 + 0x620));
  }
  piVar2 = *(int **)(param_1 + 0x624);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d03ce0(*(undefined4 *)(param_1 + 0x624));
  }
  FUN_00acd988(param_1);
  FUN_00acda78(param_1 + 0x288);
  iVar3 = *(int *)(param_1 + 0x608);
  piVar2 = (int *)(iVar3 + 0xa4);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    FUN_0163b708(iVar3 + 0x88);
  }
  piVar2 = *(int **)(param_1 + 0x608);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x608));
  }
  iVar3 = *(int *)(param_1 + 0x628);
  puVar6 = (uint *)(iVar3 + 0x80);
  if (*(char *)(iVar3 + 0x7c) == '\0') {
    *(undefined1 *)(iVar3 + 0x7c) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar1);
  *puVar6 = *puVar6 | 1;
  FUN_0163b708(iVar3 + 0x60);
  local_18 = iVar3 + 0x20;
  local_1c = iVar3 + 0x70;
  local_14 = puVar6;
  FUN_00d2f79c(&local_1c);
  FUN_00d2f79c(&local_1c);
  piVar2 = *(int **)(param_1 + 0x628);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d04c88(*(undefined4 *)(param_1 + 0x628));
  }
  iVar3 = *(int *)(param_1 + 0x610);
  piVar2 = (int *)(iVar3 + 0xc4);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    FUN_0163b708(iVar3 + 0x88);
  }
  piVar2 = *(int **)(param_1 + 0x610);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x610));
  }
  FUN_00d2f5ec(*(undefined4 *)(param_1 + 0x62c));
  piVar2 = *(int **)(param_1 + 0x62c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d064cc(*(undefined4 *)(param_1 + 0x62c));
  }
  if (*(undefined1 **)(param_1 + 0x600) != &DAT_3b9aca00) {
    FUN_00c487f4(param_1 + 0x5e8);
  }
  iVar3 = *(int *)(param_1 + 0x630);
  DataMemoryBarrier(0xb);
  piVar2 = (int *)(iVar3 + 0x84);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  DataMemoryBarrier(0xb);
  if (iVar5 == 1) {
    FUN_00c74a60(iVar3 + 0x20);
    puVar6 = (uint *)(iVar3 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      uVar4 = *puVar6;
      bVar1 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar1);
    *puVar6 = uVar4 | 2;
    DataMemoryBarrier(0xb);
    if (uVar4 == 0) {
      iVar5 = *(int *)(iVar3 + 0x40);
      *(undefined4 *)(iVar3 + 0x40) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar6);
      } while (!bVar1);
      *puVar6 = 0;
      if (iVar5 != 0) {
        (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar3 + 0x44));
      }
    }
  }
  piVar2 = *(int **)(param_1 + 0x630);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d04674(*(undefined4 *)(param_1 + 0x630));
    return;
  }
  return;
}

