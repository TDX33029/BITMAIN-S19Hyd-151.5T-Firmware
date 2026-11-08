// FUN_01529ce8 @ 01529ce8 size=76 calls_out=2 calls_in=0
// strings: 

void FUN_01529ce8(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_019bb7e0(*param_1,param_1[1]);
  FUN_019bb7e0(param_1[3],param_1[4]);
  piVar2 = (int *)param_1[8];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[8],param_1[9]);
    return;
  }
  return;
}

