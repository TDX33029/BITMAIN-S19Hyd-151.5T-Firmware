// FUN_00663848 @ 00663848 size=1708 calls_out=4 calls_in=2
// strings: 

void FUN_00663848(int param_1,uint param_2,uint *param_3,uint param_4,int param_5,
                 undefined4 *param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  uint *extraout_r12;
  int iVar24;
  ulonglong uVar25;
  uint local_184;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar25 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar25 & 0xffffffff);
  uVar4 = uVar25 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar25 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar25;
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
    iVar24 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar24) + (param_2 >> iVar24) >> 1;
  }
  uVar12 = 0;
  uVar18 = 0;
  uVar23 = 1;
  do {
    uVar16 = 0;
    local_184 = 1;
    if (uVar12 < param_2) {
      local_184 = param_2 - uVar12;
      puVar6 = (uint *)(param_1 + uVar12 * 4);
      if (local_184 < uVar5) {
LAB_0066393c:
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
          FUN_00662198(puVar6,local_184,param_3,param_4,0,0,param_6);
          local_184 = local_184 << 1 | 1;
        }
      }
      else {
        if (local_184 < 2) {
          uVar8 = local_184;
        }
        else {
          uVar16 = puVar6[1];
          uVar7 = *(uint *)(*(int *)*param_6 + 8);
          if (uVar7 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar16,uVar7,&DAT_01c03e28);
          }
          uVar8 = *puVar6;
          if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar8,uVar7,&DAT_01c03e38);
          }
          iVar24 = *(int *)(*(int *)*param_6 + 4);
          uVar10 = *(uint *)(iVar24 + uVar16 * 0xc + 8);
          uVar20 = *(uint *)(iVar24 + uVar8 * 0xc + 8);
          uVar8 = 2;
          if (uVar20 < uVar10) {
            if (local_184 == 2) {
              uVar16 = 1;
LAB_00663ac0:
              puVar14 = (uint *)(param_1 + -4 + uVar8 * 4 + uVar12 * 4);
              do {
                uVar7 = *puVar14;
                uVar16 = uVar16 - 1;
                *puVar14 = *puVar6;
                *puVar6 = uVar7;
                puVar6 = puVar6 + 1;
                puVar14 = puVar14 + -1;
              } while (uVar16 != 0);
            }
            else {
              do {
                uVar13 = puVar6[uVar8];
                if (uVar7 <= uVar13) {
LAB_00663ebc:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar13,uVar7,&DAT_01c03e28);
                }
                if (uVar7 <= uVar16) {
LAB_00663ecc:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar16,uVar7,&DAT_01c03e38);
                }
                if (*(uint *)(iVar24 + uVar13 * 0xc + 8) <= *(uint *)(iVar24 + uVar16 * 0xc + 8))
                goto LAB_00663a9c;
                uVar8 = uVar8 + 1;
                uVar16 = uVar13;
              } while (local_184 != uVar8);
LAB_00663a98:
              uVar8 = local_184;
