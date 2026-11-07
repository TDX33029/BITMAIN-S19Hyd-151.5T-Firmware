// FUN_0167c154 @ 0167c154 size=1736 calls_out=4 calls_in=2
// strings: 

void FUN_0167c154(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  ulonglong uVar24;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar24 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar24 & 0xffffffff);
  uVar2 = uVar24 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar24 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar24;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar17 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar17) + (param_2 >> iVar17) >> 1;
  }
  uVar22 = 0;
  uVar12 = 0;
  uVar18 = 1;
  do {
    uVar7 = 0;
    uVar11 = 1;
    if (uVar22 < param_2) {
      uVar11 = param_2 - uVar22;
      iVar17 = param_1 + uVar22 * 0xc0;
      if (uVar11 < uVar4) {
LAB_0167c250:
        if (param_5 == 0) {
          if (uVar4 <= uVar11) {
            uVar11 = uVar4;
          }
          uVar11 = uVar11 << 1;
        }
        else {
          if (0x1f < uVar11) {
            uVar11 = 0x20;
          }
          FUN_016753d8(iVar17,uVar11,param_3,param_4,0,0);
          uVar11 = uVar11 << 1 | 1;
        }
      }
      else {
        if (uVar11 < 2) {
          uVar8 = uVar11;
        }
        else {
          uVar10 = *(uint *)(iVar17 + 0x78);
          uVar9 = *(uint *)(iVar17 + 0x138);
          uVar7 = *(uint *)(iVar17 + 0x134);
          uVar8 = uVar10;
          if (uVar9 < uVar10) {
            uVar8 = uVar9;
          }
          iVar5 = FUN_016dd50a(uVar7,*(undefined4 *)(iVar17 + 0x74),uVar8);
          if (iVar5 == 0) {
            iVar5 = uVar9 - uVar10;
          }
          if (iVar5 < 0) {
            if (uVar11 == 2) {
              uVar8 = 2;
              uVar11 = 1;
LAB_0167c42c:
              iVar5 = param_1 + -0xc0 + uVar22 * 0xc0 + uVar8 * 0xc0;
              uVar7 = 0;
              do {
                iVar6 = 0;
                do {
                  uVar14 = *(undefined4 *)(iVar17 + iVar6 * -4);
                  *(undefined4 *)(iVar17 + iVar6 * -4) = *(undefined4 *)(iVar5 + iVar6 * -4);
                  *(undefined4 *)(iVar5 + iVar6 * -4) = uVar14;
                  bVar23 = iVar6 != -0x2f;
                  iVar6 = iVar6 + -1;
                } while (bVar23);
                uVar7 = uVar7 + 1;
                iVar17 = iVar17 + 0xc0;
                iVar5 = iVar5 + -0xc0;
              } while (uVar7 != uVar11);
            }
            else {
              uVar8 = 2;
              puVar13 = (uint *)(param_1 + 0x1f8 + uVar22 * 0xc0);
              do {
                uVar21 = puVar13[-1];
                uVar15 = *puVar13;
                uVar10 = uVar9;
                if (uVar15 < uVar9) {
                  uVar10 = uVar15;
                }
                uVar7 = FUN_016dd50a(uVar21,uVar7,uVar10);
                if (uVar7 == 0) {
                  uVar7 = uVar15 - uVar9;
                }
                if (uVar7 < 0x80000000) goto LAB_0167c400;
                puVar13 = puVar13 + 0x30;
                uVar8 = uVar8 + 1;
                uVar7 = uVar21;
                uVar9 = uVar15;
              } while (uVar11 != uVar8);
LAB_0167c3f0:
              uVar8 = uVar11;
LAB_0167c400:
              if (uVar8 < uVar4) goto LAB_0167c250;
              if (iVar5 < 0) {
                uVar11 = uVar8 >> 1;
                if (uVar11 != 0) goto LAB_0167c42c;
                uVar8 = 1;
              }
            }
          }
          else {
            uVar8 = 2;
            if (uVar11 != 2) {
              puVar13 = (uint *)(param_1 + 0x1f8 + uVar22 * 0xc0);
              do {
                uVar21 = puVar13[-1];
                uVar15 = *puVar13;
                uVar10 = uVar9;
                if (uVar15 < uVar9) {
                  uVar10 = uVar15;
                }
                iVar6 = FUN_016dd50a(uVar21,uVar7,uVar10);
                if (iVar6 == 0) {
                  iVar6 = uVar15 - uVar9;
                }
                if (iVar6 < 0) goto LAB_0167c400;
                puVar13 = puVar13 + 0x30;
                uVar8 = uVar8 + 1;
                uVar7 = uVar21;
                uVar9 = uVar15;
              } while (uVar11 != uVar8);
              goto LAB_0167c3f0;
            }
          }
        }
        uVar11 = uVar8 << 1 | 1;
      }
      uVar7 = uVar22 - (uVar18 >> 1);
      uVar8 = uVar22 + (uVar11 >> 1);
      uVar9 = uVar8 + uVar22;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar9;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar7,uVar22),uVar7 + uVar22);
      uVar8 = (uint)CARRY4(uVar8,uVar22) * (int)uVar2 +
              uVar9 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
              (uint)((ulonglong)lVar3 >> 0x20);
      uVar7 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar8 != 0) {
        uVar7 = LZCOUNT(uVar8);
      }
    }
    if (1 < uVar12) {
      do {
        while( true ) {
          uVar8 = uVar12 - 1;
          if (abStack_67[uVar12] < uVar7) goto LAB_0167c7b4;
          uVar15 = local_170[uVar8];
          uVar9 = uVar15 >> 1;
          uVar10 = uVar9 + (uVar18 >> 1);
          uVar12 = uVar8;
          if ((uVar10 <= param_4) && (((uVar15 | uVar18) & 1) == 0)) break;
          uVar21 = param_1 + (uVar22 - uVar10) * 0xc0;
          if ((uVar15 & 1) == 0) {
            FUN_016753d8(uVar21,uVar9,param_3,param_4,LZCOUNT(uVar9 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar18 & 1) == 0) {
            FUN_016753d8(uVar21 + uVar9 * 0xc0,uVar18 >> 1,param_3,param_4,
                         LZCOUNT(uVar18 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar16 = uVar18 >> 1;
          if (1 < uVar15 && 1 < uVar18) {
            uVar18 = uVar9;
            if (uVar16 < uVar9) {
              uVar18 = uVar16;
            }
            if (uVar18 <= param_4) {
              uVar15 = uVar21 + uVar9 * 0xc0;
              uVar20 = uVar21;
              if (uVar16 < uVar9) {
                uVar20 = uVar15;
              }
              FUN_016dd1aa(param_3,uVar20,uVar18 * 0xc0);
              uVar20 = param_3 + uVar18 * 0xc0;
              uVar18 = param_3;
              if (uVar16 < uVar9) {
                iVar17 = param_1 + -0xc0 + uVar22 * 0xc0;
                do {
                  uVar19 = *(uint *)(uVar15 - 0x48);
                  uVar16 = *(uint *)(uVar20 - 0x48);
                  uVar9 = uVar19;
                  if (uVar16 < uVar19) {
                    uVar9 = uVar16;
                  }
                  uVar9 = FUN_016dd50a(*(undefined4 *)(uVar20 - 0x4c),*(undefined4 *)(uVar15 - 0x4c)
                                       ,uVar9);
                  if (uVar9 == 0) {
                    uVar9 = uVar16 - uVar19;
                  }
                  iVar5 = uVar15 - 0xc0;
                  if (uVar9 < 0x80000000) {
                    iVar5 = uVar20 - 0xc0;
                  }
                  FUN_016dd1aa(iVar17,iVar5,0xc0);
                  uVar20 = (uVar20 - 0xc0) + (uVar9 >> 0x1f | (uVar9 >> 0x1f) << 1) * 0x40;
                  uVar9 = uVar9 >> 0x1f ^ 1;
                  uVar15 = (uVar15 - 0xc0) + (uVar9 | uVar9 << 1) * 0x40;
                } while ((uVar15 != uVar21) && (iVar17 = iVar17 + -0xc0, uVar20 != param_3));
                uVar21 = uVar15;
              }
              else {
                do {
                  uVar16 = *(uint *)(uVar18 + 0x78);
                  uVar19 = *(uint *)(uVar15 + 0x78);
                  uVar9 = uVar16;
                  if (uVar19 < uVar16) {
                    uVar9 = uVar19;
                  }
                  uVar9 = FUN_016dd50a(*(undefined4 *)(uVar15 + 0x74),*(undefined4 *)(uVar18 + 0x74)
                                       ,uVar9);
                  if (uVar9 == 0) {
                    uVar9 = uVar19 - uVar16;
                  }
                  uVar16 = uVar15;
                  if (uVar9 < 0x80000000) {
                    uVar16 = uVar18;
                  }
                  FUN_016dd1aa(uVar21,uVar16,0xc0);
                  uVar21 = uVar21 + 0xc0;
                  uVar16 = uVar9 >> 0x1f ^ 1;
                  uVar16 = uVar16 | uVar16 << 1;
                  uVar18 = uVar18 + uVar16 * 0x40;
                  if (uVar18 != uVar20) {
                    uVar15 = uVar15 + (uVar9 >> 0x1f | (uVar9 >> 0x1f) << 1) * 0x40;
                    uVar16 = param_1 + uVar22 * 0xc0;
                  }
                } while (uVar18 != uVar20 && uVar15 != uVar16);
              }
              FUN_016dd1aa(uVar21,uVar18,uVar20 - uVar18);
            }
          }
          uVar18 = uVar10 * 2 | 1;
          if (uVar8 < 2) goto LAB_0167c7ac;
        }
        uVar18 = uVar10 * 2;
      } while (1 < uVar8);
LAB_0167c7ac:
      uVar12 = 1;
    }
LAB_0167c7b4:
    abStack_67[uVar12 + 1] = (byte)uVar7;
    local_170[uVar12] = uVar18;
    if (param_2 <= uVar22) {
      if ((uVar18 & 1) == 0) {
        FUN_016753d8(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar12 = uVar12 + 1;
    uVar22 = uVar22 + (uVar11 >> 1);
    uVar18 = uVar11;
  } while( true );
}

