// FUN_0148da18 @ 0148da18 size=620 calls_out=3 calls_in=3
// strings: 

void FUN_0148da18(int param_1)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  
  if ((9 < *(byte *)(param_1 + 0x9c)) && (*(int *)(param_1 + 0xa4) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa0));
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x54));
  }
  FUN_0148dd54(param_1);
  if (*(int *)(param_1 + 0x88) != 0) {
    if (*(int *)(param_1 + 0x8c) == 0) {
      puVar13 = *(undefined4 **)(param_1 + 0x94);
      uVar10 = *(undefined4 *)(param_1 + 0x90);
      pcVar3 = (code *)*puVar13;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar10);
      }
      if (puVar13[1] != 0) {
        thunk_FUN_016d3fb4(uVar10);
      }
    }
    else {
      (**(code **)(*(int *)(param_1 + 0x8c) + 0x10))
                (param_1 + 0x98,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94));
    }
  }
  piVar6 = *(int **)(param_1 + 0xb0);
  if (piVar6 != (int *)0x0) {
    iVar2 = piVar6[1];
    if (iVar2 != 0) {
      iVar9 = piVar6[3];
      if (iVar9 != 0) {
        puVar8 = (uint *)*piVar6;
        puVar4 = puVar8 + 1;
        uVar11 = ~*puVar8 & 0x80808080;
        do {
          puVar7 = puVar4;
          if (uVar11 == 0) {
            do {
              puVar4 = puVar7 + 1;
              uVar11 = *puVar7;
              puVar8 = puVar8 + -0x18;
              puVar7 = puVar4;
            } while ((uVar11 & 0x80808080) == 0x80808080);
            uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
          }
          uVar5 = (uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3;
          uVar12 = puVar8[uVar5 * -6 + -2];
          puVar13 = (undefined4 *)puVar8[uVar5 * -6 + -1];
          pcVar3 = (code *)*puVar13;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(uVar12);
          }
          if (puVar13[1] != 0) {
            thunk_FUN_016d3fb4(uVar12);
          }
          iVar9 = iVar9 + -1;
          uVar11 = uVar11 - 1 & uVar11;
        } while (iVar9 != 0);
      }
      if (iVar2 * 0x19 != -0x1d) {
        thunk_FUN_016d3fb4(*piVar6 + iVar2 * -0x18 + -0x18);
      }
    }
    thunk_FUN_016d3fb4(piVar6);
  }
  iVar2 = *(int *)(param_1 + 0xb8);
  if (iVar2 != 0) {
    puVar4 = (uint *)(iVar2 + 0x70);
    uVar11 = *(uint *)(iVar2 + 0x70);
    do {
      while( true ) {
        uVar5 = uVar11;
        if ((uVar5 & 4) != 0) goto LAB_0148dc20;
        uVar11 = *puVar4;
        if (uVar11 == uVar5) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar5 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_0148dc20:
    if ((uVar5 & 5) == 1) {
      (**(code **)(*(int *)(iVar2 + 0x68) + 8))(*(undefined4 *)(iVar2 + 0x6c));
    }
    piVar6 = *(int **)(param_1 + 0xb8);
    if (piVar6 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_014a545c(*(undefined4 *)(param_1 + 0xb8));
        return;
      }
    }
  }
  return;
}

