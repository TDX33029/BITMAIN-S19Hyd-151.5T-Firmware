// FUN_005fed38 @ 005fed38 size=1716 calls_out=4 calls_in=2
// strings: 

void FUN_005fed38(int param_1,uint param_2,uint *param_3,uint param_4,int param_5,
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
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint local_184;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar24 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar24 & 0xffffffff);
  uVar4 = uVar24 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar24 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar24;
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
    iVar13 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar13) + (param_2 >> iVar13) >> 1;
  }
  uVar23 = 0;
  uVar19 = 0;
  uVar16 = 1;
  do {
    uVar15 = 0;
    local_184 = 1;
    if (uVar23 < param_2) {
      local_184 = param_2 - uVar23;
      puVar6 = (uint *)(param_1 + uVar23 * 4);
      if (local_184 < uVar5) {
LAB_005fee4c:
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
          FUN_005fa434(puVar6,local_184,param_3,param_4,0,0,param_6);
          local_184 = local_184 << 1 | 1;
        }
      }
      else {
        if (local_184 < 2) {
          uVar8 = local_184;
        }
        else {
          uVar15 = puVar6[1];
          uVar7 = *(uint *)(*(int *)*param_6 + 8);
          if (uVar7 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar15,uVar7,&DAT_018574a8);
          }
          uVar8 = *puVar6;
          if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar8,uVar7,&DAT_018574b8);
          }
          iVar13 = *(int *)(*(int *)*param_6 + 4);
          uVar12 = *(uint *)(iVar13 + uVar15 * 0xc + 8);
          uVar22 = *(uint *)(iVar13 + uVar8 * 0xc + 8);
          uVar8 = 2;
          if (uVar22 < uVar12) {
            if (local_184 == 2) {
              uVar15 = 1;
LAB_005fefcc:
              puVar10 = (uint *)(param_1 + -4 + uVar8 * 4 + uVar23 * 4);
              do {
                uVar7 = *puVar10;
                uVar15 = uVar15 - 1;
                *puVar10 = *puVar6;
                *puVar6 = uVar7;
                puVar6 = puVar6 + 1;
                puVar10 = puVar10 + -1;
              } while (uVar15 != 0);
            }
            else {
              do {
                uVar17 = puVar6[uVar8];
                if (uVar7 <= uVar17) {
LAB_005ff3c4:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar17,uVar7,&DAT_018574a8);
                }
                if (uVar7 <= uVar15) {
LAB_005ff3b4:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar15,uVar7,&DAT_018574b8);
                }
                if (*(uint *)(iVar13 + uVar17 * 0xc + 8) <= *(uint *)(iVar13 + uVar15 * 0xc + 8))
                goto LAB_005fefac;
                uVar8 = uVar8 + 1;
                uVar15 = uVar17;
              } while (local_184 != uVar8);
LAB_005fefa8:
              uVar8 = local_184;
