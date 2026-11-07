// FUN_00aaa3d0 @ 00aaa3d0 size=1096 calls_out=10 calls_in=1
// strings: 

void FUN_00aaa3d0(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(*param_1);
  }
  piVar10 = (int *)param_1[1];
  piVar2 = piVar10 + 0x11;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    FUN_00a8db58(piVar10 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar10;
    bVar1 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar1);
  *piVar10 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaac8c(param_1[1]);
  }
  iVar3 = param_1[6];
  if ((iVar3 != 0) && (iVar4 = iVar3 * 8 + 8, iVar3 + iVar4 != -5)) {
    thunk_FUN_016d3fb4(param_1[5] - iVar4);
  }
  iVar3 = param_1[10];
  if (iVar3 != 0) {
    iVar4 = param_1[0xc];
    if (iVar4 != 0) {
      puVar13 = (uint *)param_1[9];
      puVar11 = puVar13 + 1;
      uVar14 = ~*puVar13 & 0x80808080;
      do {
        puVar5 = puVar11;
        if (uVar14 == 0) {
          do {
            puVar11 = puVar5 + 1;
            uVar14 = *puVar5;
            puVar13 = puVar13 + -0x14;
            puVar5 = puVar11;
          } while ((uVar14 & 0x80808080) == 0x80808080);
          uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
        }
        uVar9 = (uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                              (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3;
        if (puVar13[uVar9 * -5 + -4] != 0) {
          thunk_FUN_016d3fb4(puVar13[uVar9 * -5 + -3]);
        }
        uVar15 = puVar13[uVar9 * -5 + -1];
        if (uVar15 != 0) {
          puVar5 = (uint *)(uVar15 + 0x18);
          uVar8 = *(uint *)(uVar15 + 0x18);
          do {
            while( true ) {
              uVar7 = uVar8;
              if ((uVar7 & 4) != 0) goto LAB_00aab5b4;
              uVar8 = *puVar5;
              if (uVar8 == uVar7) break;
              ClearExclusiveLocal();
              DataMemoryBarrier(0xb);
            }
            DataMemoryBarrier(0xb);
            bVar1 = (bool)hasExclusiveAccess(puVar5);
            if (bVar1) {
              *puVar5 = uVar7 | 2;
            }
            DataMemoryBarrier(0xb);
          } while (!bVar1);
LAB_00aab5b4:
          if ((uVar7 & 5) == 1) {
            (**(code **)(*(int *)(uVar15 + 0x10) + 8))(*(undefined4 *)(uVar15 + 0x14));
          }
          piVar2 = (int *)puVar13[uVar9 * -5 + -1];
          if (piVar2 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar6 = *piVar2;
              bVar1 = (bool)hasExclusiveAccess(piVar2);
            } while (!bVar1);
            *piVar2 = iVar6 + -1;
            if (iVar6 == 1) {
              DataMemoryBarrier(0xb);
              FUN_00aacae8(puVar13[uVar9 * -5 + -1]);
            }
          }
        }
        iVar4 = iVar4 + -1;
        uVar14 = uVar14 - 1 & uVar14;
      } while (iVar4 != 0);
    }
    iVar4 = iVar3 * 0x14 + 0x14;
    if (iVar3 + iVar4 != -5) {
      thunk_FUN_016d3fb4(param_1[9] - iVar4);
    }
  }
  FUN_00a66a14(param_1 + 0xd);
  iVar3 = param_1[0x12];
  if (iVar3 != 0) {
    iVar4 = param_1[0x14];
    if (iVar4 != 0) {
      puVar11 = (uint *)param_1[0x11];
      puVar13 = puVar11 + 1;
      uVar14 = ~*puVar11 & 0x80808080;
      do {
        puVar5 = puVar13;
        if (uVar14 == 0) {
          do {
            puVar13 = puVar5 + 1;
            uVar14 = *puVar5;
            puVar11 = puVar11 + -0x10;
            puVar5 = puVar13;
          } while ((uVar14 & 0x80808080) == 0x80808080);
          uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
        }
        FUN_00a66c64((int)puVar11 +
                     (LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                              (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) & 0x38U) * -2 + -0x10);
        iVar4 = iVar4 + -1;
        uVar14 = uVar14 - 1 & uVar14;
      } while (iVar4 != 0);
    }
    iVar4 = iVar3 * 0x10 + 0x10;
    if (iVar3 + iVar4 != -5) {
      thunk_FUN_016d3fb4(param_1[0x11] - iVar4);
    }
  }
  puVar12 = (undefined4 *)param_1[0x15];
  piVar2 = (int *)*puVar12;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(*puVar12);
  }
  piVar2 = (int *)puVar12[1];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aaaafc(puVar12[1]);
  }
  thunk_FUN_016d3fb4(puVar12);
  if ((param_1[3] == 1) && (iVar3 = param_1[4], iVar3 != 0)) {
    puVar11 = (uint *)(iVar3 + 0x18);
    uVar14 = *(uint *)(iVar3 + 0x18);
    do {
      while( true ) {
        uVar9 = uVar14;
        if ((uVar9 & 4) != 0) goto LAB_00aab7c0;
        uVar14 = *puVar11;
        if (uVar14 == uVar9) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar11);
      if (bVar1) {
        *puVar11 = uVar9 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_00aab7c0:
    if ((uVar9 & 5) == 1) {
      (**(code **)(*(int *)(iVar3 + 0x10) + 8))(*(undefined4 *)(iVar3 + 0x14));
    }
    piVar2 = (int *)param_1[4];
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f3128(param_1[4]);
        return;
      }
    }
  }
  return;
}

