// FUN_00c0119c @ 00c0119c size=13432 calls_out=39 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c0119c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  int *extraout_r2;
  byte bVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  int **ppiVar20;
  undefined4 uVar21;
  int *unaff_r8;
  undefined4 uVar22;
  int *piVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 *local_264;
  undefined4 *local_260;
  undefined4 *local_25c;
  undefined4 *local_258;
  undefined4 *local_254;
  undefined4 *local_250;
  int *local_238;
  int *local_230;
  int *local_22c;
  int *local_228;
  int *local_224;
  int *local_220;
  int *local_21c;
  int *local_218;
  int *piStack_214;
  int *piStack_210;
  int *local_20c;
  int *piStack_208;
  int *piStack_204;
  int *piStack_200;
  int *local_1f8;
  int *local_1f4;
  int *local_1f0;
  int *piStack_1ec;
  int *local_1e8;
  int *piStack_1e4;
  int *piStack_1e0;
  int *local_1dc;
  int *local_1d8;
  int *piStack_1d4;
  int *piStack_1d0;
  int *piStack_1cc;
  int *local_1c8;
  int *local_1c4;
  int *piStack_1c0;
  int *piStack_1bc;
  int *piStack_1b8;
  int *piStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  int *local_1a0;
  int *local_19c;
  int *local_198;
  int *local_194;
  int *local_190;
  int *local_18c;
  int *local_188;
  int *piStack_184;
  int *local_180;
  int *local_17c;
  int *local_178;
  int *piStack_174;
  int *piStack_170;
  int *local_16c;
  int *local_168;
  undefined4 local_160;
  int *local_15c;
  int *local_158;
  int *local_154;
  int *piStack_150;
  int *piStack_14c;
  int *piStack_148;
  int *local_140;
  int *piStack_13c;
  int *piStack_138;
  int *local_134;
  int *local_130;
  int *piStack_12c;
  int *piStack_128;
  int *local_120;
  int *local_11c;
  int *local_118;
  int *local_114;
  int *piStack_110;
  int *local_10c;
  int *piStack_108;
  int *piStack_104;
  undefined4 uStack_100;
  int *local_f8;
  int *local_f4;
  int *local_f0;
  int *local_ec;
  int *local_e8;
  int *local_e4;
  int *local_e0;
  int *local_dc;
  undefined4 local_d8;
  int *local_d0;
  int *piStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  int *local_c0;
  int *piStack_bc;
  int *piStack_b8;
  int *piStack_b4;
  int *local_b0;
  int *local_ac;
  int *piStack_a8;
  int *piStack_a4;
  int *piStack_a0;
  int *piStack_9c;
  int *local_98;
  int *local_94;
  int *local_90;
  int *local_88;
  int *piStack_84;
  int *piStack_80;
  int *local_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int *local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *piStack_3c;
  int *piStack_38;
  int *local_34;
  int *local_30;
  int *piStack_2c;
  
  puVar12 = (undefined4 *)((uint)&local_1a0 | 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    uVar17 = *param_2;
    iVar19 = param_2[1];
    param_2[2] = iVar19;
    uVar8 = FUN_00a215e0(*(undefined4 *)(*(int *)(iVar19 + 0x10) + 0x3c),
                         *(undefined4 *)(*(int *)(iVar19 + 0x10) + 0x40));
    local_21c = (int *)0x80000007;
    uVar22 = 0;
    piVar10 = extraout_r2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar8) {
    case 0:
      param_2[4] = uVar17;
      param_2[5] = iVar19;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_00c01328:
      param_2[8] = uVar17;
      param_2[9] = iVar19;
      param_2[6] = iVar19;
      *(undefined1 *)(param_2 + 0xf) = 0;
LAB_00c01450:
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[10] = uVar17;
      param_2[0xb] = iVar19;
LAB_00c01460:
      param_2[0xc] = iVar19;
      param_2[0xd] = 0;
LAB_00c0146c:
      puVar15 = param_2 + 8;
      puVar11 = param_2 + 0xd;
      iVar19 = FUN_011b21e4(iVar19);
      piVar10 = *(int **)(iVar19 + 0x10);
      do {
        iVar13 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar13 + 1;
      if (iVar13 < 0) {
LAB_00c03d00:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xc03d00);
        (*pcVar1)();
      }
      FUN_006666fc(&local_68,*(undefined4 *)(iVar19 + 4),*(undefined4 *)(iVar19 + 8));
      piVar4 = local_60;
      piVar3 = local_64;
      piVar23 = local_68;
      local_5c = (int *)CONCAT31(local_5c._1_3_,*(undefined1 *)(iVar19 + 0xc));
      local_1a0 = local_64;
      local_19c = local_60;
      local_198 = local_5c;
      *(undefined1 *)puVar11 = 1;
      if (local_68 != (int *)&DAT_80000000) {
        local_d0 = local_64;
        piStack_cc = local_60;
        piStack_c8 = local_5c;
        *(undefined1 *)(param_2 + 0xf) = 1;
        *(undefined1 *)(param_2 + 0xe) = 1;
        local_68 = local_64;
        local_64 = local_60;
        local_60 = local_5c;
        param_2[8] = piVar23;
        param_2[9] = piVar3;
        param_2[10] = piVar4;
        param_2[0xb] = local_5c;
        puVar9 = (undefined4 *)param_2[6];
        param_2[0xc] = piVar10;
        uVar21 = puVar9[7];
        iVar19 = puVar9[4];
        uVar25 = puVar9[5];
        uVar26 = puVar9[6];
        uVar8 = *(undefined1 *)(puVar9 + 8);
        uVar17 = puVar9[1];
        uVar22 = puVar9[2];
        uVar24 = puVar9[3];
        *puVar11 = *puVar9;
        param_2[0xe] = uVar17;
        param_2[0xf] = uVar22;
        param_2[0x10] = uVar24;
        param_2[0x11] = iVar19 + 0x20;
        param_2[0x12] = uVar25;
        param_2[0x13] = uVar26;
        param_2[0x14] = uVar21;
        *(undefined1 *)(param_2 + 0x15) = uVar8;
        uVar17 = puVar9[4];
        *(undefined1 *)(param_2 + 0x31) = 0;
        param_2[0x30] = uVar17;
        param_2[0x2e] = puVar15;
        param_2[0x2f] = puVar11;
        goto LAB_00c016b8;
      }
      uVar8 = 3;
      *(undefined1 *)(param_2 + 0xf) = 3;
      *(undefined1 *)(param_2 + 0xe) = 3;
LAB_00c046a0:
      local_254 = param_2 + 7;
      *(undefined1 *)local_254 = uVar8;
      *param_1 = 2;
      uVar8 = 3;
      goto LAB_00c02ce0;
    case 1:
      param_2[4] = uVar17;
      param_2[5] = iVar19;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_00c02080:
      param_2[8] = uVar17;
      param_2[6] = iVar19;
      param_2[9] = iVar19;
      *(undefined1 *)(param_2 + 0xd) = 0;
LAB_00c0209c:
      param_2[10] = uVar17;
      param_2[0xb] = iVar19;
      *(undefined1 *)(param_2 + 0xc) = 0;
LAB_00c020a8:
      puVar11 = param_2 + 8;
      iVar19 = FUN_011b21e4(iVar19);
      if ((*(char *)(iVar19 + 0xc) != '\0') || (FUN_00aba2c0(&local_120,0), local_120 == (int *)0x2)
         ) {
        local_64 = *(int **)(iVar19 + 0x20);
        do {
          iVar19 = *local_64;
          bVar2 = (bool)hasExclusiveAccess(local_64);
        } while (!bVar2);
        *local_64 = iVar19 + 1;
        if (iVar19 < 0) goto LAB_00c03d00;
        *(undefined1 *)(param_2 + 0xc) = 1;
        local_68 = (int *)0x2;
        local_1e8 = local_60;
        piStack_1e4 = local_5c;
        piStack_1e0 = local_58;
        local_1dc = local_54;
        local_1d8 = local_50;
        piStack_1d4 = local_4c;
        piStack_1d0 = local_48;
        piStack_1cc = local_44;
        local_1c8 = local_40;
        local_1c4 = piStack_3c;
        piStack_1c0 = piStack_38;
        piStack_1bc = local_34;
        piStack_1b8 = local_30;
        *(undefined1 *)(param_2 + 0xd) = 1;
        piVar10 = local_64;
        local_d0 = local_1e8;
        piStack_cc = piStack_1e4;
        piStack_c8 = piStack_1e0;
        piStack_c4 = local_1dc;
        local_c0 = local_1d8;
        piStack_bc = piStack_1d4;
        piStack_b8 = piStack_1d0;
        piStack_b4 = piStack_1cc;
        local_b0 = local_1c8;
        local_ac = local_1c4;
        piStack_a8 = piStack_1c0;
        piStack_a4 = piStack_1bc;
        piStack_a0 = piStack_1b8;
LAB_00c02158:
        puVar9 = (undefined4 *)param_2[6];
        puVar15 = param_2 + 9;
        param_2[8] = piVar10;
        uVar21 = puVar9[7];
        iVar19 = puVar9[4];
        uVar25 = puVar9[5];
        uVar26 = puVar9[6];
        uVar8 = *(undefined1 *)(puVar9 + 8);
        uVar17 = puVar9[1];
        uVar22 = puVar9[2];
        uVar24 = puVar9[3];
        *puVar15 = *puVar9;
        param_2[10] = uVar17;
        param_2[0xb] = uVar22;
        param_2[0xc] = uVar24;
        param_2[0xd] = iVar19 + 0x20;
        param_2[0xe] = uVar25;
        param_2[0xf] = uVar26;
        param_2[0x10] = uVar21;
        *(undefined1 *)(param_2 + 0x11) = uVar8;
        uVar17 = puVar9[4];
        *(undefined1 *)(param_2 + 0x2d) = 0;
        param_2[0x2c] = uVar17;
        param_2[0x2a] = puVar11;
        param_2[0x2b] = puVar15;
LAB_00c021c8:
        *(undefined1 *)(param_2 + 0x28) = 0;
        param_2[0x26] = puVar15;
        param_2[0x27] = puVar11;
LAB_00c021e0:
        *(undefined2 *)((int)param_2 + 0x5d) = 0x100;
        bVar16 = 1;
        param_2[0x15] = puVar15;
        param_2[0x16] = puVar11;
LAB_00c021fc:
        puVar9 = param_2 + 0x12;
        *puVar9 = 0;
        param_2[0x14] = 0;
        param_2[0x13] = 4;
        *(undefined1 *)(param_2 + 0x17) = 1;
        ppiVar20 = &local_68;
        FUN_00d063a4(ppiVar20,puVar9,puVar15,puVar11);
        if (local_68 == (int *)0x2) {
          if ((bVar16 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x17) = 0;
            local_98 = (int *)*puVar9;
            local_94 = (int *)param_2[0x13];
            local_90 = (int *)param_2[0x14];
            FUN_009ec520(&local_68);
            local_d0 = local_68;
            piStack_cc = local_64;
            piStack_c8 = local_60;
            piStack_c4 = local_5c;
            local_c0 = local_58;
            piStack_bc = local_54;
            piStack_b8 = local_50;
            piStack_b4 = local_4c;
            local_b0 = local_48;
            local_ac = local_44;
            piStack_a8 = local_40;
            piStack_a4 = piStack_3c;
            piStack_a0 = piStack_38;
            piStack_9c = local_34;
            param_2[0x18] = local_68;
            param_2[0x19] = local_64;
            param_2[0x1a] = local_60;
            param_2[0x1b] = local_5c;
            param_2[0x1c] = local_58;
            param_2[0x1d] = local_54;
            param_2[0x1e] = local_50;
            param_2[0x1f] = local_4c;
            param_2[0x20] = local_48;
            param_2[0x21] = local_44;
            param_2[0x22] = local_40;
            param_2[0x23] = piStack_3c;
            param_2[0x24] = piStack_38;
            param_2[0x25] = local_34;
            goto switchD_00c036b4_caseD_3;
          }
          uVar18 = param_2[0x14];
          if (0x2492492 < uVar18) {
            uVar17 = 0;
LAB_00c02408:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar17,ppiVar20);
          }
          ppiVar20 = (int **)(uVar18 * 0x38);
          if (ppiVar20 == (int **)0x0) {
            iVar19 = 8;
            uVar18 = 0;
          }
          else {
            uVar17 = 8;
            iVar19 = FUN_01298504(ppiVar20,8);
            if (iVar19 == 0) goto LAB_00c02408;
          }
          puVar15 = (undefined4 *)param_2[0x13];
          param_2[0x19] = iVar19;
          puVar11 = puVar15 + param_2[0x14] * 2;
          param_2[0x18] = uVar18;
          param_2[0x1a] = 0;
          *(undefined1 *)(param_2 + 0x17) = 0;
          param_2[0x20] = puVar15;
          param_2[0x21] = puVar15;
          param_2[0x22] = param_2[0x12];
          param_2[0x23] = puVar11;
          while (puVar15 != puVar11) {
            uVar17 = *puVar15;
            iVar19 = puVar15[1];
            param_2[0x21] = puVar15 + 2;
            param_2[0x1e] = uVar17;
            param_2[0x1b] = param_2 + 0x18;
            param_2[0x1c] = uVar17;
            param_2[0x1d] = iVar19;
            param_2[0x1f] = iVar19;
LAB_00c04b74:
            (**(code **)(iVar19 + 0xc))(&local_68,uVar17,param_3);
            piVar7 = piStack_2c;
            piVar6 = local_30;
            piVar5 = local_50;
            piVar4 = local_54;
            piVar3 = local_58;
            piVar23 = local_5c;
            unaff_r8 = local_60;
            piVar10 = local_68;
            if (local_68 == (int *)0x2) {
              uVar8 = 4;
              goto LAB_00c04720;
            }
            local_238 = local_64;
            local_228 = local_54;
            local_21c = local_50;
            local_220 = local_58;
            local_224 = local_5c;
            local_120 = local_4c;
            local_11c = local_48;
            local_118 = local_44;
            local_114 = local_40;
            piStack_110 = piStack_3c;
            local_10c = piStack_38;
            piStack_108 = local_34;
            local_22c = local_30;
            local_230 = piStack_2c;
            FUN_01139b38(param_2[0x1e],param_2[0x1f]);
            if (((uint)piVar10 & 1) != 0) {
              local_f8 = local_120;
              local_f4 = local_11c;
              local_f0 = local_118;
              local_ec = local_114;
              local_e8 = piStack_110;
              local_e4 = local_10c;
              local_e0 = piStack_108;
              FUN_009495dc(param_2 + 0x20);
              FUN_007bc140(param_2 + 0x18);
              goto LAB_00c02324;
            }
            *puVar12 = piVar23;
            puVar12[1] = piVar3;
            local_190 = piVar5;
            local_194 = piVar4;
            local_1a0 = unaff_r8;
            local_18c = local_120;
            local_188 = local_11c;
            piStack_184 = local_118;
            local_180 = local_114;
            local_17c = piStack_110;
            local_178 = local_10c;
            piStack_174 = piStack_108;
            piVar10 = (int *)param_2[0x1b];
            puVar12[0xb] = piVar6;
            puVar12[0xc] = piVar7;
            iVar19 = piVar10[2];
            if (iVar19 == *piVar10) {
              FUN_006e4ec8(piVar10);
            }
            puVar11 = (undefined4 *)(piVar10[1] + iVar19 * 0x38);
            *puVar11 = unaff_r8;
            puVar11[1] = piVar23;
            puVar11[2] = piVar3;
            puVar11[3] = piVar4;
            puVar11[4] = piVar5;
            puVar11[5] = local_120;
            puVar11[6] = local_11c;
            puVar11[7] = local_118;
            puVar11[8] = local_114;
            puVar11[9] = piStack_110;
            puVar11[10] = local_10c;
            puVar11[0xb] = piStack_108;
            puVar11[0xc] = piVar6;
            puVar11[0xd] = piVar7;
            piVar10[2] = iVar19 + 1;
            puVar11 = (undefined4 *)param_2[0x23];
            puVar15 = (undefined4 *)param_2[0x21];
          }
          param_2[0x1c] = 0;
          FUN_009495dc(param_2 + 0x20);
          local_1f8 = (int *)param_2[0x18];
          local_1f4 = (int *)param_2[0x19];
          local_1f0 = (int *)param_2[0x1a];
          goto LAB_00c04cfc;
        }
        local_238 = local_68;
        local_228 = local_58;
        local_21c = local_54;
        local_220 = local_5c;
        local_224 = local_60;
        local_f8 = local_50;
        local_f4 = local_4c;
        local_f0 = local_48;
        local_ec = local_44;
        local_e8 = local_40;
        local_e4 = piStack_3c;
        local_e0 = piStack_38;
        local_22c = local_34;
        local_230 = local_30;
        unaff_r8 = local_64;
        goto LAB_00c02324;
      }
      local_f0 = local_118;
      local_ec = local_114;
      local_e8 = piStack_110;
      local_e4 = local_10c;
      local_e0 = piStack_108;
      local_dc = piStack_104;
      local_d8 = uStack_100;
      *(undefined1 *)(param_2 + 0xc) = 1;
      local_f4 = local_11c;
      local_f8 = local_120;
      FUN_006bd898(&local_68,&local_f8,**(undefined4 **)(param_2[9] + 0x10),
                   (*(undefined4 **)(param_2[9] + 0x10))[1]);
      local_d0 = local_60;
      piStack_cc = local_5c;
      piStack_c8 = local_58;
      piStack_c4 = local_54;
      local_c0 = local_50;
      piStack_bc = local_4c;
      piStack_b8 = local_48;
      piStack_b4 = local_44;
      local_b0 = local_40;
      local_ac = piStack_3c;
      piStack_a8 = piStack_38;
      piStack_a4 = local_34;
      piStack_a0 = local_30;
      *(undefined1 *)(param_2 + 0xd) = 1;
      if (local_68 == (int *)&DAT_00000003) {
        uVar8 = 3;
        goto LAB_00c04744;
      }
      local_1e8 = local_60;
      piStack_1e4 = local_5c;
      piStack_1e0 = local_58;
      local_1dc = local_54;
      local_1d8 = local_50;
      piStack_1d4 = local_4c;
      piStack_1d0 = local_48;
      piStack_1cc = local_44;
      local_1c8 = local_40;
      local_1c4 = piStack_3c;
      piStack_1c0 = piStack_38;
      piStack_1bc = local_34;
      piStack_1b8 = local_30;
      piVar10 = local_64;
      if ((local_68 == (int *)0x2) ||
         (FUN_009ed8c0(&local_1a0,param_2[6],&local_68), piVar10 = local_19c,
         local_1a0 == (int *)0x2)) goto LAB_00c02158;
      local_238 = local_1a0;
      uVar22 = 1;
      local_228 = local_190;
      local_21c = local_18c;
      local_220 = local_194;
      local_224 = local_198;
      local_140 = local_188;
      piStack_13c = piStack_184;
      piStack_138 = local_180;
      local_134 = local_17c;
      local_130 = local_178;
      piStack_12c = piStack_174;
      piStack_128 = piStack_170;
      local_22c = local_16c;
      local_230 = local_168;
      unaff_r8 = local_19c;
      goto LAB_00c023c0;
    case 2:
      param_2[4] = uVar17;
      param_2[5] = iVar19;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_00c024cc:
      param_2[8] = uVar17;
      param_2[6] = iVar19;
      param_2[9] = iVar19;
      *(undefined1 *)(param_2 + 0xd) = 0;
