// FUN_013fa678 @ 013fa678 size=1828 calls_out=3 calls_in=2
// strings: 

void FUN_013fa678(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  uint *puVar26;
  uint *puVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint *puVar30;
  undefined4 uVar31;
  uint uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  uint *puVar35;
  bool bVar36;
  bool bVar37;
  ulonglong uVar38;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar38 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar38 & 0xffffffff);
  uVar2 = uVar38 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar38 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar38;
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
  uVar18 = 1;
  uVar12 = 0;
  uVar23 = 0;
  do {
    uVar16 = 0;
    bVar15 = 0;
    local_18c = 1;
    if (uVar12 < param_2) {
      local_18c = param_2 - uVar12;
      puVar27 = (uint *)(param_1 + uVar12 * 0x18);
      if (local_18c < uVar4) {
LAB_013fa7ac:
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
          FUN_013fe9a4(puVar27,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar14 = local_18c;
        }
        else {
          uVar16 = puVar27[9];
          uVar11 = puVar27[6];
          bVar36 = *puVar27 <= uVar11;
          if (uVar11 == *puVar27) {
            bVar36 = puVar27[3] <= uVar16;
          }
          if (!bVar36) {
            if (local_18c != 2) {
              uVar14 = 2;
              puVar10 = (uint *)(param_1 + 0x3c + uVar12 * 0x18);
              do {
                uVar9 = *puVar10;
                uVar22 = puVar10[-3];
                bVar37 = uVar11 <= uVar22;
                if (uVar22 == uVar11) {
                  bVar37 = uVar16 <= uVar9;
                }
                if (bVar37) goto LAB_013fa924;
                uVar14 = uVar14 + 1;
                puVar10 = puVar10 + 6;
                uVar16 = uVar9;
                uVar11 = uVar22;
              } while (local_18c != uVar14);
              goto LAB_013fa920;
            }
            uVar14 = 2;
            uVar16 = 1;
LAB_013fa954:
            iVar5 = param_1 + -0xc + uVar14 * 0x18;
            iVar17 = param_1;
            do {
              uVar16 = uVar16 - 1;
              puVar7 = (undefined4 *)(iVar5 + uVar12 * 0x18);
              uVar20 = *puVar7;
              puVar21 = (undefined4 *)(iVar17 + uVar12 * 0x18);
              uVar31 = *puVar21;
              iVar17 = iVar17 + 0x18;
              uVar13 = puVar7[1];
              uVar28 = puVar7[-1];
              uVar25 = puVar7[-2];
              uVar33 = puVar21[3];
              *puVar21 = puVar7[-3];
              uVar34 = puVar21[2];
              puVar21[3] = uVar20;
              uVar29 = puVar21[4];
              puVar7[-2] = puVar21[1];
              puVar21[4] = uVar13;
              uVar13 = puVar21[5];
              uVar20 = puVar7[2];
              puVar21[1] = uVar25;
              puVar21[2] = uVar28;
              puVar7[-3] = uVar31;
              puVar7[-1] = uVar34;
              *puVar7 = uVar33;
              puVar7[1] = uVar29;
              puVar21[5] = uVar20;
              puVar7[2] = uVar13;
              iVar5 = iVar5 + -0x18;
            } while (uVar16 != 0);
          }
          else {
            uVar14 = 2;
            if (local_18c != 2) {
              uVar14 = 2;
              puVar10 = (uint *)(param_1 + 0x3c + uVar12 * 0x18);
              do {
                uVar9 = *puVar10;
                uVar22 = puVar10[-3];
                bVar37 = uVar11 <= uVar22;
                if (uVar22 == uVar11) {
                  bVar37 = uVar16 <= uVar9;
                }
                if (!bVar37) goto LAB_013fa924;
                uVar14 = uVar14 + 1;
                puVar10 = puVar10 + 6;
                uVar16 = uVar9;
                uVar11 = uVar22;
              } while (local_18c != uVar14);
LAB_013fa920:
              uVar14 = local_18c;
LAB_013fa924:
              if (uVar14 < uVar4) goto LAB_013fa7ac;
              if (!bVar36) {
                uVar16 = uVar14 >> 1;
                if (uVar16 != 0) goto LAB_013fa954;
                uVar14 = 1;
              }
            }
          }
        }
        local_18c = uVar14 << 1 | 1;
      }
      uVar16 = uVar12 - (uVar18 >> 1);
      uVar11 = uVar12 + (local_18c >> 1);
      uVar14 = uVar11 + uVar12;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar14;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar16,uVar12),uVar16 + uVar12);
      uVar11 = (uint)CARRY4(uVar11,uVar12) * (int)uVar2 +
               uVar14 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar16 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar11 != 0) {
        uVar16 = LZCOUNT(uVar11);
      }
      bVar15 = (byte)uVar16;
      if (uVar23 < 2) goto LAB_013fa77c;
