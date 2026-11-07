// FUN_0165a8d4 @ 0165a8d4 size=1624 calls_out=4 calls_in=2
// strings: 

void FUN_0165a8d4(int param_1,uint param_2,int *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  int *piVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  int *piVar27;
  ulonglong uVar28;
  uint local_18c;
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
    iVar13 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar13) + (param_2 >> iVar13) >> 1;
  }
  uVar26 = 0;
  uVar14 = 0;
  uVar24 = 1;
  do {
    uVar16 = 0;
    piVar7 = (int *)(param_1 + uVar26 * 8);
    local_18c = 1;
    if (uVar26 < param_2) {
      local_18c = param_2 - uVar26;
      if (local_18c < uVar6) {
LAB_0165a9cc:
        if (param_5 == 0) {
          if (uVar6 <= local_18c) {
            local_18c = uVar6;
          }
          local_18c = local_18c << 1;
        }
        else {
          if (0x1f < local_18c) {
            local_18c = 0x20;
          }
          FUN_0165be70(piVar7,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar16 = local_18c;
        }
        else {
          uVar10 = *(uint *)(*piVar7 + 8);
          uVar20 = *(undefined4 *)(piVar7[2] + 4);
          uVar9 = *(uint *)(piVar7[2] + 8);
          uVar16 = uVar10;
          if (uVar9 < uVar10) {
            uVar16 = uVar9;
          }
          iVar13 = FUN_01bed842(uVar20,*(undefined4 *)(*piVar7 + 4),uVar16);
          if (iVar13 == 0) {
            iVar13 = uVar9 - uVar10;
          }
          if (iVar13 < 0) {
            if (local_18c != 2) {
              uVar16 = 2;
              do {
                uVar17 = *(undefined4 *)(piVar7[uVar16 * 2] + 4);
                uVar12 = *(uint *)(piVar7[uVar16 * 2] + 8);
                uVar10 = uVar9;
                if (uVar12 < uVar9) {
                  uVar10 = uVar12;
                }
                uVar10 = FUN_01bed842(uVar17,uVar20,uVar10);
                if (uVar10 == 0) {
                  uVar10 = uVar12 - uVar9;
                }
                if (uVar10 < 0x80000000) goto LAB_0165ab3c;
                uVar16 = uVar16 + 1;
                uVar20 = uVar17;
                uVar9 = uVar12;
              } while (local_18c != uVar16);
              goto LAB_0165ab38;
            }
            uVar16 = 2;
            uVar9 = 1;
LAB_0165ab64:
            iVar13 = uVar26 * 8 + uVar16 * 8;
            iVar8 = 0;
            iVar18 = 0;
            do {
              piVar27 = (int *)(param_1 + -8 + iVar13 + iVar8 * 8);
              iVar21 = *piVar27;
              piVar19 = piVar7 + iVar18 * 2;
              iVar18 = iVar18 + 1;
              *piVar27 = *piVar19;
              iVar22 = piVar27[1];
              *(int *)(param_1 + -4 + iVar13 + iVar8 * 8) = piVar7[iVar8 * -2 + 1];
              iVar8 = iVar8 + -1;
              *piVar19 = iVar21;
              piVar19[1] = iVar22;
            } while (-iVar8 != uVar9);
          }
          else {
            uVar16 = 2;
            if (local_18c != 2) {
              do {
                uVar17 = *(undefined4 *)(piVar7[uVar16 * 2] + 4);
                uVar12 = *(uint *)(piVar7[uVar16 * 2] + 8);
                uVar10 = uVar9;
                if (uVar12 < uVar9) {
                  uVar10 = uVar12;
                }
                iVar8 = FUN_01bed842(uVar17,uVar20,uVar10);
                if (iVar8 == 0) {
                  iVar8 = uVar12 - uVar9;
                }
                if (iVar8 < 0) goto LAB_0165ab3c;
                uVar16 = uVar16 + 1;
                uVar20 = uVar17;
                uVar9 = uVar12;
              } while (local_18c != uVar16);
LAB_0165ab38:
              uVar16 = local_18c;
LAB_0165ab3c:
              if (uVar16 < uVar6) goto LAB_0165a9cc;
              if (iVar13 < 0) {
                uVar9 = uVar16 >> 1;
                if (uVar9 != 0) goto LAB_0165ab64;
                uVar16 = 1;
              }
            }
          }
        }
        local_18c = uVar16 << 1 | 1;
      }
      uVar9 = uVar26 - (uVar24 >> 1);
      uVar10 = uVar9 + uVar26;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar10;
      uVar12 = (local_18c >> 1) + uVar26 * 2;
      lVar3 = (ulonglong)uVar12 * (uVar5 & 0xffffffff);
      uVar16 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar9 = iVar4 * uVar12 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar9,uVar26) * (int)uVar5 +
              uVar10 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar9 != 0) {
        uVar16 = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar14) {
      do {
        uVar9 = uVar14 - 1;
        if (abStack_67[uVar14] < uVar16) goto LAB_0165aec8;
        uVar12 = local_170[uVar9];
        uVar14 = uVar12 >> 1;
        uVar10 = uVar14 + (uVar24 >> 1);
        if ((param_4 < uVar10) || (((uVar12 | uVar24) & 1) != 0)) {
          piVar27 = (int *)(param_1 + (uVar26 - uVar10) * 8);
          if ((uVar12 & 1) == 0) {
            FUN_0165be70(piVar27,uVar14,param_3,param_4,LZCOUNT(uVar14 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar24 >> 1;
          if ((uVar24 & 1) == 0) {
            FUN_0165be70(piVar27 + uVar14 * 2,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0
                        );
          }
          if (1 < uVar12 && 1 < uVar24) {
            uVar24 = uVar14;
            if (uVar1 < uVar14) {
              uVar24 = uVar1;
            }
            if (uVar24 <= param_4) {
              piVar25 = piVar27 + uVar14 * 2;
              piVar19 = piVar27;
              if (uVar1 < uVar14) {
                piVar19 = piVar25;
              }
              piVar11 = (int *)FUN_01bed4e2(param_3,piVar19,uVar24 << 3);
              piVar23 = param_3 + uVar24 * 2;
              piVar15 = param_3;
              if (uVar1 < uVar14) {
                piVar25 = (int *)(param_1 + -8 + uVar26 * 8);
                do {
                  piVar19 = piVar19 + -2;
                  piVar23 = piVar23 + -2;
                  uVar12 = *(uint *)(*piVar19 + 8);
                  uVar14 = *(uint *)(*piVar23 + 8);
                  uVar24 = uVar12;
                  if (uVar14 < uVar12) {
                    uVar24 = uVar14;
                  }
                  uVar24 = FUN_01bed842(*(undefined4 *)(*piVar23 + 4),*(undefined4 *)(*piVar19 + 4),
                                        uVar24);
                  if (uVar24 == 0) {
                    uVar24 = uVar14 - uVar12;
                  }
                  piVar11 = piVar19;
                  if (uVar24 < 0x80000000) {
                    piVar11 = piVar23;
                  }
                  iVar13 = piVar11[1];
                  *piVar25 = *piVar11;
                  piVar25[1] = iVar13;
                  piVar23 = (int *)((int)piVar23 + (uVar24 >> 0x1c & 8));
                  piVar19 = (int *)((int)piVar19 + (~uVar24 >> 0x1c & 8));
                } while ((piVar19 != piVar27) && (piVar25 = piVar25 + -2, piVar23 != param_3));
              }
              else {
                if (uVar24 != 0) {
                  piVar11 = piVar7;
                }
                if (uVar24 != 0 && piVar25 != piVar11) {
                  do {
                    uVar12 = *(uint *)(*piVar15 + 8);
                    uVar14 = *(uint *)(*piVar25 + 8);
                    uVar24 = uVar12;
                    if (uVar14 < uVar12) {
                      uVar24 = uVar14;
                    }
                    uVar24 = FUN_01bed842(*(undefined4 *)(*piVar25 + 4),
                                          *(undefined4 *)(*piVar15 + 4),uVar24);
                    if (uVar24 == 0) {
                      uVar24 = uVar14 - uVar12;
                    }
                    piVar27 = piVar25;
                    if (uVar24 < 0x80000000) {
                      piVar27 = piVar15;
                    }
                    iVar13 = piVar27[1];
                    *piVar19 = *piVar27;
                    piVar19[1] = iVar13;
                    piVar15 = (int *)((int)piVar15 + (~uVar24 >> 0x1c & 8));
                    piVar19 = piVar19 + 2;
                  } while ((piVar15 != piVar23) &&
                          (piVar25 = (int *)((int)piVar25 + (uVar24 >> 0x1c & 8)), piVar25 != piVar7
                          ));
                }
              }
              FUN_01bed4e2(piVar19,piVar15,(int)piVar23 - (int)piVar15);
            }
          }
          uVar24 = uVar10 * 2 | 1;
        }
        else {
          uVar24 = uVar10 * 2;
        }
        uVar14 = uVar9;
      } while (1 < uVar9);
      uVar14 = 1;
    }
LAB_0165aec8:
    abStack_67[uVar14 + 1] = (byte)uVar16;
    local_170[uVar14] = uVar24;
    if (param_2 <= uVar26) {
      if ((uVar24 & 1) == 0) {
        FUN_0165be70(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar14 = uVar14 + 1;
    uVar26 = uVar26 + (local_18c >> 1);
    uVar24 = local_18c;
  } while( true );
}