LAB_00c024e8:
      param_2[10] = uVar17;
      param_2[0xb] = iVar19;
      *(undefined1 *)(param_2 + 0xc) = 0;
LAB_00c024f4:
      puVar11 = param_2 + 8;
      iVar19 = FUN_011b21e4(iVar19);
      if ((*(char *)(iVar19 + 0xc) != '\0') || (FUN_00aba2c0(&local_120,0), local_120 == (int *)0x2)
         ) {
        local_64 = *(int **)(iVar19 + 0x14);
        do {
          iVar19 = *local_64;
          bVar2 = (bool)hasExclusiveAccess(local_64);
        } while (!bVar2);
        *local_64 = iVar19 + 1;
        if (iVar19 < 0) goto LAB_00c03d00;
        *(undefined1 *)(param_2 + 0xc) = 1;
        local_68 = (int *)0x2;
        local_1e8 = local_60;
        piStack_1e4 = local_5c;
        piStack_1e0 = local_58;
        local_1dc = local_54;
        local_1d8 = local_50;
        piStack_1d4 = local_4c;
        piStack_1d0 = local_48;
        piStack_1cc = local_44;
        local_1c8 = local_40;
        local_1c4 = piStack_3c;
        piStack_1c0 = piStack_38;
        piStack_1bc = local_34;
        piStack_1b8 = local_30;
        *(undefined1 *)(param_2 + 0xd) = 1;
        piVar10 = local_64;
        local_d0 = local_1e8;
        piStack_cc = piStack_1e4;
        piStack_c8 = piStack_1e0;
        piStack_c4 = local_1dc;
        local_c0 = local_1d8;
        piStack_bc = piStack_1d4;
        piStack_b8 = piStack_1d0;
        piStack_b4 = piStack_1cc;
        local_b0 = local_1c8;
        local_ac = local_1c4;
        piStack_a8 = piStack_1c0;
        piStack_a4 = piStack_1bc;
        piStack_a0 = piStack_1b8;
LAB_00c025a4:
        puVar9 = (undefined4 *)param_2[6];
        puVar15 = param_2 + 9;
        param_2[8] = piVar10;
        uVar21 = puVar9[7];
        iVar19 = puVar9[4];
        uVar25 = puVar9[5];
        uVar26 = puVar9[6];
        uVar8 = *(undefined1 *)(puVar9 + 8);
        uVar17 = puVar9[1];
        uVar22 = puVar9[2];
        uVar24 = puVar9[3];
        *puVar15 = *puVar9;
        param_2[10] = uVar17;
        param_2[0xb] = uVar22;
        param_2[0xc] = uVar24;
        param_2[0xd] = iVar19 + 0x20;
        param_2[0xe] = uVar25;
        param_2[0xf] = uVar26;
        param_2[0x10] = uVar21;
        *(undefined1 *)(param_2 + 0x11) = uVar8;
        uVar17 = puVar9[4];
        *(undefined1 *)(param_2 + 0x2d) = 0;
        param_2[0x2c] = uVar17;
        param_2[0x2a] = puVar11;
        param_2[0x2b] = puVar15;
LAB_00c02614:
        *(undefined1 *)(param_2 + 0x28) = 0;
        param_2[0x26] = puVar15;
        param_2[0x27] = puVar11;
LAB_00c0262c:
        *(undefined2 *)((int)param_2 + 0x5d) = 0x100;
        bVar16 = 1;
        param_2[0x15] = puVar15;
        param_2[0x16] = puVar11;
LAB_00c02648:
        puVar9 = param_2 + 0x12;
        *puVar9 = 0;
        param_2[0x14] = 0;
        param_2[0x13] = 4;
        *(undefined1 *)(param_2 + 0x17) = 1;
        ppiVar20 = &local_68;
        FUN_00cff76c(ppiVar20,puVar9,puVar15,puVar11);
        if (local_68 == (int *)0x2) {
          if ((bVar16 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x17) = 0;
            local_98 = (int *)*puVar9;
            local_94 = (int *)param_2[0x13];
            local_90 = (int *)param_2[0x14];
            FUN_009ec520(&local_68);
            local_d0 = local_68;
            piStack_cc = local_64;
            piStack_c8 = local_60;
            piStack_c4 = local_5c;
            local_c0 = local_58;
            piStack_bc = local_54;
            piStack_b8 = local_50;
            piStack_b4 = local_4c;
            local_b0 = local_48;
            local_ac = local_44;
            piStack_a8 = local_40;
            piStack_a4 = piStack_3c;
            piStack_a0 = piStack_38;
            piStack_9c = local_34;
            param_2[0x18] = local_68;
            param_2[0x19] = local_64;
            param_2[0x1a] = local_60;
            param_2[0x1b] = local_5c;
            param_2[0x1c] = local_58;
            param_2[0x1d] = local_54;
            param_2[0x1e] = local_50;
            param_2[0x1f] = local_4c;
            param_2[0x20] = local_48;
            param_2[0x21] = local_44;
            param_2[0x22] = local_40;
            param_2[0x23] = piStack_3c;
            param_2[0x24] = piStack_38;
            param_2[0x25] = local_34;
            goto switchD_00c036f0_caseD_3;
          }
          uVar18 = param_2[0x14];
          if (0x2492492 < uVar18) {
            uVar17 = 0;
LAB_00c02854:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar17,ppiVar20);
          }
          ppiVar20 = (int **)(uVar18 * 0x38);
          if (ppiVar20 == (int **)0x0) {
            iVar19 = 8;
            uVar18 = 0;
          }
          else {
            uVar17 = 8;
            iVar19 = FUN_01298504(ppiVar20,8);
            if (iVar19 == 0) goto LAB_00c02854;
          }
          puVar15 = (undefined4 *)param_2[0x13];
          param_2[0x19] = iVar19;
          puVar11 = puVar15 + param_2[0x14] * 2;
          param_2[0x18] = uVar18;
          param_2[0x1a] = 0;
          *(undefined1 *)(param_2 + 0x17) = 0;
          param_2[0x20] = puVar15;
          param_2[0x21] = puVar15;
          param_2[0x22] = param_2[0x12];
          param_2[0x23] = puVar11;
          while (puVar15 != puVar11) {
            uVar17 = *puVar15;
            iVar19 = puVar15[1];
            param_2[0x21] = puVar15 + 2;
            param_2[0x1e] = uVar17;
            param_2[0x1b] = param_2 + 0x18;
            param_2[0x1c] = uVar17;
            param_2[0x1d] = iVar19;
            param_2[0x1f] = iVar19;
LAB_00c04e04:
            (**(code **)(iVar19 + 0xc))(&local_68,uVar17,param_3);
            piVar7 = piStack_2c;
            piVar6 = local_30;
            piVar5 = local_50;
            piVar4 = local_54;
            piVar3 = local_58;
            piVar23 = local_5c;
            unaff_r8 = local_60;
            piVar10 = local_68;
            if (local_68 == (int *)0x2) {
              uVar8 = 4;
              goto LAB_00c0475c;
            }
            local_238 = local_64;
            local_228 = local_54;
            local_21c = local_50;
            local_220 = local_58;
            local_224 = local_5c;
            local_120 = local_4c;
            local_11c = local_48;
            local_118 = local_44;
            local_114 = local_40;
            piStack_110 = piStack_3c;
            local_10c = piStack_38;
            piStack_108 = local_34;
            local_22c = local_30;
            local_230 = piStack_2c;
            FUN_01139b38(param_2[0x1e],param_2[0x1f]);
            if (((uint)piVar10 & 1) != 0) {
              local_f8 = local_120;
              local_f4 = local_11c;
              local_f0 = local_118;
              local_ec = local_114;
              local_e8 = piStack_110;
              local_e4 = local_10c;
              local_e0 = piStack_108;
              FUN_009495dc(param_2 + 0x20);
              FUN_007bc140(param_2 + 0x18);
              goto LAB_00c02770;
            }
            *puVar12 = piVar23;
            puVar12[1] = piVar3;
            local_190 = piVar5;
            local_194 = piVar4;
            local_1a0 = unaff_r8;
            local_18c = local_120;
            local_188 = local_11c;
            piStack_184 = local_118;
            local_180 = local_114;
            local_17c = piStack_110;
            local_178 = local_10c;
            piStack_174 = piStack_108;
            piVar10 = (int *)param_2[0x1b];
            puVar12[0xb] = piVar6;
            puVar12[0xc] = piVar7;
            iVar19 = piVar10[2];
            if (iVar19 == *piVar10) {
              FUN_006e4ec8(piVar10);
            }
            puVar11 = (undefined4 *)(piVar10[1] + iVar19 * 0x38);
            *puVar11 = unaff_r8;
            puVar11[1] = piVar23;
            puVar11[2] = piVar3;
            puVar11[3] = piVar4;
            puVar11[4] = piVar5;
            puVar11[5] = local_120;
            puVar11[6] = local_11c;
            puVar11[7] = local_118;
            puVar11[8] = local_114;
            puVar11[9] = piStack_110;
            puVar11[10] = local_10c;
            puVar11[0xb] = piStack_108;
            puVar11[0xc] = piVar6;
            puVar11[0xd] = piVar7;
            piVar10[2] = iVar19 + 1;
            puVar11 = (undefined4 *)param_2[0x23];
            puVar15 = (undefined4 *)param_2[0x21];
          }
          param_2[0x1c] = 0;
          FUN_009495dc(param_2 + 0x20);
          local_1f8 = (int *)param_2[0x18];
          local_1f4 = (int *)param_2[0x19];
          local_1f0 = (int *)param_2[0x1a];
          goto LAB_00c04f80;
        }
        local_238 = local_68;
        local_228 = local_58;
        local_21c = local_54;
        local_220 = local_5c;
        local_224 = local_60;
        local_f8 = local_50;
        local_f4 = local_4c;
        local_f0 = local_48;
        local_ec = local_44;
        local_e8 = local_40;
        local_e4 = piStack_3c;
        local_e0 = piStack_38;
        local_22c = local_34;
        local_230 = local_30;
        unaff_r8 = local_64;
        goto LAB_00c02770;
      }
      local_f0 = local_118;
      local_ec = local_114;
      local_e8 = piStack_110;
      local_e4 = local_10c;
      local_e0 = piStack_108;
      local_dc = piStack_104;
      local_d8 = uStack_100;
      *(undefined1 *)(param_2 + 0xc) = 1;
      local_f4 = local_11c;
      local_f8 = local_120;
      FUN_006bd898(&local_68,&local_f8,**(undefined4 **)(param_2[9] + 0x10),
                   (*(undefined4 **)(param_2[9] + 0x10))[1]);
      local_d0 = local_60;
      piStack_cc = local_5c;
      piStack_c8 = local_58;
      piStack_c4 = local_54;
      local_c0 = local_50;
      piStack_bc = local_4c;
      piStack_b8 = local_48;
      piStack_b4 = local_44;
      local_b0 = local_40;
      local_ac = piStack_3c;
      piStack_a8 = piStack_38;
      piStack_a4 = local_34;
      piStack_a0 = local_30;
      *(undefined1 *)(param_2 + 0xd) = 1;
      if (local_68 == (int *)&DAT_00000003) {
        uVar8 = 3;
        goto LAB_00c04780;
      }
      local_1e8 = local_60;
      piStack_1e4 = local_5c;
      piStack_1e0 = local_58;
      local_1dc = local_54;
      local_1d8 = local_50;
      piStack_1d4 = local_4c;
      piStack_1d0 = local_48;
      piStack_1cc = local_44;
      local_1c8 = local_40;
      local_1c4 = piStack_3c;
      piStack_1c0 = piStack_38;
      piStack_1bc = local_34;
      piStack_1b8 = local_30;
      piVar10 = local_64;
      if ((local_68 == (int *)0x2) ||
         (FUN_009ed8c0(&local_1a0,param_2[6],&local_68), piVar10 = local_19c,
         local_1a0 == (int *)0x2)) goto LAB_00c025a4;
      local_238 = local_1a0;
      uVar22 = 1;
      local_228 = local_190;
      local_21c = local_18c;
      local_220 = local_194;
      local_224 = local_198;
      local_140 = local_188;
      piStack_13c = piStack_184;
      piStack_138 = local_180;
      local_134 = local_17c;
      local_130 = local_178;
      piStack_12c = piStack_174;
      piStack_128 = piStack_170;
      local_22c = local_16c;
      local_230 = local_168;
      unaff_r8 = local_19c;
      goto LAB_00c0280c;
    case 3:
      param_2[4] = uVar17;
      param_2[5] = iVar19;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_00c01978:
      param_2[8] = uVar17;
      param_2[6] = iVar19;
      param_2[9] = iVar19;
      *(undefined1 *)(param_2 + 0x18) = 0;
