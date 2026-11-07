// FUN_011add80 @ 011add80 size=13564 calls_out=39 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011add80(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

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
  undefined4 *local_25c;
  undefined4 *local_258;
  undefined4 *local_254;
  undefined4 *local_250;
  undefined4 *local_24c;
  undefined4 *local_248;
  int *local_230;
  int *local_228;
  int *local_224;
  int *local_220;
  int *local_21c;
  int *local_218;
  int *local_214;
  int *local_210;
  int *piStack_20c;
  int *piStack_208;
  int *local_204;
  int *piStack_200;
  int *piStack_1fc;
  int *piStack_1f8;
  int *local_1f0;
  int *local_1ec;
  int *local_1e8;
  int *piStack_1e4;
  int *local_1e0;
  int *piStack_1dc;
  int *piStack_1d8;
  int *local_1d4;
  int *local_1d0;
  int *piStack_1cc;
  int *piStack_1c8;
  int *piStack_1c4;
  int *local_1c0;
  int *local_1bc;
  int *piStack_1b8;
  int *piStack_1b4;
  int *piStack_1b0;
  int *piStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  int *local_198;
  int *local_194;
  int *local_190;
  int *local_18c;
  int *local_188;
  int *local_184;
  int *local_180;
  int *piStack_17c;
  int *local_178;
  int *local_174;
  int *local_170;
  int *piStack_16c;
  int *piStack_168;
  int *local_164;
  int *local_160;
  undefined4 local_158;
  int *local_154;
  int *local_150;
  int *local_14c;
  int *piStack_148;
  int *piStack_144;
  int *piStack_140;
  int *local_138;
  int *piStack_134;
  int *piStack_130;
  int *local_12c;
  int *local_128;
  int *piStack_124;
  int *piStack_120;
  int *local_118;
  int *local_114;
  int *local_110;
  int *local_10c;
  int *local_108;
  int *local_104;
  int *local_100;
  int *local_fc;
  undefined4 local_f8;
  int *local_f0;
  int *piStack_ec;
  int *piStack_e8;
  int *piStack_e4;
  int *local_e0;
  int *piStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  int *local_d0;
  int *local_cc;
  int *piStack_c8;
  int *piStack_c4;
  int *piStack_c0;
  int *piStack_bc;
  int *local_b8;
  int *local_b4;
  int *local_b0;
  int *local_a8;
  int *piStack_a4;
  int *piStack_a0;
  int *local_9c;
  int *piStack_98;
  int *piStack_94;
  int *piStack_90;
  int *local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  int *local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  int *piStack_5c;
  int *piStack_58;
  int *local_54;
  int *local_50;
  int *piStack_4c;
  int *local_48;
  int *piStack_44;
  int *piStack_40;
  int *local_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  
  puVar12 = (undefined4 *)((uint)&local_198 | 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 3)) {
  case 0:
    uVar17 = *param_2;
    iVar19 = param_2[1];
    param_2[2] = iVar19;
    uVar8 = FUN_00a215e0(*(undefined4 *)(*(int *)(iVar19 + 0x10) + 0x3c),
                         *(undefined4 *)(*(int *)(iVar19 + 0x10) + 0x40));
    local_214 = (int *)0x80000007;
    uVar22 = 0;
    piVar10 = extraout_r2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar8) {
    case 0:
      param_2[4] = uVar17;
      param_2[5] = iVar19;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_011adf0c:
      param_2[8] = uVar17;
      param_2[9] = iVar19;
      param_2[6] = iVar19;
      *(undefined1 *)(param_2 + 0xf) = 0;
LAB_011ae034:
      *(undefined1 *)(param_2 + 0xe) = 0;
      param_2[10] = uVar17;
      param_2[0xb] = iVar19;
LAB_011ae044:
      param_2[0xc] = iVar19;
      param_2[0xd] = 0;
LAB_011ae050:
      puVar15 = param_2 + 8;
      puVar11 = param_2 + 0xd;
      iVar19 = FUN_011b21e4(iVar19);
      piVar10 = *(int **)(iVar19 + 0x10);
      do {
        iVar13 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar13 + 1;
      if (iVar13 < 0) goto LAB_011b0968;
      FUN_006666fc(&local_88,*(undefined4 *)(iVar19 + 4),*(undefined4 *)(iVar19 + 8));
      piVar4 = local_80;
      piVar3 = local_84;
      piVar23 = local_88;
      local_7c = (int *)CONCAT31(local_7c._1_3_,*(undefined1 *)(iVar19 + 0xc));
      local_198 = local_84;
      local_194 = local_80;
      local_190 = local_7c;
      *(undefined1 *)puVar11 = 1;
      if (local_88 != (int *)&DAT_80000000) {
        local_f0 = local_84;
        piStack_ec = local_80;
        piStack_e8 = local_7c;
        *(undefined1 *)(param_2 + 0xf) = 1;
        *(undefined1 *)(param_2 + 0xe) = 1;
        local_88 = local_84;
        local_84 = local_80;
        local_80 = local_7c;
        param_2[8] = piVar23;
        param_2[9] = piVar3;
        param_2[10] = piVar4;
        param_2[0xb] = local_7c;
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
        goto LAB_011ae29c;
      }
      uVar8 = 3;
      *(undefined1 *)(param_2 + 0xf) = 3;
      *(undefined1 *)(param_2 + 0xe) = 3;
LAB_011b1328:
      local_24c = param_2 + 7;
      *(undefined1 *)local_24c = uVar8;
      *param_1 = 2;
      uVar8 = 3;
      goto LAB_011af820;
    case 1:
      param_2[4] = uVar17;
      param_2[5] = iVar19;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_011aec68:
      param_2[8] = uVar17;
      param_2[6] = iVar19;
      param_2[9] = iVar19;
      *(undefined1 *)(param_2 + 0xd) = 0;
LAB_011aec84:
      param_2[10] = uVar17;
      param_2[0xb] = iVar19;
      *(undefined1 *)(param_2 + 0xc) = 0;
LAB_011aec90:
      puVar11 = param_2 + 8;
      iVar19 = FUN_011b21e4(iVar19);
      if (*(char *)(iVar19 + 0xc) != '\0') {
LAB_011aecc8:
        local_84 = *(int **)(iVar19 + 0x20);
        do {
          iVar19 = *local_84;
          bVar2 = (bool)hasExclusiveAccess(local_84);
        } while (!bVar2);
        *local_84 = iVar19 + 1;
        if (iVar19 < 0) {
LAB_011b0968:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x11b0968);
          (*pcVar1)();
        }
        *(undefined1 *)(param_2 + 0xc) = 1;
        local_88 = (int *)0x2;
        local_1e0 = local_80;
        piStack_1dc = local_7c;
        piStack_1d8 = local_78;
        local_1d4 = local_74;
        local_1d0 = local_70;
        piStack_1cc = local_6c;
        piStack_1c8 = local_68;
        piStack_1c4 = local_64;
        local_1c0 = local_60;
        local_1bc = piStack_5c;
        piStack_1b8 = piStack_58;
        piStack_1b4 = local_54;
        piStack_1b0 = local_50;
        *(undefined1 *)(param_2 + 0xd) = 1;
        piVar10 = local_84;
        local_f0 = local_1e0;
        piStack_ec = piStack_1dc;
        piStack_e8 = piStack_1d8;
        piStack_e4 = local_1d4;
        local_e0 = local_1d0;
        piStack_dc = piStack_1cc;
        piStack_d8 = piStack_1c8;
        piStack_d4 = piStack_1c4;
        local_d0 = local_1c0;
        local_cc = local_1bc;
        piStack_c8 = piStack_1b8;
        piStack_c4 = piStack_1b4;
        piStack_c0 = piStack_1b0;
LAB_011aed40:
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
LAB_011aedb0:
        *(undefined1 *)(param_2 + 0x28) = 0;
        param_2[0x26] = puVar15;
        param_2[0x27] = puVar11;
LAB_011aedc8:
        *(undefined2 *)((int)param_2 + 0x5d) = 0x100;
        bVar16 = 1;
        param_2[0x15] = puVar15;
        param_2[0x16] = puVar11;
LAB_011aede4:
        puVar9 = param_2 + 0x12;
        *puVar9 = 0;
        param_2[0x14] = 0;
        param_2[0x13] = 4;
        *(undefined1 *)(param_2 + 0x17) = 1;
        ppiVar20 = &local_88;
        FUN_00d063a4(ppiVar20,puVar9,puVar15,puVar11);
        if (local_88 == (int *)0x2) {
          if ((bVar16 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x17) = 0;
            local_b8 = (int *)*puVar9;
            local_b4 = (int *)param_2[0x13];
            local_b0 = (int *)param_2[0x14];
            FUN_009ec520(&local_88);
            local_f0 = local_88;
            piStack_ec = local_84;
            piStack_e8 = local_80;
            piStack_e4 = local_7c;
            local_e0 = local_78;
            piStack_dc = local_74;
            piStack_d8 = local_70;
            piStack_d4 = local_6c;
            local_d0 = local_68;
            local_cc = local_64;
            piStack_c8 = local_60;
            piStack_c4 = piStack_5c;
            piStack_c0 = piStack_58;
            piStack_bc = local_54;
            param_2[0x18] = local_88;
            param_2[0x19] = local_84;
            param_2[0x1a] = local_80;
            param_2[0x1b] = local_7c;
            param_2[0x1c] = local_78;
            param_2[0x1d] = local_74;
            param_2[0x1e] = local_70;
            param_2[0x1f] = local_6c;
            param_2[0x20] = local_68;
            param_2[0x21] = local_64;
            param_2[0x22] = local_60;
            param_2[0x23] = piStack_5c;
            param_2[0x24] = piStack_58;
            param_2[0x25] = local_54;
            goto switchD_011b00e0_caseD_3;
          }
          uVar18 = param_2[0x14];
          if (0x2492492 < uVar18) {
            uVar17 = 0;
LAB_011aeff0:
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
            if (iVar19 == 0) goto LAB_011aeff0;
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
LAB_011b1804:
            (**(code **)(iVar19 + 0xc))(&local_88,uVar17,param_3);
            piVar7 = piStack_4c;
            piVar6 = local_50;
            piVar5 = local_70;
            piVar4 = local_74;
            piVar3 = local_78;
            piVar23 = local_7c;
            unaff_r8 = local_80;
            piVar10 = local_88;
            if (local_88 == (int *)0x2) {
              uVar8 = 4;
              goto LAB_011b13a8;
            }
            local_230 = local_84;
            local_220 = local_74;
            local_214 = local_70;
            local_218 = local_78;
            local_21c = local_7c;
            local_48 = local_6c;
            piStack_44 = local_68;
            piStack_40 = local_64;
            local_3c = local_60;
            piStack_38 = piStack_5c;
            piStack_34 = piStack_58;
            piStack_30 = local_54;
            local_224 = local_50;
            local_228 = piStack_4c;
            FUN_01139b38(param_2[0x1e],param_2[0x1f]);
            if (((uint)piVar10 & 1) != 0) {
              local_118 = local_48;
              local_114 = piStack_44;
              local_110 = piStack_40;
              local_10c = local_3c;
              local_108 = piStack_38;
              local_104 = piStack_34;
              local_100 = piStack_30;
              FUN_009495dc(param_2 + 0x20);
              FUN_007bc140(param_2 + 0x18);
              goto LAB_011aef0c;
            }
            *puVar12 = piVar23;
            puVar12[1] = piVar3;
            local_188 = piVar5;
            local_18c = piVar4;
            local_198 = unaff_r8;
            local_184 = local_48;
            local_180 = piStack_44;
            piStack_17c = piStack_40;
            local_178 = local_3c;
            local_174 = piStack_38;
            local_170 = piStack_34;
            piStack_16c = piStack_30;
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
            puVar11[5] = local_48;
            puVar11[6] = piStack_44;
            puVar11[7] = piStack_40;
            puVar11[8] = local_3c;
            puVar11[9] = piStack_38;
            puVar11[10] = piStack_34;
            puVar11[0xb] = piStack_30;
            puVar11[0xc] = piVar6;
            puVar11[0xd] = piVar7;
            piVar10[2] = iVar19 + 1;
            puVar11 = (undefined4 *)param_2[0x23];
            puVar15 = (undefined4 *)param_2[0x21];
          }
          param_2[0x1c] = 0;
          FUN_009495dc(param_2 + 0x20);
          local_1f0 = (int *)param_2[0x18];
          local_1ec = (int *)param_2[0x19];
          local_1e8 = (int *)param_2[0x1a];
          goto LAB_011b1984;
        }
        local_230 = local_88;
        local_220 = local_78;
        local_214 = local_74;
        local_218 = local_7c;
        local_21c = local_80;
        local_118 = local_70;
        local_114 = local_6c;
        local_110 = local_68;
        local_10c = local_64;
        local_108 = local_60;
        local_104 = piStack_5c;
        local_100 = piStack_58;
        local_224 = local_54;
        local_228 = local_50;
        unaff_r8 = local_84;
        goto LAB_011aef0c;
      }
      FUN_00aba2c0(&local_118,0);
      if (local_118 == (int *)0x2) goto LAB_011aecc8;
      local_48 = local_110;
      piStack_44 = local_10c;
      piStack_40 = local_108;
      local_3c = local_104;
      piStack_38 = local_100;
      piStack_34 = local_fc;
      piStack_30 = local_f8;
      *(undefined1 *)(param_2 + 0xc) = 1;
      if (local_118 == (int *)&DAT_00000003) {
        *(undefined1 *)(param_2 + 0xd) = 3;
LAB_011afe18:
        uVar8 = 3;
        goto LAB_011b13cc;
      }
      FUN_006bd898(&local_88,&local_118,**(undefined4 **)(param_2[9] + 0x10),
                   (*(undefined4 **)(param_2[9] + 0x10))[1]);
      local_f0 = local_80;
      piStack_ec = local_7c;
      piStack_e8 = local_78;
      piStack_e4 = local_74;
      local_e0 = local_70;
      piStack_dc = local_6c;
      piStack_d8 = local_68;
      piStack_d4 = local_64;
      local_d0 = local_60;
      local_cc = piStack_5c;
      piStack_c8 = piStack_58;
      piStack_c4 = local_54;
      piStack_c0 = local_50;
      *(undefined1 *)(param_2 + 0xd) = 1;
      if (local_88 == (int *)&DAT_00000003) goto LAB_011afe18;
      local_1e0 = local_80;
      piStack_1dc = local_7c;
      piStack_1d8 = local_78;
      local_1d4 = local_74;
      local_1d0 = local_70;
      piStack_1cc = local_6c;
      piStack_1c8 = local_68;
      piStack_1c4 = local_64;
      local_1c0 = local_60;
      local_1bc = piStack_5c;
      piStack_1b8 = piStack_58;
      piStack_1b4 = local_54;
      piStack_1b0 = local_50;
      piVar10 = local_84;
      if ((local_88 == (int *)0x2) ||
         (FUN_009ed8c0(&local_198,param_2[6],&local_88), piVar10 = local_194,
         local_198 == (int *)0x2)) goto LAB_011aed40;
      local_230 = local_198;
      uVar22 = 1;
      local_220 = local_188;
      local_214 = local_184;
      local_218 = local_18c;
      local_21c = local_190;
      local_138 = local_180;
      piStack_134 = piStack_17c;
      piStack_130 = local_178;
      local_12c = local_174;
      local_128 = local_170;
      piStack_124 = piStack_16c;
      piStack_120 = piStack_168;
      local_224 = local_164;
      local_228 = local_160;
      unaff_r8 = local_194;
      goto LAB_011aefa8;
    case 2:
      param_2[4] = uVar17;
      param_2[5] = iVar19;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_011af060:
      param_2[8] = uVar17;
      param_2[6] = iVar19;
      param_2[9] = iVar19;
      *(undefined1 *)(param_2 + 0xd) = 0;
LAB_011af07c:
      param_2[10] = uVar17;
      param_2[0xb] = iVar19;
      *(undefined1 *)(param_2 + 0xc) = 0;
LAB_011af088:
      puVar11 = param_2 + 8;
      iVar19 = FUN_011b21e4(iVar19);
      if (*(char *)(iVar19 + 0xc) != '\0') {
LAB_011af0c0:
        local_84 = *(int **)(iVar19 + 0x14);
        do {
          iVar19 = *local_84;
          bVar2 = (bool)hasExclusiveAccess(local_84);
        } while (!bVar2);
        *local_84 = iVar19 + 1;
        if (iVar19 < 0) goto LAB_011b0968;
        *(undefined1 *)(param_2 + 0xc) = 1;
        local_88 = (int *)0x2;
        local_1e0 = local_80;
        piStack_1dc = local_7c;
        piStack_1d8 = local_78;
        local_1d4 = local_74;
        local_1d0 = local_70;
        piStack_1cc = local_6c;
        piStack_1c8 = local_68;
        piStack_1c4 = local_64;
        local_1c0 = local_60;
        local_1bc = piStack_5c;
        piStack_1b8 = piStack_58;
        piStack_1b4 = local_54;
        piStack_1b0 = local_50;
        *(undefined1 *)(param_2 + 0xd) = 1;
        piVar10 = local_84;
        local_f0 = local_1e0;
        piStack_ec = piStack_1dc;
        piStack_e8 = piStack_1d8;
        piStack_e4 = local_1d4;
        local_e0 = local_1d0;
        piStack_dc = piStack_1cc;
        piStack_d8 = piStack_1c8;
        piStack_d4 = piStack_1c4;
        local_d0 = local_1c0;
        local_cc = local_1bc;
        piStack_c8 = piStack_1b8;
        piStack_c4 = piStack_1b4;
        piStack_c0 = piStack_1b0;
LAB_011af138:
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
LAB_011af1a8:
        *(undefined1 *)(param_2 + 0x28) = 0;
        param_2[0x26] = puVar15;
        param_2[0x27] = puVar11;
LAB_011af1c0:
        *(undefined2 *)((int)param_2 + 0x5d) = 0x100;
        bVar16 = 1;
        param_2[0x15] = puVar15;
        param_2[0x16] = puVar11;
LAB_011af1dc:
        puVar9 = param_2 + 0x12;
        *puVar9 = 0;
        param_2[0x14] = 0;
        param_2[0x13] = 4;
        *(undefined1 *)(param_2 + 0x17) = 1;
        ppiVar20 = &local_88;
        FUN_00cff76c(ppiVar20,puVar9,puVar15,puVar11);
        if (local_88 == (int *)0x2) {
          if ((bVar16 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x17) = 0;
            local_b8 = (int *)*puVar9;
            local_b4 = (int *)param_2[0x13];
            local_b0 = (int *)param_2[0x14];
            FUN_009ec520(&local_88);
            local_f0 = local_88;
            piStack_ec = local_84;
            piStack_e8 = local_80;
            piStack_e4 = local_7c;
            local_e0 = local_78;
            piStack_dc = local_74;
            piStack_d8 = local_70;
            piStack_d4 = local_6c;
            local_d0 = local_68;
            local_cc = local_64;
            piStack_c8 = local_60;
            piStack_c4 = piStack_5c;
            piStack_c0 = piStack_58;
            piStack_bc = local_54;
            param_2[0x18] = local_88;
            param_2[0x19] = local_84;
            param_2[0x1a] = local_80;
            param_2[0x1b] = local_7c;
            param_2[0x1c] = local_78;
            param_2[0x1d] = local_74;
            param_2[0x1e] = local_70;
            param_2[0x1f] = local_6c;
            param_2[0x20] = local_68;
            param_2[0x21] = local_64;
            param_2[0x22] = local_60;
            param_2[0x23] = piStack_5c;
            param_2[0x24] = piStack_58;
            param_2[0x25] = local_54;
            goto switchD_011b011c_caseD_3;
          }
          uVar18 = param_2[0x14];
          if (0x2492492 < uVar18) {
            uVar17 = 0;
LAB_011af3e8:
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
            if (iVar19 == 0) goto LAB_011af3e8;
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
LAB_011b1a8c:
            (**(code **)(iVar19 + 0xc))(&local_88,uVar17,param_3);
            piVar7 = piStack_4c;
            piVar6 = local_50;
            piVar5 = local_70;
            piVar4 = local_74;
            piVar3 = local_78;
            piVar23 = local_7c;
            unaff_r8 = local_80;
            piVar10 = local_88;
            if (local_88 == (int *)0x2) {
              uVar8 = 4;
              goto LAB_011b13e4;
            }
            local_230 = local_84;
            local_220 = local_74;
            local_214 = local_70;
            local_218 = local_78;
            local_21c = local_7c;
            local_48 = local_6c;
            piStack_44 = local_68;
            piStack_40 = local_64;
            local_3c = local_60;
            piStack_38 = piStack_5c;
            piStack_34 = piStack_58;
            piStack_30 = local_54;
            local_224 = local_50;
            local_228 = piStack_4c;
            FUN_01139b38(param_2[0x1e],param_2[0x1f]);
            if (((uint)piVar10 & 1) != 0) {
              local_118 = local_48;
              local_114 = piStack_44;
              local_110 = piStack_40;
              local_10c = local_3c;
              local_108 = piStack_38;
              local_104 = piStack_34;
              local_100 = piStack_30;
              FUN_009495dc(param_2 + 0x20);
              FUN_007bc140(param_2 + 0x18);
              goto LAB_011af304;
            }
            *puVar12 = piVar23;
            puVar12[1] = piVar3;
            local_188 = piVar5;
            local_18c = piVar4;
            local_198 = unaff_r8;
            local_184 = local_48;
            local_180 = piStack_44;
            piStack_17c = piStack_40;
            local_178 = local_3c;
            local_174 = piStack_38;
            local_170 = piStack_34;
            piStack_16c = piStack_30;
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
            puVar11[5] = local_48;
            puVar11[6] = piStack_44;
            puVar11[7] = piStack_40;
            puVar11[8] = local_3c;
            puVar11[9] = piStack_38;
            puVar11[10] = piStack_34;
            puVar11[0xb] = piStack_30;
            puVar11[0xc] = piVar6;
            puVar11[0xd] = piVar7;
            piVar10[2] = iVar19 + 1;
            puVar11 = (undefined4 *)param_2[0x23];
            puVar15 = (undefined4 *)param_2[0x21];
          }
          param_2[0x1c] = 0;
          FUN_009495dc(param_2 + 0x20);
          local_1f0 = (int *)param_2[0x18];
          local_1ec = (int *)param_2[0x19];
          local_1e8 = (int *)param_2[0x1a];
          goto LAB_011b1c08;
        }
        local_230 = local_88;
        local_220 = local_78;
        local_214 = local_74;
        local_218 = local_7c;
        local_21c = local_80;
        local_118 = local_70;
        local_114 = local_6c;
        local_110 = local_68;
        local_10c = local_64;
        local_108 = local_60;
        local_104 = piStack_5c;
        local_100 = piStack_58;
        local_224 = local_54;
        local_228 = local_50;
        unaff_r8 = local_84;
        goto LAB_011af304;
      }
      FUN_00aba2c0(&local_118,0);
      if (local_118 == (int *)0x2) goto LAB_011af0c0;
      local_48 = local_110;
      piStack_44 = local_10c;
      piStack_40 = local_108;
      local_3c = local_104;
      piStack_38 = local_100;
      piStack_34 = local_fc;
      piStack_30 = local_f8;
      *(undefined1 *)(param_2 + 0xc) = 1;
      if (local_118 == (int *)&DAT_00000003) {
        *(undefined1 *)(param_2 + 0xd) = 3;
LAB_011afe98:
        uVar8 = 3;
        goto LAB_011b1408;
      }
      FUN_006bd898(&local_88,&local_118,**(undefined4 **)(param_2[9] + 0x10),
                   (*(undefined4 **)(param_2[9] + 0x10))[1]);
      local_f0 = local_80;
      piStack_ec = local_7c;
      piStack_e8 = local_78;
      piStack_e4 = local_74;
      local_e0 = local_70;
      piStack_dc = local_6c;
      piStack_d8 = local_68;
      piStack_d4 = local_64;
      local_d0 = local_60;
      local_cc = piStack_5c;
      piStack_c8 = piStack_58;
      piStack_c4 = local_54;
      piStack_c0 = local_50;
      *(undefined1 *)(param_2 + 0xd) = 1;
      if (local_88 == (int *)&DAT_00000003) goto LAB_011afe98;
      local_1e0 = local_80;
      piStack_1dc = local_7c;
      piStack_1d8 = local_78;
      local_1d4 = local_74;
      local_1d0 = local_70;
      piStack_1cc = local_6c;
      piStack_1c8 = local_68;
      piStack_1c4 = local_64;
      local_1c0 = local_60;
      local_1bc = piStack_5c;
      piStack_1b8 = piStack_58;
      piStack_1b4 = local_54;
      piStack_1b0 = local_50;
      piVar10 = local_84;
      if ((local_88 == (int *)0x2) ||
         (FUN_009ed8c0(&local_198,param_2[6],&local_88), piVar10 = local_194,
         local_198 == (int *)0x2)) goto LAB_011af138;
      local_230 = local_198;
      uVar22 = 1;
      local_220 = local_188;
      local_214 = local_184;
      local_218 = local_18c;
      local_21c = local_190;
      local_138 = local_180;
      piStack_134 = piStack_17c;
      piStack_130 = local_178;
      local_12c = local_174;
      local_128 = local_170;
      piStack_124 = piStack_16c;
      piStack_120 = piStack_168;
      local_224 = local_164;
      local_228 = local_160;
      unaff_r8 = local_194;
      goto LAB_011af3a0;
    case 3:
      param_2[4] = uVar17;
      param_2[5] = iVar19;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_011ae55c:
      param_2[8] = uVar17;
      param_2[6] = iVar19;
      param_2[9] = iVar19;
      *(undefined1 *)(param_2 + 0x18) = 0;
LAB_011ae57c:
      *(undefined1 *)((int)param_2 + 0x5d) = 0;
      param_2[0x14] = uVar17;
      param_2[0x15] = iVar19;
LAB_011ae59c:
      local_214 = param_2 + 10;
      *(undefined1 *)(param_2 + 0x17) = 0;
      param_2[0x16] = 0;
      iVar19 = FUN_011b21e4(iVar19);
      if ((*(char *)(iVar19 + 0xc) != '\0') || (FUN_00aba2c0(&local_118,0), local_118 == (int *)0x2)
         ) {
        piVar10 = *(int **)(iVar19 + 0x18);
        do {
          iVar13 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar13 + 1;
        if (iVar13 < 0) goto LAB_011b0968;
        param_2[0x10] = piVar10;
        *(undefined1 *)(param_2 + 0x17) = 1;
        piVar10 = *(int **)(iVar19 + 0x28);
        do {
          iVar13 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar13 + 1;
        if (iVar13 < 0) goto LAB_011b0968;
        param_2[0x11] = piVar10;
        *(undefined1 *)((int)param_2 + 0x5b) = 1;
        piVar10 = *(int **)(iVar19 + 0x10);
        do {
          iVar13 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar13 + 1;
        if (iVar13 < 0) goto LAB_011b0968;
        param_2[0x12] = piVar10;
        *(undefined1 *)((int)param_2 + 0x5a) = 1;
        FUN_006666fc(local_214,*(undefined4 *)(iVar19 + 4),*(undefined4 *)(iVar19 + 8));
        uVar8 = *(undefined1 *)(iVar19 + 0xc);
        *(undefined1 *)((int)param_2 + 0x59) = 1;
        *(undefined1 *)(param_2 + 0xd) = uVar8;
        piVar10 = *(int **)(iVar19 + 0x2c);
        do {
          iVar13 = *piVar10;
          bVar2 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar2);
        *piVar10 = iVar13 + 1;
        if (iVar13 < 0) goto LAB_011b0968;
        param_2[0x13] = piVar10;
        *(undefined1 *)(param_2 + 0x16) = 1;
        uVar17 = FUN_00b8a1bc(*(int *)(*(int *)(iVar19 + 0x1c) + 0x3c) + 8);
        puVar14 = &DAT_01c13d9c;
        param_2[0xe] = uVar17;
        param_2[0xf] = &DAT_01c13d9c;
        goto LAB_011ae6c8;
      }
      bVar2 = true;
      local_48 = local_114;
      piStack_44 = local_110;
      piStack_40 = local_10c;
      local_220 = local_108;
      local_224 = local_104;
      local_228 = local_100;
      local_230 = local_fc;
      local_158._0_3_ = (undefined3)((uint)local_f8 >> 8);
      piVar23 = local_118;
      uVar8 = (undefined1)local_f8;
LAB_011ae7d0:
      local_214 = param_2 + 10;
      local_218 = (int *)((int)param_2 + 0x5d);
      local_21c = param_2 + 8;
      local_254 = param_2 + 0x18;
      local_a8 = local_48;
      piStack_a4 = piStack_44;
      piStack_a0 = piStack_40;
      *(undefined1 *)local_218 = 1;
      FUN_00c056b8(local_214);
      if (!bVar2) {
        local_80 = local_a8;
        local_7c = piStack_a4;
        local_78 = piStack_a0;
        local_68 = local_230;
        local_6c = local_228;
        local_70 = local_224;
        local_74 = local_220;
        puVar11 = (undefined4 *)((uint)&local_88 | 4);
        local_88 = (int *)0x2;
        local_64 = (int *)CONCAT31((int3)local_158,uVar8);
        local_f0 = (int *)*puVar11;
        piStack_ec = (int *)puVar11[1];
        piStack_e8 = (int *)puVar11[2];
        piStack_e4 = (int *)puVar11[3];
        local_e0 = (int *)puVar11[4];
        piStack_dc = (int *)puVar11[5];
        piStack_d8 = (int *)puVar11[6];
        piStack_d4 = (int *)puVar11[7];
        local_d0 = (int *)puVar11[8];
        local_cc = (int *)puVar11[9];
        piStack_c8 = (int *)puVar11[10];
        piStack_c4 = (int *)puVar11[0xb];
        piStack_c0 = (int *)puVar11[0xc];
        piStack_bc = (int *)puVar11[0xd];
        *(undefined1 *)(param_2 + 0x18) = 1;
        local_84 = piVar23;
LAB_011ae944:
        *puVar12 = local_f0;
        puVar12[1] = piStack_ec;
        puVar12[2] = piStack_e8;
        puVar12[3] = piStack_e4;
        puVar12[4] = local_e0;
        puVar12[5] = piStack_dc;
        puVar12[6] = piStack_d8;
        puVar12[7] = piStack_d4;
        puVar12[8] = local_d0;
        local_1e0 = local_f0;
        piStack_1dc = piStack_ec;
        piStack_1d8 = piStack_e8;
        local_1d4 = piStack_e4;
        local_1d0 = local_e0;
        piStack_1cc = piStack_dc;
        piStack_1c8 = piStack_d8;
        piStack_1c4 = piStack_d4;
        local_1c0 = local_d0;
        local_1bc = local_cc;
        piStack_1b8 = piStack_c8;
        piStack_1b4 = piStack_c4;
        piStack_1b0 = piStack_c0;
        piStack_1ac = piStack_bc;
LAB_011ae960:
        local_1f0 = local_180;
        local_1ec = piStack_17c;
        local_1e8 = local_178;
        piStack_1e4 = local_174;
        param_2[8] = local_194;
        param_2[9] = local_190;
        param_2[10] = local_18c;
        param_2[0xb] = local_188;
        param_2[0xc] = local_184;
        puVar11 = param_2 + 0x11;
        param_2[0xd] = local_180;
        param_2[0xe] = piStack_17c;
        param_2[0xf] = local_178;
        param_2[0x10] = local_174;
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
        param_2[0x32] = local_21c;
        param_2[0x33] = puVar11;
LAB_011aea20:
        *(undefined1 *)(param_2 + 0x30) = 0;
        param_2[0x2e] = puVar11;
        param_2[0x2f] = local_21c;
LAB_011aea38:
        *(undefined2 *)((int)param_2 + 0x7d) = 0x100;
        bVar16 = 1;
        param_2[0x1d] = puVar11;
        param_2[0x1e] = local_21c;
LAB_011aea54:
        puVar15 = param_2 + 0x1a;
        *puVar15 = 0;
        param_2[0x1c] = 0;
        param_2[0x1b] = 4;
        *(undefined1 *)(param_2 + 0x1f) = 1;
        ppiVar20 = &local_88;
        FUN_00cbbedc(ppiVar20,puVar15,puVar11,local_21c);
        if (local_88 == (int *)0x2) {
          if ((bVar16 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x1f) = 0;
            local_1a8 = *puVar15;
            uStack_1a4 = param_2[0x1b];
            uStack_1a0 = param_2[0x1c];
            FUN_009ec520(&local_88);
            local_f0 = local_88;
            piStack_ec = local_84;
            piStack_e8 = local_80;
            piStack_e4 = local_7c;
            local_e0 = local_78;
            piStack_dc = local_74;
            piStack_d8 = local_70;
            piStack_d4 = local_6c;
            local_d0 = local_68;
            local_cc = local_64;
            piStack_c8 = local_60;
            piStack_c4 = piStack_5c;
            piStack_c0 = piStack_58;
            piStack_bc = local_54;
            param_2[0x20] = local_88;
            param_2[0x21] = local_84;
            param_2[0x22] = local_80;
            param_2[0x23] = local_7c;
            param_2[0x24] = local_78;
            param_2[0x25] = local_74;
            param_2[0x26] = local_70;
            param_2[0x27] = local_6c;
            param_2[0x28] = local_68;
            param_2[0x29] = local_64;
            param_2[0x2a] = local_60;
            param_2[0x2b] = piStack_5c;
            param_2[0x2c] = piStack_58;
            param_2[0x2d] = local_54;
            goto switchD_011b0068_caseD_3;
          }
          uVar18 = param_2[0x1c];
          if (0x2492492 < uVar18) {
            uVar17 = 0;
LAB_011aec3c:
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
            if (iVar19 == 0) goto LAB_011aec3c;
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
LAB_011b1f88:
            (**(code **)(iVar19 + 0xc))(&local_88,uVar17,param_3);
            piVar7 = piStack_4c;
            piVar6 = local_50;
            piVar5 = local_70;
            piVar4 = local_74;
            piVar3 = local_78;
            piVar23 = local_7c;
            unaff_r8 = local_80;
            piVar10 = local_88;
            if (local_88 == (int *)0x2) {
              uVar8 = 4;
              goto LAB_011b1380;
            }
            local_230 = local_84;
            local_220 = local_74;
            local_214 = local_70;
            local_218 = local_78;
            local_21c = local_7c;
            local_48 = local_6c;
            piStack_44 = local_68;
            piStack_40 = local_64;
            local_3c = local_60;
            piStack_38 = piStack_5c;
            piStack_34 = piStack_58;
            piStack_30 = local_54;
            local_224 = local_50;
            local_228 = piStack_4c;
            FUN_01139b38(param_2[0x26],param_2[0x27]);
            if (((uint)piVar10 & 1) != 0) {
              local_118 = local_48;
              local_114 = piStack_44;
              local_110 = piStack_40;
              local_10c = local_3c;
              local_108 = piStack_38;
              local_104 = piStack_34;
              local_100 = piStack_30;
              FUN_009495dc(param_2 + 0x28);
              FUN_007bc140(param_2 + 0x20);
              goto LAB_011aeb7c;
            }
            *puVar12 = piVar23;
            puVar12[1] = piVar3;
            local_188 = piVar5;
            local_18c = piVar4;
            local_198 = unaff_r8;
            local_184 = local_48;
            local_180 = piStack_44;
            piStack_17c = piStack_40;
            local_178 = local_3c;
            local_174 = piStack_38;
            local_170 = piStack_34;
            piStack_16c = piStack_30;
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
            puVar11[5] = local_48;
            puVar11[6] = piStack_44;
            puVar11[7] = piStack_40;
            puVar11[8] = local_3c;
            puVar11[9] = piStack_38;
            puVar11[10] = piStack_34;
            puVar11[0xb] = piStack_30;
            puVar11[0xc] = piVar6;
            puVar11[0xd] = piVar7;
            piVar10[2] = iVar19 + 1;
            puVar11 = (undefined4 *)param_2[0x2b];
            puVar15 = (undefined4 *)param_2[0x29];
          }
          param_2[0x24] = 0;
          FUN_009495dc(param_2 + 0x28);
          local_b8 = (int *)param_2[0x20];
          local_b4 = (int *)param_2[0x21];
          local_b0 = (int *)param_2[0x22];
          goto LAB_011b2108;
        }
        local_230 = local_88;
        local_220 = local_78;
        local_214 = local_74;
        local_218 = local_7c;
        local_21c = local_80;
        local_118 = local_70;
        local_114 = local_6c;
        local_110 = local_68;
        local_10c = local_64;
        local_108 = local_60;
        local_104 = piStack_5c;
        local_100 = piStack_58;
        local_224 = local_54;
        local_228 = local_50;
        unaff_r8 = local_84;
LAB_011aeb7c:
        local_248 = param_2 + 0x1a;
        if (*(char *)(param_2 + 0x1f) != '\0') {
          FUN_00b7d620(local_248);
        }
        uVar22 = 1;
        *(undefined1 *)(param_2 + 0x1f) = 0;
        goto LAB_011aeb9c;
      }
      local_114 = local_a8;
      local_110 = piStack_a4;
      local_10c = piStack_a0;
      local_fc = local_230;
      local_100 = local_228;
      local_104 = local_224;
      local_108 = local_220;
      local_f8 = (int *)CONCAT13(local_158._2_1_,CONCAT21((undefined2)local_158,uVar8));
      local_118 = piVar23;
      FUN_006bd898(&local_88,&local_118,**(undefined4 **)(param_2[9] + 0x10),
                   (*(undefined4 **)(param_2[9] + 0x10))[1]);
      puVar11 = (undefined4 *)((uint)&local_88 | 4);
      local_1e0 = (int *)*puVar11;
      piStack_1dc = (int *)puVar11[1];
      piStack_1d8 = (int *)puVar11[2];
      local_1d4 = (int *)puVar11[3];
      local_1d0 = (int *)puVar11[4];
      piStack_1cc = (int *)puVar11[5];
      piStack_1c8 = (int *)puVar11[6];
      piStack_1c4 = (int *)puVar11[7];
      local_1c0 = (int *)puVar11[8];
      local_1bc = (int *)puVar11[9];
      piStack_1b8 = (int *)puVar11[10];
      piStack_1b4 = (int *)puVar11[0xb];
      piStack_1b0 = (int *)puVar11[0xc];
      piStack_1ac = (int *)puVar11[0xd];
      *(undefined1 *)local_254 = 1;
      if (local_88 == (int *)&DAT_00000003) goto LAB_011ae8a0;
      local_f0 = local_1e0;
      piStack_ec = piStack_1dc;
      piStack_e8 = piStack_1d8;
      piStack_e4 = local_1d4;
      local_e0 = local_1d0;
      piStack_dc = piStack_1cc;
      piStack_d8 = piStack_1c8;
      piStack_d4 = piStack_1c4;
      local_d0 = local_1c0;
      local_cc = local_1bc;
      piStack_c8 = piStack_1b8;
      piStack_c4 = piStack_1b4;
      piStack_c0 = piStack_1b0;
      piStack_bc = piStack_1ac;
      if (local_88 == (int *)0x2) goto LAB_011ae944;
      local_84 = local_1e0;
      local_80 = piStack_1dc;
      local_7c = piStack_1d8;
      local_78 = local_1d4;
      local_74 = local_1d0;
      local_70 = piStack_1cc;
      local_6c = piStack_1c8;
      local_68 = piStack_1c4;
      local_64 = local_1c0;
      local_60 = local_1bc;
      piStack_5c = piStack_1b8;
      piStack_58 = piStack_1b4;
      local_54 = piStack_1b0;
      local_50 = piStack_1ac;
      FUN_009ed8c0(&local_198,param_2[6],&local_88);
      if (local_198 == (int *)0x2) goto LAB_011ae960;
      local_230 = local_198;
      uVar22 = 1;
      local_220 = local_188;
      local_214 = local_184;
      local_218 = local_18c;
      local_21c = local_190;
      local_1f0 = local_180;
      local_1ec = piStack_17c;
      local_1e8 = local_178;
      piStack_1e4 = local_174;
      local_128 = local_170;
      piStack_124 = piStack_16c;
      piStack_120 = piStack_168;
      local_224 = local_164;
      local_228 = local_160;
      local_138 = local_180;
      piStack_134 = piStack_17c;
      piStack_130 = local_178;
      local_12c = local_174;
      unaff_r8 = local_194;
LAB_011aebf0:
      local_24c = param_2 + 7;
      local_250 = param_2 + 4;
      local_210 = local_138;
      piStack_20c = piStack_134;
      piStack_208 = piStack_130;
      local_204 = local_12c;
      piStack_200 = local_128;
      piStack_1fc = piStack_124;
      piStack_1f8 = piStack_120;
      *(undefined1 *)local_24c = 1;
      FUN_011b29f8(local_250);
      piVar10 = local_230;
      break;
    case 4:
      param_2[4] = uVar17;
      param_2[5] = iVar19;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_011af458:
      param_2[8] = uVar17;
      param_2[6] = iVar19;
      param_2[9] = iVar19;
      *(undefined1 *)(param_2 + 0xd) = 0;
LAB_011af474:
      param_2[10] = uVar17;
      param_2[0xb] = iVar19;
      *(undefined1 *)(param_2 + 0xc) = 0;
LAB_011af480:
      puVar11 = param_2 + 8;
      iVar19 = FUN_011b21e4(iVar19);
      if (*(char *)(iVar19 + 0xc) != '\0') {
LAB_011af4b8:
        local_84 = *(int **)(iVar19 + 0x1c);
        do {
          iVar19 = *local_84;
          bVar2 = (bool)hasExclusiveAccess(local_84);
        } while (!bVar2);
        *local_84 = iVar19 + 1;
        if (iVar19 < 0) goto LAB_011b0968;
        *(undefined1 *)(param_2 + 0xc) = 1;
        local_88 = (int *)0x2;
        local_1e0 = local_80;
        piStack_1dc = local_7c;
        piStack_1d8 = local_78;
        local_1d4 = local_74;
        local_1d0 = local_70;
        piStack_1cc = local_6c;
        piStack_1c8 = local_68;
        piStack_1c4 = local_64;
        local_1c0 = local_60;
        local_1bc = piStack_5c;
        piStack_1b8 = piStack_58;
        piStack_1b4 = local_54;
        piStack_1b0 = local_50;
        *(undefined1 *)(param_2 + 0xd) = 1;
        piVar10 = local_84;
        local_f0 = local_1e0;
        piStack_ec = piStack_1dc;
        piStack_e8 = piStack_1d8;
        piStack_e4 = local_1d4;
        local_e0 = local_1d0;
        piStack_dc = piStack_1cc;
        piStack_d8 = piStack_1c8;
        piStack_d4 = piStack_1c4;
        local_d0 = local_1c0;
        local_cc = local_1bc;
        piStack_c8 = piStack_1b8;
        piStack_c4 = piStack_1b4;
        piStack_c0 = piStack_1b0;
LAB_011af530:
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
LAB_011af59c:
        *(undefined1 *)(param_2 + 0x28) = 0;
        param_2[0x26] = puVar15;
        param_2[0x27] = puVar11;
LAB_011af5b4:
        *(undefined2 *)((int)param_2 + 0x5d) = 0x100;
        bVar16 = 1;
        param_2[0x15] = puVar15;
        param_2[0x16] = puVar11;
LAB_011af5d0:
        puVar9 = param_2 + 0x12;
        *puVar9 = 0;
        param_2[0x14] = 0;
        param_2[0x13] = 4;
        *(undefined1 *)(param_2 + 0x17) = 1;
        ppiVar20 = &local_88;
        FUN_00c87668(ppiVar20,puVar9,puVar15,puVar11);
        if (local_88 == (int *)0x2) {
          if ((bVar16 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x17) = 0;
            local_b8 = (int *)*puVar9;
            local_b4 = (int *)param_2[0x13];
            local_b0 = (int *)param_2[0x14];
            FUN_009ec520(&local_88);
            local_f0 = local_88;
            piStack_ec = local_84;
            piStack_e8 = local_80;
            piStack_e4 = local_7c;
            local_e0 = local_78;
            piStack_dc = local_74;
            piStack_d8 = local_70;
            piStack_d4 = local_6c;
            local_d0 = local_68;
            local_cc = local_64;
            piStack_c8 = local_60;
            piStack_c4 = piStack_5c;
            piStack_c0 = piStack_58;
            piStack_bc = local_54;
            param_2[0x18] = local_88;
            param_2[0x19] = local_84;
            param_2[0x1a] = local_80;
            param_2[0x1b] = local_7c;
            param_2[0x1c] = local_78;
            param_2[0x1d] = local_74;
            param_2[0x1e] = local_70;
            param_2[0x1f] = local_6c;
            param_2[0x20] = local_68;
            param_2[0x21] = local_64;
            param_2[0x22] = local_60;
            param_2[0x23] = piStack_5c;
            param_2[0x24] = piStack_58;
            param_2[0x25] = local_54;
            goto switchD_011b002c_caseD_3;
          }
          uVar18 = param_2[0x14];
          if (0x2492492 < uVar18) {
            uVar17 = 0;
LAB_011af844:
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
            if (iVar19 == 0) goto LAB_011af844;
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
LAB_011b14b8:
            (**(code **)(iVar19 + 0xc))(&local_88,uVar17,param_3);
            piVar7 = piStack_4c;
            piVar6 = local_50;
            piVar5 = local_70;
            piVar4 = local_74;
            piVar3 = local_78;
            piVar23 = local_7c;
            unaff_r8 = local_80;
            piVar10 = local_88;
            if (local_88 == (int *)0x2) {
              uVar8 = 4;
              goto LAB_011b1420;
            }
            local_230 = local_84;
            local_220 = local_74;
            local_214 = local_70;
            local_218 = local_78;
            local_21c = local_7c;
            local_48 = local_6c;
            piStack_44 = local_68;
            piStack_40 = local_64;
            local_3c = local_60;
            piStack_38 = piStack_5c;
            piStack_34 = piStack_58;
            piStack_30 = local_54;
            local_224 = local_50;
            local_228 = piStack_4c;
            FUN_01139b38(param_2[0x1e],param_2[0x1f]);
            if (((uint)piVar10 & 1) != 0) {
              local_118 = local_48;
              local_114 = piStack_44;
              local_110 = piStack_40;
              local_10c = local_3c;
              local_108 = piStack_38;
              local_104 = piStack_34;
              local_100 = piStack_30;
              FUN_009495dc(param_2 + 0x20);
              FUN_007bc140(param_2 + 0x18);
              goto LAB_011af6fc;
            }
            *puVar12 = piVar23;
            puVar12[1] = piVar3;
            local_188 = piVar5;
            local_18c = piVar4;
            local_198 = unaff_r8;
            local_184 = local_48;
            local_180 = piStack_44;
            piStack_17c = piStack_40;
            local_178 = local_3c;
            local_174 = piStack_38;
            local_170 = piStack_34;
            piStack_16c = piStack_30;
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
            puVar11[5] = local_48;
            puVar11[6] = piStack_44;
            puVar11[7] = piStack_40;
            puVar11[8] = local_3c;
            puVar11[9] = piStack_38;
            puVar11[10] = piStack_34;
            puVar11[0xb] = piStack_30;
            puVar11[0xc] = piVar6;
            puVar11[0xd] = piVar7;
            piVar10[2] = iVar19 + 1;
            puVar11 = (undefined4 *)param_2[0x23];
            puVar15 = (undefined4 *)param_2[0x21];
          }
          param_2[0x1c] = 0;
          FUN_009495dc(param_2 + 0x20);
          local_1f0 = (int *)param_2[0x18];
          local_1ec = (int *)param_2[0x19];
          local_1e8 = (int *)param_2[0x1a];
          goto LAB_011b165c;
        }
        local_230 = local_88;
        local_220 = local_78;
        local_214 = local_74;
        local_218 = local_7c;
        local_21c = local_80;
        local_118 = local_70;
        local_114 = local_6c;
        local_110 = local_68;
        local_10c = local_64;
        local_108 = local_60;
        local_104 = piStack_5c;
        local_100 = piStack_58;
        local_224 = local_54;
        local_228 = local_50;
        unaff_r8 = local_84;
        goto LAB_011af6fc;
      }
      FUN_00aba2c0(&local_118,0);
      if (local_118 == (int *)0x2) goto LAB_011af4b8;
      local_48 = local_110;
      piStack_44 = local_10c;
      piStack_40 = local_108;
      local_3c = local_104;
      piStack_38 = local_100;
      piStack_34 = local_fc;
      piStack_30 = local_f8;
      *(undefined1 *)(param_2 + 0xc) = 1;
      if (local_118 == (int *)&DAT_00000003) {
        *(undefined1 *)(param_2 + 0xd) = 3;
LAB_011afd98:
        uVar8 = 3;
        goto LAB_011b1444;
      }
      FUN_006bd898(&local_88,&local_118,**(undefined4 **)(param_2[9] + 0x10),
                   (*(undefined4 **)(param_2[9] + 0x10))[1]);
      local_f0 = local_80;
      piStack_ec = local_7c;
      piStack_e8 = local_78;
      piStack_e4 = local_74;
      local_e0 = local_70;
      piStack_dc = local_6c;
      piStack_d8 = local_68;
      piStack_d4 = local_64;
      local_d0 = local_60;
      local_cc = piStack_5c;
      piStack_c8 = piStack_58;
      piStack_c4 = local_54;
      piStack_c0 = local_50;
      *(undefined1 *)(param_2 + 0xd) = 1;
      if (local_88 == (int *)&DAT_00000003) goto LAB_011afd98;
      local_1e0 = local_80;
      piStack_1dc = local_7c;
      piStack_1d8 = local_78;
      local_1d4 = local_74;
      local_1d0 = local_70;
      piStack_1cc = local_6c;
      piStack_1c8 = local_68;
      piStack_1c4 = local_64;
      local_1c0 = local_60;
      local_1bc = piStack_5c;
      piStack_1b8 = piStack_58;
      piStack_1b4 = local_54;
      piStack_1b0 = local_50;
      piVar10 = local_84;
      if ((local_88 == (int *)0x2) ||
         (FUN_009ed8c0(&local_198,param_2[6],&local_88), piVar10 = local_194,
         local_198 == (int *)0x2)) goto LAB_011af530;
      local_230 = local_198;
      uVar22 = 1;
      local_220 = local_188;
      local_214 = local_184;
      local_218 = local_18c;
      local_21c = local_190;
      local_138 = local_180;
      piStack_134 = piStack_17c;
      piStack_130 = local_178;
      local_12c = local_174;
      local_128 = local_170;
      piStack_124 = piStack_16c;
      piStack_120 = piStack_168;
      local_224 = local_164;
      local_228 = local_160;
      unaff_r8 = local_194;
      goto LAB_011af798;
    }
    goto switchD_011ade20_caseD_5;
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
      goto LAB_011adf0c;
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
        goto LAB_011ae034;
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
        goto LAB_011ae044;
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
      goto LAB_011ae050;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x31)) {
    case 0:
      puVar15 = (undefined4 *)param_2[0x2e];
      puVar11 = (undefined4 *)param_2[0x2f];
LAB_011ae29c:
      *(undefined1 *)(param_2 + 0x2c) = 0;
      param_2[0x2a] = puVar11;
      param_2[0x2b] = puVar15;
LAB_011ae2b4:
      *(undefined2 *)((int)param_2 + 0x6d) = 0x100;
      bVar16 = 1;
      param_2[0x19] = puVar11;
      param_2[0x1a] = puVar15;
LAB_011ae2d0:
      puVar9 = param_2 + 0x16;
      *puVar9 = 0;
      param_2[0x18] = 0;
      param_2[0x17] = 4;
      *(undefined1 *)(param_2 + 0x1b) = 1;
      ppiVar20 = &local_88;
      FUN_00cad07c(ppiVar20,puVar9,puVar11,puVar15);
      if (local_88 != (int *)0x2) {
        local_230 = local_88;
        local_220 = local_78;
        local_214 = local_74;
        local_218 = local_7c;
        local_21c = local_80;
        local_1e0 = local_70;
        piStack_1dc = local_6c;
        piStack_1d8 = local_68;
        local_1d4 = local_64;
        local_1d0 = local_60;
        piStack_1cc = piStack_5c;
        piStack_1c8 = piStack_58;
        local_224 = local_54;
        local_228 = local_50;
        unaff_r8 = local_84;
        goto LAB_011ae3f8;
      }
      if ((bVar16 & 1) != 0) {
        *(undefined1 *)(param_2 + 0x1b) = 0;
        local_1f0 = (int *)*puVar9;
        local_1ec = (int *)param_2[0x17];
        local_1e8 = (int *)param_2[0x18];
        FUN_009ec520(&local_88);
        local_f0 = local_88;
        piStack_ec = local_84;
        piStack_e8 = local_80;
        piStack_e4 = local_7c;
        local_e0 = local_78;
        piStack_dc = local_74;
        piStack_d8 = local_70;
        piStack_d4 = local_6c;
        local_d0 = local_68;
        local_cc = local_64;
        piStack_c8 = local_60;
        piStack_c4 = piStack_5c;
        piStack_c0 = piStack_58;
        piStack_bc = local_54;
        param_2[0x1c] = local_88;
        param_2[0x1d] = local_84;
        param_2[0x1e] = local_80;
        param_2[0x1f] = local_7c;
        param_2[0x20] = local_78;
        param_2[0x21] = local_74;
        param_2[0x22] = local_70;
        param_2[0x23] = local_6c;
        param_2[0x24] = local_68;
        param_2[0x25] = local_64;
        param_2[0x26] = local_60;
        param_2[0x27] = piStack_5c;
        param_2[0x28] = piStack_58;
        param_2[0x29] = local_54;
        goto switchD_011b00a4_caseD_3;
      }
      uVar18 = param_2[0x18];
      if (0x2492492 < uVar18) {
        uVar17 = 0;
LAB_011ae530:
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
        if (iVar19 == 0) goto LAB_011ae530;
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
LAB_011b1d10:
        (**(code **)(iVar19 + 0xc))(&local_88,uVar17,param_3);
        piVar7 = piStack_4c;
        piVar6 = local_50;
        piVar5 = local_70;
        piVar4 = local_74;
        piVar3 = local_78;
        piVar23 = local_7c;
        unaff_r8 = local_80;
        piVar10 = local_88;
        if (local_88 == (int *)0x2) {
          uVar8 = 4;
          goto LAB_011b1340;
        }
        local_230 = local_84;
        local_220 = local_74;
        local_214 = local_70;
        local_218 = local_78;
        local_21c = local_7c;
        local_118 = local_6c;
        local_114 = local_68;
        local_110 = local_64;
        local_10c = local_60;
        local_108 = piStack_5c;
        local_104 = piStack_58;
        local_100 = local_54;
        local_224 = local_50;
        local_228 = piStack_4c;
        FUN_01139b38(param_2[0x22],param_2[0x23]);
        if (((uint)piVar10 & 1) != 0) {
          local_1e0 = local_118;
          piStack_1dc = local_114;
          piStack_1d8 = local_110;
          local_1d4 = local_10c;
          local_1d0 = local_108;
          piStack_1cc = local_104;
          piStack_1c8 = local_100;
          FUN_009495dc(param_2 + 0x24);
          FUN_007bc140(param_2 + 0x1c);
          goto LAB_011ae3f8;
        }
        *puVar12 = piVar23;
        puVar12[1] = piVar3;
        local_188 = piVar5;
        local_18c = piVar4;
        local_198 = unaff_r8;
        local_184 = local_118;
        local_180 = local_114;
        piStack_17c = local_110;
        local_178 = local_10c;
        local_174 = local_108;
        local_170 = local_104;
        piStack_16c = local_100;
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
        puVar11[5] = local_118;
        puVar11[6] = local_114;
        puVar11[7] = local_110;
        puVar11[8] = local_10c;
        puVar11[9] = local_108;
        puVar11[10] = local_104;
        puVar11[0xb] = local_100;
        puVar11[0xc] = piVar6;
        puVar11[0xd] = piVar7;
        piVar10[2] = iVar19 + 1;
        puVar11 = (undefined4 *)param_2[0x27];
        puVar15 = (undefined4 *)param_2[0x25];
      }
      param_2[0x20] = 0;
      FUN_009495dc(param_2 + 0x24);
      local_158 = (int *)param_2[0x1c];
      local_154 = (int *)param_2[0x1d];
      local_150 = (int *)param_2[0x1e];
LAB_011b1e88:
      FUN_006cac18(&local_88,&local_158);
      local_21c = local_84;
      uVar22 = 0;
      local_218 = local_80;
      local_220 = local_7c;
      local_214 = local_78;
      local_1e0 = local_74;
      piStack_1dc = local_70;
      piStack_1d8 = local_6c;
      local_1d4 = local_68;
      local_1d0 = local_64;
      piStack_1cc = local_60;
      piStack_1c8 = piStack_5c;
      *(undefined1 *)(param_2 + 0x1b) = 0;
      unaff_r8 = local_88;
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
        goto LAB_011ae2b4;
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
        goto LAB_011ae2d0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b4c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b4c);
      case 4:
        uVar17 = param_2[0x22];
        iVar19 = param_2[0x23];
        goto LAB_011b1d10;
      }
