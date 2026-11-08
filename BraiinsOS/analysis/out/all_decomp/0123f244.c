// FUN_0123f244 @ 0123f244 size=1800 calls_out=4 calls_in=2
// strings: 

void FUN_0123f244(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  uint local_17c [68];
  byte abStack_69 [69];
  
  uVar28 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar28 & 0xffffffff);
  uVar4 = uVar28 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar28 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar28;
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
    iVar11 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar11) + (param_2 >> iVar11) >> 1;
  }
  uVar27 = 0;
  uVar22 = 0;
  uVar26 = 1;
  do {
    uVar10 = 0;
    uVar16 = 1;
    if (uVar27 < param_2) {
      uVar16 = param_2 - uVar27;
      iVar11 = param_1 + uVar27 * 0xc;
      if (uVar16 < uVar5) {
LAB_0123f354:
        if (param_5 == 0) {
          if (uVar5 <= uVar16) {
            uVar16 = uVar5;
          }
          uVar16 = uVar16 << 1;
        }
        else {
          if (0x1f < uVar16) {
            uVar16 = 0x20;
          }
          FUN_0123f94c(iVar11,uVar16,param_3,param_4,0,0);
          uVar16 = uVar16 << 1 | 1;
        }
      }
      else {
        if (uVar16 < 2) {
          uVar10 = uVar16;
        }
        else {
          uVar14 = *(uint *)(iVar11 + 8);
          uVar9 = *(uint *)(iVar11 + 0x10);
          uVar8 = *(uint *)(iVar11 + 0x14);
          uVar10 = uVar14;
          if (uVar8 < uVar14) {
            uVar10 = uVar8;
          }
          iVar6 = FUN_016dd50a(uVar9,*(undefined4 *)(iVar11 + 4),uVar10);
          if (iVar6 == 0) {
            iVar6 = uVar8 - uVar14;
          }
          if (iVar6 < 0) {
            if (uVar16 == 2) {
              uVar10 = 2;
              uVar16 = 1;
LAB_0123f820:
              puVar23 = (undefined4 *)(param_1 + 8 + uVar27 * 0xc);
              puVar12 = (undefined4 *)(param_1 + -4 + uVar10 * 0xc + uVar27 * 0xc);
              do {
                uVar18 = puVar23[-2];
                uVar16 = uVar16 - 1;
                puVar23[-2] = puVar12[-2];
                puVar12[-2] = uVar18;
                uVar18 = puVar12[-1];
                puVar12[-1] = puVar23[-1];
                puVar23[-1] = uVar18;
                uVar18 = *puVar23;
                *puVar23 = *puVar12;
                *puVar12 = uVar18;
                puVar23 = puVar23 + 3;
                puVar12 = puVar12 + -3;
              } while (uVar16 != 0);
            }
            else {
              uVar10 = 2;
              puVar25 = (uint *)(param_1 + 0x20 + uVar27 * 0xc);
              do {
                uVar19 = puVar25[-1];
                uVar17 = *puVar25;
                uVar14 = uVar8;
                if (uVar17 < uVar8) {
                  uVar14 = uVar17;
                }
                uVar9 = FUN_016dd50a(uVar19,uVar9,uVar14);
                if (uVar9 == 0) {
                  uVar9 = uVar17 - uVar8;
                }
                if (uVar9 < 0x80000000) goto LAB_0123f7e4;
                puVar25 = puVar25 + 3;
                uVar10 = uVar10 + 1;
                uVar8 = uVar17;
                uVar9 = uVar19;
              } while (uVar16 != uVar10);
LAB_0123f7d4:
              uVar10 = uVar16;
LAB_0123f7e4:
              if (uVar10 < uVar5) goto LAB_0123f354;
              if (iVar6 < 0) {
                uVar16 = uVar10 >> 1;
                if (uVar16 != 0) goto LAB_0123f820;
                uVar10 = 1;
              }
            }
          }
          else {
            uVar10 = 2;
            if (uVar16 != 2) {
              puVar25 = (uint *)(param_1 + 0x20 + uVar27 * 0xc);
              do {
                uVar17 = puVar25[-1];
                uVar19 = *puVar25;
                uVar14 = uVar8;
                if (uVar19 < uVar8) {
                  uVar14 = uVar19;
                }
                iVar7 = FUN_016dd50a(uVar17,uVar9,uVar14);
                if (iVar7 == 0) {
                  iVar7 = uVar19 - uVar8;
                }
                if (iVar7 < 0) goto LAB_0123f7e4;
                puVar25 = puVar25 + 3;
                uVar10 = uVar10 + 1;
                uVar8 = uVar19;
                uVar9 = uVar17;
              } while (uVar16 != uVar10);
              goto LAB_0123f7d4;
            }
          }
        }
        uVar16 = uVar10 << 1 | 1;
      }
      uVar8 = uVar27 - (uVar26 >> 1);
      uVar9 = uVar8 + uVar27;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar9;
      uVar14 = (uVar16 >> 1) + uVar27 * 2;
      lVar2 = (ulonglong)uVar14 * (uVar4 & 0xffffffff);
      uVar10 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar8 = iVar3 * uVar14 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar8,uVar27) * (int)uVar4 +
              uVar9 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar8 != 0) {
        uVar10 = LZCOUNT(uVar8);
      }
    }
    if (uVar22 < 2) {
      abStack_69[uVar22 + 3] = (byte)uVar10;
      local_17c[uVar22 + 3] = uVar26;
    }
    else {
      do {
        while( true ) {
          uVar8 = uVar22 - 1;
          if (abStack_69[uVar22 + 2] < uVar10) goto LAB_0123f678;
          uVar17 = local_17c[uVar22 + 2];
          uVar9 = uVar17 >> 1;
          uVar14 = uVar9 + (uVar26 >> 1);
          uVar22 = uVar8;
          if ((uVar14 <= param_4) && (((uVar17 | uVar26) & 1) == 0)) break;
          puVar23 = (undefined4 *)(param_1 + (uVar27 - uVar14) * 0xc);
          if ((uVar17 & 1) == 0) {
            FUN_0123f94c(puVar23,uVar9,param_3,param_4,LZCOUNT(uVar9 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar26 & 1) == 0) {
            FUN_0123f94c(puVar23 + uVar9 * 3,uVar26 >> 1,param_3,param_4,
                         LZCOUNT(uVar26 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar19 = uVar26 >> 1;
          if (1 < uVar17 && 1 < uVar26) {
            uVar26 = uVar9;
            if (uVar19 < uVar9) {
              uVar26 = uVar19;
            }
            if (uVar26 <= param_4) {
              puVar21 = puVar23 + uVar9 * 3;
              puVar12 = puVar23;
              if (uVar19 < uVar9) {
                puVar12 = puVar21;
              }
              FUN_016dd1aa(param_3,puVar12,uVar26 * 0xc);
              puVar24 = param_3 + uVar26 * 3;
              puVar12 = param_3;
              if (uVar19 < uVar9) {
                puVar13 = (undefined4 *)(param_1 + -0xc + uVar27 * 0xc);
                do {
                  uVar17 = puVar21[-1];
                  uVar9 = puVar24[-1];
                  uVar26 = uVar17;
                  if (uVar9 < uVar17) {
                    uVar26 = uVar9;
                  }
                  uVar26 = FUN_016dd50a(puVar24[-2],puVar21[-2],uVar26);
                  if (uVar26 == 0) {
                    uVar26 = uVar9 - uVar17;
                  }
                  puVar15 = puVar21 + -3;
                  if (uVar26 < 0x80000000) {
                    puVar15 = puVar24 + -3;
                  }
                  uVar20 = *puVar15;
                  uVar18 = puVar15[1];
                  puVar13[2] = puVar15[2];
                  *puVar13 = uVar20;
                  puVar13[1] = uVar18;
                  puVar24 = puVar24 + -3 + (uVar26 >> 0x1f | (uVar26 >> 0x1f) << 1);
                  uVar26 = uVar26 >> 0x1f ^ 1;
                  puVar21 = puVar21 + -3 + (uVar26 | uVar26 << 1);
                } while ((puVar21 != puVar23) && (puVar13 = puVar13 + -3, puVar24 != param_3));
                puVar23 = puVar21;
              }
              else {
                do {
                  uVar17 = puVar12[2];
                  uVar9 = puVar21[2];
                  uVar26 = uVar17;
                  if (uVar9 < uVar17) {
                    uVar26 = uVar9;
                  }
                  uVar26 = FUN_016dd50a(puVar21[1],puVar12[1],uVar26);
                  if (uVar26 == 0) {
                    uVar26 = uVar9 - uVar17;
                  }
                  puVar13 = puVar21;
                  if (uVar26 < 0x80000000) {
                    puVar13 = puVar12;
                  }
                  uVar18 = *puVar13;
                  uVar20 = puVar13[1];
                  puVar23[2] = puVar13[2];
                  uVar9 = uVar26 >> 0x1f ^ 1;
                  *puVar23 = uVar18;
                  puVar23[1] = uVar20;
                  puVar23 = puVar23 + 3;
                  puVar12 = puVar12 + (uVar9 | uVar9 << 1);
                } while ((puVar12 != puVar24) &&
                        (puVar21 = puVar21 + (uVar26 >> 0x1f | (uVar26 >> 0x1f) << 1),
                        puVar21 != (undefined4 *)(param_1 + uVar27 * 0xc)));
              }
              FUN_016dd1aa(puVar23,puVar12,(int)puVar24 - (int)puVar12);
            }
          }
          uVar26 = uVar14 * 2 | 1;
          if (uVar8 < 2) goto LAB_0123f674;
        }
        uVar26 = uVar14 * 2;
      } while (1 < uVar8);
LAB_0123f674:
      uVar22 = 1;
LAB_0123f678:
      abStack_69[uVar22 + 3] = (byte)uVar10;
      local_17c[uVar22 + 3] = uVar26;
    }
    if (param_2 <= uVar27) {
      if ((uVar26 & 1) == 0) {
        FUN_0123f94c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar27 = uVar27 + (uVar16 >> 1);
    uVar22 = uVar22 + 1;
    uVar26 = uVar16;
  } while( true );
}

