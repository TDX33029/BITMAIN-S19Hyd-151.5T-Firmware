// FUN_00b739b0 @ 00b739b0 size=1740 calls_out=3 calls_in=2
// strings: 

void FUN_00b739b0(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined4 *puVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  bool bVar28;
  bool bVar29;
  ulonglong uVar30;
  uint local_188;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar30 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar30 & 0xffffffff);
  uVar2 = uVar30 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar30 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar30;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar5 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar5) + (param_2 >> iVar5) >> 1;
  }
  uVar18 = 0;
  uVar16 = 0;
  uVar10 = 1;
LAB_00b73a88:
  uVar14 = 0;
  puVar7 = (uint *)(param_1 + uVar18 * 0x20);
  local_188 = 1;
  if (uVar18 < param_2) {
    local_188 = param_2 - uVar18;
    if (uVar4 <= local_188) {
      if (1 < local_188) {
        uVar14 = puVar7[8];
        uVar12 = puVar7[9];
        bVar28 = *puVar7 <= uVar14;
        if (uVar14 == *puVar7) {
          bVar28 = puVar7[1] <= uVar12;
        }
        if (bVar28) {
          uVar13 = 2;
          if (local_188 != 2) {
            iVar5 = 0;
            do {
              uVar13 = puVar7[iVar5 * 8 + 0x10];
              iVar20 = iVar5 * 8;
              bVar29 = uVar14 <= uVar13;
              if (uVar13 == uVar14) {
                bVar29 = uVar12 <= puVar7[iVar20 + 0x11];
              }
              if (!bVar29) goto LAB_00b73eb8;
              iVar5 = iVar5 + 1;
              uVar14 = uVar13;
              uVar12 = puVar7[iVar20 + 0x11];
            } while ((param_2 - 2) - uVar18 != iVar5);
            goto LAB_00b73eb0;
          }
          goto LAB_00b73f98;
        }
        if (local_188 != 2) {
          iVar5 = 0;
          do {
            uVar13 = puVar7[iVar5 * 8 + 0x10];
            iVar20 = iVar5 * 8;
            bVar29 = uVar14 <= uVar13;
            if (uVar13 == uVar14) {
              bVar29 = uVar12 <= puVar7[iVar20 + 0x11];
            }
            if (bVar29) goto LAB_00b73eb8;
            iVar5 = iVar5 + 1;
            uVar14 = uVar13;
            uVar12 = puVar7[iVar20 + 0x11];
          } while ((param_2 - 2) - uVar18 != iVar5);
LAB_00b73eb0:
          uVar13 = local_188;
          goto LAB_00b73ebc;
        }
        uVar13 = 2;
        uVar14 = 1;
        goto LAB_00b73ee8;
      }
      uVar13 = local_188;
      goto LAB_00b73f98;
    }
    goto LAB_00b73abc;
  }
  goto joined_r0x00b74014;
LAB_00b73eb8:
  uVar13 = iVar5 + 2;
LAB_00b73ebc:
  if (uVar13 < uVar4) {
LAB_00b73abc:
    if (param_5 == 0) {
      if (uVar4 <= local_188) {
        local_188 = uVar4;
      }
      local_188 = local_188 << 1;
    }
    else {
      if (0x1f < local_188) {
        local_188 = 0x20;
      }
      FUN_00b7407c(puVar7,local_188,param_3,param_4,0,0);
      local_188 = local_188 << 1 | 1;
    }
  }
  else {
    if (!bVar28) {
      uVar14 = uVar13 >> 1;
      if (uVar14 == 0) {
        uVar13 = 1;
      }
      else {
LAB_00b73ee8:
        iVar5 = uVar18 * 0x20;
        iVar11 = param_1 + -0x10 + uVar13 * 0x20;
        iVar20 = param_1;
        do {
          iVar17 = iVar11 + iVar5;
          puVar22 = (undefined4 *)(iVar20 + iVar5);
          uVar6 = *puVar22;
          iVar20 = iVar20 + 0x20;
          uVar14 = uVar14 - 1;
          *puVar22 = *(undefined4 *)(iVar17 + -0x10);
          *(undefined4 *)(iVar17 + -0x10) = uVar6;
          uVar6 = puVar22[1];
          puVar22[1] = *(undefined4 *)(iVar17 + -0xc);
          *(undefined4 *)(iVar17 + -0xc) = uVar6;
          uVar6 = puVar22[2];
          puVar22[2] = *(undefined4 *)(iVar17 + -8);
          *(undefined4 *)(iVar17 + -8) = uVar6;
          uVar6 = puVar22[3];
          puVar22[3] = *(undefined4 *)(iVar17 + -4);
          *(undefined4 *)(iVar17 + -4) = uVar6;
          uVar6 = *(undefined4 *)(iVar11 + iVar5);
          *(undefined4 *)(iVar11 + iVar5) = puVar22[4];
          iVar11 = iVar11 + -0x20;
          puVar22[4] = uVar6;
          uVar6 = puVar22[5];
          puVar22[5] = *(undefined4 *)(iVar17 + 4);
          *(undefined4 *)(iVar17 + 4) = uVar6;
          uVar6 = *(undefined4 *)(iVar17 + 8);
          *(undefined4 *)(iVar17 + 8) = puVar22[6];
          puVar22[6] = uVar6;
          uVar6 = puVar22[7];
          puVar22[7] = *(undefined4 *)(iVar17 + 0xc);
          *(undefined4 *)(iVar17 + 0xc) = uVar6;
        } while (uVar14 != 0);
      }
    }
LAB_00b73f98:
    local_188 = uVar13 << 1 | 1;
  }
  uVar14 = uVar18 - (uVar10 >> 1);
  uVar12 = uVar18 + (local_188 >> 1);
  uVar13 = uVar12 + uVar18;
  lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar13;
  lVar3 = uVar2 * CONCAT14(CARRY4(uVar14,uVar18),uVar14 + uVar18);
  uVar12 = (uint)CARRY4(uVar12,uVar18) * (int)uVar2 +
           uVar13 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
           (uint)((ulonglong)lVar3 >> 0x20);
  uVar14 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
  if (uVar12 != 0) {
    uVar14 = LZCOUNT(uVar12);
  }
