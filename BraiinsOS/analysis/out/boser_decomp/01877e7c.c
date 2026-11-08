// FUN_01877e7c @ 01877e7c size=392 calls_out=6 calls_in=1
// strings: 

void FUN_01877e7c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  FUN_01877e4c();
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x48) != '\x01') {
    piVar4 = *(int **)(param_1 + 0x4c);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01421174(*(undefined4 *)(param_1 + 0x4c));
      }
    }
    FUN_01a69874(param_1 + 0x50);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  piVar4 = (int *)(iVar3 + 8);
  do {
    iVar6 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = 0;
  DataMemoryBarrier(0xb);
  if (iVar6 != 0) {
    puVar5 = (uint *)(iVar3 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar7 | 2;
    DataMemoryBarrier(0xb);
    if (uVar7 == 0) {
      iVar6 = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = *puVar5 & 0xfffffffd;
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar3 + 0x10));
      }
    }
  }
  piVar4 = *(int **)(param_1 + 0x50);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_014212ac(*(undefined4 *)(param_1 + 0x50));
  }
  FUN_01a69470(param_1 + 0x4c);
  piVar4 = *(int **)(param_1 + 0x54);
  FUN_01437370();
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (piVar4[2] != 3 || piVar4[3] != 0) {
    if (piVar4[9] != 0) {
      thunk_FUN_01be4678(piVar4[8]);
    }
    iVar3 = piVar4[0xb];
    FUN_01410ec8(iVar3,piVar4[0xc]);
    FUN_0134aee0(piVar4[10],iVar3,4,0x34);
    FUN_008e0ddc(piVar4 + 0xd);
  }
  if (piVar4[0x14] != 0) {
    (**(code **)(piVar4[0x14] + 0xc))(piVar4[0x15]);
  }
  if (piVar4[0x17] != 0) {
    (**(code **)(piVar4[0x17] + 0xc))(piVar4[0x18]);
  }
  if (piVar4 != (int *)&DAT_ffffffff) {
    piVar2 = piVar4 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(piVar4);
      return;
    }
  }
  return;
}

