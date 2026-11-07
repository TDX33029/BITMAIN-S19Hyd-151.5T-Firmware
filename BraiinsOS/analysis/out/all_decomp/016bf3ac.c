// FUN_016bf3ac @ 016bf3ac size=3632 calls_out=8 calls_in=2
// strings: 

void FUN_016bf3ac(uint *param_1,uint param_2,uint *param_3,uint param_4,int param_5,int *param_6,
                 undefined4 *param_7)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  int local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  uint local_6c;
  uint local_5c;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (0x20 < param_2) {
    local_78 = (uint *)param_5;
    local_6c = param_2;
LAB_016bf44c:
LAB_016bf468:
    if (local_78 == (uint *)0x0) {
      FUN_016c2fe4(param_1,local_6c,param_3,param_4,1,param_7);
      return;
    }
    uVar22 = local_6c >> 3;
    puVar6 = param_1 + uVar22 * 0x46;
    puVar16 = param_1 + uVar22 * 0x28;
    if (local_6c < 0x40) {
      puVar12 = (undefined4 *)*param_7;
      uVar22 = *puVar16;
      puVar17 = param_1;
      if (*param_1 == 0) {
        piVar4 = (int *)*puVar12;
        if (uVar22 == 0) {
          cVar2 = (**(code **)(((undefined4 *)*piVar4)[1] + 0x10))
                            (*(undefined4 *)*piVar4,param_1 + 2,puVar16 + 2);
          if (*puVar6 == 0) {
            piVar4 = (int *)*puVar12;
            uVar3 = (uint)(cVar2 == -1);
            goto LAB_016bf564;
          }
          uVar3 = 0;
          uVar22 = 0;
          if (cVar2 == -1) goto LAB_016bf5f0;
          goto LAB_016bf5e4;
        }
        uVar3 = 0;
        uVar8 = 1;
        if (*puVar6 != 0) goto LAB_016bf5a4;
LAB_016bf564:
        cVar2 = (**(code **)(((undefined4 *)*piVar4)[1] + 0x10))
                          (*(undefined4 *)*piVar4,param_1 + 2,puVar6 + 2);
        uVar8 = 0;
        if (uVar3 == (cVar2 == -1)) goto LAB_016bf59c;
      }
      else {
        uVar8 = *puVar6;
        uVar3 = uVar22 ^ 1;
        if (uVar3 == (uVar8 ^ 1)) {
LAB_016bf59c:
          if (uVar22 == 0) {
            uVar22 = 0;
            if (uVar8 == 0) {
              cVar2 = (**(code **)((*(undefined4 **)*puVar12)[1] + 0x10))
                                (**(undefined4 **)*puVar12,puVar16 + 2,puVar6 + 2);
              uVar22 = (uint)(cVar2 == -1);
            }
          }
          else {
LAB_016bf5a4:
            uVar22 = uVar8 ^ 1;
          }
LAB_016bf5e4:
          if (uVar3 != uVar22) {
            puVar16 = puVar6;
          }
          puVar17 = puVar16;
        }
      }
    }
    else {
      puVar17 = (uint *)FUN_016c221c(param_1,puVar16,puVar6,uVar22,param_7);
    }
LAB_016bf5f0:
    local_78 = (uint *)((int)local_78 + -1);
    uVar22 = ((uint)((int)puVar17 - (int)param_1) >> 3) * -0x33333333;
    local_50 = *puVar17;
    uStack_4c = puVar17[1];
    uStack_48 = puVar17[2];
    uStack_44 = puVar17[3];
    uStack_40 = puVar17[4];
    local_3c = puVar17[5];
    uStack_38 = puVar17[6];
    uStack_34 = puVar17[7];
    uStack_30 = puVar17[8];
    uStack_2c = puVar17[9];
    puVar12 = (undefined4 *)*param_7;
    if (param_6 != (int *)0x0) {
      if (*param_6 == 0) {
        if ((*puVar17 != 0) ||
           (cVar2 = (**(code **)((*(undefined4 **)*puVar12)[1] + 0x10))
                              (**(undefined4 **)*puVar12,param_6 + 2,puVar17 + 2), cVar2 != -1))
        goto LAB_016bf88c;
        puVar12 = (undefined4 *)*param_7;
      }
      else if (*puVar17 != 0) goto LAB_016bf88c;
    }
    if (local_6c <= param_4) {
      param_2 = 0;
      puVar6 = param_3 + local_6c * 10;
      uVar3 = uVar22;
      puVar16 = param_1;
      do {
        for (puVar18 = puVar16; puVar18 < param_1 + uVar3 * 10; puVar18 = puVar18 + 10) {
          uVar8 = *puVar17;
          puVar6 = puVar6 + -10;
          puVar16 = puVar6;
          if (*puVar18 == 0) {
            if (uVar8 == 0) {
              uVar8 = (**(code **)((*(undefined4 **)*puVar12)[1] + 0x10))
                                (**(undefined4 **)*puVar12,puVar18 + 2,puVar17 + 2);
              uVar8 = ~uVar8 & 0xff;
              goto LAB_016bf708;
            }
            uVar7 = 0;
          }
          else {
LAB_016bf708:
            uVar7 = (uint)(uVar8 == 0);
            if (uVar8 == 0) {
              puVar16 = param_3;
            }
          }
          puVar16 = puVar16 + param_2 * 10;
          uVar8 = puVar18[1];
          uVar9 = puVar18[2];
          uVar10 = puVar18[3];
          uVar13 = puVar18[4];
          *puVar16 = *puVar18;
          puVar16[1] = uVar8;
          puVar16[2] = uVar9;
          puVar16[3] = uVar10;
          puVar16[4] = uVar13;
          uVar8 = puVar18[6];
          uVar9 = puVar18[7];
          uVar10 = puVar18[8];
          uVar13 = puVar18[9];
          puVar16[5] = puVar18[5];
          puVar16[6] = uVar8;
          puVar16[7] = uVar9;
          puVar16[8] = uVar10;
          puVar16[9] = uVar13;
          param_2 = uVar7 + param_2;
        }
        if (uVar3 == local_6c) goto LAB_016bf7d8;
        puVar6 = puVar6 + -10;
        uVar3 = puVar18[1];
        uVar8 = puVar18[2];
        uVar7 = puVar18[3];
        uVar9 = puVar18[4];
        puVar15 = puVar6 + param_2 * 10;
        puVar16 = puVar18 + 10;
        *puVar15 = *puVar18;
        puVar15[1] = uVar3;
        puVar15[2] = uVar8;
        puVar15[3] = uVar7;
        puVar15[4] = uVar9;
        uVar3 = puVar18[6];
        uVar8 = puVar18[7];
        uVar7 = puVar18[8];
        uVar9 = puVar18[9];
        puVar15[5] = puVar18[5];
        puVar15[6] = uVar3;
        puVar15[7] = uVar8;
        puVar15[8] = uVar7;
        puVar15[9] = uVar9;
        uVar3 = local_6c;
      } while( true );
    }
    goto LAB_016c01c4;
  }
