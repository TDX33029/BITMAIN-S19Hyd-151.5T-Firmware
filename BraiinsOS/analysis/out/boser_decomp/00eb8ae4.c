// FUN_00eb8ae4 @ 00eb8ae4 size=228 calls_out=4 calls_in=1
// strings: 

void FUN_00eb8ae4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    piVar2 = (int *)param_1[7];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fd4c(param_1[7]);
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    piVar2 = (int *)param_1[8];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a934a0(param_1[8]);
    }
    if (param_1[4] != -0x80000000) {
      FUN_019bb7e0(param_1[4],param_1[5]);
      return;
    }
  }
  else if (*(char *)(param_1 + 0xc) == '\x03') {
    FUN_01139b38(param_1[10],param_1[0xb]);
    piVar2 = (int *)param_1[9];
    *(undefined1 *)((int)param_1 + 0x31) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fd4c(param_1[9]);
      return;
    }
    return;
  }
  return;
}