LAB_00c01998:
      *(undefined1 *)((int)param_2 + 0x5d) = 0;
      param_2[0x14] = uVar17;
      param_2[0x15] = iVar19;
LAB_00c019b8:
      local_21c = param_2 + 10;
      *(undefined1 *)(param_2 + 0x17) = 0;
      param_2[0x16] = 0;
      iVar19 = FUN_011b21e4(iVar19);
      if ((*(char *)(iVar19 + 0xc) != '\0') || (FUN_00aba2c0(&local_f8,0), local_f8 == (int *)0x2))
      {
        piVar10 = *(int **)(iVar19 + 0x18);
        do {
          iVar13 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar13 + 1;
        if (iVar13 < 0) goto LAB_00c03d00;
        param_2[0x10] = piVar10;
        *(undefined1 *)(param_2 + 0x17) = 1;
        piVar10 = *(int **)(iVar19 + 0x28);
        do {
          iVar13 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar13 + 1;
        if (iVar13 < 0) goto LAB_00c03d00;
        param_2[0x11] = piVar10;
        *(undefined1 *)((int)param_2 + 0x5b) = 1;
        piVar10 = *(int **)(iVar19 + 0x10);
        do {
          iVar13 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar13 + 1;
        if (iVar13 < 0) goto LAB_00c03d00;
        param_2[0x12] = piVar10;
        *(undefined1 *)((int)param_2 + 0x5a) = 1;
        FUN_006666fc(local_21c,*(undefined4 *)(iVar19 + 4),*(undefined4 *)(iVar19 + 8));
        uVar8 = *(undefined1 *)(iVar19 + 0xc);
        *(undefined1 *)((int)param_2 + 0x59) = 1;
        *(undefined1 *)(param_2 + 0xd) = uVar8;
        piVar10 = *(int **)(iVar19 + 0x2c);
        do {
          iVar13 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar13 + 1;
        if (iVar13 < 0) goto LAB_00c03d00;
        param_2[0x13] = piVar10;
        *(undefined1 *)(param_2 + 0x16) = 1;
        uVar17 = FUN_00b8a1bc(*(int *)(*(int *)(iVar19 + 0x1c) + 0x3c) + 8);
        puVar14 = &DAT_01c13d9c;
        param_2[0xe] = uVar17;
        param_2[0xf] = &DAT_01c13d9c;
        goto LAB_00c01ae4;
      }
      bVar2 = true;
      local_120 = local_f4;
      local_11c = local_f0;
      local_118 = local_ec;
      local_228 = local_e8;
      local_22c = local_e4;
      local_230 = local_e0;
      local_238 = local_dc;
      local_160._0_3_ = (undefined3)((uint)local_d8 >> 8);
      piVar23 = local_f8;
      uVar8 = (undefined1)local_d8;
LAB_00c01bec:
      local_21c = param_2 + 10;
      local_220 = (int *)((int)param_2 + 0x5d);
      local_224 = param_2 + 8;
      local_25c = param_2 + 0x18;
      local_88 = local_120;
      piStack_84 = local_11c;
      piStack_80 = local_118;
      *(undefined1 *)local_220 = 1;
      FUN_00c056b8(local_21c);
      if (!bVar2) {
        local_60 = local_88;
        local_5c = piStack_84;
        local_58 = piStack_80;
        local_48 = local_238;
        local_4c = local_230;
        local_50 = local_22c;
        local_54 = local_228;
        puVar11 = (undefined4 *)((uint)&local_68 | 4);
        local_68 = (int *)0x2;
        local_44 = (int *)CONCAT31((int3)local_160,uVar8);
        local_d0 = (int *)*puVar11;
        piStack_cc = (int *)puVar11[1];
        piStack_c8 = (int *)puVar11[2];
        piStack_c4 = (int *)puVar11[3];
        local_c0 = (int *)puVar11[4];
        piStack_bc = (int *)puVar11[5];
        piStack_b8 = (int *)puVar11[6];
        piStack_b4 = (int *)puVar11[7];
        local_b0 = (int *)puVar11[8];
        local_ac = (int *)puVar11[9];
        piStack_a8 = (int *)puVar11[10];
        piStack_a4 = (int *)puVar11[0xb];
        piStack_a0 = (int *)puVar11[0xc];
        piStack_9c = (int *)puVar11[0xd];
        *(undefined1 *)(param_2 + 0x18) = 1;
        local_64 = piVar23;
LAB_00c01d64:
        *puVar12 = local_d0;
        puVar12[1] = piStack_cc;
        puVar12[2] = piStack_c8;
        puVar12[3] = piStack_c4;
        puVar12[4] = local_c0;
        puVar12[5] = piStack_bc;
        puVar12[6] = piStack_b8;
        puVar12[7] = piStack_b4;
        puVar12[8] = local_b0;
        local_1e8 = local_d0;
        piStack_1e4 = piStack_cc;
        piStack_1e0 = piStack_c8;
        local_1dc = piStack_c4;
        local_1d8 = local_c0;
        piStack_1d4 = piStack_bc;
        piStack_1d0 = piStack_b8;
        piStack_1cc = piStack_b4;
        local_1c8 = local_b0;
        local_1c4 = local_ac;
        piStack_1c0 = piStack_a8;
        piStack_1bc = piStack_a4;
        piStack_1b8 = piStack_a0;
        piStack_1b4 = piStack_9c;
LAB_00c01d80:
        local_1f8 = local_188;
        local_1f4 = piStack_184;
        local_1f0 = local_180;
        piStack_1ec = local_17c;
        param_2[8] = local_19c;
        param_2[9] = local_198;
        param_2[10] = local_194;
        param_2[0xb] = local_190;
        param_2[0xc] = local_18c;
        puVar11 = param_2 + 0x11;
        param_2[0xd] = local_188;
        param_2[0xe] = piStack_184;
        param_2[0xf] = local_180;
        param_2[0x10] = local_17c;
        puVar15 = (undefined4 *)param_2[6];
        uVar17 = puVar15[5];
        iVar19 = puVar15[4];
        uVar26 = puVar15[6];
        uVar24 = puVar15[7];
        uVar8 = *(undefined1 *)(puVar15 + 8);
        uVar22 = puVar15[1];
        uVar21 = puVar15[2];
        uVar25 = puVar15[3];
        *puVar11 = *puVar15;
        param_2[0x12] = uVar22;
        param_2[0x13] = uVar21;
        param_2[0x14] = uVar25;
        param_2[0x15] = iVar19 + 0x20;
        param_2[0x16] = uVar17;
        param_2[0x17] = uVar26;
        param_2[0x18] = uVar24;
        *(undefined1 *)(param_2 + 0x19) = uVar8;
        uVar17 = puVar15[4];
        *(undefined1 *)(param_2 + 0x35) = 0;
        param_2[0x34] = uVar17;
        param_2[0x32] = local_224;
        param_2[0x33] = puVar11;
LAB_00c01e38:
        *(undefined1 *)(param_2 + 0x30) = 0;
        param_2[0x2e] = puVar11;
        param_2[0x2f] = local_224;
LAB_00c01e50:
        *(undefined2 *)((int)param_2 + 0x7d) = 0x100;
        bVar16 = 1;
        param_2[0x1d] = puVar11;
        param_2[0x1e] = local_224;
LAB_00c01e6c:
        puVar15 = param_2 + 0x1a;
        *puVar15 = 0;
        param_2[0x1c] = 0;
        param_2[0x1b] = 4;
        *(undefined1 *)(param_2 + 0x1f) = 1;
        ppiVar20 = &local_68;
        FUN_00cbbedc(ppiVar20,puVar15,puVar11,local_224);
        if (local_68 == (int *)0x2) {
          if ((bVar16 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x1f) = 0;
            local_1b0 = *puVar15;
            uStack_1ac = param_2[0x1b];
            uStack_1a8 = param_2[0x1c];
            FUN_009ec520(&local_68);
            local_d0 = local_68;
            piStack_cc = local_64;
            piStack_c8 = local_60;
            piStack_c4 = local_5c;
            local_c0 = local_58;
            piStack_bc = local_54;
            piStack_b8 = local_50;
            piStack_b4 = local_4c;
            local_b0 = local_48;
            local_ac = local_44;
            piStack_a8 = local_40;
            piStack_a4 = piStack_3c;
            piStack_a0 = piStack_38;
            piStack_9c = local_34;
            param_2[0x20] = local_68;
            param_2[0x21] = local_64;
            param_2[0x22] = local_60;
            param_2[0x23] = local_5c;
            param_2[0x24] = local_58;
            param_2[0x25] = local_54;
            param_2[0x26] = local_50;
            param_2[0x27] = local_4c;
            param_2[0x28] = local_48;
            param_2[0x29] = local_44;
            param_2[0x2a] = local_40;
            param_2[0x2b] = piStack_3c;
            param_2[0x2c] = piStack_38;
            param_2[0x2d] = local_34;
            goto switchD_00c0363c_caseD_3;
          }
          uVar18 = param_2[0x1c];
          if (0x2492492 < uVar18) {
            uVar17 = 0;
LAB_00c02054:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar17,ppiVar20);
          }
          ppiVar20 = (int **)(uVar18 * 0x38);
          if (ppiVar20 == (int **)0x0) {
            iVar19 = 8;
            uVar18 = 0;
          }
          else {
            uVar17 = 8;
            iVar19 = FUN_01298504(ppiVar20,8);
            if (iVar19 == 0) goto LAB_00c02054;
          }
          puVar15 = (undefined4 *)param_2[0x1b];
          param_2[0x21] = iVar19;
          puVar11 = puVar15 + param_2[0x1c] * 2;
          param_2[0x20] = uVar18;
          param_2[0x22] = 0;
          *(undefined1 *)(param_2 + 0x1f) = 0;
          param_2[0x28] = puVar15;
          param_2[0x29] = puVar15;
          param_2[0x2a] = param_2[0x1a];
          param_2[0x2b] = puVar11;
          while (puVar15 != puVar11) {
            uVar17 = *puVar15;
            iVar19 = puVar15[1];
            param_2[0x29] = puVar15 + 2;
            param_2[0x26] = uVar17;
            param_2[0x23] = param_2 + 0x20;
            param_2[0x24] = uVar17;
            param_2[0x25] = iVar19;
            param_2[0x27] = iVar19;
LAB_00c05300:
            (**(code **)(iVar19 + 0xc))(&local_68,uVar17,param_3);
            piVar7 = piStack_2c;
            piVar6 = local_30;
            piVar5 = local_50;
            piVar4 = local_54;
            piVar3 = local_58;
            piVar23 = local_5c;
            unaff_r8 = local_60;
            piVar10 = local_68;
            if (local_68 == (int *)0x2) {
              uVar8 = 4;
              goto LAB_00c046f8;
            }
            local_238 = local_64;
            local_228 = local_54;
            local_21c = local_50;
            local_220 = local_58;
            local_224 = local_5c;
            local_120 = local_4c;
            local_11c = local_48;
            local_118 = local_44;
            local_114 = local_40;
            piStack_110 = piStack_3c;
            local_10c = piStack_38;
            piStack_108 = local_34;
            local_22c = local_30;
            local_230 = piStack_2c;
            FUN_01139b38(param_2[0x26],param_2[0x27]);
            if (((uint)piVar10 & 1) != 0) {
              local_f8 = local_120;
              local_f4 = local_11c;
              local_f0 = local_118;
              local_ec = local_114;
              local_e8 = piStack_110;
              local_e4 = local_10c;
              local_e0 = piStack_108;
              FUN_009495dc(param_2 + 0x28);
              FUN_007bc140(param_2 + 0x20);
              goto LAB_00c01f94;
            }
            *puVar12 = piVar23;
            puVar12[1] = piVar3;
            local_190 = piVar5;
            local_194 = piVar4;
            local_1a0 = unaff_r8;
            local_18c = local_120;
            local_188 = local_11c;
            piStack_184 = local_118;
            local_180 = local_114;
            local_17c = piStack_110;
            local_178 = local_10c;
            piStack_174 = piStack_108;
            piVar10 = (int *)param_2[0x23];
            puVar12[0xb] = piVar6;
            puVar12[0xc] = piVar7;
            iVar19 = piVar10[2];
            if (iVar19 == *piVar10) {
              FUN_006e4ec8(piVar10);
            }
            puVar11 = (undefined4 *)(piVar10[1] + iVar19 * 0x38);
            *puVar11 = unaff_r8;
            puVar11[1] = piVar23;
            puVar11[2] = piVar3;
            puVar11[3] = piVar4;
            puVar11[4] = piVar5;
            puVar11[5] = local_120;
            puVar11[6] = local_11c;
            puVar11[7] = local_118;
            puVar11[8] = local_114;
            puVar11[9] = piStack_110;
            puVar11[10] = local_10c;
            puVar11[0xb] = piStack_108;
            puVar11[0xc] = piVar6;
            puVar11[0xd] = piVar7;
            piVar10[2] = iVar19 + 1;
            puVar11 = (undefined4 *)param_2[0x2b];
            puVar15 = (undefined4 *)param_2[0x29];
          }
          param_2[0x24] = 0;
          FUN_009495dc(param_2 + 0x28);
          local_98 = (int *)param_2[0x20];
          local_94 = (int *)param_2[0x21];
          local_90 = (int *)param_2[0x22];
          goto LAB_00c05480;
        }
        local_238 = local_68;
        local_228 = local_58;
        local_21c = local_54;
        local_220 = local_5c;
        local_224 = local_60;
        local_f8 = local_50;
        local_f4 = local_4c;
        local_f0 = local_48;
        local_ec = local_44;
        local_e8 = local_40;
        local_e4 = piStack_3c;
        local_e0 = piStack_38;
        local_22c = local_34;
        local_230 = local_30;
        unaff_r8 = local_64;
LAB_00c01f94:
        local_250 = param_2 + 0x1a;
        if (*(char *)(param_2 + 0x1f) != '\0') {
          FUN_00b7d620(local_250);
        }
        uVar22 = 1;
        *(undefined1 *)(param_2 + 0x1f) = 0;
        goto LAB_00c01fb4;
      }
      local_f4 = local_88;
      local_f0 = piStack_84;
      local_ec = piStack_80;
      local_dc = local_238;
      local_e0 = local_230;
      local_e4 = local_22c;
      local_e8 = local_228;
      local_d8 = CONCAT13(local_160._2_1_,CONCAT21((undefined2)local_160,uVar8));
      local_f8 = piVar23;
      FUN_006bd898(&local_68,&local_f8,**(undefined4 **)(param_2[9] + 0x10),
                   (*(undefined4 **)(param_2[9] + 0x10))[1]);
      puVar11 = (undefined4 *)((uint)&local_68 | 4);
      local_1e8 = (int *)*puVar11;
      piStack_1e4 = (int *)puVar11[1];
      piStack_1e0 = (int *)puVar11[2];
      local_1dc = (int *)puVar11[3];
      local_1d8 = (int *)puVar11[4];
      piStack_1d4 = (int *)puVar11[5];
      piStack_1d0 = (int *)puVar11[6];
      piStack_1cc = (int *)puVar11[7];
      local_1c8 = (int *)puVar11[8];
      local_1c4 = (int *)puVar11[9];
      piStack_1c0 = (int *)puVar11[10];
      piStack_1bc = (int *)puVar11[0xb];
      piStack_1b8 = (int *)puVar11[0xc];
      piStack_1b4 = (int *)puVar11[0xd];
      *(undefined1 *)local_25c = 1;
      if (local_68 == (int *)&DAT_00000003) goto LAB_00c01cbc;
      local_d0 = local_1e8;
      piStack_cc = piStack_1e4;
      piStack_c8 = piStack_1e0;
      piStack_c4 = local_1dc;
      local_c0 = local_1d8;
      piStack_bc = piStack_1d4;
      piStack_b8 = piStack_1d0;
      piStack_b4 = piStack_1cc;
      local_b0 = local_1c8;
      local_ac = local_1c4;
      piStack_a8 = piStack_1c0;
      piStack_a4 = piStack_1bc;
      piStack_a0 = piStack_1b8;
      piStack_9c = piStack_1b4;
      if (local_68 == (int *)0x2) goto LAB_00c01d64;
      local_64 = local_1e8;
      local_60 = piStack_1e4;
      local_5c = piStack_1e0;
      local_58 = local_1dc;
      local_54 = local_1d8;
      local_50 = piStack_1d4;
      local_4c = piStack_1d0;
      local_48 = piStack_1cc;
      local_44 = local_1c8;
      local_40 = local_1c4;
      piStack_3c = piStack_1c0;
      piStack_38 = piStack_1bc;
      local_34 = piStack_1b8;
      local_30 = piStack_1b4;
      FUN_009ed8c0(&local_1a0,param_2[6],&local_68);
      if (local_1a0 == (int *)0x2) goto LAB_00c01d80;
      local_238 = local_1a0;
      uVar22 = 1;
      local_228 = local_190;
      local_21c = local_18c;
      local_220 = local_194;
      local_224 = local_198;
      local_1f8 = local_188;
      local_1f4 = piStack_184;
      local_1f0 = local_180;
      piStack_1ec = local_17c;
      local_130 = local_178;
      piStack_12c = piStack_174;
      piStack_128 = piStack_170;
      local_22c = local_16c;
      local_230 = local_168;
      local_140 = local_188;
      piStack_13c = piStack_184;
      piStack_138 = local_180;
      local_134 = local_17c;
      unaff_r8 = local_19c;
LAB_00c02008:
      local_254 = param_2 + 7;
      local_258 = param_2 + 4;
      local_218 = local_140;
      piStack_214 = piStack_13c;
      piStack_210 = piStack_138;
      local_20c = local_134;
      piStack_208 = local_130;
      piStack_204 = piStack_12c;
      piStack_200 = piStack_128;
      *(undefined1 *)local_254 = 1;
      FUN_00c05a6c(local_258);
      piVar10 = local_238;
      break;
    case 4:
      param_2[4] = uVar17;
      param_2[5] = iVar19;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_00c0291c:
      param_2[8] = uVar17;
      param_2[6] = iVar19;
      param_2[9] = iVar19;
      *(undefined1 *)(param_2 + 0xd) = 0;
LAB_00c02938:
      param_2[10] = uVar17;
      param_2[0xb] = iVar19;
      *(undefined1 *)(param_2 + 0xc) = 0;
LAB_00c02944:
      puVar11 = param_2 + 8;
      iVar19 = FUN_011b21e4(iVar19);
      if ((*(char *)(iVar19 + 0xc) != '\0') || (FUN_00aba2c0(&local_120,0), local_120 == (int *)0x2)
         ) {
        local_64 = *(int **)(iVar19 + 0x1c);
        do {
          iVar19 = *local_64;
          bVar2 = (bool)hasExclusiveAccess(local_64);
        } while (!bVar2);
        *local_64 = iVar19 + 1;
        if (iVar19 < 0) goto LAB_00c03d00;
        *(undefined1 *)(param_2 + 0xc) = 1;
        local_68 = (int *)0x2;
        local_1e8 = local_60;
        piStack_1e4 = local_5c;
        piStack_1e0 = local_58;
        local_1dc = local_54;
        local_1d8 = local_50;
        piStack_1d4 = local_4c;
        piStack_1d0 = local_48;
        piStack_1cc = local_44;
        local_1c8 = local_40;
        local_1c4 = piStack_3c;
        piStack_1c0 = piStack_38;
        piStack_1bc = local_34;
        piStack_1b8 = local_30;
        *(undefined1 *)(param_2 + 0xd) = 1;
        piVar10 = local_64;
        local_d0 = local_1e8;
        piStack_cc = piStack_1e4;
        piStack_c8 = piStack_1e0;
        piStack_c4 = local_1dc;
        local_c0 = local_1d8;
        piStack_bc = piStack_1d4;
        piStack_b8 = piStack_1d0;
        piStack_b4 = piStack_1cc;
        local_b0 = local_1c8;
        local_ac = local_1c4;
        piStack_a8 = piStack_1c0;
        piStack_a4 = piStack_1bc;
        piStack_a0 = piStack_1b8;
LAB_00c029f4:
        puVar9 = (undefined4 *)param_2[6];
        puVar15 = param_2 + 9;
        param_2[8] = piVar10;
        uVar21 = puVar9[7];
        iVar19 = puVar9[4];
        uVar25 = puVar9[5];
        uVar26 = puVar9[6];
        uVar8 = *(undefined1 *)(puVar9 + 8);
        uVar17 = puVar9[1];
        uVar22 = puVar9[2];
        uVar24 = puVar9[3];
        *puVar15 = *puVar9;
        param_2[10] = uVar17;
        param_2[0xb] = uVar22;
        param_2[0xc] = uVar24;
        param_2[0xd] = iVar19 + 0x20;
        param_2[0xe] = uVar25;
        param_2[0xf] = uVar26;
        param_2[0x10] = uVar21;
        *(undefined1 *)(param_2 + 0x11) = uVar8;
        uVar17 = puVar9[4];
        *(undefined1 *)(param_2 + 0x2d) = 0;
        param_2[0x2c] = uVar17;
        param_2[0x2a] = puVar11;
        param_2[0x2b] = puVar15;
LAB_00c02a60:
        *(undefined1 *)(param_2 + 0x28) = 0;
        param_2[0x26] = puVar15;
        param_2[0x27] = puVar11;
LAB_00c02a78:
        *(undefined2 *)((int)param_2 + 0x5d) = 0x100;
        bVar16 = 1;
        param_2[0x15] = puVar15;
        param_2[0x16] = puVar11;
LAB_00c02a94:
        puVar9 = param_2 + 0x12;
        *puVar9 = 0;
        param_2[0x14] = 0;
        param_2[0x13] = 4;
        *(undefined1 *)(param_2 + 0x17) = 1;
        ppiVar20 = &local_68;
        FUN_00c87668(ppiVar20,puVar9,puVar15,puVar11);
        if (local_68 == (int *)0x2) {
          if ((bVar16 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x17) = 0;
            local_98 = (int *)*puVar9;
            local_94 = (int *)param_2[0x13];
            local_90 = (int *)param_2[0x14];
            FUN_009ec520(&local_68);
            local_d0 = local_68;
            piStack_cc = local_64;
            piStack_c8 = local_60;
            piStack_c4 = local_5c;
            local_c0 = local_58;
            piStack_bc = local_54;
            piStack_b8 = local_50;
            piStack_b4 = local_4c;
            local_b0 = local_48;
            local_ac = local_44;
            piStack_a8 = local_40;
            piStack_a4 = piStack_3c;
            piStack_a0 = piStack_38;
            piStack_9c = local_34;
            param_2[0x18] = local_68;
            param_2[0x19] = local_64;
            param_2[0x1a] = local_60;
            param_2[0x1b] = local_5c;
            param_2[0x1c] = local_58;
            param_2[0x1d] = local_54;
            param_2[0x1e] = local_50;
            param_2[0x1f] = local_4c;
            param_2[0x20] = local_48;
            param_2[0x21] = local_44;
            param_2[0x22] = local_40;
            param_2[0x23] = piStack_3c;
            param_2[0x24] = piStack_38;
            param_2[0x25] = local_34;
            goto switchD_00c03600_caseD_3;
          }
          uVar18 = param_2[0x14];
          if (0x2492492 < uVar18) {
            uVar17 = 0;
LAB_00c02d04:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar17,ppiVar20);
          }
          ppiVar20 = (int **)(uVar18 * 0x38);
          if (ppiVar20 == (int **)0x0) {
            iVar19 = 8;
            uVar18 = 0;
          }
          else {
            uVar17 = 8;
            iVar19 = FUN_01298504(ppiVar20,8);
            if (iVar19 == 0) goto LAB_00c02d04;
          }
          puVar15 = (undefined4 *)param_2[0x13];
          param_2[0x19] = iVar19;
          puVar11 = puVar15 + param_2[0x14] * 2;
          param_2[0x18] = uVar18;
          param_2[0x1a] = 0;
          *(undefined1 *)(param_2 + 0x17) = 0;
          param_2[0x20] = puVar15;
          param_2[0x21] = puVar15;
          param_2[0x22] = param_2[0x12];
          param_2[0x23] = puVar11;
          while (puVar15 != puVar11) {
            uVar17 = *puVar15;
            iVar19 = puVar15[1];
            param_2[0x21] = puVar15 + 2;
            param_2[0x1e] = uVar17;
            param_2[0x1b] = param_2 + 0x18;
            param_2[0x1c] = uVar17;
            param_2[0x1d] = iVar19;
            param_2[0x1f] = iVar19;
LAB_00c04828:
            (**(code **)(iVar19 + 0xc))(&local_68,uVar17,param_3);
            piVar7 = piStack_2c;
            piVar6 = local_30;
            piVar5 = local_50;
            piVar4 = local_54;
            piVar3 = local_58;
            piVar23 = local_5c;
            unaff_r8 = local_60;
            piVar10 = local_68;
            if (local_68 == (int *)0x2) {
              uVar8 = 4;
              goto LAB_00c04798;
            }
            local_238 = local_64;
            local_228 = local_54;
            local_21c = local_50;
            local_220 = local_58;
            local_224 = local_5c;
            local_120 = local_4c;
            local_11c = local_48;
            local_118 = local_44;
            local_114 = local_40;
            piStack_110 = piStack_3c;
            local_10c = piStack_38;
            piStack_108 = local_34;
            local_22c = local_30;
            local_230 = piStack_2c;
            FUN_01139b38(param_2[0x1e],param_2[0x1f]);
            if (((uint)piVar10 & 1) != 0) {
              local_f8 = local_120;
              local_f4 = local_11c;
              local_f0 = local_118;
              local_ec = local_114;
              local_e8 = piStack_110;
              local_e4 = local_10c;
              local_e0 = piStack_108;
              FUN_009495dc(param_2 + 0x20);
              FUN_007bc140(param_2 + 0x18);
              goto LAB_00c02bbc;
            }
            *puVar12 = piVar23;
            puVar12[1] = piVar3;
            local_190 = piVar5;
            local_194 = piVar4;
            local_1a0 = unaff_r8;
            local_18c = local_120;
            local_188 = local_11c;
            piStack_184 = local_118;
            local_180 = local_114;
            local_17c = piStack_110;
            local_178 = local_10c;
            piStack_174 = piStack_108;
            piVar10 = (int *)param_2[0x1b];
            puVar12[0xb] = piVar6;
            puVar12[0xc] = piVar7;
            iVar19 = piVar10[2];
            if (iVar19 == *piVar10) {
              FUN_006e4ec8(piVar10);
            }
            puVar11 = (undefined4 *)(piVar10[1] + iVar19 * 0x38);
            *puVar11 = unaff_r8;
            puVar11[1] = piVar23;
            puVar11[2] = piVar3;
            puVar11[3] = piVar4;
            puVar11[4] = piVar5;
            puVar11[5] = local_120;
            puVar11[6] = local_11c;
            puVar11[7] = local_118;
            puVar11[8] = local_114;
            puVar11[9] = piStack_110;
            puVar11[10] = local_10c;
            puVar11[0xb] = piStack_108;
            puVar11[0xc] = piVar6;
            puVar11[0xd] = piVar7;
            piVar10[2] = iVar19 + 1;
            puVar11 = (undefined4 *)param_2[0x23];
            puVar15 = (undefined4 *)param_2[0x21];
          }
          param_2[0x1c] = 0;
          FUN_009495dc(param_2 + 0x20);
          local_1f8 = (int *)param_2[0x18];
          local_1f4 = (int *)param_2[0x19];
          local_1f0 = (int *)param_2[0x1a];
          goto LAB_00c049c8;
        }
        local_238 = local_68;
        local_228 = local_58;
        local_21c = local_54;
        local_220 = local_5c;
        local_224 = local_60;
        local_f8 = local_50;
        local_f4 = local_4c;
        local_f0 = local_48;
        local_ec = local_44;
        local_e8 = local_40;
        local_e4 = piStack_3c;
        local_e0 = piStack_38;
        local_22c = local_34;
        local_230 = local_30;
        unaff_r8 = local_64;
        goto LAB_00c02bbc;
      }
      local_f0 = local_118;
      local_ec = local_114;
      local_e8 = piStack_110;
      local_e4 = local_10c;
      local_e0 = piStack_108;
      local_dc = piStack_104;
      local_d8 = uStack_100;
      *(undefined1 *)(param_2 + 0xc) = 1;
      local_f4 = local_11c;
      local_f8 = local_120;
      FUN_006bd898(&local_68,&local_f8,**(undefined4 **)(param_2[9] + 0x10),
                   (*(undefined4 **)(param_2[9] + 0x10))[1]);
      local_d0 = local_60;
      piStack_cc = local_5c;
      piStack_c8 = local_58;
      piStack_c4 = local_54;
      local_c0 = local_50;
      piStack_bc = local_4c;
      piStack_b8 = local_48;
      piStack_b4 = local_44;
      local_b0 = local_40;
      local_ac = piStack_3c;
      piStack_a8 = piStack_38;
      piStack_a4 = local_34;
      piStack_a0 = local_30;
      *(undefined1 *)(param_2 + 0xd) = 1;
      if (local_68 == (int *)&DAT_00000003) {
        uVar8 = 3;
        goto LAB_00c047bc;
      }
      local_1e8 = local_60;
      piStack_1e4 = local_5c;
      piStack_1e0 = local_58;
      local_1dc = local_54;
      local_1d8 = local_50;
      piStack_1d4 = local_4c;
      piStack_1d0 = local_48;
      piStack_1cc = local_44;
      local_1c8 = local_40;
      local_1c4 = piStack_3c;
      piStack_1c0 = piStack_38;
      piStack_1bc = local_34;
      piStack_1b8 = local_30;
      piVar10 = local_64;
      if ((local_68 == (int *)0x2) ||
         (FUN_009ed8c0(&local_1a0,param_2[6],&local_68), piVar10 = local_19c,
         local_1a0 == (int *)0x2)) goto LAB_00c029f4;
      local_238 = local_1a0;
      uVar22 = 1;
      local_228 = local_190;
      local_21c = local_18c;
      local_220 = local_194;
      local_224 = local_198;
      local_140 = local_188;
      piStack_13c = piStack_184;
      piStack_138 = local_180;
      local_134 = local_17c;
      local_130 = local_178;
      piStack_12c = piStack_174;
      piStack_128 = piStack_170;
      local_22c = local_16c;
      local_230 = local_168;
      unaff_r8 = local_19c;
      goto LAB_00c02c58;
    }
    goto switchD_00c0123c_caseD_5;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22288);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22288);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      uVar17 = param_2[4];
      iVar19 = param_2[5];
      goto LAB_00c01328;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22288);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22288);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xf)) {
      case 0:
        uVar17 = param_2[8];
        iVar19 = param_2[9];
        goto LAB_00c01450;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22288);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22288);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xe)) {
      case 0:
        iVar19 = param_2[0xb];
        goto LAB_00c01460;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22288);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22288);
      case 3:
        if (*(char *)(param_2 + 0xd) != '\0') {
          if (*(char *)(param_2 + 0xd) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22288);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c22288);
        }
        iVar19 = param_2[0xc];
      }
      goto LAB_00c0146c;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x31)) {
    case 0:
      puVar15 = (undefined4 *)param_2[0x2e];
      puVar11 = (undefined4 *)param_2[0x2f];
LAB_00c016b8:
      *(undefined1 *)(param_2 + 0x2c) = 0;
      param_2[0x2a] = puVar11;
      param_2[0x2b] = puVar15;
LAB_00c016d0:
      *(undefined2 *)((int)param_2 + 0x6d) = 0x100;
      bVar16 = 1;
      param_2[0x19] = puVar11;
      param_2[0x1a] = puVar15;
LAB_00c016ec:
      puVar9 = param_2 + 0x16;
      *puVar9 = 0;
      param_2[0x18] = 0;
      param_2[0x17] = 4;
      *(undefined1 *)(param_2 + 0x1b) = 1;
      ppiVar20 = &local_68;
      FUN_00cad07c(ppiVar20,puVar9,puVar11,puVar15);
      if (local_68 != (int *)0x2) {
        local_238 = local_68;
        local_228 = local_58;
        local_21c = local_54;
        local_220 = local_5c;
        local_224 = local_60;
        local_1e8 = local_50;
        piStack_1e4 = local_4c;
        piStack_1e0 = local_48;
        local_1dc = local_44;
        local_1d8 = local_40;
        piStack_1d4 = piStack_3c;
        piStack_1d0 = piStack_38;
        local_22c = local_34;
        local_230 = local_30;
        unaff_r8 = local_64;
        goto LAB_00c01814;
      }
      if ((bVar16 & 1) != 0) {
        *(undefined1 *)(param_2 + 0x1b) = 0;
        local_1f8 = (int *)*puVar9;
        local_1f4 = (int *)param_2[0x17];
        local_1f0 = (int *)param_2[0x18];
        FUN_009ec520(&local_68);
        local_d0 = local_68;
        piStack_cc = local_64;
        piStack_c8 = local_60;
        piStack_c4 = local_5c;
        local_c0 = local_58;
        piStack_bc = local_54;
        piStack_b8 = local_50;
        piStack_b4 = local_4c;
        local_b0 = local_48;
        local_ac = local_44;
        piStack_a8 = local_40;
        piStack_a4 = piStack_3c;
        piStack_a0 = piStack_38;
        piStack_9c = local_34;
        param_2[0x1c] = local_68;
        param_2[0x1d] = local_64;
        param_2[0x1e] = local_60;
        param_2[0x1f] = local_5c;
        param_2[0x20] = local_58;
        param_2[0x21] = local_54;
        param_2[0x22] = local_50;
        param_2[0x23] = local_4c;
        param_2[0x24] = local_48;
        param_2[0x25] = local_44;
        param_2[0x26] = local_40;
        param_2[0x27] = piStack_3c;
        param_2[0x28] = piStack_38;
        param_2[0x29] = local_34;
        goto switchD_00c03678_caseD_3;
      }
      uVar18 = param_2[0x18];
      if (0x2492492 < uVar18) {
        uVar17 = 0;
LAB_00c0194c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar17,ppiVar20);
      }
      ppiVar20 = (int **)(uVar18 * 0x38);
      if (ppiVar20 == (int **)0x0) {
        iVar19 = 8;
        uVar18 = 0;
      }
      else {
        uVar17 = 8;
        iVar19 = FUN_01298504(ppiVar20,8);
        if (iVar19 == 0) goto LAB_00c0194c;
      }
      puVar15 = (undefined4 *)param_2[0x17];
      param_2[0x1d] = iVar19;
      puVar11 = puVar15 + param_2[0x18] * 2;
      param_2[0x1c] = uVar18;
      param_2[0x1e] = 0;
      *(undefined1 *)(param_2 + 0x1b) = 0;
      param_2[0x24] = puVar15;
      param_2[0x25] = puVar15;
      param_2[0x26] = param_2[0x16];
      param_2[0x27] = puVar11;
      while (puVar15 != puVar11) {
        uVar17 = *puVar15;
        iVar19 = puVar15[1];
        param_2[0x25] = puVar15 + 2;
        param_2[0x22] = uVar17;
        param_2[0x1f] = param_2 + 0x1c;
        param_2[0x20] = uVar17;
        param_2[0x21] = iVar19;
        param_2[0x23] = iVar19;
LAB_00c05088:
        (**(code **)(iVar19 + 0xc))(&local_68,uVar17,param_3);
        piVar7 = piStack_2c;
        piVar6 = local_30;
        piVar5 = local_50;
        piVar4 = local_54;
        piVar3 = local_58;
        piVar23 = local_5c;
        unaff_r8 = local_60;
        piVar10 = local_68;
        if (local_68 == (int *)0x2) {
          uVar8 = 4;
          goto LAB_00c046b8;
        }
        local_238 = local_64;
        local_228 = local_54;
        local_21c = local_50;
        local_220 = local_58;
        local_224 = local_5c;
        local_f8 = local_4c;
        local_f4 = local_48;
        local_f0 = local_44;
        local_ec = local_40;
        local_e8 = piStack_3c;
        local_e4 = piStack_38;
        local_e0 = local_34;
        local_22c = local_30;
        local_230 = piStack_2c;
        FUN_01139b38(param_2[0x22],param_2[0x23]);
        if (((uint)piVar10 & 1) != 0) {
          local_1e8 = local_f8;
          piStack_1e4 = local_f4;
          piStack_1e0 = local_f0;
          local_1dc = local_ec;
          local_1d8 = local_e8;
          piStack_1d4 = local_e4;
          piStack_1d0 = local_e0;
          FUN_009495dc(param_2 + 0x24);
          FUN_007bc140(param_2 + 0x1c);
          goto LAB_00c01814;
        }
        *puVar12 = piVar23;
        puVar12[1] = piVar3;
        local_190 = piVar5;
        local_194 = piVar4;
        local_1a0 = unaff_r8;
        local_18c = local_f8;
        local_188 = local_f4;
        piStack_184 = local_f0;
        local_180 = local_ec;
        local_17c = local_e8;
        local_178 = local_e4;
        piStack_174 = local_e0;
        piVar10 = (int *)param_2[0x1f];
        puVar12[0xb] = piVar6;
        puVar12[0xc] = piVar7;
        iVar19 = piVar10[2];
        if (iVar19 == *piVar10) {
          FUN_006e4ec8(piVar10);
        }
        puVar11 = (undefined4 *)(piVar10[1] + iVar19 * 0x38);
        *puVar11 = unaff_r8;
        puVar11[1] = piVar23;
        puVar11[2] = piVar3;
        puVar11[3] = piVar4;
        puVar11[4] = piVar5;
        puVar11[5] = local_f8;
        puVar11[6] = local_f4;
        puVar11[7] = local_f0;
        puVar11[8] = local_ec;
        puVar11[9] = local_e8;
        puVar11[10] = local_e4;
        puVar11[0xb] = local_e0;
        puVar11[0xc] = piVar6;
        puVar11[0xd] = piVar7;
        piVar10[2] = iVar19 + 1;
        puVar11 = (undefined4 *)param_2[0x27];
        puVar15 = (undefined4 *)param_2[0x25];
      }
      param_2[0x20] = 0;
      FUN_009495dc(param_2 + 0x24);
      local_160 = (int *)param_2[0x1c];
      local_15c = (int *)param_2[0x1d];
      local_158 = (int *)param_2[0x1e];
