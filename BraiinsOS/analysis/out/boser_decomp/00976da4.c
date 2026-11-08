// FUN_00976da4 @ 00976da4 size=108 calls_out=2 calls_in=0
// strings: 

void FUN_00976da4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = *param_1;
  iVar7 = param_1[1];
  iVar8 = param_1[2];
  if (iVar7 != 0) {
    iVar5 = 0;
    do {
      piVar2 = *(int **)(iVar4 + iVar5 * 4);
      iVar6 = iVar5 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00b5f128(*(undefined4 *)(iVar4 + iVar5 * 4));
      }
      iVar5 = iVar6;
    } while (iVar6 != iVar7);
  }
  FUN_0132b958(iVar8,iVar4,4,0x34);
  return;
}

