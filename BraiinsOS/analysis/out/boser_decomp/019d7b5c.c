// FUN_019d7b5c @ 019d7b5c size=112 calls_out=2 calls_in=1
// strings: 

void FUN_019d7b5c(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  if (*param_1 == 1) {
    iVar1 = param_1[2];
    bVar3 = iVar1 == 0 && param_1[3] == 0;
    if (iVar1 != 0 || param_1[3] != 0) {
      iVar1 = param_1[4];
      bVar3 = iVar1 == 0;
    }
    if (!bVar3) {
      FUN_01443048(iVar1,param_1[5]);
      return;
    }
  }
  else if ((*param_1 == 0) && (piVar2 = (int *)param_1[2], piVar2 != (int *)0x0)) {
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar2;
      bVar3 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar3);
    *piVar2 = iVar1 + -1;
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db780(param_1[2]);
      return;
    }
    return;
  }
  return;
}

