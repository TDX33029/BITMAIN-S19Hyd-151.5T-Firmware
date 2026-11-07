// FUN_019f7f9c @ 019f7f9c size=148 calls_out=1 calls_in=9
// strings: 

void FUN_019f7f9c(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = param_2 + 8;
  if (*piVar3 == 0) {
    if (piVar3 != *(int **)(param_1 + 0xc)) {
      return;
    }
    piVar4 = (int *)param_2[9];
    *(int **)(param_1 + 0xc) = piVar4;
  }
  else {
    piVar4 = (int *)param_2[9];
    *(int **)(*piVar3 + 4) = piVar4;
  }
  if (piVar4 == (int *)0x0) {
    if (piVar3 != *(int **)(param_1 + 0x10)) {
      return;
    }
    *(int *)(param_1 + 0x10) = *piVar3;
  }
  else {
    *piVar4 = *piVar3;
  }
  param_2[8] = 0;
  param_2[9] = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db52c(param_2);
    return;
  }
  return;
}

