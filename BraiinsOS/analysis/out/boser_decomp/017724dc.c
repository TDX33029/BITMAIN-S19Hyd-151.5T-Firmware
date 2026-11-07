// FUN_017724dc @ 017724dc size=96 calls_out=4 calls_in=9
// strings: 

void FUN_017724dc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01816794();
  FUN_0177262c(param_1 + 0x18);
  FUN_0177266c(param_1);
  if (*(int *)(param_1 + 0x34) + 1U < 2) {
    return;
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x34) + 4);
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

