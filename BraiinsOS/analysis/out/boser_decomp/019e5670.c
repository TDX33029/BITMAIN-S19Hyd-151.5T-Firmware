// FUN_019e5670 @ 019e5670 size=140 calls_out=3 calls_in=3
// strings: 

void FUN_019e5670(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) == -0x80000000) {
    piVar2 = *(int **)(param_1 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db20c(*(undefined4 *)(param_1 + 8));
      return;
    }
  }
  else {
    FUN_019e5848();
    if (*(int *)(param_1 + 0x20) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x20) + 4);
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

