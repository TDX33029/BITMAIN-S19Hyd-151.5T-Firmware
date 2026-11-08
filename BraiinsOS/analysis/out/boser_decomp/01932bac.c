// FUN_01932bac @ 01932bac size=160 calls_out=2 calls_in=0
// strings: 

void FUN_01932bac(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 == 0) {
    iVar2 = 8;
    do {
      *(undefined1 *)((int)param_1 + iVar2) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x48);
    if (*param_1 == 0) {
      return;
    }
  }
  piVar3 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00704568(param_1[1]);
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
    FUN_0070451c(param_1[2],param_1[3]);
    return;
  }
  return;
}

