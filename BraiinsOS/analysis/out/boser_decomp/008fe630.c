// FUN_008fe630 @ 008fe630 size=1932 calls_out=20 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_008fe630(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int *piVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  undefined8 uVar29;
  undefined4 *local_1fc;
  undefined4 *local_1f8;
  undefined4 *local_1f4;
  undefined1 *local_1f0;
  undefined4 *local_1ec;
  undefined4 *local_1e4;
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
  uint local_f0;
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
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint local_5c;
  uint uStack_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  param_2 = (undefined4 *)*param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x2b)) {
  case 0:
    *(undefined1 *)(param_2 + 0x27) = 0;
    uVar13 = param_2[0x29];
    puVar20 = (undefined4 *)param_2[0x28];
    uVar18 = param_2[0x2a];
    param_2[0x24] = puVar20;
    param_2[0x26] = uVar18;
    param_2[0x25] = uVar13;
LAB_008fe6bc:
    piVar21 = (int *)*puVar20;
    *param_2 = piVar21;
    *(undefined1 *)(param_2 + 7) = 0;
    param_2[1] = uVar13;
    param_2[2] = uVar18;
LAB_008fe6d8:
    param_2[3] = uVar13;
    param_2[4] = uVar18;
    iVar14 = *piVar21;
    *(undefined1 *)(param_2 + 0x13) = 0;
    param_2[8] = iVar14 + 8;
switchD_008fe980_caseD_3:
    uVar29 = FUN_01a1a4a4(param_2 + 8,param_3);
    uVar13 = (undefined4)((ulonglong)uVar29 >> 0x20);
    if ((int)uVar29 != 0) {
      cVar1 = *(char *)(param_2 + 0x13);
      *(undefined8 *)(param_2 + 5) = uVar29;
      bVar28 = cVar1 == '\x03';
      if (bVar28) {
        cVar1 = *(char *)(param_2 + 0x12);
      }
      if (bVar28 && cVar1 == '\x03') {
        FUN_0193c3cc(param_2 + 10);
        uVar13 = param_2[6];
      }
      *(undefined1 *)(param_2 + 0x23) = 0;
      uVar18 = param_2[3];
      param_2[0x20] = uVar13;
      param_2[0x21] = uVar18;
      param_2[0x22] = param_2[4];
LAB_008fe74c:
      *(undefined1 *)(param_2 + 0x1e) = 0;
      param_2[0x1c] = uVar18;
      param_2[0x1d] = uVar13;
LAB_008fe760:
      *(undefined2 *)((int)param_2 + 0x35) = 0x100;
      bVar25 = 1;
      param_2[0xb] = uVar18;
      param_2[0xc] = uVar13;
LAB_008fe778:
      param_2[8] = 0;
      param_2[10] = 0;
      param_2[9] = 4;
      *(undefined1 *)(param_2 + 0xd) = 1;
      FUN_0083a2ec(&local_110,param_2 + 8,uVar18,uVar13);
      if (local_110 == 2) {
        if ((bVar25 & 1) != 0) {
          *(undefined1 *)(param_2 + 0xd) = 0;
          FUN_009ec520(&local_110);
          param_2[0xe] = local_110;
          param_2[0xf] = local_10c;
          param_2[0x10] = local_108;
          param_2[0x11] = uStack_104;
          param_2[0x12] = local_100;
          param_2[0x13] = local_fc;
          param_2[0x14] = local_f8;
          param_2[0x15] = uStack_f4;
          param_2[0x16] = local_f0;
          param_2[0x17] = local_ec;
          param_2[0x18] = local_e8;
          param_2[0x19] = local_e4;
          param_2[0x1a] = uStack_e0;
          param_2[0x1b] = uStack_dc;
          goto switchD_008feb90_caseD_3;
        }
        uVar26 = param_2[10];
        if (0x2492492 < uVar26) {
          uVar13 = 0;
          uVar27 = 2;
LAB_008fea04:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar13,uVar27);
        }
        uVar27 = uVar26 * 0x38;
        if (uVar27 == 0) {
          iVar14 = 8;
          uVar26 = 0;
        }
        else {
          uVar13 = 8;
          iVar14 = FUN_01298504(uVar27,8);
          if (iVar14 == 0) goto LAB_008fea04;
        }
        puVar19 = (undefined4 *)param_2[9];
        param_2[0xf] = iVar14;
        puVar20 = puVar19 + param_2[10] * 2;
        param_2[0xe] = uVar26;
        param_2[0x10] = 0;
        *(undefined1 *)(param_2 + 0xd) = 0;
        param_2[0x16] = puVar19;
        param_2[0x17] = puVar19;
        param_2[0x18] = param_2[8];
        param_2[0x19] = puVar20;
        while (puVar19 != puVar20) {
          uVar13 = *puVar19;
          iVar14 = puVar19[1];
          param_2[0x17] = puVar19 + 2;
          param_2[0x14] = uVar13;
          param_2[0x11] = param_2 + 0xe;
          param_2[0x12] = uVar13;
          param_2[0x13] = iVar14;
          param_2[0x15] = iVar14;
LAB_008fee4c:
          (**(code **)(iVar14 + 0xc))(&local_110,uVar13,param_3);
          uVar27 = local_10c;
          uVar26 = local_110;
          if (local_110 == 2) {
            uVar12 = 4;
            goto LAB_008fef80;
          }
          local_d0 = local_108;
          uStack_cc = uStack_104;
          uStack_c8 = local_100;
          uStack_c4 = local_fc;
          local_c0 = local_f8;
          uStack_bc = uStack_f4;
          uStack_b8 = local_f0;
          uStack_b4 = local_ec;
          uStack_b0 = local_e8;
          local_ac = local_e4;
          uStack_a8 = uStack_e0;
          uStack_a4 = uStack_dc;
          uStack_a0 = uStack_d8;
          uStack_9c = uStack_d4;
          FUN_01139b38(param_2[0x14],param_2[0x15]);
          if ((uVar26 & 1) != 0) {
            local_60 = local_d0;
            local_5c = uStack_cc;
            uStack_58 = uStack_c8;
            local_54 = uStack_c4;
            local_50 = local_c0;
            local_4c = uStack_bc;
            local_48 = uStack_b8;
            uStack_44 = uStack_b4;
            local_40 = uStack_b0;
            local_3c = local_ac;
            local_38 = uStack_a8;
            uStack_34 = uStack_a4;
            uStack_30 = uStack_a0;
            uStack_2c = uStack_9c;
            FUN_009495dc(param_2 + 0x16);
            FUN_007bc140(param_2 + 0xe);
            goto LAB_008fe87c;
          }
          local_98 = local_d0;
          uStack_94 = uStack_cc;
          uStack_90 = uStack_c8;
          uStack_8c = uStack_c4;
          local_88 = local_c0;
          uStack_84 = uStack_bc;
          local_80 = uStack_b8;
          uStack_7c = uStack_b4;
          uStack_78 = uStack_b0;
          local_74 = local_ac;
          uStack_70 = uStack_a8;
          uStack_6c = uStack_a4;
          uStack_68 = uStack_a0;
          uStack_64 = uStack_9c;
          puVar15 = (uint *)param_2[0x11];
          uVar27 = puVar15[2];
          if (uVar27 == *puVar15) {
            FUN_006e4ec8(puVar15);
          }
          puVar16 = (uint *)(puVar15[1] + uVar27 * 0x38);
          *puVar16 = local_d0;
          puVar16[1] = uStack_cc;
          puVar16[2] = uStack_c8;
          puVar16[3] = uStack_c4;
          puVar16[4] = local_c0;
          puVar16[5] = uStack_bc;
          puVar16[6] = uStack_b8;
          puVar16[7] = uStack_b4;
          puVar16[8] = uStack_b0;
          puVar16[9] = local_ac;
          puVar16[10] = uStack_a8;
          puVar16[0xb] = uStack_a4;
          puVar16[0xc] = uStack_a0;
          puVar16[0xd] = uStack_9c;
          puVar15[2] = uVar27 + 1;
          puVar20 = (undefined4 *)param_2[0x19];
          puVar19 = (undefined4 *)param_2[0x17];
        }
        param_2[0x12] = 0;
        FUN_009495dc(param_2 + 0x16);
        local_120 = param_2[0xe];
        uStack_11c = param_2[0xf];
        uStack_118 = param_2[0x10];
        goto LAB_008fef48;
      }
      local_60 = local_10c;
      local_5c = local_108;
      uStack_58 = uStack_104;
      local_54 = local_100;
      local_50 = local_fc;
      local_4c = local_f8;
      local_48 = uStack_f4;
      uStack_44 = local_f0;
      local_40 = local_ec;
      local_3c = local_e8;
      local_38 = local_e4;
      uStack_34 = uStack_e0;
      uStack_30 = uStack_dc;
      uStack_2c = uStack_d8;
      uVar27 = local_110;
LAB_008fe87c:
      local_1e4 = param_2 + 8;
      if (*(char *)(param_2 + 0xd) != '\0') {
        FUN_00b7d620(local_1e4);
      }
      bVar28 = true;
      *(undefined1 *)(param_2 + 0xd) = 0;
      goto LAB_008fe8a0;
    }
    uVar12 = 3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13f00);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13f00);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x27)) {
    case 0:
      puVar20 = (undefined4 *)param_2[0x24];
      uVar13 = param_2[0x25];
      uVar18 = param_2[0x26];
      goto LAB_008fe6bc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22218);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22218);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      piVar21 = (int *)*param_2;
      uVar13 = param_2[1];
      uVar18 = param_2[2];
      goto LAB_008fe6d8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a48);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a48);
    case 3:
      goto switchD_008fe980_caseD_3;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x23)) {
    case 0:
      uVar13 = param_2[0x20];
      uVar18 = param_2[0x21];
      goto LAB_008fe74c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c12a38);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c12a38);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x1e)) {
    case 0:
      uVar18 = param_2[0x1c];
      uVar13 = param_2[0x1d];
      goto LAB_008fe760;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x35)) {
    case 0:
      uVar18 = param_2[0xb];
      uVar13 = param_2[0xc];
      bVar25 = *(byte *)((int)param_2 + 0x36);
      goto LAB_008fe778;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      uVar13 = param_2[0x14];
      iVar14 = param_2[0x15];
      goto LAB_008fee4c;
    }
