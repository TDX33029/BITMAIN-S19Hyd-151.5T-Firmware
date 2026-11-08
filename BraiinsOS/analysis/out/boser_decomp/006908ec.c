// FUN_006908ec @ 006908ec size=1752 calls_out=4 calls_in=2
// strings: 

void FUN_006908ec(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

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
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
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
  undefined4 *puVar30;
  bool bVar31;
  ulonglong uVar32;
  uint local_190;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar32 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar32 & 0xffffffff);
  uVar2 = uVar32 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar32 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar32;
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
      iVar16 = param_1 + uVar24 * 0x18;
      local_190 = param_2 - uVar24;
      if (local_190 < uVar4) {
LAB_006909f8:
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
          FUN_006900e4(iVar16,local_190,param_3,param_4,0,0);
          local_190 = local_190 << 1 | 1;
        }
      }
      else {
        if (local_190 < 2) {
          uVar10 = local_190;
        }
        else {
          uVar20 = *(uint *)(iVar16 + 8);
          uVar11 = *(uint *)(iVar16 + 0x20);
          uVar15 = *(uint *)(iVar16 + 0x1c);
          uVar10 = uVar20;
          if (uVar11 < uVar20) {
            uVar10 = uVar11;
          }
          iVar5 = FUN_01bed842(uVar15,*(undefined4 *)(iVar16 + 4),uVar10);
          if (iVar5 == 0) {
            iVar5 = uVar11 - uVar20;
          }
          if (iVar5 < 0) {
            if (local_190 == 2) {
              uVar10 = 2;
              uVar15 = 1;
LAB_00690bc0:
              uVar11 = 0;
              iVar5 = param_1 + -0x18 + uVar24 * 0x18 + uVar10 * 0x18;
              do {
                iVar6 = 0;
                do {
                  uVar12 = *(undefined4 *)(iVar16 + iVar6 * -4);
                  *(undefined4 *)(iVar16 + iVar6 * -4) = *(undefined4 *)(iVar5 + iVar6 * -4);
                  *(undefined4 *)(iVar5 + iVar6 * -4) = uVar12;
                  bVar31 = iVar6 != -5;
                  iVar6 = iVar6 + -1;
                } while (bVar31);
                uVar11 = uVar11 + 1;
                iVar16 = iVar16 + 0x18;
                iVar5 = iVar5 + -0x18;
              } while (uVar11 != uVar15);
            }
            else {
              uVar10 = 2;
              puVar19 = (uint *)(param_1 + 0x38 + uVar24 * 0x18);
              do {
                uVar22 = puVar19[-1];
                uVar25 = *puVar19;
                uVar20 = uVar11;
                if (uVar25 < uVar11) {
                  uVar20 = uVar25;
                }
                uVar15 = FUN_01bed842(uVar22,uVar15,uVar20);
                if (uVar15 == 0) {
                  uVar15 = uVar25 - uVar11;
                }
                if (uVar15 < 0x80000000) goto LAB_00690b94;
                puVar19 = puVar19 + 6;
                uVar10 = uVar10 + 1;
                uVar15 = uVar22;
                uVar11 = uVar25;
              } while (local_190 != uVar10);
LAB_00690b80:
              uVar10 = local_190;
LAB_00690b94:
              if (uVar10 < uVar4) goto LAB_006909f8;
              if (iVar5 < 0) {
                uVar15 = uVar10 >> 1;
                if (uVar15 != 0) goto LAB_00690bc0;
                uVar10 = 1;
              }
            }
          }
          else {
            uVar10 = 2;
            if (local_190 != 2) {
              uVar10 = 2;
              puVar19 = (uint *)(param_1 + 0x38 + uVar24 * 0x18);
              do {
                uVar22 = puVar19[-1];
                uVar25 = *puVar19;
                uVar20 = uVar11;
                if (uVar25 < uVar11) {
                  uVar20 = uVar25;
                }
                iVar6 = FUN_01bed842(uVar22,uVar15,uVar20);
                if (iVar6 == 0) {
                  iVar6 = uVar25 - uVar11;
                }
                if (iVar6 < 0) goto LAB_00690b94;
                puVar19 = puVar19 + 6;
                uVar10 = uVar10 + 1;
                uVar15 = uVar22;
                uVar11 = uVar25;
              } while (local_190 != uVar10);
              goto LAB_00690b80;
            }
          }
        }
        local_190 = uVar10 << 1 | 1;
      }
      uVar15 = uVar24 - (uVar29 >> 1);
      uVar10 = uVar24 + (local_190 >> 1);
      uVar11 = uVar10 + uVar24;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar11;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar15,uVar24),uVar15 + uVar24);
      uVar10 = (uint)CARRY4(uVar10,uVar24) * (int)uVar2 +
               uVar11 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar15 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar10 != 0) {
        uVar15 = LZCOUNT(uVar10);
      }
    }
    if (1 < uVar27) {
      puVar7 = (undefined4 *)(param_1 + uVar24 * 0x18);
      do {
        uVar10 = uVar27 - 1;
        if (abStack_67[uVar27] < uVar15) goto LAB_00690f64;
        uVar11 = local_170[uVar10];
        uVar27 = uVar11 >> 1;
        uVar20 = uVar27 + (uVar29 >> 1);
        if ((param_4 < uVar20) || (((uVar11 | uVar29) & 1) != 0)) {
          puVar8 = (undefined4 *)(param_1 + (uVar24 - uVar20) * 0x18);
          if ((uVar11 & 1) == 0) {
            FUN_006900e4(puVar8,uVar27,param_3,param_4,LZCOUNT(uVar27 | 1) << 1 ^ 0x3e,0);
          }
          uVar22 = uVar29 >> 1;
          if ((uVar29 & 1) == 0) {
            FUN_006900e4(puVar8 + uVar27 * 6,uVar22,param_3,param_4,LZCOUNT(uVar22 | 1) << 1 ^ 0x3e,
                         0);
          }
          if (1 < uVar11 && 1 < uVar29) {
            uVar29 = uVar27;
            if (uVar22 < uVar27) {
              uVar29 = uVar22;
            }
            if (uVar29 <= param_4) {
              puVar26 = puVar8 + uVar27 * 6;
              puVar28 = puVar8;
              if (uVar22 < uVar27) {
                puVar28 = puVar26;
              }
              puVar9 = (undefined4 *)FUN_01bed4e2(param_3,puVar28,uVar29 * 0x18);
              puVar18 = param_3 + uVar29 * 6;
              puVar23 = param_3;
              if (uVar22 < uVar27) {
                puVar26 = (undefined4 *)(param_1 + -0x18 + uVar24 * 0x18);
                do {
                  uVar11 = puVar28[-4];
                  uVar27 = puVar18[-4];
                  uVar29 = uVar11;
                  if (uVar27 < uVar11) {
                    uVar29 = uVar27;
                  }
                  uVar29 = FUN_01bed842(puVar18[-5],puVar28[-5],uVar29);
                  if (uVar29 == 0) {
                    uVar29 = uVar27 - uVar11;
                  }
                  puVar9 = puVar28 + -6;
                  if (uVar29 < 0x80000000) {
                    puVar9 = puVar18 + -6;
                  }
                  uVar12 = puVar9[1];
                  uVar13 = puVar9[2];
                  uVar14 = puVar9[3];
                  uVar17 = puVar9[4];
                  uVar21 = puVar9[5];
                  *puVar26 = *puVar9;
                  puVar26[1] = uVar12;
                  puVar26[2] = uVar13;
                  puVar26[3] = uVar14;
                  puVar26[4] = uVar17;
                  puVar26[5] = uVar21;
                  puVar18 = puVar18 + -6 + (uVar29 >> 0x1f | (uVar29 >> 0x1f) << 1) * 2;
                  uVar29 = uVar29 >> 0x1f ^ 1;
                  puVar28 = puVar28 + -6 + (uVar29 | uVar29 << 1) * 2;
                } while ((puVar28 != puVar8) && (puVar26 = puVar26 + -6, puVar18 != param_3));
LAB_00690f3c:
              }
              else {
                if (uVar29 != 0) {
                  puVar9 = puVar7;
                }
                if (uVar29 != 0 && puVar26 != puVar9) {
                  puVar8 = puVar28;
                  do {
                    uVar27 = puVar23[2];
                    uVar11 = puVar26[2];
                    uVar29 = uVar27;
                    if (uVar11 < uVar27) {
                      uVar29 = uVar11;
                    }
                    puVar9 = (undefined4 *)FUN_01bed842(puVar26[1],puVar23[1],uVar29);
                    if (puVar9 == (undefined4 *)0x0) {
                      puVar9 = (undefined4 *)(uVar11 - uVar27);
                    }
                    puVar30 = puVar26;
                    if (puVar9 < &DAT_80000000) {
                      puVar30 = puVar23;
                    }
                    puVar28 = puVar8 + 6;
                    uVar12 = puVar30[1];
                    uVar13 = puVar30[2];
                    uVar14 = puVar30[3];
                    uVar17 = puVar30[4];
                    uVar21 = puVar30[5];
                    *puVar8 = *puVar30;
                    puVar8[1] = uVar12;
                    puVar8[2] = uVar13;
                    puVar8[3] = uVar14;
                    puVar8[4] = uVar17;
                    puVar8[5] = uVar21;
                    uVar29 = (uint)puVar9 >> 0x1f ^ 1;
                    puVar23 = puVar23 + (uVar29 | uVar29 << 1) * 2;
                    if (puVar23 != puVar18) {
                      puVar26 = puVar26 + ((uint)puVar9 >> 0x1f | ((uint)puVar9 >> 0x1f) << 1) * 2;
                      puVar9 = puVar7;
                    }
                    puVar8 = puVar28;
                  } while (puVar23 != puVar18 && puVar26 != puVar9);
                  goto LAB_00690f3c;
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
        uVar27 = uVar10;
      } while (1 < uVar10);
      uVar27 = 1;
    }
LAB_00690f64:
    abStack_67[uVar27 + 1] = (byte)uVar15;
    local_170[uVar27] = uVar29;
    if (param_2 <= uVar24) {
      if ((uVar29 & 1) == 0) {
        FUN_006900e4(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar27 = uVar27 + 1;
    uVar24 = uVar24 + (local_190 >> 1);
    uVar29 = local_190;
  } while( true );
}

