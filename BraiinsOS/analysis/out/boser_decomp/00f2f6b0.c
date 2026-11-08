// FUN_00f2f6b0 @ 00f2f6b0 size=208 calls_out=4 calls_in=2
// strings: 

void FUN_00f2f6b0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*param_1 == 0) {
    cVar1 = (char)param_1[5];
    if (cVar1 == '\0') {
      piVar2 = (int *)param_1[4];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
    }
    else {
      if (cVar1 == '\x03') {
        FUN_01431b40(param_1 + 6);
      }
      else {
        if (cVar1 != '\x04') {
          return;
        }
        FUN_00f2ade4(param_1[6]);
      }
      piVar2 = (int *)param_1[4];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
    }
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177340(param_1[4]);
      return;
    }
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  iVar3 = param_1[2];
  bVar4 = iVar3 == 0 && param_1[3] == 0;
  if (iVar3 != 0 || param_1[3] != 0) {
    iVar3 = param_1[4];
    bVar4 = iVar3 == 0;
  }
  if (bVar4) {
    return;
  }
  FUN_00f80320(iVar3,param_1[5]);
  return;
}

