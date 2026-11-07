// FUN_0076bc1c @ 0076bc1c size=176 calls_out=4 calls_in=4
// strings: future still here when dropping

void FUN_0076bc1c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x10) != 0x3b9aca01) {
                    /* WARNING: Subroutine does not return */
    FUN_013498b4("future still here when dropping",0x1f);
  }
  FUN_0076bd64(param_1 + 8);
  if (*(int *)(param_1 + 0x110) != -1) {
    piVar2 = (int *)(*(int *)(param_1 + 0x110) + 4);
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

