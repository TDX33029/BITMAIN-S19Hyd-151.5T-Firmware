// FUN_01466274 @ 01466274 size=468 calls_out=6 calls_in=1
// strings: 

void FUN_01466274(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0xc);
  puVar3 = (undefined4 *)(iVar4 + 4);
  for (iVar5 = *(int *)(param_1 + 0x10); iVar5 != 0; iVar5 = iVar5 + -1) {
    if (puVar3[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar3);
    }
    puVar3 = puVar3 + 3;
  }
  if (*(int *)(param_1 + 8) != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  piVar2 = *(int **)(param_1 + 0x70);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  }
  piVar2 = *(int **)(param_1 + 0x7c);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
  }
  piVar2 = *(int **)(param_1 + 0x84);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88));
  }
  piVar2 = *(int **)(param_1 + 0x8c);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
  }
  piVar2 = *(int **)(param_1 + 0x94);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0156180c(*(undefined4 *)(param_1 + 0x94));
  }
  piVar2 = *(int **)(param_1 + 0x98);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  piVar2 = *(int **)(param_1 + 0xa0);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0156187c(*(undefined4 *)(param_1 + 0xa0));
  }
  FUN_01561ef8(param_1 + 0x2c);
  return;
}

