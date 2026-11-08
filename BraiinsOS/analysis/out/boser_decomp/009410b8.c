// FUN_009410b8 @ 009410b8 size=1700 calls_out=4 calls_in=2
// strings: 

void FUN_009410b8(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  uint uVar25;
  ulonglong uVar26;
  uint local_190;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar26 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar26 & 0xffffffff);
  uVar3 = uVar26 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar26 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar3 = uVar26;
  }
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar7 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar7) + (param_2 >> iVar7) >> 1;
  }
  uVar25 = 0;
  uVar21 = 0;
  uVar18 = 1;
LAB_0094117c:
  puVar6 = (undefined4 *)(param_1 + uVar25 * 0x20);
  uVar10 = 0;
  local_190 = 1;
  if (uVar25 < param_2) {
    local_190 = param_2 - uVar25;
    if (uVar5 <= local_190) {
      if (1 < local_190) {
        uVar13 = puVar6[2];
        uVar14 = puVar6[9];
        uVar12 = puVar6[10];
        uVar10 = uVar13;
        if (uVar12 < uVar13) {
          uVar10 = uVar12;
        }
        iVar7 = FUN_01bed842(uVar14,puVar6[1],uVar10);
        if (iVar7 == 0) {
          iVar7 = uVar12 - uVar13;
        }
        if (-1 < iVar7) {
          uVar10 = 2;
          if (local_190 != 2) {
            iVar17 = 0;
            do {
              uVar16 = puVar6[iVar17 * 8 + 0x11];
              uVar13 = puVar6[iVar17 * 8 + 0x12];
              uVar10 = uVar12;
              if (uVar13 < uVar12) {
                uVar10 = uVar13;
              }
              iVar8 = FUN_01bed842(uVar16,uVar14,uVar10);
              if (iVar8 == 0) {
                iVar8 = uVar13 - uVar12;
              }
              if (iVar8 < 0) goto LAB_00941344;
              iVar17 = iVar17 + 1;
              uVar14 = uVar16;
              uVar12 = uVar13;
            } while ((param_2 - 2) - uVar25 != iVar17);
            goto LAB_0094133c;
          }
          goto LAB_009413c0;
        }
        if (local_190 != 2) {
          iVar17 = 0;
          do {
            uVar16 = puVar6[iVar17 * 8 + 0x11];
            uVar13 = puVar6[iVar17 * 8 + 0x12];
            uVar10 = uVar12;
            if (uVar13 < uVar12) {
              uVar10 = uVar13;
            }
            uVar10 = FUN_01bed842(uVar16,uVar14,uVar10);
            if (uVar10 == 0) {
              uVar10 = uVar13 - uVar12;
            }
            if (uVar10 < 0x80000000) goto LAB_00941344;
            iVar17 = iVar17 + 1;
            uVar14 = uVar16;
            uVar12 = uVar13;
          } while ((param_2 - 2) - uVar25 != iVar17);
LAB_0094133c:
          uVar10 = local_190;
          goto LAB_00941348;
        }
        uVar10 = 2;
        uVar12 = 1;
        goto LAB_00941374;
      }
      uVar10 = local_190;
      goto LAB_009413c0;
    }
    goto LAB_009411b0;
  }
  goto LAB_00941428;
LAB_00941344:
  uVar10 = iVar17 + 2;
LAB_00941348:
  if (uVar10 < uVar5) {
LAB_009411b0:
    if (param_5 == 0) {
      if (uVar5 <= local_190) {
        local_190 = uVar5;
      }
      local_190 = local_190 << 1;
    }
    else {
      if (0x1f < local_190) {
        local_190 = 0x20;
      }
      FUN_00974c9c(puVar6,local_190,param_3,param_4,0,0);
      local_190 = local_190 << 1 | 1;
    }
  }
  else {
    if (iVar7 < 0) {
      uVar12 = uVar10 >> 1;
      if (uVar12 == 0) {
        uVar10 = 1;
      }
      else {
LAB_00941374:
        iVar7 = param_1 + -0x20 + uVar25 * 0x20 + uVar10 * 0x20;
        uVar13 = 0;
        puVar9 = puVar6;
        do {
          iVar17 = 0;
          do {
            uVar14 = puVar9[iVar17];
            puVar9[iVar17] = *(undefined4 *)(iVar7 + iVar17 * 4);
            *(undefined4 *)(iVar7 + iVar17 * 4) = uVar14;
            iVar17 = iVar17 + 1;
          } while (iVar17 != 8);
          uVar13 = uVar13 + 1;
          puVar9 = puVar9 + 8;
          iVar7 = iVar7 + -0x20;
        } while (uVar13 != uVar12);
      }
    }
LAB_009413c0:
    local_190 = uVar10 << 1 | 1;
  }
  uVar10 = uVar25 - (uVar18 >> 1);
  uVar12 = uVar25 + (local_190 >> 1);
  uVar13 = uVar12 + uVar25;
  lVar2 = (uVar3 & 0xffffffff) * (ulonglong)uVar13;
  lVar4 = uVar3 * CONCAT14(CARRY4(uVar10,uVar25),uVar10 + uVar25);
  uVar12 = (uint)CARRY4(uVar12,uVar25) * (int)uVar3 +
           uVar13 * (int)(uVar3 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) ^
           (uint)((ulonglong)lVar4 >> 0x20);
  uVar10 = LZCOUNT((uint)lVar2 ^ (uint)lVar4) + 0x20;
  if (uVar12 != 0) {
    uVar10 = LZCOUNT(uVar12);
  }
