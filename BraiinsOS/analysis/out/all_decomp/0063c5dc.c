// FUN_0063c5dc @ 0063c5dc size=336 calls_out=6 calls_in=1
// strings: 

void FUN_0063c5dc(int param_1)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 0x80) & 0x7fffffff) == 0) {
    uVar2 = *(uint *)(param_1 + 0x8c);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x84));
    uVar2 = *(uint *)(param_1 + 0x8c);
  }
  if ((uVar2 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x90));
  }
  piVar3 = *(int **)(param_1 + 0x5c);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01089b40(*(undefined4 *)(param_1 + 0x5c));
  }
  if ((*(uint *)(param_1 + 0x50) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
  }
  piVar3 = *(int **)(param_1 + 0xdc);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0063c7d4(*(undefined4 *)(param_1 + 0xdc));
  }
  piVar3 = *(int **)(param_1 + 0xe0);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0063c938(*(undefined4 *)(param_1 + 0xe0));
  }
  piVar3 = *(int **)(param_1 + 0xe4);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0063cae0(*(undefined4 *)(param_1 + 0xe4));
  }
  piVar3 = *(int **)(param_1 + 0xe8);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0108a284(*(undefined4 *)(param_1 + 0xe8));
    return;
  }
  return;
}

