// FUN_00b6163c @ 00b6163c size=1680 calls_out=3 calls_in=2
// strings: 

void FUN_00b6163c(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  bool bVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar31 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar31 & 0xffffffff);
  uVar4 = uVar31 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar31 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar31;
  }
  iVar3 = (int)(uVar4 >> 0x20);
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar6 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar6) + (param_2 >> iVar6) >> 1;
  }
  uVar21 = 0;
  uVar15 = 0;
  uVar16 = 1;
  do {
    uVar17 = 0;
    uVar23 = 1;
    puVar7 = (uint *)(param_1 + uVar21 * 8);
    if (uVar21 < param_2) {
      uVar23 = param_2 - uVar21;
      if (uVar23 < uVar5) {
LAB_00b6172c:
        if (param_5 == 0) {
          if (uVar5 <= uVar23) {
            uVar23 = uVar5;
          }
          uVar23 = uVar23 << 1;
        }
        else {
          if (0x1f < uVar23) {
            uVar23 = 0x20;
          }
          FUN_00b61ccc(puVar7,uVar23,param_3,param_4,0,0);
          uVar23 = uVar23 << 1 | 1;
        }
      }
      else {
        if (uVar23 < 2) {
          uVar26 = uVar23;
        }
        else {
          uVar9 = puVar7[1];
          uVar17 = puVar7[2];
          uVar8 = puVar7[3];
          uVar14 = (uint)((int)uVar9 >> 0x1f) >> 1 ^ uVar9;
          uVar9 = ((uint)((byte)((int)uVar9 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar9 >> 0x1f) >> 1)
                  ^ *puVar7;
          uVar13 = ((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1
                   ) ^ uVar17;
          uVar24 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
          if ((int)(uVar24 - (uVar14 + (uVar13 < uVar9))) < 0 ==
              (SBORROW4(uVar24,uVar14) != SBORROW4(uVar24 - uVar14,(uint)(uVar13 < uVar9)))) {
            uVar26 = 2;
            if (uVar23 != 2) {
              puVar19 = (uint *)(param_1 + 0x10 + uVar21 * 8);
              do {
                uVar22 = puVar19[1];
                uVar25 = *puVar19;
                uVar27 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
                uVar20 = (uint)((int)uVar22 >> 0x1f) >> 1 ^ uVar22;
                bVar28 = (((uint)((byte)((int)uVar22 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar22 >> 0x1f) >> 1) ^ uVar25) <
                         (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar8 >> 0x1f) >> 1) ^ uVar17);
                if ((int)(uVar20 - (uVar27 + bVar28)) < 0 !=
                    (SBORROW4(uVar20,uVar27) != SBORROW4(uVar20 - uVar27,(uint)bVar28)))
                goto LAB_00b618ec;
                uVar26 = uVar26 + 1;
                puVar19 = puVar19 + 2;
                uVar17 = uVar25;
                uVar8 = uVar22;
              } while (uVar23 != uVar26);
              uVar26 = uVar23;
              goto LAB_00b618ec;
            }
          }
          else if (uVar23 == 2) {
            uVar26 = 2;
            uVar23 = 1;
LAB_00b6192c:
            puVar12 = (uint *)(param_1 + -8 + uVar26 * 8 + uVar21 * 8);
            puVar19 = puVar7;
            do {
              uVar30 = *(undefined8 *)puVar19;
              uVar23 = uVar23 - 1;
              uVar17 = puVar12[1];
              *puVar19 = *puVar12;
              puVar19[1] = uVar17;
              puVar19 = puVar19 + 2;
              *(undefined8 *)puVar12 = uVar30;
              puVar12 = puVar12 + -2;
            } while (uVar23 != 0);
          }
          else {
            uVar26 = 2;
            puVar19 = (uint *)(param_1 + 0x10 + uVar21 * 8);
            do {
              uVar20 = puVar19[1];
              uVar25 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
              uVar22 = *puVar19;
              uVar27 = (uint)((int)uVar20 >> 0x1f) >> 1 ^ uVar20;
              bVar28 = (((uint)((byte)((int)uVar20 >> 0x1f) & 1) << 0x1f |
                        (uint)((int)uVar20 >> 0x1f) >> 1) ^ uVar22) <
                       (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f |
                        (uint)((int)uVar8 >> 0x1f) >> 1) ^ uVar17);
              if ((int)(uVar27 - (uVar25 + bVar28)) < 0 ==
                  (SBORROW4(uVar27,uVar25) != SBORROW4(uVar27 - uVar25,(uint)bVar28)))
              goto LAB_00b618ec;
              uVar26 = uVar26 + 1;
              puVar19 = puVar19 + 2;
              uVar17 = uVar22;
              uVar8 = uVar20;
            } while (uVar23 != uVar26);
            uVar26 = uVar23;
LAB_00b618ec:
            if (uVar26 < uVar5) goto LAB_00b6172c;
            if ((int)(uVar24 - (uVar14 + (uVar13 < uVar9))) < 0 !=
                (SBORROW4(uVar24,uVar14) != SBORROW4(uVar24 - uVar14,(uint)(uVar13 < uVar9)))) {
              uVar23 = uVar26 >> 1;
              if (uVar23 != 0) goto LAB_00b6192c;
              uVar26 = 1;
            }
          }
        }
        uVar23 = uVar26 << 1 | 1;
      }
      uVar8 = uVar21 - (uVar16 >> 1);
      uVar9 = uVar8 + uVar21;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar9;
      uVar13 = (uVar23 >> 1) + uVar21 * 2;
      lVar2 = (ulonglong)uVar13 * (uVar4 & 0xffffffff);
      uVar17 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar8 = iVar3 * uVar13 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar8,uVar21) * (int)uVar4 +
              uVar9 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar8 != 0) {
        uVar17 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar15) {
      do {
        while( true ) {
          uVar8 = uVar15 - 1;
          if (abStack_67[uVar15] < uVar17) goto LAB_00b61c68;
          uVar13 = local_170[uVar8];
          uVar9 = uVar13 >> 1;
          uVar24 = uVar9 + (uVar16 >> 1);
          uVar15 = uVar8;
          if ((param_4 < uVar24) || (((uVar13 | uVar16) & 1) != 0)) break;
          uVar16 = uVar24 * 2;
          if (uVar8 < 2) goto LAB_00b61c5c;
        }
        puVar19 = (uint *)(param_1 + (uVar21 - uVar24) * 8);
        if ((uVar13 & 1) == 0) {
          FUN_00b61ccc(puVar19,uVar9,param_3,param_4,LZCOUNT(uVar9 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar16 & 1) == 0) {
          FUN_00b61ccc(puVar19 + uVar9 * 2,uVar16 >> 1,param_3,param_4,
                       LZCOUNT(uVar16 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar14 = uVar16 >> 1;
        if (1 < uVar13 && 1 < uVar16) {
          uVar16 = uVar9;
          if (uVar14 < uVar9) {
            uVar16 = uVar14;
          }
          if (uVar16 <= param_4) {
            puVar18 = puVar19 + uVar9 * 2;
            puVar12 = puVar19;
            if (uVar14 < uVar9) {
              puVar12 = puVar18;
            }
            FUN_016dd1aa(param_3,puVar12,uVar16 << 3);
            puVar10 = param_3 + uVar16 * 2;
            puVar12 = param_3;
            if (uVar14 < uVar9) {
              puVar11 = (uint *)(param_1 + -8 + uVar21 * 8);
              do {
                uVar27 = puVar18[-2];
                uVar16 = puVar10[-2];
                uVar14 = puVar18[-1];
                uVar9 = puVar10[-1];
                uVar26 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
                bVar28 = (((uint)((byte)((int)uVar9 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar9 >> 0x1f) >> 1) ^ uVar16) <
                         (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar14 >> 0x1f) >> 1) ^ uVar27);
                uVar13 = (uint)((int)uVar9 >> 0x1f) >> 1 ^ uVar9;
                bVar29 = SBORROW4(uVar13,uVar26) != SBORROW4(uVar13 - uVar26,(uint)bVar28);
                bVar28 = (int)(uVar13 - (uVar26 + bVar28)) < 0;
                uVar13 = (uint)(bVar28 != bVar29);
                puVar10 = puVar10 + -2 + uVar13 * 2;
                puVar18 = puVar18 + -2 + (uint)(bVar28 == bVar29) * 2;
                if (uVar13 != 0) {
                  uVar9 = uVar14;
                  uVar16 = uVar27;
                }
                *puVar11 = uVar16;
                puVar11[1] = uVar9;
                if (puVar18 == puVar19) {
                  puVar19 = puVar18;
                  goto LAB_00b61b70;
                }
                puVar11 = puVar11 + -2;
              } while (puVar10 != param_3);
              puVar19 = puVar18;
            }
            else {
              do {
                uVar9 = puVar12[1];
                uVar14 = puVar18[1];
                uVar13 = (uint)((int)uVar9 >> 0x1f) >> 1 ^ uVar9;
                bVar28 = (((uint)((byte)((int)uVar14 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar14 >> 0x1f) >> 1) ^ *puVar18) <
                         (((uint)((byte)((int)uVar9 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar9 >> 0x1f) >> 1) ^ *puVar12);
                uVar16 = (uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14;
                bVar29 = SBORROW4(uVar16,uVar13) != SBORROW4(uVar16 - uVar13,(uint)bVar28);
                bVar28 = (int)(uVar16 - (uVar13 + bVar28)) < 0;
                uVar13 = (uint)(bVar28 != bVar29);
                uVar16 = *puVar12;
                if (uVar13 != 0) {
                  uVar9 = uVar14;
                  uVar16 = *puVar18;
                }
                *puVar19 = uVar16;
                puVar12 = puVar12 + (uint)(bVar28 == bVar29) * 2;
                puVar19[1] = uVar9;
                puVar19 = puVar19 + 2;
              } while ((puVar12 != puVar10) && (puVar18 = puVar18 + uVar13 * 2, puVar18 != puVar7));
            }
LAB_00b61b70:
            FUN_016dd1aa(puVar19,puVar12,(int)puVar10 - (int)puVar12);
          }
        }
        uVar16 = uVar24 * 2 | 1;
      } while (1 < uVar8);
LAB_00b61c5c:
      uVar15 = 1;
    }
LAB_00b61c68:
    abStack_67[uVar15 + 1] = (byte)uVar17;
    local_170[uVar15] = uVar16;
    if (param_2 <= uVar21) {
      if ((uVar16 & 1) == 0) {
        FUN_00b61ccc(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar15 = uVar15 + 1;
    uVar21 = uVar21 + (uVar23 >> 1);
    uVar16 = uVar23;
  } while( true );
}