switchD_011b00a4_caseD_3:
      FUN_009ecbe0(&local_88,param_2 + 0x1c,param_3);
      unaff_r8 = local_84;
      piVar10 = local_88;
      if (local_88 == (int *)&DAT_00000003) {
        uVar8 = 3;
LAB_011b1340:
        local_254 = (undefined4 *)((int)param_2 + 0x6d);
        local_258 = param_2 + 0x31;
        local_25c = param_2 + 0x2c;
        *(undefined1 *)local_254 = uVar8;
        *(undefined1 *)local_258 = 3;
        *(undefined1 *)local_25c = 3;
        uVar8 = 4;
        goto LAB_011b1328;
      }
      local_230 = local_88;
      local_220 = local_78;
      local_214 = local_74;
      local_218 = local_7c;
      local_21c = local_80;
      local_48 = local_70;
      piStack_44 = local_6c;
      piStack_40 = local_68;
      local_3c = local_64;
      piStack_38 = local_60;
      piStack_34 = piStack_5c;
      piStack_30 = piStack_58;
      local_224 = local_54;
      local_228 = local_50;
      FUN_011928d4(param_2 + 0x1c);
      if (piVar10 == (int *)0x2) {
        local_158 = unaff_r8;
        local_154 = local_21c;
        local_150 = local_218;
        goto LAB_011b1e88;
      }
      local_1e0 = local_48;
      piStack_1dc = piStack_44;
      piStack_1d8 = piStack_40;
      local_1d4 = local_3c;
      local_1d0 = piStack_38;
      piStack_1cc = piStack_34;
      piStack_1c8 = piStack_30;
