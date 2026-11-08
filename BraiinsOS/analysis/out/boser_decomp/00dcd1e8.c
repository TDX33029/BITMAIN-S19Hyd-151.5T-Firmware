// FUN_00dcd1e8 @ 00dcd1e8 size=5272 calls_out=32 calls_in=0
// strings: Wi-Fi settings could not be obtained

void FUN_00dcd1e8(undefined4 *param_1,undefined4 *param_2,undefined4 ****param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 ****ppppuVar3;
  undefined4 *puVar4;
  undefined4 ****extraout_r1;
  undefined4 ****ppppuVar5;
  int iVar6;
  undefined4 ****ppppuVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 ****ppppuVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 ****ppppuVar17;
  undefined4 ****unaff_r11;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 *local_240;
  undefined4 *local_23c;
  undefined4 *local_238;
  undefined4 ****local_234;
  undefined4 *local_230;
  undefined4 *local_22c;
  undefined4 *local_228;
  undefined4 ****local_224;
  undefined4 ****local_21c;
  undefined4 ****local_214;
  undefined4 ****local_210;
  undefined4 ****ppppuStack_20c;
  undefined4 ****ppppuStack_208;
  undefined4 ****local_204;
  undefined4 ****ppppuStack_200;
  undefined4 ****ppppuStack_1fc;
  undefined4 ****ppppuStack_1f8;
  undefined4 ****local_1f0;
  undefined4 ****ppppuStack_1ec;
  undefined4 ****ppppuStack_1e8;
  undefined4 ****local_1e0;
  undefined4 ****ppppuStack_1dc;
  undefined4 ****ppppuStack_1d8;
  undefined4 ****local_180;
  undefined4 ****local_17c;
  undefined4 ****local_178;
  undefined4 ****ppppuStack_174;
  undefined4 ****local_170;
  undefined4 ****local_16c;
  undefined4 ****ppppuStack_168;
  undefined4 ****ppppuStack_164;
  undefined4 ****ppppuStack_160;
  undefined4 ****local_15c;
  undefined4 ****ppppuStack_158;
  undefined4 ****ppppuStack_154;
  undefined4 ****ppppuStack_150;
  undefined4 ****ppppuStack_14c;
  undefined4 ****local_148;
  undefined4 ****ppppuStack_144;
  undefined4 ****ppppuStack_140;
  undefined4 ****local_138;
  undefined4 ****ppppuStack_134;
  undefined4 ****ppppuStack_130;
  undefined4 ****local_12c;
  undefined4 ****ppppuStack_128;
  undefined4 ****ppppuStack_124;
  undefined4 ****ppppuStack_120;
  undefined4 ****local_118;
  undefined4 ****ppppuStack_114;
  undefined4 ****ppppuStack_110;
  undefined4 ****local_108;
  undefined4 ****ppppuStack_104;
  undefined4 ****ppppuStack_100;
  undefined4 ****local_f8;
  undefined4 ****local_f4;
  undefined4 ****local_f0;
  undefined4 ****local_ec;
  undefined4 ****local_e8;
  undefined4 ****local_e4;
  undefined4 ****local_e0;
  undefined4 ****local_dc;
  undefined4 ****local_d8;
  undefined4 ****local_d4;
  undefined4 ****local_d0;
  undefined4 ****ppppuStack_cc;
  undefined4 ****ppppuStack_c8;
  undefined4 ****local_c4;
  undefined4 ****local_c0;
  undefined4 ****local_bc;
  undefined4 ****local_b8;
  undefined4 ****ppppuStack_b4;
  undefined4 ****ppppuStack_b0;
  undefined4 ****local_ac;
  undefined4 ****ppppuStack_a8;
  undefined4 ****ppppuStack_a4;
  undefined4 ****ppppuStack_a0;
  undefined4 ****local_98;
  undefined4 ****ppppuStack_94;
  undefined4 ****ppppuStack_90;
  undefined4 ****local_88;
  undefined4 ****local_84;
  undefined4 ****local_80;
  undefined4 ****local_7c;
  undefined4 ****local_78;
  undefined4 ****local_74;
  undefined4 ****ppppuStack_70;
  undefined4 ****ppppuStack_6c;
  undefined4 ****local_68;
  undefined4 ****ppppuStack_64;
  undefined4 ****ppppuStack_60;
  undefined4 ****ppppuStack_5c;
  undefined4 ****local_58;
  undefined4 ****local_54;
  undefined4 ****local_50;
  undefined4 ****ppppuStack_4c;
  undefined4 ****ppppuStack_48;
  undefined4 ****local_44;
  undefined4 ****ppppuStack_40;
  undefined4 ****ppppuStack_3c;
  undefined4 ****ppppuStack_38;
  undefined4 ****local_30;
  undefined4 ****ppppuStack_2c;
  undefined4 ****ppppuStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    piVar10 = (int *)*param_2;
    iVar14 = param_2[1];
    param_2[2] = iVar14;
    bVar1 = FUN_00b35708(*(undefined4 *)(*(int *)(iVar14 + 0x10) + 0x3c),
                         *(undefined4 *)(*(int *)(iVar14 + 0x10) + 0x40));
    if (bVar1 != 2) {
      param_2[4] = piVar10;
      param_2[5] = iVar14;
      *(undefined1 *)(param_2 + 7) = 0;
      if ((bVar1 & 1) == 0) goto LAB_00dcd314;
LAB_00dcd2f4:
      param_2[8] = piVar10;
      param_2[9] = iVar14;
      param_2[6] = iVar14;
      *(undefined1 *)(param_2 + 0x11) = 0;
LAB_00dcd4ec:
      *(undefined1 *)(param_2 + 0x10) = 0;
      param_2[10] = piVar10;
      param_2[0xb] = iVar14;
LAB_00dcd500:
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[0xc] = piVar10;
LAB_00dcd510:
      uVar16 = FUN_00b6a2a0(*piVar10 + 8);
      puVar8 = &DAT_01c137d0;
      param_2[0xd] = uVar16;
      param_2[0xe] = &DAT_01c137d0;
LAB_00dcd52c:
      ppppuVar7 = (undefined4 ****)(param_2 + 8);
      local_234 = (undefined4 ****)(param_2 + 0xf);
      puVar4 = param_2 + 0x11;
      (**(code **)(puVar8 + 0xc))(&local_f8,uVar16,param_3);
      ppppuVar3 = local_e4;
      ppppuVar11 = local_e8;
      ppppuVar5 = local_f0;
      if (local_f8 != (undefined4 ****)0x80000017) {
        FUN_00fe4378(param_2[0xd],param_2[0xe]);
        if (local_f8 == (undefined4 ****)&DAT_80000016) {
          local_f0 = local_f4;
          local_f4 = ppppuVar5;
          local_ec = ppppuVar5 + (int)local_ec * 5;
          local_f8 = ppppuVar5;
          FUN_00dcedfc(&local_50,&local_f8);
          uVar16 = 0;
          local_b8 = local_50;
          ppppuStack_b4 = ppppuStack_4c;
          ppppuStack_b0 = ppppuStack_48;
        }
        else {
          local_88 = &local_180;
          local_178 = (undefined4 ****)0x0;
          local_180 = (undefined4 ****)0x0;
          local_7c = (undefined4 ****)0x0;
          local_17c = (undefined4 ****)&DAT_00000001;
          local_80 = (undefined4 ****)0x60000020;
          local_84 = (undefined4 ****)&DAT_01c1695c;
          local_e8 = ppppuVar11;
          local_e4 = ppppuVar3;
          iVar14 = FUN_0121efc4(&local_f8,&local_88);
          if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,&local_30,&DAT_01c16984,&DAT_01d30334);
          }
          local_b8 = local_180;
          ppppuStack_b4 = local_17c;
          ppppuStack_b0 = local_178;
          FUN_00dc8870(&local_f8);
          uVar16 = 1;
        }
        local_138 = local_b8;
        ppppuStack_134 = ppppuStack_b4;
        ppppuStack_130 = ppppuStack_b0;
        *(undefined1 *)(param_2 + 0xf) = 1;
        *(undefined1 *)(param_2 + 0x10) = 1;
        *(undefined1 *)(param_2 + 0x11) = 1;
        local_f8 = local_b8;
        local_f4 = ppppuStack_b4;
        local_f0 = ppppuStack_b0;
        param_2[0x11] = uVar16;
        param_2[0x12] = local_b8;
        param_2[0x13] = ppppuStack_b4;
        param_2[0x14] = ppppuStack_b0;
        puVar9 = (undefined4 *)param_2[6];
        uVar18 = puVar9[7];
        iVar14 = puVar9[4];
        uVar19 = puVar9[5];
        uVar20 = puVar9[6];
        uVar2 = *(undefined1 *)(puVar9 + 8);
        uVar16 = puVar9[1];
        uVar13 = puVar9[2];
        uVar15 = puVar9[3];
        *ppppuVar7 = (undefined4 ***)*puVar9;
        param_2[9] = uVar16;
        param_2[10] = uVar13;
        param_2[0xb] = uVar15;
        param_2[0xc] = iVar14 + 0x20;
        param_2[0xd] = uVar19;
        param_2[0xe] = uVar20;
        param_2[0xf] = uVar18;
        *(undefined1 *)(param_2 + 0x10) = uVar2;
        uVar16 = puVar9[4];
        *(undefined1 *)(param_2 + 0x31) = 0;
        param_2[0x2f] = ppppuVar7;
        param_2[0x30] = uVar16;
        param_2[0x2e] = puVar4;
        local_214 = ppppuVar7;
LAB_00dcda58:
        *(undefined1 *)(param_2 + 0x2c) = 0;
        param_2[0x2a] = ppppuVar7;
        param_2[0x2b] = puVar4;
LAB_00dcda6c:
        *(undefined2 *)((int)param_2 + 0x6d) = 0x100;
        bVar1 = 1;
        param_2[0x19] = ppppuVar7;
        param_2[0x1a] = puVar4;
LAB_00dcda84:
        puVar9 = param_2 + 0x16;
        *puVar9 = 0;
        param_2[0x18] = 0;
        param_2[0x17] = 4;
        *(undefined1 *)(param_2 + 0x1b) = 1;
        ppppuVar5 = &local_f8;
        FUN_00c7fd08(ppppuVar5,puVar9,ppppuVar7,puVar4);
        if (local_f8 != (undefined4 ****)0x2) {
          local_234 = local_f8;
          puVar4 = (undefined4 *)((uint)ppppuVar5 | 4);
          local_30 = (undefined4 ****)*puVar4;
          ppppuStack_2c = (undefined4 ****)puVar4[1];
          ppppuStack_28 = (undefined4 ****)puVar4[2];
          local_21c = local_e8;
          local_224 = local_e4;
          local_50 = local_e0;
          ppppuStack_4c = local_dc;
          ppppuStack_48 = local_d8;
          local_44 = local_d4;
          ppppuStack_40 = local_d0;
          ppppuStack_3c = ppppuStack_cc;
          ppppuStack_38 = ppppuStack_c8;
          local_214 = local_c0;
          param_3 = local_c4;
          goto LAB_00dcdb9c;
        }
        if ((bVar1 & 1) != 0) {
          *(undefined1 *)(param_2 + 0x1b) = 0;
          local_148 = (undefined4 ****)*puVar9;
          ppppuStack_144 = (undefined4 ****)param_2[0x17];
          ppppuStack_140 = (undefined4 ****)param_2[0x18];
          FUN_009ec520(&local_f8);
          local_180 = local_f8;
          local_17c = local_f4;
          local_178 = local_f0;
          ppppuStack_174 = local_ec;
          local_170 = local_e8;
          local_16c = local_e4;
          ppppuStack_168 = local_e0;
          ppppuStack_164 = local_dc;
          ppppuStack_160 = local_d8;
          local_15c = local_d4;
          ppppuStack_158 = local_d0;
          ppppuStack_154 = ppppuStack_cc;
          ppppuStack_150 = ppppuStack_c8;
          ppppuStack_14c = local_c4;
          param_2[0x1c] = local_f8;
          param_2[0x1d] = local_f4;
          param_2[0x1e] = local_f0;
          param_2[0x1f] = local_ec;
          param_2[0x20] = local_e8;
          param_2[0x21] = local_e4;
          param_2[0x22] = local_e0;
          param_2[0x23] = local_dc;
          param_2[0x24] = local_d8;
          param_2[0x25] = local_d4;
          param_2[0x26] = local_d0;
          param_2[0x27] = ppppuStack_cc;
          param_2[0x28] = ppppuStack_c8;
          param_2[0x29] = local_c4;
          goto switchD_00dcdf80_caseD_3;
        }
        uVar12 = param_2[0x18];
        if (0x2492492 < uVar12) {
          uVar16 = 0;
LAB_00dcdcd8:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar16,ppppuVar5);
        }
        ppppuVar5 = (undefined4 ****)(uVar12 * 0x38);
        if (ppppuVar5 == (undefined4 ****)0x0) {
          iVar14 = 8;
          uVar12 = 0;
        }
        else {
          uVar16 = 8;
          iVar14 = FUN_01298504(ppppuVar5,8);
          if (iVar14 == 0) goto LAB_00dcdcd8;
        }
        puVar9 = (undefined4 *)param_2[0x17];
        param_2[0x1d] = iVar14;
        puVar4 = puVar9 + param_2[0x18] * 2;
        param_2[0x1c] = uVar12;
        param_2[0x1e] = 0;
        *(undefined1 *)(param_2 + 0x1b) = 0;
        param_2[0x24] = puVar9;
        param_2[0x25] = puVar9;
        param_2[0x26] = param_2[0x16];
        param_2[0x27] = puVar4;
        while (puVar9 != puVar4) {
          uVar16 = *puVar9;
          iVar14 = puVar9[1];
          param_2[0x25] = puVar9 + 2;
          param_2[0x22] = uVar16;
          param_2[0x1f] = param_2 + 0x1c;
          param_2[0x20] = uVar16;
          param_2[0x21] = iVar14;
          param_2[0x23] = iVar14;
LAB_00dce760:
          (**(code **)(iVar14 + 0xc))(&local_f8,uVar16,param_3);
          ppppuVar11 = local_bc;
          ppppuVar5 = local_c0;
          local_224 = local_e0;
          local_21c = local_e4;
          ppppuVar7 = local_f8;
          if (local_f8 == (undefined4 ****)0x2) {
            uVar2 = 4;
            goto LAB_00dce928;
          }
          local_234 = local_f4;
          local_98 = local_f0;
          ppppuStack_94 = local_ec;
          ppppuStack_90 = local_e8;
          local_b8 = local_dc;
          ppppuStack_b4 = local_d8;
          ppppuStack_b0 = local_d4;
          local_ac = local_d0;
          ppppuStack_a8 = ppppuStack_cc;
          ppppuStack_a4 = ppppuStack_c8;
          ppppuStack_a0 = local_c4;
          local_214 = local_bc;
          FUN_00fe4378(param_2[0x22],param_2[0x23]);
          if (((uint)ppppuVar7 & 1) != 0) {
            local_30 = local_98;
            ppppuStack_2c = ppppuStack_94;
            ppppuStack_28 = ppppuStack_90;
            local_50 = local_b8;
            ppppuStack_4c = ppppuStack_b4;
            ppppuStack_48 = ppppuStack_b0;
            local_44 = local_ac;
            ppppuStack_40 = ppppuStack_a8;
            ppppuStack_3c = ppppuStack_a4;
            ppppuStack_38 = ppppuStack_a0;
            FUN_009495dc(param_2 + 0x24);
            FUN_007bc140(param_2 + 0x1c);
            param_3 = ppppuVar5;
            goto LAB_00dcdb9c;
          }
          local_88 = local_98;
          local_84 = ppppuStack_94;
          local_80 = ppppuStack_90;
          local_78 = local_224;
          local_7c = local_21c;
          local_74 = local_b8;
          ppppuStack_70 = ppppuStack_b4;
          ppppuStack_6c = ppppuStack_b0;
          local_68 = local_ac;
          ppppuStack_64 = ppppuStack_a8;
          ppppuStack_60 = ppppuStack_a4;
          ppppuStack_5c = ppppuStack_a0;
          local_58 = ppppuVar5;
          piVar10 = (int *)param_2[0x1f];
          local_54 = ppppuVar11;
          iVar14 = piVar10[2];
          if (iVar14 == *piVar10) {
            FUN_006e4ec8(piVar10);
          }
          puVar4 = (undefined4 *)(piVar10[1] + iVar14 * 0x38);
          *puVar4 = local_98;
          puVar4[1] = ppppuStack_94;
          puVar4[2] = ppppuStack_90;
          puVar4[3] = local_21c;
          puVar4[4] = local_224;
          puVar4[5] = local_b8;
          puVar4[6] = ppppuStack_b4;
          puVar4[7] = ppppuStack_b0;
          puVar4[8] = local_ac;
          puVar4[9] = ppppuStack_a8;
          puVar4[10] = ppppuStack_a4;
          puVar4[0xb] = ppppuStack_a0;
          puVar4[0xc] = ppppuVar5;
          puVar4[0xd] = ppppuVar11;
          piVar10[2] = iVar14 + 1;
          puVar4 = (undefined4 *)param_2[0x27];
          puVar9 = (undefined4 *)param_2[0x25];
        }
        param_2[0x20] = 0;
        FUN_009495dc(param_2 + 0x24);
        local_108 = (undefined4 ****)param_2[0x1c];
        ppppuStack_104 = (undefined4 ****)param_2[0x1d];
        ppppuStack_100 = (undefined4 ****)param_2[0x1e];
        goto LAB_00dce8d0;
      }
      uVar2 = 3;
      *(undefined1 *)local_234 = 3;
      *(undefined1 *)puVar4 = 3;
      *(undefined1 *)(param_2 + 0x10) = 3;
      goto LAB_00dce948;
    }
    uVar16 = 0;
    local_224 = (undefined4 ****)0x80000007;
    local_21c = param_3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1dfd8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1dfd8);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      piVar10 = (int *)param_2[4];
      iVar14 = param_2[5];
