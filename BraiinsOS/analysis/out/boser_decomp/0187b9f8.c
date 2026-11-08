// FUN_0187b9f8 @ 0187b9f8 size=92 calls_out=1 calls_in=2
// strings: 

void FUN_0187b9f8(int param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar5 = 0;
    do {
      puVar2 = (undefined4 *)(param_1 + iVar5 * 8);
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
        FUN_018531c0(*puVar2,puVar2[1]);
      }
    } while (iVar5 != param_2);
  }
  return;
}

