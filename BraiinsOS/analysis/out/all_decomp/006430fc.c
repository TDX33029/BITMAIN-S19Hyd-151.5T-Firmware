// FUN_006430fc @ 006430fc size=468 calls_out=4 calls_in=4
// strings: 

void FUN_006430fc(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  short *psVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  sVar1 = *(short *)(param_1 + 0x160);
  if (sVar1 != 2) {
    iVar2 = 0;
    if (sVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x164);
    }
    if (sVar1 != 0 && iVar2 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x168));
    }
    bVar9 = *(short *)(param_1 + 0x184) != 0;
    iVar2 = 0;
    if (bVar9) {
      iVar2 = *(int *)(param_1 + 0x188);
    }
    if (bVar9 && iVar2 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18c));
      iVar2 = *(int *)(param_1 + 0x150);
      iVar6 = *(int *)(param_1 + 0x14c);
      goto joined_r0x00643150;
    }
  }
  iVar2 = *(int *)(param_1 + 0x150);
  iVar6 = *(int *)(param_1 + 0x14c);
joined_r0x00643150:
  if (iVar2 != 0) {
    psVar7 = (short *)(iVar6 + 0x24);
    do {
      iVar3 = 0;
      if (psVar7[-0x12] != 0) {
        iVar3 = *(int *)(psVar7 + -0x10);
      }
      if (psVar7[-0x12] != 0 && iVar3 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar7 + -0xe));
      }
      iVar3 = 0;
      if (*psVar7 != 0) {
        iVar3 = *(int *)(psVar7 + 2);
      }
      if (*psVar7 != 0 && iVar3 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar7 + 4));
      }
      psVar7 = psVar7 + 0x22;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(int *)(param_1 + 0x148) != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  iVar2 = *(int *)(param_1 + 0x15c);
  iVar6 = *(int *)(param_1 + 0x158);
  if (iVar2 != 0) {
    puVar8 = (undefined4 *)(iVar6 + 0x10);
    do {
      if ((puVar8[-4] & 0x7fffffff) == 0) {
        uVar4 = puVar8[-1];
      }
      else {
        thunk_FUN_016d3fb4(puVar8[-3]);
        uVar4 = puVar8[-1];
      }
      if ((uVar4 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 0x17;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(int *)(param_1 + 0x154) != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  piVar5 = *(int **)(param_1 + 0x124);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar9 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar9);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01089b40(*(undefined4 *)(param_1 + 0x124));
  }
  if ((*(uint *)(param_1 + 0x118) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x11c));
  }
  FUN_006446fc(param_1);
  piVar5 = *(int **)(param_1 + 0x1a4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar9 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar9);
  *piVar5 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007910a4(*(undefined4 *)(param_1 + 0x1a4));
    return;
  }
  return;
}

