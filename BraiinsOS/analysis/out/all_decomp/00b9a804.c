// FUN_00b9a804 @ 00b9a804 size=1688 calls_out=3 calls_in=2
// strings: 

void FUN_00b9a804(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  undefined4 uVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  ulonglong uVar29;
  uint local_188;
  uint local_17c [68];
  byte abStack_69 [69];
  
  uVar29 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar29 & 0xffffffff);
  uVar2 = uVar29 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar29 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar29;
  }
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar11 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar11) + (param_2 >> iVar11) >> 1;
  }
  uVar18 = 0;
  uVar17 = 0;
  uVar26 = 1;
LAB_00b9a8e0:
  uVar15 = 0;
  puVar6 = (uint *)(param_1 + uVar18 * 0x10);
  local_188 = 1;
  if (uVar18 < param_2) {
    local_188 = param_2 - uVar18;
    if (uVar5 <= local_188) {
      if (1 < local_188) {
        uVar15 = puVar6[4];
        uVar13 = puVar6[5];
        bVar27 = *puVar6 <= uVar15;
        if (uVar15 == *puVar6) {
          bVar27 = puVar6[1] <= uVar13;
        }
        if (bVar27) {
          uVar14 = 2;
          if (local_188 != 2) {
            iVar11 = 0;
            do {
              uVar14 = puVar6[iVar11 * 4 + 8];
              iVar4 = iVar11 * 4;
              bVar28 = uVar15 <= uVar14;
              if (uVar14 == uVar15) {
                bVar28 = uVar13 <= puVar6[iVar4 + 9];
              }
              if (!bVar28) goto LAB_00b9ad24;
              iVar11 = iVar11 + 1;
              uVar15 = uVar14;
              uVar13 = puVar6[iVar4 + 9];
            } while ((param_2 - 2) - uVar18 != iVar11);
            goto LAB_00b9ad1c;
          }
          goto LAB_00b9adbc;
        }
        if (local_188 != 2) {
          iVar11 = 0;
          do {
            uVar14 = puVar6[iVar11 * 4 + 8];
            iVar4 = iVar11 * 4;
            bVar28 = uVar15 <= uVar14;
            if (uVar14 == uVar15) {
              bVar28 = uVar13 <= puVar6[iVar4 + 9];
            }
            if (bVar28) goto LAB_00b9ad24;
            iVar11 = iVar11 + 1;
            uVar15 = uVar14;
            uVar13 = puVar6[iVar4 + 9];
          } while ((param_2 - 2) - uVar18 != iVar11);
LAB_00b9ad1c:
          uVar14 = local_188;
          goto LAB_00b9ad28;
        }
        uVar14 = 2;
        uVar15 = 1;
        goto LAB_00b9ad50;
      }
      uVar14 = local_188;
      goto LAB_00b9adbc;
    }
    goto LAB_00b9a914;
  }
  goto joined_r0x00b9ae34;
LAB_00b9ad24:
  uVar14 = iVar11 + 2;
LAB_00b9ad28:
  if (uVar14 < uVar5) {
LAB_00b9a914:
    if (param_5 == 0) {
      if (uVar5 <= local_188) {
        local_188 = uVar5;
      }
      local_188 = local_188 << 1;
    }
    else {
      if (0x1f < local_188) {
        local_188 = 0x20;
      }
      FUN_00b9ae9c(puVar6,local_188,param_3,param_4,0,0);
      local_188 = local_188 << 1 | 1;
    }
  }
  else {
    if (!bVar27) {
      uVar15 = uVar14 >> 1;
      if (uVar15 == 0) {
        uVar14 = 1;
      }
      else {
LAB_00b9ad50:
        puVar12 = (undefined4 *)(param_1 + 8 + uVar18 * 0x10);
        puVar16 = (undefined4 *)(param_1 + -8 + uVar14 * 0x10 + uVar18 * 0x10);
        do {
          uVar23 = puVar12[-2];
          uVar15 = uVar15 - 1;
          puVar12[-2] = puVar16[-2];
          puVar16[-2] = uVar23;
          uVar23 = puVar16[-1];
          puVar16[-1] = puVar12[-1];
          puVar12[-1] = uVar23;
          uVar23 = *puVar12;
          *puVar12 = *puVar16;
          *puVar16 = uVar23;
          uVar23 = puVar16[1];
          puVar16[1] = puVar12[1];
          puVar16 = puVar16 + -4;
          puVar12[1] = uVar23;
          puVar12 = puVar12 + 4;
        } while (uVar15 != 0);
      }
    }
LAB_00b9adbc:
    local_188 = uVar14 << 1 | 1;
  }
  uVar15 = uVar18 - (uVar26 >> 1);
  uVar13 = uVar18 + (local_188 >> 1);
  uVar14 = uVar13 + uVar18;
  lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar14;
  lVar3 = uVar2 * CONCAT14(CARRY4(uVar15,uVar18),uVar15 + uVar18);
  uVar13 = (uint)CARRY4(uVar13,uVar18) * (int)uVar2 +
           uVar14 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
           (uint)((ulonglong)lVar3 >> 0x20);
  uVar15 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
  if (uVar13 != 0) {
    uVar15 = LZCOUNT(uVar13);
  }