LAB_005fefac:
              if (uVar8 < uVar5) goto LAB_005fee4c;
              if (uVar22 < uVar12) {
                uVar15 = uVar8 >> 1;
                if (uVar15 != 0) goto LAB_005fefcc;
                uVar8 = 1;
              }
            }
          }
          else if (local_184 != 2) {
            do {
              uVar17 = puVar6[uVar8];
              if (uVar7 <= uVar17) goto LAB_005ff3c4;
              if (uVar7 <= uVar15) goto LAB_005ff3b4;
              if (*(uint *)(iVar13 + uVar15 * 0xc + 8) < *(uint *)(iVar13 + uVar17 * 0xc + 8))
              goto LAB_005fefac;
              uVar8 = uVar8 + 1;
              uVar15 = uVar17;
            } while (local_184 != uVar8);
            goto LAB_005fefa8;
          }
        }
        local_184 = uVar8 << 1 | 1;
      }
      uVar7 = uVar23 - (uVar16 >> 1);
      uVar8 = uVar7 + uVar23;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar8;
      uVar12 = (local_184 >> 1) + uVar23 * 2;
      lVar2 = (ulonglong)uVar12 * (uVar4 & 0xffffffff);
      uVar15 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar7 = iVar3 * uVar12 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar7,uVar23) * (int)uVar4 +
              uVar8 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar7 != 0) {
        uVar15 = LZCOUNT(uVar7);
      }
    }
    if (uVar19 < 2) {
      abStack_67[uVar19 + 1] = (byte)uVar15;
      local_170[uVar19] = uVar16;
    }
    else {
      do {
        while( true ) {
          uVar7 = uVar19 - 1;
          if (abStack_67[uVar19] < uVar15) goto LAB_005ff2fc;
          uVar12 = local_170[uVar7];
          uVar8 = uVar12 >> 1;
          uVar22 = uVar8 + (uVar16 >> 1);
          uVar19 = uVar7;
          if ((uVar22 <= param_4) && (((uVar12 | uVar16) & 1) == 0)) break;
          puVar6 = (uint *)(param_1 + (uVar23 - uVar22) * 4);
          if ((uVar12 & 1) == 0) {
            FUN_005fa434(puVar6,uVar8,param_3,param_4,LZCOUNT(uVar8 | 1) << 1 ^ 0x3e,0,param_6);
          }
          if ((uVar16 & 1) == 0) {
            FUN_005fa434(puVar6 + uVar8,uVar16 >> 1,param_3,param_4,
                         LZCOUNT(uVar16 >> 1 | 1) << 1 ^ 0x3e,0,param_6);
          }
          uVar17 = uVar16 >> 1;
          if (1 < uVar12 && 1 < uVar16) {
            uVar16 = uVar8;
            if (uVar17 < uVar8) {
              uVar16 = uVar17;
            }
            if (uVar16 <= param_4) {
              puVar21 = puVar6 + uVar8;
              piVar9 = (int *)*param_6;
              puVar10 = puVar6;
              if (uVar17 < uVar8) {
                puVar10 = puVar21;
              }
              FUN_016dd1aa(param_3,puVar10,uVar16 << 2);
              puVar18 = param_3 + uVar16;
              iVar13 = *(int *)(*piVar9 + 4);
              uVar16 = *(uint *)(*piVar9 + 8);
              puVar10 = param_3;
              if (uVar17 < uVar8) {
                puVar11 = (uint *)(param_1 + -4 + uVar23 * 4);
                do {
                  uVar8 = puVar18[-1];
                  if (uVar16 <= uVar8) {
                    puVar14 = &DAT_018574a8;
LAB_005ff380:
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar8,uVar16,puVar14);
                  }
                  uVar12 = puVar21[-1];
                  if (uVar16 <= uVar12) {
                    puVar14 = &DAT_018574b8;
                    uVar8 = uVar12;
                    goto LAB_005ff380;
                  }
                  uVar20 = *(uint *)(iVar13 + uVar8 * 0xc + 8);
                  uVar17 = *(uint *)(iVar13 + uVar12 * 0xc + 8);
                  if (uVar17 < uVar20) {
                    uVar8 = uVar12;
                  }
                  *puVar11 = uVar8;
                  puVar18 = puVar18 + -1 + (uVar17 < uVar20);
                  puVar21 = puVar21 + -1 + (uVar20 <= uVar17);
                } while ((puVar21 != puVar6) && (puVar11 = puVar11 + -1, puVar18 != param_3));
                puVar11 = puVar21;
              }
              else {
                do {
                  uVar8 = *puVar21;
                  if (uVar16 <= uVar8) {
                    puVar14 = &DAT_018574a8;
LAB_005ff3a4:
                    /* WARNING: Subroutine does not return */
                    FUN_00faa4a4(uVar8,uVar16,puVar14);
                  }
                  uVar12 = *puVar10;
                  if (uVar16 <= uVar12) {
                    puVar14 = &DAT_018574b8;
                    uVar8 = uVar12;
                    goto LAB_005ff3a4;
                  }
                  uVar17 = *(uint *)(iVar13 + uVar8 * 0xc + 8);
                  uVar20 = *(uint *)(iVar13 + uVar12 * 0xc + 8);
                  if (uVar20 < uVar17) {
                    uVar12 = uVar8;
                  }
                  puVar10 = puVar10 + (uVar17 <= uVar20);
                  if (puVar10 != puVar18) {
                    puVar21 = puVar21 + (uVar20 < uVar17);
                  }
                  puVar11 = puVar6 + 1;
                  *puVar6 = uVar12;
                  puVar6 = puVar11;
                } while (puVar10 != puVar18 && puVar21 != (uint *)(param_1 + uVar23 * 4));
              }
              FUN_016dd1aa(puVar11,puVar10,(int)puVar18 - (int)puVar10);
            }
          }
          uVar16 = uVar22 * 2 | 1;
          if (uVar7 < 2) goto LAB_005ff2f8;
        }
        uVar16 = uVar22 * 2;
      } while (1 < uVar7);
LAB_005ff2f8:
      uVar19 = 1;
LAB_005ff2fc:
      abStack_67[uVar19 + 1] = (byte)uVar15;
      local_170[uVar19] = uVar16;
    }
    if (param_2 <= uVar23) {
      if ((uVar16 & 1) == 0) {
        FUN_005fa434(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0,param_6);
      }
      return;
    }
    uVar19 = uVar19 + 1;
    uVar23 = uVar23 + (local_184 >> 1);
    uVar16 = local_184;
  } while( true );
}

