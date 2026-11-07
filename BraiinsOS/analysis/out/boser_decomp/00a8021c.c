// FUN_00a8021c @ 00a8021c size=80 calls_out=2 calls_in=10
// strings: 

void FUN_00a8021c(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00a7ddd0(param_1 + 8);
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

