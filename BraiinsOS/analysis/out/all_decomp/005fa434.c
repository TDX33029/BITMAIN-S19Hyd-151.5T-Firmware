// FUN_005fa434 @ 005fa434 size=2816 calls_out=9 calls_in=2
// strings: 

void FUN_005fa434(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,uint *param_6,
                 undefined4 *param_7)

{
  code *pcVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint local_54;
  uint *local_48;
  uint local_40;
  uint *local_3c;
  int local_38;
  uint local_28;
  
  if (0x20 < param_2) {
    local_48 = param_6;
LAB_005fa534:
    uVar13 = param_2;
    do {
      if (param_5 == 0) {
        FUN_005fed38(param_1,uVar13,param_3,param_4,1,param_7);
        return;
      }
      uVar17 = uVar13 >> 3;
      puVar3 = param_1 + uVar17 * 4;
      puVar6 = param_1 + (uVar17 * 8 - (uVar13 >> 3));
      if (uVar13 < 0x40) {
        local_3c = (uint *)*param_7;
        uVar17 = *param_1;
        uVar16 = *(uint *)(*local_3c + 8);
        if (uVar16 <= uVar17) goto LAB_005faeb4;
        uVar14 = *puVar3;
        if (uVar16 <= uVar14) {
LAB_005fae88:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar14,uVar16,&DAT_018574b8);
        }
        uVar7 = *puVar6;
        if (uVar16 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar7,uVar16,&DAT_018574b8);
        }
        iVar5 = *(int *)(*local_3c + 4);
        uVar17 = *(uint *)(iVar5 + uVar17 * 0xc + 8);
        uVar14 = *(uint *)(iVar5 + uVar14 * 0xc + 8);
        uVar16 = *(uint *)(iVar5 + uVar7 * 0xc + 8);
        if (uVar14 < uVar17 != uVar16 < uVar14) {
          puVar3 = puVar6;
        }
        if (uVar14 < uVar17 != uVar16 < uVar17) {
          puVar3 = param_1;
        }
      }
      else {
        puVar3 = (uint *)FUN_005faf90(param_1,puVar3,puVar6,uVar17,param_7);
        local_3c = (uint *)*param_7;
      }
      uVar7 = (int)puVar3 - (int)param_1;
      uVar17 = *puVar3;
      param_5 = param_5 + -1;
      local_28 = uVar17;
      if (local_48 != (uint *)0x0) {
        uVar11 = *local_48;
        uVar16 = *(uint *)(*local_3c + 8);
        if (uVar16 <= uVar11) {
LAB_005fae30:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar11,uVar16,&DAT_018574a8);
        }
        if (uVar16 <= uVar17) {
LAB_005fae58:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar17,uVar16,&DAT_018574b8);
        }
        iVar5 = *(int *)(*local_3c + 4);
        if (*(uint *)(iVar5 + uVar11 * 0xc + 8) <= *(uint *)(iVar5 + uVar17 * 0xc + 8))
        goto LAB_005fa8e8;
      }
      if (param_4 < uVar13) goto LAB_005faf00;
      puVar6 = param_3 + uVar13;
      param_2 = 0;
      puVar3 = param_1;
      uVar9 = uVar7 >> 2;
      while( true ) {
        iVar5 = uVar9 - 3;
        if (uVar9 < 3) {
          iVar5 = 0;
        }
        if (puVar3 < param_1 + iVar5) {
          uVar14 = *(uint *)((int)param_1 + uVar7);
          uVar16 = *(uint *)(*local_3c + 8);
          if (uVar16 <= uVar14) {
            uVar17 = *puVar3;
            if (uVar16 <= uVar17) goto LAB_005faeb4;
            goto LAB_005fae88;
          }
          iVar18 = *(int *)(*local_3c + 4);
          do {
            uVar17 = *puVar3;
            if (uVar16 <= uVar17) goto LAB_005faeb4;
            uVar15 = *(uint *)(iVar18 + uVar14 * 0xc + 8);
            uVar12 = *(uint *)(iVar18 + uVar17 * 0xc + 8);
            uVar11 = puVar3[1];
            puVar4 = param_3;
            if (uVar12 <= uVar15) {
              puVar4 = puVar6 + -1;
            }
            puVar4[param_2] = uVar17;
            if (uVar16 <= uVar11) goto LAB_005fae30;
            uVar17 = puVar3[2];
            if (uVar15 < uVar12) {
              param_2 = param_2 + 1;
            }
            uVar12 = *(uint *)(iVar18 + uVar11 * 0xc + 8);
            puVar4 = param_3;
            if (uVar12 <= uVar15) {
              puVar4 = puVar6 + -2;
            }
            puVar4[param_2] = uVar11;
            if (uVar16 <= uVar17) goto LAB_005faeb4;
            uVar11 = puVar3[3];
            if (uVar15 < uVar12) {
              param_2 = param_2 + 1;
            }
            uVar12 = *(uint *)(iVar18 + uVar17 * 0xc + 8);
            puVar4 = param_3;
            if (uVar12 <= uVar15) {
              puVar4 = puVar6 + -3;
            }
            puVar4[param_2] = uVar17;
            if (uVar16 <= uVar11) goto LAB_005fae30;
            puVar6 = puVar6 + -4;
            puVar3 = puVar3 + 4;
            if (uVar15 < uVar12) {
              param_2 = param_2 + 1;
            }
            uVar17 = *(uint *)(iVar18 + uVar11 * 0xc + 8);
            puVar4 = puVar6;
            if (uVar15 < uVar17) {
              puVar4 = param_3;
            }
            puVar4[param_2] = uVar11;
            if (uVar15 < uVar17) {
              param_2 = param_2 + 1;
            }
          } while (puVar3 < param_1 + iVar5);
        }
        if (puVar3 < param_1 + uVar9) {
          uVar14 = *(uint *)((int)param_1 + uVar7);
          uVar16 = *(uint *)(*local_3c + 8);
          if (uVar16 <= uVar14) {
            uVar17 = *puVar3;
            if (uVar17 < uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar14,uVar16,&DAT_018574b8);
            }
            goto LAB_005faeb4;
          }
          iVar5 = *(int *)(*local_3c + 4);
          do {
            uVar17 = *puVar3;
            if (uVar16 <= uVar17) goto LAB_005faeb4;
            uVar12 = *(uint *)(iVar5 + uVar14 * 0xc + 8);
            puVar6 = puVar6 + -1;
            puVar3 = puVar3 + 1;
            uVar11 = *(uint *)(iVar5 + uVar17 * 0xc + 8);
            puVar4 = puVar6;
            if (uVar12 < uVar11) {
              puVar4 = param_3;
            }
            puVar4[param_2] = uVar17;
            if (uVar12 < uVar11) {
              param_2 = param_2 + 1;
            }
          } while (puVar3 < param_1 + uVar9);
        }
        if (uVar9 == uVar13) break;
        puVar6 = puVar6 + -1;
        puVar6[param_2] = *puVar3;
        puVar3 = puVar3 + 1;
        uVar9 = uVar13;
      }
      FUN_016dd1aa(param_1,param_3,param_2 << 2);
      iVar5 = uVar13 - param_2;
      if (iVar5 != 0) {
        puVar3 = param_3 + (uVar13 - 1);
        puVar6 = param_1 + param_2;
        iVar18 = iVar5;
        do {
          iVar18 = iVar18 + -1;
          *puVar6 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar6 = puVar6 + 1;
        } while (iVar18 != 0);
      }
      if (param_2 == 0) goto LAB_005fa8e8;
      if (uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
      }
      FUN_005fa434(param_1 + param_2,iVar5,param_3,param_4,param_5,&local_28,param_7);
      uVar13 = param_2;
      if (param_2 < 0x21) break;
    } while( true );
  }
