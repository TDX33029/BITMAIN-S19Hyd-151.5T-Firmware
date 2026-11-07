// FUN_016ecdc0 @ 016ecdc0 size=1548 calls_out=3 calls_in=2
// strings: 

void FUN_016ecdc0(int param_1,uint param_2,byte *param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined2 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  undefined2 *puVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  byte *pbVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  byte *pbVar29;
  bool bVar30;
  ulonglong uVar31;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar31 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar5 = (ulonglong)param_2 * (uVar31 & 0xffffffff);
  uVar8 = uVar31 + 1;
  if ((int)lVar5 == 0 &&
      (int)(uVar31 >> 0x20) * param_2 + (int)((ulonglong)lVar5 >> 0x20) == 0x40000000) {
    uVar8 = uVar31;
  }
  iVar7 = (int)(uVar8 >> 0x20);
  if (param_2 < 0x1001) {
    uVar9 = param_2 - (param_2 >> 1);
    if (0x3f < uVar9) {
      uVar9 = 0x40;
    }
  }
  else {
    uVar9 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar18 = (uVar9 & 1) + (uVar9 >> 1);
    uVar9 = (1 << iVar18) + (param_2 >> iVar18) >> 1;
  }
  uVar16 = 0;
  uVar22 = 0;
  uVar28 = 1;
  do {
    uVar23 = 0;
    uVar20 = 1;
    pbVar10 = (byte *)(param_1 + uVar16 * 2);
    if (uVar16 < param_2) {
      uVar23 = param_2 - uVar16;
      if (uVar23 < uVar9) {
LAB_016ecec4:
        if (param_5 != 0) {
          uVar26 = uVar23;
          if (0x1f < uVar23) {
            uVar26 = 0x20;
          }
          FUN_016ef768(pbVar10,uVar26,param_3,param_4,0,0);
LAB_016ecef4:
          goto LAB_016ed048;
        }
        if (uVar9 <= uVar23) {
          uVar23 = uVar9;
        }
        uVar20 = uVar23 << 1;
      }
      else {
        uVar26 = uVar23;
        if (1 < uVar23) {
          uVar11 = (uint)pbVar10[2];
          if (uVar11 == *pbVar10) {
            if (pbVar10[1] <= pbVar10[3]) goto LAB_016ecf28;
LAB_016ecf50:
            uVar26 = 2;
            bVar30 = true;
            if (uVar23 != 2) {
              uVar20 = 0;
              do {
                uVar12 = (uint)pbVar10[uVar20 * 2 + 4];
                if (uVar12 == uVar11) {
                  if (pbVar10[uVar20 * 2 + 3] <= pbVar10[uVar20 * 2 + 5]) {
                    uVar26 = uVar20 + 2;
                    goto LAB_016ed02c;
                  }
                }
                else if (uVar11 <= uVar12) goto LAB_016ed02c;
                uVar20 = uVar20 + 1;
                uVar26 = uVar26 + 1;
                uVar11 = uVar12;
              } while ((param_2 - 2) - uVar16 != uVar20);
              uVar26 = uVar23;
            }
          }
          else {
            if (uVar11 < *pbVar10) goto LAB_016ecf50;
LAB_016ecf28:
            if (uVar23 == 2) {
              uVar26 = 2;
LAB_016ed028:
              bVar30 = false;
            }
            else {
              uVar26 = 2;
              iVar18 = 0;
              do {
                uVar20 = (uint)pbVar10[iVar18 * 2 + 4];
                if (uVar20 == uVar11) {
                  if (pbVar10[iVar18 * 2 + 5] < pbVar10[iVar18 * 2 + 3]) {
                    uVar26 = iVar18 + 2;
                    goto LAB_016ed028;
                  }
                }
                else if (uVar20 < uVar11) goto LAB_016ed028;
                iVar18 = iVar18 + 1;
                uVar26 = uVar26 + 1;
                uVar11 = uVar20;
              } while ((param_2 - 2) - uVar16 != iVar18);
              bVar30 = false;
              uVar26 = uVar23;
            }
          }
LAB_016ed02c:
          if (uVar26 < uVar9) goto LAB_016ecec4;
          bVar30 = !bVar30;
          if (!bVar30) {
            uVar20 = uVar26 >> 1;
            bVar30 = uVar20 == 0;
          }
          if (bVar30) goto LAB_016ed048;
          iVar21 = 0;
          iVar19 = 0;
          iVar18 = uVar26 * 2 + uVar16 * 2;
          iVar27 = param_1 + -2 + iVar18;
          do {
            bVar3 = pbVar10[iVar19 * 2];
            uVar4 = *(undefined2 *)(iVar27 + iVar21 * 2);
            *(byte *)(param_1 + -1 + iVar18 + iVar21 * 2) = pbVar10[iVar21 * -2 + 1];
            iVar1 = iVar19 * 2;
            iVar19 = iVar19 + 1;
            *(byte *)(iVar27 + iVar21 * 2) = bVar3;
            iVar21 = iVar21 + -1;
            *(undefined2 *)(pbVar10 + iVar1) = uVar4;
          } while (-iVar21 != uVar20);
          goto LAB_016ecef4;
        }
LAB_016ed048:
        uVar20 = uVar26 << 1 | 1;
      }
      uVar26 = uVar16 - (uVar28 >> 1);
      uVar11 = uVar26 + uVar16;
      lVar5 = (uVar8 & 0xffffffff) * (ulonglong)uVar11;
      uVar12 = (uVar20 >> 1) + uVar16 * 2;
      lVar6 = (ulonglong)uVar12 * (uVar8 & 0xffffffff);
      uVar23 = LZCOUNT((uint)lVar6 ^ (uint)lVar5) + 0x20;
      uVar26 = iVar7 * uVar12 + (int)((ulonglong)lVar6 >> 0x20) ^
               (uint)CARRY4(uVar26,uVar16) * (int)uVar8 +
               uVar11 * iVar7 + (int)((ulonglong)lVar5 >> 0x20);
      if (uVar26 != 0) {
        uVar23 = LZCOUNT(uVar26);
      }
    }
    if (1 < uVar22) {
      do {
        uVar26 = uVar22 - 1;
        if (abStack_67[uVar22] < uVar23) goto LAB_016ed30c;
        uVar12 = local_170[uVar26];
        uVar22 = uVar12 >> 1;
        uVar11 = uVar22 + (uVar28 >> 1);
        if ((param_4 < uVar11) || (((uVar12 | uVar28) & 1) != 0)) {
          pbVar29 = (byte *)(param_1 + (uVar16 - uVar11) * 2);
          if ((uVar12 & 1) == 0) {
            FUN_016ef768(pbVar29,uVar22,param_3,param_4,LZCOUNT(uVar22 | 1) << 1 ^ 0x3e,0);
          }
          uVar2 = uVar28 >> 1;
          if ((uVar28 & 1) == 0) {
            FUN_016ef768(pbVar29 + uVar22 * 2,uVar2,param_3,param_4,LZCOUNT(uVar2 | 1) << 1 ^ 0x3e,0
                        );
          }
          if (1 < uVar12 && 1 < uVar28) {
            uVar28 = uVar22;
            if (uVar2 < uVar22) {
              uVar28 = uVar2;
            }
            if (uVar28 <= param_4) {
              pbVar24 = pbVar29 + uVar22 * 2;
              pbVar25 = pbVar29;
              if (uVar2 < uVar22) {
                pbVar25 = pbVar24;
              }
              FUN_01bed4e2(param_3,pbVar25,uVar28 << 1);
              pbVar13 = param_3 + uVar28 * 2;
              pbVar15 = param_3;
              if (uVar2 < uVar22) {
                puVar14 = (undefined2 *)(param_1 + -2 + uVar16 * 2);
                pbVar25 = pbVar24;
                do {
                  pbVar17 = pbVar25 + -2;
                  pbVar24 = pbVar13 + -2;
                  uVar28 = (uint)(*pbVar24 < *pbVar17);
                  if ((*pbVar24 == *pbVar17) && (uVar28 = 0, pbVar13[-1] < pbVar25[-1])) {
                    uVar28 = 1;
                  }
                  pbVar13 = pbVar24 + uVar28 * 2;
                  if (uVar28 != 0) {
                    pbVar24 = pbVar17;
                  }
                  *puVar14 = *(undefined2 *)pbVar24;
                  pbVar25 = pbVar17 + (uVar28 ^ 1) * 2;
                } while ((pbVar25 != pbVar29) && (puVar14 = puVar14 + -1, pbVar13 != param_3));
              }
              else if ((uVar28 != 0) && (pbVar29 = pbVar25, pbVar24 != pbVar10)) {
                do {
                  uVar28 = (uint)(*pbVar24 < *pbVar15);
                  if ((*pbVar24 == *pbVar15) && (uVar28 = 0, pbVar24[1] < pbVar15[1])) {
                    uVar28 = 1;
                  }
                  pbVar17 = pbVar15;
                  if (uVar28 != 0) {
                    pbVar17 = pbVar24;
                  }
                  pbVar25 = pbVar29 + 2;
                  *(undefined2 *)pbVar29 = *(undefined2 *)pbVar17;
                  pbVar15 = pbVar15 + (uVar28 ^ 1) * 2;
                  if (pbVar15 != pbVar13) {
                    pbVar24 = pbVar24 + uVar28 * 2;
                  }
                  pbVar29 = pbVar25;
                } while (pbVar15 != pbVar13 && pbVar24 != pbVar10);
              }
              FUN_01bed4e2(pbVar25,pbVar15,(int)pbVar13 - (int)pbVar15);
            }
          }
          uVar28 = uVar11 * 2 | 1;
        }
        else {
          uVar28 = uVar11 * 2;
        }
        uVar22 = uVar26;
      } while (1 < uVar26);
      uVar22 = 1;
    }
LAB_016ed30c:
    abStack_67[uVar22 + 1] = (byte)uVar23;
    local_170[uVar22] = uVar28;
    if (param_2 <= uVar16) {
      if ((uVar28 & 1) == 0) {
        FUN_016ef768(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar16 = uVar16 + (uVar20 >> 1);
    uVar22 = uVar22 + 1;
    uVar28 = uVar20;
  } while( true );
}