joined_r0x00b9ae34:
  if (uVar17 < 2) {
    abStack_69[uVar17 + 3] = (byte)uVar15;
    local_17c[uVar17 + 3] = uVar26;
  }
  else {
    do {
      while( true ) {
        uVar13 = uVar17 - 1;
        if (abStack_69[uVar17 + 2] < uVar15) goto LAB_00b9abfc;
        uVar20 = local_17c[uVar17 + 2];
        uVar14 = uVar20 >> 1;
        uVar25 = uVar14 + (uVar26 >> 1);
        uVar17 = uVar13;
        if ((uVar25 <= param_4) && (((uVar20 | uVar26) & 1) == 0)) break;
        puVar24 = (uint *)(param_1 + (uVar18 - uVar25) * 0x10);
        if ((uVar20 & 1) == 0) {
          FUN_00b9ae9c(puVar24,uVar14,param_3,param_4,LZCOUNT(uVar14 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar26 & 1) == 0) {
          FUN_00b9ae9c(puVar24 + uVar14 * 4,uVar26 >> 1,param_3,param_4,
                       LZCOUNT(uVar26 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar19 = uVar26 >> 1;
        if (1 < uVar20 && 1 < uVar26) {
          uVar26 = uVar14;
          if (uVar19 < uVar14) {
            uVar26 = uVar19;
          }
          if (uVar26 <= param_4) {
            puVar22 = puVar24 + uVar14 * 4;
            puVar10 = puVar24;
            if (uVar19 < uVar14) {
              puVar10 = puVar22;
            }
            FUN_016dd1aa(param_3,puVar10,uVar26 << 4);
            puVar8 = param_3 + uVar26 * 4;
            puVar10 = param_3;
            if (uVar19 < uVar14) {
              puVar9 = (uint *)(param_1 + -0x10 + uVar18 * 0x10);
              do {
                puVar21 = puVar22 + -4;
                puVar7 = puVar8 + -4;
                bVar27 = *puVar21 <= *puVar7;
                if (*puVar7 == *puVar21) {
                  bVar27 = puVar22[-3] <= puVar8[-3];
                }
                uVar26 = (uint)!bVar27;
                puVar8 = puVar7 + uVar26 * 4;
                if (uVar26 != 0) {
                  puVar7 = puVar21;
                }
                uVar19 = *puVar7;
                uVar14 = puVar7[1];
                uVar20 = puVar7[2];
                puVar9[3] = puVar7[3];
                *puVar9 = uVar19;
                puVar22 = puVar21 + (uVar26 ^ 1) * 4;
                puVar9[1] = uVar14;
                puVar9[2] = uVar20;
              } while ((puVar22 != puVar24) && (puVar9 = puVar9 + -4, puVar8 != param_3));
              puVar24 = puVar22;
            }
            else {
              do {
                bVar27 = *puVar10 <= *puVar22;
                if (*puVar22 == *puVar10) {
                  bVar27 = puVar10[1] <= puVar22[1];
                }
                uVar26 = (uint)!bVar27;
                puVar9 = puVar10;
                if (uVar26 != 0) {
                  puVar9 = puVar22;
                }
                uVar19 = *puVar9;
                uVar20 = puVar9[1];
                uVar14 = puVar9[2];
                puVar24[3] = puVar9[3];
                *puVar24 = uVar19;
                puVar10 = puVar10 + (uVar26 ^ 1) * 4;
                puVar24[1] = uVar20;
                puVar24[2] = uVar14;
                puVar24 = puVar24 + 4;
              } while ((puVar10 != puVar8) && (puVar22 = puVar22 + uVar26 * 4, puVar22 != puVar6));
            }
            FUN_016dd1aa(puVar24,puVar10,(int)puVar8 - (int)puVar10);
          }
        }
        uVar26 = uVar25 * 2 | 1;
        if (uVar13 < 2) goto LAB_00b9abf8;
      }
      uVar26 = uVar25 * 2;
    } while (1 < uVar13);
LAB_00b9abf8:
    uVar17 = 1;
LAB_00b9abfc:
    abStack_69[uVar17 + 3] = (byte)uVar15;
    local_17c[uVar17 + 3] = uVar26;
  }
  if (param_2 <= uVar18) {
    if ((uVar26 & 1) == 0) {
      FUN_00b9ae9c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
    }
    return;
  }
  uVar17 = uVar17 + 1;
  uVar18 = uVar18 + (local_188 >> 1);
  uVar26 = local_188;
  goto LAB_00b9a8e0;
}

