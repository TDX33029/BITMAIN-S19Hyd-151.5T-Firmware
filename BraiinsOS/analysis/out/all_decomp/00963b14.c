// FUN_00963b14 @ 00963b14 size=500 calls_out=11 calls_in=1
// strings: 

void FUN_00963b14(int param_1)

{
  ushort uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = *(int **)(param_1 + 0xcc);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078d010(*(undefined4 *)(param_1 + 0xcc));
  }
  FUN_00b40204(param_1 + 0xd0);
  if ((*(uint *)(param_1 + 0xbc) & 0x7fffffff) == 0) {
    uVar1 = *(ushort *)(param_1 + 200);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc0));
    uVar1 = *(ushort *)(param_1 + 200);
  }
  if (4 < uVar1) {
    *(undefined2 *)(param_1 + 0xca) = 0;
  }
  FUN_0096042c(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0xb4);
  iVar7 = *(int *)(param_1 + 0xb8);
  iVar5 = 0;
  while (iVar5 != iVar7) {
    iVar4 = *(int *)(iVar6 + iVar5 * 4);
    iVar5 = iVar5 + 1;
    if (iVar4 != -1) {
      piVar3 = (int *)(iVar4 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_016d3fb4();
      }
    }
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xb4));
  }
  FUN_00b351e8(param_1 + 0x98);
  piVar3 = *(int **)(param_1 + 0xe4);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fb60(*(undefined4 *)(param_1 + 0xe4));
    }
  }
  FUN_00992810(*(undefined4 *)(param_1 + 0xdc));
  piVar3 = *(int **)(param_1 + 0xdc);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aabd64(*(undefined4 *)(param_1 + 0xdc));
  }
  piVar3 = *(int **)(param_1 + 0xe0);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad0bc(*(undefined4 *)(param_1 + 0xe0));
  }
  iVar5 = *(int *)(param_1 + 0xa8);
  piVar3 = (int *)(iVar5 + 0xfc);
  do {
    iVar6 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    FUN_0163b708(iVar5 + 0xe8);
  }
  piVar3 = *(int **)(param_1 + 0xa8);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(*(undefined4 *)(param_1 + 0xa8));
    return;
  }
  return;
}

