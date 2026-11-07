// FUN_01a3948c @ 01a3948c size=120 calls_out=2 calls_in=0
// strings: 

void FUN_01a3948c(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if ((iVar2 != 0) && (iVar4 = iVar2 * 0x20 + 0x20, iVar2 + iVar4 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 0x20) - iVar4);
  }
  if (param_1 == -1) {
    return;
  }
  piVar3 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(param_1);
    return;
  }
  return;
}