LAB_00c05200:
      FUN_006cac18(&local_68,&local_160);
      local_224 = local_64;
      uVar22 = 0;
      local_220 = local_60;
      local_228 = local_5c;
      local_21c = local_58;
      local_1e8 = local_54;
      piStack_1e4 = local_50;
      piStack_1e0 = local_4c;
      local_1dc = local_48;
      local_1d8 = local_44;
      piStack_1d4 = local_40;
      piStack_1d0 = piStack_3c;
      *(undefined1 *)(param_2 + 0x1b) = 0;
      unaff_r8 = local_68;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22308);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22308);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x2c)) {
      case 0:
        puVar11 = (undefined4 *)param_2[0x2a];
        puVar15 = (undefined4 *)param_2[0x2b];
        goto LAB_00c016d0;
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
        puVar11 = (undefined4 *)param_2[0x19];
        puVar15 = (undefined4 *)param_2[0x1a];
        bVar16 = *(byte *)((int)param_2 + 0x6e);
        goto LAB_00c016ec;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b4c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b4c);
      case 4:
        uVar17 = param_2[0x22];
        iVar19 = param_2[0x23];
        goto LAB_00c05088;
      }
switchD_00c03678_caseD_3:
      FUN_009ecbe0(&local_68,param_2 + 0x1c,param_3);
      unaff_r8 = local_64;
      piVar10 = local_68;
      if (local_68 == (int *)&DAT_00000003) {
        uVar8 = 3;
LAB_00c046b8:
        local_25c = (undefined4 *)((int)param_2 + 0x6d);
        local_260 = param_2 + 0x31;
        local_264 = param_2 + 0x2c;
        *(undefined1 *)local_25c = uVar8;
        *(undefined1 *)local_260 = 3;
        *(undefined1 *)local_264 = 3;
        uVar8 = 4;
        goto LAB_00c046a0;
      }
      local_238 = local_68;
      local_228 = local_58;
      local_21c = local_54;
      local_220 = local_5c;
      local_224 = local_60;
      local_120 = local_50;
      local_11c = local_4c;
      local_118 = local_48;
      local_114 = local_44;
      piStack_110 = local_40;
      local_10c = piStack_3c;
      piStack_108 = piStack_38;
      local_22c = local_34;
      local_230 = local_30;
      FUN_00ba64b4(param_2 + 0x1c);
      if (piVar10 == (int *)0x2) {
        local_160 = unaff_r8;
        local_15c = local_224;
        local_158 = local_220;
        goto LAB_00c05200;
      }
      local_1e8 = local_120;
      piStack_1e4 = local_11c;
      piStack_1e0 = local_118;
      local_1dc = local_114;
      local_1d8 = piStack_110;
      piStack_1d4 = local_10c;
      piStack_1d0 = piStack_108;
