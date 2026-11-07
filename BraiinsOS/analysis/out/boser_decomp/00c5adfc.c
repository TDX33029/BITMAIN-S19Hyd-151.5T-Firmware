// FUN_00c5adfc @ 00c5adfc size=1264 calls_out=15 calls_in=1
// strings: 

void FUN_00c5adfc(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int unaff_r4;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *local_1b0;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint uStack_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint local_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x1b)) {
  case 0:
    *(undefined1 *)(param_2 + 0x16) = 0;
    uVar8 = param_2[0x18];
    uVar6 = param_2[0x19];
    param_2[0x14] = uVar6;
    param_2[0x15] = uVar8;
LAB_00c5ae7c:
    *(undefined2 *)((int)param_2 + 0x15) = 0x100;
    bVar10 = 1;
    param_2[3] = uVar6;
    param_2[4] = uVar8;
LAB_00c5ae90:
    *param_2 = 0;
    param_2[1] = 4;
    param_2[2] = 0;
    *(undefined1 *)(param_2 + 5) = 1;
    FUN_00c5b43c(&local_110,param_2,uVar6,uVar8);
    uVar13 = local_110;
    if (local_110 != 2) {
      local_60 = local_10c;
      uStack_5c = local_108;
      uStack_58 = uStack_104;
      local_54 = local_100;
      local_50 = local_fc;
      uStack_4c = local_f8;
      local_48 = uStack_f4;
      uStack_44 = uStack_f0;
      local_40 = local_ec;
      local_3c = local_e8;
      uStack_38 = local_e4;
      uStack_34 = uStack_e0;
      uStack_30 = uStack_dc;
      uStack_2c = uStack_d8;
      goto LAB_00c5af58;
    }
    if ((bVar10 & 1) != 0) {
      *(undefined1 *)(param_2 + 5) = 0;
      FUN_009ec520(&local_110);
      param_2[6] = local_110;
      param_2[7] = local_10c;
      param_2[8] = local_108;
      param_2[9] = uStack_104;
      param_2[10] = local_100;
      param_2[0xb] = local_fc;
      param_2[0xc] = local_f8;
      param_2[0xd] = uStack_f4;
      param_2[0xe] = uStack_f0;
      param_2[0xf] = local_ec;
      param_2[0x10] = local_e8;
      param_2[0x11] = local_e4;
      param_2[0x12] = uStack_e0;
      param_2[0x13] = uStack_dc;
      goto switchD_00c5afd4_caseD_3;
    }
    uVar7 = param_2[2];
    if (0x2492492 < uVar7) {
      uVar6 = 0;
LAB_00c5b03c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar6,unaff_r4);
    }
    unaff_r4 = uVar7 * 0x38;
    if (unaff_r4 == 0) {
      iVar11 = 8;
      uVar7 = 0;
    }
    else {
      uVar6 = 8;
      iVar11 = FUN_01298504(unaff_r4,8);
      if (iVar11 == 0) goto LAB_00c5b03c;
    }
    puVar5 = (undefined4 *)param_2[1];
    param_2[7] = iVar11;
    puVar4 = puVar5 + param_2[2] * 2;
    param_2[6] = uVar7;
    param_2[8] = 0;
    *(undefined1 *)(param_2 + 5) = 0;
    param_2[0xe] = puVar5;
    param_2[0xf] = puVar5;
    param_2[0x10] = *param_2;
    param_2[0x11] = puVar4;
    while (puVar5 != puVar4) {
      uVar6 = *puVar5;
      iVar11 = puVar5[1];
      param_2[0xf] = puVar5 + 2;
      param_2[0xc] = uVar6;
      param_2[9] = param_2 + 6;
      param_2[10] = uVar6;
      param_2[0xb] = iVar11;
      param_2[0xd] = iVar11;
LAB_00c5b24c:
      (**(code **)(iVar11 + 0xc))(&local_110,uVar6,param_3);
      uVar13 = local_10c;
      uVar7 = local_110;
      if (local_110 == 2) {
        uVar1 = 4;
        goto LAB_00c5b374;
      }
      local_d0 = local_108;
      uStack_cc = uStack_104;
      uStack_c8 = local_100;
      uStack_c4 = local_fc;
      local_c0 = local_f8;
      uStack_bc = uStack_f4;
      uStack_b8 = uStack_f0;
      uStack_b4 = local_ec;
      uStack_b0 = local_e8;
      local_ac = local_e4;
      uStack_a8 = uStack_e0;
      uStack_a4 = uStack_dc;
      uStack_a0 = uStack_d8;
      uStack_9c = uStack_d4;
      FUN_00fe4378(param_2[0xc],param_2[0xd]);
      if ((uVar7 & 1) != 0) {
        local_60 = local_d0;
        uStack_5c = uStack_cc;
        uStack_58 = uStack_c8;
        local_54 = uStack_c4;
        local_50 = local_c0;
        uStack_4c = uStack_bc;
        local_48 = uStack_b8;
        uStack_44 = uStack_b4;
        local_40 = uStack_b0;
        local_3c = local_ac;
        uStack_38 = uStack_a8;
        uStack_34 = uStack_a4;
        uStack_30 = uStack_a0;
        uStack_2c = uStack_9c;
        FUN_009495dc(param_2 + 0xe);
        FUN_007bc140(param_2 + 6);
        goto LAB_00c5af58;
      }
      local_98 = local_d0;
      uStack_94 = uStack_cc;
      uStack_90 = uStack_c8;
      uStack_8c = uStack_c4;
      local_88 = local_c0;
      uStack_84 = uStack_bc;
      uStack_80 = uStack_b8;
      uStack_7c = uStack_b4;
      uStack_78 = uStack_b0;
      local_74 = local_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      uStack_64 = uStack_9c;
      puVar2 = (uint *)param_2[9];
      uVar13 = puVar2[2];
      if (uVar13 == *puVar2) {
        FUN_006e4ec8(puVar2);
      }
      puVar3 = (uint *)(puVar2[1] + uVar13 * 0x38);
      *puVar3 = local_d0;
      puVar3[1] = uStack_cc;
      puVar3[2] = uStack_c8;
      puVar3[3] = uStack_c4;
      puVar3[4] = local_c0;
      puVar3[5] = uStack_bc;
      puVar3[6] = uStack_b8;
      puVar3[7] = uStack_b4;
      puVar3[8] = uStack_b0;
      puVar3[9] = local_ac;
      puVar3[10] = uStack_a8;
      puVar3[0xb] = uStack_a4;
      puVar3[0xc] = uStack_a0;
      puVar3[0xd] = uStack_9c;
      puVar2[2] = uVar13 + 1;
      puVar4 = (undefined4 *)param_2[0x11];
      puVar5 = (undefined4 *)param_2[0xf];
    }
    param_2[10] = 0;
    FUN_009495dc(param_2 + 0xe);
    local_120 = param_2[6];
    uStack_11c = param_2[7];
    uStack_118 = param_2[8];
