// FUN_00f2a2c8 @ 00f2a2c8 size=36 calls_out=1 calls_in=2
// strings: 

void FUN_00f2a2c8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      FUN_00bd05a8(param_1 + 2);
      return;
    }
    return;
  }
  if ((char)param_1[9] != '\0') {
    if ((char)param_1[9] == '\x03') {
      FUN_01139b38(param_1[7],param_1[8]);
      return;
    }
    return;
  }
  piVar2 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01177254(param_1[2],param_1[3]);
  }
  FUN_005faf6c(param_1 + 4);
  piVar2 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011772ac(param_1[5]);
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
    FUN_01177340(param_1[6]);
    return;
  }
  return;
}