LAB_016bf3d0:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar22 = param_2 >> 1;
    param_7 = (undefined4 *)*param_7;
    if (param_2 < 8) {
      uVar3 = param_1[1];
      uVar8 = param_1[2];
      uVar7 = param_1[3];
      uVar9 = param_1[4];
      *param_3 = *param_1;
      param_3[1] = uVar3;
      param_3[2] = uVar8;
      param_3[3] = uVar7;
      param_3[4] = uVar9;
      uVar3 = param_1[6];
      uVar8 = param_1[7];
      uVar7 = param_1[8];
      uVar9 = param_1[9];
      param_3[5] = param_1[5];
      param_3[6] = uVar3;
      param_3[7] = uVar8;
      param_3[8] = uVar7;
      param_3[9] = uVar9;
      puVar6 = param_1 + uVar22 * 10;
      puVar16 = param_3 + uVar22 * 10;
      uVar3 = puVar6[1];
      uVar8 = puVar6[2];
      uVar7 = puVar6[3];
      uVar9 = puVar6[4];
      *puVar16 = *puVar6;
      puVar16[1] = uVar3;
      puVar16[2] = uVar8;
      puVar16[3] = uVar7;
      puVar16[4] = uVar9;
      uVar8 = puVar6[6];
      uVar7 = puVar6[7];
      uVar9 = puVar6[8];
      uVar10 = puVar6[9];
      uVar3 = 1;
      puVar16[5] = puVar6[5];
      puVar16[6] = uVar8;
      puVar16[7] = uVar7;
      puVar16[8] = uVar9;
      puVar16[9] = uVar10;
    }
    else {
      FUN_016c023c(param_1,param_3,param_7);
      FUN_016c023c(param_1 + uVar22 * 10,param_3 + uVar22 * 10,param_7);
      uVar3 = 4;
    }
    if (uVar3 < uVar22) {
      local_5c = uVar3 * 0x28 + -0x50;
      local_70 = (uint *)(uVar3 * 0x28 + -0x48);
      local_6c = uVar3 * 0x28 + -0x28;
      uVar8 = uVar3;
      do {
        puVar16 = param_1 + uVar8 * 10;
        puVar6 = param_3 + uVar8 * 10;
        uVar7 = puVar16[1];
        uVar9 = puVar16[2];
        uVar10 = puVar16[3];
        uVar13 = puVar16[4];
        *puVar6 = *puVar16;
        puVar6[1] = uVar7;
        puVar6[2] = uVar9;
        puVar6[3] = uVar10;
        puVar6[4] = uVar13;
        uVar7 = puVar16[6];
        uVar9 = puVar16[7];
        uVar10 = puVar16[8];
        uVar13 = puVar16[9];
        puVar6[5] = puVar16[5];
        puVar6[6] = uVar7;
        puVar6[7] = uVar9;
        puVar6[8] = uVar10;
        puVar6[9] = uVar13;
        puVar16 = puVar6 + -10;
        if (param_3[uVar8 * 10] == 0) {
          if (((*puVar16 & 1) == 0) &&
             (cVar2 = (**(code **)((*(undefined4 **)*param_7)[1] + 0x10))
                                (**(undefined4 **)*param_7,puVar6 + 2,puVar6 + -8), cVar2 == -1))
          goto LAB_016bfba8;
        }
        else if ((*puVar16 & 1) == 0) {
LAB_016bfba8:
          local_50 = *puVar6;
          uStack_4c = puVar6[1];
          uStack_48 = puVar6[2];
          uStack_44 = puVar6[3];
          uStack_40 = puVar6[4];
          local_3c = puVar6[5];
          uStack_38 = puVar6[6];
          uStack_34 = puVar6[7];
          uStack_30 = puVar6[8];
          uStack_2c = puVar6[9];
          *puVar6 = *puVar16;
          puVar6[1] = puVar6[-9];
          puVar6[2] = puVar6[-8];
          puVar6[3] = puVar6[-7];
          puVar6[4] = puVar6[-6];
          puVar6[5] = puVar6[-5];
          puVar6[6] = puVar6[-4];
          puVar6[7] = puVar6[-3];
          puVar6[8] = puVar6[-2];
          puVar6[9] = puVar6[-1];
          if (uVar8 != 1) {
            uVar7 = local_6c;
            uVar9 = local_5c;
            puVar6 = local_70;
            if (local_50 == 0) {
              do {
                puVar17 = (uint *)((int)param_3 + uVar9);
                puVar18 = (uint *)((int)param_3 + uVar7);
                if (local_50 == 0) {
                  if (((*puVar17 & 1) != 0) ||
                     (cVar2 = (**(code **)((*(undefined4 **)*param_7)[1] + 0x10))
                                        (**(undefined4 **)*param_7,&uStack_48,
                                         (int)param_3 + (int)puVar6), cVar2 != -1)) {
                    goto LAB_016bfae0;
                  }
                }
                else if ((*puVar17 & 1) != 0) {
                  puVar16 = (uint *)((int)param_3 + uVar7);
                  goto LAB_016bfae0;
                }
                uVar10 = puVar17[1];
                uVar13 = puVar17[2];
                uVar11 = puVar17[3];
                uVar14 = puVar17[4];
                puVar16 = puVar16 + -10;
                uVar9 = uVar9 + -0x28;
                puVar6 = (uint *)((int)puVar6 + -0x28);
                *puVar18 = *puVar17;
                puVar18[1] = uVar10;
                puVar18[2] = uVar13;
                puVar18[3] = uVar11;
                puVar18[4] = uVar14;
                uVar7 = uVar7 + -0x28;
                uVar10 = puVar17[6];
                uVar13 = puVar17[7];
                uVar11 = puVar17[8];
                uVar14 = puVar17[9];
                puVar18[5] = puVar17[5];
                puVar18[6] = uVar10;
                puVar18[7] = uVar13;
                puVar18[8] = uVar11;
                puVar18[9] = uVar14;
              } while (uVar7 != 0);
              puVar16 = param_3;
            }
            else {
              do {
                puVar16 = (uint *)((int)param_3 + uVar7);
                puVar6 = (uint *)((int)param_3 + uVar9);
                if (*puVar6 != 0) goto LAB_016bfae0;
                uVar10 = puVar6[1];
                uVar13 = puVar6[2];
                uVar11 = puVar6[3];
                uVar14 = puVar6[4];
                uVar9 = uVar9 + -0x28;
                uVar7 = uVar7 + -0x28;
                *puVar16 = *puVar6;
                puVar16[1] = uVar10;
                puVar16[2] = uVar13;
                puVar16[3] = uVar11;
                puVar16[4] = uVar14;
                uVar10 = puVar6[6];
                uVar13 = puVar6[7];
                uVar11 = puVar6[8];
                uVar14 = puVar6[9];
                puVar16[5] = puVar6[5];
                puVar16[6] = uVar10;
                puVar16[7] = uVar13;
                puVar16[8] = uVar11;
                puVar16[9] = uVar14;
              } while (uVar7 != 0);
              puVar16 = param_3;
            }
          }
LAB_016bfae0:
          *puVar16 = local_50;
          puVar16[1] = uStack_4c;
          puVar16[2] = uStack_48;
          puVar16[3] = uStack_44;
          puVar16[4] = uStack_40;
          puVar16[5] = local_3c;
          puVar16[6] = uStack_38;
          puVar16[7] = uStack_34;
          puVar16[8] = uStack_30;
          puVar16[9] = uStack_2c;
        }
        uVar8 = uVar8 + 1;
        local_5c = local_5c + 0x28;
        local_70 = (uint *)((int)local_70 + 0x28);
        local_6c = local_6c + 0x28;
      } while (uVar8 != uVar22);
    }
    puVar16 = param_3 + uVar22 * 10;
    if (uVar3 < param_2 - uVar22) {
      local_70 = param_3 + uVar22 * 10 + -0x14;
      local_74 = param_3 + uVar22 * 10 + -0x12;
      local_78 = param_3 + uVar22 * 10 + -10;
      local_7c = 0x28;
      uVar8 = uVar3;
      do {
        puVar6 = param_1 + uVar22 * 10 + uVar8 * 10;
        puVar17 = puVar16 + uVar8 * 10;
        uVar7 = puVar6[1];
        uVar9 = puVar6[2];
        uVar10 = puVar6[3];
        uVar13 = puVar6[4];
        *puVar17 = *puVar6;
        puVar17[1] = uVar7;
        puVar17[2] = uVar9;
        puVar17[3] = uVar10;
        puVar17[4] = uVar13;
        uVar7 = puVar6[6];
        uVar9 = puVar6[7];
        uVar10 = puVar6[8];
        uVar13 = puVar6[9];
        puVar17[5] = puVar6[5];
        puVar17[6] = uVar7;
        puVar17[7] = uVar9;
        puVar17[8] = uVar10;
        puVar17[9] = uVar13;
        puVar6 = puVar17 + -10;
        if (puVar16[uVar8 * 10] == 0) {
          if (((*puVar6 & 1) == 0) &&
             (cVar2 = (**(code **)((*(undefined4 **)*param_7)[1] + 0x10))
                                (**(undefined4 **)*param_7,puVar17 + 2,puVar17 + -8), cVar2 == -1))
          goto LAB_016bfe2c;
        }
        else if ((*puVar6 & 1) == 0) {
LAB_016bfe2c:
          local_50 = *puVar17;
          uStack_4c = puVar17[1];
          uStack_48 = puVar17[2];
          uStack_44 = puVar17[3];
          uStack_40 = puVar17[4];
          local_3c = puVar17[5];
          uStack_38 = puVar17[6];
          uStack_34 = puVar17[7];
          uStack_30 = puVar17[8];
          uStack_2c = puVar17[9];
          *puVar17 = *puVar6;
          puVar17[1] = puVar17[-9];
          puVar17[2] = puVar17[-8];
          puVar17[3] = puVar17[-7];
          puVar17[4] = puVar17[-6];
          puVar17[5] = puVar17[-5];
          puVar17[6] = puVar17[-4];
          puVar17[7] = puVar17[-3];
          puVar17[8] = puVar17[-2];
          puVar17[9] = puVar17[-1];
          if (uVar8 != 1) {
            puVar17 = local_78;
            puVar18 = local_70;
            puVar15 = local_74;
            iVar21 = local_7c;
            if (local_50 == 0) {
              do {
                puVar19 = puVar17 + uVar3 * 10;
                puVar5 = puVar18 + uVar3 * 10;
                if (local_50 == 0) {
                  if (((*puVar5 & 1) != 0) ||
                     (cVar2 = (**(code **)((*(undefined4 **)*param_7)[1] + 0x10))
                                        (**(undefined4 **)*param_7,&uStack_48,puVar15 + uVar3 * 10),
                     cVar2 != -1)) goto LAB_016bfd48;
                }
                else if ((*puVar5 & 1) != 0) {
                  puVar6 = puVar17 + uVar3 * 10;
                  goto LAB_016bfd48;
                }
                uVar7 = puVar5[1];
                uVar9 = puVar5[2];
                uVar10 = puVar5[3];
                uVar13 = puVar5[4];
                puVar6 = puVar6 + -10;
                puVar17 = puVar17 + -10;
                iVar21 = iVar21 + 0x28;
                *puVar19 = *puVar5;
                puVar19[1] = uVar7;
                puVar19[2] = uVar9;
                puVar19[3] = uVar10;
                puVar19[4] = uVar13;
                uVar7 = puVar5[6];
                uVar9 = puVar5[7];
                uVar10 = puVar5[8];
                uVar13 = puVar5[9];
                puVar19[5] = puVar5[5];
                puVar19[6] = uVar7;
                puVar19[7] = uVar9;
                puVar19[8] = uVar10;
                puVar19[9] = uVar13;
                puVar15 = puVar15 + -10;
                puVar18 = puVar18 + -10;
              } while (uVar3 * 0x28 != iVar21);
            }
            else {
              do {
                puVar6 = puVar17 + uVar3 * 10;
                puVar15 = puVar18 + uVar3 * 10;
                if (*puVar15 != 0) goto LAB_016bfd48;
                uVar7 = puVar15[1];
                uVar9 = puVar15[2];
                uVar10 = puVar15[3];
                uVar13 = puVar15[4];
                iVar21 = iVar21 + 0x28;
                puVar18 = puVar18 + -10;
                *puVar6 = *puVar15;
                puVar6[1] = uVar7;
                puVar6[2] = uVar9;
                puVar6[3] = uVar10;
                puVar6[4] = uVar13;
                puVar17 = puVar17 + -10;
                uVar7 = puVar15[6];
                uVar9 = puVar15[7];
                uVar10 = puVar15[8];
                uVar13 = puVar15[9];
                puVar6[5] = puVar15[5];
                puVar6[6] = uVar7;
                puVar6[7] = uVar9;
                puVar6[8] = uVar10;
                puVar6[9] = uVar13;
              } while (uVar3 * 0x28 != iVar21);
            }
            puVar6 = puVar16;
          }
LAB_016bfd48:
          *puVar6 = local_50;
          puVar6[1] = uStack_4c;
          puVar6[2] = uStack_48;
          puVar6[3] = uStack_44;
          puVar6[4] = uStack_40;
          puVar6[5] = local_3c;
          puVar6[6] = uStack_38;
          puVar6[7] = uStack_34;
          puVar6[8] = uStack_30;
          puVar6[9] = uStack_2c;
        }
        local_70 = local_70 + 10;
        uVar8 = uVar8 + 1;
        local_7c = local_7c + -0x28;
        local_74 = local_74 + 10;
        local_78 = local_78 + 10;
      } while (uVar8 != param_2 - uVar22);
    }
    puVar17 = puVar16 + -10;
    puVar6 = param_3 + param_2 * 10;
    iVar21 = 0;
    do {
      puVar15 = puVar6 + -10;
      puVar18 = param_3;
      if (*puVar16 == 0) {
        local_5c = 0;
        if ((*param_3 == 0) &&
           (cVar2 = (**(code **)((*(undefined4 **)*param_7)[1] + 0x10))
                              (**(undefined4 **)*param_7,puVar16 + 2,param_3 + 2), cVar2 == -1))
        goto LAB_016c00a4;
      }
      else {
        local_5c = 0;
        if (*param_3 == 0) {
LAB_016c00a4:
          local_5c = 1;
          puVar18 = puVar16;
        }
      }
      uVar3 = puVar18[1];
      uVar8 = puVar18[2];
      uVar7 = puVar18[3];
      uVar9 = puVar18[4];
      puVar5 = (uint *)((int)param_1 + iVar21);
      uVar10 = 0;
      *puVar5 = *puVar18;
      puVar5[1] = uVar3;
      puVar5[2] = uVar8;
      puVar5[3] = uVar7;
      puVar5[4] = uVar9;
      uVar3 = puVar18[6];
      uVar8 = puVar18[7];
      uVar7 = puVar18[8];
      uVar9 = puVar18[9];
      puVar5[5] = puVar18[5];
      puVar5[6] = uVar3;
      puVar5[7] = uVar8;
      puVar5[8] = uVar7;
      puVar5[9] = uVar9;
      uVar3 = *puVar17;
      puVar18 = puVar15;
      if (*puVar15 == 0) {
        if (uVar3 == 0) {
          uVar3 = (**(code **)((*(undefined4 **)*param_7)[1] + 0x10))
                            (**(undefined4 **)*param_7,puVar6 + -8,puVar17 + 2);
          uVar3 = ~uVar3 & 0xff;
          goto LAB_016c0124;
        }
      }
      else {
LAB_016c0124:
        uVar10 = (uint)(uVar3 == 0);
        if (uVar3 == 0) {
          puVar18 = puVar17;
        }
      }
      puVar16 = puVar16 + (local_5c | local_5c << 2) * 2;
      puVar6 = (uint *)((int)param_1 + ((param_2 * 0x28 + -0x28) - iVar21));
      iVar21 = iVar21 + 0x28;
      param_3 = param_3 + (local_5c ^ 1 | (local_5c ^ 1) << 2) * 2;
      uVar3 = puVar18[1];
      uVar8 = puVar18[2];
      uVar7 = puVar18[3];
      uVar9 = puVar18[4];
      *puVar6 = *puVar18;
      puVar6[1] = uVar3;
      puVar6[2] = uVar8;
      puVar6[3] = uVar7;
      puVar6[4] = uVar9;
      uVar3 = puVar18[6];
      uVar8 = puVar18[7];
      uVar7 = puVar18[8];
      uVar9 = puVar18[9];
      puVar6[5] = puVar18[5];
      puVar6[6] = uVar3;
      puVar6[7] = uVar8;
      puVar6[8] = uVar7;
      puVar6[9] = uVar9;
      puVar17 = puVar17 + uVar10 * -10;
      puVar6 = puVar15 + uVar10 * 10;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
    puVar17 = puVar17 + 10;
    if ((param_2 & 1) != 0) {
      bVar23 = puVar17 <= param_3;
      puVar18 = puVar16;
      if (!bVar23) {
        puVar18 = param_3;
      }
      uVar22 = puVar18[1];
      uVar3 = puVar18[2];
      uVar8 = puVar18[3];
      uVar7 = puVar18[4];
      param_1 = (uint *)((int)param_1 + iVar21);
      *param_1 = *puVar18;
      param_1[1] = uVar22;
      param_1[2] = uVar3;
      param_1[3] = uVar8;
      param_1[4] = uVar7;
      uVar22 = puVar18[6];
      uVar3 = puVar18[7];
      uVar8 = puVar18[8];
      uVar7 = puVar18[9];
      param_1[5] = puVar18[5];
      param_1[6] = uVar22;
      param_1[7] = uVar3;
      param_1[8] = uVar8;
      param_1[9] = uVar7;
      puVar16 = puVar16 + ((uint)bVar23 | (uint)bVar23 << 2) * 2;
      param_3 = param_3 + ((uint)!bVar23 | (uint)!bVar23 << 2) * 2;
    }
    puVar18 = puVar17;
    if (param_3 == puVar17) {
      puVar18 = puVar6;
    }
    if (param_3 == puVar17 && puVar16 == puVar18) {
      return;
    }
    FUN_00fb7254();
  }
