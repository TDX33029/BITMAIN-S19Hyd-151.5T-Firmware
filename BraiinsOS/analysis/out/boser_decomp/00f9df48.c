// FUN_00f9df48 @ 00f9df48 size=216 calls_out=3 calls_in=0
// strings: 

void FUN_00f9df48(undefined4 *param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar3 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182080(*param_1);
  }
  piVar3 = (int *)param_1[1];
  piVar4 = piVar3 + 0x2a;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  DataMemoryBarrier(0xb);
  if (iVar5 == 1) {
    puVar2 = (uint *)(piVar3 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1;
    iVar5 = 8;
    do {
      FUN_019e03e8((int)piVar3 + iVar5);
      iVar5 = iVar5 + 0x10;
    } while (iVar5 != 0x88);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(piVar3);
    return;
  }
  return;
}

