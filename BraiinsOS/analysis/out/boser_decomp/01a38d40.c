// FUN_01a38d40 @ 01a38d40 size=160 calls_out=3 calls_in=1
// strings: 

void FUN_01a38d40(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  bVar3 = *(int *)(param_1 + 0x20) != 0;
  iVar1 = 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0x24);
  }
  if (bVar3 && iVar1 != 0) {
    FUN_014295d0(iVar1 + 8);
    piVar2 = *(int **)(param_1 + 0x24);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar1 = *piVar2;
        bVar3 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar3);
      *piVar2 = iVar1 + -1;
      if (iVar1 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38e68(*(undefined4 *)(param_1 + 0x24));
      }
    }
  }
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar1 = *piVar2;
    bVar3 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar3);
  *piVar2 = iVar1 + -1;
  if (iVar1 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

