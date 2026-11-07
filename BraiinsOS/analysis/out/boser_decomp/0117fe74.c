// FUN_0117fe74 @ 0117fe74 size=128 calls_out=3 calls_in=41
// strings: 

void FUN_0117fe74(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  FUN_010a8210(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14);
  if ((iVar2 != 0) && (iVar4 = iVar2 * 8 + 8, iVar2 + iVar4 != -5)) {
    thunk_FUN_01be4678(*(int *)(param_1 + 0x10) - iVar4);
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

