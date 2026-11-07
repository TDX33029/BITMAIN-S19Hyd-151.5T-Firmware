// FUN_016960e8 @ 016960e8 size=1920 calls_out=4 calls_in=2
// strings: 

void FUN_016960e8(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  uint uVar23;
  uint uVar24;
  undefined4 *puVar25;
  uint uVar26;
  undefined4 *puVar27;
  uint uVar28;
  byte bVar29;
  ulonglong uVar30;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar30 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar30 & 0xffffffff);
  uVar6 = uVar30 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar30 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar6 = uVar30;
  }
  iVar5 = (int)(uVar6 >> 0x20);
  if (param_2 < 0x1001) {
    uVar7 = param_2 - (param_2 >> 1);
    if (0x3f < uVar7) {
      uVar7 = 0x40;
    }
  }
  else {
    uVar7 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar13 = (uVar7 & 1) + (uVar7 >> 1);
    uVar7 = (1 << iVar13) + (param_2 >> iVar13) >> 1;
  }
  uVar28 = 0;
  uVar19 = 0;
  uVar26 = 1;
  do {
    uVar23 = 1;
    puVar8 = (undefined4 *)(param_1 + uVar28 * 0x10);
    local_18c = 0;
    if (uVar28 < param_2) {
      uVar23 = param_2 - uVar28;
      if (uVar23 < uVar7) {
LAB_016961e8:
        if (param_5 == 0) {
          if (uVar7 <= uVar23) {
            uVar23 = uVar7;
          }
          uVar23 = uVar23 << 1;
        }
        else {
          if (0x1f < uVar23) {
            uVar23 = 0x20;
          }
          FUN_01695404(puVar8,uVar23,param_3,param_4,0,0);
          uVar23 = uVar23 << 1 | 1;
        }
      }
      else {
        if (uVar23 < 2) {
          uVar10 = uVar23;
        }
        else {
          uVar15 = puVar8[2];
          uVar17 = puVar8[5];
          uVar11 = puVar8[6];
          uVar10 = uVar15;
          if (uVar11 < uVar15) {
            uVar10 = uVar11;
          }
          iVar13 = FUN_01bed842(uVar17,puVar8[1],uVar10);
          if (iVar13 == 0) {
            iVar13 = uVar11 - uVar15;
          }
          if (iVar13 == 0) {
            if (*(byte *)(puVar8 + 7) < *(byte *)(puVar8 + 3)) goto LAB_01696364;
LAB_016962ac:
            uVar10 = 2;
            if (uVar23 != 2) {
              iVar13 = 0;
              do {
                uVar18 = puVar8[iVar13 * 4 + 9];
                uVar24 = puVar8[iVar13 * 4 + 10];
                uVar15 = uVar11;
                if (uVar24 < uVar11) {
                  uVar15 = uVar24;
                }
                iVar9 = FUN_01bed842(uVar18,uVar17,uVar15);
                if (iVar9 == 0) {
                  iVar9 = uVar24 - uVar11;
                }
                if (iVar9 == 0) {
                  if (*(byte *)(puVar8 + iVar13 * 4 + 0xb) < *(byte *)(puVar8 + iVar13 * 4 + 7))
                  goto LAB_01696420;
                }
                else if (iVar9 < 0) {
                  uVar10 = iVar13 + 2;
LAB_01696420:
                  bVar4 = false;
                  goto LAB_01696438;
                }
                uVar10 = uVar10 + 1;
                iVar13 = iVar13 + 1;
                uVar17 = uVar18;
                uVar11 = uVar24;
              } while ((param_2 - 2) - uVar28 != iVar13);
              bVar4 = false;
LAB_0169640c:
              uVar10 = uVar23;
LAB_01696438:
              if (uVar10 < uVar7) goto LAB_016961e8;
              if (bVar4) {
                uVar23 = uVar10 >> 1;
                if (uVar23 != 0) goto LAB_01696464;
                uVar10 = 1;
              }
            }
          }
          else {
            if (-1 < iVar13) goto LAB_016962ac;
LAB_01696364:
            if (uVar23 != 2) {
              uVar10 = 2;
              iVar13 = 0;
              do {
                uVar18 = puVar8[iVar13 * 4 + 9];
                uVar24 = puVar8[iVar13 * 4 + 10];
                uVar15 = uVar11;
                if (uVar24 < uVar11) {
                  uVar15 = uVar24;
                }
                uVar15 = FUN_01bed842(uVar18,uVar17,uVar15);
                if (uVar15 == 0) {
                  uVar15 = uVar24 - uVar11;
                }
                if (uVar15 == 0) {
                  if (*(byte *)(puVar8 + iVar13 * 4 + 7) <= *(byte *)(puVar8 + iVar13 * 4 + 0xb))
                  goto LAB_0169642c;
                }
                else if (uVar15 < 0x80000000) {
                  uVar10 = iVar13 + 2;
LAB_0169642c:
                  bVar4 = true;
                  goto LAB_01696438;
                }
                uVar10 = uVar10 + 1;
                iVar13 = iVar13 + 1;
                uVar17 = uVar18;
                uVar11 = uVar24;
              } while ((param_2 - 2) - uVar28 != iVar13);
              bVar4 = true;
              goto LAB_0169640c;
            }
            uVar10 = 2;
            uVar23 = 1;
LAB_01696464:
            iVar13 = param_1 + -0x10 + uVar28 * 0x10 + uVar10 * 0x10;
            uVar11 = 0;
            puVar12 = puVar8;
            do {
              iVar9 = 0;
              do {
                uVar17 = puVar12[iVar9];
                puVar12[iVar9] = *(undefined4 *)(iVar13 + iVar9 * 4);
                *(undefined4 *)(iVar13 + iVar9 * 4) = uVar17;
                iVar9 = iVar9 + 1;
              } while (iVar9 != 4);
              uVar11 = uVar11 + 1;
              puVar12 = puVar12 + 4;
              iVar13 = iVar13 + -0x10;
            } while (uVar11 != uVar23);
          }
        }
        uVar23 = uVar10 << 1 | 1;
      }
      uVar10 = uVar28 - (uVar26 >> 1);
      uVar11 = uVar10 + uVar28;
      lVar2 = (uVar6 & 0xffffffff) * (ulonglong)uVar11;
      uVar15 = (uVar23 >> 1) + uVar28 * 2;
      lVar3 = (ulonglong)uVar15 * (uVar6 & 0xffffffff);
      local_18c = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar10 = iVar5 * uVar15 + (int)((ulonglong)lVar3 >> 0x20) ^
               (uint)CARRY4(uVar10,uVar28) * (int)uVar6 +
               uVar11 * iVar5 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar10 != 0) {
        local_18c = LZCOUNT(uVar10);
      }
    }
    if (1 < uVar19) {
      do {
        uVar10 = uVar19 - 1;
        if (abStack_67[uVar19] < local_18c) goto LAB_01696800;
        uVar15 = local_170[uVar10];
        uVar19 = uVar15 >> 1;
        uVar11 = uVar19 + (uVar26 >> 1);
        if ((param_4 < uVar11) || (((uVar15 | uVar26) & 1) != 0)) {
          puVar12 = (undefined4 *)(param_1 + (uVar28 - uVar11) * 0x10);
          if ((uVar15 & 1) == 0) {
            FUN_01695404(puVar12,uVar19,param_3,param_4,LZCOUNT(uVar19 | 1) << 1 ^ 0x3e,0);
          }
          uVar24 = uVar26 >> 1;
          if ((uVar26 & 1) == 0) {
            FUN_01695404(puVar12 + uVar19 * 4,uVar24,param_3,param_4,LZCOUNT(uVar24 | 1) << 1 ^ 0x3e
                         ,0);
          }
          if (1 < uVar15 && 1 < uVar26) {
            uVar26 = uVar19;
            if (uVar24 < uVar19) {
              uVar26 = uVar24;
            }
            if (uVar26 <= param_4) {
              puVar22 = puVar12 + uVar19 * 4;
              puVar27 = puVar12;
              if (uVar24 < uVar19) {
                puVar27 = puVar22;
              }
              FUN_01bed4e2(param_3,puVar27,uVar26 << 4);
              puVar25 = param_3 + uVar26 * 4;
              puVar20 = param_3;
              if (uVar24 < uVar19) {
                puVar22 = (undefined4 *)(param_1 + -0x10 + uVar28 * 0x10);
                do {
                  uVar15 = puVar27[-2];
                  uVar19 = puVar25[-2];
                  uVar26 = uVar15;
                  if (uVar19 < uVar15) {
                    uVar26 = uVar19;
                  }
                  iVar13 = FUN_01bed842(puVar25[-3],puVar27[-3],uVar26);
                  if (iVar13 == 0) {
                    iVar13 = uVar19 - uVar15;
                  }
                  bVar29 = iVar13 < 0;
                  bVar1 = 0 < iVar13;
                  if (iVar13 == 0) {
                    bVar29 = *(byte *)(puVar27 + -1);
                  }
                  if (iVar13 == 0) {
                    bVar1 = *(byte *)(puVar25 + -1);
                  }
                  puVar16 = puVar27 + -4;
                  if ((uint)(int)(char)((uint)bVar1 - (uint)bVar29) < 0x80000000) {
                    puVar16 = puVar25 + -4;
                  }
                  uVar17 = puVar16[1];
                  uVar18 = puVar16[2];
                  uVar21 = puVar16[3];
                  *puVar22 = *puVar16;
                  puVar22[1] = uVar17;
                  puVar22[2] = uVar18;
                  puVar22[3] = uVar21;
                  iVar13 = (int)(((uint)bVar1 - (uint)bVar29) * 0x1000000) >> 0x1f;
                  puVar25 = puVar25 + -4 + iVar13 * -4;
                  puVar27 = puVar27 + -4 + (-iVar13 ^ 1U) * 4;
                } while ((puVar27 != puVar12) && (puVar22 = puVar22 + -4, puVar25 != param_3));
              }
              else {
                puVar12 = (undefined4 *)0x0;
                if (uVar26 != 0) {
                  puVar12 = puVar8;
                }
                if (!(uVar26 == 0 || puVar22 == puVar12)) {
                  puVar16 = puVar27;
                  do {
                    uVar15 = puVar20[2];
                    uVar19 = puVar22[2];
                    uVar26 = uVar15;
                    if (uVar19 < uVar15) {
                      uVar26 = uVar19;
                    }
                    iVar13 = FUN_01bed842(puVar22[1],puVar20[1],uVar26);
                    if (iVar13 == 0) {
                      iVar13 = uVar19 - uVar15;
                    }
                    bVar29 = iVar13 < 0;
                    bVar1 = 0 < iVar13;
                    if (iVar13 == 0) {
                      bVar29 = *(byte *)(puVar20 + 3);
                    }
                    puVar27 = puVar16 + 4;
                    if (iVar13 == 0) {
                      bVar1 = *(byte *)(puVar22 + 3);
                    }
                    puVar14 = puVar22;
                    if ((uint)(int)(char)((uint)bVar1 - (uint)bVar29) < 0x80000000) {
                      puVar14 = puVar20;
                    }
                    uVar17 = puVar14[1];
                    uVar18 = puVar14[2];
                    uVar21 = puVar14[3];
                    *puVar16 = *puVar14;
                    puVar16[1] = uVar17;
                    puVar16[2] = uVar18;
                    puVar16[3] = uVar21;
                    iVar13 = (int)(((uint)bVar1 - (uint)bVar29) * 0x1000000) >> 0x1f;
                    puVar20 = puVar20 + (-iVar13 ^ 1U) * 4;
                    if (puVar20 != puVar25) {
                      puVar22 = puVar22 + iVar13 * -4;
                    }
                    puVar16 = puVar27;
                  } while (puVar20 != puVar25 && puVar22 != puVar12);
                }
              }
              FUN_01bed4e2(puVar27,puVar20,(int)puVar25 - (int)puVar20);
            }
          }
          uVar26 = uVar11 * 2 | 1;
        }
        else {
          uVar26 = uVar11 * 2;
        }
        uVar19 = uVar10;
      } while (1 < uVar10);
      uVar19 = 1;
    }
LAB_01696800:
    abStack_67[uVar19 + 1] = (byte)local_18c;
    local_170[uVar19] = uVar26;
    if (param_2 <= uVar28) {
      if ((uVar26 & 1) == 0) {
        FUN_01695404(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar19 = uVar19 + 1;
    uVar28 = uVar28 + (uVar23 >> 1);
    uVar26 = uVar23;
  } while( true );
}