LAB_005fa45c:
  if (param_2 < 2) {
    return;
  }
  if (param_4 < param_2 + 0x10) {
LAB_005faf00:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x5faf00);
    (*pcVar1)();
  }
  piVar2 = (int *)*param_7;
  uVar13 = param_2 >> 1;
  if (param_2 < 0x10) {
    if (param_2 < 8) {
      uVar17 = param_1[uVar13];
      *param_3 = *param_1;
      param_3[uVar13] = uVar17;
      local_54 = 1;
      if (uVar13 < 2) goto LAB_005facb4;
    }
    else {
      FUN_0060043c(param_1,param_3,*piVar2);
      FUN_0060043c(param_1 + uVar13,param_3 + uVar13,*piVar2);
      local_54 = 4;
      if (uVar13 < 5) goto LAB_005facb4;
    }
  }
  else {
    puVar3 = param_3 + param_2;
    FUN_0060043c(param_1,puVar3,*piVar2);
    FUN_0060043c(param_1 + 4,puVar3 + 4,*piVar2);
    FUN_00600684(puVar3,8,param_3,piVar2);
    FUN_0060043c(param_1 + uVar13,puVar3 + 8,*piVar2);
    FUN_0060043c(param_1 + uVar13 + 4,puVar3 + 0xc,*piVar2);
    FUN_00600684(puVar3 + 8,8,param_3 + uVar13,piVar2);
    local_54 = 8;
    if (uVar13 < 9) goto LAB_005facb4;
  }
  local_40 = *(uint *)(*piVar2 + 8);
  iVar18 = *(int *)(*piVar2 + 4);
  uVar16 = local_54 * -4 + 4;
  iVar5 = local_54 << 2;
  uVar17 = local_54;
  do {
    uVar14 = param_1[uVar17];
    param_3[uVar17] = uVar14;
    if (local_40 <= uVar14) goto LAB_005faf14;
    uVar7 = (param_3 + uVar17)[-1];
    if (local_40 <= uVar7) goto LAB_005faf04;
    if (*(uint *)(iVar18 + uVar7 * 0xc + 8) < *(uint *)(iVar18 + uVar14 * 0xc + 8)) {
      uVar11 = uVar16;
      iVar10 = iVar5;
      do {
        *(uint *)((int)param_3 + iVar10) = uVar7;
        if (uVar11 == 0) {
          puVar3 = param_3;
          goto LAB_005fabe8;
        }
        uVar9 = *(uint *)(*piVar2 + 8);
        if (uVar9 <= uVar14) goto LAB_005faed8;
        uVar7 = *(uint *)((int)param_3 + iVar10 + -8);
        if (uVar9 <= uVar7) goto LAB_005faef4;
        iVar8 = *(int *)(*piVar2 + 4);
        iVar10 = iVar10 + -4;
        uVar11 = uVar11 + 4;
      } while (*(uint *)(iVar8 + uVar7 * 0xc + 8) < *(uint *)(iVar8 + uVar14 * 0xc + 8));
      puVar3 = (uint *)((int)param_3 + iVar10);
LAB_005fabe8:
      *puVar3 = uVar14;
    }
    uVar17 = uVar17 + 1;
    iVar5 = iVar5 + 4;
    uVar16 = uVar16 - 4;
  } while (uVar17 != uVar13);
