// FUN_01178904 @ 01178904 size=1716 calls_out=4 calls_in=2
// strings: 

void FUN_01178904(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

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
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  uint uVar26;
  ulonglong uVar27;
  uint local_188;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar27 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar27 & 0xffffffff);
  uVar3 = uVar27 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar27 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar3 = uVar27;
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
  uVar14 = 0;
  uVar15 = 0;
  uVar26 = 1;
LAB_011789cc:
  uVar10 = 0;
  puVar6 = (undefined4 *)(param_1 + uVar14 * 0x20);
  local_188 = 1;
  if (uVar14 < param_2) {
    local_188 = param_2 - uVar14;
    if (uVar5 <= local_188) {
      if (1 < local_188) {
        uVar13 = puVar6[1];
        uVar12 = puVar6[9];
        uVar16 = puVar6[8];
        uVar10 = uVar13;
        if (uVar12 < uVar13) {
          uVar10 = uVar12;
        }
        iVar7 = FUN_01bed842(uVar16,*puVar6,uVar10);
        if (iVar7 == 0) {
          iVar7 = uVar12 - uVar13;
        }
        if (-1 < iVar7) {
          uVar10 = 2;
          if (local_188 != 2) {
            iVar19 = 0;
            do {
              uVar18 = puVar6[iVar19 * 8 + 0x10];
              uVar13 = puVar6[iVar19 * 8 + 0x11];
              uVar10 = uVar12;
              if (uVar13 < uVar12) {
                uVar10 = uVar13;
              }
              iVar8 = FUN_01bed842(uVar18,uVar16,uVar10);
              if (iVar8 == 0) {
                iVar8 = uVar13 - uVar12;
              }
              if (iVar8 < 0) goto LAB_01178ba8;
              iVar19 = iVar19 + 1;
              uVar12 = uVar13;
              uVar16 = uVar18;
            } while ((param_2 - 2) - uVar14 != iVar19);
            goto LAB_01178ba0;
          }
          goto LAB_01178c38;
        }
        if (local_188 != 2) {
          iVar19 = 0;
          do {
            uVar18 = puVar6[iVar19 * 8 + 0x10];
            uVar13 = puVar6[iVar19 * 8 + 0x11];
            uVar10 = uVar12;
            if (uVar13 < uVar12) {
              uVar10 = uVar13;
            }
            uVar10 = FUN_01bed842(uVar18,uVar16,uVar10);
            if (uVar10 == 0) {
              uVar10 = uVar13 - uVar12;
            }
            if (uVar10 < 0x80000000) goto LAB_01178ba8;
            iVar19 = iVar19 + 1;
            uVar12 = uVar13;
            uVar16 = uVar18;
          } while ((param_2 - 2) - uVar14 != iVar19);
LAB_01178ba0:
          uVar10 = local_188;
          goto LAB_01178bac;
        }
        uVar10 = 2;
        uVar12 = 1;
        goto LAB_01178be8;
      }
      uVar10 = local_188;
      goto LAB_01178c38;
    }
    goto LAB_01178a04;
  }
  goto LAB_01178cb0;
LAB_01178ba8:
  uVar10 = iVar19 + 2;
LAB_01178bac:
  if (uVar10 < uVar5) {
LAB_01178a04:
    if (param_5 == 0) {
      if (uVar5 <= local_188) {
        local_188 = uVar5;
      }
      local_188 = local_188 << 1;
    }
    else {
      if (0x1f < local_188) {
        local_188 = 0x20;
      }
      FUN_01178fb8(puVar6,local_188,param_3,param_4,0,0);
      local_188 = local_188 << 1 | 1;
    }
  }
  else {
    if (iVar7 < 0) {
      uVar12 = uVar10 >> 1;
      if (uVar12 == 0) {
        uVar10 = 1;
      }
      else {
LAB_01178be8:
        iVar7 = param_1 + -0x20 + uVar14 * 0x20 + uVar10 * 0x20;
        uVar13 = 0;
        puVar9 = puVar6;
        do {
          iVar19 = 0;
          do {
            uVar16 = puVar9[iVar19];
            puVar9[iVar19] = *(undefined4 *)(iVar7 + iVar19 * 4);
            *(undefined4 *)(iVar7 + iVar19 * 4) = uVar16;
            iVar19 = iVar19 + 1;
          } while (iVar19 != 8);
          uVar13 = uVar13 + 1;
          puVar9 = puVar9 + 8;
          iVar7 = iVar7 + -0x20;
        } while (uVar13 != uVar12);
      }
    }
LAB_01178c38:
    local_188 = uVar10 << 1 | 1;
  }
  uVar10 = uVar14 - (uVar26 >> 1);
  uVar12 = uVar14 + (local_188 >> 1);
  uVar13 = uVar12 + uVar14;
  lVar2 = (uVar3 & 0xffffffff) * (ulonglong)uVar13;
  lVar4 = uVar3 * CONCAT14(CARRY4(uVar10,uVar14),uVar10 + uVar14);
  uVar12 = (uint)CARRY4(uVar12,uVar14) * (int)uVar3 +
           uVar13 * (int)(uVar3 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) ^
           (uint)((ulonglong)lVar4 >> 0x20);
  uVar10 = LZCOUNT((uint)lVar2 ^ (uint)lVar4) + 0x20;
  if (uVar12 != 0) {
    uVar10 = LZCOUNT(uVar12);
  }
