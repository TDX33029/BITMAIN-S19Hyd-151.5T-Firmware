// FUN_019f8b10 @ 019f8b10 size=120 calls_out=2 calls_in=1
// strings: 

void FUN_019f8b10(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      piVar3 = (int *)param_1[1];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019da4fc(param_1[1]);
        return;
      }
      return;
    }
    piVar3 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019da640(param_1[1]);
      return;
    }
  }
  return;
}