LAB_013faa94:
      do {
        while( true ) {
          uVar11 = uVar23 - 1;
          if (abStack_67[uVar23] < uVar16) goto LAB_013fad34;
          uVar22 = local_170[uVar11];
          uVar14 = uVar22 >> 1;
          uVar9 = uVar14 + (uVar18 >> 1);
          uVar23 = uVar11;
          if ((param_4 < uVar9) || (((uVar22 | uVar18) & 1) != 0)) break;
          uVar18 = uVar9 * 2;
          if (uVar11 < 2) goto LAB_013fad30;
        }
        puVar27 = (uint *)(param_1 + (uVar12 - uVar9) * 0x18);
        if ((uVar22 & 1) == 0) {
          FUN_013fe9a4(puVar27,uVar14,param_3,param_4,LZCOUNT(uVar14 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar18 & 1) == 0) {
          FUN_013fe9a4(puVar27 + uVar14 * 6,uVar18 >> 1,param_3,param_4,
                       LZCOUNT(uVar18 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar19 = uVar18 >> 1;
        if (1 < uVar22 && 1 < uVar18) {
          uVar18 = uVar14;
          if (uVar19 < uVar14) {
            uVar18 = uVar19;
          }
          if (uVar18 <= param_4) {
            puVar10 = puVar27 + uVar14 * 6;
            puVar8 = puVar27;
            if (uVar19 < uVar14) {
              puVar8 = puVar10;
            }
            FUN_016dd1aa(param_3,puVar8,uVar18 * 0x18);
            puVar30 = param_3 + uVar18 * 6;
            puVar8 = param_3;
            if (uVar19 < uVar14) {
              puVar26 = puVar10;
              puVar10 = (uint *)(param_1 + -0x18 + uVar12 * 0x18);
              do {
                puVar35 = puVar30 + -6;
                puVar6 = puVar26 + -6;
                bVar36 = *puVar6 <= *puVar35;
                if (*puVar35 == *puVar6) {
                  bVar36 = puVar26[-3] <= puVar30[-3];
                }
                uVar18 = (uint)!bVar36;
                puVar30 = puVar35;
                if (uVar18 != 0) {
                  puVar30 = puVar6;
                }
                uVar14 = puVar30[1];
                uVar22 = puVar30[2];
                uVar19 = puVar30[3];
                uVar24 = puVar30[4];
                uVar32 = puVar30[5];
                *puVar10 = *puVar30;
                puVar10[1] = uVar14;
                puVar10[2] = uVar22;
                puVar10[3] = uVar19;
                puVar10[4] = uVar24;
                puVar10[5] = uVar32;
                puVar30 = puVar35 + (uVar18 | uVar18 << 1) * 2;
                puVar26 = puVar6 + (uVar18 ^ 1 | (uVar18 ^ 1) << 1) * 2;
              } while ((puVar26 != puVar27) && (puVar10 = puVar10 + -6, puVar30 != param_3));
            }
            else {
              do {
                bVar36 = *puVar8 <= *puVar10;
                if (*puVar10 == *puVar8) {
                  bVar36 = puVar8[3] <= puVar10[3];
                }
                uVar18 = (uint)!bVar36;
                puVar6 = puVar8;
                if (uVar18 != 0) {
                  puVar6 = puVar10;
                }
                puVar26 = puVar27 + 6;
                uVar14 = puVar6[1];
                uVar22 = puVar6[2];
                uVar19 = puVar6[3];
                uVar24 = puVar6[4];
                uVar32 = puVar6[5];
                *puVar27 = *puVar6;
                puVar27[1] = uVar14;
                puVar27[2] = uVar22;
                puVar27[3] = uVar19;
                puVar27[4] = uVar24;
                puVar27[5] = uVar32;
                puVar6 = (uint *)(uVar18 ^ 1 | (uVar18 ^ 1) << 1);
                puVar8 = puVar8 + (int)puVar6 * 2;
                if (puVar8 != puVar30) {
                  puVar10 = puVar10 + (uVar18 | uVar18 << 1) * 2;
                  puVar6 = (uint *)(param_1 + uVar12 * 0x18);
                }
                puVar27 = puVar26;
              } while (puVar8 != puVar30 && puVar10 != puVar6);
            }
            FUN_016dd1aa(puVar26,puVar8,(int)puVar30 - (int)puVar8);
          }
        }
        uVar18 = uVar9 * 2 | 1;
      } while (1 < uVar11);
LAB_013fad30:
      uVar23 = 1;
LAB_013fad34:
      abStack_67[uVar23 + 1] = (byte)uVar16;
      local_170[uVar23] = uVar18;
      uVar16 = uVar18;
      uVar18 = local_18c;
    }
    else {
      if (1 < uVar23) goto LAB_013faa94;
LAB_013fa77c:
      abStack_67[uVar23 + 1] = bVar15;
      local_170[uVar23] = uVar18;
      uVar16 = uVar18;
      uVar18 = local_18c;
    }
    if (param_2 <= uVar12) {
      if ((uVar16 & 1) == 0) {
        FUN_013fe9a4(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar23 = uVar23 + 1;
    uVar12 = uVar12 + (uVar18 >> 1);
  } while( true );
}