LAB_01178cb0:
  if (1 < uVar15) {
    do {
      uVar12 = uVar15 - 1;
      if (abStack_67[uVar15] < uVar10) goto LAB_01178f54;
      uVar17 = local_170[uVar12];
      uVar15 = uVar17 >> 1;
      uVar13 = uVar15 + (uVar26 >> 1);
      if ((param_4 < uVar13) || (((uVar17 | uVar26) & 1) != 0)) {
        puVar9 = (undefined4 *)(param_1 + (uVar14 - uVar13) * 0x20);
        if ((uVar17 & 1) == 0) {
          FUN_01178fb8(puVar9,uVar15,param_3,param_4,LZCOUNT(uVar15 | 1) << 1 ^ 0x3e,0);
        }
        uVar1 = uVar26 >> 1;
        if ((uVar26 & 1) == 0) {
          FUN_01178fb8(puVar9 + uVar15 * 8,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0);
        }
        if (1 < uVar17 && 1 < uVar26) {
          uVar26 = uVar15;
          if (uVar1 < uVar15) {
            uVar26 = uVar1;
          }
          if (uVar26 <= param_4) {
            puVar23 = puVar9 + uVar15 * 8;
            puVar21 = puVar9;
            if (uVar1 < uVar15) {
              puVar21 = puVar23;
            }
            FUN_01bed4e2(param_3,puVar21,uVar26 << 5);
            puVar25 = param_3 + uVar26 * 8;
            puVar21 = param_3;
            if (uVar1 < uVar15) {
              puVar11 = (undefined4 *)(param_1 + -0x20 + uVar14 * 0x20);
              puVar22 = puVar23;
              do {
                puVar23 = puVar22 + -8;
                puVar24 = puVar25 + -8;
                uVar17 = puVar22[-7];
                uVar15 = puVar25[-7];
                uVar26 = uVar17;
                if (uVar15 < uVar17) {
                  uVar26 = uVar15;
                }
                uVar26 = FUN_01bed842(*puVar24,*puVar23,uVar26);
                if (uVar26 == 0) {
                  uVar26 = uVar15 - uVar17;
                }
                puVar25 = puVar23;
                if (uVar26 < 0x80000000) {
                  puVar25 = puVar24;
                }
                uVar16 = puVar25[1];
                uVar18 = puVar25[2];
                uVar20 = puVar25[3];
                *puVar11 = *puVar25;
                puVar11[1] = uVar16;
                puVar11[2] = uVar18;
                puVar11[3] = uVar20;
                uVar16 = puVar25[5];
                uVar18 = puVar25[6];
                uVar20 = puVar25[7];
                puVar11[4] = puVar25[4];
                puVar11[5] = uVar16;
                puVar11[6] = uVar18;
                puVar11[7] = uVar20;
                puVar25 = (undefined4 *)((int)puVar24 + (uVar26 >> 0x1a & 0x20));
                puVar22 = (undefined4 *)((int)puVar23 + (~uVar26 >> 0x1a & 0x20));
              } while ((puVar22 != puVar9) && (puVar11 = puVar11 + -8, puVar25 != param_3));
            }
            else {
              do {
                uVar17 = puVar21[1];
                uVar15 = puVar23[1];
                uVar26 = uVar17;
                if (uVar15 < uVar17) {
                  uVar26 = uVar15;
                }
                uVar26 = FUN_01bed842(*puVar23,*puVar21,uVar26);
                if (uVar26 == 0) {
                  uVar26 = uVar15 - uVar17;
                }
                puVar22 = puVar9 + 8;
                puVar11 = puVar23;
                if (uVar26 < 0x80000000) {
                  puVar11 = puVar21;
                }
                uVar16 = puVar11[1];
                uVar18 = puVar11[2];
                uVar20 = puVar11[3];
                *puVar9 = *puVar11;
                puVar9[1] = uVar16;
                puVar9[2] = uVar18;
                puVar9[3] = uVar20;
                uVar16 = puVar11[5];
                uVar18 = puVar11[6];
                uVar20 = puVar11[7];
                puVar21 = (undefined4 *)((int)puVar21 + (~uVar26 >> 0x1a & 0x20));
                puVar9[4] = puVar11[4];
                puVar9[5] = uVar16;
                puVar9[6] = uVar18;
                puVar9[7] = uVar20;
                if (puVar21 == puVar25) break;
                puVar23 = (undefined4 *)((int)puVar23 + (uVar26 >> 0x1a & 0x20));
                puVar9 = puVar22;
              } while (puVar23 != puVar6);
            }
            FUN_01bed4e2(puVar22,puVar21,(int)puVar25 - (int)puVar21);
          }
        }
        uVar26 = uVar13 * 2 | 1;
      }
      else {
        uVar26 = uVar13 * 2;
      }
      uVar15 = uVar12;
    } while (1 < uVar12);
    uVar15 = 1;
  }
LAB_01178f54:
  abStack_67[uVar15 + 1] = (byte)uVar10;
  local_170[uVar15] = uVar26;
  if (param_2 <= uVar14) {
    if ((uVar26 & 1) == 0) {
      FUN_01178fb8(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
    }
    return;
  }
  uVar15 = uVar15 + 1;
  uVar14 = uVar14 + (local_188 >> 1);
  uVar26 = local_188;
  goto LAB_011789cc;
}