switchD_008feb90_caseD_3:
    FUN_009ecbe0(&local_110,param_2 + 0xe,param_3);
    uVar2 = uStack_d8;
    uVar26 = uStack_dc;
    uStack_34 = uStack_e0;
    local_38 = local_e4;
    local_3c = local_e8;
    local_40 = local_ec;
    uStack_44 = local_f0;
    local_48 = uStack_f4;
    local_4c = local_f8;
    local_50 = local_fc;
    local_54 = local_100;
    uVar27 = local_110;
    if (local_110 != 3) {
      puVar15 = (uint *)((uint)&local_110 | 4);
      uVar22 = *puVar15;
      uVar23 = puVar15[1];
      uVar24 = puVar15[2];
      FUN_00ba64b4(param_2 + 0xe);
      if (uVar27 != 2) {
        uStack_30 = uVar26;
        uStack_2c = uVar2;
        local_60 = uVar22;
        local_5c = uVar23;
        uStack_58 = uVar24;
        goto LAB_008fe87c;
      }
      local_120 = uVar22;
      uStack_11c = uVar23;
      uStack_118 = uVar24;
LAB_008fef48:
      FUN_006cac18(&local_110,&local_120);
      bVar28 = false;
      local_60 = local_110;
      local_5c = local_10c;
      uStack_58 = local_108;
      local_54 = uStack_104;
      local_50 = local_100;
      local_4c = local_fc;
      local_48 = local_f8;
      uStack_44 = uStack_f4;
      local_40 = local_f0;
      local_3c = local_ec;
      local_38 = local_e8;
      uStack_34 = local_e4;
      *(undefined1 *)(param_2 + 0xd) = 0;
LAB_008fe8a0:
      uVar11 = uStack_2c;
      uVar10 = uStack_30;
      uVar9 = uStack_34;
      uVar8 = local_38;
      uVar7 = local_3c;
      uVar6 = local_40;
      uVar5 = uStack_44;
      uVar4 = local_48;
      uVar3 = local_4c;
      uVar24 = local_50;
      uVar23 = local_54;
      uVar22 = uStack_58;
      uVar2 = local_5c;
      uVar26 = local_60;
      local_1e4 = param_2 + 8;
      local_1f0 = (undefined1 *)((int)param_2 + 0x35);
      local_1f4 = param_2 + 0x27;
      *local_1f0 = 1;
      FUN_00ba638c(local_1e4);
      *(undefined1 *)(param_2 + 0x23) = 1;
      *(undefined1 *)(param_2 + 0x1e) = 1;
      FUN_019f8c54(param_2[5],1);
      *(undefined1 *)(param_2 + 7) = 1;
      FUN_008b65c0(param_2);
      *(undefined1 *)local_1f4 = 1;
      local_98 = uVar26;
      uStack_94 = uVar2;
      uStack_90 = uVar22;
      uStack_8c = uVar23;
      local_88 = uVar24;
      uStack_84 = uVar3;
      local_80 = uVar4;
      uStack_7c = uVar5;
      uStack_78 = uVar6;
      local_74 = uVar7;
      uStack_70 = uVar8;
      uStack_6c = uVar9;
      uStack_68 = uVar10;
      uStack_64 = uVar11;
      if (!bVar28) {
        local_108 = uVar26;
        uStack_104 = uVar2;
        local_100 = uVar22;
        local_fc = uVar23;
        local_f8 = uVar24;
        uStack_f4 = uVar3;
        local_f0 = uVar4;
        local_ec = uVar5;
        local_e8 = uVar6;
        local_e4 = uVar7;
        uStack_e0 = uVar8;
        uStack_dc = uVar9;
      }
      else {
        local_5c = uVar26;
        uStack_58 = uVar2;
        local_54 = uVar22;
        local_50 = uVar23;
        local_4c = uVar24;
        local_48 = uVar3;
        uStack_44 = uVar4;
        local_40 = uVar5;
        local_3c = uVar6;
        local_38 = uVar7;
        uStack_34 = uVar8;
        uStack_30 = uVar9;
        uStack_2c = uVar10;
        uStack_28 = uVar11;
        local_60 = uVar27;
        FUN_009ed8c0((uint)&local_110 | 4,param_2[0x29],&local_60);
      }
      *param_1 = (uint)bVar28;
      param_1[1] = local_10c;
      param_1[2] = local_108;
      param_1[3] = uStack_104;
      param_1[4] = local_100;
      param_1[5] = local_fc;
      param_1[6] = local_f8;
      param_1[7] = uStack_f4;
      param_1[8] = local_f0;
      param_1[9] = local_ec;
      param_1[10] = local_e8;
      param_1[0xb] = local_e4;
      param_1[0xc] = uStack_e0;
      param_1[0xd] = uStack_dc;
      param_1[0xe] = uStack_d8;
      param_1[0xf] = uStack_d4;
      uVar17 = 1;
      goto LAB_008fee18;
    }
    uVar12 = 3;
LAB_008fef80:
    local_1f0 = (undefined1 *)((int)param_2 + 0x35);
    local_1f8 = param_2 + 0x23;
    local_1fc = param_2 + 0x1e;
    *local_1f0 = uVar12;
    *(undefined1 *)local_1f8 = 3;
    *(undefined1 *)local_1fc = 3;
    uVar12 = 4;
  }
  local_1ec = param_2 + 7;
  uVar17 = 3;
  *(undefined1 *)(param_2 + 0x27) = 3;
  *(undefined1 *)local_1ec = uVar12;
  *param_1 = 2;
LAB_008fee18:
  *(undefined1 *)(param_2 + 0x2b) = uVar17;
  return;
}

