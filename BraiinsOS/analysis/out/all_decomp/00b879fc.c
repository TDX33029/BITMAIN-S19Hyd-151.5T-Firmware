// FUN_00b879fc @ 00b879fc size=1556 calls_out=3 calls_in=2
// strings: 

void FUN_00b879fc(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  ulonglong uVar29;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar29 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar29 & 0xffffffff);
  uVar4 = uVar29 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar29 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar29;
  }
  iVar3 = (int)(uVar4 >> 0x20);
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar14 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar14) + (param_2 >> iVar14) >> 1;
  }
  uVar19 = 0;
  uVar16 = 0;
  uVar23 = 1;
LAB_00b87ac8:
  uVar11 = 0;
  uVar26 = 1;
  puVar6 = (uint *)(param_1 + uVar19 * 8);
  if (uVar19 < param_2) {
    uVar26 = param_2 - uVar19;
    if (uVar5 <= uVar26) {
      if (1 < uVar26) {
        uVar7 = puVar6[2];
        uVar11 = puVar6[3];
        bVar28 = *puVar6 <= uVar7;
        if (uVar7 == *puVar6) {
          bVar28 = puVar6[1] <= uVar11;
        }
        if (bVar28) {
          uVar8 = 2;
          if (uVar26 != 2) {
            iVar14 = 0;
            do {
              iVar17 = iVar14 * 2;
              uVar8 = puVar6[iVar14 * 2 + 4];
              bVar27 = uVar7 <= uVar8;
              if (uVar8 == uVar7) {
                bVar27 = uVar11 <= puVar6[iVar17 + 5];
              }
              if (!bVar27) goto LAB_00b87c6c;
              iVar14 = iVar14 + 1;
              uVar11 = puVar6[iVar17 + 5];
              uVar7 = uVar8;
            } while ((param_2 - 2) - uVar19 != iVar14);
            goto LAB_00b87c64;
          }
          goto LAB_00b87d0c;
        }
        if (uVar26 != 2) {
          iVar14 = 0;
          do {
            iVar17 = iVar14 * 2;
            uVar8 = puVar6[iVar14 * 2 + 4];
            bVar27 = uVar7 <= uVar8;
            if (uVar8 == uVar7) {
              bVar27 = uVar11 <= puVar6[iVar17 + 5];
            }
            if (bVar27) goto LAB_00b87c6c;
            iVar14 = iVar14 + 1;
            uVar11 = puVar6[iVar17 + 5];
            uVar7 = uVar8;
          } while ((param_2 - 2) - uVar19 != iVar14);
LAB_00b87c64:
          uVar8 = uVar26;
          goto LAB_00b87c70;
        }
        uVar8 = 2;
        uVar26 = 1;
        goto LAB_00b87c98;
      }
      uVar8 = uVar26;
      goto LAB_00b87d0c;
    }
    goto LAB_00b87af8;
  }
  goto LAB_00b87d60;
LAB_00b87c6c:
  uVar8 = iVar14 + 2;
LAB_00b87c70:
  if (uVar8 < uVar5) {
LAB_00b87af8:
    if (param_5 == 0) {
      if (uVar5 <= uVar26) {
        uVar26 = uVar5;
      }
      uVar26 = uVar26 << 1;
    }
    else {
      if (0x1f < uVar26) {
        uVar26 = 0x20;
      }
      FUN_00b88010(puVar6,uVar26,param_3,param_4,0,0);
      uVar26 = uVar26 << 1 | 1;
    }
  }
  else {
    if (!bVar28) {
      uVar26 = uVar8 >> 1;
      if (uVar26 == 0) {
        uVar8 = 1;
      }
      else {
LAB_00b87c98:
        iVar14 = uVar19 * 8 + uVar8 * 8;
        iVar20 = 0;
        iVar17 = 0;
        do {
          puVar24 = (uint *)(param_1 + -8 + iVar14 + iVar20 * 8);
          uVar11 = *puVar24;
          puVar12 = puVar6 + iVar17 * 2;
          iVar17 = iVar17 + 1;
          *puVar24 = *puVar12;
          uVar7 = puVar24[1];
          *(uint *)(param_1 + -4 + iVar14 + iVar20 * 8) = puVar6[iVar20 * -2 + 1];
          iVar20 = iVar20 + -1;
          *puVar12 = uVar11;
          puVar12[1] = uVar7;
        } while (-iVar20 != uVar26);
      }
    }
LAB_00b87d0c:
    uVar26 = uVar8 << 1 | 1;
  }
  uVar7 = uVar19 - (uVar23 >> 1);
  uVar8 = uVar7 + uVar19;
  lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar8;
  uVar15 = (uVar26 >> 1) + uVar19 * 2;
  lVar2 = (ulonglong)uVar15 * (uVar4 & 0xffffffff);
  uVar11 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
  uVar7 = iVar3 * uVar15 + (int)((ulonglong)lVar2 >> 0x20) ^
          (uint)CARRY4(uVar7,uVar19) * (int)uVar4 + uVar8 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
  if (uVar7 != 0) {
    uVar11 = LZCOUNT(uVar7);
  }
