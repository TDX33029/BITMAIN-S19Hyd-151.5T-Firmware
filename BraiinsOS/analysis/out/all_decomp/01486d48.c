// FUN_01486d48 @ 01486d48 size=484 calls_out=6 calls_in=2
// strings: 

void FUN_01486d48(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  if (1 < *param_1) {
    return;
  }
  uVar5 = param_1[3];
  puVar4 = (undefined4 *)(uVar5 + 4);
  for (uVar6 = param_1[4]; uVar6 != 0; uVar6 = uVar6 - 1) {
    if (puVar4[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar4);
    }
    puVar4 = puVar4 + 3;
  }
  if (param_1[2] != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  piVar2 = (int *)param_1[0x1c];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(param_1[0x1c],param_1[0x1d]);
  }
  piVar2 = (int *)param_1[0x1f];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(param_1[0x1f],param_1[0x20]);
  }
  piVar2 = (int *)param_1[0x21];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(param_1[0x21],param_1[0x22]);
  }
  piVar2 = (int *)param_1[0x23];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(param_1[0x23],param_1[0x24]);
  }
  piVar2 = (int *)param_1[0x25];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0156180c(param_1[0x25]);
  }
  piVar2 = (int *)param_1[0x26];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_015614d8(param_1[0x26],param_1[0x27]);
  }
  if (param_1[5] != 0) {
    thunk_FUN_016d3fb4(param_1[6]);
  }
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  piVar2 = (int *)param_1[0x28];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0156187c(param_1[0x28]);
  }
  FUN_01561ef8(param_1 + 0xb);
  return;
}

