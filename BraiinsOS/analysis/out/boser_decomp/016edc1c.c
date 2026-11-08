// FUN_016edc1c @ 016edc1c size=1668 calls_out=3 calls_in=2
// strings: 

void FUN_016edc1c(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  bool bVar26;
  ulonglong uVar27;
  uint local_188;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar27 = FUN_01bf0ff0(0,0x40000000,param_2,0);
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
    iVar7 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar7) + (param_2 >> iVar7) >> 1;
  }
  uVar9 = 0;
  uVar14 = 0;
  uVar15 = 1;
  do {
    uVar13 = 0;
    local_188 = 1;
    if (uVar9 < param_2) {
      local_188 = param_2 - uVar9;
      puVar5 = (uint *)(param_1 + uVar9 * 0x18);
      if (local_188 < uVar4) {
LAB_016edd20:
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
          FUN_016eef44(puVar5,local_188,param_3,param_4,0,0);
          local_188 = local_188 << 1 | 1;
        }
      }
      else {
        if (local_188 < 2) {
          uVar13 = local_188;
        }
        else {
          uVar13 = *puVar5;
          uVar10 = puVar5[6];
          if (uVar10 == uVar13) {
            uVar13 = puVar5[3];
            uVar10 = puVar5[9];
          }
          if (uVar10 < uVar13) {
            if (local_188 != 2) {
              uVar13 = 2;
              puVar6 = (uint *)(param_1 + 0x24 + uVar9 * 0x18);
              do {
                bVar26 = puVar6[-3] <= puVar6[3];
                if (puVar6[3] == puVar6[-3]) {
                  bVar26 = *puVar6 <= puVar6[6];
                }
                if (bVar26) {
                  bVar26 = true;
                  goto LAB_016ede64;
                }
                uVar13 = uVar13 + 1;
                puVar6 = puVar6 + 6;
              } while (local_188 != uVar13);
              bVar26 = true;
              goto LAB_016ede50;
            }
            uVar13 = 2;
            uVar10 = 1;
LAB_016ede80:
            uVar11 = 0;
            iVar7 = param_1 + -0x18 + uVar9 * 0x18 + uVar13 * 0x18;
            do {
              iVar17 = 0;
              do {
                uVar20 = puVar5[-iVar17];
                puVar5[-iVar17] = *(uint *)(iVar7 + iVar17 * -4);
                *(uint *)(iVar7 + iVar17 * -4) = uVar20;
                bVar26 = iVar17 != -5;
                iVar17 = iVar17 + -1;
              } while (bVar26);
              uVar11 = uVar11 + 1;
              puVar5 = puVar5 + 6;
              iVar7 = iVar7 + -0x18;
            } while (uVar11 != uVar10);
          }
          else {
            uVar13 = 2;
            if (local_188 != 2) {
              puVar6 = (uint *)(param_1 + 0x24 + uVar9 * 0x18);
              do {
                bVar26 = puVar6[-3] <= puVar6[3];
                if (puVar6[3] == puVar6[-3]) {
                  bVar26 = *puVar6 <= puVar6[6];
                }
                if (!bVar26) {
                  bVar26 = false;
                  goto LAB_016ede64;
                }
                uVar13 = uVar13 + 1;
                puVar6 = puVar6 + 6;
              } while (local_188 != uVar13);
              bVar26 = false;
LAB_016ede50:
              uVar13 = local_188;
LAB_016ede64:
              if (uVar13 < uVar4) goto LAB_016edd20;
              if (bVar26) {
                uVar10 = uVar13 >> 1;
                if (uVar10 != 0) goto LAB_016ede80;
                uVar13 = 1;
              }
            }
          }
        }
        local_188 = uVar13 << 1 | 1;
      }
      uVar13 = uVar9 - (uVar15 >> 1);
      uVar10 = uVar9 + (local_188 >> 1);
      uVar11 = uVar10 + uVar9;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar11;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar13,uVar9),uVar13 + uVar9);
      uVar10 = (uint)CARRY4(uVar10,uVar9) * (int)uVar2 +
               uVar11 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar13 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar10 != 0) {
        uVar13 = LZCOUNT(uVar10);
      }
    }
    if (1 < uVar14) {
      puVar5 = (uint *)(param_1 + uVar9 * 0x18);
      do {
        uVar10 = uVar14 - 1;
        if (abStack_67[uVar14] < uVar13) goto LAB_016ee23c;
        uVar11 = local_170[uVar10];
        uVar14 = uVar11 >> 1;
        uVar20 = uVar14 + (uVar15 >> 1);
        if ((param_4 < uVar20) || (((uVar11 | uVar15) & 1) != 0)) {
          puVar6 = (uint *)(param_1 + (uVar9 - uVar20) * 0x18);
          if ((uVar11 & 1) == 0) {
            FUN_016eef44(puVar6,uVar14,param_3,param_4,LZCOUNT(uVar14 | 1) << 1 ^ 0x3e,0);
          }
          uVar16 = uVar15 >> 1;
          if ((uVar15 & 1) == 0) {
            FUN_016eef44(puVar6 + uVar14 * 6,uVar16,param_3,param_4,LZCOUNT(uVar16 | 1) << 1 ^ 0x3e,
                         0);
          }
          if (1 < uVar11 && 1 < uVar15) {
            uVar15 = uVar14;
            if (uVar16 < uVar14) {
              uVar15 = uVar16;
            }
            if (uVar15 <= param_4) {
              puVar24 = puVar6 + uVar14 * 6;
              puVar12 = puVar6;
              if (uVar16 < uVar14) {
                puVar12 = puVar24;
              }
              FUN_01bed4e2(param_3,puVar12,uVar15 * 0x18);
              puVar22 = param_3 + uVar15 * 6;
              puVar8 = param_3;
              if (uVar16 < uVar14) {
                puVar23 = (uint *)(param_1 + -0x18 + uVar9 * 0x18);
                puVar12 = puVar24;
                do {
                  puVar25 = puVar12 + -6;
                  uVar14 = *puVar25;
                  puVar24 = puVar22 + -6;
                  uVar15 = *puVar24;
                  if (uVar15 != uVar14) {
                    uVar15 = (uint)(uVar15 >= uVar14 && uVar15 != uVar14) - (uint)(uVar15 < uVar14);
                  }
                  else {
                    uVar14 = puVar12[-3];
                    uVar15 = puVar22[-3];
                    uVar15 = (uint)(uVar15 >= uVar14 && uVar15 != uVar14) - (uint)(uVar15 < uVar14);
                  }
                  puVar12 = puVar25;
                  if (uVar15 < 0x80000000) {
                    puVar12 = puVar24;
                  }
                  uVar14 = puVar12[1];
                  uVar11 = puVar12[2];
                  uVar16 = puVar12[3];
                  uVar18 = puVar12[4];
                  uVar21 = puVar12[5];
                  *puVar23 = *puVar12;
                  puVar23[1] = uVar14;
                  puVar23[2] = uVar11;
                  puVar23[3] = uVar16;
                  puVar23[4] = uVar18;
                  puVar23[5] = uVar21;
                  uVar14 = (uVar15 & 0xff) >> 7;
                  puVar22 = puVar24 + (uVar14 | uVar14 << 1) * 2;
                  uVar15 = (uVar15 & 0xff) >> 7 ^ 1;
                  puVar12 = puVar25 + (uVar15 | uVar15 << 1) * 2;
                } while ((puVar12 != puVar6) && (puVar23 = puVar23 + -6, puVar22 != param_3));
              }
              else if (!(uVar15 == 0 || puVar24 == puVar5)) {
                puVar6 = puVar12;
                do {
                  uVar15 = *puVar8;
                  uVar11 = *puVar24;
                  uVar14 = (uint)(uVar11 < uVar15);
                  uVar16 = (uint)(uVar11 >= uVar15 && uVar11 != uVar15);
                  if (uVar11 == uVar15) {
                    uVar15 = puVar8[3];
                    uVar11 = puVar24[3];
                    uVar16 = 0;
                    uVar14 = (uint)(uVar11 < uVar15);
                    if (uVar11 >= uVar15 && uVar11 != uVar15) {
                      uVar16 = 1;
                    }
                  }
                  puVar23 = puVar24;
                  if (uVar16 - uVar14 < 0x80000000) {
                    puVar23 = puVar8;
                  }
                  puVar12 = puVar6 + 6;
                  uVar15 = puVar23[1];
                  uVar11 = puVar23[2];
                  uVar18 = puVar23[3];
                  uVar21 = puVar23[4];
                  uVar19 = puVar23[5];
                  *puVar6 = *puVar23;
                  puVar6[1] = uVar15;
                  puVar6[2] = uVar11;
                  puVar6[3] = uVar18;
                  puVar6[4] = uVar21;
                  puVar6[5] = uVar19;
                  uVar15 = uVar16 - uVar14 & 0xff;
                  uVar14 = uVar15 >> 7 ^ 1;
                  puVar8 = puVar8 + (uVar14 | uVar14 << 1) * 2;
                  if (puVar8 != puVar22) {
                    uVar15 = uVar15 >> 7;
                    puVar24 = puVar24 + (uVar15 | uVar15 << 1) * 2;
                  }
                  puVar6 = puVar12;
                } while (puVar8 != puVar22 && puVar24 != puVar5);
              }
              FUN_01bed4e2(puVar12,puVar8,(int)puVar22 - (int)puVar8);
            }
          }
          uVar15 = uVar20 * 2 | 1;
        }
        else {
          uVar15 = uVar20 * 2;
        }
        uVar14 = uVar10;
      } while (1 < uVar10);
      uVar14 = 1;
    }
LAB_016ee23c:
    abStack_67[uVar14 + 1] = (byte)uVar13;
    local_170[uVar14] = uVar15;
    if (param_2 <= uVar9) {
      if ((uVar15 & 1) == 0) {
        FUN_016eef44(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar14 = uVar14 + 1;
    uVar9 = uVar9 + (local_188 >> 1);
    uVar15 = local_188;
  } while( true );
}

