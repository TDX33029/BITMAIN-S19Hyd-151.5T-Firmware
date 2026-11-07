// FUN_0155b82c @ 0155b82c size=172 calls_out=3 calls_in=6
// strings: 

void FUN_0155b82c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (1 < *(int *)(param_1 + 0x10) - 2U) {
    if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005342b4,0x79,&DAT_01d307b8);
    }
    piVar2 = *(int **)(param_1 + 8);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    }
  }
  if (param_1 == -1) {
    return;
  }
  piVar2 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

