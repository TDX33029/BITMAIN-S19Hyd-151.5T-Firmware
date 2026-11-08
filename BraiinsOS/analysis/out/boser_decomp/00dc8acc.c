// FUN_00dc8acc @ 00dc8acc size=3500 calls_out=29 calls_in=0
// strings: callCommand | commandName

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00dc8acc(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  byte bVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 **ppuVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 *unaff_r11;
  undefined4 uVar18;
  undefined4 *in_r12;
  undefined4 *extraout_r12;
  undefined4 *local_274;
  undefined4 *local_270;
  undefined4 *local_26c;
  undefined4 *local_268;
  undefined4 *local_264;
  undefined4 *local_25c;
  undefined4 *local_258;
  undefined4 *local_254;
  undefined4 *local_250;
  undefined4 *local_24c;
  undefined4 *local_238;
  undefined4 *local_234;
  undefined4 *local_230;
  undefined4 *local_22c;
  undefined4 *local_228;
  undefined4 *local_224;
  undefined4 *local_220;
  undefined4 *puStack_21c;
  undefined4 *local_218;
  undefined4 *local_214;
  undefined4 *puStack_210;
  undefined4 *puStack_20c;
  undefined4 *local_208;
  undefined4 *local_204;
  undefined4 *local_200;
  undefined4 *local_1f8;
  undefined4 *puStack_1f4;
  undefined4 *puStack_1f0;
  undefined4 *local_1ec;
  undefined4 *local_1e8;
  undefined4 *puStack_1e4;
  undefined4 *puStack_1e0;
  undefined4 *puStack_1dc;
  undefined4 *puStack_1d8;
  undefined4 *local_1d0;
  undefined4 *puStack_1cc;
  undefined4 *puStack_1c8;
  undefined4 *puStack_1c4;
  undefined4 *local_1c0;
  undefined4 *puStack_1bc;
  undefined4 *puStack_1b8;
  undefined4 *puStack_1b4;
  undefined4 *puStack_1b0;
  undefined4 *local_1a8;
  undefined4 *local_1a4;
  undefined4 *puStack_1a0;
  undefined4 *local_19c;
  undefined4 *puStack_198;
  undefined4 *puStack_194;
  undefined4 *puStack_190;
  undefined4 *local_188;
  undefined4 *puStack_184;
  undefined4 *puStack_180;
  undefined4 *local_178;
  undefined4 *puStack_174;
  undefined4 *puStack_170;
  undefined4 *local_16c;
  undefined4 *puStack_168;
  undefined4 *puStack_164;
  undefined4 *puStack_160;
  undefined4 *local_158;
  undefined4 *puStack_154;
  undefined4 *puStack_150;
  undefined4 *local_148;
  undefined4 *puStack_144;
  undefined4 *puStack_140;
  undefined4 *local_138;
  undefined4 *puStack_134;
  undefined4 *puStack_130;
  undefined4 *local_128;
  undefined4 *puStack_124;
  undefined4 *puStack_120;
  undefined4 *puStack_11c;
  undefined4 *local_118;
  undefined4 *puStack_114;
  undefined4 *puStack_110;
  undefined4 *puStack_10c;
  undefined4 *puStack_108;
  undefined4 *local_104;
  undefined4 *puStack_100;
  undefined4 *puStack_fc;
  undefined4 *puStack_f8;
  undefined4 *puStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 *local_e0;
  undefined4 *puStack_dc;
  undefined4 *puStack_d8;
  undefined4 *local_d4;
  undefined4 *puStack_d0;
  undefined4 *puStack_cc;
  undefined4 *puStack_c8;
  undefined4 *local_c0;
  undefined4 *puStack_bc;
  undefined4 *puStack_b8;
  undefined4 *local_b0;
  undefined4 *puStack_ac;
  undefined4 *puStack_a8;
  undefined4 *local_a0;
  undefined4 *local_9c;
  undefined4 *local_98;
  undefined4 *local_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *puStack_48;
  undefined4 *local_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *local_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x31)) {
  case 0:
    local_26c = (undefined4 *)param_2[0x2f];
    uVar15 = 0;
    param_2[0x30] = local_26c;
    uVar13 = param_2[0x2e];
    local_258 = (undefined4 *)local_26c[4];
    if ((local_258[0x10] == 0xb) &&
       (local_258 = (undefined4 *)thunk_FUN_01bed842(local_258[0xf] + 8,"callCommand",0xb),
       in_r12 = extraout_r12, local_258 == (undefined4 *)0x0)) {
      *param_2 = uVar13;
      *(undefined1 *)(param_2 + 3) = 0;
      param_2[1] = local_26c;
LAB_00dc8c28:
      *(undefined1 *)((int)param_2 + 0x67) = 0;
      param_2[0x17] = local_26c;
      param_2[2] = local_26c;
      param_2[0x18] = uVar13;
LAB_00dc8c48:
      *(undefined1 *)((int)param_2 + 0x66) = 0;
      *(undefined2 *)(param_2 + 0x19) = 0;
      FUN_00a203b4(&local_a0,local_26c,"commandName",0xb);
      puVar3 = local_8c;
      puVar9 = local_90;
      puVar5 = local_94;
      if (local_a0 == (undefined4 *)0x2) {
        *(undefined2 *)((int)param_2 + 0x65) = 1;
        FUN_011ce168(&local_a0,param_2[0x17],&DAT_0056df00,4);
        puVar4 = local_90;
        puVar16 = local_a0;
        if (local_a0 == (undefined4 *)0x2) {
          param_2[6] = puVar3;
          *(undefined2 *)(param_2 + 0x19) = 0;
          local_148 = local_94;
          puStack_144 = local_90;
          puStack_140 = local_8c;
          param_2[4] = puVar5;
          param_2[5] = puVar9;
          piVar14 = (int *)param_2[0x18];
          param_2[7] = local_94;
          param_2[8] = local_90;
          param_2[9] = local_8c;
          *(undefined1 *)(param_2 + 0x16) = 0;
          param_2[10] = piVar14;
          param_2[0xb] = param_2[0x17];
LAB_00dc8df0:
          local_24c = param_2 + 4;
          local_e0 = (undefined4 *)*local_24c;
          puStack_dc = (undefined4 *)param_2[5];
          puStack_d8 = (undefined4 *)param_2[6];
          local_d4 = (undefined4 *)param_2[7];
          puStack_d0 = (undefined4 *)param_2[8];
          puStack_cc = (undefined4 *)param_2[9];
          param_2[0xc] = local_e0;
          param_2[0xd] = puStack_dc;
          param_2[0xe] = puStack_d8;
          param_2[0xf] = local_d4;
          param_2[0x10] = puStack_d0;
          param_2[0x11] = puStack_cc;
          *(undefined1 *)(param_2 + 0x15) = 0;
          param_2[0x12] = piVar14;
LAB_00dc8e34:
          *(undefined1 *)((int)param_2 + 0x55) = 1;
          iVar2 = *piVar14;
          *(undefined1 *)((int)param_2 + 0x55) = 0;
          local_a0 = (undefined4 *)param_2[0xc];
          local_9c = (undefined4 *)param_2[0xd];
          local_98 = (undefined4 *)param_2[0xe];
          uVar13 = FUN_010a719c(iVar2 + 8,&local_a0,param_2[0x10],param_2[0x11]);
          puVar6 = &DAT_01c1e2b0;
          param_2[0x13] = uVar13;
          param_2[0x14] = &DAT_01c1e2b0;
          goto LAB_00dc8e80;
        }
        local_25c = local_9c;
        local_264 = local_98;
        local_26c = local_94;
        local_270 = local_8c;
        local_128 = local_88;
        puStack_124 = local_84;
        puStack_120 = local_80;
        puStack_11c = local_7c;
        local_118 = local_78;
        puStack_114 = puStack_74;
        puStack_110 = puStack_70;
        puStack_10c = local_6c;
        puStack_108 = local_68;
        FUN_019bb7e0(puVar5,puVar9);
        *(undefined2 *)((int)param_2 + 0x65) = 0;
      }
      else {
        local_25c = local_9c;
        local_264 = local_98;
        local_26c = local_94;
        local_270 = local_8c;
        local_128 = local_88;
        puStack_124 = local_84;
        puStack_120 = local_80;
        puStack_11c = local_7c;
        local_118 = local_78;
        puStack_114 = puStack_74;
        puStack_110 = puStack_70;
        puStack_10c = local_6c;
        puStack_108 = local_68;
        puVar16 = local_a0;
        puVar4 = local_90;
      }
LAB_00dc8fdc:
      local_24c = param_2 + 4;
      local_258 = (undefined4 *)((int)param_2 + 0x67);
      local_1f8 = local_128;
      puStack_1f4 = puStack_124;
      puStack_1f0 = puStack_120;
      local_1ec = puStack_11c;
      local_1e8 = local_118;
      puStack_1e4 = puStack_114;
      puStack_1e0 = puStack_110;
      puStack_1dc = puStack_10c;
      puStack_1d8 = puStack_108;
      *(undefined1 *)local_258 = 1;
      local_1d0 = local_128;
      puStack_1cc = puStack_124;
      puStack_1c8 = puStack_120;
      puStack_1c4 = puStack_11c;
      local_1c0 = local_118;
      puStack_1bc = puStack_114;
      puStack_1b8 = puStack_110;
      puStack_1b4 = puStack_10c;
      puStack_1b0 = puStack_108;
      FUN_00cce838(local_24c);
      puVar9 = (undefined4 *)param_2[2];
      if (puVar16 == (undefined4 *)0x2) {
        local_22c = local_26c;
        local_230 = local_264;
        local_234 = local_25c;
        local_228 = puVar4;
LAB_00dc90b4:
        puVar3 = (undefined4 *)((uint)&local_238 | 4);
        puVar5 = param_2 + 0xd;
        uVar13 = puVar3[1];
        uVar15 = puVar3[2];
        *puVar5 = *puVar3;
        param_2[0xe] = uVar13;
        param_2[0xf] = uVar15;
        param_2[0x10] = local_228;
        uVar13 = puVar9[5];
        iVar2 = puVar9[4];
        uVar18 = puVar9[6];
        uVar17 = puVar9[7];
        uVar1 = *(undefined1 *)(puVar9 + 8);
        uVar15 = puVar9[1];
        uVar10 = puVar9[2];
        uVar12 = puVar9[3];
        *local_24c = *puVar9;
        param_2[5] = uVar15;
        param_2[6] = uVar10;
        param_2[7] = uVar12;
        param_2[8] = iVar2 + 0x20;
        param_2[9] = uVar13;
        param_2[10] = uVar18;
        param_2[0xb] = uVar17;
        *(undefined1 *)(param_2 + 0xc) = uVar1;
        uVar13 = puVar9[4];
        *(undefined1 *)(param_2 + 0x2d) = 0;
        param_2[0x2c] = uVar13;
        param_2[0x2a] = puVar5;
        param_2[0x2b] = local_24c;
LAB_00dc9158:
        *(undefined1 *)(param_2 + 0x28) = 0;
        param_2[0x26] = local_24c;
        param_2[0x27] = puVar5;
LAB_00dc916c:
        *(undefined2 *)((int)param_2 + 0x5d) = 0x100;
        bVar7 = 1;
        param_2[0x15] = local_24c;
        param_2[0x16] = puVar5;
LAB_00dc9184:
        puVar9 = param_2 + 0x12;
        *puVar9 = 0;
        param_2[0x14] = 0;
        param_2[0x13] = 4;
        *(undefined1 *)(param_2 + 0x17) = 1;
        ppuVar11 = &local_a0;
        FUN_00ca4a2c(ppuVar11,puVar9,local_24c,puVar5);
        local_258 = local_a0;
        if (local_a0 != (undefined4 *)0x2) {
          puVar5 = (undefined4 *)((uint)ppuVar11 | 4);
          local_30 = (undefined4 *)*puVar5;
          puStack_2c = (undefined4 *)puVar5[1];
          puStack_28 = (undefined4 *)puVar5[2];
          local_250 = local_8c;
          local_1f8 = local_88;
          puStack_1f4 = local_84;
          puStack_1f0 = local_80;
          local_1ec = local_7c;
          local_1e8 = local_78;
          puStack_1e4 = puStack_74;
          puStack_1e0 = puStack_70;
          local_26c = local_68;
          local_254 = local_6c;
          unaff_r11 = local_90;
          goto LAB_00dc9298;
        }
        if ((bVar7 & 1) != 0) {
          *(undefined1 *)(param_2 + 0x17) = 0;
          local_f0 = *puVar9;
          uStack_ec = param_2[0x13];
          uStack_e8 = param_2[0x14];
          FUN_009ec520(&local_a0);
          local_128 = local_a0;
          puStack_124 = local_9c;
          puStack_120 = local_98;
          puStack_11c = local_94;
          local_118 = local_90;
          puStack_114 = local_8c;
          puStack_110 = local_88;
          puStack_10c = local_84;
          puStack_108 = local_80;
          local_104 = local_7c;
          puStack_100 = local_78;
          puStack_fc = puStack_74;
          puStack_f8 = puStack_70;
          puStack_f4 = local_6c;
          param_2[0x18] = local_a0;
          param_2[0x19] = local_9c;
          param_2[0x1a] = local_98;
          param_2[0x1b] = local_94;
          param_2[0x1c] = local_90;
          param_2[0x1d] = local_8c;
          param_2[0x1e] = local_88;
          param_2[0x1f] = local_84;
          param_2[0x20] = local_80;
          param_2[0x21] = local_7c;
          param_2[0x22] = local_78;
          param_2[0x23] = puStack_74;
          param_2[0x24] = puStack_70;
          param_2[0x25] = local_6c;
          goto switchD_00dc9510_caseD_3;
        }
        uVar8 = param_2[0x14];
        if (0x2492492 < uVar8) {
          uVar13 = 0;
LAB_00dc9358:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar13,ppuVar11);
        }
        ppuVar11 = (undefined4 **)(uVar8 * 0x38);
        if (ppuVar11 == (undefined4 **)0x0) {
          iVar2 = 8;
          uVar8 = 0;
        }
        else {
          uVar13 = 8;
          iVar2 = FUN_01298504(ppuVar11,8);
          if (iVar2 == 0) goto LAB_00dc9358;
        }
        puVar9 = (undefined4 *)param_2[0x13];
        param_2[0x19] = iVar2;
        puVar5 = puVar9 + param_2[0x14] * 2;
        param_2[0x18] = uVar8;
        param_2[0x1a] = 0;
        *(undefined1 *)(param_2 + 0x17) = 0;
        param_2[0x20] = puVar9;
        param_2[0x21] = puVar9;
        param_2[0x22] = param_2[0x12];
        param_2[0x23] = puVar5;
        while (puVar9 != puVar5) {
          uVar13 = *puVar9;
          iVar2 = puVar9[1];
          param_2[0x21] = puVar9 + 2;
          param_2[0x1e] = uVar13;
          param_2[0x1b] = param_2 + 0x18;
          param_2[0x1c] = uVar13;
          param_2[0x1d] = iVar2;
          param_2[0x1f] = iVar2;
LAB_00dc9990:
          (**(code **)(iVar2 + 0xc))(&local_a0,uVar13,param_3);
          puVar3 = local_64;
          local_254 = local_68;
          puVar9 = local_88;
          unaff_r11 = local_8c;
          puVar5 = local_a0;
          if (local_a0 == (undefined4 *)0x2) {
            uVar1 = 4;
            goto LAB_00dc992c;
          }
          local_258 = local_9c;
          local_40 = local_98;
          puStack_3c = local_94;
          puStack_38 = local_90;
          local_250 = local_88;
          local_60 = local_84;
          puStack_5c = local_80;
          puStack_58 = local_7c;
          local_54 = local_78;
          local_50 = puStack_74;
          local_4c = puStack_70;
          puStack_48 = local_6c;
          FUN_00fe4378(param_2[0x1e],param_2[0x1f]);
          if (((uint)puVar5 & 1) != 0) {
            local_30 = local_40;
            puStack_2c = puStack_3c;
            puStack_28 = puStack_38;
            local_1f8 = local_60;
            puStack_1f4 = puStack_5c;
            puStack_1f0 = puStack_58;
            local_1ec = local_54;
            local_1e8 = local_50;
            puStack_1e4 = local_4c;
            puStack_1e0 = puStack_48;
            FUN_009495dc(param_2 + 0x20);
            FUN_007bc140(param_2 + 0x18);
            local_26c = puVar3;
            goto LAB_00dc9298;
          }
          local_238 = local_40;
          local_234 = puStack_3c;
          local_230 = puStack_38;
          local_228 = puVar9;
          local_22c = unaff_r11;
          local_224 = local_60;
          local_220 = puStack_5c;
          puStack_21c = puStack_58;
          local_218 = local_54;
          local_214 = local_50;
          puStack_210 = local_4c;
          puStack_20c = puStack_48;
          local_204 = puVar3;
          local_208 = local_254;
          piVar14 = (int *)param_2[0x1b];
          iVar2 = piVar14[2];
          if (iVar2 == *piVar14) {
            FUN_006e4ec8(piVar14);
          }
          puVar5 = (undefined4 *)(piVar14[1] + iVar2 * 0x38);
          *puVar5 = local_40;
          puVar5[1] = puStack_3c;
          puVar5[2] = puStack_38;
          puVar5[3] = unaff_r11;
          puVar5[4] = puVar9;
          puVar5[5] = local_60;
          puVar5[6] = puStack_5c;
          puVar5[7] = puStack_58;
          puVar5[8] = local_54;
          puVar5[9] = local_50;
          puVar5[10] = local_4c;
          puVar5[0xb] = puStack_48;
          puVar5[0xc] = local_254;
          puVar5[0xd] = puVar3;
          piVar14[2] = iVar2 + 1;
          puVar5 = (undefined4 *)param_2[0x23];
          puVar9 = (undefined4 *)param_2[0x21];
        }
        param_2[0x1c] = 0;
        FUN_009495dc(param_2 + 0x20);
        local_b0 = (undefined4 *)param_2[0x18];
        puStack_ac = (undefined4 *)param_2[0x19];
        puStack_a8 = (undefined4 *)param_2[0x1a];
        local_254 = param_3;
LAB_00dc9b00:
        FUN_006cac18(&local_a0,&local_b0);
        uVar15 = 0;
        local_30 = local_a0;
        puStack_2c = local_9c;
        puStack_28 = local_98;
        local_1f8 = local_8c;
        puStack_1f4 = local_88;
        puStack_1f0 = local_84;
        local_1ec = local_80;
        local_1e8 = local_7c;
        puStack_1e4 = local_78;
        puStack_1e0 = puStack_74;
        *(undefined1 *)(param_2 + 0x17) = 0;
        local_250 = local_90;
        unaff_r11 = local_94;
        goto LAB_00dc92c8;
      }
      local_94 = local_26c;
      local_8c = local_270;
      local_98 = local_264;
      local_9c = local_25c;
      local_88 = local_1d0;
      local_84 = puStack_1cc;
      local_80 = puStack_1c8;
      local_7c = puStack_1c4;
      local_78 = local_1c0;
      puStack_74 = puStack_1bc;
      puStack_70 = puStack_1b8;
      local_6c = puStack_1b4;
      local_68 = puStack_1b0;
      local_a0 = puVar16;
      local_90 = puVar4;
      FUN_009ed8c0(&local_238);
      if (local_238 == (undefined4 *)0x2) {
        puVar9 = (undefined4 *)param_2[2];
        goto LAB_00dc90b4;
      }
      local_258 = local_238;
      puVar5 = (undefined4 *)((uint)&local_238 | 4);
      uVar15 = 1;
      local_158 = (undefined4 *)*puVar5;
      puStack_154 = (undefined4 *)puVar5[1];
      puStack_150 = (undefined4 *)puVar5[2];
      local_178 = local_220;
      puStack_174 = puStack_21c;
      puStack_170 = local_218;
      local_16c = local_214;
      puStack_168 = puStack_210;
      puStack_164 = puStack_20c;
      puStack_160 = local_208;
      local_254 = local_204;
      local_26c = local_200;
      local_250 = local_224;
      unaff_r11 = local_228;
LAB_00dc93c0:
      *(undefined1 *)(param_2 + 3) = 1;
      FUN_00dc8a54(param_2);
      in_r12 = local_254;
    }
    else {
      local_250 = (undefined4 *)0x80000007;
    }
    *param_1 = uVar15;
    param_1[1] = local_258;
    param_1[2] = local_158;
    param_1[3] = puStack_154;
    param_1[4] = puStack_150;
    param_1[5] = unaff_r11;
    param_1[6] = local_250;
    param_1[7] = local_178;
    param_1[8] = puStack_174;
    param_1[9] = puStack_170;
    param_1[10] = local_16c;
    param_1[0xb] = puStack_168;
    param_1[0xc] = puStack_164;
    param_1[0xd] = puStack_160;
    uVar1 = 1;
    param_1[0xe] = in_r12;
    param_1[0xf] = local_26c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1dff8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1dff8);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 3)) {
    case 0:
      uVar13 = *param_2;
      local_26c = (undefined4 *)param_2[1];
      goto LAB_00dc8c28;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1dff8);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1dff8);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x67)) {
      case 0:
        local_26c = (undefined4 *)param_2[0x17];
        goto LAB_00dc8c48;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1dff8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1dff8);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x16)) {
      case 0:
        piVar14 = (int *)param_2[10];
        goto LAB_00dc8df0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1dff8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1dff8);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x15)) {
      case 0:
        piVar14 = (int *)param_2[0x12];
        goto LAB_00dc8e34;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1dff8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1dff8);
      case 3:
        uVar13 = param_2[0x13];
        puVar6 = (undefined *)param_2[0x14];
      }
