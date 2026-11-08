// FUN_017842c0 @ 017842c0 size=100 calls_out=4 calls_in=1
// strings: 

void FUN_017842c0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_017cd22c(param_1 + 8);
  FUN_0178438c(param_1 + 8);
  FUN_019daf84(param_1 + 0xc);
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

