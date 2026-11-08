// FUN_01179774 @ 01179774 size=1756 calls_out=4 calls_in=2
// strings: 

void FUN_01179774(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  bool bVar25;
  ulonglong uVar26;
  uint local_184;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar26 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar26 & 0xffffffff);
  uVar3 = uVar26 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar26 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar3 = uVar26;
  }
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
  uVar21 = 0;
  uVar20 = 0;
  uVar22 = 1;
  do {
    uVar8 = 0;
    local_184 = 1;
    if (uVar21 < param_2) {
      iVar17 = param_1 + uVar21 * 0xc;
      local_184 = param_2 - uVar21;
      if (local_184 < uVar5) {
LAB_01179880:
        if (param_5 == 0) {
          if (uVar5 <= local_184) {
            local_184 = uVar5;
          }
          local_184 = local_184 << 1;
        }
        else {
          if (0x1f < local_184) {
            local_184 = 0x20;
          }
          FUN_01179e50(iVar17,local_184,param_3,param_4,0,0);
          local_184 = local_184 << 1 | 1;
        }
      }
      else {
        if (local_184 < 2) {
          uVar8 = local_184;
        }
        else {
          uVar12 = *(uint *)(*(int *)(iVar17 + 8) + 0x54);
          uVar11 = *(uint *)(*(int *)(iVar17 + 0x14) + 0x54);
          uVar16 = *(undefined4 *)(*(int *)(iVar17 + 0x14) + 0x50);
          uVar8 = uVar12;
          if (uVar11 < uVar12) {
            uVar8 = uVar11;
          }
          iVar6 = FUN_01bed842(uVar16,*(undefined4 *)(*(int *)(iVar17 + 8) + 0x50),uVar8);
          if (iVar6 == 0) {
            iVar6 = uVar11 - uVar12;
          }
          if (iVar6 < 0) {
            if (local_184 == 2) {
              uVar8 = 2;
              uVar11 = 1;
LAB_01179a60:
              iVar6 = param_1 + -0xc + uVar21 * 0xc + uVar8 * 0xc;
              uVar12 = 0;
              do {
                iVar7 = 0;
                do {
                  uVar16 = *(undefined4 *)(iVar17 + iVar7 * -4);
                  *(undefined4 *)(iVar17 + iVar7 * -4) = *(undefined4 *)(iVar6 + iVar7 * -4);
                  *(undefined4 *)(iVar6 + iVar7 * -4) = uVar16;
                  bVar25 = iVar7 != -2;
                  iVar7 = iVar7 + -1;
                } while (bVar25);
                uVar12 = uVar12 + 1;
                iVar17 = iVar17 + 0xc;
                iVar6 = iVar6 + -0xc;
              } while (uVar12 != uVar11);
            }
            else {
              uVar8 = 2;
              piVar14 = (int *)(param_1 + 0x20 + uVar21 * 0xc);
              do {
                uVar15 = *(uint *)(*piVar14 + 0x54);
                uVar18 = *(undefined4 *)(*piVar14 + 0x50);
                uVar12 = uVar11;
                if (uVar15 < uVar11) {
                  uVar12 = uVar15;
                }
                uVar12 = FUN_01bed842(uVar18,uVar16,uVar12);
                if (uVar12 == 0) {
                  uVar12 = uVar15 - uVar11;
                }
                if (uVar12 < 0x80000000) goto LAB_01179a24;
                uVar8 = uVar8 + 1;
                uVar16 = uVar18;
                piVar14 = piVar14 + 3;
                uVar11 = uVar15;
              } while (local_184 != uVar8);
LAB_01179a18:
              uVar8 = local_184;
LAB_01179a24:
              if (uVar8 < uVar5) goto LAB_01179880;
              if (iVar6 < 0) {
                uVar11 = uVar8 >> 1;
                if (uVar11 != 0) goto LAB_01179a60;
                uVar8 = 1;
              }
            }
          }
          else {
            uVar8 = 2;
            if (local_184 != 2) {
              uVar8 = 2;
              piVar14 = (int *)(param_1 + 0x20 + uVar21 * 0xc);
              do {
                uVar18 = *(undefined4 *)(*piVar14 + 0x50);
                uVar15 = *(uint *)(*piVar14 + 0x54);
                uVar12 = uVar11;
                if (uVar15 < uVar11) {
                  uVar12 = uVar15;
                }
                iVar7 = FUN_01bed842(uVar18,uVar16,uVar12);
                if (iVar7 == 0) {
                  iVar7 = uVar15 - uVar11;
                }
                if (iVar7 < 0) goto LAB_01179a24;
                uVar8 = uVar8 + 1;
                uVar16 = uVar18;
                piVar14 = piVar14 + 3;
                uVar11 = uVar15;
              } while (local_184 != uVar8);
              goto LAB_01179a18;
            }
          }
        }
        local_184 = uVar8 << 1 | 1;
      }
      uVar8 = uVar21 - (uVar22 >> 1);
      uVar11 = uVar21 + (local_184 >> 1);
      uVar12 = uVar11 + uVar21;
      lVar2 = (uVar3 & 0xffffffff) * (ulonglong)uVar12;
      lVar4 = uVar3 * CONCAT14(CARRY4(uVar8,uVar21),uVar8 + uVar21);
      uVar11 = (uint)CARRY4(uVar11,uVar21) * (int)uVar3 +
               uVar12 * (int)(uVar3 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) ^
               (uint)((ulonglong)lVar4 >> 0x20);
      uVar8 = LZCOUNT((uint)lVar2 ^ (uint)lVar4) + 0x20;
      if (uVar11 != 0) {
        uVar8 = LZCOUNT(uVar11);
      }
    }
    if (1 < uVar20) {
      do {
        uVar11 = uVar20 - 1;
        if (abStack_67[uVar20] < uVar8) goto LAB_01179dec;
        uVar15 = local_170[uVar11];
        uVar20 = uVar15 >> 1;
        uVar12 = uVar20 + (uVar22 >> 1);
        if ((param_4 < uVar12) || (((uVar15 | uVar22) & 1) != 0)) {
          puVar24 = (undefined4 *)(param_1 + (uVar21 - uVar12) * 0xc);
          if ((uVar15 & 1) == 0) {
            FUN_01179e50(puVar24,uVar20,param_3,param_4,LZCOUNT(uVar20 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar22 >> 1;
          if ((uVar22 & 1) == 0) {
            FUN_01179e50(puVar24 + uVar20 * 3,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0
                        );
          }
          if (1 < uVar15 && 1 < uVar22) {
            uVar22 = uVar20;
            if (uVar1 < uVar20) {
              uVar22 = uVar1;
            }
            if (uVar22 <= param_4) {
              puVar19 = puVar24 + uVar20 * 3;
              puVar9 = puVar24;
              if (uVar1 < uVar20) {
                puVar9 = puVar19;
              }
              FUN_01bed4e2(param_3,puVar9,uVar22 * 0xc);
              puVar23 = param_3 + uVar22 * 3;
              puVar9 = param_3;
              if (uVar1 < uVar20) {
                puVar10 = (undefined4 *)(param_1 + -0xc + uVar21 * 0xc);
                do {
                  uVar15 = *(uint *)(puVar19[-1] + 0x54);
                  uVar20 = *(uint *)(puVar23[-1] + 0x54);
                  uVar22 = uVar15;
                  if (uVar20 < uVar15) {
                    uVar22 = uVar20;
                  }
                  uVar22 = FUN_01bed842(*(undefined4 *)(puVar23[-1] + 0x50),
                                        *(undefined4 *)(puVar19[-1] + 0x50),uVar22);
                  if (uVar22 == 0) {
                    uVar22 = uVar20 - uVar15;
                  }
                  puVar13 = puVar19 + -3;
                  if (uVar22 < 0x80000000) {
                    puVar13 = puVar23 + -3;
                  }
                  uVar16 = puVar13[1];
                  uVar18 = puVar13[2];
                  *puVar10 = *puVar13;
                  puVar10[1] = uVar16;
                  puVar10[2] = uVar18;
                  puVar23 = puVar23 + -3 + (uVar22 >> 0x1f | (uVar22 >> 0x1f) << 1);
                  uVar22 = uVar22 >> 0x1f ^ 1;
                  puVar19 = puVar19 + -3 + (uVar22 | uVar22 << 1);
                } while ((puVar19 != puVar24) && (puVar10 = puVar10 + -3, puVar23 != param_3));
                puVar13 = puVar19;
              }
              else {
                do {
                  uVar20 = *(uint *)(puVar9[2] + 0x54);
                  uVar15 = *(uint *)(puVar19[2] + 0x54);
                  uVar22 = uVar20;
                  if (uVar15 < uVar20) {
                    uVar22 = uVar15;
                  }
                  uVar22 = FUN_01bed842(*(undefined4 *)(puVar19[2] + 0x50),
                                        *(undefined4 *)(puVar9[2] + 0x50),uVar22);
                  if (uVar22 == 0) {
                    uVar22 = uVar15 - uVar20;
                  }
                  puVar13 = puVar24 + 3;
                  puVar10 = puVar19;
                  if (uVar22 < 0x80000000) {
                    puVar10 = puVar9;
                  }
                  uVar16 = puVar10[1];
                  uVar18 = puVar10[2];
                  uVar20 = uVar22 >> 0x1f ^ 1;
                  *puVar24 = *puVar10;
                  puVar24[1] = uVar16;
                  puVar24[2] = uVar18;
                  puVar9 = puVar9 + (uVar20 | uVar20 << 1);
                  if (puVar9 == puVar23) break;
                  puVar19 = puVar19 + (uVar22 >> 0x1f | (uVar22 >> 0x1f) << 1);
                  puVar24 = puVar13;
                } while (puVar19 != (undefined4 *)(param_1 + uVar21 * 0xc));
              }
              FUN_01bed4e2(puVar13,puVar9,(int)puVar23 - (int)puVar9);
            }
          }
          uVar22 = uVar12 * 2 | 1;
        }
        else {
          uVar22 = uVar12 * 2;
        }
        uVar20 = uVar11;
      } while (1 < uVar11);
      uVar20 = 1;
    }
LAB_01179dec:
    abStack_67[uVar20 + 1] = (byte)uVar8;
    local_170[uVar20] = uVar22;
    if (param_2 <= uVar21) {
      if ((uVar22 & 1) == 0) {
        FUN_01179e50(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar20 = uVar20 + 1;
    uVar21 = uVar21 + (local_184 >> 1);
    uVar22 = local_184;
  } while( true );
}

