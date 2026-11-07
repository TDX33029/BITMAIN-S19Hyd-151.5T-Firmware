// FUN_019ec230 @ 019ec230 size=144 calls_out=3 calls_in=0
// strings: 

void FUN_019ec230(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == -0x80000000) {
    piVar2 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db20c(param_1[1]);
      return;
    }
  }
  else {
    FUN_019e5848(param_1);
    if (param_1[7] != -1) {
      piVar2 = (int *)(param_1[7] + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        thunk_FUN_01be4678();
        return;
      }
      return;
    }
  }
  return;
}

