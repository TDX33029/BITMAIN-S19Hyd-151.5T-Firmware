// FUN_0117c78c @ 0117c78c size=2008 calls_out=5 calls_in=2
// strings: 

void FUN_0117c78c(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined4 *puVar23;
  bool bVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint local_190;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar25 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar25 & 0xffffffff);
  uVar2 = uVar25 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar25 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar25;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar15 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar15) + (param_2 >> iVar15) >> 1;
  }
  uVar14 = 0;
  uVar20 = 0;
  uVar19 = 1;
  do {
    uVar12 = 0;
    local_190 = 1;
    if (uVar14 < param_2) {
      local_190 = param_2 - uVar14;
      iVar15 = param_1 + uVar14 * 0xc;
      if (local_190 < uVar4) {
LAB_0117c884:
        if (param_5 != 0) {
          if (0x1f < local_190) {
            local_190 = 0x20;
          }
          FUN_0117cf94(iVar15,local_190,param_3,param_4,0,0);
          uVar12 = local_190;
          goto LAB_0117cb68;
        }
        if (uVar4 <= local_190) {
          local_190 = uVar4;
        }
        local_190 = local_190 << 1;
      }
      else {
        uVar12 = local_190;
        if (1 < local_190) {
          uVar26 = FUN_019b00d0(*(undefined4 *)(iVar15 + 4),*(undefined4 *)(iVar15 + 8));
          uVar12 = (uint)((ulonglong)uVar26 >> 0x20);
          uVar27 = FUN_019b00d0(*(undefined4 *)(iVar15 + 0x10),*(undefined4 *)(iVar15 + 0x14));
          uVar9 = (uint)((ulonglong)uVar27 >> 0x20);
          iVar22 = (int)uVar27;
          if ((int)uVar26 == 0) {
            if (iVar22 == 0) goto LAB_0117c920;
LAB_0117ca00:
            uVar12 = 2;
            bVar24 = true;
            if (local_190 == 2) goto LAB_0117ca10;
            uVar13 = *(undefined4 *)(iVar15 + 0x10);
            uVar16 = *(undefined4 *)(iVar15 + 0x14);
            puVar21 = (undefined4 *)(param_1 + 0x20 + uVar14 * 0xc);
            do {
              uVar26 = FUN_019b00d0(uVar13,uVar16);
              uVar9 = (uint)((ulonglong)uVar26 >> 0x20);
              uVar13 = puVar21[-1];
              uVar16 = *puVar21;
              uVar27 = FUN_019b00d0();
              uVar10 = (uint)((ulonglong)uVar27 >> 0x20);
              iVar22 = (int)uVar27;
              if ((int)uVar26 == 0) {
                if (iVar22 == 0) goto LAB_0117cae8;
              }
              else {
                if (iVar22 == 0) goto LAB_0117cae8;
                uVar17 = uVar10;
                if (uVar9 < uVar10) {
                  uVar17 = uVar9;
                }
                iVar22 = FUN_01bed842((int)uVar26,iVar22,uVar17);
                if (iVar22 == 0) {
                  iVar22 = uVar9 - uVar10;
                }
                if (-1 < iVar22) goto LAB_0117cae8;
              }
              uVar12 = uVar12 + 1;
              puVar21 = puVar21 + 3;
            } while (local_190 != uVar12);
            uVar12 = local_190;
LAB_0117cae8:
            bVar24 = true;
          }
          else {
            if (iVar22 != 0) {
              uVar10 = uVar9;
              if (uVar12 < uVar9) {
                uVar10 = uVar12;
              }
              iVar22 = FUN_01bed842((int)uVar26,iVar22,uVar10);
              if (iVar22 == 0) {
                iVar22 = uVar12 - uVar9;
              }
              if (iVar22 < 0) goto LAB_0117ca00;
            }
LAB_0117c920:
            uVar12 = 2;
            bVar24 = false;
            if (local_190 == 2) {
LAB_0117ca10:
              uVar12 = 2;
            }
            else {
              uVar13 = *(undefined4 *)(iVar15 + 0x10);
              uVar16 = *(undefined4 *)(iVar15 + 0x14);
              puVar21 = (undefined4 *)(param_1 + 0x20 + uVar14 * 0xc);
              do {
                uVar26 = FUN_019b00d0(uVar13,uVar16);
                uVar9 = (uint)((ulonglong)uVar26 >> 0x20);
                uVar13 = puVar21[-1];
                uVar16 = *puVar21;
                uVar27 = FUN_019b00d0();
                uVar10 = (uint)((ulonglong)uVar27 >> 0x20);
                iVar22 = (int)uVar27;
                if ((int)uVar26 == 0) {
                  if (iVar22 != 0) goto LAB_0117cad4;
                }
                else if (iVar22 != 0) {
                  uVar17 = uVar10;
                  if (uVar9 < uVar10) {
                    uVar17 = uVar9;
                  }
                  iVar22 = FUN_01bed842((int)uVar26,iVar22,uVar17);
                  if (iVar22 == 0) {
                    iVar22 = uVar9 - uVar10;
                  }
                  if (iVar22 < 0) goto LAB_0117cad4;
                }
                puVar21 = puVar21 + 3;
                uVar12 = uVar12 + 1;
              } while (local_190 != uVar12);
              uVar12 = local_190;
LAB_0117cad4:
              bVar24 = false;
            }
          }
          if (uVar12 < uVar4) goto LAB_0117c884;
          bVar24 = !bVar24;
          uVar9 = uVar4;
          if (!bVar24) {
            uVar9 = uVar12 >> 1;
            bVar24 = uVar9 == 0;
          }
          if (!bVar24) {
            iVar22 = param_1 + -0xc + uVar12 * 0xc + uVar14 * 0xc;
            uVar10 = 0;
            do {
              iVar6 = 0;
              do {
                uVar13 = *(undefined4 *)(iVar15 + iVar6 * -4);
                *(undefined4 *)(iVar15 + iVar6 * -4) = *(undefined4 *)(iVar22 + iVar6 * -4);
                *(undefined4 *)(iVar22 + iVar6 * -4) = uVar13;
                bVar24 = iVar6 != -2;
                iVar6 = iVar6 + -1;
              } while (bVar24);
              uVar10 = uVar10 + 1;
              iVar15 = iVar15 + 0xc;
              iVar22 = iVar22 + -0xc;
            } while (uVar10 != uVar9);
          }
        }
LAB_0117cb68:
        local_190 = uVar12 << 1 | 1;
      }
      uVar12 = uVar14 - (uVar19 >> 1);
      uVar9 = uVar14 + (local_190 >> 1);
      uVar10 = uVar9 + uVar14;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar10;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar12,uVar14),uVar12 + uVar14);
      uVar9 = (uint)CARRY4(uVar9,uVar14) * (int)uVar2 +
              uVar10 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
              (uint)((ulonglong)lVar3 >> 0x20);
      uVar12 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar9 != 0) {
        uVar12 = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar20) {
      do {
        uVar9 = uVar20 - 1;
        if (abStack_67[uVar20] < uVar12) goto LAB_0117cf04;
        uVar10 = local_170[uVar9];
        uVar20 = uVar10 >> 1;
        uVar17 = uVar20 + (uVar19 >> 1);
        if ((param_4 < uVar17) || (((uVar10 | uVar19) & 1) != 0)) {
          puVar21 = (undefined4 *)(param_1 + (uVar14 - uVar17) * 0xc);
          if ((uVar10 & 1) == 0) {
            FUN_0117cf94(puVar21,uVar20,param_3,param_4,LZCOUNT(uVar20 | 1) << 1 ^ 0x3e,0);
          }
          uVar11 = uVar19 >> 1;
          if ((uVar19 & 1) == 0) {
            FUN_0117cf94(puVar21 + uVar20 * 3,uVar11,param_3,param_4,LZCOUNT(uVar11 | 1) << 1 ^ 0x3e
                         ,0);
          }
          if (1 < uVar10 && 1 < uVar19) {
            uVar19 = uVar20;
            if (uVar11 < uVar20) {
              uVar19 = uVar11;
            }
            if (uVar19 <= param_4) {
              puVar18 = puVar21 + uVar20 * 3;
              puVar8 = puVar21;
              if (uVar11 < uVar20) {
                puVar8 = puVar18;
              }
              FUN_01bed4e2(param_3,puVar8,uVar19 * 0xc);
              puVar23 = param_3 + uVar19 * 3;
              puVar8 = param_3;
              if (uVar11 < uVar20) {
                puVar7 = (undefined4 *)(param_1 + -0xc + uVar14 * 0xc);
                do {
                  uVar26 = FUN_019b00d0(puVar18[-2],puVar18[-1]);
                  uVar19 = (uint)((ulonglong)uVar26 >> 0x20);
                  uVar27 = FUN_019b00d0(puVar23[-2],puVar23[-1]);
                  uVar20 = (uint)((ulonglong)uVar27 >> 0x20);
                  iVar15 = (int)uVar27;
                  puVar23 = puVar23 + -3;
                  puVar5 = puVar23;
                  if ((int)uVar26 == 0) {
                    if (iVar15 == 0) goto LAB_0117cdd0;
LAB_0117cdc0:
                    uVar10 = 1;
                    puVar5 = puVar18 + -3;
                  }
                  else {
                    uVar10 = 0;
                    if (iVar15 == 0) {
LAB_0117cdd0:
                      uVar10 = 0;
                    }
                    else {
                      uVar11 = uVar20;
                      if (uVar19 < uVar20) {
                        uVar11 = uVar19;
                      }
                      iVar15 = FUN_01bed842((int)uVar26,iVar15,uVar11);
                      if (iVar15 == 0) {
                        iVar15 = uVar19 - uVar20;
                      }
                      if (iVar15 < 0) goto LAB_0117cdc0;
                    }
                  }
                  uVar13 = puVar5[1];
                  uVar16 = puVar5[2];
                  puVar23 = puVar23 + (uVar10 | uVar10 << 1);
                  *puVar7 = *puVar5;
                  puVar7[1] = uVar13;
                  puVar7[2] = uVar16;
                  puVar18 = puVar18 + -3 + (uVar10 ^ 1 | (uVar10 ^ 1) << 1);
                } while ((puVar18 != puVar21) && (puVar7 = puVar7 + -3, puVar23 != param_3));
                puVar5 = puVar18;
              }
              else {
                do {
                  uVar26 = FUN_019b00d0(puVar8[1],puVar8[2]);
                  uVar19 = (uint)((ulonglong)uVar26 >> 0x20);
                  uVar27 = FUN_019b00d0(puVar18[1],puVar18[2]);
                  uVar20 = (uint)((ulonglong)uVar27 >> 0x20);
                  iVar15 = (int)uVar27;
                  puVar7 = puVar8;
                  if ((int)uVar26 == 0) {
                    if (iVar15 == 0) goto LAB_0117cea8;
LAB_0117ce90:
                    iVar15 = 1;
                    iVar22 = 0;
                    puVar7 = puVar18;
                  }
                  else {
                    iVar22 = 1;
                    if (iVar15 == 0) {
LAB_0117cea8:
                      iVar15 = 0;
                      iVar22 = 1;
                    }
                    else {
                      uVar10 = uVar20;
                      if (uVar19 < uVar20) {
                        uVar10 = uVar19;
                      }
                      iVar6 = FUN_01bed842((int)uVar26,iVar15,uVar10);
                      iVar15 = 0;
                      if (iVar6 == 0) {
                        iVar6 = uVar19 - uVar20;
                      }
                      if (iVar6 < 0) goto LAB_0117ce90;
                    }
                  }
                  uVar13 = puVar7[1];
                  uVar16 = puVar7[2];
                  puVar8 = puVar8 + iVar22 * 3;
                  puVar5 = puVar21 + 3;
                  bVar24 = puVar8 != puVar23;
                  *puVar21 = *puVar7;
                  puVar21[1] = uVar13;
                  puVar21[2] = uVar16;
                  if (bVar24) {
                    iVar22 = iVar15;
                  }
                  puVar7 = (undefined4 *)(iVar22 * 3);
                  if (bVar24) {
                    puVar18 = puVar18 + iVar22 * 3;
                    puVar7 = (undefined4 *)(param_1 + uVar14 * 0xc);
                  }
                  puVar21 = puVar5;
                } while (bVar24 && puVar18 != puVar7);
              }
              FUN_01bed4e2(puVar5,puVar8,(int)puVar23 - (int)puVar8);
            }
          }
          uVar19 = uVar17 * 2 | 1;
        }
        else {
          uVar19 = uVar17 * 2;
        }
        uVar20 = uVar9;
      } while (1 < uVar9);
      uVar20 = 1;
    }
LAB_0117cf04:
    abStack_67[uVar20 + 1] = (byte)uVar12;
    local_170[uVar20] = uVar19;
    if (param_2 <= uVar14) {
      if ((uVar19 & 1) == 0) {
        FUN_0117cf94(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar20 = uVar20 + 1;
    uVar14 = uVar14 + (local_190 >> 1);
    uVar19 = local_190;
  } while( true );
}