LAB_00dc8e80:
      local_25c = param_2 + 0xc;
      local_24c = param_2 + 4;
      local_270 = param_2 + 0x16;
      (**(code **)(puVar6 + 0xc))(&local_a0,uVar13,param_3);
      puVar3 = local_8c;
      puVar9 = local_90;
      puVar5 = local_a0;
      if (local_a0 != (undefined4 *)0x80000017) {
        local_138 = local_9c;
        puStack_134 = local_98;
        puStack_130 = local_94;
        FUN_00fe4378(param_2[0x13],param_2[0x14]);
        if (puVar5 != (undefined4 *)&DAT_80000016) {
          local_60 = puVar5;
          puVar4 = (undefined4 *)((uint)&local_60 | 4);
          *puVar4 = local_138;
          puVar4[1] = puStack_134;
          puVar4[2] = puStack_130;
          local_4c = puVar3;
          local_50 = puVar9;
          local_9c = puStack_5c;
          local_98 = puStack_58;
          local_94 = local_54;
          local_a0 = puVar5;
          local_90 = puVar9;
          local_8c = puVar3;
          FUN_00dc9cdc(&local_1a4,&local_a0);
        }
        else {
          puVar9 = (undefined4 *)((uint)&local_60 | 4);
          FUN_00dc9c44(puVar9,&local_138);
          local_1a4 = (undefined4 *)*puVar9;
          puStack_1a0 = (undefined4 *)puVar9[1];
          local_19c = (undefined4 *)puVar9[2];
        }
        puVar4 = local_19c;
        local_26c = puStack_1a0;
        local_264 = local_1a4;
        FUN_006a41c0(param_2 + 0xf);
        *(undefined1 *)(param_2 + 0x15) = 1;
        FUN_00cce7ac(local_25c);
        *(undefined1 *)local_270 = 1;
        FUN_00cce7fc(local_24c);
        *(undefined1 *)((int)param_2 + 0x66) = 0;
        *(undefined2 *)(param_2 + 0x19) = 0;
        puVar16 = (undefined4 *)0x2;
        local_25c = (undefined4 *)(uint)(puVar5 != (undefined4 *)&DAT_80000016);
        goto LAB_00dc8fdc;
      }
      uVar1 = 3;
      *(undefined1 *)local_270 = 3;
      *(undefined1 *)(param_2 + 0x15) = 3;
      *(undefined1 *)((int)param_2 + 0x67) = 3;
      break;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x2d)) {
      case 0:
        puVar5 = (undefined4 *)param_2[0x2a];
        local_24c = (undefined4 *)param_2[0x2b];
        goto LAB_00dc9158;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c15ffc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c15ffc);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x28)) {
      case 0:
        local_24c = (undefined4 *)param_2[0x26];
        puVar5 = (undefined4 *)param_2[0x27];
        goto LAB_00dc916c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b3c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b3c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x5d)) {
      case 0:
        local_24c = (undefined4 *)param_2[0x15];
        puVar5 = (undefined4 *)param_2[0x16];
        bVar7 = *(byte *)((int)param_2 + 0x5e);
        goto LAB_00dc9184;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b4c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b4c);
      case 4:
        uVar13 = param_2[0x1e];
        iVar2 = param_2[0x1f];
        goto LAB_00dc9990;
      }
