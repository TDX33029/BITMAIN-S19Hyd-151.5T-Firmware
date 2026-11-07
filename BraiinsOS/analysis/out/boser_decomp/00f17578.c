// FUN_00f17578 @ 00f17578 size=296 calls_out=4 calls_in=0
// strings: 

void FUN_00f17578(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    piVar2 = (int *)param_1[7];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011772ac(param_1[7]);
    }
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
    FUN_019bb7e0(*param_1,param_1[1]);
    if (param_1[3] == -0x80000000) {
      return;
    }
    FUN_019bb7e0(param_1[3],param_1[4]);
    return;
  }
  if (*(char *)(param_1 + 0x14) != '\x03') {
    return;
  }
  FUN_01139b38(param_1[0x12],param_1[0x13]);
  piVar2 = (int *)param_1[10];
  *(undefined2 *)((int)param_1 + 0x51) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a934a0(param_1[10]);
  }
  piVar2 = (int *)param_1[9];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011772ac(param_1[9]);
    return;
  }
  return;
}

