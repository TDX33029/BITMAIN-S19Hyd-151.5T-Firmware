// FUN_019bd120 @ 019bd120 size=72 calls_out=2 calls_in=3
// strings: 

void FUN_019bd120(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != 0) {
    FUN_0069263c((char)param_1[1],param_1[2]);
    return;
  }
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019ad05c(param_1[1]);
    return;
  }
  return;
}

