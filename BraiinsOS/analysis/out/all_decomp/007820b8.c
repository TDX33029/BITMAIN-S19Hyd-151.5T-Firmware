// FUN_007820b8 @ 007820b8 size=360 calls_out=3 calls_in=1
// strings: 

void FUN_007820b8(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*param_1);
  }
  if (*(char *)(param_1 + 3) == '\x02') {
    return;
  }
  iVar3 = param_1[1];
  DataMemoryBarrier(0xb);
  piVar2 = (int *)(iVar3 + 0x20);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  DataMemoryBarrier(0xb);
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    if (0x7fffffff < *(uint *)(iVar3 + 0x1c)) {
      puVar5 = (uint *)(iVar3 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = *puVar5 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    puVar5 = (uint *)(iVar3 + 0x2c);
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar5;
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = uVar6 | 2;
    DataMemoryBarrier(0xb);
    if (uVar6 == 0) {
      iVar4 = *(int *)(iVar3 + 0x24);
      *(undefined4 *)(iVar3 + 0x24) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = *puVar5 & 0xfffffffd;
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar3 + 0x28));
      }
    }
  }
  piVar2 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007824b0(param_1[1]);
  }
  piVar2 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010b4e7c(param_1[2]);
    return;
  }
  return;
}

