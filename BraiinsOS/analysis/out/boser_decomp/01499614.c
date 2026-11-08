// FUN_01499614 @ 01499614 size=1768 calls_out=4 calls_in=2
// strings: 

void FUN_01499614(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  undefined4 *puVar26;
  uint uVar27;
  undefined4 *puVar28;
  uint uVar29;
  bool bVar30;
  ulonglong uVar31;
  uint local_190;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar31 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar31 & 0xffffffff);
  uVar2 = uVar31 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar31 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar31;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar16 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar16) + (param_2 >> iVar16) >> 1;
  }
  uVar24 = 0;
  uVar27 = 0;
  uVar29 = 1;
  do {
    uVar15 = 0;
    local_190 = 1;
    if (uVar24 < param_2) {
      iVar16 = param_1 + uVar24 * 0x28;
      local_190 = param_2 - uVar24;
      if (local_190 < uVar4) {
LAB_01499720:
        if (param_5 == 0) {
          if (uVar4 <= local_190) {
            local_190 = uVar4;
          }
          local_190 = local_190 << 1;
        }
        else {
          if (0x1f < local_190) {
            local_190 = 0x20;
          }
          FUN_014898ac(iVar16,local_190,param_3,param_4,0,0);
          local_190 = local_190 << 1 | 1;
        }
      }
      else {
        if (local_190 < 2) {
          uVar11 = local_190;
        }
        else {
          uVar20 = *(uint *)(iVar16 + 8);
          uVar12 = *(uint *)(iVar16 + 0x30);
          uVar15 = *(uint *)(iVar16 + 0x2c);
          uVar11 = uVar20;
          if (uVar12 < uVar20) {
            uVar11 = uVar12;
          }
          iVar5 = FUN_01bed842(uVar15,*(undefined4 *)(iVar16 + 4),uVar11);
          if (iVar5 == 0) {
            iVar5 = uVar12 - uVar20;
          }
          if (iVar5 < 0) {
            if (local_190 == 2) {
              uVar11 = 2;
              uVar15 = 1;
LAB_014998e8:
              uVar12 = 0;
              iVar5 = param_1 + -0x28 + uVar24 * 0x28 + uVar11 * 0x28;
              do {
                iVar6 = 0;
                do {
                  uVar13 = *(undefined4 *)(iVar16 + iVar6 * -4);
                  *(undefined4 *)(iVar16 + iVar6 * -4) = *(undefined4 *)(iVar5 + iVar6 * -4);
                  *(undefined4 *)(iVar5 + iVar6 * -4) = uVar13;
                  bVar30 = iVar6 != -9;
                  iVar6 = iVar6 + -1;
                } while (bVar30);
                uVar12 = uVar12 + 1;
                iVar16 = iVar16 + 0x28;
                iVar5 = iVar5 + -0x28;
              } while (uVar12 != uVar15);
            }
            else {
              uVar11 = 2;
              puVar19 = (uint *)(param_1 + 0x58 + uVar24 * 0x28);
              do {
                uVar22 = puVar19[-1];
                uVar25 = *puVar19;
                uVar20 = uVar12;
                if (uVar25 < uVar12) {
                  uVar20 = uVar25;
                }
                uVar15 = FUN_01bed842(uVar22,uVar15,uVar20);
                if (uVar15 == 0) {
                  uVar15 = uVar25 - uVar12;
                }
                if (uVar15 < 0x80000000) goto LAB_014998bc;
                puVar19 = puVar19 + 10;
                uVar11 = uVar11 + 1;
                uVar15 = uVar22;
                uVar12 = uVar25;
              } while (local_190 != uVar11);
LAB_014998a8:
              uVar11 = local_190;
LAB_014998bc:
              if (uVar11 < uVar4) goto LAB_01499720;
              if (iVar5 < 0) {
                uVar15 = uVar11 >> 1;
                if (uVar15 != 0) goto LAB_014998e8;
                uVar11 = 1;
              }
            }
          }
          else {
            uVar11 = 2;
            if (local_190 != 2) {
              uVar11 = 2;
              puVar19 = (uint *)(param_1 + 0x58 + uVar24 * 0x28);
              do {
                uVar22 = puVar19[-1];
                uVar25 = *puVar19;
                uVar20 = uVar12;
                if (uVar25 < uVar12) {
                  uVar20 = uVar25;
                }
                iVar6 = FUN_01bed842(uVar22,uVar15,uVar20);
                if (iVar6 == 0) {
                  iVar6 = uVar25 - uVar12;
                }
                if (iVar6 < 0) goto LAB_014998bc;
                puVar19 = puVar19 + 10;
                uVar11 = uVar11 + 1;
                uVar15 = uVar22;
                uVar12 = uVar25;
              } while (local_190 != uVar11);
              goto LAB_014998a8;
            }
          }
        }
        local_190 = uVar11 << 1 | 1;
      }
      uVar15 = uVar24 - (uVar29 >> 1);
      uVar11 = uVar24 + (local_190 >> 1);
      uVar12 = uVar11 + uVar24;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar12;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar15,uVar24),uVar15 + uVar24);
      uVar11 = (uint)CARRY4(uVar11,uVar24) * (int)uVar2 +
               uVar12 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar15 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar11 != 0) {
        uVar15 = LZCOUNT(uVar11);
      }
    }
    if (1 < uVar27) {
      puVar7 = (undefined4 *)(param_1 + uVar24 * 0x28);
      do {
        uVar11 = uVar27 - 1;
        if (abStack_67[uVar27] < uVar15) goto LAB_01499c9c;
        uVar12 = local_170[uVar11];
        uVar27 = uVar12 >> 1;
        uVar20 = uVar27 + (uVar29 >> 1);
        if ((param_4 < uVar20) || (((uVar12 | uVar29) & 1) != 0)) {
          puVar8 = (undefined4 *)(param_1 + (uVar24 - uVar20) * 0x28);
          if ((uVar12 & 1) == 0) {
            FUN_014898ac(puVar8,uVar27,param_3,param_4,LZCOUNT(uVar27 | 1) << 1 ^ 0x3e,0);
          }
          uVar22 = uVar29 >> 1;
          if ((uVar29 & 1) == 0) {
            FUN_014898ac(puVar8 + uVar27 * 10,uVar22,param_3,param_4,LZCOUNT(uVar22 | 1) << 1 ^ 0x3e
                         ,0);
          }
          if (1 < uVar12 && 1 < uVar29) {
            uVar29 = uVar27;
            if (uVar22 < uVar27) {
              uVar29 = uVar22;
            }
            if (uVar29 <= param_4) {
              puVar26 = puVar8 + uVar27 * 10;
              puVar28 = puVar8;
              if (uVar22 < uVar27) {
                puVar28 = puVar26;
              }
              puVar9 = (undefined4 *)FUN_01bed4e2(param_3,puVar28,uVar29 * 0x28);
              puVar18 = param_3 + uVar29 * 10;
              puVar23 = param_3;
              if (uVar22 < uVar27) {
                puVar26 = (undefined4 *)(param_1 + -0x28 + uVar24 * 0x28);
                do {
                  uVar12 = puVar28[-8];
                  uVar27 = puVar18[-8];
                  uVar29 = uVar12;
                  if (uVar27 < uVar12) {
                    uVar29 = uVar27;
                  }
                  uVar29 = FUN_01bed842(puVar18[-9],puVar28[-9],uVar29);
                  if (uVar29 == 0) {
                    uVar29 = uVar27 - uVar12;
                  }
                  puVar9 = puVar28 + -10;
                  if (uVar29 < 0x80000000) {
                    puVar9 = puVar18 + -10;
                  }
                  uVar13 = puVar9[1];
                  uVar14 = puVar9[2];
                  uVar17 = puVar9[3];
                  uVar21 = puVar9[4];
                  *puVar26 = *puVar9;
                  puVar26[1] = uVar13;
                  puVar26[2] = uVar14;
                  puVar26[3] = uVar17;
                  puVar26[4] = uVar21;
                  uVar13 = puVar9[6];
                  uVar14 = puVar9[7];
                  uVar17 = puVar9[8];
                  uVar21 = puVar9[9];
                  puVar26[5] = puVar9[5];
                  puVar26[6] = uVar13;
                  puVar26[7] = uVar14;
                  puVar26[8] = uVar17;
                  puVar26[9] = uVar21;
                  puVar18 = puVar18 + -10 + (uVar29 >> 0x1f | (uVar29 >> 0x1f) << 2) * 2;
                  uVar29 = uVar29 >> 0x1f ^ 1;
                  puVar28 = puVar28 + -10 + (uVar29 | uVar29 << 2) * 2;
                } while ((puVar28 != puVar8) && (puVar26 = puVar26 + -10, puVar18 != param_3));
LAB_01499c74:
              }
              else {
                if (uVar29 != 0) {
                  puVar9 = puVar7;
                }
                if (uVar29 != 0 && puVar26 != puVar9) {
                  puVar8 = puVar28;
                  do {
                    uVar27 = puVar23[2];
                    uVar12 = puVar26[2];
                    uVar29 = uVar27;
                    if (uVar12 < uVar27) {
                      uVar29 = uVar12;
                    }
                    puVar9 = (undefined4 *)FUN_01bed842(puVar26[1],puVar23[1],uVar29);
                    if (puVar9 == (undefined4 *)0x0) {
                      puVar9 = (undefined4 *)(uVar12 - uVar27);
                    }
                    puVar10 = puVar26;
                    if (puVar9 < &DAT_80000000) {
                      puVar10 = puVar23;
                    }
                    puVar28 = puVar8 + 10;
                    uVar13 = puVar10[1];
                    uVar14 = puVar10[2];
                    uVar17 = puVar10[3];
                    uVar21 = puVar10[4];
                    *puVar8 = *puVar10;
                    puVar8[1] = uVar13;
                    puVar8[2] = uVar14;
                    puVar8[3] = uVar17;
                    puVar8[4] = uVar21;
                    uVar13 = puVar10[6];
                    uVar14 = puVar10[7];
                    uVar17 = puVar10[8];
                    uVar21 = puVar10[9];
                    uVar29 = (uint)puVar9 >> 0x1f ^ 1;
                    puVar8[5] = puVar10[5];
                    puVar8[6] = uVar13;
                    puVar8[7] = uVar14;
                    puVar8[8] = uVar17;
                    puVar8[9] = uVar21;
                    puVar23 = puVar23 + (uVar29 | uVar29 << 2) * 2;
                    if (puVar23 != puVar18) {
                      puVar26 = puVar26 + ((uint)puVar9 >> 0x1f | ((uint)puVar9 >> 0x1f) << 2) * 2;
                      puVar9 = puVar7;
                    }
                    puVar8 = puVar28;
                  } while (puVar23 != puVar18 && puVar26 != puVar9);
                  goto LAB_01499c74;
                }
              }
              FUN_01bed4e2(puVar28,puVar23,(int)puVar18 - (int)puVar23);
            }
          }
          uVar29 = uVar20 * 2 | 1;
        }
        else {
          uVar29 = uVar20 * 2;
        }
        uVar27 = uVar11;
      } while (1 < uVar11);
      uVar27 = 1;
    }
LAB_01499c9c:
    abStack_67[uVar27 + 1] = (byte)uVar15;
    local_170[uVar27] = uVar29;
    if (param_2 <= uVar24) {
      if ((uVar29 & 1) == 0) {
        FUN_014898ac(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar27 = uVar27 + 1;
    uVar24 = uVar24 + (local_190 >> 1);
    uVar29 = local_190;
  } while( true );
}

