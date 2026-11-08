// FUN_016c2494 @ 016c2494 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_016c2494(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return;
  }
  iVar5 = 0;
  do {
    piVar2 = (int *)(param_1 + iVar5 * 8);
    piVar3 = (int *)*piVar2;
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(*piVar2,piVar2[1]);
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != param_2);
  return;
}

