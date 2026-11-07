// FUN_0155b5cc @ 0155b5cc size=128 calls_out=3 calls_in=6
// strings: 

void FUN_0155b5cc(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  if (1 < *(int *)(iVar4 + 0xb0) - 2U) {
    if (*(int *)(iVar4 + 0xb0) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005342b4,0x79,&DAT_01d307b8);
    }
    FUN_0155b198(iVar4 + 8);
  }
  if (iVar4 == -1) {
    return;
  }
  piVar2 = (int *)(iVar4 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar4);
    return;
  }
  return;
}

