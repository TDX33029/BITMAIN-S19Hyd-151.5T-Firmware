// FUN_00d3bbc4 @ 00d3bbc4 size=384 calls_out=4 calls_in=2
// strings: 

void FUN_00d3bbc4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 1) {
    iVar3 = 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      iVar3 = param_1[4];
    }
    if ((param_1[2] != 0 || param_1[3] != 0) && iVar3 != 0) {
      FUN_01443048(iVar3,param_1[5]);
      return;
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (*(char *)((int)param_1 + 0x4d) != '\x03') {
    if (*(char *)((int)param_1 + 0x4d) != '\0') {
      return;
    }
    FUN_01139b38(param_1[8],param_1[9]);
    piVar2 = (int *)param_1[0xc];
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar2 + 2) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(param_1[0xc]);
    }
    piVar2 = (int *)param_1[0xd];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121cce0(param_1[0xd]);
      return;
    }
    return;
  }
  piVar2 = (int *)param_1[0xb];
  if (*piVar2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
    if (bVar1) {
      *piVar2 = 0x84;
      goto LAB_00d3bccc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(*(int *)(param_1[0xb] + 8) + 0x10))();
LAB_00d3bccc:
  piVar2 = (int *)param_1[2];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121cce0(param_1[2]);
  }
  piVar2 = (int *)param_1[10];
  DataMemoryBarrier(0xb);
  *(undefined1 *)(piVar2 + 2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[10]);
  }
  *(undefined1 *)(param_1 + 0x13) = 0;
  return;
}