LAB_00c01814:
      local_250 = param_2 + 0x16;
      if (*(char *)(param_2 + 0x1b) != '\0') {
        FUN_00b7d620(local_250);
      }
      uVar22 = 1;
      *(undefined1 *)(param_2 + 0x1b) = 0;
    }
    local_250 = param_2 + 0x16;
    local_254 = param_2 + 7;
    local_258 = param_2 + 4;
    local_25c = (undefined4 *)((int)param_2 + 0x6d);
    local_140 = local_1e8;
    piStack_13c = piStack_1e4;
    piStack_138 = piStack_1e0;
    local_134 = local_1dc;
    local_130 = local_1d8;
    piStack_12c = piStack_1d4;
    piStack_128 = piStack_1d0;
    *(undefined1 *)local_25c = 1;
    FUN_00ba638c(local_250);
    *(undefined1 *)(param_2 + 0x31) = 1;
    *(undefined1 *)(param_2 + 0x2c) = 1;
    local_88 = local_140;
    piStack_84 = piStack_13c;
    piStack_80 = piStack_138;
    local_7c = local_134;
    piStack_78 = local_130;
    piStack_74 = piStack_12c;
    piStack_70 = piStack_128;
    FUN_00c0555c(param_2 + 8);
    local_218 = local_88;
    piStack_214 = piStack_84;
    piStack_210 = piStack_80;
    local_20c = local_7c;
    piStack_208 = piStack_78;
    piStack_204 = piStack_74;
    piStack_200 = piStack_70;
    *(undefined1 *)local_254 = 1;
    FUN_00c055b4(local_258);
    piVar10 = local_238;
    goto switchD_00c0123c_caseD_5;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      uVar17 = param_2[4];
      iVar19 = param_2[5];
      goto LAB_00c02080;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22288);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22288);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xd)) {
      case 0:
        uVar17 = param_2[8];
        iVar19 = param_2[9];
        goto LAB_00c0209c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22288);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22288);
      case 3:
        if (*(char *)(param_2 + 0xc) != '\0') {
          if (*(char *)(param_2 + 0xc) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c22298);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c22298);
        }
        iVar19 = param_2[0xb];
      }
      goto LAB_00c020a8;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2d)) {
    case 0:
      puVar11 = (undefined4 *)param_2[0x2a];
      puVar15 = (undefined4 *)param_2[0x2b];
      goto LAB_00c021c8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22358);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22358);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x28)) {
    case 0:
      puVar15 = (undefined4 *)param_2[0x26];
      puVar11 = (undefined4 *)param_2[0x27];
      goto LAB_00c021e0;
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
      puVar15 = (undefined4 *)param_2[0x15];
      puVar11 = (undefined4 *)param_2[0x16];
      bVar16 = *(byte *)((int)param_2 + 0x5e);
      goto LAB_00c021fc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      uVar17 = param_2[0x1e];
      iVar19 = param_2[0x1f];
      goto LAB_00c04b74;
    }