LAB_005facb4:
  if (local_54 < param_2 - uVar13) {
    puVar3 = param_3 + uVar13;
    iVar5 = *(int *)(*piVar2 + 4);
    local_40 = *(uint *)(*piVar2 + 8);
    local_38 = 4;
    uVar17 = local_54;
    local_3c = puVar3;
    do {
      uVar14 = param_1[uVar13 + uVar17];
      puVar3[uVar17] = uVar14;
      if (local_40 <= uVar14) {
LAB_005faf14:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar14,local_40,&DAT_018574a8);
      }
      uVar7 = (puVar3 + uVar17)[-1];
      if (local_40 <= uVar7) {
LAB_005faf04:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar7,local_40,&DAT_018574b8);
      }
      if (*(uint *)(iVar5 + uVar7 * 0xc + 8) < *(uint *)(iVar5 + uVar14 * 0xc + 8)) {
        puVar6 = local_3c;
        iVar18 = local_38;
        do {
          puVar6[local_54] = uVar7;
          if (local_54 * 4 == iVar18) {
            puVar6 = puVar3;
            goto LAB_005fad18;
          }
          uVar9 = *(uint *)(*piVar2 + 8);
          if (uVar9 <= uVar14) {
LAB_005faed8:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar14,uVar9,&DAT_018574a8);
          }
          uVar7 = puVar6[local_54 - 2];
          if (uVar9 <= uVar7) {
            uVar11 = local_54;
LAB_005faef4:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar7,uVar9,&DAT_018574b8,uVar11);
          }
          iVar10 = *(int *)(*piVar2 + 4);
          puVar6 = puVar6 + -1;
          iVar18 = iVar18 + 4;
        } while (*(uint *)(iVar10 + uVar7 * 0xc + 8) < *(uint *)(iVar10 + uVar14 * 0xc + 8));
        puVar6 = puVar6 + local_54;
LAB_005fad18:
        *puVar6 = uVar14;
      }
      uVar17 = uVar17 + 1;
      local_3c = local_3c + 1;
      local_38 = local_38 + -4;
    } while (uVar17 != param_2 - uVar13);
  }
  FUN_00600684(param_3,param_2,param_1,piVar2);
  return;
