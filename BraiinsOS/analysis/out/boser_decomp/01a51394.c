// FUN_01a51394 @ 01a51394 size=1420 calls_out=3 calls_in=2
// strings: 

void FUN_01a51394(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  uint uVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  bool bVar30;
  ulonglong uVar31;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar31 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar31 & 0xffffffff);
  uVar5 = uVar31 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar31 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar31;
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
    iVar7 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar7) + (param_2 >> iVar7) >> 1;
  }
  uVar27 = 0;
  uVar23 = 0;
  uVar17 = 1;
  do {
    uVar12 = 0;
    uVar9 = 1;
    if (uVar27 < param_2) {
      uVar9 = param_2 - uVar27;
      iVar7 = param_1 + uVar27 * 0x18;
      if (uVar9 < uVar6) {
LAB_01a5148c:
        if (param_5 == 0) {
          if (uVar6 <= uVar9) {
            uVar9 = uVar6;
          }
          uVar9 = uVar9 << 1;
        }
        else {
          if (0x1f < uVar9) {
            uVar9 = 0x20;
          }
          FUN_01a50c24(iVar7,uVar9,param_3,param_4,0,0);
          uVar9 = uVar9 << 1 | 1;
        }
      }
      else {
        if (uVar9 < 2) {
          uVar8 = uVar9;
        }
        else {
          uVar12 = *(uint *)(iVar7 + 0x28);
          if (uVar12 < *(uint *)(iVar7 + 0x10)) {
            if (uVar9 != 2) {
              uVar8 = 2;
              uVar14 = uVar12;
              puVar16 = (uint *)(param_1 + 0x40 + uVar27 * 0x18);
              do {
                if (uVar14 <= *puVar16) goto LAB_01a5157c;
                uVar8 = uVar8 + 1;
                uVar14 = *puVar16;
                puVar16 = puVar16 + 6;
              } while (uVar9 != uVar8);
              goto LAB_01a51578;
            }
            uVar8 = 2;
            uVar9 = 1;
LAB_01a5159c:
            uVar12 = 0;
            iVar13 = param_1 + -0x18 + uVar27 * 0x18 + uVar8 * 0x18;
            do {
              iVar19 = 0;
              do {
                uVar10 = *(undefined4 *)(iVar7 + iVar19 * -4);
                *(undefined4 *)(iVar7 + iVar19 * -4) = *(undefined4 *)(iVar13 + iVar19 * -4);
                *(undefined4 *)(iVar13 + iVar19 * -4) = uVar10;
                bVar30 = iVar19 != -5;
                iVar19 = iVar19 + -1;
              } while (bVar30);
              uVar12 = uVar12 + 1;
              iVar7 = iVar7 + 0x18;
              iVar13 = iVar13 + -0x18;
            } while (uVar12 != uVar9);
          }
          else {
            uVar8 = 2;
            if (uVar9 != 2) {
              uVar8 = 2;
              puVar16 = (uint *)(param_1 + 0x40 + uVar27 * 0x18);
              uVar14 = uVar12;
              do {
                uVar21 = *puVar16;
                if (uVar21 < uVar14) goto LAB_01a5157c;
                uVar8 = uVar8 + 1;
                puVar16 = puVar16 + 6;
                uVar14 = uVar21;
              } while (uVar9 != uVar8);
LAB_01a51578:
              uVar8 = uVar9;
LAB_01a5157c:
              if (uVar8 < uVar6) goto LAB_01a5148c;
              if (uVar12 < *(uint *)(iVar7 + 0x10)) {
                uVar9 = uVar8 >> 1;
                if (uVar9 != 0) goto LAB_01a5159c;
                uVar8 = 1;
              }
            }
          }
        }
        uVar9 = uVar8 << 1 | 1;
      }
      uVar12 = uVar27 - (uVar17 >> 1);
      uVar8 = uVar12 + uVar27;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar8;
      uVar14 = (uVar9 >> 1) + uVar27 * 2;
      lVar3 = (ulonglong)uVar14 * (uVar5 & 0xffffffff);
      uVar8 = iVar4 * uVar14 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar12,uVar27) * (int)uVar5 +
              uVar8 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      uVar12 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      if (uVar8 != 0) {
        uVar12 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar23) {
      do {
        uVar8 = uVar23 - 1;
        if (abStack_67[uVar23] < uVar12) goto LAB_01a518b8;
        uVar21 = local_170[uVar8];
        uVar23 = uVar21 >> 1;
        uVar14 = uVar23 + (uVar17 >> 1);
        if ((param_4 < uVar14) || (((uVar21 | uVar17) & 1) != 0)) {
          puVar25 = (undefined4 *)(param_1 + (uVar27 - uVar14) * 0x18);
          if ((uVar21 & 1) == 0) {
            FUN_01a50c24(puVar25,uVar23,param_3,param_4,LZCOUNT(uVar23 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar17 >> 1;
          if ((uVar17 & 1) == 0) {
            FUN_01a50c24(puVar25 + uVar23 * 6,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0
                        );
          }
          if (1 < uVar21 && 1 < uVar17) {
            uVar17 = uVar23;
            if (uVar1 < uVar23) {
              uVar17 = uVar1;
            }
            if (uVar17 <= param_4) {
              puVar15 = puVar25 + uVar23 * 6;
              puVar11 = puVar25;
              if (uVar1 < uVar23) {
                puVar11 = puVar15;
              }
              FUN_01bed4e2(param_3,puVar11,uVar17 * 0x18);
              puVar29 = param_3 + uVar17 * 6;
              puVar11 = param_3;
              if (uVar1 < uVar23) {
                puVar28 = (undefined4 *)(param_1 + -0x18 + uVar27 * 0x18);
                puVar26 = puVar15;
                do {
                  bVar30 = (uint)puVar29[-2] < (uint)puVar26[-2];
                  puVar15 = puVar29 + -6;
                  if (bVar30) {
                    puVar15 = puVar26 + -6;
                  }
                  uVar10 = puVar15[1];
                  uVar18 = puVar15[2];
                  uVar20 = puVar15[3];
                  uVar22 = puVar15[4];
                  uVar24 = puVar15[5];
                  *puVar28 = *puVar15;
                  puVar28[1] = uVar10;
                  puVar28[2] = uVar18;
                  puVar28[3] = uVar20;
                  puVar28[4] = uVar22;
                  puVar28[5] = uVar24;
                  puVar26 = puVar26 + -6 + ((uint)!bVar30 | (uint)!bVar30 << 1) * 2;
                  puVar29 = puVar29 + -6 + ((uint)bVar30 | (uint)bVar30 << 1) * 2;
                } while ((puVar26 != puVar25) && (puVar28 = puVar28 + -6, puVar29 != param_3));
              }
              else {
                do {
                  bVar30 = (uint)puVar11[4] <= (uint)puVar15[4];
                  puVar28 = puVar11;
                  if (!bVar30) {
                    puVar28 = puVar15;
                  }
                  puVar26 = puVar25 + 6;
                  uVar10 = puVar28[1];
                  uVar18 = puVar28[2];
                  uVar20 = puVar28[3];
                  uVar22 = puVar28[4];
                  uVar24 = puVar28[5];
                  *puVar25 = *puVar28;
                  puVar25[1] = uVar10;
                  puVar25[2] = uVar18;
                  puVar25[3] = uVar20;
                  puVar25[4] = uVar22;
                  puVar25[5] = uVar24;
                  puVar11 = puVar11 + ((uint)bVar30 | (uint)bVar30 << 1) * 2;
                  if (puVar11 != puVar29) {
                    puVar15 = puVar15 + ((uint)!bVar30 | (uint)!bVar30 << 1) * 2;
                  }
                  puVar25 = puVar26;
                } while (puVar11 != puVar29 && puVar15 != (undefined4 *)(param_1 + uVar27 * 0x18));
              }
              FUN_01bed4e2(puVar26,puVar11,(int)puVar29 - (int)puVar11);
            }
          }
          uVar17 = uVar14 * 2 | 1;
        }
        else {
          uVar17 = uVar14 * 2;
        }
        uVar23 = uVar8;
      } while (1 < uVar8);
      uVar23 = 1;
    }
LAB_01a518b8:
    abStack_67[uVar23 + 1] = (byte)uVar12;
    local_170[uVar23] = uVar17;
    if (param_2 <= uVar27) {
      if ((uVar17 & 1) == 0) {
        FUN_01a50c24(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar27 = uVar27 + (uVar9 >> 1);
    uVar23 = uVar23 + 1;
    uVar17 = uVar9;
  } while( true );
}

