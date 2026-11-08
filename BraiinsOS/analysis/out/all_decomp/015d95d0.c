// FUN_015d95d0 @ 015d95d0 size=1900 calls_out=3 calls_in=2
// strings: 

void FUN_015d95d0(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 *puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint *puVar30;
  uint uVar31;
  uint *puVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  uint *puVar35;
  undefined4 uVar36;
  ulonglong uVar37;
  uint local_194;
  uint local_178;
  uint local_174 [66];
  byte abStack_6b [71];
  
  uVar37 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar37 & 0xffffffff);
  uVar5 = uVar37 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar37 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar5 = uVar37;
  }
  iVar4 = (int)(uVar5 >> 0x20);
  if (param_2 < 0x1001) {
    uVar6 = param_2 - (param_2 >> 1);
    if (0x3f < uVar6) {
      uVar6 = 0x40;
    }
  }
  else {
    uVar6 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar19 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar19) + (param_2 >> iVar19) >> 1;
  }
  uVar21 = 0;
  uVar27 = 0;
  uVar29 = 1;
  do {
    uVar17 = 0;
    local_194 = 1;
    if (uVar21 < param_2) {
      local_194 = param_2 - uVar21;
      puVar7 = (uint *)(param_1 + uVar21 * 0x18);
      if (local_194 < uVar6) {
LAB_015d96e4:
        if (param_5 != 0) {
          if (0x1f < local_194) {
            local_194 = 0x20;
          }
          FUN_015d9d3c(puVar7,local_194,param_3,param_4,0,0);
          uVar17 = local_194;
          goto LAB_015d9728;
        }
        if (uVar6 <= local_194) {
          local_194 = uVar6;
        }
        local_194 = local_194 << 1;
      }
      else {
        uVar17 = local_194;
        if (1 < local_194) {
          uVar8 = puVar7[10];
          if (uVar8 < puVar7[4]) {
LAB_015d9af8:
            uVar17 = 2;
            bVar3 = true;
            if (local_194 == 2) {
            }
            else {
              puVar15 = (uint *)(param_1 + 0x40 + uVar21 * 0x18);
              do {
                uVar9 = *puVar15;
                if ((uVar8 <= uVar9) &&
                   ((uVar8 < uVar9 ||
                    (puVar15[-9] < puVar15[-3] ||
                     puVar15[-3] - puVar15[-9] < (uint)(puVar15[-10] <= puVar15[-4])))))
                goto LAB_015d9b98;
                uVar17 = uVar17 + 1;
                puVar15 = puVar15 + 6;
                uVar8 = uVar9;
              } while (local_194 != uVar17);
              uVar17 = local_194;
LAB_015d9b98:
              bVar3 = true;
            }
          }
          else {
            uVar9 = puVar7[7];
            if ((uVar8 <= puVar7[4]) &&
               (uVar9 <= puVar7[1] && (uint)(*puVar7 <= puVar7[6]) <= uVar9 - puVar7[1]))
            goto LAB_015d9af8;
            uVar17 = 2;
            bVar3 = false;
            if (local_194 == 2) {
            }
            else {
              puVar15 = (uint *)(param_1 + 0x40 + uVar21 * 0x18);
              uVar14 = puVar7[6];
              do {
                puVar11 = puVar15 + -4;
                uVar23 = *puVar15;
                if (uVar23 < uVar8) {
LAB_015d9cd8:
                  bVar3 = false;
                  goto LAB_015d9b9c;
                }
                uVar24 = puVar15[-3];
                if ((uVar23 <= uVar8) &&
                   (uVar24 <= uVar9 && (uint)(uVar14 <= *puVar11) <= uVar24 - uVar9))
                goto LAB_015d9cd8;
                uVar17 = uVar17 + 1;
                puVar15 = puVar15 + 6;
                uVar14 = *puVar11;
                uVar8 = uVar23;
                uVar9 = uVar24;
              } while (local_194 != uVar17);
              bVar3 = false;
              uVar17 = local_194;
            }
          }
LAB_015d9b9c:
          if (uVar17 < uVar6) goto LAB_015d96e4;
          if (bVar3) {
            uVar8 = uVar17 >> 1;
            if (uVar8 == 0) {
              uVar17 = 1;
            }
            else {
              iVar19 = param_1;
              iVar22 = param_1 + -0xc + uVar17 * 0x18;
              do {
                uVar8 = uVar8 - 1;
                puVar16 = (undefined4 *)(iVar22 + uVar21 * 0x18);
                uVar25 = *puVar16;
                puVar26 = (undefined4 *)(iVar19 + uVar21 * 0x18);
                uVar12 = *puVar26;
                iVar19 = iVar19 + 0x18;
                uVar20 = puVar16[-1];
                uVar13 = puVar16[-2];
                *puVar26 = puVar16[-3];
                uVar33 = puVar26[1];
                uVar34 = puVar26[2];
                uVar36 = puVar26[3];
                puVar26[1] = uVar13;
                uVar13 = puVar16[1];
                puVar26[2] = uVar20;
                puVar16[-3] = uVar12;
                puVar26[3] = uVar25;
                uVar12 = puVar26[4];
                puVar16[-1] = uVar34;
                puVar26[4] = uVar13;
                uVar13 = puVar26[5];
                puVar16[-2] = uVar33;
                *puVar16 = uVar36;
                puVar16[1] = uVar12;
                puVar26[5] = puVar16[2];
                puVar16[2] = uVar13;
                iVar22 = iVar22 + -0x18;
              } while (uVar8 != 0);
            }
          }
        }
LAB_015d9728:
        local_194 = uVar17 << 1 | 1;
      }
      uVar8 = uVar21 - (uVar29 >> 1);
      uVar9 = uVar8 + uVar21;
      lVar1 = (uVar5 & 0xffffffff) * (ulonglong)uVar9;
      uVar14 = (local_194 >> 1) + uVar21 * 2;
      lVar2 = (ulonglong)uVar14 * (uVar5 & 0xffffffff);
      uVar17 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar8 = iVar4 * uVar14 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar8,uVar21) * (int)uVar5 +
              uVar9 * iVar4 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar8 != 0) {
        uVar17 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar27) {
      do {
        while( true ) {
          uVar8 = uVar27 - 1;
          if (abStack_6b[uVar27] < uVar17) goto LAB_015d9a9c;
          uVar23 = local_174[uVar8];
          uVar9 = uVar23 >> 1;
          uVar14 = uVar9 + (uVar29 >> 1);
          uVar27 = uVar8;
          if ((uVar14 <= param_4) && (((uVar23 | uVar29) & 1) == 0)) break;
          puVar7 = (uint *)(param_1 + (uVar21 - uVar14) * 0x18);
          if ((uVar23 & 1) == 0) {
            FUN_015d9d3c(puVar7,uVar9,param_3,param_4,LZCOUNT(uVar9 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar29 & 1) == 0) {
            FUN_015d9d3c(puVar7 + uVar9 * 6,uVar29 >> 1,param_3,param_4,
                         LZCOUNT(uVar29 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar24 = uVar29 >> 1;
          if (1 < uVar23 && 1 < uVar29) {
            uVar29 = uVar9;
            if (uVar24 < uVar9) {
              uVar29 = uVar24;
            }
            if (uVar29 <= param_4) {
              puVar15 = puVar7 + uVar9 * 6;
              puVar11 = puVar7;
              if (uVar24 < uVar9) {
                puVar11 = puVar15;
              }
              FUN_016dd1aa(param_3,puVar11,uVar29 * 0x18);
              puVar32 = param_3 + uVar29 * 6;
              puVar11 = param_3;
              if (uVar24 < uVar9) {
                puVar18 = (uint *)(param_1 + -0x18 + uVar21 * 0x18);
                puVar10 = puVar15;
                do {
                  puVar30 = puVar10 + -6;
                  puVar35 = puVar32 + -6;
                  uVar29 = 1;
                  puVar15 = puVar30;
                  if (puVar10[-2] <= puVar32[-2]) {
                    uVar29 = (uint)(puVar32[-2] <= puVar10[-2] &&
                                   (puVar32[-5] <= puVar10[-5] &&
                                   (uint)(*puVar30 <= *puVar35) <= puVar32[-5] - puVar10[-5]));
                    puVar15 = puVar35;
                    if (uVar29 != 0) {
                      puVar15 = puVar30;
                    }
                  }
                  uVar9 = puVar15[1];
                  uVar23 = puVar15[2];
                  uVar24 = puVar15[3];
                  uVar28 = puVar15[4];
                  uVar31 = puVar15[5];
                  *puVar18 = *puVar15;
                  puVar18[1] = uVar9;
                  puVar18[2] = uVar23;
                  puVar18[3] = uVar24;
                  puVar18[4] = uVar28;
                  puVar18[5] = uVar31;
                  puVar32 = puVar35 + (uVar29 | uVar29 << 1) * 2;
                  puVar10 = puVar30 + (uVar29 ^ 1 | (uVar29 ^ 1) << 1) * 2;
                } while ((puVar10 != puVar7) && (puVar18 = puVar18 + -6, puVar32 != param_3));
              }
              else {
                puVar10 = puVar7;
                do {
                  if (puVar15[4] < puVar11[4]) {
                    uVar29 = 0;
                    local_178 = 1;
                    puVar7 = puVar15;
                  }
                  else {
                    local_178 = (uint)(puVar15[4] <= puVar11[4] &&
                                      (puVar15[1] <= puVar11[1] &&
                                      (uint)(*puVar11 <= *puVar15) <= puVar15[1] - puVar11[1]));
                    uVar29 = local_178 ^ 1;
                    puVar7 = puVar11;
                    if (local_178 != 0) {
                      puVar7 = puVar15;
                    }
                  }
                  uVar9 = puVar7[1];
                  uVar23 = puVar7[2];
                  uVar24 = puVar7[3];
                  uVar28 = puVar7[4];
                  uVar31 = puVar7[5];
                  *puVar10 = *puVar7;
                  puVar10[1] = uVar9;
                  puVar10[2] = uVar23;
                  puVar10[3] = uVar24;
                  puVar10[4] = uVar28;
                  puVar10[5] = uVar31;
                  puVar10 = puVar10 + 6;
                  puVar11 = puVar11 + uVar29 * 6;
                  puVar7 = (uint *)(uVar29 * 3);
                  if (puVar11 != puVar32) {
                    puVar15 = puVar15 + local_178 * 6;
                    puVar7 = (uint *)(param_1 + uVar21 * 0x18);
                  }
                } while (puVar11 != puVar32 && puVar15 != puVar7);
              }
              FUN_016dd1aa(puVar10,puVar11,(int)puVar32 - (int)puVar11);
            }
          }
          uVar29 = uVar14 * 2 | 1;
          if (uVar8 < 2) goto LAB_015d9a94;
        }
        uVar29 = uVar14 * 2;
      } while (1 < uVar8);
LAB_015d9a94:
      uVar27 = 1;
    }
LAB_015d9a9c:
    abStack_6b[uVar27 + 1] = (byte)uVar17;
    local_174[uVar27] = uVar29;
    if (param_2 <= uVar21) {
      if ((uVar29 & 1) == 0) {
        FUN_015d9d3c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar27 = uVar27 + 1;
    uVar21 = uVar21 + (local_194 >> 1);
    uVar29 = local_194;
  } while( true );
}

