// FUN_00662198 @ 00662198 size=2552 calls_out=11 calls_in=2
// strings: 

void FUN_00662198(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6,
                 undefined4 *param_7)

{
  code *pcVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  uint *local_64;
  int local_60;
  int *local_40;
  uint local_34 [2];
  int local_2c [2];
  
  if (param_2 < 0x21) {
LAB_006621c0:
    if (1 < param_2) {
      if (param_4 < param_2 + 0x10) {
LAB_00662a5c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x662a5c);
        (*pcVar1)();
      }
      uVar13 = param_2 >> 1;
      param_7 = (undefined4 *)*param_7;
      if (param_2 < 0x10) {
        if (param_2 < 8) {
          uVar9 = param_1[uVar13];
          uVar10 = 1;
          *param_3 = *param_1;
          param_3[uVar13] = uVar9;
        }
        else {
          FUN_00660928(param_1,param_3,*param_7);
          FUN_00660928(param_1 + uVar13,param_3 + uVar13,*param_7);
          uVar10 = 4;
        }
      }
      else {
        FUN_00660c10(param_1,param_3,param_3 + param_2,param_7);
        FUN_00660c10(param_1 + uVar13,param_3 + uVar13,param_3 + param_2 + 8,param_7);
        uVar10 = 8;
      }
      local_2c[0] = 0;
      iVar5 = 0;
      local_2c[1] = uVar13;
      do {
        iVar4 = local_2c[iVar5];
        uVar9 = uVar13;
        if (iVar4 != 0) {
          uVar9 = param_2 - uVar13;
        }
        if (uVar10 < uVar9) {
          iVar15 = uVar9 - uVar10;
          puVar2 = param_3 + uVar10 + iVar4;
          puVar8 = param_1 + uVar10 + iVar4;
          do {
            *puVar2 = *puVar8;
            FUN_00660818(param_3 + iVar4,puVar2,param_7);
            iVar15 = iVar15 + -1;
            puVar2 = puVar2 + 1;
            puVar8 = puVar8 + 1;
          } while (iVar15 != 0);
        }
        bVar23 = iVar5 == 0;
        iVar5 = 1;
      } while (bVar23);
      FUN_00660c58(param_3,param_2,param_1,param_7);
    }
    return;
  }
  local_64 = param_6;
  local_60 = param_5;
