// FUN_019fa55c @ 019fa55c size=100 calls_out=2 calls_in=2
// strings: 

void FUN_019fa55c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 == 0) {
    piVar3 = (int *)param_1[2];
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db780(param_1[2]);
        return;
      }
    }
  }
  else if (*param_1 == 1) {
    if (param_1[2] == 0 && param_1[3] == 0) {
      return;
    }
    FUN_00b91e68(param_1[4],param_1[5]);
    return;
  }
  return;
}