switchD_00c036b4_caseD_3:
    FUN_009ecbe0(&local_68,param_2 + 0x18,param_3);
    unaff_r8 = local_64;
    piVar10 = local_68;
    if (local_68 == (int *)&DAT_00000003) {
      uVar8 = 3;
LAB_00c04720:
      local_25c = (undefined4 *)((int)param_2 + 0x5d);
      local_260 = param_2 + 0x2d;
      local_264 = param_2 + 0x28;
      *(undefined1 *)local_25c = uVar8;
      *(undefined1 *)local_260 = 3;
      *(undefined1 *)local_264 = 3;
      uVar8 = 4;
LAB_00c04744:
      local_254 = param_2 + 7;
      *(undefined1 *)local_254 = uVar8;
      *param_1 = 2;
      uVar8 = 4;
      goto LAB_00c02ce0;
    }
    local_238 = local_68;
    local_228 = local_58;
    local_21c = local_54;
    local_220 = local_5c;
    local_224 = local_60;
    local_88 = local_50;
    piStack_84 = local_4c;
    piStack_80 = local_48;
    local_7c = local_44;
    piStack_78 = local_40;
    piStack_74 = piStack_3c;
    piStack_70 = piStack_38;
    local_22c = local_34;
    local_230 = local_30;
    FUN_00ba64b4(param_2 + 0x18);
    if (piVar10 == (int *)0x2) {
      local_1f8 = unaff_r8;
      local_1f4 = local_224;
      local_1f0 = local_220;
LAB_00c04cfc:
      FUN_006cac18(&local_68,&local_1f8);
      local_224 = local_64;
      local_220 = local_60;
      local_228 = local_5c;
      local_21c = local_58;
      uVar22 = 0;
      local_f8 = local_54;
      local_f4 = local_50;
      local_f0 = local_4c;
      local_ec = local_48;
      local_e8 = local_44;
      local_e4 = local_40;
      local_e0 = piStack_3c;
      *(undefined1 *)(param_2 + 0x17) = 0;
      unaff_r8 = local_68;
    }
    else {
      local_f8 = local_88;
      local_f4 = piStack_84;
      local_f0 = piStack_80;
      local_ec = local_7c;
      local_e8 = piStack_78;
      local_e4 = piStack_74;
      local_e0 = piStack_70;
LAB_00c02324:
      local_250 = param_2 + 0x12;
      if (*(char *)(param_2 + 0x17) != '\0') {
        FUN_00b7d620(local_250);
      }
      uVar22 = 1;
      *(undefined1 *)(param_2 + 0x17) = 0;
    }
    local_250 = param_2 + 0x12;
    local_25c = (undefined4 *)((int)param_2 + 0x5d);
    local_160 = local_f8;
    local_15c = local_f4;
    local_158 = local_f0;
    local_154 = local_ec;
    piStack_150 = local_e8;
    piStack_14c = local_e4;
    piStack_148 = local_e0;
    *(undefined1 *)local_25c = 1;
    FUN_00ba638c(local_250);
    *(undefined1 *)(param_2 + 0x2d) = 1;
    *(undefined1 *)(param_2 + 0x28) = 1;
    local_140 = local_160;
    piStack_13c = local_15c;
    piStack_138 = local_158;
    local_134 = local_154;
    local_130 = piStack_150;
    piStack_12c = piStack_14c;
    piStack_128 = piStack_148;
    piVar10 = (int *)param_2[8];
    DataMemoryBarrier(0xb);
    do {
      iVar19 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar19 + -1;
    if (iVar19 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a97218(param_2[8]);
    }
LAB_00c023c0:
    local_254 = param_2 + 7;
    local_258 = param_2 + 4;
    local_218 = local_140;
    piStack_214 = piStack_13c;
    piStack_210 = piStack_138;
    local_20c = local_134;
    piStack_208 = local_130;
    piStack_204 = piStack_12c;
    piStack_200 = piStack_128;
    *(undefined1 *)local_254 = 1;
    FUN_00bef5d0(local_258);
    break;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      uVar17 = param_2[4];
      iVar19 = param_2[5];
      goto LAB_00c024cc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22288);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22288);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xd)) {
      case 0:
        uVar17 = param_2[8];
        iVar19 = param_2[9];
        goto LAB_00c024e8;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22288);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22288);
      case 3:
        if (*(char *)(param_2 + 0xc) != '\0') {
          if (*(char *)(param_2 + 0xc) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c222a8);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c222a8);
        }
        iVar19 = param_2[0xb];
      }
      goto LAB_00c024f4;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2d)) {
    case 0:
      puVar11 = (undefined4 *)param_2[0x2a];
      puVar15 = (undefined4 *)param_2[0x2b];
      goto LAB_00c02614;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22378);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22378);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x28)) {
    case 0:
      puVar15 = (undefined4 *)param_2[0x26];
      puVar11 = (undefined4 *)param_2[0x27];
      goto LAB_00c0262c;
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
      puVar15 = (undefined4 *)param_2[0x15];
      puVar11 = (undefined4 *)param_2[0x16];
      bVar16 = *(byte *)((int)param_2 + 0x5e);
      goto LAB_00c02648;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      uVar17 = param_2[0x1e];
      iVar19 = param_2[0x1f];
      goto LAB_00c04e04;
    }
