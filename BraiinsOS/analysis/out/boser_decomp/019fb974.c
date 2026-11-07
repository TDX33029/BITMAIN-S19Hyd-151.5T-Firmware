// FUN_019fb974 @ 019fb974 size=196 calls_out=4 calls_in=2
// strings: 

void FUN_019fb974(int *param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  if (*param_1 == 1) {
    bVar3 = param_1[2] != 0 || param_1[3] != 0;
    iVar1 = 0;
    if (bVar3) {
      iVar1 = param_1[4];
    }
    if (bVar3 && iVar1 != 0) {
      FUN_01443048(iVar1,param_1[5]);
      return;
    }
  }
  else if (*param_1 == 0) {
    if (*(char *)((int)param_1 + 0x1d) == '\0') {
      FUN_01139b38(param_1[4],param_1[5]);
    }
    else {
      if (*(char *)((int)param_1 + 0x1d) != '\x03') {
        return;
      }
      FUN_01139b38(param_1[2],param_1[3]);
    }
    piVar2 = (int *)param_1[6];
    if (piVar2 == (int *)0x0) {
      return;
    }
    FUN_014295d0(piVar2 + 2);
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *piVar2;
      bVar3 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar3);
    *piVar2 = iVar1 + -1;
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38e68(param_1[6]);
      return;
    }
    return;
  }
  return;
}

