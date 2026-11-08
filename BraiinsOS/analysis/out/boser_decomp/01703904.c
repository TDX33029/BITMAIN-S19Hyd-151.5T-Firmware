// FUN_01703904 @ 01703904 size=460 calls_out=6 calls_in=1
// strings: 

void FUN_01703904(uint *param_1)

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
    FUN_0134bd64(puVar4[-1],*puVar4);
    puVar4 = puVar4 + 3;
  }
  FUN_0134aee0(param_1[2],uVar5,4,0xc);
  piVar2 = (int *)param_1[0x1c];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(param_1[0x1c],param_1[0x1d]);
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
    FUN_018531c0(param_1[0x1f],param_1[0x20]);
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
    FUN_018531c0(param_1[0x21],param_1[0x22]);
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
    FUN_018531c0(param_1[0x23],param_1[0x24]);
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
    FUN_018fa09c(param_1[0x25]);
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
    FUN_018531c0(param_1[0x26],param_1[0x27]);
  }
  FUN_0134aee0(param_1[5],param_1[6],4,8);
  FUN_0134aee0(param_1[8],param_1[9],4,8);
  piVar2 = (int *)param_1[0x28];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018f9e38(param_1[0x28]);
  }
  FUN_0185bf44(param_1 + 0xb);
  return;
}