switchD_00c036f0_caseD_3:
    FUN_009ecbe0(&local_68,param_2 + 0x18,param_3);
    unaff_r8 = local_64;
    piVar10 = local_68;
    if (local_68 == (int *)&DAT_00000003) {
      uVar8 = 3;
LAB_00c0475c:
      local_25c = (undefined4 *)((int)param_2 + 0x5d);
      local_260 = param_2 + 0x2d;
      local_264 = param_2 + 0x28;
      *(undefined1 *)local_25c = uVar8;
      *(undefined1 *)local_260 = 3;
      *(undefined1 *)local_264 = 3;
      uVar8 = 4;
LAB_00c04780:
      local_254 = param_2 + 7;
      *(undefined1 *)local_254 = uVar8;
      *param_1 = 2;
      uVar8 = 5;
      goto LAB_00c02ce0;
    }
    local_238 = local_68;
    local_228 = local_58;
    local_21c = local_54;
    local_220 = local_5c;
    local_224 = local_60;
    local_88 = local_50;
    piStack_84 = local_4c;
    piStack_80 = local_48;
    local_7c = local_44;
    piStack_78 = local_40;
    piStack_74 = piStack_3c;
    piStack_70 = piStack_38;
    local_22c = local_34;
    local_230 = local_30;
    FUN_00ba64b4(param_2 + 0x18);
    if (piVar10 == (int *)0x2) {
      local_1f8 = unaff_r8;
      local_1f4 = local_224;
      local_1f0 = local_220;
LAB_00c04f80:
      FUN_006cac18(&local_68,&local_1f8);
      local_224 = local_64;
      local_220 = local_60;
      local_228 = local_5c;
      local_21c = local_58;
      uVar22 = 0;
      local_f8 = local_54;
      local_f4 = local_50;
      local_f0 = local_4c;
      local_ec = local_48;
      local_e8 = local_44;
      local_e4 = local_40;
      local_e0 = piStack_3c;
      *(undefined1 *)(param_2 + 0x17) = 0;
      unaff_r8 = local_68;
    }
    else {
      local_f8 = local_88;
      local_f4 = piStack_84;
      local_f0 = piStack_80;
      local_ec = local_7c;
      local_e8 = piStack_78;
      local_e4 = piStack_74;
      local_e0 = piStack_70;
LAB_00c02770:
      local_250 = param_2 + 0x12;
      if (*(char *)(param_2 + 0x17) != '\0') {
        FUN_00b7d620(local_250);
      }
      uVar22 = 1;
      *(undefined1 *)(param_2 + 0x17) = 0;
    }
    local_250 = param_2 + 0x12;
    local_25c = (undefined4 *)((int)param_2 + 0x5d);
    local_160 = local_f8;
    local_15c = local_f4;
    local_158 = local_f0;
    local_154 = local_ec;
    piStack_150 = local_e8;
    piStack_14c = local_e4;
    piStack_148 = local_e0;
    *(undefined1 *)local_25c = 1;
    FUN_00ba638c(local_250);
    *(undefined1 *)(param_2 + 0x2d) = 1;
    *(undefined1 *)(param_2 + 0x28) = 1;
    local_140 = local_160;
    piStack_13c = local_15c;
    piStack_138 = local_158;
    local_134 = local_154;
    local_130 = piStack_150;
    piStack_12c = piStack_14c;
    piStack_128 = piStack_148;
    piVar10 = (int *)param_2[8];
    DataMemoryBarrier(0xb);
    do {
      iVar19 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar19 + -1;
    if (iVar19 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180e54(param_2[8]);
    }
LAB_00c0280c:
    local_254 = param_2 + 7;
    local_258 = param_2 + 4;
    local_218 = local_140;
    piStack_214 = piStack_13c;
    piStack_210 = piStack_138;
    local_20c = local_134;
    piStack_208 = local_130;
    piStack_204 = piStack_12c;
    piStack_200 = piStack_128;
    *(undefined1 *)local_254 = 1;
    FUN_00c0560c(local_258);
    break;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      uVar17 = param_2[4];
      iVar19 = param_2[5];
      goto LAB_00c01978;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22288);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22288);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x18)) {
      case 0:
        uVar17 = param_2[8];
        iVar19 = param_2[9];
        goto LAB_00c01998;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22288);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22288);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x5d)) {
      case 0:
        iVar19 = param_2[0x15];
        goto LAB_00c019b8;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22278);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22278);
      case 3:
        uVar17 = param_2[0xe];
        puVar14 = (undefined *)param_2[0xf];
      }
