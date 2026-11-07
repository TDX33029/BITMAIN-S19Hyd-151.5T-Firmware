// FUN_014b3440 @ 014b3440 size=476 calls_out=6 calls_in=0
// strings: 

void FUN_014b3440(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  
  FUN_0148f36c(param_1 + 0x20);
  iVar7 = *(int *)(param_1 + 0x44);
  if (iVar7 != 0) {
    iVar8 = *(int *)(param_1 + 0x4c);
    if (iVar8 != 0) {
      puVar6 = *(uint **)(param_1 + 0x40);
      puVar4 = puVar6 + 1;
      uVar5 = ~*puVar6 & 0x80808080;
      do {
        puVar3 = puVar4;
        if (uVar5 == 0) {
          do {
            puVar4 = puVar3 + 1;
            uVar5 = *puVar3;
            puVar6 = puVar6 + -0x24;
            puVar3 = puVar4;
          } while ((uVar5 & 0x80808080) == 0x80808080);
          uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
        }
        FUN_0148f178(puVar6 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                             (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) * -9
                              + -9);
        iVar8 = iVar8 + -1;
        uVar5 = uVar5 - 1 & uVar5;
      } while (iVar8 != 0);
    }
    if (iVar7 * 0x25 != -0x29) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x40) + iVar7 * -0x24 + -0x24);
    }
  }
  iVar7 = *(int *)(param_1 + 100);
  if (iVar7 != 0) {
    iVar8 = *(int *)(param_1 + 0x6c);
    if (iVar8 != 0) {
      puVar6 = *(uint **)(param_1 + 0x60);
      puVar4 = puVar6 + 1;
      uVar5 = ~*puVar6 & 0x80808080;
      do {
        puVar3 = puVar4;
        if (uVar5 == 0) {
          do {
            puVar4 = puVar3 + 1;
            uVar5 = *puVar3;
            puVar6 = puVar6 + -0x28;
            puVar3 = puVar4;
          } while ((uVar5 & 0x80808080) == 0x80808080);
          uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
        }
        FUN_0148ebf4(puVar6 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                             (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) *
                              -10 + -10);
        iVar8 = iVar8 + -1;
        uVar5 = uVar5 - 1 & uVar5;
      } while (iVar8 != 0);
    }
    if (iVar7 * 0x29 != -0x2d) {
      thunk_FUN_016d3fb4(*(int *)(param_1 + 0x60) + iVar7 * -0x28 + -0x28);
    }
  }
  FUN_01449e44(param_1 + 0x94);
  piVar2 = *(int **)(param_1 + 0x80);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089ddfc(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84));
  }
  piVar2 = *(int **)(param_1 + 0x88);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
      return;
    }
  }
  return;
}

