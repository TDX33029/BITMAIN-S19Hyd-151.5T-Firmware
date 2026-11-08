// FUN_00a60850 @ 00a60850 size=100 calls_out=1 calls_in=1
// strings: 

void FUN_00a60850(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar4 = 0;
    do {
      piVar2 = *(int **)(param_1 + iVar4 * 4);
      iVar5 = iVar4 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078ecac(*(undefined4 *)(param_1 + iVar4 * 4));
      }
      iVar4 = iVar5;
    } while (iVar5 != param_2);
  }
  return;
}

