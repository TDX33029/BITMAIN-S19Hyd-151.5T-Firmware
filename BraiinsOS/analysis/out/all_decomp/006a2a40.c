// FUN_006a2a40 @ 006a2a40 size=140 calls_out=4 calls_in=1
// strings: 

void FUN_006a2a40(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (*piVar3 != 0 || piVar3[1] != 0) {
    FUN_006878dc(piVar3 + 2);
  }
  thunk_FUN_016d3fb4(piVar3);
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0f04(param_1[1]);
  }
  piVar3 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078f120(param_1[2]);
    return;
  }
  return;
}

