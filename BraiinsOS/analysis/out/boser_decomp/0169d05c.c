// FUN_0169d05c @ 0169d05c size=104 calls_out=2 calls_in=1
// strings: 

void FUN_0169d05c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 3) {
    return;
  }
  piVar2 = (int *)param_1[9];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016b9744(param_1[9]);
  }
  FUN_0134aee0(param_1[3],param_1[4],8,8);
  FUN_0134aee0(param_1[6],param_1[7],4,4);
  return;
}

