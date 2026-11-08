// FUN_01993fd4 @ 01993fd4 size=1872 calls_out=3 calls_in=2
// strings: 

void FUN_01993fd4(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

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
  undefined4 uVar24;
  undefined4 *puVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  uint uVar30;
  uint *puVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  uint *puVar34;
  undefined4 uVar35;
  ulonglong uVar36;
  uint local_194;
  uint local_178;
  uint local_174 [66];
  byte abStack_6b [71];
  
  uVar36 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar36 & 0xffffffff);
  uVar5 = uVar36 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar36 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar5 = uVar36;
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
  uVar26 = 0;
  uVar28 = 1;
  do {
    uVar17 = 0;
    local_194 = 1;
    if (uVar21 < param_2) {
      local_194 = param_2 - uVar21;
      puVar7 = (uint *)(param_1 + uVar21 * 0x18);
      if (local_194 < uVar6) {
LAB_019940e8:
        if (param_5 != 0) {
          if (0x1f < local_194) {
            local_194 = 0x20;
          }
          FUN_01994724(puVar7,local_194,param_3,param_4,0,0);
          uVar17 = local_194;
          goto LAB_0199412c;
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
LAB_019944e0:
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
                goto LAB_01994580;
                uVar17 = uVar17 + 1;
                puVar15 = puVar15 + 6;
                uVar8 = uVar9;
              } while (local_194 != uVar17);
              uVar17 = local_194;
LAB_01994580:
              bVar3 = true;
            }
          }
          else {
            uVar9 = puVar7[7];
            if ((uVar8 <= puVar7[4]) &&
               (uVar9 <= puVar7[1] && (uint)(*puVar7 <= puVar7[6]) <= uVar9 - puVar7[1]))
            goto LAB_019944e0;
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
LAB_019946c0:
                  bVar3 = false;
                  goto LAB_01994584;
                }
                uVar27 = puVar15[-3];
                if ((uVar23 <= uVar8) &&
                   (uVar27 <= uVar9 && (uint)(uVar14 <= *puVar11) <= uVar27 - uVar9))
                goto LAB_019946c0;
                uVar17 = uVar17 + 1;
                puVar15 = puVar15 + 6;
                uVar14 = *puVar11;
                uVar8 = uVar23;
                uVar9 = uVar27;
              } while (local_194 != uVar17);
              bVar3 = false;
              uVar17 = local_194;
            }
          }
LAB_01994584:
          if (uVar17 < uVar6) goto LAB_019940e8;
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
                uVar24 = *puVar16;
                puVar25 = (undefined4 *)(iVar19 + uVar21 * 0x18);
                uVar12 = *puVar25;
                iVar19 = iVar19 + 0x18;
                uVar20 = puVar16[-1];
                uVar13 = puVar16[-2];
                *puVar25 = puVar16[-3];
                uVar32 = puVar25[1];
                uVar33 = puVar25[2];
                uVar35 = puVar25[3];
                puVar25[1] = uVar13;
                uVar13 = puVar16[1];
                puVar25[2] = uVar20;
                puVar16[-3] = uVar12;
                puVar25[3] = uVar24;
                uVar12 = puVar25[4];
                puVar16[-1] = uVar33;
                puVar25[4] = uVar13;
                uVar13 = puVar25[5];
                puVar16[-2] = uVar32;
                *puVar16 = uVar35;
                puVar16[1] = uVar12;
                puVar25[5] = puVar16[2];
                puVar16[2] = uVar13;
                iVar22 = iVar22 + -0x18;
              } while (uVar8 != 0);
            }
          }
        }