LAB_011ae3f8:
      local_248 = param_2 + 0x16;
      if (*(char *)(param_2 + 0x1b) != '\0') {
        FUN_00b7d620(local_248);
      }
      uVar22 = 1;
      *(undefined1 *)(param_2 + 0x1b) = 0;
    }
    local_248 = param_2 + 0x16;
    local_24c = param_2 + 7;
    local_250 = param_2 + 4;
    local_254 = (undefined4 *)((int)param_2 + 0x6d);
    local_138 = local_1e0;
    piStack_134 = piStack_1dc;
    piStack_130 = piStack_1d8;
    local_12c = local_1d4;
    local_128 = local_1d0;
    piStack_124 = piStack_1cc;
    piStack_120 = piStack_1c8;
    *(undefined1 *)local_254 = 1;
    FUN_01192a14(local_248);
    *(undefined1 *)(param_2 + 0x31) = 1;
    *(undefined1 *)(param_2 + 0x2c) = 1;
    local_a8 = local_138;
    piStack_a4 = piStack_134;
    piStack_a0 = piStack_130;
    local_9c = local_12c;
    piStack_98 = local_128;
    piStack_94 = piStack_124;
    piStack_90 = piStack_120;
    FUN_00c0555c(param_2 + 8);
    local_210 = local_a8;
    piStack_20c = piStack_a4;
    piStack_208 = piStack_a0;
    local_204 = local_9c;
    piStack_200 = piStack_98;
    piStack_1fc = piStack_94;
    piStack_1f8 = piStack_90;
    *(undefined1 *)local_24c = 1;
    FUN_011b2848(local_250);
    piVar10 = local_230;
    goto switchD_011ade20_caseD_5;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      uVar17 = param_2[4];
      iVar19 = param_2[5];
      goto LAB_011aec68;
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
        goto LAB_011aec84;
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
      goto LAB_011aec90;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2d)) {
    case 0:
      puVar11 = (undefined4 *)param_2[0x2a];
      puVar15 = (undefined4 *)param_2[0x2b];
      goto LAB_011aedb0;
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
      goto LAB_011aedc8;
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
      goto LAB_011aede4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      uVar17 = param_2[0x1e];
      iVar19 = param_2[0x1f];
      goto LAB_011b1804;
    }