switchD_00dc9510_caseD_3:
      FUN_009ecbe0(&local_a0,param_2 + 0x18,param_3);
      puVar3 = local_68;
      puVar9 = local_6c;
      local_250 = local_8c;
      unaff_r11 = local_90;
      puVar5 = local_a0;
      if (local_a0 != (undefined4 *)&DAT_00000003) {
        local_258 = local_a0;
        puVar4 = (undefined4 *)((uint)&local_a0 | 4);
        local_c0 = (undefined4 *)*puVar4;
        puStack_bc = (undefined4 *)puVar4[1];
        puStack_b8 = (undefined4 *)puVar4[2];
        local_254 = local_90;
        local_e0 = local_88;
        puStack_dc = local_84;
        puStack_d8 = local_80;
        local_d4 = local_7c;
        puStack_d0 = local_78;
        puStack_cc = puStack_74;
        puStack_c8 = puStack_70;
        FUN_00db1814(param_2 + 0x18);
        if (puVar5 == (undefined4 *)0x2) {
          local_b0 = local_c0;
          puStack_ac = puStack_bc;
          puStack_a8 = puStack_b8;
          goto LAB_00dc9b00;
        }
        local_1f8 = local_e0;
        puStack_1f4 = puStack_dc;
        puStack_1f0 = puStack_d8;
        local_1ec = local_d4;
        local_1e8 = puStack_d0;
        puStack_1e4 = puStack_cc;
        puStack_1e0 = puStack_c8;
        local_30 = local_c0;
        puStack_2c = puStack_bc;
        puStack_28 = puStack_b8;
        local_26c = puVar3;
        local_254 = puVar9;
LAB_00dc9298:
        local_25c = param_2 + 0x12;
        if (*(char *)(param_2 + 0x17) != '\0') {
          FUN_00b7d620(local_25c);
        }
        uVar15 = 1;
        *(undefined1 *)(param_2 + 0x17) = 0;
LAB_00dc92c8:
        local_25c = param_2 + 0x12;
        local_264 = (undefined4 *)((int)param_2 + 0x5d);
        local_188 = local_30;
        puStack_184 = puStack_2c;
        puStack_180 = puStack_28;
        local_1a8 = local_1f8;
        local_1a4 = puStack_1f4;
        puStack_1a0 = puStack_1f0;
        local_19c = local_1ec;
        puStack_198 = local_1e8;
        puStack_194 = puStack_1e4;
        puStack_190 = puStack_1e0;
        *(undefined1 *)local_264 = 1;
        FUN_00db1dcc(local_25c);
        *(undefined1 *)(param_2 + 0x2d) = 1;
        *(undefined1 *)(param_2 + 0x28) = 1;
        local_158 = local_188;
        puStack_154 = puStack_184;
        puStack_150 = puStack_180;
        local_178 = local_1a8;
        puStack_174 = local_1a4;
        puStack_170 = puStack_1a0;
        local_16c = local_19c;
        puStack_168 = puStack_198;
        puStack_164 = puStack_194;
        puStack_160 = puStack_190;
        FUN_019bb7e0(param_2[0xe],param_2[0xf]);
        goto LAB_00dc93c0;
      }
      uVar1 = 3;
LAB_00dc992c:
      local_264 = (undefined4 *)((int)param_2 + 0x5d);
      local_270 = param_2 + 0x2d;
      local_274 = param_2 + 0x28;
      *(undefined1 *)local_264 = uVar1;
      *(undefined1 *)local_270 = 3;
      *(undefined1 *)local_274 = 3;
      uVar1 = 4;
    }
    local_268 = param_2 + 3;
    *(undefined1 *)local_268 = uVar1;
    *param_1 = 2;
    uVar1 = 3;
  }
  *(undefined1 *)(param_2 + 0x31) = uVar1;
  return;
}

