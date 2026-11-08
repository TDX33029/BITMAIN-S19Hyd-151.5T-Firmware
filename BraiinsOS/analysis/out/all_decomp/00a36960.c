// FUN_00a36960 @ 00a36960 size=96 calls_out=2 calls_in=0
// strings: 

void FUN_00a36960(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 0x3f;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_0163b708(param_1 + 0x3a);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(param_1);
    return;
  }
  return;
}

