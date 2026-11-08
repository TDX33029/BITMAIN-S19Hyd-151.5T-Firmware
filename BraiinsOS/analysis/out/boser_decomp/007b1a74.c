// FUN_007b1a74 @ 007b1a74 size=1656 calls_out=4 calls_in=2
// strings: 

void FUN_007b1a74(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

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
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 *puVar23;
  uint uVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  uint local_18c;
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
  uVar10 = 0;
  uVar15 = 0;
  uVar24 = 1;
LAB_007b1b44:
  uVar11 = 0;
  puVar6 = (undefined4 *)(param_1 + uVar10 * 8);
  local_18c = 1;
  if (uVar10 < param_2) {
    local_18c = param_2 - uVar10;
    if (uVar5 <= local_18c) {
      if (1 < local_18c) {
        uVar12 = puVar6[3];
        uVar13 = puVar6[1];
        uVar14 = puVar6[2];
        uVar11 = uVar13;
        if (uVar12 < uVar13) {
          uVar11 = uVar12;
        }
        iVar7 = FUN_01bed842(uVar14,*puVar6,uVar11);
        if (iVar7 == 0) {
          iVar7 = uVar12 - uVar13;
        }
        if (-1 < iVar7) {
          uVar11 = 2;
          if (local_18c != 2) {
            iVar22 = 0;
            do {
              uVar17 = puVar6[iVar22 * 2 + 4];
              uVar13 = puVar6[iVar22 * 2 + 5];
              uVar11 = uVar12;
              if (uVar13 < uVar12) {
                uVar11 = uVar13;
              }
              iVar8 = FUN_01bed842(uVar17,uVar14,uVar11);
              if (iVar8 == 0) {
                iVar8 = uVar13 - uVar12;
              }
              if (iVar8 < 0) goto LAB_007b1d08;
              iVar22 = iVar22 + 1;
              uVar12 = uVar13;
              uVar14 = uVar17;
            } while ((param_2 - 2) - uVar10 != iVar22);
            goto LAB_007b1d00;
          }
          goto LAB_007b1db0;
        }
        if (local_18c != 2) {
          iVar22 = 0;
          do {
            uVar17 = puVar6[iVar22 * 2 + 4];
            uVar13 = puVar6[iVar22 * 2 + 5];
            uVar11 = uVar12;
            if (uVar13 < uVar12) {
              uVar11 = uVar13;
            }
            uVar11 = FUN_01bed842(uVar17,uVar14,uVar11);
            if (uVar11 == 0) {
              uVar11 = uVar13 - uVar12;
            }
            if (uVar11 < 0x80000000) goto LAB_007b1d08;
            iVar22 = iVar22 + 1;
            uVar12 = uVar13;
            uVar14 = uVar17;
          } while ((param_2 - 2) - uVar10 != iVar22);
LAB_007b1d00:
          uVar11 = local_18c;
          goto LAB_007b1d0c;
        }
        uVar11 = 2;
        uVar12 = 1;
        goto LAB_007b1d40;
      }
      uVar11 = local_18c;
      goto LAB_007b1db0;
    }
    goto LAB_007b1b78;
  }
  goto LAB_007b1e18;
LAB_007b1d08:
  uVar11 = iVar22 + 2;
LAB_007b1d0c:
  if (uVar11 < uVar5) {
LAB_007b1b78:
    if (param_5 == 0) {
      if (uVar5 <= local_18c) {
        local_18c = uVar5;
      }
      local_18c = local_18c << 1;
    }
    else {
      if (0x1f < local_18c) {
        local_18c = 0x20;
      }
      FUN_007b0fac(puVar6,local_18c,param_3,param_4,0,0);
      local_18c = local_18c << 1 | 1;
    }
  }
  else {
    if (iVar7 < 0) {
      uVar12 = uVar11 >> 1;
      if (uVar12 == 0) {
        uVar11 = 1;
      }
      else {
LAB_007b1d40:
        iVar7 = uVar10 * 8 + uVar11 * 8;
        iVar8 = 0;
        iVar22 = 0;
        do {
          puVar25 = (undefined4 *)(param_1 + -8 + iVar7 + iVar8 * 8);
          uVar14 = *puVar25;
          puVar23 = puVar6 + iVar22 * 2;
          iVar22 = iVar22 + 1;
          *puVar25 = *puVar23;
          uVar17 = puVar25[1];
          *(undefined4 *)(param_1 + -4 + iVar7 + iVar8 * 8) = puVar6[iVar8 * -2 + 1];
          iVar8 = iVar8 + -1;
          *puVar23 = uVar14;
          puVar23[1] = uVar17;
        } while (-iVar8 != uVar12);
      }
    }
LAB_007b1db0:
    local_18c = uVar11 << 1 | 1;
  }
  uVar11 = uVar10 - (uVar24 >> 1);
  uVar12 = uVar10 + (local_18c >> 1);
  uVar13 = uVar12 + uVar10;
  lVar2 = (uVar3 & 0xffffffff) * (ulonglong)uVar13;
  lVar4 = uVar3 * CONCAT14(CARRY4(uVar11,uVar10),uVar11 + uVar10);
  uVar12 = (uint)CARRY4(uVar12,uVar10) * (int)uVar3 +
           uVar13 * (int)(uVar3 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) ^
           (uint)((ulonglong)lVar4 >> 0x20);
  uVar11 = LZCOUNT((uint)lVar2 ^ (uint)lVar4) + 0x20;
  if (uVar12 != 0) {
    uVar11 = LZCOUNT(uVar12);
  }
LAB_007b1e18:
  if (1 < uVar15) {
    do {
      uVar12 = uVar15 - 1;
      if (abStack_67[uVar15] < uVar11) goto LAB_007b2084;
      uVar19 = local_170[uVar12];
      uVar15 = uVar19 >> 1;
      uVar13 = uVar15 + (uVar24 >> 1);
      if ((param_4 < uVar13) || (((uVar19 | uVar24) & 1) != 0)) {
        puVar23 = (undefined4 *)(param_1 + (uVar10 - uVar13) * 8);
        if ((uVar19 & 1) == 0) {
          FUN_007b0fac(puVar23,uVar15,param_3,param_4,LZCOUNT(uVar15 | 1) << 1 ^ 0x3e,0);
        }
        uVar1 = uVar24 >> 1;
        if ((uVar24 & 1) == 0) {
          FUN_007b0fac(puVar23 + uVar15 * 2,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0);
        }
        if (1 < uVar19 && 1 < uVar24) {
          uVar24 = uVar15;
          if (uVar1 < uVar15) {
            uVar24 = uVar1;
          }
          if (uVar24 <= param_4) {
            puVar25 = puVar23 + uVar15 * 2;
            puVar21 = puVar23;
            if (uVar1 < uVar15) {
              puVar21 = puVar25;
            }
            puVar9 = (undefined4 *)FUN_01bed4e2(param_3,puVar21,uVar24 << 3);
            puVar18 = param_3 + uVar24 * 2;
            puVar16 = param_3;
            if (uVar1 < uVar15) {
              puVar25 = (undefined4 *)(param_1 + -8 + uVar10 * 8);
              do {
                puVar20 = puVar21 + -2;
                puVar9 = puVar18 + -2;
                uVar15 = puVar21[-1];
                uVar19 = puVar18[-1];
                uVar24 = uVar15;
                if (uVar19 < uVar15) {
                  uVar24 = uVar19;
                }
                uVar24 = FUN_01bed842(*puVar9,*puVar20,uVar24);
                if (uVar24 == 0) {
                  uVar24 = uVar19 - uVar15;
                }
                puVar21 = puVar20;
                if (uVar24 < 0x80000000) {
                  puVar21 = puVar9;
                }
                uVar14 = puVar21[1];
                *puVar25 = *puVar21;
                puVar25[1] = uVar14;
                puVar18 = (undefined4 *)((int)puVar9 + (uVar24 >> 0x1c & 8));
                puVar21 = (undefined4 *)((int)puVar20 + (~uVar24 >> 0x1c & 8));
              } while ((puVar21 != puVar23) && (puVar25 = puVar25 + -2, puVar18 != param_3));
            }
            else {
              if (uVar24 != 0) {
                puVar9 = puVar6;
              }
              if (!(uVar24 == 0 || puVar25 == puVar9)) {
                do {
                  uVar15 = puVar16[1];
                  uVar19 = puVar25[1];
                  uVar24 = uVar15;
                  if (uVar19 < uVar15) {
                    uVar24 = uVar19;
                  }
                  puVar23 = (undefined4 *)FUN_01bed842(*puVar25,*puVar16,uVar24);
                  if (puVar23 == (undefined4 *)0x0) {
                    puVar23 = (undefined4 *)(uVar19 - uVar15);
                  }
                  puVar9 = puVar25;
                  if (puVar23 < &DAT_80000000) {
                    puVar9 = puVar16;
                  }
                  uVar14 = puVar9[1];
                  *puVar21 = *puVar9;
                  puVar21[1] = uVar14;
                  puVar16 = (undefined4 *)((int)puVar16 + (~(uint)puVar23 >> 0x1c & 8));
                  puVar21 = puVar21 + 2;
                  if (puVar16 != puVar18) {
                    puVar25 = (undefined4 *)((int)puVar25 + ((uint)puVar23 >> 0x1c & 8));
                    puVar23 = puVar6;
                  }
                } while (puVar16 != puVar18 && puVar25 != puVar23);
              }
            }
            FUN_01bed4e2(puVar21,puVar16,(int)puVar18 - (int)puVar16);
          }
        }
        uVar24 = uVar13 * 2 | 1;
      }
      else {
        uVar24 = uVar13 * 2;
      }
      uVar15 = uVar12;
    } while (1 < uVar12);
    uVar15 = 1;
  }
LAB_007b2084:
  abStack_67[uVar15 + 1] = (byte)uVar11;
  local_170[uVar15] = uVar24;
  if (param_2 <= uVar10) {
    if ((uVar24 & 1) == 0) {
      FUN_007b0fac(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
    }
    return;
  }
  uVar15 = uVar15 + 1;
  uVar10 = uVar10 + (local_18c >> 1);
  uVar24 = local_18c;
  goto LAB_007b1b44;
}