LAB_016c01c4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x16c01c4);
  (*pcVar1)();
LAB_016bf7d8:
  FUN_016dd1aa(param_1,param_3,param_2 * 0x28);
  iVar21 = local_6c - param_2;
  if (iVar21 != 0) {
    puVar16 = param_1 + param_2 * 10;
    iVar20 = iVar21;
    puVar6 = param_3 + local_6c * 10 + -10;
    do {
      uVar3 = puVar6[1];
      uVar8 = puVar6[2];
      uVar7 = puVar6[3];
      uVar9 = puVar6[4];
      iVar20 = iVar20 + -1;
      *puVar16 = *puVar6;
      puVar16[1] = uVar3;
      puVar16[2] = uVar8;
      puVar16[3] = uVar7;
      puVar16[4] = uVar9;
      uVar3 = puVar6[6];
      uVar8 = puVar6[7];
      uVar7 = puVar6[8];
      uVar9 = puVar6[9];
      puVar16[5] = puVar6[5];
      puVar16[6] = uVar3;
      puVar16[7] = uVar8;
      puVar16[8] = uVar7;
      puVar16[9] = uVar9;
      puVar16 = puVar16 + 10;
      puVar6 = puVar6 + -10;
    } while (iVar20 != 0);
  }
  if (param_2 == 0) goto LAB_016bf88c;
  if (local_6c < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018af338);
  }
  FUN_016bf3ac(param_1 + param_2 * 10,iVar21,param_3,param_4,local_78,&local_50,param_7);
  local_6c = param_2;
  if (param_2 < 0x21) goto LAB_016bf3d0;
  goto LAB_016bf468;
