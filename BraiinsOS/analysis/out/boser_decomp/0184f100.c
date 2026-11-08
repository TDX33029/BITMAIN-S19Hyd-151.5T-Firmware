// FUN_0184f100 @ 0184f100 size=280 calls_out=4 calls_in=1
// strings: 

void FUN_0184f100(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(char *)((int)param_1 + 0x19) == '\x02') {
    return;
  }
  FUN_014323b0(param_1 + 3);
  if (*(char *)(param_1 + 2) == '\x02') {
    piVar3 = (int *)*param_1;
    piVar4 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014212ac(piVar3);
    }
  }
  else {
    piVar4 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014212ac(*param_1);
    }
    piVar4 = (int *)param_1[1];
  }
  FUN_00943f20();
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  FUN_01823684(piVar4 + 8);
  if (piVar4[0x10] != 0) {
    (**(code **)(piVar4[0x10] + 0xc))(piVar4[0x11]);
  }
  if (piVar4 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar3 = piVar4 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(piVar4);
    return;
  }
  return;
}

