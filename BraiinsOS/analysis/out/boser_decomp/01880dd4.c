// FUN_01880dd4 @ 01880dd4 size=124 calls_out=2 calls_in=4
// strings: 

void FUN_01880dd4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = param_1[3];
  if (iVar5 != 0) {
    puVar6 = (undefined4 *)param_1[4];
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_01be4678(iVar5);
    }
  }
  piVar3 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[5]);
  }
  if (*(char *)(param_1 + 2) == '\x02') {
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014212ac(*param_1);
    }
  }
  else {
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014212ac(*param_1);
    }
  }
  piVar3 = (int *)param_1[1];
  FUN_00943f20();
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  FUN_01823684(piVar3 + 8);
  if (piVar3[0x10] != 0) {
    (**(code **)(piVar3[0x10] + 0xc))(piVar3[0x11]);
  }
  if (piVar3 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar2 = piVar3 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(piVar3);
    return;
  }
  return;
}

