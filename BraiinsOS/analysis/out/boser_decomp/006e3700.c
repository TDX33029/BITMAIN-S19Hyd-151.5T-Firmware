// FUN_006e3700 @ 006e3700 size=1600 calls_out=4 calls_in=2
// strings: 

void FUN_006e3700(int param_1,uint param_2,int *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  int *piVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int *piVar26;
  ulonglong uVar27;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar27 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar27 & 0xffffffff);
  uVar5 = uVar27 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar27 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar27;
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
    iVar13 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar13) + (param_2 >> iVar13) >> 1;
  }
  uVar19 = 0;
  uVar20 = 0;
  uVar22 = 1;
  do {
    uVar14 = 0;
    uVar17 = 1;
    piVar7 = (int *)(param_1 + uVar19 * 4);
    if (uVar19 < param_2) {
      uVar17 = param_2 - uVar19;
      if (uVar17 < uVar6) {
LAB_006e37f0:
        if (param_5 == 0) {
          if (uVar6 <= uVar17) {
            uVar17 = uVar6;
          }
          uVar17 = uVar17 << 1;
        }
        else {
          if (0x1f < uVar17) {
            uVar17 = 0x20;
          }
          FUN_006d42c8(piVar7,uVar17,param_3,param_4,0,0);
          uVar17 = uVar17 << 1 | 1;
        }
      }
      else {
        if (uVar17 < 2) {
          uVar14 = uVar17;
        }
        else {
          uVar25 = *(undefined4 *)(piVar7[1] + 4);
          uVar8 = *(uint *)(piVar7[1] + 8);
          uVar9 = *(uint *)(*piVar7 + 8);
          uVar14 = uVar9;
          if (uVar8 < uVar9) {
            uVar14 = uVar8;
          }
          iVar13 = FUN_01bed842(uVar25,*(undefined4 *)(*piVar7 + 4),uVar14);
          if (iVar13 == 0) {
            iVar13 = uVar8 - uVar9;
          }
          if (iVar13 < 0) {
            if (uVar17 != 2) {
              uVar14 = 2;
              do {
                uVar10 = *(uint *)(piVar7[uVar14] + 8);
                uVar24 = *(undefined4 *)(piVar7[uVar14] + 4);
                uVar9 = uVar8;
                if (uVar10 < uVar8) {
                  uVar9 = uVar10;
                }
                uVar9 = FUN_01bed842(uVar24,uVar25,uVar9);
                if (uVar9 == 0) {
                  uVar9 = uVar10 - uVar8;
                }
                if (uVar9 < 0x80000000) goto LAB_006e3970;
                uVar14 = uVar14 + 1;
                uVar8 = uVar10;
                uVar25 = uVar24;
              } while (uVar17 != uVar14);
              goto LAB_006e396c;
            }
            uVar14 = 2;
            uVar17 = 1;
LAB_006e39a0:
            piVar11 = (int *)(param_1 + -4 + uVar14 * 4 + uVar19 * 4);
            piVar18 = piVar7;
            do {
              iVar13 = *piVar11;
              uVar17 = uVar17 - 1;
              *piVar11 = *piVar18;
              *piVar18 = iVar13;
              piVar11 = piVar11 + -1;
              piVar18 = piVar18 + 1;
            } while (uVar17 != 0);
          }
          else {
            uVar14 = 2;
            if (uVar17 != 2) {
              do {
                uVar10 = *(uint *)(piVar7[uVar14] + 8);
                uVar24 = *(undefined4 *)(piVar7[uVar14] + 4);
                uVar9 = uVar8;
                if (uVar10 < uVar8) {
                  uVar9 = uVar10;
                }
                iVar15 = FUN_01bed842(uVar24,uVar25,uVar9);
                if (iVar15 == 0) {
                  iVar15 = uVar10 - uVar8;
                }
                if (iVar15 < 0) goto LAB_006e3970;
                uVar14 = uVar14 + 1;
                uVar8 = uVar10;
                uVar25 = uVar24;
              } while (uVar17 != uVar14);
LAB_006e396c:
              uVar14 = uVar17;
LAB_006e3970:
              if (uVar14 < uVar6) goto LAB_006e37f0;
              if (iVar13 < 0) {
                uVar17 = uVar14 >> 1;
                if (uVar17 != 0) goto LAB_006e39a0;
                uVar14 = 1;
              }
            }
          }
        }
        uVar17 = uVar14 << 1 | 1;
      }
      uVar8 = uVar19 - (uVar22 >> 1);
      uVar9 = uVar8 + uVar19;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar9;
      uVar10 = (uVar17 >> 1) + uVar19 * 2;
      lVar3 = (ulonglong)uVar10 * (uVar5 & 0xffffffff);
      uVar14 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar8 = iVar4 * uVar10 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar8,uVar19) * (int)uVar5 +
              uVar9 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar8 != 0) {
        uVar14 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar20) {
      do {
        uVar8 = uVar20 - 1;
        if (abStack_67[uVar20] < uVar14) goto LAB_006e3cdc;
        uVar10 = local_170[uVar8];
        uVar20 = uVar10 >> 1;
        uVar9 = uVar20 + (uVar22 >> 1);
        if ((param_4 < uVar9) || (((uVar10 | uVar22) & 1) != 0)) {
          piVar11 = (int *)(param_1 + (uVar19 - uVar9) * 4);
          if ((uVar10 & 1) == 0) {
            FUN_006d42c8(piVar11,uVar20,param_3,param_4,LZCOUNT(uVar20 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar22 >> 1;
          if ((uVar22 & 1) == 0) {
            FUN_006d42c8(piVar11 + uVar20,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0);
          }
          if (1 < uVar10 && 1 < uVar22) {
            uVar22 = uVar20;
            if (uVar1 < uVar20) {
              uVar22 = uVar1;
            }
            if (uVar22 <= param_4) {
              piVar18 = piVar11 + uVar20;
              piVar23 = piVar11;
              if (uVar1 < uVar20) {
                piVar23 = piVar18;
              }
              piVar12 = (int *)FUN_01bed4e2(param_3,piVar23,uVar22 << 2);
              piVar26 = param_3 + uVar22;
              piVar21 = param_3;
              if (uVar1 < uVar20) {
                piVar18 = (int *)(param_1 + -4 + uVar19 * 4);
                do {
                  iVar13 = piVar23[-1];
                  iVar15 = piVar26[-1];
                  uVar10 = *(uint *)(iVar13 + 8);
                  uVar20 = *(uint *)(iVar15 + 8);
                  uVar22 = uVar10;
                  if (uVar20 < uVar10) {
                    uVar22 = uVar20;
                  }
                  uVar22 = FUN_01bed842(*(undefined4 *)(iVar15 + 4),*(undefined4 *)(iVar13 + 4),
                                        uVar22);
                  if (uVar22 == 0) {
                    uVar22 = uVar20 - uVar10;
                  }
                  piVar12 = piVar23;
                  if (uVar22 < 0x80000000) {
                    piVar12 = piVar26;
                  }
                  piVar23 = piVar23 + -1 + -((int)~uVar22 >> 0x1f);
                  piVar26 = piVar26 + -1 + -((int)uVar22 >> 0x1f);
                  *piVar18 = piVar12[-1];
                } while ((piVar23 != piVar11) && (piVar18 = piVar18 + -1, piVar26 != param_3));
              }
              else {
                if (uVar22 != 0) {
                  piVar12 = piVar7;
                }
                if (!(uVar22 == 0 || piVar18 == piVar12)) {
                  piVar11 = piVar23;
                  do {
                    uVar10 = *(uint *)(*piVar21 + 8);
                    uVar20 = *(uint *)(*piVar18 + 8);
                    uVar22 = uVar10;
                    if (uVar20 < uVar10) {
                      uVar22 = uVar20;
                    }
                    piVar12 = (int *)FUN_01bed842(*(undefined4 *)(*piVar18 + 4),
                                                  *(undefined4 *)(*piVar21 + 4),uVar22);
                    if (piVar12 == (int *)0x0) {
                      piVar12 = (int *)(uVar20 - uVar10);
                    }
                    piVar16 = piVar18;
                    if (piVar12 < &DAT_80000000) {
                      piVar16 = piVar21;
                    }
                    piVar23 = piVar11 + 1;
                    *piVar11 = *piVar16;
                    piVar21 = piVar21 + -((int)~(uint)piVar12 >> 0x1f);
                    if (piVar21 != piVar26) {
                      piVar18 = piVar18 + -((int)piVar12 >> 0x1f);
                      piVar12 = piVar7;
                    }
                    piVar11 = piVar23;
                  } while (piVar21 != piVar26 && piVar18 != piVar12);
                }
              }
              FUN_01bed4e2(piVar23,piVar21,(int)piVar26 - (int)piVar21);
            }
          }
          uVar22 = uVar9 * 2 | 1;
        }
        else {
          uVar22 = uVar9 * 2;
        }
        uVar20 = uVar8;
      } while (1 < uVar8);
      uVar20 = 1;
    }
LAB_006e3cdc:
    abStack_67[uVar20 + 1] = (byte)uVar14;
    local_170[uVar20] = uVar22;
    if (param_2 <= uVar19) {
      if ((uVar22 & 1) == 0) {
        FUN_006d42c8(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar19 = uVar19 + (uVar17 >> 1);
    uVar20 = uVar20 + 1;
    uVar22 = uVar17;
  } while( true );
}

