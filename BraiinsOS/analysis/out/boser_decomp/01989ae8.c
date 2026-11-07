// FUN_01989ae8 @ 01989ae8 size=84 calls_out=2 calls_in=9
// strings: 

void FUN_01989ae8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0199964c(param_1 + 8);
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

