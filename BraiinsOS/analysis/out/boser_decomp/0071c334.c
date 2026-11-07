// FUN_0071c334 @ 0071c334 size=1352 calls_out=3 calls_in=2
// strings: 

void FUN_0071c334(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

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
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  ulonglong uVar26;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar26 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar26 & 0xffffffff);
  uVar5 = uVar26 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar26 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar26;
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
    iVar14 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar14) + (param_2 >> iVar14) >> 1;
  }
  uVar23 = 0;
  uVar17 = 0;
  uVar19 = 1;
  do {
    uVar11 = 0;
    uVar24 = 1;
    puVar7 = (uint *)(param_1 + uVar23 * 8);
    if (uVar23 < param_2) {
      uVar24 = param_2 - uVar23;
      if (uVar24 < uVar6) {
LAB_0071c428:
        if (param_5 == 0) {
          if (uVar6 <= uVar24) {
            uVar24 = uVar6;
          }
          uVar24 = uVar24 << 1;
        }
        else {
          if (0x1f < uVar24) {
            uVar24 = 0x20;
          }
          FUN_0072b7a8(puVar7,uVar24,param_3,param_4,0,0);
          uVar24 = uVar24 << 1 | 1;
        }
      }
      else {
        if (uVar24 < 2) {
          uVar8 = uVar24;
        }
        else {
          uVar11 = puVar7[2];
          if (uVar11 < *puVar7) {
            uVar8 = 2;
            if (uVar24 != 2) {
              uVar9 = uVar11;
              do {
                iVar14 = uVar8 * 2;
                if (uVar9 <= puVar7[iVar14]) goto LAB_0071c514;
                uVar8 = uVar8 + 1;
                uVar9 = puVar7[iVar14];
              } while (uVar24 != uVar8);
              goto LAB_0071c510;
            }
            uVar24 = 1;
LAB_0071c534:
            iVar14 = uVar23 * 8 + uVar8 * 8;
            iVar20 = 0;
            iVar18 = 0;
            do {
              puVar22 = (uint *)(param_1 + -8 + iVar14 + iVar20 * 8);
              uVar11 = *puVar22;
              puVar13 = puVar7 + iVar18 * 2;
              iVar18 = iVar18 + 1;
              *puVar22 = *puVar13;
              uVar9 = puVar22[1];
              *(uint *)(param_1 + -4 + iVar14 + iVar20 * 8) = puVar7[iVar20 * -2 + 1];
              iVar20 = iVar20 + -1;
              *puVar13 = uVar11;
              puVar13[1] = uVar9;
            } while (-iVar20 != uVar24);
          }
          else {
            uVar8 = 2;
            if (uVar24 != 2) {
              uVar9 = uVar11;
              do {
                iVar14 = uVar8 * 2;
                if (puVar7[iVar14] < uVar9) goto LAB_0071c514;
                uVar8 = uVar8 + 1;
                uVar9 = puVar7[iVar14];
              } while (uVar24 != uVar8);
LAB_0071c510:
              uVar8 = uVar24;
LAB_0071c514:
              if (uVar8 < uVar6) goto LAB_0071c428;
              if (uVar11 < *puVar7) {
                uVar24 = uVar8 >> 1;
                if (uVar24 != 0) goto LAB_0071c534;
                uVar8 = 1;
              }
            }
          }
        }
        uVar24 = uVar8 << 1 | 1;
      }
      uVar8 = uVar23 - (uVar19 >> 1);
      uVar9 = uVar8 + uVar23;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar9;
      uVar15 = (uVar24 >> 1) + uVar23 * 2;
      lVar3 = (ulonglong)uVar15 * (uVar5 & 0xffffffff);
      uVar11 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar8 = iVar4 * uVar15 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar8,uVar23) * (int)uVar5 +
              uVar9 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar8 != 0) {
        uVar11 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar17) {
      do {
        uVar8 = uVar17 - 1;
        if (abStack_67[uVar17] < uVar11) goto LAB_0071c818;
        uVar9 = local_170[uVar8];
        uVar17 = uVar9 >> 1;
        uVar15 = uVar17 + (uVar19 >> 1);
        if ((param_4 < uVar15) || (((uVar9 | uVar19) & 1) != 0)) {
          puVar22 = (uint *)(param_1 + (uVar23 - uVar15) * 8);
          if ((uVar9 & 1) == 0) {
            FUN_0072b7a8(puVar22,uVar17,param_3,param_4,LZCOUNT(uVar17 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar19 >> 1;
          if ((uVar19 & 1) == 0) {
            FUN_0072b7a8(puVar22 + uVar17 * 2,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0
                        );
          }
          if (1 < uVar9 && 1 < uVar19) {
            uVar19 = uVar17;
            if (uVar1 < uVar17) {
              uVar19 = uVar1;
            }
            if (uVar19 <= param_4) {
              puVar21 = puVar22 + uVar17 * 2;
              puVar13 = puVar22;
              if (uVar1 < uVar17) {
                puVar13 = puVar21;
              }
              FUN_01bed4e2(param_3,puVar13,uVar19 << 3);
              puVar10 = param_3 + uVar19 * 2;
              puVar13 = param_3;
              if (uVar1 < uVar17) {
                puVar12 = (uint *)(param_1 + -8 + uVar23 * 8);
                do {
                  puVar21 = puVar21 + -2;
                  puVar10 = puVar10 + -2;
                  bVar25 = *puVar10 < *puVar21;
                  puVar16 = puVar10;
                  if (bVar25) {
                    puVar16 = puVar21;
                  }
                  uVar19 = puVar16[1];
                  *puVar12 = *puVar16;
                  puVar12[1] = uVar19;
                  puVar10 = puVar10 + (uint)bVar25 * 2;
                  puVar21 = puVar21 + (uint)!bVar25 * 2;
                } while ((puVar21 != puVar22) && (puVar12 = puVar12 + -2, puVar10 != param_3));
                puVar22 = puVar21;
              }
              else {
                do {
                  bVar25 = *puVar13 <= *puVar21;
                  puVar12 = puVar13;
                  if (!bVar25) {
                    puVar12 = puVar21;
                  }
                  uVar19 = puVar12[1];
                  *puVar22 = *puVar12;
                  puVar22[1] = uVar19;
                  puVar13 = puVar13 + (uint)bVar25 * 2;
                  puVar22 = puVar22 + 2;
                } while ((puVar13 != puVar10) &&
                        (puVar21 = puVar21 + (uint)!bVar25 * 2, puVar21 != puVar7));
              }
              FUN_01bed4e2(puVar22,puVar13,(int)puVar10 - (int)puVar13);
            }
          }
          uVar19 = uVar15 * 2 | 1;
        }
        else {
          uVar19 = uVar15 * 2;
        }
        uVar17 = uVar8;
      } while (1 < uVar8);
      uVar17 = 1;
    }
LAB_0071c818:
    abStack_67[uVar17 + 1] = (byte)uVar11;
    local_170[uVar17] = uVar19;
    if (param_2 <= uVar23) {
      if ((uVar19 & 1) == 0) {
        FUN_0072b7a8(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar17 = uVar17 + 1;
    uVar23 = uVar23 + (uVar24 >> 1);
    uVar19 = uVar24;
  } while( true );
}

