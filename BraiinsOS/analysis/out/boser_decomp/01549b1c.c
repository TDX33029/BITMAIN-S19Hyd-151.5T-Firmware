// FUN_01549b1c @ 01549b1c size=1492 calls_out=5 calls_in=2
// strings: 

void FUN_01549b1c(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 *puVar23;
  uint uVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  uint uVar27;
  ulonglong uVar28;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar28 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar28 & 0xffffffff);
  uVar5 = uVar28 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar28 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar28;
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
  uVar17 = 0;
  uVar24 = 1;
LAB_01549be8:
  uVar13 = 0;
  local_18c = 1;
  if (uVar27 < param_2) {
    local_18c = param_2 - uVar27;
    puVar20 = (undefined4 *)(param_1 + uVar27 * 0x10);
    if (uVar6 <= local_18c) {
      if (1 < local_18c) {
        iVar7 = FUN_0154a140(puVar20[4],*(undefined1 *)(puVar20 + 5),*puVar20,
                             *(undefined1 *)(puVar20 + 1));
        if (iVar7 == 0) {
          uVar13 = 2;
          if (local_18c != 2) {
            iVar22 = 0;
            do {
              iVar8 = FUN_0154a140(puVar20[iVar22 * 4 + 8],*(undefined1 *)(puVar20 + iVar22 * 4 + 9)
                                   ,puVar20[iVar22 * 4 + 4],
                                   *(undefined1 *)(puVar20 + iVar22 * 4 + 5));
              if (iVar8 != 0) goto LAB_01549d48;
              iVar22 = iVar22 + 1;
            } while ((param_2 - 2) - uVar27 != iVar22);
            goto LAB_01549d40;
          }
          goto LAB_01549dc4;
        }
        if (local_18c != 2) {
          iVar22 = 0;
          do {
            iVar8 = FUN_0154a140(puVar20[iVar22 * 4 + 8],*(undefined1 *)(puVar20 + iVar22 * 4 + 9),
                                 puVar20[iVar22 * 4 + 4],*(undefined1 *)(puVar20 + iVar22 * 4 + 5));
            if (iVar8 == 0) goto LAB_01549d48;
            iVar22 = iVar22 + 1;
          } while ((param_2 - 2) - uVar27 != iVar22);
LAB_01549d40:
          uVar13 = local_18c;
          goto LAB_01549d4c;
        }
        uVar13 = 2;
        uVar9 = 1;
        goto LAB_01549d74;
      }
      uVar13 = local_18c;
      goto LAB_01549dc4;
    }
    goto LAB_01549c18;
  }
  goto LAB_01549e20;
LAB_01549d48:
  uVar13 = iVar22 + 2;
LAB_01549d4c:
  if (uVar13 < uVar6) {
LAB_01549c18:
    if (param_5 == 0) {
      if (uVar6 <= local_18c) {
        local_18c = uVar6;
      }
      local_18c = local_18c << 1;
    }
    else {
      if (0x1f < local_18c) {
        local_18c = 0x20;
      }
      FUN_0153acbc(puVar20,local_18c,param_3,param_4,0,0);
      local_18c = local_18c << 1 | 1;
    }
  }
  else {
    if (iVar7 != 0) {
      uVar9 = uVar13 >> 1;
      if (uVar9 == 0) {
        uVar13 = 1;
      }
      else {
LAB_01549d74:
        uVar10 = 0;
        iVar7 = param_1 + -0x10 + uVar27 * 0x10 + uVar13 * 0x10;
        do {
          iVar22 = 0;
          do {
            uVar16 = puVar20[iVar22];
            puVar20[iVar22] = *(undefined4 *)(iVar7 + iVar22 * 4);
            *(undefined4 *)(iVar7 + iVar22 * 4) = uVar16;
            iVar22 = iVar22 + 1;
          } while (iVar22 != 4);
          uVar10 = uVar10 + 1;
          puVar20 = puVar20 + 4;
          iVar7 = iVar7 + -0x10;
        } while (uVar10 != uVar9);
      }
    }
LAB_01549dc4:
    local_18c = uVar13 << 1 | 1;
  }
  uVar9 = uVar27 - (uVar24 >> 1);
  uVar10 = uVar9 + uVar27;
  lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar10;
  uVar15 = (local_18c >> 1) + uVar27 * 2;
  lVar3 = (ulonglong)uVar15 * (uVar5 & 0xffffffff);
  uVar13 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
  uVar9 = iVar4 * uVar15 + (int)((ulonglong)lVar3 >> 0x20) ^
          (uint)CARRY4(uVar9,uVar27) * (int)uVar5 + uVar10 * iVar4 + (int)((ulonglong)lVar2 >> 0x20)
  ;
  if (uVar9 != 0) {
    uVar13 = LZCOUNT(uVar9);
  }
