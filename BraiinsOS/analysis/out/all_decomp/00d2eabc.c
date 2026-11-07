// FUN_00d2eabc @ 00d2eabc size=688 calls_out=14 calls_in=2
// strings: 

void FUN_00d2eabc(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  piVar2 = *(int **)(param_1 + 0x618);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f1030(*(undefined4 *)(param_1 + 0x618));
  }
  piVar2 = *(int **)(param_1 + 0x61c);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad0bc(*(undefined4 *)(param_1 + 0x61c));
  }
  piVar2 = *(int **)(param_1 + 0x620);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d06258(*(undefined4 *)(param_1 + 0x620));
  }
  piVar2 = *(int **)(param_1 + 0x624);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d03ce0(*(undefined4 *)(param_1 + 0x624));
  }
  FUN_00acd988(param_1);
  FUN_00d2f08c(param_1 + 0x288);
  piVar6 = *(int **)(param_1 + 0x608);
  piVar2 = piVar6 + 0x29;
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_0163b708(piVar6 + 0x22);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x608));
  }
  FUN_00d2f4f8(param_1 + 0x628);
  piVar6 = *(int **)(param_1 + 0x610);
  piVar2 = piVar6 + 0x31;
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_0163b708(piVar6 + 0x22);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x610));
  }
  FUN_00d2f5ec(*(undefined4 *)(param_1 + 0x62c));
  piVar2 = *(int **)(param_1 + 0x62c);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d064cc(*(undefined4 *)(param_1 + 0x62c));
  }
  if (*(undefined1 **)(param_1 + 0x600) != &DAT_3b9aca00) {
    FUN_00c487f4(param_1 + 0x5e8);
  }
  piVar6 = *(int **)(param_1 + 0x630);
  DataMemoryBarrier(0xb);
  piVar2 = piVar6 + 0x21;
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  DataMemoryBarrier(0xb);
  if (iVar4 == 1) {
    FUN_00c74a60(piVar6 + 8);
    puVar3 = (uint *)(piVar6 + 0x12);
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar1);
    *puVar3 = uVar5 | 2;
    DataMemoryBarrier(0xb);
    if (uVar5 == 0) {
      iVar4 = piVar6[0x10];
      piVar6[0x10] = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar1);
      *puVar3 = 0;
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(piVar6[0x11]);
      }
    }
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d04674(*(undefined4 *)(param_1 + 0x630));
    return;
  }
  return;
}