LAB_00662238:
  uVar13 = param_2;
  do {
    if (local_60 == 0) {
      FUN_00663848(param_1,uVar13,param_3,param_4,1,param_7);
      return;
    }
    uVar9 = uVar13 >> 3;
    puVar2 = param_1 + uVar9 * 4;
    puVar8 = param_1 + (uVar9 * 8 - (uVar13 >> 3));
    if (uVar13 < 0x40) {
      local_40 = (int *)*param_7;
      uVar10 = *param_1;
      uVar9 = *(uint *)(*local_40 + 8);
      if (uVar9 <= uVar10) {
LAB_00662b18:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar10,uVar9,&DAT_01c03e28);
      }
      uVar11 = *puVar2;
      if (uVar9 <= uVar11) {
LAB_00662b08:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar11,uVar9,&DAT_01c03e38);
      }
      uVar18 = *puVar8;
      if (uVar9 <= uVar18) {
LAB_00662b24:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar18,uVar9,&DAT_01c03e38);
      }
      iVar5 = *(int *)(*local_40 + 4);
      uVar9 = *(uint *)(iVar5 + uVar10 * 0xc + 8);
      uVar11 = *(uint *)(iVar5 + uVar11 * 0xc + 8);
      uVar10 = *(uint *)(iVar5 + uVar18 * 0xc + 8);
      if (uVar11 < uVar9 != uVar10 < uVar11) {
        puVar2 = puVar8;
      }
      if (uVar11 < uVar9 != uVar10 < uVar9) {
        puVar2 = param_1;
      }
    }
    else {
      puVar2 = (uint *)FUN_00662050(param_1,puVar2,puVar8,uVar9,param_7);
      local_40 = (int *)*param_7;
    }
    uVar17 = (int)puVar2 - (int)param_1;
    local_34[0] = *puVar2;
    local_60 = local_60 + -1;
    uVar9 = local_34[0];
    if (local_64 != (uint *)0x0) {
      uVar11 = *local_64;
      uVar10 = *(uint *)(*local_40 + 8);
      if (uVar10 <= uVar11) {
LAB_00662a6c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar11,uVar10,&DAT_01c03e28);
      }
      if (uVar10 <= local_34[0]) {
LAB_00662a60:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar9,uVar10,&DAT_01c03e38);
      }
      iVar5 = *(int *)(*local_40 + 4);
      if (*(uint *)(iVar5 + uVar11 * 0xc + 8) <= *(uint *)(iVar5 + local_34[0] * 0xc + 8)) break;
    }
    if (param_4 < uVar13) goto LAB_00662a5c;
    puVar8 = param_3 + uVar13;
    param_2 = 0;
    uVar18 = uVar17 >> 2;
    puVar2 = param_1;
    while( true ) {
      iVar5 = uVar18 - 3;
      if (uVar18 < 3) {
        iVar5 = 0;
      }
      if (puVar2 < param_1 + iVar5) {
        iVar4 = *local_40;
        uVar10 = *(uint *)(iVar4 + 8);
        do {
          uVar11 = *puVar2;
          if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar11,uVar10,&DAT_01c03e28);
          }
          if (uVar10 <= uVar9) goto LAB_00662a60;
          iVar15 = *(int *)(iVar4 + 4);
          uVar19 = *(uint *)(iVar15 + uVar11 * 0xc + 8);
          uVar16 = *(uint *)((int)param_1 + uVar17);
          uVar21 = *(uint *)(iVar15 + uVar9 * 0xc + 8);
          iVar15 = *local_40;
          uVar12 = puVar2[1];
          puVar7 = param_3;
          if (uVar19 <= uVar21) {
            puVar7 = puVar8 + -1;
          }
          uVar14 = *(uint *)(iVar15 + 8);
          puVar7[param_2] = uVar11;
          if (uVar21 < uVar19) {
            param_2 = param_2 + 1;
          }
          if (uVar14 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar12,uVar14,&DAT_01c03e28);
          }
          if (uVar14 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar16,uVar14,&DAT_01c03e38);
          }
          iVar15 = *(int *)(iVar15 + 4);
          uVar19 = puVar2[2];
          uVar11 = *(uint *)(iVar15 + uVar12 * 0xc + 8);
          uVar16 = *(uint *)(iVar15 + uVar16 * 0xc + 8);
          puVar7 = param_3;
          if (uVar11 <= uVar16) {
            puVar7 = puVar8 + -2;
          }
          puVar7[param_2] = uVar12;
          if (uVar14 <= uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar19,uVar14,&DAT_01c03e28);
          }
          if (uVar16 < uVar11) {
            param_2 = param_2 + 1;
          }
          uVar11 = *(uint *)((int)param_1 + uVar17);
          uVar21 = puVar2[3];
          iVar20 = *local_40;
          uVar12 = *(uint *)(iVar15 + uVar19 * 0xc + 8);
          puVar7 = param_3;
          if (uVar12 <= uVar16) {
            puVar7 = puVar8 + -3;
          }
          uVar14 = *(uint *)(iVar20 + 8);
          puVar7[param_2] = uVar19;
          if (uVar16 < uVar12) {
            param_2 = param_2 + 1;
          }
          if (uVar14 <= uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar21,uVar14,&DAT_01c03e28);
          }
          if (uVar14 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar11,uVar14,&DAT_01c03e38);
          }
          iVar15 = *(int *)(iVar20 + 4);
          puVar8 = puVar8 + -4;
          puVar2 = puVar2 + 4;
          uVar16 = *(uint *)(iVar15 + uVar21 * 0xc + 8);
          uVar12 = *(uint *)(iVar15 + uVar11 * 0xc + 8);
          puVar7 = puVar8;
          if (uVar12 < uVar16) {
            puVar7 = param_3;
          }
          puVar7[param_2] = uVar21;
          if (uVar12 < uVar16) {
            param_2 = param_2 + 1;
          }
        } while (puVar2 < param_1 + iVar5);
      }
      else {
        uVar11 = uVar9;
      }
      uVar9 = uVar11;
      if (puVar2 < param_1 + uVar18) {
        iVar5 = *local_40;
        uVar10 = *(uint *)(iVar5 + 8);
        uVar9 = *(uint *)((int)param_1 + uVar17);
        do {
          uVar11 = *puVar2;
          if (uVar10 <= uVar11) goto LAB_00662a6c;
          if (uVar10 <= uVar9) goto LAB_00662a60;
          iVar4 = *(int *)(iVar5 + 4);
          puVar8 = puVar8 + -1;
          puVar2 = puVar2 + 1;
          uVar16 = *(uint *)(iVar4 + uVar11 * 0xc + 8);
          uVar12 = *(uint *)(iVar4 + uVar9 * 0xc + 8);
          puVar7 = puVar8;
          if (uVar12 < uVar16) {
            puVar7 = param_3;
          }
          puVar7[param_2] = uVar11;
          if (uVar12 < uVar16) {
            param_2 = param_2 + 1;
          }
        } while (puVar2 < param_1 + uVar18);
      }
      if (uVar18 == uVar13) break;
      puVar8 = puVar8 + -1;
      puVar8[param_2] = *puVar2;
      uVar18 = uVar13;
      puVar2 = puVar2 + 1;
    }
    FUN_01bed4e2(param_1,param_3,param_2 << 2);
    iVar5 = uVar13 - param_2;
    if (iVar5 != 0) {
      puVar2 = param_3 + (uVar13 - 1);
      puVar8 = param_1 + param_2;
      iVar4 = iVar5;
      do {
        iVar4 = iVar4 + -1;
        *puVar8 = *puVar2;
        puVar2 = puVar2 + -1;
        puVar8 = puVar8 + 1;
      } while (iVar4 != 0);
    }
    if (param_2 == 0) break;
    if (uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
    }
    FUN_00662198(param_1 + param_2,iVar5,param_3,param_4,local_60,local_34,param_7);
    uVar13 = param_2;
    if (param_2 < 0x21) goto LAB_006621c0;
  } while( true );
  if (param_4 < uVar13) goto LAB_00662a5c;
  puVar8 = param_3 + uVar13;
  uVar16 = 0;
  piVar3 = (int *)*param_7;
  uVar12 = uVar17 >> 2;
  puVar2 = param_1;
  while( true ) {
    iVar5 = uVar12 - 3;
    if (uVar12 < 3) {
      iVar5 = 0;
    }
    if (puVar2 < param_1 + iVar5) {
      iVar4 = *piVar3;
      piVar6 = (int *)*param_7;
      uVar10 = *(uint *)((int)param_1 + uVar17);
      uVar19 = *(uint *)(iVar4 + 8);
      do {
        uVar9 = uVar19;
        if (uVar19 <= uVar10) goto LAB_00662b18;
        uVar18 = *puVar2;
        if (uVar19 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar18,uVar19,&DAT_01c03e38);
        }
        iVar15 = *(int *)(iVar4 + 4);
        uVar21 = *(uint *)((int)param_1 + uVar17);
        uVar22 = *(uint *)(iVar15 + uVar10 * 0xc + 8);
        uVar14 = *(uint *)(iVar15 + uVar18 * 0xc + 8);
        iVar15 = *piVar6;
        uVar11 = puVar2[1];
        puVar7 = param_3;
        if (uVar14 < uVar22) {
          puVar7 = puVar8 + -1;
        }
        uVar9 = *(uint *)(iVar15 + 8);
        puVar7[uVar16] = uVar18;
        if (uVar22 <= uVar14) {
          uVar16 = uVar16 + 1;
        }
        if (uVar9 <= uVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar21,uVar9,&DAT_01c03e28);
        }
        if (uVar9 <= uVar11) goto LAB_00662b08;
        iVar15 = *(int *)(iVar15 + 4);
        uVar21 = *(uint *)(iVar15 + uVar21 * 0xc + 8);
        uVar14 = *(uint *)(iVar15 + uVar11 * 0xc + 8);
        uVar18 = puVar2[2];
        puVar7 = param_3;
        if (uVar14 < uVar21) {
          puVar7 = puVar8 + -2;
        }
        puVar7[uVar16] = uVar11;
        if (uVar9 <= uVar18) goto LAB_00662b24;
        if (uVar21 <= uVar14) {
          uVar16 = uVar16 + 1;
        }
        uVar11 = puVar2[3];
        uVar22 = *(uint *)((int)param_1 + uVar17);
        iVar20 = *piVar6;
        uVar9 = *(uint *)(iVar15 + uVar18 * 0xc + 8);
        uVar14 = *(uint *)(iVar20 + 8);
        puVar7 = param_3;
        if (uVar9 < uVar21) {
          puVar7 = puVar8 + -3;
        }
        puVar7[uVar16] = uVar18;
        if (uVar21 <= uVar9) {
          uVar16 = uVar16 + 1;
        }
        if (uVar14 <= uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar22,uVar14,&DAT_01c03e28);
        }
        if (uVar14 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar11,uVar14,&DAT_01c03e38);
        }
        iVar15 = *(int *)(iVar20 + 4);
        puVar8 = puVar8 + -4;
        puVar2 = puVar2 + 4;
        uVar18 = *(uint *)(iVar15 + uVar22 * 0xc + 8);
        uVar9 = *(uint *)(iVar15 + uVar11 * 0xc + 8);
        puVar7 = puVar8;
        if (uVar18 <= uVar9) {
          puVar7 = param_3;
        }
        puVar7[uVar16] = uVar11;
        if (uVar18 <= uVar9) {
          uVar16 = uVar16 + 1;
        }
      } while (puVar2 < param_1 + iVar5);
    }
    if (puVar2 < param_1 + uVar12) {
      iVar5 = *piVar3;
      uVar10 = *(uint *)((int)param_1 + uVar17);
      uVar9 = *(uint *)(iVar5 + 8);
      do {
        if (uVar9 <= uVar10) goto LAB_00662b18;
        uVar11 = *puVar2;
        if (uVar9 <= uVar11) goto LAB_00662b08;
        iVar4 = *(int *)(iVar5 + 4);
        puVar8 = puVar8 + -1;
        puVar2 = puVar2 + 1;
        uVar19 = *(uint *)(iVar4 + uVar10 * 0xc + 8);
        uVar18 = *(uint *)(iVar4 + uVar11 * 0xc + 8);
        puVar7 = puVar8;
        if (uVar19 <= uVar18) {
          puVar7 = param_3;
        }
        puVar7[uVar16] = uVar11;
        if (uVar19 <= uVar18) {
          uVar16 = uVar16 + 1;
        }
      } while (puVar2 < param_1 + uVar12);
    }
    if (uVar12 == uVar13) break;
    puVar8 = puVar8 + -1;
    param_3[uVar16] = *puVar2;
    uVar16 = uVar16 + 1;
    uVar12 = uVar13;
    puVar2 = puVar2 + 1;
  }
  FUN_01bed4e2(param_1,param_3,uVar16 << 2);
  param_2 = uVar13 - uVar16;
  if (param_2 == 0) {
    return;
  }
  puVar2 = param_3 + (uVar13 - 1);
  uVar9 = param_2;
  puVar8 = param_1 + uVar16;
  do {
    uVar9 = uVar9 - 1;
    *puVar8 = *puVar2;
    puVar2 = puVar2 + -1;
    puVar8 = puVar8 + 1;
  } while (uVar9 != 0);
  if (uVar13 < uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar16,uVar13,uVar13,&DAT_01d30598);
  }
  param_1 = param_1 + uVar16;
  local_64 = (uint *)0x0;
  if (param_2 < 0x21) goto LAB_006621c0;
  goto LAB_00662238;
}

