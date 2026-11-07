// FUN_00f2ed88 @ 00f2ed88 size=328 calls_out=3 calls_in=2
// strings: 

void FUN_00f2ed88(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 0x45) == '\0') {
    FUN_01139b38(param_1[6],param_1[7]);
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
    piVar2 = (int *)param_1[0xb];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0121cce0(param_1[0xb]);
      return;
    }
    return;
  }
  if (*(char *)((int)param_1 + 0x45) != '\x03') {
    return;
  }
  piVar2 = (int *)param_1[9];
  if (*piVar2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
    if (bVar1) {
      *piVar2 = 0x84;
      goto LAB_00f2ee58;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  (**(code **)(*(int *)(param_1[9] + 8) + 0x10))();
LAB_00f2ee58:
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121cce0(*param_1);
  }
  piVar2 = (int *)param_1[8];
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
    FUN_01a38efc(param_1[8]);
  }
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}

