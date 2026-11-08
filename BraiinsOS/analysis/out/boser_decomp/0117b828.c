// FUN_0117b828 @ 0117b828 size=1768 calls_out=4 calls_in=2
// strings: 

void FUN_0117b828(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 *puVar25;
  uint uVar26;
  uint uVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  bool bVar30;
  ulonglong uVar31;
  uint local_194;
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
    iVar21 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar21) + (param_2 >> iVar21) >> 1;
  }
  uVar5 = 0;
  uVar23 = 0;
  uVar27 = 1;
  do {
    uVar11 = 0;
    local_194 = 1;
    if (uVar5 < param_2) {
      iVar21 = param_1 + uVar5 * 0x30;
      local_194 = param_2 - uVar5;
      if (local_194 < uVar4) {
LAB_0117b940:
        if (param_5 == 0) {
          if (uVar4 <= local_194) {
            local_194 = uVar4;
          }
          local_194 = local_194 << 1;
        }
        else {
          if (0x1f < local_194) {
            local_194 = 0x20;
          }
          FUN_0117bf10(iVar21,local_194,param_3,param_4,0,0);
          local_194 = local_194 << 1 | 1;
        }
      }
      else {
        uVar11 = local_194;
        if (1 < local_194) {
          uVar19 = *(uint *)(iVar21 + 0x28);
          uVar12 = *(uint *)(iVar21 + 0x54);
          uVar13 = *(uint *)(iVar21 + 0x58);
          uVar11 = uVar19;
          if (uVar13 < uVar19) {
            uVar11 = uVar13;
          }
          iVar6 = FUN_01bed842(uVar12,*(undefined4 *)(iVar21 + 0x24),uVar11);
          if (iVar6 == 0) {
            iVar6 = uVar13 - uVar19;
          }
          if (iVar6 < 0) {
            if (local_194 == 2) {
              uVar11 = 2;
              uVar12 = 1;
LAB_0117bb04:
              uVar13 = 0;
              iVar6 = param_1 + -0x30 + uVar5 * 0x30 + uVar11 * 0x30;
              do {
                iVar7 = 0;
                do {
                  uVar14 = *(undefined4 *)(iVar21 + iVar7 * -4);
                  *(undefined4 *)(iVar21 + iVar7 * -4) = *(undefined4 *)(iVar6 + iVar7 * -4);
                  *(undefined4 *)(iVar6 + iVar7 * -4) = uVar14;
                  bVar30 = iVar7 != -0xb;
                  iVar7 = iVar7 + -1;
                } while (bVar30);
                uVar13 = uVar13 + 1;
                iVar21 = iVar21 + 0x30;
                iVar6 = iVar6 + -0x30;
              } while (uVar13 != uVar12);
            }
            else {
              uVar11 = 2;
              puVar16 = (uint *)(param_1 + 0x88 + uVar5 * 0x30);
              do {
                uVar24 = puVar16[-1];
                uVar26 = *puVar16;
                uVar19 = uVar13;
                if (uVar26 < uVar13) {
                  uVar19 = uVar26;
                }
                uVar12 = FUN_01bed842(uVar24,uVar12,uVar19);
                if (uVar12 == 0) {
                  uVar12 = uVar26 - uVar13;
                }
                if (uVar12 < 0x80000000) goto LAB_0117bac8;
                puVar16 = puVar16 + 0xc;
                uVar11 = uVar11 + 1;
                uVar12 = uVar24;
                uVar13 = uVar26;
              } while (local_194 != uVar11);
LAB_0117bab4:
              uVar11 = local_194;
LAB_0117bac8:
              if (uVar11 < uVar4) goto LAB_0117b940;
              if (iVar6 < 0) {
                uVar12 = uVar11 >> 1;
                if (uVar12 != 0) goto LAB_0117bb04;
                uVar11 = 1;
              }
            }
          }
          else {
            uVar11 = 2;
            if (local_194 != 2) {
              puVar16 = (uint *)(param_1 + 0x88 + uVar5 * 0x30);
              do {
                uVar24 = puVar16[-1];
                uVar26 = *puVar16;
                uVar19 = uVar13;
                if (uVar26 < uVar13) {
                  uVar19 = uVar26;
                }
                iVar7 = FUN_01bed842(uVar24,uVar12,uVar19);
                if (iVar7 == 0) {
                  iVar7 = uVar26 - uVar13;
                }
                if (iVar7 < 0) goto LAB_0117bac8;
                puVar16 = puVar16 + 0xc;
                uVar11 = uVar11 + 1;
                uVar12 = uVar24;
                uVar13 = uVar26;
              } while (local_194 != uVar11);
              goto LAB_0117bab4;
            }
          }
        }
        local_194 = uVar11 << 1 | 1;
      }
      uVar11 = uVar5 - (uVar27 >> 1);
      uVar12 = uVar5 + (local_194 >> 1);
      uVar13 = uVar12 + uVar5;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar13;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar11,uVar5),uVar11 + uVar5);
      uVar12 = (uint)CARRY4(uVar12,uVar5) * (int)uVar2 +
               uVar13 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar11 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar12 != 0) {
        uVar11 = LZCOUNT(uVar12);
      }
    }
    if (1 < uVar23) {
      do {
        uVar12 = uVar23 - 1;
        if (abStack_67[uVar23] < uVar11) goto LAB_0117beb0;
        uVar19 = local_170[uVar12];
        uVar23 = uVar19 >> 1;
        uVar13 = uVar23 + (uVar27 >> 1);
        if ((param_4 < uVar13) || (((uVar19 | uVar27) & 1) != 0)) {
          puVar8 = (undefined4 *)(param_1 + (uVar5 - uVar13) * 0x30);
          if ((uVar19 & 1) == 0) {
            FUN_0117bf10(puVar8,uVar23,param_3,param_4,LZCOUNT(uVar23 | 1) << 1 ^ 0x3e,0);
          }
          uVar24 = uVar27 >> 1;
          if ((uVar27 & 1) == 0) {
            FUN_0117bf10(puVar8 + uVar23 * 0xc,uVar24,param_3,param_4,
                         LZCOUNT(uVar24 | 1) << 1 ^ 0x3e,0);
          }
          if (1 < uVar19 && 1 < uVar27) {
            uVar27 = uVar23;
            if (uVar24 < uVar23) {
              uVar27 = uVar24;
            }
            if (uVar27 <= param_4) {
              puVar28 = puVar8 + uVar23 * 0xc;
              puVar10 = puVar8;
              if (uVar24 < uVar23) {
                puVar10 = puVar28;
              }
              FUN_01bed4e2(param_3,puVar10,uVar27 * 0x30);
              puVar18 = param_3 + uVar27 * 0xc;
              puVar10 = param_3;
              if (uVar24 < uVar23) {
                puVar9 = (undefined4 *)(param_1 + -0x30 + uVar5 * 0x30);
                do {
                  uVar19 = puVar28[-2];
                  uVar23 = puVar18[-2];
                  uVar27 = uVar19;
                  if (uVar23 < uVar19) {
                    uVar27 = uVar23;
                  }
                  uVar27 = FUN_01bed842(puVar18[-3],puVar28[-3],uVar27);
                  if (uVar27 == 0) {
                    uVar27 = uVar23 - uVar19;
                  }
                  puVar25 = puVar28 + -0xc;
                  if (uVar27 < 0x80000000) {
                    puVar25 = puVar18 + -0xc;
                  }
                  uVar14 = puVar25[1];
                  uVar15 = puVar25[2];
                  uVar17 = puVar25[3];
                  uVar20 = puVar25[4];
                  uVar22 = puVar25[5];
                  *puVar9 = *puVar25;
                  puVar9[1] = uVar14;
                  puVar9[2] = uVar15;
                  puVar9[3] = uVar17;
                  puVar9[4] = uVar20;
                  puVar9[5] = uVar22;
                  uVar14 = puVar25[7];
                  uVar15 = puVar25[8];
                  uVar17 = puVar25[9];
                  uVar20 = puVar25[10];
                  uVar22 = puVar25[0xb];
                  puVar9[6] = puVar25[6];
                  puVar9[7] = uVar14;
                  puVar9[8] = uVar15;
                  puVar9[9] = uVar17;
                  puVar9[10] = uVar20;
                  puVar9[0xb] = uVar22;
                  puVar18 = puVar18 + -0xc + (uVar27 >> 0x1f | (uVar27 >> 0x1f) << 1) * 4;
                  uVar27 = uVar27 >> 0x1f ^ 1;
                  puVar28 = puVar28 + -0xc + (uVar27 | uVar27 << 1) * 4;
                } while ((puVar28 != puVar8) && (puVar9 = puVar9 + -0xc, puVar18 != param_3));
                puVar25 = puVar28;
              }
              else {
                do {
                  uVar23 = puVar10[10];
                  uVar19 = puVar28[10];
                  uVar27 = uVar23;
                  if (uVar19 < uVar23) {
                    uVar27 = uVar19;
                  }
                  puVar9 = (undefined4 *)FUN_01bed842(puVar28[9],puVar10[9],uVar27);
                  if (puVar9 == (undefined4 *)0x0) {
                    puVar9 = (undefined4 *)(uVar19 - uVar23);
                  }
                  puVar25 = puVar8 + 0xc;
                  puVar29 = puVar28;
                  if (puVar9 < &DAT_80000000) {
                    puVar29 = puVar10;
                  }
                  uVar14 = puVar29[1];
                  uVar15 = puVar29[2];
                  uVar17 = puVar29[3];
                  uVar20 = puVar29[4];
                  uVar22 = puVar29[5];
                  *puVar8 = *puVar29;
                  puVar8[1] = uVar14;
                  puVar8[2] = uVar15;
                  puVar8[3] = uVar17;
                  puVar8[4] = uVar20;
                  puVar8[5] = uVar22;
                  uVar14 = puVar29[7];
                  uVar15 = puVar29[8];
                  uVar17 = puVar29[9];
                  uVar20 = puVar29[10];
                  uVar22 = puVar29[0xb];
                  puVar8[6] = puVar29[6];
                  puVar8[7] = uVar14;
                  puVar8[8] = uVar15;
                  puVar8[9] = uVar17;
                  puVar8[10] = uVar20;
                  puVar8[0xb] = uVar22;
                  uVar27 = (uint)puVar9 >> 0x1f ^ 1;
                  puVar10 = puVar10 + (uVar27 | uVar27 << 1) * 4;
                  if (puVar10 != puVar18) {
                    puVar28 = puVar28 + ((uint)puVar9 >> 0x1f | ((uint)puVar9 >> 0x1f) << 1) * 4;
                    puVar9 = (undefined4 *)(param_1 + uVar5 * 0x30);
                  }
                  puVar8 = puVar25;
                } while (puVar10 != puVar18 && puVar28 != puVar9);
              }
              FUN_01bed4e2(puVar25,puVar10,(int)puVar18 - (int)puVar10);
            }
          }
          uVar27 = uVar13 * 2 | 1;
        }
        else {
          uVar27 = uVar13 * 2;
        }
        uVar23 = uVar12;
      } while (1 < uVar12);
      uVar23 = 1;
    }
LAB_0117beb0:
    abStack_67[uVar23 + 1] = (byte)uVar11;
    local_170[uVar23] = uVar27;
    if (param_2 <= uVar5) {
      if ((uVar27 & 1) == 0) {
        FUN_0117bf10(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar23 = uVar23 + 1;
    uVar5 = uVar5 + (local_194 >> 1);
    uVar27 = local_194;
  } while( true );
}

