// FUN_013ce8ec @ 013ce8ec size=144 calls_out=5 calls_in=3
// strings: 

void FUN_013ce8ec(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 6) != '\x02') {
    piVar3 = (int *)param_1[4];
    FUN_013e2464(piVar3);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013cea14(param_1[4]);
    }
    piVar3 = (int *)param_1[5];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014210d0(param_1[5]);
    }
  }
  FUN_01443048(param_1[2],param_1[3]);
  FUN_012d40d0(*param_1,param_1[1]);
  return;
}

