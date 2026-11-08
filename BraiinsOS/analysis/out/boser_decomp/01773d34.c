// FUN_01773d34 @ 01773d34 size=88 calls_out=3 calls_in=5
// strings: 

void FUN_01773d34(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01815f6c();
  FUN_0177266c(param_1);
  if (*(int *)(param_1 + 0x18) + 1U < 2) {
    return;
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x18) + 4);
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