LAB_0199412c:
        local_194 = uVar17 << 1 | 1;
      }
      uVar8 = uVar21 - (uVar28 >> 1);
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
    if (1 < uVar26) {
      do {
        uVar8 = uVar26 - 1;
        if (abStack_6b[uVar26] < uVar17) goto LAB_01994484;
        uVar14 = local_174[uVar8];
        uVar26 = uVar14 >> 1;
        uVar9 = uVar26 + (uVar28 >> 1);
        if ((param_4 < uVar9) || (((uVar14 | uVar28) & 1) != 0)) {
          puVar7 = (uint *)(param_1 + (uVar21 - uVar9) * 0x18);
          if ((uVar14 & 1) == 0) {
            FUN_01994724(puVar7,uVar26,param_3,param_4,LZCOUNT(uVar26 | 1) << 1 ^ 0x3e,0);
          }
          uVar23 = uVar28 >> 1;
          if ((uVar28 & 1) == 0) {
            FUN_01994724(puVar7 + uVar26 * 6,uVar23,param_3,param_4,LZCOUNT(uVar23 | 1) << 1 ^ 0x3e,
                         0);
          }
          if (1 < uVar14 && 1 < uVar28) {
            uVar28 = uVar26;
            if (uVar23 < uVar26) {
              uVar28 = uVar23;
            }
            if (uVar28 <= param_4) {
              puVar15 = puVar7 + uVar26 * 6;
              puVar11 = puVar7;
              if (uVar23 < uVar26) {
                puVar11 = puVar15;
              }
              FUN_01bed4e2(param_3,puVar11,uVar28 * 0x18);
              puVar31 = param_3 + uVar28 * 6;
              puVar11 = param_3;
              if (uVar23 < uVar26) {
                puVar18 = (uint *)(param_1 + -0x18 + uVar21 * 0x18);
                puVar10 = puVar15;
                do {
                  puVar29 = puVar10 + -6;
                  puVar34 = puVar31 + -6;
                  uVar28 = 1;
                  puVar15 = puVar29;
                  if (puVar10[-2] <= puVar31[-2]) {
                    uVar28 = (uint)(puVar31[-2] <= puVar10[-2] &&
                                   (puVar31[-5] <= puVar10[-5] &&
                                   (uint)(*puVar29 <= *puVar34) <= puVar31[-5] - puVar10[-5]));
                    puVar15 = puVar34;
                    if (uVar28 != 0) {
                      puVar15 = puVar29;
                    }
                  }
                  uVar26 = puVar15[1];
                  uVar14 = puVar15[2];
                  uVar23 = puVar15[3];
                  uVar27 = puVar15[4];
                  uVar30 = puVar15[5];
                  *puVar18 = *puVar15;
                  puVar18[1] = uVar26;
                  puVar18[2] = uVar14;
                  puVar18[3] = uVar23;
                  puVar18[4] = uVar27;
                  puVar18[5] = uVar30;
                  puVar31 = puVar34 + (uVar28 | uVar28 << 1) * 2;
                  puVar10 = puVar29 + (uVar28 ^ 1 | (uVar28 ^ 1) << 1) * 2;
                } while ((puVar10 != puVar7) && (puVar18 = puVar18 + -6, puVar31 != param_3));
              }
              else {
                puVar10 = puVar7;
                do {
                  if (puVar15[4] < puVar11[4]) {
                    uVar28 = 0;
                    local_178 = 1;
                    puVar7 = puVar15;
                  }
                  else {
                    local_178 = (uint)(puVar15[4] <= puVar11[4] &&
                                      (puVar15[1] <= puVar11[1] &&
                                      (uint)(*puVar11 <= *puVar15) <= puVar15[1] - puVar11[1]));
                    uVar28 = local_178 ^ 1;
                    puVar7 = puVar11;
                    if (local_178 != 0) {
                      puVar7 = puVar15;
                    }
                  }
                  uVar26 = puVar7[1];
                  uVar14 = puVar7[2];
                  uVar23 = puVar7[3];
                  uVar27 = puVar7[4];
                  uVar30 = puVar7[5];
                  *puVar10 = *puVar7;
                  puVar10[1] = uVar26;
                  puVar10[2] = uVar14;
                  puVar10[3] = uVar23;
                  puVar10[4] = uVar27;
                  puVar10[5] = uVar30;
                  puVar10 = puVar10 + 6;
                  puVar11 = puVar11 + uVar28 * 6;
                  puVar7 = (uint *)(uVar28 * 3);
                  if (puVar11 != puVar31) {
                    puVar15 = puVar15 + local_178 * 6;
                    puVar7 = (uint *)(param_1 + uVar21 * 0x18);
                  }
                } while (puVar11 != puVar31 && puVar15 != puVar7);
              }
              FUN_01bed4e2(puVar10,puVar11,(int)puVar31 - (int)puVar11);
            }
          }
          uVar28 = uVar9 * 2 | 1;
        }
        else {
          uVar28 = uVar9 * 2;
        }
        uVar26 = uVar8;
      } while (1 < uVar8);
      uVar26 = 1;
    }
LAB_01994484:
    abStack_6b[uVar26 + 1] = (byte)uVar17;
    local_174[uVar26] = uVar28;
    if (param_2 <= uVar21) {
      if ((uVar28 & 1) == 0) {
        FUN_01994724(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar26 = uVar26 + 1;
    uVar21 = uVar21 + (local_194 >> 1);
    uVar28 = local_194;
  } while( true );
}