LAB_00c01ae4:
      local_220 = (int *)((int)param_2 + 0x5d);
      piVar10 = (int *)(**(code **)(puVar14 + 0xc))(uVar17,param_3);
      if (piVar10 != (int *)0x0) {
        FUN_01139b38(param_2[0xe],param_2[0xf]);
        local_228 = (int *)param_2[0x10];
        local_22c = (int *)param_2[0x11];
        local_230 = (int *)param_2[0x12];
        local_238 = (int *)param_2[0x13];
        piVar23 = (int *)param_2[10];
        iVar19 = piVar10[0x126];
        local_120 = (int *)param_2[0xb];
        local_11c = (int *)param_2[0xc];
        local_118 = (int *)param_2[0xd];
        *(undefined1 *)(param_2 + 0x17) = 0;
        param_2[0x16] = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar13 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar13 + -1;
        bVar2 = false;
        uVar8 = iVar19 != -0x80000000;
        if (iVar13 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00a967c0(piVar10);
        }
        goto LAB_00c01bec;
      }
      *(undefined1 *)(param_2 + 0x18) = 3;
      *(undefined1 *)local_220 = 3;
LAB_00c01cbc:
      uVar8 = 3;
      break;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x35)) {
      case 0:
        local_224 = (int *)param_2[0x32];
        puVar11 = (undefined4 *)param_2[0x33];
        goto LAB_00c01e38;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c222e8);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c222e8);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x30)) {
      case 0:
        puVar11 = (undefined4 *)param_2[0x2e];
        local_224 = (int *)param_2[0x2f];
        goto LAB_00c01e50;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b3c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b3c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x7d)) {
      case 0:
        puVar11 = (undefined4 *)param_2[0x1d];
        local_224 = (int *)param_2[0x1e];
        bVar16 = *(byte *)((int)param_2 + 0x7e);
        goto LAB_00c01e6c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b4c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b4c);
      case 4:
        uVar17 = param_2[0x26];
        iVar19 = param_2[0x27];
        goto LAB_00c05300;
      }
switchD_00c0363c_caseD_3:
      FUN_009ecbe0(&local_68,param_2 + 0x20,param_3);
      unaff_r8 = local_64;
      piVar10 = local_68;
      if (local_68 != (int *)&DAT_00000003) {
        local_238 = local_68;
        local_228 = local_58;
        local_21c = local_54;
        local_220 = local_5c;
        local_224 = local_60;
        local_88 = local_50;
        piStack_84 = local_4c;
        piStack_80 = local_48;
        local_7c = local_44;
        piStack_78 = local_40;
        piStack_74 = piStack_3c;
        piStack_70 = piStack_38;
        local_22c = local_34;
        local_230 = local_30;
        FUN_00ba64b4(param_2 + 0x20);
        if (piVar10 != (int *)0x2) {
          local_f8 = local_88;
          local_f4 = piStack_84;
          local_f0 = piStack_80;
          local_ec = local_7c;
          local_e8 = piStack_78;
          local_e4 = piStack_74;
          local_e0 = piStack_70;
          goto LAB_00c01f94;
        }
        local_98 = unaff_r8;
        local_94 = local_224;
        local_90 = local_220;
LAB_00c05480:
        FUN_006cac18(&local_68,&local_98);
        local_224 = local_64;
        local_220 = local_60;
        local_228 = local_5c;
        local_21c = local_58;
        uVar22 = 0;
        local_f8 = local_54;
        local_f4 = local_50;
        local_f0 = local_4c;
        local_ec = local_48;
        local_e8 = local_44;
        local_e4 = local_40;
        local_e0 = piStack_3c;
        *(undefined1 *)(param_2 + 0x1f) = 0;
        unaff_r8 = local_68;
LAB_00c01fb4:
        local_250 = param_2 + 0x1a;
        local_25c = (undefined4 *)((int)param_2 + 0x7d);
        local_160 = local_f8;
        local_15c = local_f4;
        local_158 = local_f0;
        local_154 = local_ec;
        piStack_150 = local_e8;
        piStack_14c = local_e4;
        piStack_148 = local_e0;
        *(undefined1 *)local_25c = 1;
        FUN_00ba638c(local_250);
        *(undefined1 *)(param_2 + 0x35) = 1;
        *(undefined1 *)(param_2 + 0x30) = 1;
        local_140 = local_160;
        piStack_13c = local_15c;
        piStack_138 = local_158;
        local_134 = local_154;
        local_130 = piStack_150;
        piStack_12c = piStack_14c;
        piStack_128 = piStack_148;
        FUN_00c058e0(param_2 + 8);
        goto LAB_00c02008;
      }
      uVar8 = 3;
LAB_00c046f8:
      local_25c = (undefined4 *)((int)param_2 + 0x7d);
      local_260 = param_2 + 0x35;
      local_264 = param_2 + 0x30;
      *(undefined1 *)local_25c = uVar8;
      *(undefined1 *)local_260 = 3;
      *(undefined1 *)local_264 = 3;
      uVar8 = 4;
    }
    local_254 = param_2 + 7;
    *(undefined1 *)local_254 = uVar8;
    *param_1 = 2;
    uVar8 = 6;
    goto LAB_00c02ce0;
  case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      uVar17 = param_2[4];
      iVar19 = param_2[5];
      goto LAB_00c0291c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22288);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22288);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0xd)) {
      case 0:
        uVar17 = param_2[8];
        iVar19 = param_2[9];
        goto LAB_00c02938;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22288);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22288);
      case 3:
        if (*(char *)(param_2 + 0xc) != '\0') {
          if (*(char *)(param_2 + 0xc) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01c222b8);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c222b8);
        }
        iVar19 = param_2[0xb];
      }
      goto LAB_00c02944;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2d)) {
    case 0:
      puVar11 = (undefined4 *)param_2[0x2a];
      puVar15 = (undefined4 *)param_2[0x2b];
      goto LAB_00c02a60;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22428);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22428);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x28)) {
    case 0:
      puVar15 = (undefined4 *)param_2[0x26];
      puVar11 = (undefined4 *)param_2[0x27];
      goto LAB_00c02a78;
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
      puVar15 = (undefined4 *)param_2[0x15];
      puVar11 = (undefined4 *)param_2[0x16];
      bVar16 = *(byte *)((int)param_2 + 0x5e);
      goto LAB_00c02a94;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      uVar17 = param_2[0x1e];
      iVar19 = param_2[0x1f];
      goto LAB_00c04828;
    }
switchD_00c03600_caseD_3:
    FUN_009ecbe0(&local_68,param_2 + 0x18,param_3);
    unaff_r8 = local_64;
    piVar10 = local_68;
    if (local_68 == (int *)&DAT_00000003) {
      uVar8 = 3;
LAB_00c04798:
      local_25c = (undefined4 *)((int)param_2 + 0x5d);
      local_260 = param_2 + 0x2d;
      local_264 = param_2 + 0x28;
      *(undefined1 *)local_25c = uVar8;
      *(undefined1 *)local_260 = 3;
      *(undefined1 *)local_264 = 3;
      uVar8 = 4;
LAB_00c047bc:
      local_254 = param_2 + 7;
      *(undefined1 *)local_254 = uVar8;
      *param_1 = 2;
      uVar8 = 7;
      goto LAB_00c02ce0;
    }
    local_238 = local_68;
    local_228 = local_58;
    local_21c = local_54;
    local_220 = local_5c;
    local_224 = local_60;
    local_88 = local_50;
    piStack_84 = local_4c;
    piStack_80 = local_48;
    local_7c = local_44;
    piStack_78 = local_40;
    piStack_74 = piStack_3c;
    piStack_70 = piStack_38;
    local_22c = local_34;
    local_230 = local_30;
    FUN_00ba64b4(param_2 + 0x18);
    if (piVar10 == (int *)0x2) {
      local_1f8 = unaff_r8;
      local_1f4 = local_224;
      local_1f0 = local_220;
LAB_00c049c8:
      FUN_006cac18(&local_68,&local_1f8);
      local_224 = local_64;
      local_220 = local_60;
      local_228 = local_5c;
      local_21c = local_58;
      uVar22 = 0;
      local_f8 = local_54;
      local_f4 = local_50;
      local_f0 = local_4c;
      local_ec = local_48;
      local_e8 = local_44;
      local_e4 = local_40;
      local_e0 = piStack_3c;
      *(undefined1 *)(param_2 + 0x17) = 0;
      unaff_r8 = local_68;
    }
    else {
      local_f8 = local_88;
      local_f4 = piStack_84;
      local_f0 = piStack_80;
      local_ec = local_7c;
      local_e8 = piStack_78;
      local_e4 = piStack_74;
      local_e0 = piStack_70;
LAB_00c02bbc:
      local_250 = param_2 + 0x12;
      if (*(char *)(param_2 + 0x17) != '\0') {
        FUN_00b7d620(local_250);
      }
      uVar22 = 1;
      *(undefined1 *)(param_2 + 0x17) = 0;
    }
    local_250 = param_2 + 0x12;
    local_25c = (undefined4 *)((int)param_2 + 0x5d);
    local_160 = local_f8;
    local_15c = local_f4;
    local_158 = local_f0;
    local_154 = local_ec;
    piStack_150 = local_e8;
    piStack_14c = local_e4;
    piStack_148 = local_e0;
    *(undefined1 *)local_25c = 1;
    FUN_00ba638c(local_250);
    *(undefined1 *)(param_2 + 0x2d) = 1;
    *(undefined1 *)(param_2 + 0x28) = 1;
    local_140 = local_160;
    piStack_13c = local_15c;
    piStack_138 = local_158;
    local_134 = local_154;
    local_130 = piStack_150;
    piStack_12c = piStack_14c;
    piStack_128 = piStack_148;
    piVar10 = (int *)param_2[8];
    DataMemoryBarrier(0xb);
    do {
      iVar19 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar19 + -1;
    if (iVar19 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177340(param_2[8]);
    }
LAB_00c02c58:
    local_254 = param_2 + 7;
    local_258 = param_2 + 4;
    local_218 = local_140;
    piStack_214 = piStack_13c;
    piStack_210 = piStack_138;
    local_20c = local_134;
    piStack_208 = local_130;
    piStack_204 = piStack_12c;
    piStack_200 = piStack_128;
    *(undefined1 *)local_254 = 1;
    FUN_00c05ae8(local_258);
  }
  piVar10 = local_238;
switchD_00c0123c_caseD_5:
  param_1[1] = piVar10;
  param_1[2] = unaff_r8;
  param_1[5] = local_228;
  param_1[6] = local_21c;
  param_1[3] = local_224;
  param_1[4] = local_220;
  *param_1 = uVar22;
  param_1[7] = local_218;
  param_1[8] = piStack_214;
  param_1[9] = piStack_210;
  param_1[10] = local_20c;
  param_1[0xb] = piStack_208;
  param_1[0xc] = piStack_204;
  param_1[0xd] = piStack_200;
  param_1[0xe] = local_22c;
  param_1[0xf] = local_230;
  uVar8 = 1;
LAB_00c02ce0:
  *(undefined1 *)(param_2 + 3) = uVar8;
  return;
}

