// FUN_01a3b278 @ 01a3b278 size=88 calls_out=1 calls_in=3
// strings: 

void FUN_01a3b278(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    iVar4 = 0;
    do {
      piVar2 = *(int **)(param_1 + iVar4 * 4);
      iVar4 = iVar4 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a3b144();
      }
    } while (iVar4 != param_2);
  }
  return;
}

