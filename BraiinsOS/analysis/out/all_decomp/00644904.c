// FUN_00644904 @ 00644904 size=276 calls_out=4 calls_in=7
// strings: 

void FUN_00644904(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x80);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0063c510(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  }
  piVar2 = *(int **)(param_1 + 0x88);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0063c510(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  }
  piVar2 = *(int **)(param_1 + 0x5c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01089b40(*(undefined4 *)(param_1 + 0x5c));
  }
  if ((*(uint *)(param_1 + 0x50) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
  }
  piVar2 = *(int **)(param_1 + 0x90);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(*(undefined4 *)(param_1 + 0x90));
  }
  piVar2 = *(int **)(param_1 + 0x94);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(*(undefined4 *)(param_1 + 0x94));
    return;
  }
  return;
}

