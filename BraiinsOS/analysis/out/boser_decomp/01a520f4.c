// FUN_01a520f4 @ 01a520f4 size=1732 calls_out=4 calls_in=2
// strings: 

void FUN_01a520f4(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  ulonglong uVar26;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar26 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar26 & 0xffffffff);
  uVar4 = uVar26 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar26 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar26;
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
    iVar17 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar17) + (param_2 >> iVar17) >> 1;
  }
  uVar24 = 0;
  uVar16 = 0;
  uVar20 = 1;
  do {
    uVar22 = 1;
    local_18c = 0;
    if (uVar24 < param_2) {
      iVar17 = param_1 + uVar24 * 0xc0;
      uVar22 = param_2 - uVar24;
      if (uVar22 < uVar5) {
LAB_01a521f8:
        if (param_5 == 0) {
          if (uVar5 <= uVar22) {
            uVar22 = uVar5;
          }
          uVar22 = uVar22 << 1;
        }
        else {
          if (0x1f < uVar22) {
            uVar22 = 0x20;
          }
          FUN_01a51920(iVar17,uVar22,param_3,param_4,0,0);
          uVar22 = uVar22 << 1 | 1;
        }
      }
      else {
        if (uVar22 < 2) {
          uVar10 = uVar22;
        }
        else {
          uVar18 = *(uint *)(iVar17 + 0x78);
          uVar13 = *(uint *)(iVar17 + 0x138);
          uVar9 = *(uint *)(iVar17 + 0x134);
          uVar10 = uVar18;
          if (uVar13 < uVar18) {
            uVar10 = uVar13;
          }
          iVar6 = FUN_01bed842(uVar9,*(undefined4 *)(iVar17 + 0x74),uVar10);
          if (iVar6 == 0) {
            iVar6 = uVar13 - uVar18;
          }
          if (iVar6 < 0) {
            if (uVar22 == 2) {
              uVar10 = 2;
              uVar22 = 1;
LAB_01a523c8:
              uVar9 = 0;
              iVar6 = param_1 + -0xc0 + uVar24 * 0xc0 + uVar10 * 0xc0;
              do {
                iVar7 = 0;
                do {
                  uVar8 = *(undefined4 *)(iVar17 + iVar7 * -4);
                  *(undefined4 *)(iVar17 + iVar7 * -4) = *(undefined4 *)(iVar6 + iVar7 * -4);
                  *(undefined4 *)(iVar6 + iVar7 * -4) = uVar8;
                  bVar25 = iVar7 != -0x2f;
                  iVar7 = iVar7 + -1;
                } while (bVar25);
                uVar9 = uVar9 + 1;
                iVar17 = iVar17 + 0xc0;
                iVar6 = iVar6 + -0xc0;
              } while (uVar9 != uVar22);
            }
            else {
              uVar10 = 2;
              puVar14 = (uint *)(param_1 + 0x1f8 + uVar24 * 0xc0);
              do {
                uVar11 = puVar14[-1];
                uVar21 = *puVar14;
                uVar18 = uVar13;
                if (uVar21 < uVar13) {
                  uVar18 = uVar21;
                }
                uVar9 = FUN_01bed842(uVar11,uVar9,uVar18);
                if (uVar9 == 0) {
                  uVar9 = uVar21 - uVar13;
                }
                if (uVar9 < 0x80000000) goto LAB_01a52394;
                puVar14 = puVar14 + 0x30;
                uVar10 = uVar10 + 1;
                uVar9 = uVar11;
                uVar13 = uVar21;
              } while (uVar22 != uVar10);
LAB_01a52384:
              uVar10 = uVar22;
LAB_01a52394:
              if (uVar10 < uVar5) goto LAB_01a521f8;
              if (iVar6 < 0) {
                uVar22 = uVar10 >> 1;
                if (uVar22 != 0) goto LAB_01a523c8;
                uVar10 = 1;
              }
            }
          }
          else {
            uVar10 = 2;
            if (uVar22 != 2) {
              puVar14 = (uint *)(param_1 + 0x1f8 + uVar24 * 0xc0);
              do {
                uVar11 = puVar14[-1];
                uVar21 = *puVar14;
                uVar18 = uVar13;
                if (uVar21 < uVar13) {
                  uVar18 = uVar21;
                }
                iVar7 = FUN_01bed842(uVar11,uVar9,uVar18);
                if (iVar7 == 0) {
                  iVar7 = uVar21 - uVar13;
                }
                if (iVar7 < 0) goto LAB_01a52394;
                puVar14 = puVar14 + 0x30;
                uVar10 = uVar10 + 1;
                uVar9 = uVar11;
                uVar13 = uVar21;
              } while (uVar22 != uVar10);
              goto LAB_01a52384;
            }
          }
        }
        uVar22 = uVar10 << 1 | 1;
      }
      uVar9 = uVar24 - (uVar20 >> 1);
      uVar10 = uVar9 + uVar24;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar10;
      uVar13 = (uVar22 >> 1) + uVar24 * 2;
      lVar2 = (ulonglong)uVar13 * (uVar4 & 0xffffffff);
      local_18c = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar9 = iVar3 * uVar13 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar9,uVar24) * (int)uVar4 +
              uVar10 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar9 != 0) {
        local_18c = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar16) {
      uVar9 = param_1 + uVar24 * 0xc0;
      do {
        uVar10 = uVar16 - 1;
        if (abStack_67[uVar16] < local_18c) goto LAB_01a5274c;
        uVar18 = local_170[uVar10];
        uVar16 = uVar18 >> 1;
        uVar13 = uVar16 + (uVar20 >> 1);
        if ((param_4 < uVar13) || (((uVar18 | uVar20) & 1) != 0)) {
          uVar11 = param_1 + (uVar24 - uVar13) * 0xc0;
          if ((uVar18 & 1) == 0) {
            FUN_01a51920(uVar11,uVar16,param_3,param_4,LZCOUNT(uVar16 | 1) << 1 ^ 0x3e,0);
          }
          uVar21 = uVar20 >> 1;
          if ((uVar20 & 1) == 0) {
            FUN_01a51920(uVar11 + uVar16 * 0xc0,uVar21,param_3,param_4,
                         LZCOUNT(uVar21 | 1) << 1 ^ 0x3e,0);
          }
          if (1 < uVar18 && 1 < uVar20) {
            uVar20 = uVar16;
            if (uVar21 < uVar16) {
              uVar20 = uVar21;
            }
            if (uVar20 <= param_4) {
              uVar18 = uVar11 + uVar16 * 0xc0;
              uVar19 = uVar11;
              if (uVar21 < uVar16) {
                uVar19 = uVar18;
              }
              uVar12 = FUN_01bed4e2(param_3,uVar19,uVar20 * 0xc0);
              uVar23 = param_3 + uVar20 * 0xc0;
              uVar15 = param_3;
              if (uVar21 < uVar16) {
                iVar17 = param_1 + -0xc0 + uVar24 * 0xc0;
                do {
                  uVar18 = *(uint *)(uVar19 - 0x48);
                  uVar16 = *(uint *)(uVar23 - 0x48);
                  uVar20 = uVar18;
                  if (uVar16 < uVar18) {
                    uVar20 = uVar16;
                  }
                  uVar20 = FUN_01bed842(*(undefined4 *)(uVar23 - 0x4c),
                                        *(undefined4 *)(uVar19 - 0x4c),uVar20);
                  if (uVar20 == 0) {
                    uVar20 = uVar16 - uVar18;
                  }
                  iVar6 = uVar19 - 0xc0;
                  if (uVar20 < 0x80000000) {
                    iVar6 = uVar23 - 0xc0;
                  }
                  FUN_01bed4e2(iVar17,iVar6,0xc0);
                  uVar23 = (uVar23 - 0xc0) + (uVar20 >> 0x1f | (uVar20 >> 0x1f) << 1) * 0x40;
                  uVar20 = uVar20 >> 0x1f ^ 1;
                  uVar19 = (uVar19 - 0xc0) + (uVar20 | uVar20 << 1) * 0x40;
                } while ((uVar19 != uVar11) && (iVar17 = iVar17 + -0xc0, uVar23 != param_3));
              }
              else {
                if (uVar20 != 0) {
                  uVar12 = uVar9;
                }
                if (!(uVar20 == 0 || uVar18 == uVar12)) {
                  do {
                    uVar11 = *(uint *)(uVar15 + 0x78);
                    uVar16 = *(uint *)(uVar18 + 0x78);
                    uVar20 = uVar11;
                    if (uVar16 < uVar11) {
                      uVar20 = uVar16;
                    }
                    uVar20 = FUN_01bed842(*(undefined4 *)(uVar18 + 0x74),
                                          *(undefined4 *)(uVar15 + 0x74),uVar20);
                    if (uVar20 == 0) {
                      uVar20 = uVar16 - uVar11;
                    }
                    uVar16 = uVar18;
                    if (uVar20 < 0x80000000) {
                      uVar16 = uVar15;
                    }
                    FUN_01bed4e2(uVar19,uVar16,0xc0);
                    uVar19 = uVar19 + 0xc0;
                    uVar16 = uVar20 >> 0x1f ^ 1;
                    uVar16 = uVar16 | uVar16 << 1;
                    uVar15 = uVar15 + uVar16 * 0x40;
                    if (uVar15 != uVar23) {
                      uVar18 = uVar18 + (uVar20 >> 0x1f | (uVar20 >> 0x1f) << 1) * 0x40;
                      uVar16 = uVar9;
                    }
                  } while (uVar15 != uVar23 && uVar18 != uVar16);
                }
              }
              FUN_01bed4e2(uVar19,uVar15,uVar23 - uVar15);
            }
          }
          uVar20 = uVar13 * 2 | 1;
        }
        else {
          uVar20 = uVar13 * 2;
        }
        uVar16 = uVar10;
      } while (1 < uVar10);
      uVar16 = 1;
    }
LAB_01a5274c:
    abStack_67[uVar16 + 1] = (byte)local_18c;
    local_170[uVar16] = uVar20;
    if (param_2 <= uVar24) {
      if ((uVar20 & 1) == 0) {
        FUN_01a51920(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar16 = uVar16 + 1;
    uVar24 = uVar24 + (uVar22 >> 1);
    uVar20 = uVar22;
  } while( true );
}

