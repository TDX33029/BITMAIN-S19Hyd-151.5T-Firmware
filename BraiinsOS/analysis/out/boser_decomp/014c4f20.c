// FUN_014c4f20 @ 014c4f20 size=1688 calls_out=4 calls_in=2
// strings: 

void FUN_014c4f20(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

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
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  uint uVar25;
  undefined4 *puVar26;
  bool bVar27;
  ulonglong uVar28;
  uint local_190;
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
    iVar20 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar20) + (param_2 >> iVar20) >> 1;
  }
  uVar17 = 0;
  uVar25 = 0;
  uVar19 = 1;
  do {
    uVar15 = 0;
    local_190 = 1;
    if (uVar17 < param_2) {
      local_190 = param_2 - uVar17;
      iVar20 = param_1 + uVar17 * 0xc;
      if (local_190 < uVar6) {
LAB_014c5028:
        if (param_5 == 0) {
          if (uVar6 <= local_190) {
            local_190 = uVar6;
          }
          local_190 = local_190 << 1;
        }
        else {
          if (0x1f < local_190) {
            local_190 = 0x20;
          }
          FUN_014c5ce8(iVar20,local_190,param_3,param_4,0,0);
          local_190 = local_190 << 1 | 1;
        }
      }
      else {
        if (local_190 < 2) {
          uVar15 = local_190;
        }
        else {
          uVar10 = *(uint *)(iVar20 + 8);
          uVar9 = *(uint *)(iVar20 + 0x14);
          uVar15 = uVar10;
          if (uVar9 < uVar10) {
            uVar15 = uVar9;
          }
          iVar7 = FUN_01bed842(*(undefined4 *)(iVar20 + 0x10),*(undefined4 *)(iVar20 + 4),uVar15);
          if (iVar7 == 0) {
            iVar7 = uVar9 - uVar10;
          }
          if (iVar7 < 0) {
            if (local_190 != 2) {
              uVar15 = 2;
              puVar12 = (undefined4 *)(param_1 + 0x10 + uVar17 * 0xc);
              do {
                uVar10 = puVar12[4];
                uVar21 = *puVar12;
                uVar11 = puVar12[1];
                puVar12 = puVar12 + 3;
                uVar9 = uVar11;
                if (uVar10 < uVar11) {
                  uVar9 = uVar10;
                }
                uVar9 = FUN_01bed842(*puVar12,uVar21,uVar9);
                if (uVar9 == 0) {
                  uVar9 = uVar10 - uVar11;
                }
                if (uVar9 < 0x80000000) goto LAB_014c518c;
                uVar15 = uVar15 + 1;
              } while (local_190 != uVar15);
              goto LAB_014c5188;
            }
            uVar15 = 2;
            uVar9 = 1;
LAB_014c51b8:
            uVar10 = 0;
            iVar7 = param_1 + -0xc + uVar17 * 0xc + uVar15 * 0xc;
            do {
              iVar8 = 0;
              do {
                uVar21 = *(undefined4 *)(iVar20 + iVar8 * -4);
                *(undefined4 *)(iVar20 + iVar8 * -4) = *(undefined4 *)(iVar7 + iVar8 * -4);
                *(undefined4 *)(iVar7 + iVar8 * -4) = uVar21;
                bVar27 = iVar8 != -2;
                iVar8 = iVar8 + -1;
              } while (bVar27);
              uVar10 = uVar10 + 1;
              iVar20 = iVar20 + 0xc;
              iVar7 = iVar7 + -0xc;
            } while (uVar10 != uVar9);
          }
          else {
            uVar15 = 2;
            if (local_190 != 2) {
              puVar12 = (undefined4 *)(param_1 + 0x10 + uVar17 * 0xc);
              do {
                uVar10 = puVar12[4];
                uVar21 = *puVar12;
                uVar11 = puVar12[1];
                puVar12 = puVar12 + 3;
                uVar9 = uVar11;
                if (uVar10 < uVar11) {
                  uVar9 = uVar10;
                }
                iVar8 = FUN_01bed842(*puVar12,uVar21,uVar9);
                if (iVar8 == 0) {
                  iVar8 = uVar10 - uVar11;
                }
                if (iVar8 < 0) goto LAB_014c518c;
                uVar15 = uVar15 + 1;
              } while (local_190 != uVar15);
LAB_014c5188:
              uVar15 = local_190;
LAB_014c518c:
              if (uVar15 < uVar6) goto LAB_014c5028;
              if (iVar7 < 0) {
                uVar9 = uVar15 >> 1;
                if (uVar9 != 0) goto LAB_014c51b8;
                uVar15 = 1;
              }
            }
          }
        }
        local_190 = uVar15 << 1 | 1;
      }
      uVar9 = uVar17 - (uVar19 >> 1);
      uVar10 = uVar9 + uVar17;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar10;
      uVar11 = (local_190 >> 1) + uVar17 * 2;
      lVar3 = (ulonglong)uVar11 * (uVar5 & 0xffffffff);
      uVar15 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar9 = iVar4 * uVar11 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar9,uVar17) * (int)uVar5 +
              uVar10 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar9 != 0) {
        uVar15 = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar25) {
      puVar12 = (undefined4 *)(param_1 + uVar17 * 0xc);
      do {
        uVar9 = uVar25 - 1;
        if (abStack_67[uVar25] < uVar15) goto LAB_014c5554;
        uVar10 = local_170[uVar9];
        uVar25 = uVar10 >> 1;
        uVar11 = uVar25 + (uVar19 >> 1);
        if ((param_4 < uVar11) || (((uVar10 | uVar19) & 1) != 0)) {
          puVar13 = (undefined4 *)(param_1 + (uVar17 - uVar11) * 0xc);
          if ((uVar10 & 1) == 0) {
            FUN_014c5ce8(puVar13,uVar25,param_3,param_4,LZCOUNT(uVar25 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar19 >> 1;
          if ((uVar19 & 1) == 0) {
            FUN_014c5ce8(puVar13 + uVar25 * 3,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0
                        );
          }
          if (1 < uVar10 && 1 < uVar19) {
            uVar19 = uVar25;
            if (uVar1 < uVar25) {
              uVar19 = uVar1;
            }
            if (uVar19 <= param_4) {
              puVar24 = puVar13 + uVar25 * 3;
              puVar22 = puVar13;
              if (uVar1 < uVar25) {
                puVar22 = puVar24;
              }
              puVar14 = (undefined4 *)FUN_01bed4e2(param_3,puVar22,uVar19 * 0xc);
              puVar26 = param_3 + uVar19 * 3;
              puVar18 = param_3;
              if (uVar1 < uVar25) {
                puVar24 = (undefined4 *)(param_1 + -0xc + uVar17 * 0xc);
                do {
                  uVar10 = puVar22[-1];
                  uVar25 = puVar26[-1];
                  uVar19 = uVar10;
                  if (uVar25 < uVar10) {
                    uVar19 = uVar25;
                  }
                  uVar19 = FUN_01bed842(puVar26[-2],puVar22[-2],uVar19);
                  if (uVar19 == 0) {
                    uVar19 = uVar25 - uVar10;
                  }
                  puVar14 = puVar22 + -3;
                  if (uVar19 < 0x80000000) {
                    puVar14 = puVar26 + -3;
                  }
                  uVar21 = puVar14[1];
                  uVar23 = puVar14[2];
                  puVar26 = puVar26 + -3 + (uVar19 >> 0x1f | (uVar19 >> 0x1f) << 1);
                  uVar19 = uVar19 >> 0x1f ^ 1;
                  *puVar24 = *puVar14;
                  puVar24[1] = uVar21;
                  puVar24[2] = uVar23;
                  puVar22 = puVar22 + -3 + (uVar19 | uVar19 << 1);
                } while ((puVar22 != puVar13) && (puVar24 = puVar24 + -3, puVar26 != param_3));
              }
              else {
                if (uVar19 != 0) {
                  puVar14 = puVar12;
                }
                if (uVar19 != 0 && puVar24 != puVar14) {
                  puVar13 = puVar22;
                  do {
                    uVar25 = puVar18[2];
                    uVar10 = puVar24[2];
                    uVar19 = uVar25;
                    if (uVar10 < uVar25) {
                      uVar19 = uVar10;
                    }
                    puVar14 = (undefined4 *)FUN_01bed842(puVar24[1],puVar18[1],uVar19);
                    if (puVar14 == (undefined4 *)0x0) {
                      puVar14 = (undefined4 *)(uVar10 - uVar25);
                    }
                    puVar22 = puVar13 + 3;
                    puVar16 = puVar24;
                    if (puVar14 < &DAT_80000000) {
                      puVar16 = puVar18;
                    }
                    uVar21 = puVar16[1];
                    uVar23 = puVar16[2];
                    uVar19 = (uint)puVar14 >> 0x1f ^ 1;
                    *puVar13 = *puVar16;
                    puVar13[1] = uVar21;
                    puVar13[2] = uVar23;
                    puVar18 = puVar18 + (uVar19 | uVar19 << 1);
                    if (puVar18 != puVar26) {
                      puVar24 = puVar24 + ((uint)puVar14 >> 0x1f | ((uint)puVar14 >> 0x1f) << 1);
                      puVar14 = puVar12;
                    }
                    puVar13 = puVar22;
                  } while (puVar18 != puVar26 && puVar24 != puVar14);
                }
              }
              FUN_01bed4e2(puVar22,puVar18,(int)puVar26 - (int)puVar18);
            }
          }
          uVar19 = uVar11 * 2 | 1;
        }
        else {
          uVar19 = uVar11 * 2;
        }
        uVar25 = uVar9;
      } while (1 < uVar9);
      uVar25 = 1;
    }
LAB_014c5554:
    abStack_67[uVar25 + 1] = (byte)uVar15;
    local_170[uVar25] = uVar19;
    if (param_2 <= uVar17) {
      if ((uVar19 & 1) == 0) {
        FUN_014c5ce8(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar25 = uVar25 + 1;
    uVar17 = uVar17 + (local_190 >> 1);
    uVar19 = local_190;
  } while( true );
}

