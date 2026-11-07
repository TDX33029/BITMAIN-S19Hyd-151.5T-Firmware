// FUN_00b84d90 @ 00b84d90 size=1740 calls_out=3 calls_in=2
// strings: 

void FUN_00b84d90(int param_1,uint param_2,int *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  int *piVar25;
  int *piVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  bool bVar33;
  bool bVar34;
  ulonglong uVar35;
  uint local_17c [68];
  byte abStack_69 [69];
  
  uVar35 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar35 & 0xffffffff);
  uVar4 = uVar35 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar35 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar35;
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
    iVar16 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar16) + (param_2 >> iVar16) >> 1;
  }
  uVar19 = 1;
  uVar28 = 0;
  uVar17 = 0;
  do {
    uVar13 = 0;
    bVar12 = 0;
    uVar30 = 1;
    piVar6 = (int *)(param_1 + uVar28 * 4);
    if (uVar28 < param_2) {
      uVar30 = param_2 - uVar28;
      if (uVar30 < uVar5) {
LAB_00b84e80:
        if (param_5 == 0) {
          if (uVar5 <= uVar30) {
            uVar30 = uVar5;
          }
          uVar30 = uVar30 << 1;
        }
        else {
          if (0x1f < uVar30) {
            uVar30 = 0x20;
          }
          FUN_00b8545c(piVar6,uVar30,param_3,param_4,0,0);
          uVar30 = uVar30 << 1 | 1;
        }
      }
      else {
        if (uVar30 < 2) {
          uVar27 = uVar30;
        }
        else {
          uVar13 = *(uint *)(*(int *)(piVar6[1] + 4) + 8);
          uVar9 = *(uint *)(*(int *)(piVar6[1] + 4) + 0xc);
          uVar10 = *(uint *)(*(int *)(*piVar6 + 4) + 0xc);
          uVar29 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
          uVar11 = ((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                   (uint)((int)uVar10 >> 0x1f) >> 1) ^ *(uint *)(*(int *)(*piVar6 + 4) + 8);
          uVar22 = ((uint)((byte)((int)uVar9 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar9 >> 0x1f) >> 1
                   ) ^ uVar13;
          uVar10 = (uint)((int)uVar9 >> 0x1f) >> 1 ^ uVar9;
          if ((int)(uVar10 - (uVar29 + (uVar22 < uVar11))) < 0 ==
              (SBORROW4(uVar10,uVar29) != SBORROW4(uVar10 - uVar29,(uint)(uVar22 < uVar11)))) {
            uVar27 = 2;
            if (uVar30 != 2) {
              do {
                uVar31 = *(uint *)(*(int *)(piVar6[uVar27] + 4) + 0xc);
                uVar8 = *(uint *)(*(int *)(piVar6[uVar27] + 4) + 8);
                uVar24 = (uint)((int)uVar31 >> 0x1f) >> 1 ^ uVar31;
                uVar21 = (uint)((int)uVar9 >> 0x1f) >> 1 ^ uVar9;
                bVar33 = (((uint)((byte)((int)uVar31 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar31 >> 0x1f) >> 1) ^ uVar8) <
                         (((uint)((byte)((int)uVar9 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar9 >> 0x1f) >> 1) ^ uVar13);
                if ((int)(uVar24 - (uVar21 + bVar33)) < 0 !=
                    (SBORROW4(uVar24,uVar21) != SBORROW4(uVar24 - uVar21,(uint)bVar33)))
                goto LAB_00b85318;
                uVar27 = uVar27 + 1;
                uVar13 = uVar8;
                uVar9 = uVar31;
              } while (uVar30 != uVar27);
              uVar27 = uVar30;
              goto LAB_00b85318;
            }
          }
          else if (uVar30 == 2) {
            uVar27 = 2;
            uVar30 = 1;
LAB_00b8534c:
            piVar25 = piVar6;
            piVar15 = (int *)(param_1 + -4 + uVar27 * 4 + uVar28 * 4);
            do {
              iVar16 = *piVar15;
              uVar30 = uVar30 - 1;
              *piVar15 = *piVar25;
              *piVar25 = iVar16;
              piVar25 = piVar25 + 1;
              piVar15 = piVar15 + -1;
            } while (uVar30 != 0);
          }
          else {
            uVar27 = 2;
            do {
              uVar24 = *(uint *)(*(int *)(piVar6[uVar27] + 4) + 0xc);
              uVar8 = *(uint *)(*(int *)(piVar6[uVar27] + 4) + 8);
              uVar31 = (uint)((int)uVar24 >> 0x1f) >> 1 ^ uVar24;
              uVar21 = (uint)((int)uVar9 >> 0x1f) >> 1 ^ uVar9;
              bVar33 = (((uint)((byte)((int)uVar24 >> 0x1f) & 1) << 0x1f |
                        (uint)((int)uVar24 >> 0x1f) >> 1) ^ uVar8) <
                       (((uint)((byte)((int)uVar9 >> 0x1f) & 1) << 0x1f |
                        (uint)((int)uVar9 >> 0x1f) >> 1) ^ uVar13);
              if ((int)(uVar31 - (uVar21 + bVar33)) < 0 ==
                  (SBORROW4(uVar31,uVar21) != SBORROW4(uVar31 - uVar21,(uint)bVar33)))
              goto LAB_00b85318;
              uVar27 = uVar27 + 1;
              uVar13 = uVar8;
              uVar9 = uVar24;
            } while (uVar30 != uVar27);
            uVar27 = uVar30;
LAB_00b85318:
            if (uVar27 < uVar5) goto LAB_00b84e80;
            if ((int)(uVar10 - (uVar29 + (uVar22 < uVar11))) < 0 !=
                (SBORROW4(uVar10,uVar29) != SBORROW4(uVar10 - uVar29,(uint)(uVar22 < uVar11)))) {
              uVar30 = uVar27 >> 1;
              if (uVar30 != 0) goto LAB_00b8534c;
              uVar27 = 1;
            }
          }
        }
        uVar30 = uVar27 << 1 | 1;
      }
      uVar9 = uVar28 - (uVar19 >> 1);
      uVar10 = uVar9 + uVar28;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar10;
      uVar11 = (uVar30 >> 1) + uVar28 * 2;
      lVar2 = (ulonglong)uVar11 * (uVar4 & 0xffffffff);
      uVar13 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar9 = iVar3 * uVar11 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar9,uVar28) * (int)uVar4 +
              uVar10 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar9 != 0) {
        uVar13 = LZCOUNT(uVar9);
      }
      bVar12 = (byte)uVar13;
      if (1 < uVar17) goto LAB_00b84ec8;
LAB_00b853f8:
      abStack_69[uVar17 + 3] = bVar12;
      local_17c[uVar17 + 3] = uVar19;
      uVar13 = uVar19;
      uVar19 = uVar30;
    }
    else {
      if (uVar17 < 2) goto LAB_00b853f8;
LAB_00b84ec8:
      do {
        while( true ) {
          uVar9 = uVar17 - 1;
          if (abStack_69[uVar17 + 2] < uVar13) goto LAB_00b85180;
          uVar22 = local_17c[uVar17 + 2];
          uVar10 = uVar22 >> 1;
          uVar11 = uVar10 + (uVar19 >> 1);
          uVar17 = uVar9;
          if ((uVar11 <= param_4) && (((uVar22 | uVar19) & 1) == 0)) break;
          piVar25 = (int *)(param_1 + (uVar28 - uVar11) * 4);
          if ((uVar22 & 1) == 0) {
            FUN_00b8545c(piVar25,uVar10,param_3,param_4,LZCOUNT(uVar10 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar19 & 1) == 0) {
            FUN_00b8545c(piVar25 + uVar10,uVar19 >> 1,param_3,param_4,
                         LZCOUNT(uVar19 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar29 = uVar19 >> 1;
          if (1 < uVar22 && 1 < uVar19) {
            uVar19 = uVar10;
            if (uVar29 < uVar10) {
              uVar19 = uVar29;
            }
            if (uVar19 <= param_4) {
              piVar23 = piVar25 + uVar10;
              piVar15 = piVar25;
              if (uVar29 < uVar10) {
                piVar15 = piVar23;
              }
              FUN_016dd1aa(param_3,piVar15,uVar19 << 2);
              piVar7 = param_3 + uVar19;
              piVar15 = param_3;
              if (uVar29 < uVar10) {
                piVar14 = (int *)(param_1 + -4 + uVar28 * 4);
                do {
                  iVar32 = piVar23[-1];
                  iVar16 = piVar7[-1];
                  iVar20 = *(int *)(iVar32 + 4);
                  iVar18 = *(int *)(iVar16 + 4);
                  uVar22 = *(uint *)(iVar20 + 0xc);
                  uVar19 = *(uint *)(iVar18 + 0xc);
                  uVar29 = (uint)((int)uVar22 >> 0x1f) >> 1 ^ uVar22;
                  uVar10 = (uint)((int)uVar19 >> 0x1f) >> 1 ^ uVar19;
                  bVar33 = (((uint)((byte)((int)uVar19 >> 0x1f) & 1) << 0x1f |
                            (uint)((int)uVar19 >> 0x1f) >> 1) ^ *(uint *)(iVar18 + 8)) <
                           (((uint)((byte)((int)uVar22 >> 0x1f) & 1) << 0x1f |
                            (uint)((int)uVar22 >> 0x1f) >> 1) ^ *(uint *)(iVar20 + 8));
                  bVar34 = SBORROW4(uVar10,uVar29) != SBORROW4(uVar10 - uVar29,(uint)bVar33);
                  bVar33 = (int)(uVar10 - (uVar29 + bVar33)) < 0;
                  uVar19 = (uint)(bVar33 != bVar34);
                  if (uVar19 != 0) {
                    iVar16 = iVar32;
                  }
                  piVar23 = piVar23 + -1 + (bVar33 == bVar34);
                  piVar7 = piVar7 + -1 + uVar19;
                  *piVar14 = iVar16;
                  piVar26 = piVar23;
                } while ((piVar23 != piVar25) && (piVar14 = piVar14 + -1, piVar7 != param_3));
              }
              else {
                do {
                  iVar16 = *(int *)(*piVar15 + 4);
                  iVar18 = *(int *)(*piVar23 + 4);
                  uVar22 = *(uint *)(iVar16 + 0xc);
                  uVar19 = *(uint *)(iVar18 + 0xc);
                  uVar29 = (uint)((int)uVar22 >> 0x1f) >> 1 ^ uVar22;
                  uVar10 = (uint)((int)uVar19 >> 0x1f) >> 1 ^ uVar19;
                  bVar33 = (((uint)((byte)((int)uVar19 >> 0x1f) & 1) << 0x1f |
                            (uint)((int)uVar19 >> 0x1f) >> 1) ^ *(uint *)(iVar18 + 8)) <
                           (((uint)((byte)((int)uVar22 >> 0x1f) & 1) << 0x1f |
                            (uint)((int)uVar22 >> 0x1f) >> 1) ^ *(uint *)(iVar16 + 8));
                  bVar34 = SBORROW4(uVar10,uVar29) != SBORROW4(uVar10 - uVar29,(uint)bVar33);
                  bVar33 = (int)(uVar10 - (uVar29 + bVar33)) < 0;
                  uVar19 = (uint)(bVar33 != bVar34);
                  iVar16 = *piVar15;
                  if (uVar19 != 0) {
                    iVar16 = *piVar23;
                  }
                  piVar15 = piVar15 + (bVar33 == bVar34);
                  piVar26 = piVar25 + 1;
                  *piVar25 = iVar16;
                  if (piVar15 == piVar7) break;
                  piVar23 = piVar23 + uVar19;
                  piVar25 = piVar26;
                } while (piVar23 != piVar6);
              }
              FUN_016dd1aa(piVar26,piVar15,(int)piVar7 - (int)piVar15);
            }
          }
          uVar19 = uVar11 * 2 | 1;
          if (uVar9 < 2) goto LAB_00b8517c;
        }
        uVar19 = uVar11 * 2;
      } while (1 < uVar9);
LAB_00b8517c:
      uVar17 = 1;
LAB_00b85180:
      abStack_69[uVar17 + 3] = (byte)uVar13;
      local_17c[uVar17 + 3] = uVar19;
      uVar13 = uVar19;
      uVar19 = uVar30;
    }
    if (param_2 <= uVar28) {
      if ((uVar13 & 1) == 0) {
        FUN_00b8545c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar28 = uVar28 + (uVar19 >> 1);
    uVar17 = uVar17 + 1;
  } while( true );
}

