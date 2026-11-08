// FUN_00f2ea70 @ 00f2ea70 size=192 calls_out=3 calls_in=2
// strings: 

void FUN_00f2ea70(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    piVar2 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(param_1[2]);
    }
    piVar2 = (int *)param_1[3];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121d018(param_1[3]);
      return;
    }
  }
  else if (*(char *)((int)param_1 + 0x11) == '\x03') {
    FUN_01139b38(*param_1,param_1[1]);
    piVar2 = (int *)param_1[2];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(param_1[2]);
      return;
    }
    return;
  }
  return;
}