switchD_011b00e0_caseD_3:
    FUN_009ecbe0(&local_88,param_2 + 0x18,param_3);
    unaff_r8 = local_84;
    piVar10 = local_88;
    if (local_88 == (int *)&DAT_00000003) {
      uVar8 = 3;
LAB_011b13a8:
      local_254 = (undefined4 *)((int)param_2 + 0x5d);
      local_258 = param_2 + 0x2d;
      local_25c = param_2 + 0x28;
      *(undefined1 *)local_254 = uVar8;
      *(undefined1 *)local_258 = 3;
      *(undefined1 *)local_25c = 3;
      uVar8 = 4;
LAB_011b13cc:
      local_24c = param_2 + 7;
      *(undefined1 *)local_24c = uVar8;
      *param_1 = 2;
      uVar8 = 4;
      goto LAB_011af820;
    }
    local_230 = local_88;
    local_220 = local_78;
    local_214 = local_74;
    local_218 = local_7c;
    local_21c = local_80;
    local_a8 = local_70;
    piStack_a4 = local_6c;
    piStack_a0 = local_68;
    local_9c = local_64;
    piStack_98 = local_60;
    piStack_94 = piStack_5c;
    piStack_90 = piStack_58;
    local_224 = local_54;
    local_228 = local_50;
    FUN_011928d4(param_2 + 0x18);
    if (piVar10 == (int *)0x2) {
      local_1f0 = unaff_r8;
      local_1ec = local_21c;
      local_1e8 = local_218;
LAB_011b1984:
      FUN_006cac18(&local_88,&local_1f0);
      local_21c = local_84;
      local_218 = local_80;
      local_220 = local_7c;
      local_214 = local_78;
      uVar22 = 0;
      local_118 = local_74;
      local_114 = local_70;
      local_110 = local_6c;
      local_10c = local_68;
      local_108 = local_64;
      local_104 = local_60;
      local_100 = piStack_5c;
      *(undefined1 *)(param_2 + 0x17) = 0;
      unaff_r8 = local_88;
    }
    else {
      local_118 = local_a8;
      local_114 = piStack_a4;
      local_110 = piStack_a0;
      local_10c = local_9c;
      local_108 = piStack_98;
      local_104 = piStack_94;
      local_100 = piStack_90;
LAB_011aef0c:
      local_248 = param_2 + 0x12;
      if (*(char *)(param_2 + 0x17) != '\0') {
        FUN_00b7d620(local_248);
      }
      uVar22 = 1;
      *(undefined1 *)(param_2 + 0x17) = 0;
    }
    local_248 = param_2 + 0x12;
    local_254 = (undefined4 *)((int)param_2 + 0x5d);
    local_158 = local_118;
    local_154 = local_114;
    local_150 = local_110;
    local_14c = local_10c;
    piStack_148 = local_108;
    piStack_144 = local_104;
    piStack_140 = local_100;
    *(undefined1 *)local_254 = 1;
    FUN_01192a14(local_248);
    *(undefined1 *)(param_2 + 0x2d) = 1;
    *(undefined1 *)(param_2 + 0x28) = 1;
    local_138 = local_158;
    piStack_134 = local_154;
    piStack_130 = local_150;
    local_12c = local_14c;
    local_128 = piStack_148;
    piStack_124 = piStack_144;
    piStack_120 = piStack_140;
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
LAB_011aefa8:
    local_24c = param_2 + 7;
    local_250 = param_2 + 4;
    local_210 = local_138;
    piStack_20c = piStack_134;
    piStack_208 = piStack_130;
    local_204 = local_12c;
    piStack_200 = local_128;
    piStack_1fc = piStack_124;
    piStack_1f8 = piStack_120;
    *(undefined1 *)local_24c = 1;
    FUN_011b28a0(local_250);
    break;
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      uVar17 = param_2[4];
      iVar19 = param_2[5];
      goto LAB_011af060;
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
        goto LAB_011af07c;
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
      goto LAB_011af088;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2d)) {
    case 0:
      puVar11 = (undefined4 *)param_2[0x2a];
      puVar15 = (undefined4 *)param_2[0x2b];
      goto LAB_011af1a8;
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
      goto LAB_011af1c0;
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
      goto LAB_011af1dc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      uVar17 = param_2[0x1e];
      iVar19 = param_2[0x1f];
      goto LAB_011b1a8c;
    }
