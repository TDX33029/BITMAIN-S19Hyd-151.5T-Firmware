// FUN_00c3ccd0 @ 00c3ccd0 size=272 calls_out=4 calls_in=5
// strings: 

void FUN_00c3ccd0(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x6c);
  puVar3 = (undefined4 *)(iVar4 + 0x10);
  for (iVar5 = *(int *)(param_1 + 0x70); iVar5 != 0; iVar5 = iVar5 + -1) {
    if (puVar3[-4] != 0) {
      thunk_FUN_016d3fb4(puVar3[-3]);
    }
    if (puVar3[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar3);
    }
    puVar3 = puVar3 + 6;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    thunk_FUN_016d3fb4(iVar4);
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x24));
  }
  piVar2 = *(int **)(param_1 + 0x88);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_009ba06c(*(undefined4 *)(param_1 + 0x88));
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
    FUN_00784894(*(undefined4 *)(param_1 + 0x8c));
  }
  piVar2 = *(int **)(param_1 + 0x90);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f31e8(*(undefined4 *)(param_1 + 0x90));
    return;
  }
  return;
}

