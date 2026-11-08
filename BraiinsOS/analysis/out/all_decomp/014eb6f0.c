// FUN_014eb6f0 @ 014eb6f0 size=116 calls_out=3 calls_in=0
// strings: 

void FUN_014eb6f0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_016dea68(param_1[2]);
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015e92c0(*param_1);
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
    FUN_01659070(param_1[1]);
    return;
  }
  return;
}