LAB_00663a9c:
              if (uVar8 < uVar5) goto LAB_0066393c;
              if (uVar20 < uVar10) {
                uVar16 = uVar8 >> 1;
                if (uVar16 != 0) goto LAB_00663ac0;
                uVar8 = 1;
              }
            }
          }
          else if (local_184 != 2) {
            do {
              uVar13 = puVar6[uVar8];
              if (uVar7 <= uVar13) goto LAB_00663ebc;
              if (uVar7 <= uVar16) goto LAB_00663ecc;
              if (*(uint *)(iVar24 + uVar16 * 0xc + 8) < *(uint *)(iVar24 + uVar13 * 0xc + 8))
              goto LAB_00663a9c;
              uVar8 = uVar8 + 1;
              uVar16 = uVar13;
            } while (local_184 != uVar8);
            goto LAB_00663a98;
          }
        }
        local_184 = uVar8 << 1 | 1;
      }
      uVar7 = uVar12 - (uVar23 >> 1);
      uVar8 = uVar7 + uVar12;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar8;
      uVar10 = (local_184 >> 1) + uVar12 * 2;
      lVar2 = (ulonglong)uVar10 * (uVar4 & 0xffffffff);
      uVar16 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar7 = iVar3 * uVar10 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar7,uVar12) * (int)uVar4 +
              uVar8 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar7 != 0) {
        uVar16 = LZCOUNT(uVar7);
      }
    }
    if (1 < uVar18) {
      do {
        uVar7 = uVar18 - 1;
        if (abStack_67[uVar18] < uVar16) goto LAB_00663e0c;
        uVar10 = local_170[uVar7];
        uVar18 = uVar10 >> 1;
        uVar8 = uVar18 + (uVar23 >> 1);
        if ((param_4 < uVar8) || (((uVar10 | uVar23) & 1) != 0)) {
          puVar6 = (uint *)(param_1 + (uVar12 - uVar8) * 4);
          if ((uVar10 & 1) == 0) {
            FUN_00662198(puVar6,uVar18,param_3,param_4,LZCOUNT(uVar18 | 1) << 1 ^ 0x3e,0,param_6);
          }
          uVar20 = uVar23 >> 1;
          if ((uVar23 & 1) == 0) {
            FUN_00662198(puVar6 + uVar18,uVar20,param_3,param_4,LZCOUNT(uVar20 | 1) << 1 ^ 0x3e,0,
                         param_6);
          }
          if (1 < uVar10 && 1 < uVar23) {
            uVar23 = uVar18;
            if (uVar20 < uVar18) {
              uVar23 = uVar20;
            }
            if (uVar23 <= param_4) {
              puVar15 = puVar6 + uVar18;
              puVar14 = puVar6;
              if (uVar20 < uVar18) {
                puVar14 = puVar15;
              }
              piVar19 = (int *)*param_6;
              FUN_01bed4e2(param_3,puVar14,uVar23 << 2);
              puVar17 = param_3 + uVar23;
              puVar22 = param_3;
              if (uVar20 < uVar18) {
                iVar24 = *piVar19;
                puVar15 = (uint *)(param_1 + -4 + uVar12 * 4);
                do {
                  uVar18 = *(uint *)(iVar24 + 8);
                  uVar23 = puVar17[-1];
                  if (uVar18 <= uVar23) {
                    puVar11 = &DAT_01c03e28;
LAB_00663e94:
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(uVar23,uVar18,puVar11);
                  }
                  uVar10 = puVar14[-1];
                  if (uVar18 <= uVar10) {
                    puVar11 = &DAT_01c03e38;
                    uVar23 = uVar10;
                    goto LAB_00663e94;
                  }
                  iVar9 = *(int *)(iVar24 + 4);
                  uVar20 = *(uint *)(iVar9 + uVar23 * 0xc + 8);
                  uVar18 = *(uint *)(iVar9 + uVar10 * 0xc + 8);
                  if (uVar18 < uVar20) {
                    uVar23 = uVar10;
                  }
                  *puVar15 = uVar23;
                  puVar17 = puVar17 + -1 + (uVar18 < uVar20);
                  puVar14 = puVar14 + -1 + (uVar20 <= uVar18);
                } while ((puVar14 != puVar6) && (puVar15 = puVar15 + -1, puVar17 != param_3));
              }
              else {
                puVar6 = extraout_r12;
                if (uVar23 != 0) {
                  puVar6 = (uint *)(param_1 + uVar12 * 4);
                }
                puVar21 = puVar14;
                if (uVar23 != 0 && puVar15 != puVar6) {
                  do {
                    iVar24 = *piVar19;
                    uVar23 = *puVar15;
                    uVar18 = *(uint *)(iVar24 + 8);
                    if (uVar18 <= uVar23) {
                      puVar11 = &DAT_01c03e28;
LAB_00663eb4:
                    /* WARNING: Subroutine does not return */
                      FUN_012fb12c(uVar23,uVar18,puVar11);
                    }
                    uVar10 = *puVar22;
                    if (uVar18 <= uVar10) {
                      puVar11 = &DAT_01c03e38;
                      uVar23 = uVar10;
                      goto LAB_00663eb4;
                    }
                    iVar24 = *(int *)(iVar24 + 4);
                    uVar20 = *(uint *)(iVar24 + uVar23 * 0xc + 8);
                    uVar18 = *(uint *)(iVar24 + uVar10 * 0xc + 8);
                    if (uVar18 < uVar20) {
                      uVar10 = uVar23;
                    }
                    puVar22 = puVar22 + (uVar20 <= uVar18);
                    if (puVar22 != puVar17) {
                      puVar15 = puVar15 + (uVar18 < uVar20);
                    }
                    puVar14 = puVar21 + 1;
                    *puVar21 = uVar10;
                    puVar21 = puVar14;
                  } while (puVar22 != puVar17 && puVar15 != puVar6);
                }
              }
              FUN_01bed4e2(puVar14,puVar22,(int)puVar17 - (int)puVar22);
            }
          }
          uVar23 = uVar8 * 2 | 1;
        }
        else {
          uVar23 = uVar8 * 2;
        }
        uVar18 = uVar7;
      } while (1 < uVar7);
      uVar18 = 1;
    }
LAB_00663e0c:
    abStack_67[uVar18 + 1] = (byte)uVar16;
    local_170[uVar18] = uVar23;
    if (param_2 <= uVar12) {
      if ((uVar23 & 1) == 0) {
        FUN_00662198(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0,param_6);
      }
      return;
    }
    uVar18 = uVar18 + 1;
    uVar12 = uVar12 + (local_184 >> 1);
    uVar23 = local_184;
  } while( true );
}

