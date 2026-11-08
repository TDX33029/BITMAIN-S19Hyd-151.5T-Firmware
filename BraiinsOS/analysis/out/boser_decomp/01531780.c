// FUN_01531780 @ 01531780 size=192 calls_out=2 calls_in=4
// strings: 

void FUN_01531780(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    return;
  }
  if (*param_1 == 1) {
    piVar2 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[1],param_1[2]);
      return;
    }
    return;
  }
  piVar2 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[4],param_1[5]);
  }
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(param_1[6],param_1[7]);
  }
  FUN_01532668(param_1 + 1);
  return;
}

