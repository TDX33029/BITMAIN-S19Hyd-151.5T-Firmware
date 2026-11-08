// FUN_0178fd40 @ 0178fd40 size=92 calls_out=2 calls_in=0
// strings: 

void FUN_0178fd40(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != 0) {
    piVar3 = (int *)param_1[1];
    FUN_0143c520(piVar3);
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01436a38(param_1[1]);
        return;
      }
      return;
    }
  }
  return;
}

