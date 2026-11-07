// FUN_00827d88 @ 00827d88 size=204 calls_out=3 calls_in=1
// strings: 

void FUN_00827d88(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1[3] == 3) {
    piVar2 = (int *)param_1[4];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010cf3d0(param_1[4]);
    }
  }
  if (*param_1 != 2) {
    if (*param_1 == 0) {
      piVar2 = (int *)param_1[1];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010cf278(param_1[1],param_1[2]);
        return;
      }
      return;
    }
    piVar2 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010cf448(param_1[1],param_1[2]);
      return;
    }
  }
  return;
}

