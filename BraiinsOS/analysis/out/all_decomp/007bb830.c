// FUN_007bb830 @ 007bb830 size=160 calls_out=2 calls_in=2
// strings: 

void FUN_007bb830(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != 0) {
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 1;
      iVar4 = param_1 + iVar4 * 0x30;
      piVar2 = *(int **)(iVar4 + 0x2c);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0078ecac(*(undefined4 *)(iVar4 + 0x2c));
      }
      piVar2 = *(int **)(iVar4 + 0x28);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078e66c(*(undefined4 *)(iVar4 + 0x28));
        }
      }
      iVar4 = iVar5;
    } while (iVar5 != param_2);
  }
  return;
}

