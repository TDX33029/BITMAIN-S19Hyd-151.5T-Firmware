// FUN_00762224 @ 00762224 size=1668 calls_out=4 calls_in=2
// strings: 

void FUN_00762224(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  uint uVar25;
  bool bVar26;
  ulonglong uVar27;
  uint local_190;
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
    iVar15 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar15) + (param_2 >> iVar15) >> 1;
  }
  uVar14 = 0;
  uVar22 = 0;
  uVar25 = 1;
  do {
    uVar20 = 0;
    local_190 = 1;
    if (uVar14 < param_2) {
      iVar15 = param_1 + uVar14 * 0xc;
      local_190 = param_2 - uVar14;
      if (local_190 < uVar5) {
LAB_0076232c:
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
          FUN_007491c8(iVar15,local_190,param_3,param_4,0,0);
          local_190 = local_190 << 1 | 1;
        }
      }
      else {
        if (local_190 < 2) {
          uVar20 = local_190;
        }
        else {
          uVar12 = *(uint *)(iVar15 + 8);
          uVar16 = *(uint *)(iVar15 + 0x14);
          uVar20 = uVar12;
          if (uVar16 < uVar12) {
            uVar20 = uVar16;
          }
          iVar6 = FUN_01bed842(*(undefined4 *)(iVar15 + 0x10),*(undefined4 *)(iVar15 + 4),uVar20);
          if (iVar6 == 0) {
            iVar6 = uVar16 - uVar12;
          }
          if (iVar6 < 0) {
            if (local_190 != 2) {
              uVar20 = 2;
              puVar8 = (undefined4 *)(param_1 + 0x10 + uVar14 * 0xc);
              do {
                uVar16 = puVar8[4];
                uVar18 = *puVar8;
                uVar17 = puVar8[1];
                puVar8 = puVar8 + 3;
                uVar12 = uVar17;
                if (uVar16 < uVar17) {
                  uVar12 = uVar16;
                }
                uVar12 = FUN_01bed842(*puVar8,uVar18,uVar12);
                if (uVar12 == 0) {
                  uVar12 = uVar16 - uVar17;
                }
                if (uVar12 < 0x80000000) goto LAB_00762478;
                uVar20 = uVar20 + 1;
              } while (local_190 != uVar20);
              goto LAB_00762474;
            }
            uVar20 = 2;
            uVar12 = 1;
LAB_007624a0:
            uVar16 = 0;
            iVar6 = param_1 + -0xc + uVar14 * 0xc + uVar20 * 0xc;
            do {
              iVar7 = 0;
              do {
                uVar18 = *(undefined4 *)(iVar15 + iVar7 * -4);
                *(undefined4 *)(iVar15 + iVar7 * -4) = *(undefined4 *)(iVar6 + iVar7 * -4);
                *(undefined4 *)(iVar6 + iVar7 * -4) = uVar18;
                bVar26 = iVar7 != -2;
                iVar7 = iVar7 + -1;
              } while (bVar26);
              uVar16 = uVar16 + 1;
              iVar15 = iVar15 + 0xc;
              iVar6 = iVar6 + -0xc;
            } while (uVar16 != uVar12);
          }
          else {
            uVar20 = 2;
            if (local_190 != 2) {
              puVar8 = (undefined4 *)(param_1 + 0x10 + uVar14 * 0xc);
              do {
                uVar16 = puVar8[4];
                uVar18 = *puVar8;
                uVar17 = puVar8[1];
                puVar8 = puVar8 + 3;
                uVar12 = uVar17;
                if (uVar16 < uVar17) {
                  uVar12 = uVar16;
                }
                iVar7 = FUN_01bed842(*puVar8,uVar18,uVar12);
                if (iVar7 == 0) {
                  iVar7 = uVar16 - uVar17;
                }
                if (iVar7 < 0) goto LAB_00762478;
                uVar20 = uVar20 + 1;
              } while (local_190 != uVar20);
LAB_00762474:
              uVar20 = local_190;
LAB_00762478:
              if (uVar20 < uVar5) goto LAB_0076232c;
              if (iVar6 < 0) {
                uVar12 = uVar20 >> 1;
                if (uVar12 != 0) goto LAB_007624a0;
                uVar20 = 1;
              }
            }
          }
        }
        local_190 = uVar20 << 1 | 1;
      }
      uVar20 = uVar14 - (uVar25 >> 1);
      uVar12 = uVar14 + (local_190 >> 1);
      uVar16 = uVar12 + uVar14;
      lVar2 = (uVar3 & 0xffffffff) * (ulonglong)uVar16;
      lVar4 = uVar3 * CONCAT14(CARRY4(uVar20,uVar14),uVar20 + uVar14);
      uVar12 = (uint)CARRY4(uVar12,uVar14) * (int)uVar3 +
               uVar16 * (int)(uVar3 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) ^
               (uint)((ulonglong)lVar4 >> 0x20);
      uVar20 = LZCOUNT((uint)lVar2 ^ (uint)lVar4) + 0x20;
      if (uVar12 != 0) {
        uVar20 = LZCOUNT(uVar12);
      }
    }
    if (1 < uVar22) {
      puVar8 = (undefined4 *)(param_1 + uVar14 * 0xc);
      do {
        uVar12 = uVar22 - 1;
        if (abStack_67[uVar22] < uVar20) goto LAB_00762840;
        uVar17 = local_170[uVar12];
        uVar22 = uVar17 >> 1;
        uVar16 = uVar22 + (uVar25 >> 1);
        if ((param_4 < uVar16) || (((uVar17 | uVar25) & 1) != 0)) {
          puVar9 = (undefined4 *)(param_1 + (uVar14 - uVar16) * 0xc);
          if ((uVar17 & 1) == 0) {
            FUN_007491c8(puVar9,uVar22,param_3,param_4,LZCOUNT(uVar22 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar25 >> 1;
          if ((uVar25 & 1) == 0) {
            FUN_007491c8(puVar9 + uVar22 * 3,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0)
            ;
          }
          if (1 < uVar17 && 1 < uVar25) {
            uVar25 = uVar22;
            if (uVar1 < uVar22) {
              uVar25 = uVar1;
            }
            if (uVar25 <= param_4) {
              puVar23 = puVar9 + uVar22 * 3;
              puVar19 = puVar9;
              if (uVar1 < uVar22) {
                puVar19 = puVar23;
              }
              puVar10 = (undefined4 *)FUN_01bed4e2(param_3,puVar19,uVar25 * 0xc);
              puVar24 = param_3 + uVar25 * 3;
              puVar13 = param_3;
              if (uVar1 < uVar22) {
                puVar23 = (undefined4 *)(param_1 + -0xc + uVar14 * 0xc);
                do {
                  uVar17 = puVar19[-1];
                  uVar22 = puVar24[-1];
                  uVar25 = uVar17;
                  if (uVar22 < uVar17) {
                    uVar25 = uVar22;
                  }
                  uVar25 = FUN_01bed842(puVar24[-2],puVar19[-2],uVar25);
                  if (uVar25 == 0) {
                    uVar25 = uVar22 - uVar17;
                  }
                  puVar10 = puVar19 + -3;
                  if (uVar25 < 0x80000000) {
                    puVar10 = puVar24 + -3;
                  }
                  uVar18 = puVar10[1];
                  uVar21 = puVar10[2];
                  puVar24 = puVar24 + -3 + (uVar25 >> 0x1f | (uVar25 >> 0x1f) << 1);
                  uVar25 = uVar25 >> 0x1f ^ 1;
                  *puVar23 = *puVar10;
                  puVar23[1] = uVar18;
                  puVar23[2] = uVar21;
                  puVar19 = puVar19 + -3 + (uVar25 | uVar25 << 1);
                } while ((puVar19 != puVar9) && (puVar23 = puVar23 + -3, puVar24 != param_3));
              }
              else {
                if (uVar25 != 0) {
                  puVar10 = puVar8;
                }
                if (uVar25 != 0 && puVar23 != puVar10) {
                  puVar9 = puVar19;
                  do {
                    uVar22 = puVar13[2];
                    uVar17 = puVar23[2];
                    uVar25 = uVar22;
                    if (uVar17 < uVar22) {
                      uVar25 = uVar17;
                    }
                    puVar10 = (undefined4 *)FUN_01bed842(puVar23[1],puVar13[1],uVar25);
                    if (puVar10 == (undefined4 *)0x0) {
                      puVar10 = (undefined4 *)(uVar17 - uVar22);
                    }
                    puVar19 = puVar9 + 3;
                    puVar11 = puVar23;
                    if (puVar10 < &DAT_80000000) {
                      puVar11 = puVar13;
                    }
                    uVar18 = puVar11[1];
                    uVar21 = puVar11[2];
                    uVar25 = (uint)puVar10 >> 0x1f ^ 1;
                    *puVar9 = *puVar11;
                    puVar9[1] = uVar18;
                    puVar9[2] = uVar21;
                    puVar13 = puVar13 + (uVar25 | uVar25 << 1);
                    if (puVar13 != puVar24) {
                      puVar23 = puVar23 + ((uint)puVar10 >> 0x1f | ((uint)puVar10 >> 0x1f) << 1);
                      puVar10 = puVar8;
                    }
                    puVar9 = puVar19;
                  } while (puVar13 != puVar24 && puVar23 != puVar10);
                }
              }
              FUN_01bed4e2(puVar19,puVar13,(int)puVar24 - (int)puVar13);
            }
          }
          uVar25 = uVar16 * 2 | 1;
        }
        else {
          uVar25 = uVar16 * 2;
        }
        uVar22 = uVar12;
      } while (1 < uVar12);
      uVar22 = 1;
    }
LAB_00762840:
    abStack_67[uVar22 + 1] = (byte)uVar20;
    local_170[uVar22] = uVar25;
    if (param_2 <= uVar14) {
      if ((uVar25 & 1) == 0) {
        FUN_007491c8(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar22 = uVar22 + 1;
    uVar14 = uVar14 + (local_190 >> 1);
    uVar25 = local_190;
  } while( true );
}

