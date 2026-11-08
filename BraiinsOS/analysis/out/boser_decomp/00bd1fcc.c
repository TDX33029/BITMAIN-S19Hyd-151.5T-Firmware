// FUN_00bd1fcc @ 00bd1fcc size=72 calls_out=2 calls_in=3
// strings: 

void FUN_00bd1fcc(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 == 2) {
    FUN_00b9391c((char)param_1[1],param_1[2]);
    return;
  }
  piVar3 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db41c(param_1[2]);
    return;
  }
  return;
}

