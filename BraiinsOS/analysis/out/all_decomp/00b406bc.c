// FUN_00b406bc @ 00b406bc size=276 calls_out=8 calls_in=0
// strings: 

void FUN_00b406bc(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  FUN_00b40624(param_1 + 0x328);
  piVar2 = *(int **)(param_1 + 0x390);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d030dc(*(undefined4 *)(param_1 + 0x390));
  }
  FUN_00adbed4(param_1);
  piVar2 = *(int **)(param_1 + 0x374);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa7b14(*(undefined4 *)(param_1 + 0x374));
    }
  }
  piVar2 = *(int **)(param_1 + 0x370);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(*(undefined4 *)(param_1 + 0x370));
  }
  FUN_00b351e8(param_1 + 0x378);
  piVar4 = *(int **)(param_1 + 0x388);
  piVar2 = piVar4 + 0x3f;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_0163b708(piVar4 + 0x3a);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aad1e0(*(undefined4 *)(param_1 + 0x388));
    return;
  }
  return;
}

