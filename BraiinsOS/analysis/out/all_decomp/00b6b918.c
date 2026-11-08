// FUN_00b6b918 @ 00b6b918 size=1780 calls_out=4 calls_in=2
// strings: BUG: impossible | BUG: impossible | BUG: impossible

void FUN_00b6b918(int param_1,uint param_2,double *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  byte bVar12;
  uint uVar13;
  double *pdVar14;
  uint uVar15;
  double *pdVar16;
  undefined4 uVar17;
  uint uVar18;
  double *pdVar19;
  uint uVar20;
  double *pdVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  ulonglong uVar28;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar28 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar28 & 0xffffffff);
  uVar5 = uVar28 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar28 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
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
    iVar7 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar7) + (param_2 >> iVar7) >> 1;
  }
  uVar23 = 1;
  uVar25 = 0;
  uVar18 = 0;
  uVar13 = 0;
  uVar9 = uVar23;
  uVar20 = 1;
  if (param_2 == 0) goto LAB_00b6bc74;
  do {
    uVar20 = param_2 - uVar25;
    pdVar8 = (double *)(param_1 + uVar25 * 8);
    if (uVar20 < uVar6) {
LAB_00b6ba24:
      if (param_5 == 0) {
        if (uVar6 <= uVar20) {
          uVar20 = uVar6;
        }
        uVar20 = uVar20 << 1;
      }
      else {
        if (0x1f < uVar20) {
          uVar20 = 0x20;
        }
        FUN_00b6c054(pdVar8,uVar20,param_3,param_4,0,0);
        uVar20 = uVar20 << 1 | 1;
      }
    }
    else {
      if (uVar20 < 2) {
        uVar9 = uVar20;
      }
      else {
        dVar26 = pdVar8[1];
        if (NAN(dVar26)) {
LAB_00b6bae0:
          uVar9 = 2;
          if (uVar20 != 2) {
            pdVar21 = (double *)(param_1 + 8 + uVar25 * 8);
            uVar9 = 2;
            do {
              dVar26 = pdVar21[1];
              if (!NAN(dVar26)) {
                dVar27 = *pdVar21;
                bVar3 = false;
                if (NAN(dVar27)) goto LAB_00b6bb60;
                if (dVar27 < dVar26) {
                  if (dVar26 < dVar27) goto LAB_00b6bffc;
                }
                else if (dVar26 < dVar27) goto LAB_00b6bb60;
              }
              uVar9 = uVar9 + 1;
              pdVar21 = pdVar21 + 1;
            } while (uVar20 != uVar9);
            bVar3 = false;
LAB_00b6bb5c:
            uVar9 = uVar20;
LAB_00b6bb60:
            if (uVar9 < uVar6) goto LAB_00b6ba24;
            if (bVar3) {
              uVar20 = uVar9 >> 1;
              if (uVar20 != 0) goto LAB_00b6bb7c;
              uVar9 = 1;
            }
          }
        }
        else {
          dVar27 = *pdVar8;
          if (!NAN(dVar27)) {
            if (dVar26 <= dVar27) {
              if (dVar26 < dVar27) goto LAB_00b6bacc;
            }
            else if (dVar26 < dVar27) {
LAB_00b6bffc:
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
            }
            goto LAB_00b6bae0;
          }
LAB_00b6bacc:
          if (uVar20 != 2) {
            pdVar21 = (double *)(param_1 + 8 + uVar25 * 8);
            uVar9 = 2;
            do {
              dVar26 = pdVar21[1];
              bVar3 = true;
              if (NAN(dVar26)) goto LAB_00b6bb60;
              dVar27 = *pdVar21;
              if (!NAN(dVar27)) {
                if (dVar27 < dVar26) {
                  if (dVar26 < dVar27) goto LAB_00b6bffc;
                  goto LAB_00b6bb60;
                }
                if (dVar27 <= dVar26) goto LAB_00b6bb60;
              }
              uVar9 = uVar9 + 1;
              pdVar21 = pdVar21 + 1;
            } while (uVar20 != uVar9);
            goto LAB_00b6bb5c;
          }
          uVar9 = 2;
          uVar20 = 1;
LAB_00b6bb7c:
          pdVar21 = (double *)(param_1 + -8 + uVar9 * 8 + uVar25 * 8);
          do {
            dVar26 = *pdVar8;
            uVar20 = uVar20 - 1;
            uVar17 = *(undefined4 *)((int)pdVar21 + 4);
            *(undefined4 *)pdVar8 = *(undefined4 *)pdVar21;
            *(undefined4 *)((int)pdVar8 + 4) = uVar17;
            pdVar8 = pdVar8 + 1;
            *pdVar21 = dVar26;
            pdVar21 = pdVar21 + -1;
          } while (uVar20 != 0);
        }
      }
      uVar20 = uVar9 << 1 | 1;
    }
    uVar9 = uVar25 - (uVar23 >> 1);
    uVar10 = uVar9 + uVar25;
    lVar1 = (uVar5 & 0xffffffff) * (ulonglong)uVar10;
    uVar15 = (uVar20 >> 1) + uVar25 * 2;
    lVar2 = (ulonglong)uVar15 * (uVar5 & 0xffffffff);
    uVar13 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
    uVar10 = iVar4 * uVar15 + (int)((ulonglong)lVar2 >> 0x20) ^
             (uint)CARRY4(uVar9,uVar25) * (int)uVar5 +
             uVar10 * iVar4 + (int)((ulonglong)lVar1 >> 0x20);
    uVar9 = uVar23;
    if (uVar10 != 0) {
      uVar13 = LZCOUNT(uVar10);
    }
LAB_00b6bc74:
    do {
      uVar23 = uVar20;
      if (1 < uVar18) {
        do {
          while( true ) {
            uVar20 = uVar18 - 1;
            if (abStack_67[uVar18] < uVar13) goto LAB_00b6bf78;
            uVar15 = local_170[uVar20];
            uVar10 = uVar15 >> 1;
            uVar22 = uVar10 + (uVar9 >> 1);
            uVar18 = uVar20;
            if ((uVar22 <= param_4) && (((uVar15 | uVar9) & 1) == 0)) break;
            pdVar8 = (double *)(param_1 + (uVar25 - uVar22) * 8);
            if ((uVar15 & 1) == 0) {
              FUN_00b6c054(pdVar8,uVar10,param_3,param_4,LZCOUNT(uVar10 | 1) << 1 ^ 0x3e,0);
            }
            if ((uVar9 & 1) == 0) {
              FUN_00b6c054(pdVar8 + uVar10,uVar9 >> 1,param_3,param_4,
                           LZCOUNT(uVar9 >> 1 | 1) << 1 ^ 0x3e,0);
            }
            uVar24 = uVar9 >> 1;
            if (1 < uVar15 && 1 < uVar9) {
              uVar9 = uVar10;
              if (uVar24 < uVar10) {
                uVar9 = uVar24;
              }
              if (uVar9 <= param_4) {
                pdVar21 = pdVar8 + uVar10;
                pdVar14 = pdVar8;
                if (uVar24 < uVar10) {
                  pdVar14 = pdVar21;
                }
                FUN_016dd1aa(param_3,pdVar14,uVar9 << 3);
                pdVar19 = param_3 + uVar9;
                pdVar14 = param_3;
                if (uVar24 < uVar10) {
                  puVar11 = (undefined4 *)(param_1 + -8 + uVar25 * 8);
                  do {
                    dVar27 = pdVar19[-1];
                    dVar26 = pdVar21[-1];
                    if (NAN(dVar27)) {
                      bVar12 = !NAN(dVar26);
                    }
                    else if (NAN(dVar26)) {
                      bVar12 = 0xff;
                    }
                    else if (dVar27 <= dVar26) {
                      bVar12 = 0;
                      if (dVar27 < dVar26) {
                        bVar12 = 0xff;
                      }
                    }
                    else {
                      bVar12 = 1;
                      if (dVar27 < dVar26) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
                      }
                    }
                    pdVar16 = pdVar21 + -1;
                    if ((uint)(int)(char)bVar12 < 0x80000000) {
                      pdVar16 = pdVar19 + -1;
                    }
                    uVar17 = *(undefined4 *)((int)pdVar16 + 4);
                    *puVar11 = *(undefined4 *)pdVar16;
                    puVar11[1] = uVar17;
                    iVar7 = (int)((uint)bVar12 << 0x18) >> 0x1f;
                    pdVar19 = pdVar19 + -1 + -iVar7;
                    pdVar21 = pdVar21 + -1 + (-iVar7 ^ 1);
                  } while ((pdVar21 != pdVar8) && (puVar11 = puVar11 + -2, pdVar19 != param_3));
                  pdVar8 = pdVar21;
                }
                else {
                  do {
                    dVar27 = *pdVar21;
                    dVar26 = *pdVar14;
                    if (NAN(dVar27)) {
                      bVar12 = !NAN(dVar26);
                    }
                    else if (NAN(dVar26)) {
                      bVar12 = 0xff;
                    }
                    else if (dVar27 <= dVar26) {
                      bVar12 = 0;
                      if (dVar27 < dVar26) {
                        bVar12 = 0xff;
                      }
                    }
                    else {
                      bVar12 = 1;
                      if (dVar27 < dVar26) {
                    /* WARNING: Subroutine does not return */
                        FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
                      }
                    }
                    pdVar16 = pdVar21;
                    if ((uint)(int)(char)bVar12 < 0x80000000) {
                      pdVar16 = pdVar14;
                    }
                    uVar17 = *(undefined4 *)((int)pdVar16 + 4);
                    *(undefined4 *)pdVar8 = *(undefined4 *)pdVar16;
                    *(undefined4 *)((int)pdVar8 + 4) = uVar17;
                    iVar7 = (int)((uint)bVar12 << 0x18) >> 0x1f;
                    pdVar8 = pdVar8 + 1;
                    pdVar14 = pdVar14 + (-iVar7 ^ 1);
                    if (pdVar14 != pdVar19) {
                      pdVar21 = pdVar21 + -iVar7;
                    }
                  } while (pdVar14 != pdVar19 && pdVar21 != (double *)(param_1 + uVar25 * 8));
                }
                FUN_016dd1aa(pdVar8,pdVar14,(int)pdVar19 - (int)pdVar14);
              }
            }
            uVar9 = uVar22 * 2 | 1;
            if (uVar20 < 2) goto LAB_00b6bf6c;
          }
          uVar9 = uVar22 * 2;
        } while (1 < uVar20);
LAB_00b6bf6c:
        uVar18 = 1;
      }
LAB_00b6bf78:
      abStack_67[uVar18 + 1] = (byte)uVar13;
      local_170[uVar18] = uVar9;
      if (param_2 <= uVar25) {
        if ((uVar9 & 1) == 0) {
          FUN_00b6c054(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
        }
        return;
      }
      uVar18 = uVar18 + 1;
      uVar25 = uVar25 + (uVar23 >> 1);
      uVar13 = 0;
      uVar9 = uVar23;
      uVar20 = 1;
    } while (param_2 <= uVar25);
  } while( true );
}