LAB_01549e20:
  if (1 < uVar17) {
    puVar20 = (undefined4 *)(param_1 + uVar27 * 0x10);
    do {
      uVar9 = uVar17 - 1;
      if (abStack_67[uVar17] < uVar13) goto LAB_0154a090;
      uVar15 = local_170[uVar9];
      uVar17 = uVar15 >> 1;
      uVar10 = uVar17 + (uVar24 >> 1);
      if ((param_4 < uVar10) || (((uVar15 | uVar24) & 1) != 0)) {
        puVar11 = (undefined4 *)(param_1 + (uVar27 - uVar10) * 0x10);
        if ((uVar15 & 1) == 0) {
          FUN_0153acbc(puVar11,uVar17,param_3,param_4,LZCOUNT(uVar17 | 1) << 1 ^ 0x3e,0);
        }
        uVar1 = uVar24 >> 1;
        if ((uVar24 & 1) == 0) {
          FUN_0153acbc(puVar11 + uVar17 * 4,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0);
        }
        if (1 < uVar15 && 1 < uVar24) {
          uVar24 = uVar17;
          if (uVar1 < uVar17) {
            uVar24 = uVar1;
          }
          if (uVar24 <= param_4) {
            puVar23 = puVar11 + uVar17 * 4;
            puVar18 = puVar11;
            if (uVar1 < uVar17) {
              puVar18 = puVar23;
            }
            puVar12 = (undefined4 *)FUN_01bed4e2(param_3,puVar18,uVar24 << 4);
            puVar26 = param_3 + uVar24 * 4;
            puVar25 = param_3;
            if (uVar1 < uVar17) {
              puVar18 = (undefined4 *)(param_1 + -0x10 + uVar27 * 0x10);
              do {
                puVar14 = puVar23 + -4;
                puVar12 = puVar26 + -4;
                uVar24 = FUN_015766f8(*puVar12,*(undefined1 *)(puVar26 + -3),*puVar14,
                                      *(undefined1 *)(puVar23 + -3));
                puVar26 = puVar12 + uVar24 * 4;
                if (uVar24 != 0) {
                  puVar12 = puVar14;
                }
                uVar16 = puVar12[1];
                uVar19 = puVar12[2];
                uVar21 = puVar12[3];
                puVar23 = puVar14 + (uVar24 ^ 1) * 4;
                *puVar18 = *puVar12;
                puVar18[1] = uVar16;
                puVar18[2] = uVar19;
                puVar18[3] = uVar21;
              } while ((puVar23 != puVar11) && (puVar18 = puVar18 + -4, puVar26 != param_3));
              puVar18 = puVar23;
            }
            else {
              if (uVar24 != 0) {
                puVar12 = puVar20;
              }
              if (uVar24 != 0 && puVar23 != puVar12) {
                puVar11 = puVar18;
                do {
                  puVar12 = (undefined4 *)
                            FUN_015766f8(*puVar23,*(undefined1 *)(puVar23 + 1),*puVar25,
                                         *(undefined1 *)(puVar25 + 1));
                  puVar14 = puVar25;
                  if (puVar12 != (undefined4 *)0x0) {
                    puVar14 = puVar23;
                  }
                  uVar16 = puVar14[1];
                  uVar19 = puVar14[2];
                  uVar21 = puVar14[3];
                  puVar18 = puVar11 + 4;
                  puVar25 = puVar25 + ((uint)puVar12 ^ 1) * 4;
                  *puVar11 = *puVar14;
                  puVar11[1] = uVar16;
                  puVar11[2] = uVar19;
                  puVar11[3] = uVar21;
                  if (puVar25 != puVar26) {
                    puVar23 = puVar23 + (int)puVar12 * 4;
                    puVar12 = puVar20;
                  }
                  puVar11 = puVar18;
                } while (puVar25 != puVar26 && puVar23 != puVar12);
              }
            }
            FUN_01bed4e2(puVar18,puVar25,(int)puVar26 - (int)puVar25);
          }
        }
        uVar24 = uVar10 * 2 | 1;
      }
      else {
        uVar24 = uVar10 * 2;
      }
      uVar17 = uVar9;
    } while (1 < uVar9);
    uVar17 = 1;
  }
LAB_0154a090:
  abStack_67[uVar17 + 1] = (byte)uVar13;
  local_170[uVar17] = uVar24;
  if (param_2 <= uVar27) {
    if ((uVar24 & 1) == 0) {
      FUN_0153acbc(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
    }
    return;
  }
  uVar17 = uVar17 + 1;
  uVar27 = uVar27 + (local_18c >> 1);
  uVar24 = local_18c;
  goto LAB_01549be8;
}