LAB_00dcd314:
      param_2[8] = piVar10;
      param_2[9] = iVar14;
      param_2[6] = iVar14;
      *(undefined1 *)(param_2 + 0x11) = 0;
LAB_00dcd364:
      *(undefined1 *)(param_2 + 0x10) = 0;
      param_2[10] = piVar10;
      param_2[0xb] = iVar14;
LAB_00dcd378:
      *(undefined1 *)(param_2 + 0xf) = 0;
      param_2[0xc] = piVar10;
LAB_00dcd38c:
      uVar16 = FUN_00b6a2a0(*piVar10 + 8);
      puVar8 = &DAT_01c13350;
      param_2[0xd] = uVar16;
      param_2[0xe] = &DAT_01c13350;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1dfd8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1dfd8);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x11)) {
      case 0:
        piVar10 = (int *)param_2[8];
        iVar14 = param_2[9];
        goto LAB_00dcd364;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1dfd8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1dfd8);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x10)) {
      case 0:
        piVar10 = (int *)param_2[10];
        goto LAB_00dcd378;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1dfd8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1dfd8);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        piVar10 = (int *)param_2[0xc];
        goto LAB_00dcd38c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1dfd8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1dfd8);
      case 3:
        uVar16 = param_2[0xd];
        puVar8 = (undefined *)param_2[0xe];
      }
      break;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x31)) {
      case 0:
        ppppuVar7 = (undefined4 ****)param_2[0x2e];
        puVar4 = (undefined4 *)param_2[0x2f];
        goto LAB_00dcd6f8;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c15fdc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c15fdc);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x2c)) {
        case 0:
          puVar4 = (undefined4 *)param_2[0x2a];
          ppppuVar7 = (undefined4 ****)param_2[0x2b];
          goto LAB_00dcd710;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c21b3c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c21b3c);
        case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(undefined1 *)((int)param_2 + 0x6d)) {
          case 0:
            puVar4 = (undefined4 *)param_2[0x19];
            ppppuVar7 = (undefined4 ****)param_2[0x1a];
            bVar1 = *(byte *)((int)param_2 + 0x6e);
            goto LAB_00dcd72c;
          case 1:
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c21b4c);
          case 2:
                    /* WARNING: Subroutine does not return */
            FUN_01307a10(&DAT_01c21b4c);
          case 4:
            uVar16 = param_2[0x22];
            iVar14 = param_2[0x23];
            goto LAB_00dce9f8;
          }
        }
      }
      goto switchD_00dcdf18_caseD_3;
    }
    local_214 = (undefined4 ****)(param_2 + 8);
    puVar4 = param_2 + 0xf;
    (**(code **)(puVar8 + 0xc))(&local_88,uVar16,param_3);
    if (local_88 == (undefined4 ****)0x80000002) {
      *(undefined1 *)puVar4 = 3;
LAB_00dcd64c:
      uVar2 = 3;
      *(undefined1 *)(param_2 + 0x11) = 3;
      *(undefined1 *)(param_2 + 0x10) = 3;
LAB_00dcd658:
      local_228 = param_2 + 7;
      *(undefined1 *)local_228 = uVar2;
      *param_1 = 2;
      uVar2 = 3;
      goto LAB_00dce72c;
    }
    local_f8 = local_88;
    local_f4 = local_84;
    local_f0 = local_80;
    local_ec = local_7c;
    local_e8 = local_78;
    local_e4 = local_74;
    local_e0 = ppppuStack_70;
    local_dc = ppppuStack_6c;
    local_d8 = local_68;
    FUN_00fe4378(param_2[0xd],param_2[0xe]);
    if (local_f8 == (undefined4 ****)&DAT_80000001) {
      puVar9 = (undefined4 *)((uint)&local_f8 | 4);
      local_180 = (undefined4 ****)*puVar9;
      local_17c = (undefined4 ****)puVar9[1];
      local_178 = (undefined4 ****)puVar9[2];
      ppppuStack_174 = (undefined4 ****)puVar9[3];
      local_170 = (undefined4 ****)puVar9[4];
      local_16c = (undefined4 ****)puVar9[5];
      if (local_180 == (undefined4 ****)&DAT_80000016) goto LAB_00dcd630;
      ppppuVar3 = (undefined4 ****)thunk_FUN_01be5118(0x24);
      if (ppppuVar3 == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x24);
      }
      FUN_01bed4e2(ppppuVar3,"Wi-Fi settings could not be obtained",0x24);
      FUN_00dced08(puVar9);
      *(undefined1 *)puVar4 = 1;
      ppppuVar7 = (undefined4 ****)&DAT_80000001;
      ppppuVar5 = extraout_r1;
      ppppuVar11 = (undefined4 ****)&DAT_00000024;
      ppppuVar17 = (undefined4 ****)&DAT_00000024;
    }
    else {
      FUN_00b240f8((uint)&local_180 | 4,&local_f8);
LAB_00dcd630:
      *(undefined1 *)puVar4 = 1;
      ppppuVar7 = local_17c;
      ppppuVar5 = local_16c;
      ppppuVar11 = local_178;
      ppppuVar3 = ppppuStack_174;
      ppppuVar17 = local_170;
      if (local_17c == (undefined4 ****)0x80000002) goto LAB_00dcd64c;
    }
    *(undefined1 *)(param_2 + 0x11) = 1;
    puVar4 = param_2 + 0xd;
    *(undefined1 *)(param_2 + 0x10) = 1;
    puVar9 = (undefined4 *)param_2[6];
    param_2[8] = ppppuVar7;
    param_2[9] = ppppuVar11;
    param_2[10] = ppppuVar3;
    param_2[0xb] = ppppuVar17;
    param_2[0xc] = ppppuVar5;
    iVar14 = puVar9[4];
    uVar19 = puVar9[5];
    uVar20 = puVar9[6];
    uVar18 = puVar9[7];
    uVar2 = *(undefined1 *)(puVar9 + 8);
    uVar16 = puVar9[1];
    uVar13 = puVar9[2];
    uVar15 = puVar9[3];
    *puVar4 = *puVar9;
    param_2[0xe] = uVar16;
    param_2[0xf] = uVar13;
    param_2[0x10] = uVar15;
    param_2[0x11] = iVar14 + 0x20;
    param_2[0x12] = uVar19;
    param_2[0x13] = uVar20;
    param_2[0x14] = uVar18;
    *(undefined1 *)(param_2 + 0x15) = uVar2;
    uVar16 = puVar9[4];
    *(undefined1 *)(param_2 + 0x31) = 0;
    param_2[0x30] = uVar16;
    param_2[0x2e] = local_214;
    param_2[0x2f] = puVar4;
    ppppuVar7 = local_214;
