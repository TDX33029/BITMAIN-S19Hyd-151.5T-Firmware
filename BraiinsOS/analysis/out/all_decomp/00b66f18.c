// FUN_00b66f18 @ 00b66f18 size=1664 calls_out=3 calls_in=2
// strings: 

void FUN_00b66f18(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  bool bVar27;
  ulonglong uVar28;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar28 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar28 & 0xffffffff);
  uVar2 = uVar28 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar28 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar28;
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
  uVar23 = 0;
  uVar24 = 1;
  do {
    uVar9 = 0;
    uVar15 = 1;
    if (uVar18 < param_2) {
      uVar15 = param_2 - uVar18;
      puVar6 = (uint *)(param_1 + uVar18 * 0xc);
      if (uVar15 < uVar4) {
LAB_00b67020:
        if (param_5 == 0) {
          if (uVar4 <= uVar15) {
            uVar15 = uVar4;
          }
          uVar15 = uVar15 << 1;
        }
        else {
          if (0x1f < uVar15) {
            uVar15 = 0x20;
          }
          FUN_00b67598(puVar6,uVar15,param_3,param_4,0,0);
          uVar15 = uVar15 << 1 | 1;
        }
      }
      else {
        if (uVar15 < 2) {
          uVar14 = uVar15;
        }
        else {
          uVar9 = puVar6[3];
          uVar13 = puVar6[4];
          bVar27 = *puVar6 <= uVar9;
          if (uVar9 == *puVar6) {
            bVar27 = puVar6[1] <= uVar13;
          }
          if (bVar27) {
            uVar14 = 2;
            if (uVar15 != 2) {
              puVar16 = (uint *)(param_1 + 0x1c + uVar18 * 0xc);
              uVar14 = 2;
              do {
                uVar22 = *puVar16;
                uVar19 = puVar16[-1];
                bVar26 = uVar9 <= uVar19;
                if (uVar19 == uVar9) {
                  bVar26 = uVar13 <= uVar22;
                }
                if (!bVar26) goto LAB_00b6717c;
                uVar14 = uVar14 + 1;
                puVar16 = puVar16 + 3;
                uVar9 = uVar19;
                uVar13 = uVar22;
              } while (uVar15 != uVar14);
              goto LAB_00b67178;
            }
          }
          else if (uVar15 == 2) {
            uVar14 = 2;
            uVar15 = 1;
LAB_00b671a8:
            puVar12 = (undefined4 *)(param_1 + 8 + uVar18 * 0xc);
            puVar17 = (undefined4 *)(param_1 + -4 + uVar14 * 0xc + uVar18 * 0xc);
            do {
              uVar20 = puVar12[-2];
              uVar15 = uVar15 - 1;
              puVar12[-2] = puVar17[-2];
              puVar17[-2] = uVar20;
              uVar20 = puVar17[-1];
              puVar17[-1] = puVar12[-1];
              puVar12[-1] = uVar20;
              uVar20 = *puVar12;
              *puVar12 = *puVar17;
              *puVar17 = uVar20;
              puVar12 = puVar12 + 3;
              puVar17 = puVar17 + -3;
            } while (uVar15 != 0);
          }
          else {
            puVar16 = (uint *)(param_1 + 0x1c + uVar18 * 0xc);
            uVar14 = 2;
            do {
              uVar22 = *puVar16;
              uVar19 = puVar16[-1];
              bVar26 = uVar9 <= uVar19;
              if (uVar19 == uVar9) {
                bVar26 = uVar13 <= uVar22;
              }
              if (bVar26) goto LAB_00b6717c;
              uVar14 = uVar14 + 1;
              puVar16 = puVar16 + 3;
              uVar9 = uVar19;
              uVar13 = uVar22;
            } while (uVar15 != uVar14);
LAB_00b67178:
            uVar14 = uVar15;
LAB_00b6717c:
            if (uVar14 < uVar4) goto LAB_00b67020;
            if (!bVar27) {
              uVar15 = uVar14 >> 1;
              if (uVar15 != 0) goto LAB_00b671a8;
              uVar14 = 1;
            }
          }
        }
        uVar15 = uVar14 << 1 | 1;
      }
      uVar9 = uVar18 - (uVar24 >> 1);
      uVar13 = uVar18 + (uVar15 >> 1);
      uVar14 = uVar13 + uVar18;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar14;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar9,uVar18),uVar9 + uVar18);
      uVar13 = (uint)CARRY4(uVar13,uVar18) * (int)uVar2 +
               uVar14 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar9 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar13 != 0) {
        uVar9 = LZCOUNT(uVar13);
      }
    }
    if (1 < uVar23) {
      do {
        while( true ) {
          uVar13 = uVar23 - 1;
          if (abStack_67[uVar23] < uVar9) goto LAB_00b67530;
          uVar22 = local_170[uVar13];
          uVar14 = uVar22 >> 1;
          uVar19 = uVar14 + (uVar24 >> 1);
          uVar23 = uVar13;
          if ((param_4 < uVar19) || (((uVar22 | uVar24) & 1) != 0)) break;
          uVar24 = uVar19 * 2;
          if (uVar13 < 2) goto LAB_00b67524;
        }
        puVar6 = (uint *)(param_1 + (uVar18 - uVar19) * 0xc);
        if ((uVar22 & 1) == 0) {
          FUN_00b67598(puVar6,uVar14,param_3,param_4,LZCOUNT(uVar14 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar24 & 1) == 0) {
          FUN_00b67598(puVar6 + uVar14 * 3,uVar24 >> 1,param_3,param_4,
                       LZCOUNT(uVar24 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar25 = uVar24 >> 1;
        if (1 < uVar22 && 1 < uVar24) {
          uVar24 = uVar14;
          if (uVar25 < uVar14) {
            uVar24 = uVar25;
          }
          if (uVar24 <= param_4) {
            puVar16 = puVar6 + uVar14 * 3;
            puVar11 = puVar6;
            if (uVar25 < uVar14) {
              puVar11 = puVar16;
            }
            FUN_016dd1aa(param_3,puVar11,uVar24 * 0xc);
            puVar7 = param_3 + uVar24 * 3;
            puVar11 = param_3;
            if (uVar25 < uVar14) {
              puVar10 = (uint *)(param_1 + -0xc + uVar18 * 0xc);
              do {
                puVar21 = puVar16 + -3;
                puVar8 = puVar7 + -3;
                bVar27 = *puVar21 <= *puVar8;
                if (*puVar8 == *puVar21) {
                  bVar27 = puVar16[-2] <= puVar7[-2];
                }
                uVar24 = (uint)!bVar27;
                puVar16 = puVar8;
                if (uVar24 != 0) {
                  puVar16 = puVar21;
                }
                uVar22 = *puVar16;
                uVar14 = puVar16[1];
                puVar10[2] = puVar16[2];
                *puVar10 = uVar22;
                puVar7 = puVar8 + (uVar24 | uVar24 << 1);
                puVar10[1] = uVar14;
                puVar16 = puVar21 + (uVar24 ^ 1 | (uVar24 ^ 1) << 1);
              } while ((puVar16 != puVar6) && (puVar10 = puVar10 + -3, puVar7 != param_3));
              puVar6 = puVar16;
            }
            else {
              do {
                bVar27 = *puVar11 <= *puVar16;
                if (*puVar16 == *puVar11) {
                  bVar27 = puVar11[1] <= puVar16[1];
                }
                uVar24 = (uint)!bVar27;
                puVar10 = puVar11;
                if (uVar24 != 0) {
                  puVar10 = puVar16;
                }
                uVar22 = *puVar10;
                uVar14 = puVar10[1];
                puVar6[2] = puVar10[2];
                *puVar6 = uVar22;
                puVar6[1] = uVar14;
                puVar6 = puVar6 + 3;
                puVar11 = puVar11 + (uVar24 ^ 1 | (uVar24 ^ 1) << 1);
                if (puVar11 != puVar7) {
                  puVar16 = puVar16 + (uVar24 | uVar24 << 1);
                }
              } while (puVar11 != puVar7 && puVar16 != (uint *)(param_1 + uVar18 * 0xc));
            }
            FUN_016dd1aa(puVar6,puVar11,(int)puVar7 - (int)puVar11);
          }
        }
        uVar24 = uVar19 * 2 | 1;
      } while (1 < uVar13);
LAB_00b67524:
      uVar23 = 1;
    }
LAB_00b67530:
    abStack_67[uVar23 + 1] = (byte)uVar9;
    local_170[uVar23] = uVar24;
    if (param_2 <= uVar18) {
      if ((uVar24 & 1) == 0) {
        FUN_00b67598(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar23 = uVar23 + 1;
    uVar18 = uVar18 + (uVar15 >> 1);
    uVar24 = uVar15;
  } while( true );
}

