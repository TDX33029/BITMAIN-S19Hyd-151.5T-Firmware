// FUN_01a38efc @ 01a38efc size=56 calls_out=1 calls_in=191
// strings: 

void FUN_01a38efc(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
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
    thunk_FUN_01be4678();
    return;
  }
  return;
}