LAB_00dcd6f8:
    *(undefined1 *)(param_2 + 0x2c) = 0;
    param_2[0x2a] = puVar4;
    param_2[0x2b] = ppppuVar7;
LAB_00dcd710:
    *(undefined2 *)((int)param_2 + 0x6d) = 0x100;
    bVar1 = 1;
    param_2[0x19] = puVar4;
    param_2[0x1a] = ppppuVar7;
LAB_00dcd72c:
    puVar9 = param_2 + 0x16;
    *puVar9 = 0;
    param_2[0x18] = 0;
    param_2[0x17] = 4;
    *(undefined1 *)(param_2 + 0x1b) = 1;
    ppppuVar5 = &local_f8;
    FUN_00c7f408(ppppuVar5,puVar9,puVar4,ppppuVar7);
    unaff_r11 = local_f8;
    if (local_f8 == (undefined4 ****)0x2) {
      if ((bVar1 & 1) == 0) {
        uVar12 = param_2[0x18];
        if (0x2492492 < uVar12) {
          uVar16 = 0;
LAB_00dcddbc:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar16,ppppuVar5);
        }
        ppppuVar5 = (undefined4 ****)(uVar12 * 0x38);
        if (ppppuVar5 == (undefined4 ****)0x0) {
          iVar14 = 8;
          uVar12 = 0;
        }
        else {
          uVar16 = 8;
          iVar14 = FUN_01298504(ppppuVar5,8);
          if (iVar14 == 0) goto LAB_00dcddbc;
        }
        puVar9 = (undefined4 *)param_2[0x17];
        param_2[0x1d] = iVar14;
        puVar4 = puVar9 + param_2[0x18] * 2;
        param_2[0x1c] = uVar12;
        param_2[0x1e] = 0;
        *(undefined1 *)(param_2 + 0x1b) = 0;
        param_2[0x24] = puVar9;
        param_2[0x25] = puVar9;
        param_2[0x26] = param_2[0x16];
        param_2[0x27] = puVar4;
        while (puVar9 != puVar4) {
          uVar16 = *puVar9;
          iVar14 = puVar9[1];
          param_2[0x25] = puVar9 + 2;
          param_2[0x22] = uVar16;
          param_2[0x1f] = param_2 + 0x1c;
          param_2[0x20] = uVar16;
          param_2[0x21] = iVar14;
          param_2[0x23] = iVar14;
LAB_00dce9f8:
          (**(code **)(iVar14 + 0xc))(&local_f8,uVar16,param_3);
          ppppuVar3 = local_bc;
          unaff_r11 = local_c0;
          ppppuVar11 = local_e0;
          local_21c = local_e4;
          ppppuVar5 = local_f4;
          ppppuVar7 = local_f8;
          if (local_f8 == (undefined4 ****)0x2) {
            uVar2 = 4;
            goto LAB_00dcebd8;
          }
          local_30 = local_f0;
          ppppuStack_2c = local_ec;
          ppppuStack_28 = local_e8;
          local_224 = local_e0;
          local_b8 = local_dc;
          ppppuStack_b4 = local_d8;
          ppppuStack_b0 = local_d4;
          local_ac = local_d0;
          ppppuStack_a8 = ppppuStack_cc;
          ppppuStack_a4 = ppppuStack_c8;
          ppppuStack_a0 = local_c4;
          local_214 = local_bc;
          FUN_00fe4378(param_2[0x22],param_2[0x23]);
          if (((uint)ppppuVar7 & 1) != 0) {
            local_1e0 = local_30;
            ppppuStack_1dc = ppppuStack_2c;
            ppppuStack_1d8 = ppppuStack_28;
            local_50 = local_b8;
            ppppuStack_4c = ppppuStack_b4;
            ppppuStack_48 = ppppuStack_b0;
            local_44 = local_ac;
            ppppuStack_40 = ppppuStack_a8;
            ppppuStack_3c = ppppuStack_a4;
            ppppuStack_38 = ppppuStack_a0;
            FUN_009495dc(param_2 + 0x24);
            FUN_007bc140(param_2 + 0x1c);
            param_3 = unaff_r11;
            unaff_r11 = ppppuVar5;
            goto LAB_00dcd844;
          }
          local_88 = local_30;
          local_84 = ppppuStack_2c;
          local_80 = ppppuStack_28;
          local_78 = ppppuVar11;
          local_7c = local_21c;
          local_74 = local_b8;
          ppppuStack_70 = ppppuStack_b4;
          ppppuStack_6c = ppppuStack_b0;
          local_68 = local_ac;
          ppppuStack_64 = ppppuStack_a8;
          ppppuStack_60 = ppppuStack_a4;
          ppppuStack_5c = ppppuStack_a0;
          piVar10 = (int *)param_2[0x1f];
          local_54 = ppppuVar3;
          local_58 = unaff_r11;
          iVar14 = piVar10[2];
          if (iVar14 == *piVar10) {
            FUN_006e4ec8(piVar10);
          }
          puVar4 = (undefined4 *)(piVar10[1] + iVar14 * 0x38);
          *puVar4 = local_30;
          puVar4[1] = ppppuStack_2c;
          puVar4[2] = ppppuStack_28;
          puVar4[3] = local_21c;
          puVar4[4] = ppppuVar11;
          puVar4[5] = local_b8;
          puVar4[6] = ppppuStack_b4;
          puVar4[7] = ppppuStack_b0;
          puVar4[8] = local_ac;
          puVar4[9] = ppppuStack_a8;
          puVar4[10] = ppppuStack_a4;
          puVar4[0xb] = ppppuStack_a0;
          puVar4[0xc] = unaff_r11;
          puVar4[0xd] = ppppuVar3;
          piVar10[2] = iVar14 + 1;
          puVar4 = (undefined4 *)param_2[0x27];
          puVar9 = (undefined4 *)param_2[0x25];
        }
        param_2[0x20] = 0;
        FUN_009495dc(param_2 + 0x24);
        local_98 = (undefined4 ****)param_2[0x1c];
        ppppuStack_94 = (undefined4 ****)param_2[0x1d];
        ppppuStack_90 = (undefined4 ****)param_2[0x1e];
      }
      else {
        *(undefined1 *)(param_2 + 0x1b) = 0;
        local_118 = (undefined4 ****)*puVar9;
        ppppuStack_114 = (undefined4 ****)param_2[0x17];
        ppppuStack_110 = (undefined4 ****)param_2[0x18];
        FUN_009ec520(&local_f8);
        local_180 = local_f8;
        local_17c = local_f4;
        local_178 = local_f0;
        ppppuStack_174 = local_ec;
        local_170 = local_e8;
        local_16c = local_e4;
        ppppuStack_168 = local_e0;
        ppppuStack_164 = local_dc;
        ppppuStack_160 = local_d8;
        local_15c = local_d4;
        ppppuStack_158 = local_d0;
        ppppuStack_154 = ppppuStack_cc;
        ppppuStack_150 = ppppuStack_c8;
        ppppuStack_14c = local_c4;
        param_2[0x1c] = local_f8;
        param_2[0x1d] = local_f4;
        param_2[0x1e] = local_f0;
        param_2[0x1f] = local_ec;
        param_2[0x20] = local_e8;
        param_2[0x21] = local_e4;
        param_2[0x22] = local_e0;
        param_2[0x23] = local_dc;
        param_2[0x24] = local_d8;
        param_2[0x25] = local_d4;
        param_2[0x26] = local_d0;
        param_2[0x27] = ppppuStack_cc;
        param_2[0x28] = ppppuStack_c8;
        param_2[0x29] = local_c4;
switchD_00dcdf18_caseD_3:
        FUN_009ecbe0(&local_f8,param_2 + 0x1c,param_3);
        local_224 = local_e4;
        unaff_r11 = local_f8;
        if (local_f8 == (undefined4 ****)&DAT_00000003) {
          uVar2 = 3;
LAB_00dcebd8:
          local_234 = (undefined4 ****)((int)param_2 + 0x6d);
          local_23c = param_2 + 0x2c;
          local_238 = param_2 + 0x31;
          *(undefined1 *)local_234 = uVar2;
          *(undefined1 *)local_238 = 3;
          *(undefined1 *)local_23c = 3;
          uVar2 = 4;
          goto LAB_00dcd658;
        }
        puVar4 = (undefined4 *)((uint)&local_f8 | 4);
        param_3 = &local_108;
        local_108 = (undefined4 ****)*puVar4;
        ppppuStack_104 = (undefined4 ****)puVar4[1];
        ppppuStack_100 = (undefined4 ****)puVar4[2];
        local_21c = local_e8;
        local_138 = local_e0;
        ppppuStack_134 = local_dc;
        ppppuStack_130 = local_d8;
        local_12c = local_d4;
        ppppuStack_128 = local_d0;
        ppppuStack_124 = ppppuStack_cc;
        ppppuStack_120 = ppppuStack_c8;
        local_214 = local_c0;
        FUN_00db1814(param_2 + 0x1c);
        if (unaff_r11 != (undefined4 ****)0x2) {
          local_50 = local_138;
          ppppuStack_4c = ppppuStack_134;
          ppppuStack_48 = ppppuStack_130;
          local_44 = local_12c;
          ppppuStack_40 = ppppuStack_128;
          ppppuStack_3c = ppppuStack_124;
          ppppuStack_38 = ppppuStack_120;
          local_1e0 = local_108;
          ppppuStack_1dc = ppppuStack_104;
          ppppuStack_1d8 = ppppuStack_100;
          param_3 = local_c4;
          goto LAB_00dcd844;
        }
        local_98 = local_108;
        ppppuStack_94 = ppppuStack_104;
        ppppuStack_90 = ppppuStack_100;
      }
      FUN_006cac18(&local_f8,&local_98);
      uVar16 = 0;
      local_1e0 = local_f8;
      ppppuStack_1dc = local_f4;
      ppppuStack_1d8 = local_f0;
      local_21c = local_ec;
      local_224 = local_e8;
      local_50 = local_e4;
      ppppuStack_4c = local_e0;
      ppppuStack_48 = local_dc;
      local_44 = local_d8;
      ppppuStack_40 = local_d4;
      ppppuStack_3c = local_d0;
      ppppuStack_38 = ppppuStack_cc;
      *(undefined1 *)(param_2 + 0x1b) = 0;
    }
    else {
      puVar4 = (undefined4 *)((uint)ppppuVar5 | 4);
      local_1e0 = (undefined4 ****)*puVar4;
      ppppuStack_1dc = (undefined4 ****)puVar4[1];
      ppppuStack_1d8 = (undefined4 ****)puVar4[2];
      local_21c = local_e8;
      local_224 = local_e4;
      local_50 = local_e0;
      ppppuStack_4c = local_dc;
      ppppuStack_48 = local_d8;
      local_44 = local_d4;
      ppppuStack_40 = local_d0;
      ppppuStack_3c = ppppuStack_cc;
      ppppuStack_38 = ppppuStack_c8;
      local_214 = local_c0;
      param_3 = local_c4;
LAB_00dcd844:
      local_230 = param_2 + 0x16;
      if (*(char *)(param_2 + 0x1b) != '\0') {
        FUN_00b7d620(local_230);
      }
      uVar16 = 1;
      *(undefined1 *)(param_2 + 0x1b) = 0;
    }
    ppppuStack_1f8 = ppppuStack_38;
    ppppuStack_1fc = ppppuStack_3c;
    ppppuStack_200 = ppppuStack_40;
    local_204 = local_44;
    ppppuStack_208 = ppppuStack_48;
    ppppuStack_20c = ppppuStack_4c;
    local_210 = local_50;
    local_228 = param_2 + 7;
    local_22c = param_2 + 4;
    local_230 = param_2 + 0x16;
    local_234 = (undefined4 ****)((int)param_2 + 0x6d);
    local_148 = local_1e0;
    ppppuStack_144 = ppppuStack_1dc;
    ppppuStack_140 = ppppuStack_1d8;
    *(undefined1 *)local_234 = 1;
    FUN_00db1dcc(local_230);
    *(undefined1 *)(param_2 + 0x31) = 1;
    *(undefined1 *)(param_2 + 0x2c) = 1;
    local_1f0 = local_148;
    ppppuStack_1ec = ppppuStack_144;
    ppppuStack_1e8 = ppppuStack_140;
    iVar14 = param_2[8];
    if (iVar14 != -0x80000000) {
      iVar6 = 0x20;
      if (iVar14 == -0x7fffffff) {
        iVar6 = 0x24;
        iVar14 = param_2[9];
      }
      FUN_019bb7e0(iVar14,*(undefined4 *)((int)param_2 + iVar6 + 4));
    }
    *(undefined1 *)local_228 = 1;
    FUN_00dced30(local_22c);
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      piVar10 = (int *)param_2[4];
      iVar14 = param_2[5];
      goto LAB_00dcd2f4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1dfd8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1dfd8);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x11)) {
      case 0:
        piVar10 = (int *)param_2[8];
        iVar14 = param_2[9];
        goto LAB_00dcd4ec;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1dfd8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1dfd8);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x10)) {
      case 0:
        piVar10 = (int *)param_2[10];
        goto LAB_00dcd500;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1dfd8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1dfd8);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        piVar10 = (int *)param_2[0xc];
        goto LAB_00dcd510;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1dfd8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1dfd8);
      case 3:
        uVar16 = param_2[0xd];
        puVar8 = (undefined *)param_2[0xe];
      }
      goto LAB_00dcd52c;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x31)) {
    case 0:
      puVar4 = (undefined4 *)param_2[0x2e];
      ppppuVar7 = (undefined4 ****)param_2[0x2f];
      goto LAB_00dcda58;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c16240);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c16240);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2c)) {
    case 0:
      ppppuVar7 = (undefined4 ****)param_2[0x2a];
      puVar4 = (undefined4 *)param_2[0x2b];
      goto LAB_00dcda6c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b3c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b3c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0x6d)) {
    case 0:
      ppppuVar7 = (undefined4 ****)param_2[0x19];
      puVar4 = (undefined4 *)param_2[0x1a];
      bVar1 = *(byte *)((int)param_2 + 0x6e);
      goto LAB_00dcda84;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      uVar16 = param_2[0x22];
      iVar14 = param_2[0x23];
      goto LAB_00dce760;
    }
