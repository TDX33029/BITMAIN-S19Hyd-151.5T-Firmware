// FUN_0119e25c @ 0119e25c size=224 calls_out=4 calls_in=0
// strings: 

void FUN_0119e25c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1[1];
  iVar4 = param_1[2] + 1;
  iVar3 = iVar5;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    FUN_0115e87c(iVar3);
    iVar3 = iVar3 + 100;
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  piVar2 = (int *)param_1[3];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(param_1[3],param_1[4]);
  }
  piVar2 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(param_1[5],param_1[6]);
  }
  piVar2 = (int *)param_1[7];
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013532e4(param_1[7]);
      return;
    }
  }
  return;
}

