// FUN_016ed4c0 @ 016ed4c0 size=1608 calls_out=3 calls_in=2
// strings: 

void FUN_016ed4c0(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  bool bVar26;
  ulonglong uVar27;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar27 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar27 & 0xffffffff);
  uVar5 = uVar27 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar27 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar27;
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
    iVar16 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar16) + (param_2 >> iVar16) >> 1;
  }
  uVar15 = 0;
  uVar23 = 0;
  uVar24 = 1;
  do {
    uVar12 = 0;
    uVar19 = 1;
    puVar7 = (uint *)(param_1 + uVar15 * 8);
    if (uVar15 < param_2) {
      uVar19 = param_2 - uVar15;
      if (uVar19 < uVar6) {
LAB_016ed5c0:
        if (param_5 != 0) {
          if (0x1f < uVar19) {
            uVar19 = 0x20;
          }
          FUN_016ee5e0(puVar7,uVar19,param_3,param_4,0,0);
          uVar12 = uVar19;
          goto LAB_016ed7b4;
        }
        if (uVar6 <= uVar19) {
          uVar19 = uVar6;
        }
        uVar19 = uVar19 << 1;
      }
      else {
        uVar12 = uVar19;
        if (1 < uVar19) {
          uVar8 = puVar7[2];
          if (uVar8 == *puVar7) {
            if (puVar7[1] <= puVar7[3]) goto LAB_016ed620;
LAB_016ed648:
            uVar12 = 2;
            bVar26 = true;
            if (uVar19 != 2) {
              iVar16 = 0;
              do {
                uVar9 = puVar7[iVar16 * 2 + 4];
                if (uVar9 == uVar8) {
                  if (puVar7[iVar16 * 2 + 3] <= puVar7[iVar16 * 2 + 5]) {
                    uVar12 = iVar16 + 2;
                    goto LAB_016ed71c;
                  }
                }
                else if (uVar8 <= uVar9) goto LAB_016ed71c;
                iVar16 = iVar16 + 1;
                uVar12 = uVar12 + 1;
                uVar8 = uVar9;
              } while ((param_2 - 2) - uVar15 != iVar16);
              uVar12 = uVar19;
            }
          }
          else {
            if (uVar8 < *puVar7) goto LAB_016ed648;
LAB_016ed620:
            if (uVar19 == 2) {
              uVar12 = 2;
LAB_016ed718:
              bVar26 = false;
            }
            else {
              uVar12 = 2;
              iVar16 = 0;
              do {
                uVar9 = puVar7[iVar16 * 2 + 4];
                if (uVar9 == uVar8) {
                  if (puVar7[iVar16 * 2 + 5] < puVar7[iVar16 * 2 + 3]) {
                    uVar12 = iVar16 + 2;
                    goto LAB_016ed718;
                  }
                }
                else if (uVar9 < uVar8) goto LAB_016ed718;
                iVar16 = iVar16 + 1;
                uVar12 = uVar12 + 1;
                uVar8 = uVar9;
              } while ((param_2 - 2) - uVar15 != iVar16);
              bVar26 = false;
              uVar12 = uVar19;
            }
          }
LAB_016ed71c:
          if (uVar12 < uVar6) goto LAB_016ed5c0;
          bVar26 = !bVar26;
          uVar19 = uVar6;
          if (!bVar26) {
            uVar19 = uVar12 >> 1;
            bVar26 = uVar19 == 0;
          }
          if (!bVar26) {
            iVar22 = 0;
            iVar20 = 0;
            iVar16 = uVar12 * 8 + uVar15 * 8;
            do {
              puVar25 = (uint *)(param_1 + -8 + iVar16 + iVar22 * 8);
              uVar9 = *puVar25;
              puVar18 = puVar7 + iVar20 * 2;
              uVar8 = *puVar18;
              iVar20 = iVar20 + 1;
              uVar10 = puVar25[1];
              *(uint *)(param_1 + -4 + iVar16 + iVar22 * 8) = puVar7[iVar22 * -2 + 1];
              iVar22 = iVar22 + -1;
              *puVar25 = uVar8;
              *puVar18 = uVar9;
              puVar18[1] = uVar10;
            } while (-iVar22 != uVar19);
          }
        }
LAB_016ed7b4:
        uVar19 = uVar12 << 1 | 1;
      }
      uVar8 = uVar15 - (uVar24 >> 1);
      uVar9 = uVar8 + uVar15;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar9;
      uVar10 = (uVar19 >> 1) + uVar15 * 2;
      lVar3 = (ulonglong)uVar10 * (uVar5 & 0xffffffff);
      uVar12 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar8 = iVar4 * uVar10 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar8,uVar15) * (int)uVar5 +
              uVar9 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar8 != 0) {
        uVar12 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar23) {
      do {
        uVar8 = uVar23 - 1;
        if (abStack_67[uVar23] < uVar12) goto LAB_016edaac;
        uVar10 = local_170[uVar8];
        uVar23 = uVar10 >> 1;
        uVar9 = uVar23 + (uVar24 >> 1);
        if ((param_4 < uVar9) || (((uVar10 | uVar24) & 1) != 0)) {
          puVar25 = (uint *)(param_1 + (uVar15 - uVar9) * 8);
          if ((uVar10 & 1) == 0) {
            FUN_016ee5e0(puVar25,uVar23,param_3,param_4,LZCOUNT(uVar23 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar24 >> 1;
          if ((uVar24 & 1) == 0) {
            FUN_016ee5e0(puVar25 + uVar23 * 2,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0
                        );
          }
          if (1 < uVar10 && 1 < uVar24) {
            uVar24 = uVar23;
            if (uVar1 < uVar23) {
              uVar24 = uVar1;
            }
            if (uVar24 <= param_4) {
              puVar18 = puVar25 + uVar23 * 2;
              puVar21 = puVar25;
              if (uVar1 < uVar23) {
                puVar21 = puVar18;
              }
              FUN_01bed4e2(param_3,puVar21,uVar24 << 3);
              puVar11 = param_3 + uVar24 * 2;
              puVar14 = param_3;
              if (uVar1 < uVar23) {
                puVar13 = (uint *)(param_1 + -8 + uVar15 * 8);
                puVar21 = puVar18;
                do {
                  puVar17 = puVar21 + -2;
                  puVar18 = puVar11 + -2;
                  uVar24 = (uint)(*puVar18 < *puVar17);
                  if ((*puVar18 == *puVar17) && (uVar24 = 0, puVar11[-1] < puVar21[-1])) {
                    uVar24 = 1;
                  }
                  puVar11 = puVar18 + uVar24 * 2;
                  if (uVar24 != 0) {
                    puVar18 = puVar17;
                  }
                  uVar23 = puVar18[1];
                  *puVar13 = *puVar18;
                  puVar13[1] = uVar23;
                  puVar21 = puVar17 + (uVar24 ^ 1) * 2;
                } while ((puVar21 != puVar25) && (puVar13 = puVar13 + -2, puVar11 != param_3));
              }
              else if ((uVar24 != 0) && (puVar18 != puVar7)) {
                do {
                  uVar24 = (uint)(*puVar18 < *puVar14);
                  if ((*puVar18 == *puVar14) && (uVar24 = 0, puVar18[1] < puVar14[1])) {
                    uVar24 = 1;
                  }
                  puVar25 = puVar14;
                  if (uVar24 != 0) {
                    puVar25 = puVar18;
                  }
                  uVar23 = puVar25[1];
                  *puVar21 = *puVar25;
                  puVar21[1] = uVar23;
                  puVar21 = puVar21 + 2;
                  puVar14 = puVar14 + (uVar24 ^ 1) * 2;
                  if (puVar14 != puVar11) {
                    puVar18 = puVar18 + uVar24 * 2;
                  }
                } while (puVar14 != puVar11 && puVar18 != puVar7);
              }
              FUN_01bed4e2(puVar21,puVar14,(int)puVar11 - (int)puVar14);
            }
          }
          uVar24 = uVar9 * 2 | 1;
        }
        else {
          uVar24 = uVar9 * 2;
        }
        uVar23 = uVar8;
      } while (1 < uVar8);
      uVar23 = 1;
    }
LAB_016edaac:
    abStack_67[uVar23 + 1] = (byte)uVar12;
    local_170[uVar23] = uVar24;
    if (param_2 <= uVar15) {
      if ((uVar24 & 1) == 0) {
        FUN_016ee5e0(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar15 = uVar15 + (uVar19 >> 1);
    uVar23 = uVar23 + 1;
    uVar24 = uVar19;
  } while( true );
}