switchD_00dcdf80_caseD_3:
    FUN_009ecbe0(&local_f8,param_2 + 0x1c,param_3);
    ppppuVar7 = local_f8;
    if (local_f8 == (undefined4 ****)&DAT_00000003) {
      uVar2 = 3;
LAB_00dce928:
      local_238 = (undefined4 *)((int)param_2 + 0x6d);
      local_240 = param_2 + 0x2c;
      local_23c = param_2 + 0x31;
      *(undefined1 *)local_238 = uVar2;
      *(undefined1 *)local_23c = 3;
      *(undefined1 *)local_240 = 3;
      uVar2 = 4;
LAB_00dce948:
      local_228 = param_2 + 7;
      *(undefined1 *)local_228 = uVar2;
      *param_1 = 2;
      uVar2 = 4;
      goto LAB_00dce72c;
    }
    local_234 = local_f8;
    puVar4 = (undefined4 *)((uint)&local_f8 | 4);
    local_118 = (undefined4 ****)*puVar4;
    ppppuStack_114 = (undefined4 ****)puVar4[1];
    ppppuStack_110 = (undefined4 ****)puVar4[2];
    local_21c = local_e8;
    local_224 = local_e4;
    local_138 = local_e0;
    ppppuStack_134 = local_dc;
    ppppuStack_130 = local_d8;
    local_12c = local_d4;
    ppppuStack_128 = local_d0;
    ppppuStack_124 = ppppuStack_cc;
    ppppuStack_120 = ppppuStack_c8;
    local_214 = local_c0;
    FUN_00db1814(param_2 + 0x1c);
    if (ppppuVar7 == (undefined4 ****)0x2) {
      local_108 = local_118;
      ppppuStack_104 = ppppuStack_114;
      ppppuStack_100 = ppppuStack_110;
LAB_00dce8d0:
      FUN_006cac18(&local_f8,&local_108);
      uVar16 = 0;
      local_30 = local_f8;
      ppppuStack_2c = local_f4;
      ppppuStack_28 = local_f0;
      local_21c = local_ec;
      local_224 = local_e8;
      local_50 = local_e4;
      ppppuStack_4c = local_e0;
      ppppuStack_48 = local_dc;
      local_44 = local_d8;
      ppppuStack_40 = local_d4;
      ppppuStack_3c = local_d0;
      ppppuStack_38 = ppppuStack_cc;
      *(undefined1 *)(param_2 + 0x1b) = 0;
    }
    else {
      local_50 = local_138;
      ppppuStack_4c = ppppuStack_134;
      ppppuStack_48 = ppppuStack_130;
      local_44 = local_12c;
      ppppuStack_40 = ppppuStack_128;
      ppppuStack_3c = ppppuStack_124;
      ppppuStack_38 = ppppuStack_120;
      local_30 = local_118;
      ppppuStack_2c = ppppuStack_114;
      ppppuStack_28 = ppppuStack_110;
      param_3 = local_c4;
LAB_00dcdb9c:
      local_230 = param_2 + 0x16;
      if (*(char *)(param_2 + 0x1b) != '\0') {
        FUN_00b7d620(local_230);
      }
      uVar16 = 1;
      *(undefined1 *)(param_2 + 0x1b) = 0;
    }
    ppppuStack_1e8 = ppppuStack_28;
    ppppuStack_1ec = ppppuStack_2c;
    local_1f0 = local_30;
    ppppuStack_1f8 = ppppuStack_38;
    ppppuStack_1fc = ppppuStack_3c;
    ppppuStack_200 = ppppuStack_40;
    local_204 = local_44;
    ppppuStack_208 = ppppuStack_48;
    ppppuStack_20c = ppppuStack_4c;
    local_210 = local_50;
    local_22c = param_2 + 4;
    local_230 = param_2 + 0x16;
    local_238 = (undefined4 *)((int)param_2 + 0x6d);
    *(undefined1 *)local_238 = 1;
    FUN_00db1dcc(local_230);
    *(undefined1 *)(param_2 + 0x31) = 1;
    *(undefined1 *)(param_2 + 0x2c) = 1;
    FUN_00dcefa0(param_2 + 0x11);
    *(undefined1 *)(param_2 + 7) = 1;
    FUN_00dcf000(local_22c);
    unaff_r11 = local_234;
  }
  *param_1 = uVar16;
  param_1[1] = unaff_r11;
  param_1[2] = local_1f0;
  param_1[3] = ppppuStack_1ec;
  param_1[4] = ppppuStack_1e8;
  param_1[5] = local_21c;
  param_1[6] = local_224;
  param_1[7] = local_210;
  param_1[8] = ppppuStack_20c;
  param_1[9] = ppppuStack_208;
  param_1[10] = local_204;
  param_1[0xb] = ppppuStack_200;
  param_1[0xc] = ppppuStack_1fc;
  param_1[0xd] = ppppuStack_1f8;
  param_1[0xe] = param_3;
  param_1[0xf] = local_214;
  uVar2 = 1;
LAB_00dce72c:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

