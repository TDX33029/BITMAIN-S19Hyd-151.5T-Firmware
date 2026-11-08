// FUN_00b9560c @ 00b9560c size=1568 calls_out=3 calls_in=2
// strings: 

void FUN_00b9560c(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  ulonglong uVar27;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar27 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar27 & 0xffffffff);
  uVar2 = uVar27 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar27 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar27;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar10 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar10) + (param_2 >> iVar10) >> 1;
  }
  uVar14 = 0;
  uVar13 = 0;
  uVar22 = 1;
LAB_00b956d8:
  uVar17 = 0;
  puVar5 = (uint *)(param_1 + uVar14 * 8);
  local_18c = 1;
  if (uVar14 < param_2) {
    local_18c = param_2 - uVar14;
    if (uVar4 <= local_18c) {
      uVar17 = local_18c;
      if (1 < local_18c) {
        uVar12 = puVar5[2];
        uVar11 = puVar5[3];
        bVar26 = *puVar5 <= uVar12;
        if (uVar12 == *puVar5) {
          bVar26 = puVar5[1] <= uVar11;
        }
        if (bVar26) {
          uVar17 = 2;
          if (local_18c != 2) {
            iVar10 = 0;
            do {
              iVar15 = iVar10 * 2;
              uVar17 = puVar5[iVar10 * 2 + 4];
              bVar25 = uVar12 <= uVar17;
              if (uVar17 == uVar12) {
                bVar25 = uVar11 <= puVar5[iVar15 + 5];
              }
              if (!bVar25) goto LAB_00b95888;
              iVar10 = iVar10 + 1;
              uVar11 = puVar5[iVar15 + 5];
              uVar12 = uVar17;
              uVar17 = local_18c;
            } while ((param_2 - 2) - uVar14 != iVar10);
            goto joined_r0x00b95898;
          }
          goto LAB_00b95918;
        }
        if (local_18c != 2) {
          iVar10 = 0;
          do {
            iVar15 = iVar10 * 2;
            uVar19 = puVar5[iVar10 * 2 + 4];
            bVar25 = uVar12 <= uVar19;
            if (uVar19 == uVar12) {
              bVar25 = uVar11 <= puVar5[iVar15 + 5];
            }
            if (bVar25) goto LAB_00b95888;
            iVar10 = iVar10 + 1;
            uVar11 = puVar5[iVar15 + 5];
            uVar12 = uVar19;
          } while ((param_2 - 2) - uVar14 != iVar10);
          goto joined_r0x00b95898;
        }
        uVar17 = 2;
        uVar11 = 1;
        goto LAB_00b958ac;
      }
      goto LAB_00b95918;
    }
    goto LAB_00b9570c;
  }
  goto LAB_00b95980;
LAB_00b95888:
  uVar17 = iVar10 + 2;
joined_r0x00b95898:
  if (uVar17 < uVar4) {
LAB_00b9570c:
    if (param_5 == 0) {
      if (uVar4 <= local_18c) {
        local_18c = uVar4;
      }
      local_18c = local_18c << 1;
    }
    else {
      if (0x1f < local_18c) {
        local_18c = 0x20;
      }
      FUN_00b95c2c(puVar5,local_18c,param_3,param_4,0,0);
      local_18c = local_18c << 1 | 1;
    }
  }
  else {
    if (!bVar26) {
      uVar11 = uVar17 >> 1;
      if (uVar11 == 0) {
        uVar17 = 1;
      }
      else {
LAB_00b958ac:
        iVar10 = uVar14 * 8 + uVar17 * 8;
        iVar18 = 0;
        iVar15 = 0;
        do {
          puVar23 = (uint *)(param_1 + -8 + iVar10 + iVar18 * 8);
          uVar12 = *puVar23;
          puVar8 = puVar5 + iVar15 * 2;
          iVar15 = iVar15 + 1;
          *puVar23 = *puVar8;
          uVar19 = puVar23[1];
          *(uint *)(param_1 + -4 + iVar10 + iVar18 * 8) = puVar5[iVar18 * -2 + 1];
          iVar18 = iVar18 + -1;
          *puVar8 = uVar12;
          puVar8[1] = uVar19;
        } while (-iVar18 != uVar11);
      }
    }
LAB_00b95918:
    local_18c = uVar17 << 1 | 1;
  }
  uVar17 = uVar14 - (uVar22 >> 1);
  uVar11 = uVar14 + (local_18c >> 1);
  uVar12 = uVar11 + uVar14;
  lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar12;
  lVar3 = uVar2 * CONCAT14(CARRY4(uVar17,uVar14),uVar17 + uVar14);
  uVar11 = (uint)CARRY4(uVar11,uVar14) * (int)uVar2 +
           uVar12 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
           (uint)((ulonglong)lVar3 >> 0x20);
  uVar17 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
  if (uVar11 != 0) {
    uVar17 = LZCOUNT(uVar11);
  }
