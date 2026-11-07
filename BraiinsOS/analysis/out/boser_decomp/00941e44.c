// FUN_00941e44 @ 00941e44 size=1784 calls_out=4 calls_in=1
// strings: 

void FUN_00941e44(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 *puVar25;
  uint uVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  uint *puVar29;
  uint uVar30;
  bool bVar31;
  ulonglong uVar32;
  uint local_194;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar32 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar32 & 0xffffffff);
  uVar4 = uVar32 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar32 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar32;
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
    iVar19 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar19) + (param_2 >> iVar19) >> 1;
  }
  uVar30 = 0;
  uVar16 = 0;
  uVar22 = 1;
  do {
    uVar13 = 0;
    local_194 = 1;
    if (uVar30 < param_2) {
      local_194 = param_2 - uVar30;
      iVar19 = param_1 + uVar30 * 0x28;
      if (local_194 < uVar5) {
LAB_00941f48:
        if (param_5 == 0) {
          if (uVar5 <= local_194) {
            local_194 = uVar5;
          }
          local_194 = local_194 << 1;
        }
        else {
          if (0x1f < local_194) {
            local_194 = 0x20;
          }
          FUN_00972c7c(iVar19,local_194,param_3,param_4,0,0);
          local_194 = local_194 << 1 | 1;
        }
      }
      else {
        if (local_194 < 2) {
          uVar8 = local_194;
        }
        else {
          uVar20 = *(uint *)(iVar19 + 8);
          uVar14 = *(uint *)(iVar19 + 0x30);
          uVar13 = *(uint *)(iVar19 + 0x2c);
          uVar8 = uVar20;
          if (uVar14 < uVar20) {
            uVar8 = uVar14;
          }
          iVar6 = FUN_01bed842(uVar13,*(undefined4 *)(iVar19 + 4),uVar8);
          if (iVar6 == 0) {
            iVar6 = uVar14 - uVar20;
          }
          if (iVar6 < 0) {
            if (local_194 == 2) {
              uVar8 = 2;
              uVar13 = 1;
LAB_0094213c:
              uVar14 = 0;
              iVar6 = param_1 + -0x28 + uVar30 * 0x28 + uVar8 * 0x28;
              do {
                iVar7 = 0;
                do {
                  uVar15 = *(undefined4 *)(iVar19 + iVar7 * -4);
                  *(undefined4 *)(iVar19 + iVar7 * -4) = *(undefined4 *)(iVar6 + iVar7 * -4);
                  *(undefined4 *)(iVar6 + iVar7 * -4) = uVar15;
                  bVar31 = iVar7 != -9;
                  iVar7 = iVar7 + -1;
                } while (bVar31);
                uVar14 = uVar14 + 1;
                iVar19 = iVar19 + 0x28;
                iVar6 = iVar6 + -0x28;
              } while (uVar14 != uVar13);
            }
            else {
              uVar8 = 2;
              puVar29 = (uint *)(param_1 + 0x58 + uVar30 * 0x28);
              do {
                uVar24 = puVar29[-1];
                uVar26 = *puVar29;
                uVar20 = uVar14;
                if (uVar26 < uVar14) {
                  uVar20 = uVar26;
                }
                uVar13 = FUN_01bed842(uVar24,uVar13,uVar20);
                if (uVar13 == 0) {
                  uVar13 = uVar26 - uVar14;
                }
                if (uVar13 < 0x80000000) goto LAB_00942104;
                puVar29 = puVar29 + 10;
                uVar8 = uVar8 + 1;
                uVar13 = uVar24;
                uVar14 = uVar26;
              } while (local_194 != uVar8);
LAB_009420f0:
              uVar8 = local_194;
LAB_00942104:
              if (uVar8 < uVar5) goto LAB_00941f48;
              if (iVar6 < 0) {
                uVar13 = uVar8 >> 1;
                if (uVar13 != 0) goto LAB_0094213c;
                uVar8 = 1;
              }
            }
          }
          else {
            uVar8 = 2;
            if (local_194 != 2) {
              uVar8 = 2;
              puVar29 = (uint *)(param_1 + 0x58 + uVar30 * 0x28);
              do {
                uVar24 = puVar29[-1];
                uVar26 = *puVar29;
                uVar20 = uVar14;
                if (uVar26 < uVar14) {
                  uVar20 = uVar26;
                }
                iVar7 = FUN_01bed842(uVar24,uVar13,uVar20);
                if (iVar7 == 0) {
                  iVar7 = uVar26 - uVar14;
                }
                if (iVar7 < 0) goto LAB_00942104;
                puVar29 = puVar29 + 10;
                uVar8 = uVar8 + 1;
                uVar13 = uVar24;
                uVar14 = uVar26;
              } while (local_194 != uVar8);
              goto LAB_009420f0;
            }
          }
        }
        local_194 = uVar8 << 1 | 1;
      }
      uVar13 = uVar30 - (uVar22 >> 1);
      uVar8 = uVar13 + uVar30;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar8;
      uVar14 = (local_194 >> 1) + uVar30 * 2;
      lVar2 = (ulonglong)uVar14 * (uVar4 & 0xffffffff);
      uVar8 = iVar3 * uVar14 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar13,uVar30) * (int)uVar4 +
              uVar8 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      uVar13 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      if (uVar8 != 0) {
        uVar13 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar16) {
      puVar9 = (undefined4 *)(param_1 + uVar30 * 0x28);
      do {
        uVar8 = uVar16 - 1;
        if (abStack_67[uVar16] < uVar13) goto LAB_009424d8;
        uVar14 = local_170[uVar8];
        uVar16 = uVar14 >> 1;
        uVar20 = uVar16 + (uVar22 >> 1);
        if ((param_4 < uVar20) || (((uVar14 | uVar22) & 1) != 0)) {
          puVar10 = (undefined4 *)(param_1 + (uVar30 - uVar20) * 0x28);
          if ((uVar14 & 1) == 0) {
            FUN_00972c7c(puVar10,uVar16,param_3,param_4,LZCOUNT(uVar16 | 1) << 1 ^ 0x3e,0);
          }
          uVar24 = uVar22 >> 1;
          if ((uVar22 & 1) == 0) {
            FUN_00972c7c(puVar10 + uVar16 * 10,uVar24,param_3,param_4,
                         LZCOUNT(uVar24 | 1) << 1 ^ 0x3e,0);
          }
          if (1 < uVar14 && 1 < uVar22) {
            uVar22 = uVar16;
            if (uVar24 < uVar16) {
              uVar22 = uVar24;
            }
            if (uVar22 <= param_4) {
              puVar27 = puVar10 + uVar16 * 10;
              puVar28 = puVar10;
              if (uVar24 < uVar16) {
                puVar28 = puVar27;
              }
              puVar11 = (undefined4 *)FUN_01bed4e2(param_3,puVar28,uVar22 * 0x28);
              puVar17 = param_3 + uVar22 * 10;
              puVar25 = param_3;
              if (uVar24 < uVar16) {
                puVar27 = (undefined4 *)(param_1 + -0x28 + uVar30 * 0x28);
                do {
                  uVar14 = puVar28[-8];
                  uVar16 = puVar17[-8];
                  uVar22 = uVar14;
                  if (uVar16 < uVar14) {
                    uVar22 = uVar16;
                  }
                  uVar22 = FUN_01bed842(puVar17[-9],puVar28[-9],uVar22);
                  if (uVar22 == 0) {
                    uVar22 = uVar16 - uVar14;
                  }
                  puVar11 = puVar28 + -10;
                  if (uVar22 < 0x80000000) {
                    puVar11 = puVar17 + -10;
                  }
                  uVar15 = puVar11[1];
                  uVar18 = puVar11[2];
                  uVar21 = puVar11[3];
                  uVar23 = puVar11[4];
                  *puVar27 = *puVar11;
                  puVar27[1] = uVar15;
                  puVar27[2] = uVar18;
                  puVar27[3] = uVar21;
                  puVar27[4] = uVar23;
                  uVar15 = puVar11[6];
                  uVar18 = puVar11[7];
                  uVar21 = puVar11[8];
                  uVar23 = puVar11[9];
                  puVar27[5] = puVar11[5];
                  puVar27[6] = uVar15;
                  puVar27[7] = uVar18;
                  puVar27[8] = uVar21;
                  puVar27[9] = uVar23;
                  puVar17 = puVar17 + -10 + (uVar22 >> 0x1f | (uVar22 >> 0x1f) << 2) * 2;
                  uVar22 = uVar22 >> 0x1f ^ 1;
                  puVar28 = puVar28 + -10 + (uVar22 | uVar22 << 2) * 2;
                } while ((puVar28 != puVar10) && (puVar27 = puVar27 + -10, puVar17 != param_3));
              }
              else {
                if (uVar22 != 0) {
                  puVar11 = puVar9;
                }
                if (uVar22 != 0 && puVar27 != puVar11) {
                  puVar10 = puVar28;
                  do {
                    uVar16 = puVar25[2];
                    uVar14 = puVar27[2];
                    uVar22 = uVar16;
                    if (uVar14 < uVar16) {
                      uVar22 = uVar14;
                    }
                    puVar11 = (undefined4 *)FUN_01bed842(puVar27[1],puVar25[1],uVar22);
                    if (puVar11 == (undefined4 *)0x0) {
                      puVar11 = (undefined4 *)(uVar14 - uVar16);
                    }
                    puVar28 = puVar10 + 10;
                    puVar12 = puVar27;
                    if (puVar11 < &DAT_80000000) {
                      puVar12 = puVar25;
                    }
                    uVar15 = puVar12[1];
                    uVar18 = puVar12[2];
                    uVar21 = puVar12[3];
                    uVar23 = puVar12[4];
                    *puVar10 = *puVar12;
                    puVar10[1] = uVar15;
                    puVar10[2] = uVar18;
                    puVar10[3] = uVar21;
                    puVar10[4] = uVar23;
                    uVar15 = puVar12[6];
                    uVar18 = puVar12[7];
                    uVar21 = puVar12[8];
                    uVar23 = puVar12[9];
                    uVar22 = (uint)puVar11 >> 0x1f ^ 1;
                    puVar10[5] = puVar12[5];
                    puVar10[6] = uVar15;
                    puVar10[7] = uVar18;
                    puVar10[8] = uVar21;
                    puVar10[9] = uVar23;
                    puVar25 = puVar25 + (uVar22 | uVar22 << 2) * 2;
                    if (puVar25 != puVar17) {
                      puVar27 = puVar27 + ((uint)puVar11 >> 0x1f | ((uint)puVar11 >> 0x1f) << 2) * 2
                      ;
                      puVar11 = puVar9;
                    }
                    puVar10 = puVar28;
                  } while (puVar25 != puVar17 && puVar27 != puVar11);
                }
              }
              FUN_01bed4e2(puVar28,puVar25,(int)puVar17 - (int)puVar25);
            }
          }
          uVar22 = uVar20 * 2 | 1;
        }
        else {
          uVar22 = uVar20 * 2;
        }
        uVar16 = uVar8;
      } while (1 < uVar8);
      uVar16 = 1;
    }
LAB_009424d8:
    abStack_67[uVar16 + 1] = (byte)uVar13;
    local_170[uVar16] = uVar22;
    if (param_2 <= uVar30) {
      if ((uVar22 & 1) == 0) {
        FUN_00972c7c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar16 = uVar16 + 1;
    uVar30 = uVar30 + (local_194 >> 1);
    uVar22 = local_194;
  } while( true );
}

