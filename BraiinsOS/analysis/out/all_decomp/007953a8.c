// FUN_007953a8 @ 007953a8 size=124 calls_out=2 calls_in=0
// strings: 

void FUN_007953a8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (iVar4 != -1) {
    piVar2 = (int *)(iVar4 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_016d3fb4(iVar4);
    }
  }
  piVar2 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(param_1[1]);
    return;
  }
  return;
}

