// FUN_010ea124 @ 010ea124 size=96 calls_out=3 calls_in=2
// strings: 

void FUN_010ea124(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_00f2b978();
  if (*param_1 == 0) {
    FUN_005fc298(param_1[1]);
  }
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01180aec(param_1[2]);
    return;
  }
  return;
}

