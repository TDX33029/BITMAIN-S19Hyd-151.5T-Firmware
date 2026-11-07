// FUN_0117a924 @ 0117a924 size=1760 calls_out=3 calls_in=2
// strings: 

void FUN_0117a924(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  bool bVar29;
  ulonglong uVar30;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar30 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar30 & 0xffffffff);
  uVar2 = uVar30 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar30 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar30;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar5 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar5) + (param_2 >> iVar5) >> 1;
  }
  uVar25 = 0;
  uVar14 = 0;
  uVar20 = 1;
  do {
    uVar8 = 0;
    uVar22 = 1;
    if (uVar25 < param_2) {
      uVar22 = param_2 - uVar25;
      iVar5 = param_1 + uVar25 * 0x50;
      if (uVar22 < uVar4) {
LAB_0117aa14:
        if (param_5 == 0) {
          if (uVar4 <= uVar22) {
            uVar22 = uVar4;
          }
          uVar22 = uVar22 << 1;
        }
        else {
          if (0x1f < uVar22) {
            uVar22 = 0x20;
          }
          FUN_0117b004(iVar5,uVar22,param_3,param_4,0,0);
          uVar22 = uVar22 << 1 | 1;
        }
      }
      else {
        if (uVar22 < 2) {
          uVar6 = uVar22;
        }
        else {
          uVar11 = *(uint *)(iVar5 + 0x2c);
          uVar8 = *(uint *)(iVar5 + 0x78);
          uVar10 = *(uint *)(iVar5 + 0x7c);
          uVar26 = (uint)((int)uVar11 >> 0x1f) >> 1 ^ uVar11;
          uVar11 = ((uint)((byte)((int)uVar11 >> 0x1f) & 1) << 0x1f |
                   (uint)((int)uVar11 >> 0x1f) >> 1) ^ *(uint *)(iVar5 + 0x28);
          uVar24 = ((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                   (uint)((int)uVar10 >> 0x1f) >> 1) ^ uVar8;
          uVar13 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
          if ((int)(uVar13 - (uVar26 + (uVar24 < uVar11))) < 0 ==
              (SBORROW4(uVar13,uVar26) != SBORROW4(uVar13 - uVar26,(uint)(uVar24 < uVar11)))) {
            uVar6 = 2;
            if (uVar22 != 2) {
              puVar18 = (uint *)(param_1 + 200 + uVar25 * 0x50);
              uVar6 = 2;
              do {
                uVar9 = *puVar18;
                uVar23 = puVar18[1];
                uVar27 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
                uVar16 = (uint)((int)uVar23 >> 0x1f) >> 1 ^ uVar23;
                bVar28 = (((uint)((byte)((int)uVar23 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar23 >> 0x1f) >> 1) ^ uVar9) <
                         (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar10 >> 0x1f) >> 1) ^ uVar8);
                if ((int)(uVar16 - (uVar27 + bVar28)) < 0 !=
                    (SBORROW4(uVar16,uVar27) != SBORROW4(uVar16 - uVar27,(uint)bVar28)))
                goto LAB_0117abd0;
                uVar6 = uVar6 + 1;
                puVar18 = puVar18 + 0x14;
                uVar8 = uVar9;
                uVar10 = uVar23;
              } while (uVar22 != uVar6);
              goto LAB_0117abc0;
            }
          }
          else if (uVar22 == 2) {
            uVar6 = 2;
            uVar22 = 1;
LAB_0117ac10:
            uVar8 = 0;
            iVar19 = param_1 + -0x50 + uVar25 * 0x50 + uVar6 * 0x50;
            do {
              iVar17 = 0;
              do {
                uVar12 = *(undefined4 *)(iVar5 + iVar17 * -4);
                *(undefined4 *)(iVar5 + iVar17 * -4) = *(undefined4 *)(iVar19 + iVar17 * -4);
                *(undefined4 *)(iVar19 + iVar17 * -4) = uVar12;
                bVar28 = iVar17 != -0x13;
                iVar17 = iVar17 + -1;
              } while (bVar28);
              uVar8 = uVar8 + 1;
              iVar5 = iVar5 + 0x50;
              iVar19 = iVar19 + -0x50;
            } while (uVar8 != uVar22);
          }
          else {
            puVar18 = (uint *)(param_1 + 200 + uVar25 * 0x50);
            uVar6 = 2;
            do {
              uVar9 = *puVar18;
              uVar23 = puVar18[1];
              uVar27 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
              uVar16 = (uint)((int)uVar23 >> 0x1f) >> 1 ^ uVar23;
              bVar28 = (((uint)((byte)((int)uVar23 >> 0x1f) & 1) << 0x1f |
                        (uint)((int)uVar23 >> 0x1f) >> 1) ^ uVar9) <
                       (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                        (uint)((int)uVar10 >> 0x1f) >> 1) ^ uVar8);
              if ((int)(uVar16 - (uVar27 + bVar28)) < 0 ==
                  (SBORROW4(uVar16,uVar27) != SBORROW4(uVar16 - uVar27,(uint)bVar28)))
              goto LAB_0117abd0;
              uVar6 = uVar6 + 1;
              puVar18 = puVar18 + 0x14;
              uVar8 = uVar9;
              uVar10 = uVar23;
            } while (uVar22 != uVar6);
LAB_0117abc0:
            uVar6 = uVar22;
LAB_0117abd0:
            if (uVar6 < uVar4) goto LAB_0117aa14;
            if ((int)(uVar13 - (uVar26 + (uVar24 < uVar11))) < 0 !=
                (SBORROW4(uVar13,uVar26) != SBORROW4(uVar13 - uVar26,(uint)(uVar24 < uVar11)))) {
              uVar22 = uVar6 >> 1;
              if (uVar22 != 0) goto LAB_0117ac10;
              uVar6 = 1;
            }
          }
        }
        uVar22 = uVar6 << 1 | 1;
      }
      uVar8 = uVar25 - (uVar20 >> 1);
      uVar10 = uVar25 + (uVar22 >> 1);
      uVar11 = uVar10 + uVar25;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar11;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar8,uVar25),uVar8 + uVar25);
      uVar10 = (uint)CARRY4(uVar10,uVar25) * (int)uVar2 +
               uVar11 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar8 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar10 != 0) {
        uVar8 = LZCOUNT(uVar10);
      }
    }
    if (1 < uVar14) {
      do {
        uVar10 = uVar14 - 1;
        if (abStack_67[uVar14] < uVar8) goto LAB_0117af9c;
        uVar11 = local_170[uVar10];
        uVar14 = uVar11 >> 1;
        uVar24 = uVar14 + (uVar20 >> 1);
        if ((param_4 < uVar24) || (((uVar11 | uVar20) & 1) != 0)) {
          iVar5 = param_1 + (uVar25 - uVar24) * 0x50;
          if ((uVar11 & 1) == 0) {
            FUN_0117b004(iVar5,uVar14,param_3,param_4,LZCOUNT(uVar14 | 1) << 1 ^ 0x3e,0);
          }
          uVar13 = uVar20 >> 1;
          if ((uVar20 & 1) == 0) {
            FUN_0117b004(iVar5 + uVar14 * 0x50,uVar13,param_3,param_4,
                         LZCOUNT(uVar13 | 1) << 1 ^ 0x3e,0);
          }
          if (1 < uVar11 && 1 < uVar20) {
            uVar20 = uVar14;
            if (uVar13 < uVar14) {
              uVar20 = uVar13;
            }
            if (uVar20 <= param_4) {
              iVar17 = iVar5 + uVar14 * 0x50;
              iVar19 = iVar5;
              if (uVar13 < uVar14) {
                iVar19 = iVar17;
              }
              FUN_01bed4e2(param_3,iVar19,uVar20 * 0x50);
              iVar21 = param_3 + uVar20 * 0x50;
              iVar19 = param_3;
              if (uVar13 < uVar14) {
                iVar15 = param_1 + -0x50 + uVar25 * 0x50;
                do {
                  uVar20 = *(uint *)(iVar17 + -0x24);
                  uVar13 = *(uint *)(iVar21 + -0x24);
                  uVar14 = (uint)((int)uVar20 >> 0x1f) >> 1 ^ uVar20;
                  uVar11 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
                  bVar28 = (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f |
                            (uint)((int)uVar13 >> 0x1f) >> 1) ^ *(uint *)(iVar21 + -0x28)) <
                           (((uint)((byte)((int)uVar20 >> 0x1f) & 1) << 0x1f |
                            (uint)((int)uVar20 >> 0x1f) >> 1) ^ *(uint *)(iVar17 + -0x28));
                  bVar29 = SBORROW4(uVar11,uVar14) != SBORROW4(uVar11 - uVar14,(uint)bVar28);
                  bVar28 = (int)(uVar11 - (uVar14 + bVar28)) < 0;
                  iVar7 = iVar21 + -0x50;
                  uVar14 = (uint)(bVar28 == bVar29);
                  uVar20 = (uint)(bVar28 != bVar29);
                  iVar21 = iVar7 + (uVar20 | uVar20 << 2) * 0x10;
                  if (uVar20 != 0) {
                    iVar7 = iVar17 + -0x50;
                  }
                  FUN_01bed4e2(iVar15,iVar7,0x50);
                  iVar17 = iVar17 + -0x50 + (uVar14 | uVar14 << 2) * 0x10;
                  if (iVar17 == iVar5) {
                    iVar5 = iVar17;
                    goto LAB_0117af6c;
                  }
                  iVar15 = iVar15 + -0x50;
                } while (iVar21 != param_3);
                iVar5 = iVar17;
              }
              else {
                do {
                  uVar20 = *(uint *)(iVar19 + 0x2c);
                  uVar13 = *(uint *)(iVar17 + 0x2c);
                  uVar14 = (uint)((int)uVar20 >> 0x1f) >> 1 ^ uVar20;
                  uVar11 = (uint)((int)uVar13 >> 0x1f) >> 1 ^ uVar13;
                  bVar28 = (((uint)((byte)((int)uVar13 >> 0x1f) & 1) << 0x1f |
                            (uint)((int)uVar13 >> 0x1f) >> 1) ^ *(uint *)(iVar17 + 0x28)) <
                           (((uint)((byte)((int)uVar20 >> 0x1f) & 1) << 0x1f |
                            (uint)((int)uVar20 >> 0x1f) >> 1) ^ *(uint *)(iVar19 + 0x28));
                  bVar29 = SBORROW4(uVar11,uVar14) != SBORROW4(uVar11 - uVar14,(uint)bVar28);
                  bVar28 = (int)(uVar11 - (uVar14 + bVar28)) < 0;
                  uVar20 = (uint)(bVar28 != bVar29);
                  uVar14 = (uint)(bVar28 == bVar29);
                  iVar15 = iVar19;
                  if (uVar20 != 0) {
                    iVar15 = iVar17;
                  }
                  FUN_01bed4e2(iVar5,iVar15,0x50);
                  iVar5 = iVar5 + 0x50;
                  iVar19 = iVar19 + (uVar14 | uVar14 << 2) * 0x10;
                } while ((iVar19 != iVar21) &&
                        (iVar17 = iVar17 + (uVar20 | uVar20 << 2) * 0x10,
                        iVar17 != param_1 + uVar25 * 0x50));
              }
LAB_0117af6c:
              FUN_01bed4e2(iVar5,iVar19,iVar21 - iVar19);
            }
          }
          uVar20 = uVar24 * 2 | 1;
        }
        else {
          uVar20 = uVar24 * 2;
        }
        uVar14 = uVar10;
      } while (1 < uVar10);
      uVar14 = 1;
    }
LAB_0117af9c:
    abStack_67[uVar14 + 1] = (byte)uVar8;
    local_170[uVar14] = uVar20;
    if (param_2 <= uVar25) {
      if ((uVar20 & 1) == 0) {
        FUN_0117b004(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar14 = uVar14 + 1;
    uVar25 = uVar25 + (uVar22 >> 1);
    uVar20 = uVar22;
  } while( true );
}