LAB_00b95980:
  if (1 < uVar13) {
    do {
      while( true ) {
        uVar11 = uVar13 - 1;
        if (abStack_67[uVar13] < uVar17) goto LAB_00b95bc8;
        uVar19 = local_170[uVar11];
        uVar12 = uVar19 >> 1;
        uVar24 = uVar12 + (uVar22 >> 1);
        uVar13 = uVar11;
        if ((uVar24 <= param_4) && (((uVar19 | uVar22) & 1) == 0)) break;
        puVar23 = (uint *)(param_1 + (uVar14 - uVar24) * 8);
        if ((uVar19 & 1) == 0) {
          FUN_00b95c2c(puVar23,uVar12,param_3,param_4,LZCOUNT(uVar12 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar22 & 1) == 0) {
          FUN_00b95c2c(puVar23 + uVar12 * 2,uVar22 >> 1,param_3,param_4,
                       LZCOUNT(uVar22 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar16 = uVar22 >> 1;
        if (1 < uVar19 && 1 < uVar22) {
          uVar22 = uVar12;
          if (uVar16 < uVar12) {
            uVar22 = uVar16;
          }
          if (uVar22 <= param_4) {
            puVar21 = puVar23 + uVar12 * 2;
            puVar8 = puVar23;
            if (uVar16 < uVar12) {
              puVar8 = puVar21;
            }
            FUN_016dd1aa(param_3,puVar8,uVar22 << 3);
            puVar7 = param_3 + uVar22 * 2;
            puVar8 = param_3;
            if (uVar16 < uVar12) {
              puVar9 = (uint *)(param_1 + -8 + uVar14 * 8);
              do {
                puVar20 = puVar21 + -2;
                puVar6 = puVar7 + -2;
                bVar26 = *puVar20 <= *puVar6;
                if (*puVar6 == *puVar20) {
                  bVar26 = puVar21[-1] <= puVar7[-1];
                }
                uVar22 = (uint)!bVar26;
                puVar7 = puVar6 + uVar22 * 2;
                if (uVar22 != 0) {
                  puVar6 = puVar20;
                }
                uVar12 = puVar6[1];
                *puVar9 = *puVar6;
                puVar9[1] = uVar12;
                puVar21 = puVar20 + (uVar22 ^ 1) * 2;
              } while ((puVar21 != puVar23) && (puVar9 = puVar9 + -2, puVar7 != param_3));
              puVar23 = puVar21;
            }
            else {
              do {
                bVar26 = *puVar8 <= *puVar21;
                if (*puVar21 == *puVar8) {
                  bVar26 = puVar8[1] <= puVar21[1];
                }
                uVar22 = (uint)!bVar26;
                puVar9 = puVar8;
                if (uVar22 != 0) {
                  puVar9 = puVar21;
                }
                uVar12 = puVar9[1];
                *puVar23 = *puVar9;
                puVar23[1] = uVar12;
                puVar23 = puVar23 + 2;
                puVar8 = puVar8 + (uVar22 ^ 1) * 2;
                if (puVar8 == puVar7) break;
                puVar21 = puVar21 + uVar22 * 2;
              } while (puVar21 != puVar5);
            }
            FUN_016dd1aa(puVar23,puVar8,(int)puVar7 - (int)puVar8);
          }
        }
        uVar22 = uVar24 * 2 | 1;
        if (uVar11 < 2) goto LAB_00b95bc0;
      }
      uVar22 = uVar24 * 2;
    } while (1 < uVar11);
LAB_00b95bc0:
    uVar13 = 1;
  }
LAB_00b95bc8:
  abStack_67[uVar13 + 1] = (byte)uVar17;
  local_170[uVar13] = uVar22;
  if (param_2 <= uVar14) {
    if ((uVar22 & 1) == 0) {
      FUN_00b95c2c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
    }
    return;
  }
  uVar13 = uVar13 + 1;
  uVar14 = uVar14 + (local_18c >> 1);
  uVar22 = local_18c;
  goto LAB_00b956d8;
}

