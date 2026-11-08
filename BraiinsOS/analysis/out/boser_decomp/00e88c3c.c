// FUN_00e88c3c @ 00e88c3c size=92 calls_out=2 calls_in=2
// strings: 

void FUN_00e88c3c(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != -0x80000000) {
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_019bb7e0(param_1[3],param_1[4]);
    return;
  }
  piVar2 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019db20c(param_1[1]);
    return;
  }
  return;
}