LAB_00b87d60:
  if (1 < uVar16) {
    do {
      while( true ) {
        uVar7 = uVar16 - 1;
        if (abStack_67[uVar16] < uVar11) goto LAB_00b87fac;
        uVar15 = local_170[uVar7];
        uVar8 = uVar15 >> 1;
        uVar25 = uVar8 + (uVar23 >> 1);
        uVar16 = uVar7;
        if ((uVar25 <= param_4) && (((uVar15 | uVar23) & 1) == 0)) break;
        puVar24 = (uint *)(param_1 + (uVar19 - uVar25) * 8);
        if ((uVar15 & 1) == 0) {
          FUN_00b88010(puVar24,uVar8,param_3,param_4,LZCOUNT(uVar8 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar23 & 1) == 0) {
          FUN_00b88010(puVar24 + uVar8 * 2,uVar23 >> 1,param_3,param_4,
                       LZCOUNT(uVar23 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar18 = uVar23 >> 1;
        if (1 < uVar15 && 1 < uVar23) {
          uVar23 = uVar8;
          if (uVar18 < uVar8) {
            uVar23 = uVar18;
          }
          if (uVar23 <= param_4) {
            puVar22 = puVar24 + uVar8 * 2;
            puVar12 = puVar24;
            if (uVar18 < uVar8) {
              puVar12 = puVar22;
            }
            FUN_016dd1aa(param_3,puVar12,uVar23 << 3);
            puVar10 = param_3 + uVar23 * 2;
            puVar12 = param_3;
            if (uVar18 < uVar8) {
              puVar13 = (uint *)(param_1 + -8 + uVar19 * 8);
              do {
                puVar21 = puVar22 + -2;
                puVar9 = puVar10 + -2;
                bVar28 = *puVar21 <= *puVar9;
                if (*puVar9 == *puVar21) {
                  bVar28 = puVar22[-1] <= puVar10[-1];
                }
                uVar23 = (uint)!bVar28;
                puVar10 = puVar9 + uVar23 * 2;
                if (uVar23 != 0) {
                  puVar9 = puVar21;
                }
                uVar8 = puVar9[1];
                *puVar13 = *puVar9;
                puVar13[1] = uVar8;
                puVar22 = puVar21 + (uVar23 ^ 1) * 2;
              } while ((puVar22 != puVar24) && (puVar13 = puVar13 + -2, puVar10 != param_3));
              puVar24 = puVar22;
            }
            else {
              do {
                bVar28 = *puVar12 <= *puVar22;
                if (*puVar22 == *puVar12) {
                  bVar28 = puVar12[1] <= puVar22[1];
                }
                uVar23 = (uint)!bVar28;
                puVar13 = puVar12;
                if (uVar23 != 0) {
                  puVar13 = puVar22;
                }
                uVar8 = puVar13[1];
                *puVar24 = *puVar13;
                puVar24[1] = uVar8;
                puVar24 = puVar24 + 2;
                puVar12 = puVar12 + (uVar23 ^ 1) * 2;
                if (puVar12 == puVar10) break;
                puVar22 = puVar22 + uVar23 * 2;
              } while (puVar22 != puVar6);
            }
            FUN_016dd1aa(puVar24,puVar12,(int)puVar10 - (int)puVar12);
          }
        }
        uVar23 = uVar25 * 2 | 1;
        if (uVar7 < 2) goto LAB_00b87fa4;
      }
      uVar23 = uVar25 * 2;
    } while (1 < uVar7);
LAB_00b87fa4:
    uVar16 = 1;
  }
LAB_00b87fac:
  abStack_67[uVar16 + 1] = (byte)uVar11;
  local_170[uVar16] = uVar23;
  if (param_2 <= uVar19) {
    if ((uVar23 & 1) == 0) {
      FUN_00b88010(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
    }
    return;
  }
  uVar16 = uVar16 + 1;
  uVar19 = uVar19 + (uVar26 >> 1);
  uVar23 = uVar26;
  goto LAB_00b87ac8;
}

