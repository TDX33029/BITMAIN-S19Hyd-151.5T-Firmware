// FUN_01ae56b4 @ 01ae56b4 size=2568 calls_out=9 calls_in=2
// strings: 

void FUN_01ae56b4(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,int *param_6,
                 undefined4 *param_7)

{
  code *pcVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  uint local_6c;
  uint *local_60;
  uint *local_5c;
  uint local_50;
  uint uStack_4c;
  uint local_48 [4];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (0x20 < param_2) {
    local_6c = param_2;
LAB_01ae575c:
LAB_01ae5774:
    if (param_5 == 0) {
      FUN_01ae4cb0(param_1,local_6c,param_3,param_4,1,param_7);
      return;
    }
    uVar15 = local_6c >> 3;
    puVar9 = param_1 + uVar15 * 0x46;
    puVar6 = param_1 + uVar15 * 0x28;
    if (local_6c < 0x40) {
      uVar15 = *puVar6;
      puVar14 = (undefined4 *)*param_7;
      puVar3 = param_1;
      if (*param_1 == 0) {
        if (uVar15 == 0) {
          cVar2 = (**(code **)((*(undefined4 **)*puVar14)[1] + 0x10))
                            (**(undefined4 **)*puVar14,param_1 + 2,puVar6 + 2);
          if (*puVar9 == 0) {
            uVar10 = (uint)(cVar2 == -1);
            goto LAB_01ae5854;
          }
          uVar10 = 0;
          uVar15 = 0;
          if (cVar2 == -1) goto LAB_01ae58e4;
        }
        else {
          uVar10 = 0;
          uVar7 = 1;
          if (*puVar9 == 0) {
LAB_01ae5854:
            cVar2 = (**(code **)((*(undefined4 **)*puVar14)[1] + 0x10))
                              (**(undefined4 **)*puVar14,param_1 + 2,puVar9 + 2);
            uVar5 = (uint)(cVar2 == -1);
            uVar7 = 0;
            goto LAB_01ae5884;
          }
LAB_01ae5898:
          uVar15 = uVar7 ^ 1;
        }
      }
      else {
        uVar7 = *puVar9;
        uVar10 = uVar15 ^ 1;
        uVar5 = uVar7 ^ 1;
LAB_01ae5884:
        if (uVar10 != uVar5) goto LAB_01ae58e4;
        if (uVar15 != 0) goto LAB_01ae5898;
        uVar15 = 0;
        if (uVar7 == 0) {
          cVar2 = (**(code **)((*(undefined4 **)*puVar14)[1] + 0x10))
                            (**(undefined4 **)*puVar14,puVar6 + 2,puVar9 + 2);
          uVar15 = (uint)(cVar2 == -1);
        }
      }
      if (uVar10 != uVar15) {
        puVar6 = puVar9;
      }
      puVar3 = puVar6;
    }
    else {
      puVar3 = (uint *)FUN_01ae54f8(param_1,puVar6,puVar9,uVar15,param_7);
    }
LAB_01ae58e4:
    param_5 = param_5 + -1;
    uVar15 = ((uint)((int)puVar3 - (int)param_1) >> 3) * -0x33333333;
    local_50 = *puVar3;
    uStack_4c = puVar3[1];
    local_48[0] = puVar3[2];
    local_48[1] = puVar3[3];
    local_48[2] = puVar3[4];
    local_48[3] = puVar3[5];
    uStack_38 = puVar3[6];
    uStack_34 = puVar3[7];
    uStack_30 = puVar3[8];
    uStack_2c = puVar3[9];
    local_5c = (uint *)*param_7;
    if (param_6 != (int *)0x0) {
      if (*param_6 == 0) {
        if ((*puVar3 != 0) ||
           (cVar2 = (**(code **)((*(undefined4 **)*local_5c)[1] + 0x10))
                              (**(undefined4 **)*local_5c,param_6 + 2,puVar3 + 2), cVar2 != -1))
        goto LAB_01ae5b70;
        local_5c = (uint *)*param_7;
      }
      else if (*puVar3 != 0) goto LAB_01ae5b70;
    }
    if (local_6c <= param_4) {
      param_2 = 0;
      puVar9 = param_3 + local_6c * 10;
      uVar10 = uVar15;
      puVar6 = param_1;
      do {
        for (puVar8 = puVar6; puVar8 < param_1 + uVar10 * 10; puVar8 = puVar8 + 10) {
          uVar7 = *puVar3;
          puVar9 = puVar9 + -10;
          puVar6 = puVar9;
          if (*puVar8 == 0) {
            if (uVar7 == 0) {
              uVar7 = (**(code **)((*(undefined4 **)*local_5c)[1] + 0x10))
                                (**(undefined4 **)*local_5c,puVar8 + 2,puVar3 + 2);
              uVar7 = ~uVar7 & 0xff;
              goto LAB_01ae5a4c;
            }
            uVar5 = 0;
          }
          else {
LAB_01ae5a4c:
            uVar5 = (uint)(uVar7 == 0);
            if (uVar7 == 0) {
              puVar6 = param_3;
            }
          }
          puVar6 = puVar6 + param_2 * 10;
          uVar7 = puVar8[1];
          uVar11 = puVar8[2];
          uVar12 = puVar8[3];
          uVar13 = puVar8[4];
          *puVar6 = *puVar8;
          puVar6[1] = uVar7;
          puVar6[2] = uVar11;
          puVar6[3] = uVar12;
          puVar6[4] = uVar13;
          uVar7 = puVar8[6];
          uVar11 = puVar8[7];
          uVar12 = puVar8[8];
          uVar13 = puVar8[9];
          puVar6[5] = puVar8[5];
          puVar6[6] = uVar7;
          puVar6[7] = uVar11;
          puVar6[8] = uVar12;
          puVar6[9] = uVar13;
          param_2 = param_2 + uVar5;
        }
        if (uVar10 == local_6c) goto LAB_01ae5abc;
        puVar9 = puVar9 + -10;
        uVar10 = puVar8[1];
        uVar7 = puVar8[2];
        uVar5 = puVar8[3];
        uVar11 = puVar8[4];
        puVar4 = puVar9 + param_2 * 10;
        puVar6 = puVar8 + 10;
        *puVar4 = *puVar8;
        puVar4[1] = uVar10;
        puVar4[2] = uVar7;
        puVar4[3] = uVar5;
        puVar4[4] = uVar11;
        uVar10 = puVar8[6];
        uVar7 = puVar8[7];
        uVar5 = puVar8[8];
        uVar11 = puVar8[9];
        puVar4[5] = puVar8[5];
        puVar4[6] = uVar10;
        puVar4[7] = uVar7;
        puVar4[8] = uVar5;
        puVar4[9] = uVar11;
        uVar10 = local_6c;
      } while( true );
    }
    goto LAB_01ae60a4;
  }
LAB_01ae56d8:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar15 = param_2 >> 1;
    param_7 = (undefined4 *)*param_7;
    puVar6 = param_3 + uVar15 * 10;
    puVar9 = param_1 + uVar15 * 10;
    if (param_2 < 8) {
      uVar10 = param_1[1];
      uVar7 = param_1[2];
      uVar5 = param_1[3];
      uVar11 = param_1[4];
      *param_3 = *param_1;
      param_3[1] = uVar10;
      param_3[2] = uVar7;
      param_3[3] = uVar5;
      param_3[4] = uVar11;
      uVar10 = param_1[6];
      uVar7 = param_1[7];
      uVar5 = param_1[8];
      uVar11 = param_1[9];
      param_3[5] = param_1[5];
      param_3[6] = uVar10;
      param_3[7] = uVar7;
      param_3[8] = uVar5;
      param_3[9] = uVar11;
      uVar10 = puVar9[1];
      uVar7 = puVar9[2];
      uVar5 = puVar9[3];
      uVar11 = puVar9[4];
      *puVar6 = *puVar9;
      puVar6[1] = uVar10;
      puVar6[2] = uVar7;
      puVar6[3] = uVar5;
      puVar6[4] = uVar11;
      uVar10 = puVar9[6];
      uVar7 = puVar9[7];
      uVar5 = puVar9[8];
      uVar11 = puVar9[9];
      puVar6[5] = puVar9[5];
      puVar6[6] = uVar10;
      puVar6[7] = uVar7;
      puVar6[8] = uVar5;
      puVar6[9] = uVar11;
      uVar10 = 1;
    }
    else {
      FUN_01ae43f8(param_1,param_3,param_7);
      FUN_01ae43f8(puVar9,puVar6,param_7);
      uVar10 = 4;
    }
    local_48[0] = 0;
    iVar16 = 0;
    local_48[1] = uVar15;
    do {
      uVar5 = local_48[iVar16];
      uVar7 = uVar15;
      if (uVar5 != 0) {
        uVar7 = param_2 - uVar15;
      }
      if (uVar10 < uVar7) {
        iVar17 = uVar7 - uVar10;
        puVar3 = param_1 + uVar10 * 10 + uVar5 * 10;
        puVar9 = param_3 + uVar10 * 10 + uVar5 * 10;
        do {
          uVar7 = puVar3[1];
          uVar11 = puVar3[2];
          uVar12 = puVar3[3];
          uVar13 = puVar3[4];
          *puVar9 = *puVar3;
          puVar9[1] = uVar7;
          puVar9[2] = uVar11;
          puVar9[3] = uVar12;
          puVar9[4] = uVar13;
          uVar7 = puVar3[6];
          uVar11 = puVar3[7];
          uVar12 = puVar3[8];
          uVar13 = puVar3[9];
          puVar9[5] = puVar3[5];
          puVar9[6] = uVar7;
          puVar9[7] = uVar11;
          puVar9[8] = uVar12;
          puVar9[9] = uVar13;
          FUN_01ae42b4(param_3 + uVar5 * 10,puVar9,param_7);
          puVar3 = puVar3 + 10;
          puVar9 = puVar9 + 10;
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      bVar18 = iVar16 == 0;
      iVar16 = 1;
    } while (bVar18);
    iVar16 = 0;
    puVar9 = param_3 + param_2 * 10;
    local_60 = puVar6 + -10;
    do {
      local_5c = puVar9 + -10;
      uVar10 = 0;
      puVar3 = param_3;
      if (*puVar6 == 0) {
        if (*param_3 == 0) {
          cVar2 = (**(code **)((*(undefined4 **)*param_7)[1] + 0x10))
                            (**(undefined4 **)*param_7,puVar6 + 2,param_3 + 2);
          uVar10 = 0;
          if (cVar2 == -1) goto LAB_01ae5ee0;
        }
      }
      else if (*param_3 == 0) {
LAB_01ae5ee0:
        uVar10 = 1;
        puVar3 = puVar6;
      }
      iVar17 = 0;
      uVar7 = puVar3[1];
      uVar5 = puVar3[2];
      uVar11 = puVar3[3];
      uVar12 = puVar3[4];
      puVar8 = (uint *)((int)param_1 + iVar16);
      *puVar8 = *puVar3;
      puVar8[1] = uVar7;
      puVar8[2] = uVar5;
      puVar8[3] = uVar11;
      puVar8[4] = uVar12;
      uVar7 = puVar3[6];
      uVar5 = puVar3[7];
      uVar11 = puVar3[8];
      uVar12 = puVar3[9];
      puVar8[5] = puVar3[5];
      puVar8[6] = uVar7;
      puVar8[7] = uVar5;
      puVar8[8] = uVar11;
      puVar8[9] = uVar12;
      puVar3 = local_5c;
      if (*local_5c == 0) {
        if ((*local_60 == 0) &&
           (cVar2 = (**(code **)((*(undefined4 **)*param_7)[1] + 0x10))
                              (**(undefined4 **)*param_7,puVar9 + -8,local_60 + 2), cVar2 == -1))
        goto LAB_01ae5f90;
      }
      else if (*local_60 == 0) {
LAB_01ae5f90:
        iVar17 = 1;
        puVar3 = local_60;
      }
      uVar15 = uVar15 - 1;
      puVar6 = puVar6 + (uVar10 | uVar10 << 2) * 2;
      puVar9 = (uint *)((int)param_1 + ((param_2 * 0x28 + -0x28) - iVar16));
      iVar16 = iVar16 + 0x28;
      param_3 = param_3 + (uVar10 ^ 1 | (uVar10 ^ 1) << 2) * 2;
      uVar10 = puVar3[1];
      uVar7 = puVar3[2];
      uVar5 = puVar3[3];
      uVar11 = puVar3[4];
      *puVar9 = *puVar3;
      puVar9[1] = uVar10;
      puVar9[2] = uVar7;
      puVar9[3] = uVar5;
      puVar9[4] = uVar11;
      uVar10 = puVar3[6];
      uVar7 = puVar3[7];
      uVar5 = puVar3[8];
      uVar11 = puVar3[9];
      puVar9[5] = puVar3[5];
      puVar9[6] = uVar10;
      puVar9[7] = uVar7;
      puVar9[8] = uVar5;
      puVar9[9] = uVar11;
      local_60 = local_60 + iVar17 * -10;
      puVar9 = local_5c + iVar17 * 10;
    } while (uVar15 != 0);
    local_60 = local_60 + 10;
    if ((param_2 & 1) != 0) {
      bVar18 = local_60 <= param_3;
      puVar3 = puVar6;
      if (!bVar18) {
        puVar3 = param_3;
      }
      uVar15 = puVar3[1];
      uVar10 = puVar3[2];
      uVar7 = puVar3[3];
      uVar5 = puVar3[4];
      param_1 = (uint *)((int)param_1 + iVar16);
      *param_1 = *puVar3;
      param_1[1] = uVar15;
      param_1[2] = uVar10;
      param_1[3] = uVar7;
      param_1[4] = uVar5;
      uVar15 = puVar3[6];
      uVar10 = puVar3[7];
      uVar7 = puVar3[8];
      uVar5 = puVar3[9];
      param_1[5] = puVar3[5];
      param_1[6] = uVar15;
      param_1[7] = uVar10;
      param_1[8] = uVar7;
      param_1[9] = uVar5;
      puVar6 = puVar6 + ((uint)bVar18 | (uint)bVar18 << 2) * 2;
      param_3 = param_3 + ((uint)!bVar18 | (uint)!bVar18 << 2) * 2;
    }
    puVar3 = local_60;
    if (param_3 == local_60) {
      puVar3 = puVar9;
    }
    if (param_3 == local_60 && puVar6 == puVar3) {
      return;
    }
    FUN_01307140();
  }
LAB_01ae60a4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1ae60a4);
  (*pcVar1)();
LAB_01ae5abc:
  FUN_01bed4e2(param_1,param_3,param_2 * 0x28);
  iVar16 = local_6c - param_2;
  if (iVar16 != 0) {
    puVar6 = param_1 + param_2 * 10;
    iVar17 = iVar16;
    puVar9 = param_3 + local_6c * 10 + -10;
    do {
      uVar10 = puVar9[1];
      uVar7 = puVar9[2];
      uVar5 = puVar9[3];
      uVar11 = puVar9[4];
      iVar17 = iVar17 + -1;
      *puVar6 = *puVar9;
      puVar6[1] = uVar10;
      puVar6[2] = uVar7;
      puVar6[3] = uVar5;
      puVar6[4] = uVar11;
      uVar10 = puVar9[6];
      uVar7 = puVar9[7];
      uVar5 = puVar9[8];
      uVar11 = puVar9[9];
      puVar6[5] = puVar9[5];
      puVar6[6] = uVar10;
      puVar6[7] = uVar7;
      puVar6[8] = uVar5;
      puVar6[9] = uVar11;
      puVar6 = puVar6 + 10;
      puVar9 = puVar9 + -10;
    } while (iVar17 != 0);
  }
  if (param_2 == 0) goto LAB_01ae5b70;
  if (local_6c < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
  }
  FUN_01ae56b4(param_1 + param_2 * 10,iVar16,param_3,param_4,param_5,&local_50,param_7);
  local_6c = param_2;
  if (param_2 < 0x21) goto LAB_01ae56d8;
  goto LAB_01ae5774;
LAB_01ae5b70:
  if (param_4 < local_6c) goto LAB_01ae60a4;
  uVar10 = 0;
  puVar9 = param_3 + local_6c * 10;
  puVar6 = param_1;
  while( true ) {
    uVar7 = uVar10;
    for (; puVar6 < param_1 + uVar15 * 10; puVar6 = puVar6 + 10) {
      if (*puVar6 == 0 && *puVar3 == 0) {
        cVar2 = (**(code **)(((undefined4 *)**(int **)*param_7)[1] + 0x10))
                          (*(undefined4 *)**(int **)*param_7,puVar3 + 2,puVar6 + 2);
        uVar10 = 0;
        if (cVar2 != -1) {
          uVar10 = 1;
        }
      }
      else {
        uVar10 = *puVar3 ^ 1 | *puVar6;
      }
      puVar9 = puVar9 + -10;
      puVar8 = puVar9;
      if ((uVar10 & 1) != 0) {
        puVar8 = param_3;
      }
      puVar8 = puVar8 + uVar7 * 10;
      uVar5 = puVar6[1];
      uVar11 = puVar6[2];
      uVar12 = puVar6[3];
      uVar13 = puVar6[4];
      *puVar8 = *puVar6;
      puVar8[1] = uVar5;
      puVar8[2] = uVar11;
      puVar8[3] = uVar12;
      puVar8[4] = uVar13;
      uVar5 = puVar6[6];
      uVar11 = puVar6[7];
      uVar12 = puVar6[8];
      uVar13 = puVar6[9];
      puVar8[5] = puVar6[5];
      puVar8[6] = uVar5;
      puVar8[7] = uVar11;
      puVar8[8] = uVar12;
      puVar8[9] = uVar13;
      uVar7 = uVar7 + (uVar10 & 1);
    }
    if (uVar15 == local_6c) break;
    uVar10 = uVar7 + 1;
    puVar9 = puVar9 + -10;
    puVar8 = param_3 + uVar7 * 10;
    uVar15 = puVar6[1];
    uVar7 = puVar6[2];
    uVar5 = puVar6[3];
    uVar11 = puVar6[4];
    *puVar8 = *puVar6;
    puVar8[1] = uVar15;
    puVar8[2] = uVar7;
    puVar8[3] = uVar5;
    puVar8[4] = uVar11;
    uVar15 = puVar6[6];
    uVar7 = puVar6[7];
    uVar5 = puVar6[8];
    uVar11 = puVar6[9];
    puVar8[5] = puVar6[5];
    puVar8[6] = uVar15;
    puVar8[7] = uVar7;
    puVar8[8] = uVar5;
    puVar8[9] = uVar11;
    puVar6 = puVar6 + 10;
    uVar15 = local_6c;
  }
  FUN_01bed4e2(param_1,param_3,uVar7 * 0x28);
  param_2 = local_6c - uVar7;
  if (param_2 == 0) {
    return;
  }
  puVar6 = param_1 + uVar7 * 10;
  uVar15 = param_2;
  puVar9 = param_3 + local_6c * 10 + -10;
  do {
    uVar10 = puVar9[1];
    uVar5 = puVar9[2];
    uVar11 = puVar9[3];
    uVar12 = puVar9[4];
    uVar15 = uVar15 - 1;
    *puVar6 = *puVar9;
    puVar6[1] = uVar10;
    puVar6[2] = uVar5;
    puVar6[3] = uVar11;
    puVar6[4] = uVar12;
    uVar10 = puVar9[6];
    uVar5 = puVar9[7];
    uVar11 = puVar9[8];
    uVar12 = puVar9[9];
    puVar6[5] = puVar9[5];
    puVar6[6] = uVar10;
    puVar6[7] = uVar5;
    puVar6[8] = uVar11;
    puVar6[9] = uVar12;
    puVar6 = puVar6 + 10;
    puVar9 = puVar9 + -10;
  } while (uVar15 != 0);
  if (local_6c < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar7,local_6c,local_6c,&DAT_01d30598);
  }
  param_6 = (int *)0x0;
  param_1 = param_1 + uVar7 * 10;
  local_6c = param_2;
  if (param_2 < 0x21) goto LAB_01ae56d8;
  goto LAB_01ae575c;
}