switchD_011b011c_caseD_3:
    FUN_009ecbe0(&local_88,param_2 + 0x18,param_3);
    unaff_r8 = local_84;
    piVar10 = local_88;
    if (local_88 == (int *)&DAT_00000003) {
      uVar8 = 3;
LAB_011b13e4:
      local_254 = (undefined4 *)((int)param_2 + 0x5d);
      local_258 = param_2 + 0x2d;
      local_25c = param_2 + 0x28;
      *(undefined1 *)local_254 = uVar8;
      *(undefined1 *)local_258 = 3;
      *(undefined1 *)local_25c = 3;
      uVar8 = 4;
LAB_011b1408:
      local_24c = param_2 + 7;
      *(undefined1 *)local_24c = uVar8;
      *param_1 = 2;
      uVar8 = 5;
      goto LAB_011af820;
    }
    local_230 = local_88;
    local_220 = local_78;
    local_214 = local_74;
    local_218 = local_7c;
    local_21c = local_80;
    local_a8 = local_70;
    piStack_a4 = local_6c;
    piStack_a0 = local_68;
    local_9c = local_64;
    piStack_98 = local_60;
    piStack_94 = piStack_5c;
    piStack_90 = piStack_58;
    local_224 = local_54;
    local_228 = local_50;
    FUN_011928d4(param_2 + 0x18);
    if (piVar10 == (int *)0x2) {
      local_1f0 = unaff_r8;
      local_1ec = local_21c;
      local_1e8 = local_218;
LAB_011b1c08:
      FUN_006cac18(&local_88,&local_1f0);
      local_21c = local_84;
      local_218 = local_80;
      local_220 = local_7c;
      local_214 = local_78;
      uVar22 = 0;
      local_118 = local_74;
      local_114 = local_70;
      local_110 = local_6c;
      local_10c = local_68;
      local_108 = local_64;
      local_104 = local_60;
      local_100 = piStack_5c;
      *(undefined1 *)(param_2 + 0x17) = 0;
      unaff_r8 = local_88;
    }
    else {
      local_118 = local_a8;
      local_114 = piStack_a4;
      local_110 = piStack_a0;
      local_10c = local_9c;
      local_108 = piStack_98;
      local_104 = piStack_94;
      local_100 = piStack_90;
LAB_011af304:
      local_248 = param_2 + 0x12;
      if (*(char *)(param_2 + 0x17) != '\0') {
        FUN_00b7d620(local_248);
      }
      uVar22 = 1;
      *(undefined1 *)(param_2 + 0x17) = 0;
    }
    local_248 = param_2 + 0x12;
    local_254 = (undefined4 *)((int)param_2 + 0x5d);
    local_158 = local_118;
    local_154 = local_114;
    local_150 = local_110;
    local_14c = local_10c;
    piStack_148 = local_108;
    piStack_144 = local_104;
    piStack_140 = local_100;
    *(undefined1 *)local_254 = 1;
    FUN_01192a14(local_248);
    *(undefined1 *)(param_2 + 0x2d) = 1;
    *(undefined1 *)(param_2 + 0x28) = 1;
    local_138 = local_158;
    piStack_134 = local_154;
    piStack_130 = local_150;
    local_12c = local_14c;
    local_128 = piStack_148;
    piStack_124 = piStack_144;
    piStack_120 = piStack_140;
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
LAB_011af3a0:
    local_24c = param_2 + 7;
    local_250 = param_2 + 4;
    local_210 = local_138;
    piStack_20c = piStack_134;
    piStack_208 = piStack_130;
    local_204 = local_12c;
    piStack_200 = local_128;
    piStack_1fc = piStack_124;
    piStack_1f8 = piStack_120;
    *(undefined1 *)local_24c = 1;
    FUN_011b294c(local_250);
    break;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      uVar17 = param_2[4];
      iVar19 = param_2[5];
      goto LAB_011ae55c;
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
        goto LAB_011ae57c;
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
        goto LAB_011ae59c;
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
LAB_011ae6c8:
      local_218 = (int *)((int)param_2 + 0x5d);
      piVar10 = (int *)(**(code **)(puVar14 + 0xc))(uVar17,param_3);
      if (piVar10 != (int *)0x0) {
        FUN_01139b38(param_2[0xe],param_2[0xf]);
        local_220 = (int *)param_2[0x10];
        local_224 = (int *)param_2[0x11];
        local_228 = (int *)param_2[0x12];
        local_230 = (int *)param_2[0x13];
        piVar23 = (int *)param_2[10];
        iVar19 = piVar10[0x126];
        local_48 = (int *)param_2[0xb];
        piStack_44 = (int *)param_2[0xc];
        piStack_40 = (int *)param_2[0xd];
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
        goto LAB_011ae7d0;
      }
      *(undefined1 *)(param_2 + 0x18) = 3;
      *(undefined1 *)local_218 = 3;
