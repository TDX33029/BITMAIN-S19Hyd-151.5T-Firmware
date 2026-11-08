// FUN_007e534c @ 007e534c size=232 calls_out=5 calls_in=2
// strings: 

void FUN_007e534c(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x98);
  if (iVar6 != 0) {
    iVar7 = *(int *)(param_1 + 0x94);
    iVar5 = 0;
    do {
      puVar2 = (undefined4 *)(iVar7 + iVar5 * 8);
      piVar3 = (int *)*puVar2;
      iVar5 = iVar5 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0089ddfc(*puVar2,puVar2[1]);
      }
    } while (iVar5 != iVar6);
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x94));
  }
  piVar3 = *(int **)(param_1 + 0x9c);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_009ba47c(*(undefined4 *)(param_1 + 0x9c));
  }
  FUN_008e1498(param_1 + 0xa0);
  piVar3 = *(int **)(param_1 + 0xb0);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_009ba630(*(undefined4 *)(param_1 + 0xb0));
    return;
  }
  return;
}

