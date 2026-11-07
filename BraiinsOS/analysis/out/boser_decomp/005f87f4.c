// FUN_005f87f4 @ 005f87f4 size=456 calls_out=4 calls_in=9
// strings: 

void FUN_005f87f4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  if (iVar2 != -0x80000000) {
    if (iVar2 == -0x7fffffff) goto LAB_005f8838;
    FUN_019bb7e0(iVar2,param_1[1]);
  }
  if (param_1[3] != -0x80000000) {
    FUN_019bb7e0(param_1[3],param_1[4]);
  }
  if (param_1[6] != -0x80000000) {
    FUN_019bb7e0(param_1[6],param_1[7]);
  }
LAB_005f8838:
  piVar3 = (int *)param_1[0xd];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0xd]);
  }
  piVar3 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00b5f094(param_1[0xe]);
  }
  piVar3 = (int *)param_1[0xf];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0xf]);
  }
  piVar3 = (int *)param_1[0x10];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x10]);
  }
  piVar3 = (int *)param_1[0x11];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x11]);
  }
  piVar3 = (int *)param_1[0x12];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x12]);
  }
  piVar3 = (int *)param_1[0x13];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x13]);
  }
  piVar3 = (int *)param_1[0x14];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00b5f178(param_1[0x14]);
    return;
  }
  return;
}

