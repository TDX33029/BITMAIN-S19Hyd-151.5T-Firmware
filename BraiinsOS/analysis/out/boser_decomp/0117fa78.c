// FUN_0117fa78 @ 0117fa78 size=156 calls_out=3 calls_in=10
// strings: future still here when dropping

void FUN_0117fa78(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) != 0 || *(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013498b4("future still here when dropping",0x1f);
  }
  if (*(int *)(param_1 + 0x78) != -1) {
    piVar2 = (int *)(*(int *)(param_1 + 0x78) + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678();
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

