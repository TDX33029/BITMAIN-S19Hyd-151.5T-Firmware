// FUN_01070c5c @ 01070c5c size=136 calls_out=2 calls_in=6
// strings: 

void FUN_01070c5c(short *param_1)

{
  bool bVar1;
  short *psVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    psVar2 = param_1 + 0xc;
    piVar3 = *(int **)psVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    iVar5 = 0xc;
  }
  else {
    psVar2 = param_1 + 2;
    piVar3 = *(int **)psVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    iVar5 = 8;
  }
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0108a158(*(undefined4 *)psVar2);
  }
  FUN_0109d7e0(*(undefined4 *)((int)param_1 + iVar5));
  return;
}