joined_r0x00b74014:
  if (uVar16 < 2) {
    abStack_67[uVar16 + 1] = (byte)uVar14;
    local_170[uVar16] = uVar10;
  }
  else {
    do {
      while( true ) {
        uVar12 = uVar16 - 1;
        if (abStack_67[uVar16] < uVar14) goto LAB_00b73d88;
        uVar21 = local_170[uVar12];
        uVar13 = uVar21 >> 1;
        uVar8 = uVar13 + (uVar10 >> 1);
        uVar16 = uVar12;
        if ((uVar8 <= param_4) && (((uVar21 | uVar10) & 1) == 0)) break;
        puVar26 = (uint *)(param_1 + (uVar18 - uVar8) * 0x20);
        if ((uVar21 & 1) == 0) {
          FUN_00b7407c(puVar26,uVar13,param_3,param_4,LZCOUNT(uVar13 | 1) << 1 ^ 0x3e,0);
        }
        uVar19 = uVar10 >> 1;
        if ((uVar10 & 1) == 0) {
          FUN_00b7407c(puVar26 + uVar13 * 8,uVar19,param_3,param_4,LZCOUNT(uVar19 | 1) << 1 ^ 0x3e,0
                      );
        }
        if (1 < uVar21 && 1 < uVar10) {
          uVar10 = uVar13;
          if (uVar19 < uVar13) {
            uVar10 = uVar19;
          }
          if (uVar10 <= param_4) {
            puVar25 = puVar26 + uVar13 * 8;
            puVar9 = puVar26;
            if (uVar19 < uVar13) {
              puVar9 = puVar25;
            }
            FUN_016dd1aa(param_3,puVar9,uVar10 << 5);
            puVar23 = param_3 + uVar10 * 8;
            puVar9 = param_3;
            if (uVar19 < uVar13) {
              puVar27 = (uint *)(param_1 + -0x20 + uVar18 * 0x20);
              do {
                puVar24 = puVar25 + -8;
                puVar15 = puVar23 + -8;
                bVar28 = *puVar24 <= *puVar15;
                if (*puVar15 == *puVar24) {
                  bVar28 = puVar25[-7] <= puVar23[-7];
                }
                uVar10 = (uint)!bVar28;
                puVar23 = puVar15 + uVar10 * 8;
                if (uVar10 != 0) {
                  puVar15 = puVar24;
                }
                uVar13 = puVar15[1];
                uVar21 = puVar15[2];
                uVar19 = puVar15[3];
                puVar25 = puVar24 + (uVar10 ^ 1) * 8;
                *puVar27 = *puVar15;
                puVar27[1] = uVar13;
                puVar27[2] = uVar21;
                puVar27[3] = uVar19;
                uVar10 = puVar15[5];
                uVar13 = puVar15[6];
                uVar21 = puVar15[7];
                puVar27[4] = puVar15[4];
                puVar27[5] = uVar10;
                puVar27[6] = uVar13;
                puVar27[7] = uVar21;
              } while ((puVar25 != puVar26) && (puVar27 = puVar27 + -8, puVar23 != param_3));
              puVar27 = puVar25;
            }
            else {
              do {
                puVar27 = puVar26 + 8;
                bVar28 = *puVar9 <= *puVar25;
                if (*puVar25 == *puVar9) {
                  bVar28 = puVar9[1] <= puVar25[1];
                }
                uVar10 = (uint)!bVar28;
                puVar15 = puVar9;
                if (uVar10 != 0) {
                  puVar15 = puVar25;
                }
                uVar13 = puVar15[1];
                uVar21 = puVar15[2];
                uVar19 = puVar15[3];
                *puVar26 = *puVar15;
                puVar26[1] = uVar13;
                puVar26[2] = uVar21;
                puVar26[3] = uVar19;
                uVar13 = puVar15[5];
                uVar21 = puVar15[6];
                uVar19 = puVar15[7];
                puVar26[4] = puVar15[4];
                puVar26[5] = uVar13;
                puVar26[6] = uVar21;
                puVar26[7] = uVar19;
                puVar9 = puVar9 + (uVar10 ^ 1) * 8;
                if (puVar9 != puVar23) {
                  puVar25 = puVar25 + uVar10 * 8;
                }
                puVar26 = puVar27;
              } while (puVar9 != puVar23 && puVar25 != puVar7);
            }
            FUN_016dd1aa(puVar27,puVar9,(int)puVar23 - (int)puVar9);
          }
        }
        uVar10 = uVar8 * 2 | 1;
        if (uVar12 < 2) goto LAB_00b73d84;
      }
      uVar10 = uVar8 * 2;
    } while (1 < uVar12);
LAB_00b73d84:
    uVar16 = 1;
LAB_00b73d88:
    abStack_67[uVar16 + 1] = (byte)uVar14;
    local_170[uVar16] = uVar10;
  }
  if (param_2 <= uVar18) {
    if ((uVar10 & 1) == 0) {
      FUN_00b7407c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
    }
    return;
  }
  uVar16 = uVar16 + 1;
  uVar18 = uVar18 + (local_188 >> 1);
  uVar10 = local_188;
  goto LAB_00b73a88;
}

