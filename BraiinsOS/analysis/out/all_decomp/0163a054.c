// FUN_0163a054 @ 0163a054 size=44 calls_out=1 calls_in=4
// strings: 

void FUN_0163a054(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + -8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec();
    return;
  }
  return;
}

