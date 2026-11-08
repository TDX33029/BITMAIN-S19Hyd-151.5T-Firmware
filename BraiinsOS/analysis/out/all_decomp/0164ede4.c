// FUN_0164ede4 @ 0164ede4 size=384 calls_out=9 calls_in=0
// strings: 

void FUN_0164ede4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0166239c((int *)(param_1 + 0x30));
  if (*(int *)(param_1 + 0x30) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34));
  }
  piVar2 = *(int **)(param_1 + 100);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016584b4(*(undefined4 *)(param_1 + 100));
    }
  }
  piVar2 = *(int **)(param_1 + 0x68);
  if (piVar2 != (int *)0x0) {
    FUN_016dea68(*(undefined4 *)(param_1 + 0x70));
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0(*(undefined4 *)(param_1 + 0x68));
    }
    piVar2 = *(int **)(param_1 + 0x6c);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659070(*(undefined4 *)(param_1 + 0x6c));
    }
  }
  FUN_01643300(param_1 + 0x40);
  piVar2 = *(int **)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  }
  piVar2 = *(int **)(param_1 + 0x80);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
    }
  }
  piVar2 = *(int **)(param_1 + 0x88);
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
    return;
  }
  return;
}

