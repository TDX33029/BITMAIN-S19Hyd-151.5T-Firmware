// FUN_0156fb38 @ 0156fb38 size=76 calls_out=3 calls_in=0
// strings: 

void FUN_0156fb38(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01443048(param_1[3],param_1[4]);
  piVar2 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[5],param_1[6]);
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

