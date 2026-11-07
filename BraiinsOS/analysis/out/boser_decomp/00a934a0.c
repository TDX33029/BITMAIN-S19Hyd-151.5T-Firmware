// FUN_00a934a0 @ 00a934a0 size=128 calls_out=3 calls_in=45
// strings: 

void FUN_00a934a0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (1 < *(int *)(param_1 + 0x18) - 2U) {
    if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005342b4,0x79,&DAT_01d307b8);
    }
    FUN_019cf348(param_1 + 8);
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

