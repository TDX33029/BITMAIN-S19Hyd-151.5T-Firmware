// FUN_00ac8b80 @ 00ac8b80 size=180 calls_out=4 calls_in=3
// strings: 

void FUN_00ac8b80(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = param_1[2];
  if (iVar6 != 0) {
    iVar7 = param_1[1];
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
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(param_1[1]);
  }
  piVar3 = (int *)param_1[3];
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_009ba47c(param_1[3]);
  }
  FUN_008e1498(param_1 + 4);
  return;
}