LAB_00941428:
  if (1 < uVar21) {
    do {
      uVar12 = uVar21 - 1;
      if (abStack_67[uVar21] < uVar10) goto LAB_009416e8;
      uVar15 = local_170[uVar12];
      uVar21 = uVar15 >> 1;
      uVar13 = uVar21 + (uVar18 >> 1);
      if ((param_4 < uVar13) || (((uVar15 | uVar18) & 1) != 0)) {
        puVar9 = (undefined4 *)(param_1 + (uVar25 - uVar13) * 0x20);
        if ((uVar15 & 1) == 0) {
          FUN_00974c9c(puVar9,uVar21,param_3,param_4,LZCOUNT(uVar21 | 1) << 1 ^ 0x3e,0);
        }
        uVar1 = uVar18 >> 1;
        if ((uVar18 & 1) == 0) {
          FUN_00974c9c(puVar9 + uVar21 * 8,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0);
        }
        if (1 < uVar15 && 1 < uVar18) {
          uVar18 = uVar21;
          if (uVar1 < uVar21) {
            uVar18 = uVar1;
          }
          if (uVar18 <= param_4) {
            puVar22 = puVar9 + uVar21 * 8;
            puVar20 = puVar9;
            if (uVar1 < uVar21) {
              puVar20 = puVar22;
            }
            FUN_01bed4e2(param_3,puVar20,uVar18 << 5);
            puVar24 = param_3 + uVar18 * 8;
            puVar23 = param_3;
            if (uVar1 < uVar21) {
              puVar22 = (undefined4 *)(param_1 + -0x20 + uVar25 * 0x20);
              do {
                uVar15 = puVar20[-6];
                uVar21 = puVar24[-6];
                uVar18 = uVar15;
                if (uVar21 < uVar15) {
                  uVar18 = uVar21;
                }
                uVar18 = FUN_01bed842(puVar24[-7],puVar20[-7],uVar18);
                if (uVar18 == 0) {
                  uVar18 = uVar21 - uVar15;
                }
                puVar11 = puVar20 + -8;
                if (uVar18 < 0x80000000) {
                  puVar11 = puVar24 + -8;
                }
                uVar14 = puVar11[1];
                uVar16 = puVar11[2];
                uVar19 = puVar11[3];
                *puVar22 = *puVar11;
                puVar22[1] = uVar14;
                puVar22[2] = uVar16;
                puVar22[3] = uVar19;
                uVar14 = puVar11[5];
                uVar16 = puVar11[6];
                uVar19 = puVar11[7];
                puVar22[4] = puVar11[4];
                puVar22[5] = uVar14;
                puVar22[6] = uVar16;
                puVar22[7] = uVar19;
                puVar24 = (undefined4 *)((int)(puVar24 + -8) + (uVar18 >> 0x1a & 0x20));
                puVar20 = (undefined4 *)((int)(puVar20 + -8) + (~uVar18 >> 0x1a & 0x20));
              } while ((puVar20 != puVar9) && (puVar22 = puVar22 + -8, puVar24 != param_3));
            }
            else {
              puVar9 = puVar20;
              if (uVar18 != 0) {
                while( true ) {
                  puVar20 = puVar9;
                  if (puVar22 == puVar6) break;
                  uVar15 = puVar23[2];
                  uVar21 = puVar22[2];
                  uVar18 = uVar15;
                  if (uVar21 < uVar15) {
                    uVar18 = uVar21;
                  }
                  uVar18 = FUN_01bed842(puVar22[1],puVar23[1],uVar18);
                  if (uVar18 == 0) {
                    uVar18 = uVar21 - uVar15;
                  }
                  puVar20 = puVar9 + 8;
                  puVar11 = puVar22;
                  if (uVar18 < 0x80000000) {
                    puVar11 = puVar23;
                  }
                  uVar14 = puVar11[1];
                  uVar16 = puVar11[2];
                  uVar19 = puVar11[3];
                  *puVar9 = *puVar11;
                  puVar9[1] = uVar14;
                  puVar9[2] = uVar16;
                  puVar9[3] = uVar19;
                  uVar14 = puVar11[5];
                  uVar16 = puVar11[6];
                  uVar19 = puVar11[7];
                  puVar23 = (undefined4 *)((int)puVar23 + (~uVar18 >> 0x1a & 0x20));
                  puVar9[4] = puVar11[4];
                  puVar9[5] = uVar14;
                  puVar9[6] = uVar16;
                  puVar9[7] = uVar19;
                  if (puVar23 == puVar24) break;
                  puVar22 = (undefined4 *)((int)puVar22 + (uVar18 >> 0x1a & 0x20));
                  puVar9 = puVar20;
                }
              }
            }
            FUN_01bed4e2(puVar20,puVar23,(int)puVar24 - (int)puVar23);
          }
        }
        uVar18 = uVar13 * 2 | 1;
      }
      else {
        uVar18 = uVar13 * 2;
      }
      uVar21 = uVar12;
    } while (1 < uVar12);
    uVar21 = 1;
  }
LAB_009416e8:
  abStack_67[uVar21 + 1] = (byte)uVar10;
  local_170[uVar21] = uVar18;
  if (param_2 <= uVar25) {
    if ((uVar18 & 1) == 0) {
      FUN_00974c9c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
    }
    return;
  }
  uVar21 = uVar21 + 1;
  uVar25 = uVar25 + (local_190 >> 1);
  uVar18 = local_190;
  goto LAB_0094117c;
}

