// FUN_00d311bc @ 00d311bc size=244 calls_out=4 calls_in=2
// strings: 

void FUN_00d311bc(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  if (*param_1 == 1) {
    bVar3 = param_1[2] != 0 || param_1[3] != 0;
    iVar2 = 0;
    if (bVar3) {
      iVar2 = param_1[4];
    }
    if (bVar3 && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
  }
  else if (*param_1 == 0) {
    if (*(char *)((int)param_1 + 0x19) == '\x03') {
      FUN_01139b38(param_1[2],param_1[3]);
      piVar1 = (int *)param_1[4];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011772ac(param_1[4]);
        return;
      }
      return;
    }
    if (*(char *)((int)param_1 + 0x19) == '\0') {
      piVar1 = (int *)param_1[4];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_011772ac(param_1[4]);
      }
      piVar1 = (int *)param_1[5];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar1;
        bVar3 = (bool)hasExclusiveAccess(piVar1);
      } while (!bVar3);
      *piVar1 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0121d018(param_1[5]);
        return;
      }
    }
  }
  return;
}

