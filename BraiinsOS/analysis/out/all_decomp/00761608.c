// FUN_00761608 @ 00761608 size=504 calls_out=11 calls_in=1
// strings: 

void FUN_00761608(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar9;
  
  FUN_005e6cdc(param_1 + 0x38);
  if (*(int *)(param_1 + 0x44) != -1) {
    FUN_016dffb2();
  }
  FUN_00a414e8(param_1 + 0x38);
  FUN_0064a9ec(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 != -0x7ffffffe) {
    uVar5 = iVar2 + 0x80000001U & iVar2 >> 0x1f;
    if (uVar5 == 1) {
      iVar2 = *(int *)(param_1 + 0x94);
      iVar4 = 0x94;
    }
    else {
      iVar4 = 0x90;
      if (uVar5 != 0) goto LAB_0076167c;
    }
    if (iVar2 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + iVar4 + 4));
    }
  }
LAB_0076167c:
  if ((*(uint *)(param_1 + 0x80) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x84));
  }
  FUN_0064aaf8(param_1 + 0xc4);
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    iVar4 = *(int *)(param_1 + 0x1c);
    if (iVar4 != 0) {
      puVar9 = *(uint **)(param_1 + 0x10);
      puVar7 = puVar9 + 1;
      uVar5 = ~*puVar9 & 0x80808080;
      do {
        puVar6 = puVar7;
        if (uVar5 == 0) {
          do {
            puVar7 = puVar6 + 1;
            uVar5 = *puVar6;
            puVar9 = puVar9 + -0x24;
            puVar6 = puVar7;
          } while ((uVar5 & 0x80808080) == 0x80808080);
          uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
        }
        FUN_0074e820(puVar9 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                             (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) * -9
                              + -8);
        iVar4 = iVar4 + -1;
        uVar5 = uVar5 - 1 & uVar5;
      } while (iVar4 != 0);
    }
    if (iVar2 * 0x25 != -0x29) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x10) + iVar2 * -0x24 + -0x24);
    }
  }
  piVar3 = *(int **)(param_1 + 0x30);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    }
  }
  piVar8 = (int *)(param_1 + 0x1bc);
  FUN_006adf40(piVar8);
  piVar3 = (int *)*piVar8;
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105aee4(*piVar8);
    }
  }
  if (*(int *)(param_1 + 0xf8) == -0x80000000) {
    return;
  }
  FUN_0075e4c4((int *)(param_1 + 0xf8));
  return;
}

