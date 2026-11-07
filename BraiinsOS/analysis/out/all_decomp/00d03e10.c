// FUN_00d03e10 @ 00d03e10 size=320 calls_out=3 calls_in=1
// strings: 

void FUN_00d03e10(int param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int unaff_r6;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar6 = *(int *)(param_1 + 0x14);
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar6 != 0) {
    iVar4 = 0;
    do {
      iVar6 = iVar6 + -1;
      bVar8 = *(int *)(iVar7 - iVar4) != 0;
      iVar1 = 0;
      if (bVar8) {
        unaff_r6 = iVar7 - iVar4;
        iVar1 = *(int *)(unaff_r6 + 4);
      }
      if (bVar8 && iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(unaff_r6 + 8));
      }
      iVar4 = iVar4 + -0xc;
    } while (iVar6 != 0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_016d3fb4(iVar7);
  }
  piVar5 = *(int **)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  piVar3 = piVar5 + 0x2a;
  do {
    iVar6 = *piVar3;
    bVar8 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar8);
  *piVar3 = iVar6 + -1;
  DataMemoryBarrier(0xb);
  if (iVar6 == 1) {
    puVar2 = (uint *)(piVar5 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      bVar8 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar8);
    *puVar2 = *puVar2 | 1;
    FUN_0163b708(piVar5 + 2);
    FUN_0163b708(piVar5 + 6);
    FUN_0163b708(piVar5 + 10);
    FUN_0163b708(piVar5 + 0xe);
    FUN_0163b708(piVar5 + 0x12);
    FUN_0163b708(piVar5 + 0x16);
    FUN_0163b708(piVar5 + 0x1a);
    FUN_0163b708(piVar5 + 0x1e);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar5;
    bVar8 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar8);
  *piVar5 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}

