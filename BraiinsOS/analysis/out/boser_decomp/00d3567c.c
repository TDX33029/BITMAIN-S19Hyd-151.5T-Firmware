// FUN_00d3567c @ 00d3567c size=100 calls_out=2 calls_in=1
// strings: 

void FUN_00d3567c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if ((*param_1 == 0) || ((char)param_1[4] != '\0')) {
    return;
  }
  if (param_1[1] == 2) {
    FUN_0185401c((char)param_1[2],param_1[3]);
    return;
  }
  piVar3 = (int *)param_1[3];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db41c(param_1[3]);
    return;
  }
  return;
}