LAB_00c5b33c:
    FUN_006cac18(&local_110,&local_120);
    local_60 = local_110;
    uStack_5c = local_10c;
    uStack_58 = local_108;
    local_54 = uStack_104;
    local_50 = local_100;
    uStack_4c = local_fc;
    local_48 = local_f8;
    uStack_44 = uStack_f4;
    local_40 = uStack_f0;
    local_3c = local_ec;
    uStack_38 = local_e8;
    uStack_34 = local_e4;
    iVar11 = 0;
    *(undefined1 *)(param_2 + 5) = 0;
LAB_00c5af78:
    local_1b0 = param_2 + 0x16;
    *param_1 = iVar11;
    param_1[1] = uVar13;
    param_1[2] = local_60;
    param_1[3] = uStack_5c;
    param_1[4] = uStack_58;
    param_1[5] = local_54;
    param_1[6] = local_50;
    param_1[7] = uStack_4c;
    param_1[8] = local_48;
    param_1[9] = uStack_44;
    param_1[10] = local_40;
    param_1[0xb] = local_3c;
    param_1[0xc] = uStack_38;
    param_1[0xd] = uStack_34;
    param_1[0xe] = uStack_30;
    param_1[0xf] = uStack_2c;
    uVar1 = 1;
    *(undefined1 *)((int)param_2 + 0x15) = 1;
    FUN_00c423b8(param_2);
    iVar11 = *param_1;
    *(undefined1 *)local_1b0 = 1;
    if (iVar11 != 2) goto LAB_00c5b394;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(0x1c20e44);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(0x1c20e44);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x16)) {
    case 0:
      uVar6 = param_2[0x14];
      uVar8 = param_2[0x15];
      goto LAB_00c5ae7c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x15)) {
    case 0:
      uVar6 = param_2[3];
      uVar8 = param_2[4];
      bVar10 = *(byte *)((int)param_2 + 0x16);
      goto LAB_00c5ae90;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      uVar6 = param_2[0xc];
      iVar11 = param_2[0xd];
      goto LAB_00c5b24c;
    }
switchD_00c5afd4_caseD_3:
    FUN_009ecbe0(&local_110,param_2 + 6,param_3);
    uStack_38 = local_e4;
    local_3c = local_e8;
    local_40 = local_ec;
    uStack_44 = uStack_f0;
    local_48 = uStack_f4;
    uStack_4c = local_f8;
    local_50 = local_fc;
    local_54 = local_100;
    uVar13 = local_110;
    if (local_110 != 3) {
      puVar2 = (uint *)((uint)&local_110 | 4);
      uVar7 = *puVar2;
      uVar9 = puVar2[1];
      uVar12 = puVar2[2];
      FUN_00c4274c(param_2 + 6);
      if (uVar13 == 2) {
        local_120 = uVar7;
        uStack_11c = uVar9;
        uStack_118 = uVar12;
        goto LAB_00c5b33c;
      }
      uStack_34 = uStack_e0;
      uStack_30 = uStack_dc;
      uStack_2c = uStack_d8;
      local_60 = uVar7;
      uStack_5c = uVar9;
      uStack_58 = uVar12;
LAB_00c5af58:
      if (*(char *)(param_2 + 5) != '\0') {
        FUN_00b7d620(param_2);
      }
      iVar11 = 1;
      *(undefined1 *)(param_2 + 5) = 0;
      goto LAB_00c5af78;
    }
    uVar1 = 3;
LAB_00c5b374:
    local_1b0 = param_2 + 0x16;
    *(undefined1 *)((int)param_2 + 0x15) = uVar1;
    *(undefined1 *)local_1b0 = 3;
  }
  uVar1 = 3;
  *param_1 = 2;
LAB_00c5b394:
  *(undefined1 *)(param_2 + 0x1b) = uVar1;
  return;
}

