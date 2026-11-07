// FUN_007628a8 @ 007628a8 size=1880 calls_out=4 calls_in=2
// strings: 

void FUN_007628a8(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  uint local_194;
  uint local_17c [66];
  byte abStack_73 [67];
  
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
    iVar19 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar19) + (param_2 >> iVar19) >> 1;
  }
  uVar21 = 0;
  uVar15 = 0;
  uVar26 = 1;
  do {
    uVar13 = 0;
    local_194 = 1;
    if (uVar21 < param_2) {
      local_194 = param_2 - uVar21;
      iVar19 = param_1 + uVar21 * 0xf0;
      if (local_194 < uVar4) {
LAB_007629ac:
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
          FUN_00749c54(iVar19,local_194,param_3,param_4,0,0);
          local_194 = local_194 << 1 | 1;
        }
      }
      else {
        if (local_194 < 2) {
          uVar12 = local_194;
        }
        else {
          uVar29 = FUN_01404030(*(int *)(iVar19 + 0x1d4) + 8);
          uVar14 = (uint)((ulonglong)uVar29 >> 0x20);
          uVar30 = FUN_01404030(*(int *)(iVar19 + 0xe4) + 8);
          uVar17 = (uint)((ulonglong)uVar30 >> 0x20);
          uVar13 = (int)uVar14 >> 0x1f;
          uVar14 = uVar13 >> 1 ^ uVar14;
          uVar12 = (int)uVar17 >> 0x1f;
          uVar13 = ((uint)((byte)((longlong)uVar29 >> 0x3f) & 1) << 0x1f | uVar13 >> 1) ^
                   (uint)uVar29;
          uVar16 = ((uint)((byte)((longlong)uVar30 >> 0x3f) & 1) << 0x1f | uVar12 >> 1) ^
                   (uint)uVar30;
          uVar17 = uVar12 >> 1 ^ uVar17;
          if ((int)(uVar14 - (uVar17 + (uVar13 < uVar16))) < 0 ==
              (SBORROW4(uVar14,uVar17) != SBORROW4(uVar14 - uVar17,(uint)(uVar13 < uVar16)))) {
            uVar12 = 2;
            if (local_194 != 2) {
              uVar8 = uVar13;
              uVar10 = uVar16;
              piVar24 = (int *)(param_1 + 0x1d4 + uVar21 * 0xf0);
              do {
                uVar29 = FUN_01404030(piVar24[0x3c] + 8,uVar8,uVar10);
                uVar8 = (uint)((ulonglong)uVar29 >> 0x20);
                uVar30 = FUN_01404030(*piVar24 + 8);
                uVar7 = (uint)((ulonglong)uVar30 >> 0x20);
                uVar10 = (int)uVar8 >> 0x1f;
                uVar8 = uVar10 >> 1 ^ uVar8;
                uVar5 = (int)uVar7 >> 0x1f;
                uVar11 = ((uint)((byte)((longlong)uVar29 >> 0x3f) & 1) << 0x1f | uVar10 >> 1) ^
                         (uint)uVar29;
                uVar7 = uVar5 >> 1 ^ uVar7;
                uVar5 = ((uint)((byte)((longlong)uVar30 >> 0x3f) & 1) << 0x1f | uVar5 >> 1) ^
                        (uint)uVar30;
                uVar10 = uVar11 - uVar5;
                if ((int)(uVar8 - (uVar7 + (uVar11 < uVar5))) < 0 !=
                    (SBORROW4(uVar8,uVar7) != SBORROW4(uVar8 - uVar7,(uint)(uVar11 < uVar5))))
                goto LAB_00762b9c;
                uVar12 = uVar12 + 1;
                piVar24 = piVar24 + 0x3c;
              } while (local_194 != uVar12);
              goto LAB_00762b98;
            }
          }
          else if (local_194 == 2) {
            uVar12 = 2;
            uVar13 = 1;
LAB_00762bd0:
            uVar16 = 0;
            iVar18 = param_1 + -0xf0 + uVar21 * 0xf0 + uVar12 * 0xf0;
            do {
              iVar20 = 0;
              do {
                uVar6 = *(undefined4 *)(iVar19 + iVar20 * -4);
                *(undefined4 *)(iVar19 + iVar20 * -4) = *(undefined4 *)(iVar18 + iVar20 * -4);
                *(undefined4 *)(iVar18 + iVar20 * -4) = uVar6;
                bVar27 = iVar20 != -0x3b;
                iVar20 = iVar20 + -1;
              } while (bVar27);
              uVar16 = uVar16 + 1;
              iVar19 = iVar19 + 0xf0;
              iVar18 = iVar18 + -0xf0;
            } while (uVar16 != uVar13);
          }
          else {
            uVar12 = 2;
            uVar8 = uVar13;
            piVar24 = (int *)(param_1 + 0x1d4 + uVar21 * 0xf0);
            do {
              uVar29 = FUN_01404030(piVar24[0x3c] + 8,uVar8);
              uVar25 = (uint)((ulonglong)uVar29 >> 0x20);
              uVar30 = FUN_01404030(*piVar24 + 8);
              uVar5 = (uint)((ulonglong)uVar30 >> 0x20);
              uVar8 = (int)uVar25 >> 0x1f;
              uVar25 = uVar8 >> 1 ^ uVar25;
              uVar10 = (int)uVar5 >> 0x1f;
              uVar7 = ((uint)((byte)((longlong)uVar29 >> 0x3f) & 1) << 0x1f | uVar8 >> 1) ^
                      (uint)uVar29;
              uVar11 = ((uint)((byte)((longlong)uVar30 >> 0x3f) & 1) << 0x1f | uVar10 >> 1) ^
                       (uint)uVar30;
              uVar5 = uVar10 >> 1 ^ uVar5;
              uVar8 = uVar7 - uVar11;
              if ((int)(uVar25 - (uVar5 + (uVar7 < uVar11))) < 0 ==
                  (SBORROW4(uVar25,uVar5) != SBORROW4(uVar25 - uVar5,(uint)(uVar7 < uVar11))))
              goto LAB_00762b9c;
              uVar12 = uVar12 + 1;
              piVar24 = piVar24 + 0x3c;
            } while (local_194 != uVar12);
LAB_00762b98:
            uVar12 = local_194;
LAB_00762b9c:
            if (uVar12 < uVar4) goto LAB_007629ac;
            if ((int)(uVar14 - (uVar17 + (uVar13 < uVar16))) < 0 !=
                (SBORROW4(uVar14,uVar17) != SBORROW4(uVar14 - uVar17,(uint)(uVar13 < uVar16)))) {
              uVar13 = uVar12 >> 1;
              if (uVar13 != 0) goto LAB_00762bd0;
              uVar12 = 1;
            }
          }
        }
        local_194 = uVar12 << 1 | 1;
      }
      uVar13 = uVar21 - (uVar26 >> 1);
      uVar12 = uVar21 + (local_194 >> 1);
      uVar16 = uVar12 + uVar21;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar16;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar13,uVar21),uVar13 + uVar21);
      uVar12 = (uint)CARRY4(uVar12,uVar21) * (int)uVar2 +
               uVar16 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar13 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar12 != 0) {
        uVar13 = LZCOUNT(uVar12);
      }
    }
    if (1 < uVar15) {
      do {
        uVar12 = uVar15 - 1;
        if (abStack_73[uVar15] < uVar13) goto LAB_00762f94;
        uVar17 = local_17c[uVar12];
        uVar15 = uVar17 >> 1;
        uVar16 = uVar15 + (uVar26 >> 1);
        if ((param_4 < uVar16) || (((uVar17 | uVar26) & 1) != 0)) {
          iVar19 = param_1 + (uVar21 - uVar16) * 0xf0;
          if ((uVar17 & 1) == 0) {
            FUN_00749c54(iVar19,uVar15,param_3,param_4,LZCOUNT(uVar15 | 1) << 1 ^ 0x3e,0);
          }
          uVar14 = uVar26 >> 1;
          if ((uVar26 & 1) == 0) {
            FUN_00749c54(iVar19 + uVar15 * 0xf0,uVar14,param_3,param_4,
                         LZCOUNT(uVar14 | 1) << 1 ^ 0x3e,0);
          }
          if (1 < uVar17 && 1 < uVar26) {
            uVar26 = uVar15;
            if (uVar14 < uVar15) {
              uVar26 = uVar14;
            }
            if (uVar26 <= param_4) {
              iVar18 = iVar19 + uVar15 * 0xf0;
              iVar20 = iVar19;
              if (uVar14 < uVar15) {
                iVar20 = iVar18;
              }
              FUN_01bed4e2(param_3,iVar20,uVar26 * 0xf0);
              iVar22 = param_3 + uVar26 * 0xf0;
              iVar23 = param_3;
              if (uVar14 < uVar15) {
                iVar18 = param_1 + -0xf0 + uVar21 * 0xf0;
                do {
                  uVar29 = FUN_01404030(*(int *)(iVar22 + -0xc) + 8);
                  uVar14 = (uint)((ulonglong)uVar29 >> 0x20);
                  uVar30 = FUN_01404030(*(int *)(iVar20 + -0xc) + 8);
                  uVar17 = (uint)((ulonglong)uVar30 >> 0x20);
                  iVar9 = iVar22 + -0xf0;
                  uVar26 = (int)uVar17 >> 0x1f;
                  uVar17 = uVar26 >> 1 ^ uVar17;
                  uVar15 = (int)uVar14 >> 0x1f;
                  uVar14 = uVar15 >> 1 ^ uVar14;
                  bVar27 = (((uint)((byte)((longlong)uVar29 >> 0x3f) & 1) << 0x1f | uVar15 >> 1) ^
                           (uint)uVar29) <
                           (((uint)((byte)((longlong)uVar30 >> 0x3f) & 1) << 0x1f | uVar26 >> 1) ^
                           (uint)uVar30);
                  bVar28 = SBORROW4(uVar14,uVar17) != SBORROW4(uVar14 - uVar17,(uint)bVar27);
                  bVar27 = (int)(uVar14 - (uVar17 + bVar27)) < 0;
                  uVar26 = (uint)(bVar27 != bVar28);
                  iVar22 = iVar9 + uVar26 * 0xf0;
                  if (uVar26 != 0) {
                    iVar9 = iVar20 + -0xf0;
                  }
                  FUN_01bed4e2(iVar18,iVar9,0xf0);
                  iVar20 = iVar20 + -0xf0 + (uint)(bVar27 == bVar28) * 0xf0;
                } while ((iVar20 != iVar19) && (iVar18 = iVar18 + -0xf0, iVar22 != param_3));
              }
              else {
                iVar19 = param_3;
                if (uVar26 != 0) {
                  iVar19 = param_1 + uVar21 * 0xf0;
                }
                if (!(uVar26 == 0 || iVar18 == iVar19)) {
                  do {
                    uVar29 = FUN_01404030(*(int *)(iVar18 + 0xe4) + 8);
                    uVar17 = (uint)((ulonglong)uVar29 >> 0x20);
                    uVar30 = FUN_01404030(*(int *)(iVar23 + 0xe4) + 8);
                    uVar14 = (uint)((ulonglong)uVar30 >> 0x20);
                    uVar26 = (int)uVar14 >> 0x1f;
                    uVar14 = uVar26 >> 1 ^ uVar14;
                    uVar15 = (int)uVar17 >> 0x1f;
                    uVar17 = uVar15 >> 1 ^ uVar17;
                    bVar27 = (((uint)((byte)((longlong)uVar29 >> 0x3f) & 1) << 0x1f | uVar15 >> 1) ^
                             (uint)uVar29) <
                             (((uint)((byte)((longlong)uVar30 >> 0x3f) & 1) << 0x1f | uVar26 >> 1) ^
                             (uint)uVar30);
                    bVar28 = SBORROW4(uVar17,uVar14) != SBORROW4(uVar17 - uVar14,(uint)bVar27);
                    bVar27 = (int)(uVar17 - (uVar14 + bVar27)) < 0;
                    uVar26 = (uint)(bVar27 != bVar28);
                    iVar9 = iVar23;
                    if (uVar26 != 0) {
                      iVar9 = iVar18;
                    }
                    FUN_01bed4e2(iVar20,iVar9,0xf0);
                    iVar20 = iVar20 + 0xf0;
                    iVar23 = iVar23 + (uint)(bVar27 == bVar28) * 0xf0;
                    if (iVar23 != iVar22) {
                      iVar18 = iVar18 + uVar26 * 0xf0;
                    }
                  } while (iVar23 != iVar22 && iVar18 != iVar19);
                }
              }
              FUN_01bed4e2(iVar20,iVar23,iVar22 - iVar23);
            }
          }
          uVar26 = uVar16 * 2 | 1;
        }
        else {
          uVar26 = uVar16 * 2;
        }
        uVar15 = uVar12;
      } while (1 < uVar12);
      uVar15 = 1;
    }
LAB_00762f94:
    abStack_73[uVar15 + 1] = (byte)uVar13;
    local_17c[uVar15] = uVar26;
    if (param_2 <= uVar21) {
      if ((uVar26 & 1) == 0) {
        FUN_00749c54(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar15 = uVar15 + 1;
    uVar21 = uVar21 + (local_194 >> 1);
    uVar26 = local_194;
  } while( true );
}