LAB_011ae8a0:
      uVar8 = 3;
      break;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x35)) {
      case 0:
        local_21c = (int *)param_2[0x32];
        puVar11 = (undefined4 *)param_2[0x33];
        goto LAB_011aea20;
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
        local_21c = (int *)param_2[0x2f];
        goto LAB_011aea38;
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
        local_21c = (int *)param_2[0x1e];
        bVar16 = *(byte *)((int)param_2 + 0x7e);
        goto LAB_011aea54;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21b4c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c21b4c);
      case 4:
        uVar17 = param_2[0x26];
        iVar19 = param_2[0x27];
        goto LAB_011b1f88;
      }
switchD_011b0068_caseD_3:
      FUN_009ecbe0(&local_88,param_2 + 0x20,param_3);
      unaff_r8 = local_84;
      piVar10 = local_88;
      if (local_88 != (int *)&DAT_00000003) {
        local_230 = local_88;
        local_220 = local_78;
        local_214 = local_74;
        local_218 = local_7c;
        local_21c = local_80;
        local_a8 = local_70;
        piStack_a4 = local_6c;
        piStack_a0 = local_68;
        local_9c = local_64;
        piStack_98 = local_60;
        piStack_94 = piStack_5c;
        piStack_90 = piStack_58;
        local_224 = local_54;
        local_228 = local_50;
        FUN_011928d4(param_2 + 0x20);
        if (piVar10 != (int *)0x2) {
          local_118 = local_a8;
          local_114 = piStack_a4;
          local_110 = piStack_a0;
          local_10c = local_9c;
          local_108 = piStack_98;
          local_104 = piStack_94;
          local_100 = piStack_90;
          goto LAB_011aeb7c;
        }
        local_b8 = unaff_r8;
        local_b4 = local_21c;
        local_b0 = local_218;
LAB_011b2108:
        FUN_006cac18(&local_88,&local_b8);
        local_21c = local_84;
        local_218 = local_80;
        local_220 = local_7c;
        local_214 = local_78;
        uVar22 = 0;
        local_118 = local_74;
        local_114 = local_70;
        local_110 = local_6c;
        local_10c = local_68;
        local_108 = local_64;
        local_104 = local_60;
        local_100 = piStack_5c;
        *(undefined1 *)(param_2 + 0x1f) = 0;
        unaff_r8 = local_88;
LAB_011aeb9c:
        local_248 = param_2 + 0x1a;
        local_254 = (undefined4 *)((int)param_2 + 0x7d);
        local_158 = local_118;
        local_154 = local_114;
        local_150 = local_110;
        local_14c = local_10c;
        piStack_148 = local_108;
        piStack_144 = local_104;
        piStack_140 = local_100;
        *(undefined1 *)local_254 = 1;
        FUN_01192a14(local_248);
        *(undefined1 *)(param_2 + 0x35) = 1;
        *(undefined1 *)(param_2 + 0x30) = 1;
        local_138 = local_158;
        piStack_134 = local_154;
        piStack_130 = local_150;
        local_12c = local_14c;
        local_128 = piStack_148;
        piStack_124 = piStack_144;
        piStack_120 = piStack_140;
        FUN_00c058e0(param_2 + 8);
        goto LAB_011aebf0;
      }
      uVar8 = 3;
