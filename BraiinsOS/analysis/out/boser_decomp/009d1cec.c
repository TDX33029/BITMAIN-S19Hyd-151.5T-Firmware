// FUN_009d1cec @ 009d1cec size=64 calls_out=2 calls_in=0
// strings: 

void FUN_009d1cec(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + -8);
  FUN_0094adf8(piVar3);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a95e4c(piVar3);
    return;
  }
  return;
}

