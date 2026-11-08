// FUN_008abc84 @ 008abc84 size=168 calls_out=2 calls_in=2
// strings: 

void FUN_008abc84(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int local_18;
  int iStack_14;
  
  FUN_010ec06c(&local_18);
  if (local_18 == 0) {
    iVar3 = *param_2;
    *param_1 = 0;
    param_1[1] = iStack_14;
    if (iVar3 != 3) {
      return;
    }
    piVar2 = (int *)param_2[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  else {
    iVar3 = *param_2;
    *param_1 = local_18;
    param_1[1] = iStack_14;
    if (iVar3 != 3) {
      return;
    }
    piVar2 = (int *)param_2[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
  }
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010cf3d0(param_2[1]);
    return;
  }
  return;
}

