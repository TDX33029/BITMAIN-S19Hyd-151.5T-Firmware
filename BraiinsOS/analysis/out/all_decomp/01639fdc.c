// FUN_01639fdc @ 01639fdc size=60 calls_out=2 calls_in=0
// strings: 

void FUN_01639fdc(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + -8);
  FUN_01639ea4();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaeec(piVar3);
    return;
  }
  return;
}

