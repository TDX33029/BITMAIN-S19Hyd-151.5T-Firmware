// FUN_010952f0 @ 010952f0 size=80 calls_out=1 calls_in=1
// strings: 

void FUN_010952f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 2) {
    bVar3 = iVar1 == 0;
    if (bVar3) {
      iVar1 = param_1[1];
    }
    if (bVar3 && iVar1 == 0) {
      piVar2 = (int *)param_1[2];
      DataMemoryBarrier(0xb);
      do {
        iVar1 = *piVar2;
        bVar3 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar3);
      *piVar2 = iVar1 + -1;
      if (iVar1 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00a956ec(param_1[2]);
        return;
      }
      return;
    }
  }
  return;
}

