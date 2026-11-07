// FUN_00a9614c @ 00a9614c size=172 calls_out=4 calls_in=4
// strings: future still here when dropping

void FUN_00a9614c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) != 0 || *(int *)(param_1 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013498b4("future still here when dropping",0x1f);
  }
  FUN_009d0004((int *)(param_1 + 8));
  if (*(int *)(param_1 + 0x160) != -1) {
    piVar2 = (int *)(*(int *)(param_1 + 0x160) + 4);
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

