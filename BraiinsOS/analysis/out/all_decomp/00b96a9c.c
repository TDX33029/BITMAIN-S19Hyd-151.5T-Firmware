// FUN_00b96a9c @ 00b96a9c size=1640 calls_out=3 calls_in=2
// strings: 

void FUN_00b96a9c(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  bool bVar29;
  bool bVar30;
  ulonglong uVar31;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar31 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar31 & 0xffffffff);
  uVar4 = uVar31 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar31 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar31;
  }
  iVar3 = (int)(uVar4 >> 0x20);
  if (param_2 < 0x1001) {
    uVar6 = param_2 - (param_2 >> 1);
    if (0x3f < uVar6) {
      uVar6 = 0x40;
    }
  }
  else {
    uVar6 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar13 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar13) + (param_2 >> iVar13) >> 1;
  }
  uVar20 = 0;
  uVar19 = 0;
  uVar21 = 1;
LAB_00b96b74:
  uVar12 = 0;
  uVar27 = 1;
  puVar7 = (uint *)(param_1 + uVar20 * 0x10);
  if (uVar20 < param_2) {
    uVar27 = param_2 - uVar20;
    if (uVar6 <= uVar27) {
      if (1 < uVar27) {
        uVar12 = puVar7[4];
        uVar8 = puVar7[5];
        bVar30 = *puVar7 <= uVar12;
        if (uVar12 == *puVar7) {
          bVar30 = puVar7[1] <= uVar8;
        }
        if (bVar30) {
          uVar9 = 2;
          if (uVar27 != 2) {
            iVar13 = 0;
            do {
              uVar9 = puVar7[iVar13 * 4 + 8];
              iVar5 = iVar13 * 4;
              bVar29 = uVar12 <= uVar9;
              if (uVar9 == uVar12) {
                bVar29 = uVar8 <= puVar7[iVar5 + 9];
              }
              if (!bVar29) goto LAB_00b96d14;
              iVar13 = iVar13 + 1;
              uVar12 = uVar9;
              uVar8 = puVar7[iVar5 + 9];
            } while ((param_2 - 2) - uVar20 != iVar13);
            goto LAB_00b96d0c;
          }
          goto LAB_00b96db0;
        }
        if (uVar27 != 2) {
          iVar13 = 0;
          do {
            uVar9 = puVar7[iVar13 * 4 + 8];
            iVar5 = iVar13 * 4;
            bVar29 = uVar12 <= uVar9;
            if (uVar9 == uVar12) {
              bVar29 = uVar8 <= puVar7[iVar5 + 9];
            }
            if (bVar29) goto LAB_00b96d14;
            iVar13 = iVar13 + 1;
            uVar12 = uVar9;
            uVar8 = puVar7[iVar5 + 9];
          } while ((param_2 - 2) - uVar20 != iVar13);
LAB_00b96d0c:
          uVar9 = uVar27;
          goto LAB_00b96d18;
        }
        uVar9 = 2;
        uVar27 = 1;
        goto LAB_00b96d40;
      }
      uVar9 = uVar27;
      goto LAB_00b96db0;
    }
    goto LAB_00b96ba0;
  }
  goto LAB_00b96e08;
LAB_00b96d14:
  uVar9 = iVar13 + 2;
LAB_00b96d18:
  if (uVar9 < uVar6) {
LAB_00b96ba0:
    if (param_5 == 0) {
      if (uVar6 <= uVar27) {
        uVar27 = uVar6;
      }
      uVar27 = uVar27 << 1;
    }
    else {
      if (0x1f < uVar27) {
        uVar27 = 0x20;
      }
      FUN_00b97104(puVar7,uVar27,param_3,param_4,0,0);
      uVar27 = uVar27 << 1 | 1;
    }
  }
  else {
    if (!bVar30) {
      uVar27 = uVar9 >> 1;
      if (uVar27 == 0) {
        uVar9 = 1;
      }
      else {
LAB_00b96d40:
        puVar16 = (undefined4 *)(param_1 + 8 + uVar20 * 0x10);
        puVar18 = (undefined4 *)(param_1 + -8 + uVar9 * 0x10 + uVar20 * 0x10);
        do {
          uVar23 = puVar16[-2];
          uVar27 = uVar27 - 1;
          puVar16[-2] = puVar18[-2];
          puVar18[-2] = uVar23;
          uVar23 = puVar18[-1];
          puVar18[-1] = puVar16[-1];
          puVar16[-1] = uVar23;
          uVar23 = *puVar16;
          *puVar16 = *puVar18;
          *puVar18 = uVar23;
          uVar23 = puVar18[1];
          puVar18[1] = puVar16[1];
          puVar18 = puVar18 + -4;
          puVar16[1] = uVar23;
          puVar16 = puVar16 + 4;
        } while (uVar27 != 0);
      }
    }
LAB_00b96db0:
    uVar27 = uVar9 << 1 | 1;
  }
  uVar8 = uVar20 - (uVar21 >> 1);
  uVar9 = uVar8 + uVar20;
  lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar9;
  uVar17 = (uVar27 >> 1) + uVar20 * 2;
  lVar2 = (ulonglong)uVar17 * (uVar4 & 0xffffffff);
  uVar12 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
  uVar8 = iVar3 * uVar17 + (int)((ulonglong)lVar2 >> 0x20) ^
          (uint)CARRY4(uVar8,uVar20) * (int)uVar4 + uVar9 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
  if (uVar8 != 0) {
    uVar12 = LZCOUNT(uVar8);
  }