LAB_005fa8e8:
  if (uVar13 <= param_4) {
    puVar3 = param_3 + uVar13;
    piVar2 = (int *)*param_7;
    uVar11 = 0;
    puVar6 = param_1;
    uVar9 = uVar7 >> 2;
    do {
      iVar5 = uVar9 - 3;
      if (uVar9 < 3) {
        iVar5 = 0;
      }
      if (puVar6 < param_1 + iVar5) {
        iVar18 = *piVar2;
        uVar17 = *(uint *)((int)param_1 + uVar7);
        uVar16 = *(uint *)(iVar18 + 8);
        if (uVar16 <= uVar17) {
LAB_005faeb4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar17,uVar16,&DAT_018574a8);
        }
        iVar18 = *(int *)(iVar18 + 4);
        uVar12 = *(uint *)(iVar18 + uVar17 * 0xc + 8);
        do {
          uVar17 = *puVar6;
          if (uVar16 <= uVar17) goto LAB_005fae58;
          uVar15 = *(uint *)(iVar18 + uVar17 * 0xc + 8);
          uVar14 = puVar6[1];
          puVar4 = param_3;
          if (uVar15 < uVar12) {
            puVar4 = puVar3 + -1;
          }
          puVar4[uVar11] = uVar17;
          if (uVar16 <= uVar14) goto LAB_005fae88;
          uVar17 = puVar6[2];
          if (uVar12 <= uVar15) {
            uVar11 = uVar11 + 1;
          }
          uVar15 = *(uint *)(iVar18 + uVar14 * 0xc + 8);
          puVar4 = param_3;
          if (uVar15 < uVar12) {
            puVar4 = puVar3 + -2;
          }
          puVar4[uVar11] = uVar14;
          if (uVar16 <= uVar17) goto LAB_005fae58;
          uVar14 = puVar6[3];
          if (uVar12 <= uVar15) {
            uVar11 = uVar11 + 1;
          }
          uVar15 = *(uint *)(iVar18 + uVar17 * 0xc + 8);
          puVar4 = param_3;
          if (uVar15 < uVar12) {
            puVar4 = puVar3 + -3;
          }
          puVar4[uVar11] = uVar17;
          if (uVar16 <= uVar14) goto LAB_005fae88;
          puVar3 = puVar3 + -4;
          puVar6 = puVar6 + 4;
          if (uVar12 <= uVar15) {
            uVar11 = uVar11 + 1;
          }
          uVar17 = *(uint *)(iVar18 + uVar14 * 0xc + 8);
          puVar4 = puVar3;
          if (uVar12 <= uVar17) {
            puVar4 = param_3;
          }
          puVar4[uVar11] = uVar14;
          if (uVar12 <= uVar17) {
            uVar11 = uVar11 + 1;
          }
        } while (puVar6 < param_1 + iVar5);
      }
      puVar4 = puVar6;
      if (puVar6 < param_1 + uVar9) {
        iVar5 = *piVar2;
        uVar17 = *(uint *)((int)param_1 + uVar7);
        uVar16 = *(uint *)(iVar5 + 8);
        if (uVar16 <= uVar17) goto LAB_005faeb4;
        iVar5 = *(int *)(iVar5 + 4);
        uVar14 = *(uint *)(iVar5 + uVar17 * 0xc + 8);
        do {
          uVar17 = *puVar6;
          if (uVar16 <= uVar17) goto LAB_005fae58;
          puVar3 = puVar3 + -1;
          puVar6 = puVar6 + 1;
          uVar12 = *(uint *)(iVar5 + uVar17 * 0xc + 8);
          puVar4 = puVar3;
          if (uVar14 <= uVar12) {
            puVar4 = param_3;
          }
          puVar4[uVar11] = uVar17;
          if (uVar14 <= uVar12) {
            uVar11 = uVar11 + 1;
          }
          puVar4 = puVar6;
        } while (puVar6 < param_1 + uVar9);
      }
      if (uVar9 == uVar13) goto LAB_005faac0;
      puVar6 = puVar4 + 1;
      puVar3 = puVar3 + -1;
      param_3[uVar11] = *puVar4;
      uVar11 = uVar11 + 1;
      uVar9 = uVar13;
    } while( true );
  }
  goto LAB_005faf00;
LAB_005faac0:
  FUN_016dd1aa(param_1,param_3,uVar11 << 2);
  param_2 = uVar13 - uVar11;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar11;
  puVar3 = param_3 + (uVar13 - 1);
  uVar17 = param_2;
  puVar6 = param_1;
  do {
    uVar17 = uVar17 - 1;
    *puVar6 = *puVar3;
    puVar3 = puVar3 + -1;
    puVar6 = puVar6 + 1;
  } while (uVar17 != 0);
  if (uVar13 < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar11,uVar13,uVar13,&DAT_018af348);
  }
  local_48 = (uint *)0x0;
  if (param_2 < 0x21) goto LAB_005fa45c;
  goto LAB_005fa534;
}