LAB_011b1380:
      local_254 = (undefined4 *)((int)param_2 + 0x7d);
      local_258 = param_2 + 0x35;
      local_25c = param_2 + 0x30;
      *(undefined1 *)local_254 = uVar8;
      *(undefined1 *)local_258 = 3;
      *(undefined1 *)local_25c = 3;
      uVar8 = 4;
    }
    local_24c = param_2 + 7;
    *(undefined1 *)local_24c = uVar8;
    *param_1 = 2;
    uVar8 = 6;
    goto LAB_011af820;
  case 7:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 7)) {
    case 0:
      uVar17 = param_2[4];
      iVar19 = param_2[5];
      goto LAB_011af458;
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
        goto LAB_011af474;
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
      goto LAB_011af480;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x2d)) {
    case 0:
      puVar11 = (undefined4 *)param_2[0x2a];
      puVar15 = (undefined4 *)param_2[0x2b];
      goto LAB_011af59c;
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
      goto LAB_011af5b4;
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
      goto LAB_011af5d0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c21b4c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21b4c);
    case 4:
      uVar17 = param_2[0x1e];
      iVar19 = param_2[0x1f];
      goto LAB_011b14b8;
    }
switchD_011b002c_caseD_3:
    FUN_009ecbe0(&local_88,param_2 + 0x18,param_3);
    unaff_r8 = local_84;
    piVar10 = local_88;
    if (local_88 == (int *)&DAT_00000003) {
      uVar8 = 3;
LAB_011b1420:
      local_254 = (undefined4 *)((int)param_2 + 0x5d);
      local_258 = param_2 + 0x2d;
      local_25c = param_2 + 0x28;
      *(undefined1 *)local_254 = uVar8;
      *(undefined1 *)local_258 = 3;
      *(undefined1 *)local_25c = 3;
      uVar8 = 4;
LAB_011b1444:
      local_24c = param_2 + 7;
      *(undefined1 *)local_24c = uVar8;
      *param_1 = 2;
      uVar8 = 7;
      goto LAB_011af820;
    }
    local_230 = local_88;
    local_220 = local_78;
    local_214 = local_74;
    local_218 = local_7c;
    local_21c = local_80;
    local_a8 = local_70;
    piStack_a4 = local_6c;
    piStack_a0 = local_68;
    local_9c = local_64;
    piStack_98 = local_60;
    piStack_94 = piStack_5c;
    piStack_90 = piStack_58;
    local_224 = local_54;
    local_228 = local_50;
    FUN_011928d4(param_2 + 0x18);
    if (piVar10 == (int *)0x2) {
      local_1f0 = unaff_r8;
      local_1ec = local_21c;
      local_1e8 = local_218;
LAB_011b165c:
      FUN_006cac18(&local_88,&local_1f0);
      local_21c = local_84;
      local_218 = local_80;
      local_220 = local_7c;
      local_214 = local_78;
      uVar22 = 0;
      local_118 = local_74;
      local_114 = local_70;
      local_110 = local_6c;
      local_10c = local_68;
      local_108 = local_64;
      local_104 = local_60;
      local_100 = piStack_5c;
      *(undefined1 *)(param_2 + 0x17) = 0;
      unaff_r8 = local_88;
    }
    else {
      local_118 = local_a8;
      local_114 = piStack_a4;
      local_110 = piStack_a0;
      local_10c = local_9c;
      local_108 = piStack_98;
      local_104 = piStack_94;
      local_100 = piStack_90;
LAB_011af6fc:
      local_248 = param_2 + 0x12;
      if (*(char *)(param_2 + 0x17) != '\0') {
        FUN_00b7d620(local_248);
      }
      uVar22 = 1;
      *(undefined1 *)(param_2 + 0x17) = 0;
    }
    local_248 = param_2 + 0x12;
    local_254 = (undefined4 *)((int)param_2 + 0x5d);
    local_158 = local_118;
    local_154 = local_114;
    local_150 = local_110;
    local_14c = local_10c;
    piStack_148 = local_108;
    piStack_144 = local_104;
    piStack_140 = local_100;
    *(undefined1 *)local_254 = 1;
    FUN_01192a14(local_248);
    *(undefined1 *)(param_2 + 0x2d) = 1;
    *(undefined1 *)(param_2 + 0x28) = 1;
    local_138 = local_158;
    piStack_134 = local_154;
    piStack_130 = local_150;
    local_12c = local_14c;
    local_128 = piStack_148;
    piStack_124 = piStack_144;
    piStack_120 = piStack_140;
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
LAB_011af798:
    local_24c = param_2 + 7;
    local_250 = param_2 + 4;
    local_210 = local_138;
    piStack_20c = piStack_134;
    piStack_208 = piStack_130;
    local_204 = local_12c;
    piStack_200 = local_128;
    piStack_1fc = piStack_124;
    piStack_1f8 = piStack_120;
    *(undefined1 *)local_24c = 1;
    FUN_011b2a74(local_250);
  }
  piVar10 = local_230;
switchD_011ade20_caseD_5:
  param_1[1] = piVar10;
  param_1[2] = unaff_r8;
  param_1[5] = local_220;
  param_1[6] = local_214;
  param_1[3] = local_21c;
  param_1[4] = local_218;
  *param_1 = uVar22;
  param_1[7] = local_210;
  param_1[8] = piStack_20c;
  param_1[9] = piStack_208;
  param_1[10] = local_204;
  param_1[0xb] = piStack_200;
  param_1[0xc] = piStack_1fc;
  param_1[0xd] = piStack_1f8;
  param_1[0xe] = local_224;
  param_1[0xf] = local_228;
  uVar8 = 1;
LAB_011af820:
  *(undefined1 *)(param_2 + 3) = uVar8;
  return;
}