LAB_016bf88c:
  if (param_4 < local_6c) goto LAB_016c01c4;
  puVar6 = param_3 + local_6c * 10;
  uVar3 = 0;
  puVar16 = param_1;
  while( true ) {
    uVar8 = uVar3;
    for (; puVar16 < param_1 + uVar22 * 10; puVar16 = puVar16 + 10) {
      if (*puVar16 == 0 && *puVar17 == 0) {
        cVar2 = (**(code **)(((undefined4 *)**(int **)*param_7)[1] + 0x10))
                          (*(undefined4 *)**(int **)*param_7,puVar17 + 2,puVar16 + 2);
        uVar3 = 0;
        if (cVar2 != -1) {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = *puVar17 ^ 1 | *puVar16;
      }
      puVar6 = puVar6 + -10;
      puVar18 = puVar6;
      if ((uVar3 & 1) != 0) {
        puVar18 = param_3;
      }
      puVar18 = puVar18 + uVar8 * 10;
      uVar7 = puVar16[1];
      uVar9 = puVar16[2];
      uVar10 = puVar16[3];
      uVar13 = puVar16[4];
      *puVar18 = *puVar16;
      puVar18[1] = uVar7;
      puVar18[2] = uVar9;
      puVar18[3] = uVar10;
      puVar18[4] = uVar13;
      uVar7 = puVar16[6];
      uVar9 = puVar16[7];
      uVar10 = puVar16[8];
      uVar13 = puVar16[9];
      puVar18[5] = puVar16[5];
      puVar18[6] = uVar7;
      puVar18[7] = uVar9;
      puVar18[8] = uVar10;
      puVar18[9] = uVar13;
      uVar8 = uVar8 + (uVar3 & 1);
    }
    if (uVar22 == local_6c) break;
    uVar3 = uVar8 + 1;
    puVar6 = puVar6 + -10;
    puVar18 = param_3 + uVar8 * 10;
    uVar22 = puVar16[1];
    uVar8 = puVar16[2];
    uVar7 = puVar16[3];
    uVar9 = puVar16[4];
    *puVar18 = *puVar16;
    puVar18[1] = uVar22;
    puVar18[2] = uVar8;
    puVar18[3] = uVar7;
    puVar18[4] = uVar9;
    uVar22 = puVar16[6];
    uVar8 = puVar16[7];
    uVar7 = puVar16[8];
    uVar9 = puVar16[9];
    puVar18[5] = puVar16[5];
    puVar18[6] = uVar22;
    puVar18[7] = uVar8;
    puVar18[8] = uVar7;
    puVar18[9] = uVar9;
    puVar16 = puVar16 + 10;
    uVar22 = local_6c;
  }
  FUN_016dd1aa(param_1,param_3,uVar8 * 0x28);
  param_2 = local_6c - uVar8;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar8 * 10;
  puVar16 = param_1;
  uVar22 = param_2;
  puVar6 = param_3 + local_6c * 10 + -10;
  do {
    uVar3 = puVar6[1];
    uVar7 = puVar6[2];
    uVar9 = puVar6[3];
    uVar10 = puVar6[4];
    uVar22 = uVar22 - 1;
    *puVar16 = *puVar6;
    puVar16[1] = uVar3;
    puVar16[2] = uVar7;
    puVar16[3] = uVar9;
    puVar16[4] = uVar10;
    uVar3 = puVar6[6];
    uVar7 = puVar6[7];
    uVar9 = puVar6[8];
    uVar10 = puVar6[9];
    puVar16[5] = puVar6[5];
    puVar16[6] = uVar3;
    puVar16[7] = uVar7;
    puVar16[8] = uVar9;
    puVar16[9] = uVar10;
    puVar16 = puVar16 + 10;
    puVar6 = puVar6 + -10;
  } while (uVar22 != 0);
  if (local_6c < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar8,local_6c,local_6c,&DAT_018af348);
  }
  param_6 = (int *)0x0;
  local_6c = param_2;
  if (param_2 < 0x21) goto LAB_016bf3d0;
  goto LAB_016bf44c;
}