LAB_00b96e08:
  if (1 < uVar19) {
    do {
      while( true ) {
        uVar8 = uVar19 - 1;
        if (abStack_67[uVar19] < uVar12) goto LAB_00b9709c;
        uVar17 = local_170[uVar8];
        uVar9 = uVar17 >> 1;
        uVar28 = uVar9 + (uVar21 >> 1);
        uVar19 = uVar8;
        if ((uVar28 <= param_4) && (((uVar17 | uVar21) & 1) == 0)) break;
        puVar26 = (uint *)(param_1 + (uVar20 - uVar28) * 0x10);
        if ((uVar17 & 1) == 0) {
          FUN_00b97104(puVar26,uVar9,param_3,param_4,LZCOUNT(uVar9 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar21 & 1) == 0) {
          FUN_00b97104(puVar26 + uVar9 * 4,uVar21 >> 1,param_3,param_4,
                       LZCOUNT(uVar21 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar22 = uVar21 >> 1;
        if (1 < uVar17 && 1 < uVar21) {
          uVar21 = uVar9;
          if (uVar22 < uVar9) {
            uVar21 = uVar22;
          }
          if (uVar21 <= param_4) {
            puVar25 = puVar26 + uVar9 * 4;
            puVar15 = puVar26;
            if (uVar22 < uVar9) {
              puVar15 = puVar25;
            }
            FUN_016dd1aa(param_3,puVar15,uVar21 << 4);
            puVar11 = param_3 + uVar21 * 4;
            puVar15 = param_3;
            if (uVar22 < uVar9) {
              puVar14 = (uint *)(param_1 + -0x10 + uVar20 * 0x10);
              do {
                puVar24 = puVar25 + -4;
                puVar10 = puVar11 + -4;
                bVar30 = *puVar24 <= *puVar10;
                if (*puVar10 == *puVar24) {
                  bVar30 = puVar25[-3] <= puVar11[-3];
                }
                uVar21 = (uint)!bVar30;
                puVar11 = puVar10 + uVar21 * 4;
                if (uVar21 != 0) {
                  puVar10 = puVar24;
                }
                uVar22 = *puVar10;
                uVar9 = puVar10[1];
                uVar17 = puVar10[2];
                puVar14[3] = puVar10[3];
                *puVar14 = uVar22;
                puVar25 = puVar24 + (uVar21 ^ 1) * 4;
                puVar14[1] = uVar9;
                puVar14[2] = uVar17;
              } while ((puVar25 != puVar26) && (puVar14 = puVar14 + -4, puVar11 != param_3));
              puVar26 = puVar25;
            }
            else {
              do {
                bVar30 = *puVar15 <= *puVar25;
                if (*puVar25 == *puVar15) {
                  bVar30 = puVar15[1] <= puVar25[1];
                }
                uVar21 = (uint)!bVar30;
                puVar14 = puVar15;
                if (uVar21 != 0) {
                  puVar14 = puVar25;
                }
                uVar22 = *puVar14;
                uVar17 = puVar14[1];
                uVar9 = puVar14[2];
                puVar26[3] = puVar14[3];
                *puVar26 = uVar22;
                puVar15 = puVar15 + (uVar21 ^ 1) * 4;
                puVar26[1] = uVar17;
                puVar26[2] = uVar9;
                puVar26 = puVar26 + 4;
              } while ((puVar15 != puVar11) && (puVar25 = puVar25 + uVar21 * 4, puVar25 != puVar7));
            }
            FUN_016dd1aa(puVar26,puVar15,(int)puVar11 - (int)puVar15);
          }
        }
        uVar21 = uVar28 * 2 | 1;
        if (uVar8 < 2) goto LAB_00b97090;
      }
      uVar21 = uVar28 * 2;
    } while (1 < uVar8);
LAB_00b97090:
    uVar19 = 1;
  }
LAB_00b9709c:
  abStack_67[uVar19 + 1] = (byte)uVar12;
  local_170[uVar19] = uVar21;
  if (param_2 <= uVar20) {
    if ((uVar21 & 1) == 0) {
      FUN_00b97104(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
    }
    return;
  }
  uVar19 = uVar19 + 1;
  uVar20 = uVar20 + (uVar27 >> 1);
  uVar21 = uVar27;
  goto LAB_00b96b74;
}

