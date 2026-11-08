// FUN_00d653f8 @ 00d653f8 size=3076 calls_out=18 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d653f8(undefined4 *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int ****ppppiVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int ***pppiVar14;
  int ***extraout_r1;
  int ***extraout_r1_00;
  uint uVar15;
  int iVar16;
  int iVar17;
  int ****unaff_r7;
  int ****ppppiVar18;
  int ****ppppiVar19;
  int ****ppppiVar20;
  int ****unaff_r10;
  int ****unaff_r11;
  int ****ppppiVar21;
  int ****extraout_r12;
  int iVar22;
  int ****ppppiVar23;
  int ****local_244;
  int ****local_234;
  int ****local_230;
  int ****local_22c;
  int ****local_228;
  int ****local_224;
  int ****local_220;
  int ****local_21c;
  int ****local_218;
  int ****local_214;
  int ****ppppiStack_210;
  int ****ppppiStack_20c;
  uint local_208;
  int iStack_204;
  int local_200;
  int iStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int ****local_190;
  int ****local_18c;
  int ****local_188;
  int ****local_184;
  int ****local_180;
  int ****local_17c;
  int ****local_178;
  int ****local_174;
  uint local_170;
  int local_16c;
  int local_168;
  int ****local_128;
  int ****ppppiStack_124;
  int ****ppppiStack_120;
  int ****ppppiStack_11c;
  int ****ppppiStack_118;
  int ****local_114;
  int ****local_110;
  int ****ppppiStack_10c;
  uint uStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int ****local_f8;
  int ****ppppiStack_f4;
  int ****ppppiStack_f0;
  int ****ppppiStack_ec;
  uint local_e8;
  int iStack_e4;
  int iStack_e0;
  uint uStack_dc;
  int ****local_d4;
  int ****local_d0;
  int local_cc;
  int ****local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int **local_b8;
  int ****local_b4;
  int local_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int ****local_90;
  int ****local_8c;
  int ****local_88;
  int ****local_84;
  int ****local_80;
  int ****local_7c;
  int ****local_78;
  int ****local_74;
  int ****local_70;
  int ****ppppiStack_6c;
  int ****ppppiStack_68;
  int ****ppppiStack_64;
  int ****ppppiStack_60;
  int ****local_5c;
  int ****ppppiStack_58;
  int ****ppppiStack_54;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  ppppiVar19 = (int ****)*param_2;
  ppppiVar20 = (int ****)param_2[1];
  uVar8 = param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (ppppiVar19 == (int ****)&DAT_00000003 && ppppiVar20 == (int ****)0x0) {
    piVar9 = param_2 + 0x1a;
    local_22c = (int ****)(param_2 + 0x38);
    ppppiVar19 = (int ****)*piVar9;
    ppppiVar20 = (int ****)param_2[0x1b];
    unaff_r10 = ppppiVar20;
    if (ppppiVar19 != (int ****)&DAT_00000005 || ppppiVar20 != (int ****)0x0) {
      piVar4 = param_2 + 0x20;
      ppppiVar18 = unaff_r7;
      ppppiVar21 = unaff_r11;
      do {
        unaff_r10 = ppppiVar20;
        if (0x1f < (uint)param_2[0x34]) {
          iVar5 = *(int *)*param_3;
          iVar10 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar5 + 8))(iVar10);
LAB_00d65a3c:
          if (param_2[0x39] != 0) goto LAB_00d65464;
          goto LAB_00d65de0;
        }
        *piVar9 = 4;
        param_2[0x1b] = 0;
        param_2[0x34] = param_2[0x34] + 1;
        local_90 = ppppiVar19;
        local_8c = ppppiVar20;
        FUN_01bed4e2(&local_88,param_2 + 0x1c,0x60);
        unaff_r7 = local_7c;
        ppppiVar3 = local_80;
        ppppiVar23 = local_84;
        unaff_r11 = local_88;
        if (ppppiVar19 == (int ****)&SUB_00000004 && ppppiVar20 == (int ****)0x0) {
          FUN_00d652b4(piVar9);
          *piVar9 = 5;
          param_2[0x1b] = 0;
          unaff_r7 = ppppiVar18;
          unaff_r11 = ppppiVar21;
          break;
        }
        local_230 = local_88;
        local_234 = local_84;
        local_f8 = (int ****)*piVar4;
        ppppiStack_f4 = (int ****)param_2[0x21];
        ppppiStack_f0 = (int ****)param_2[0x22];
        ppppiStack_ec = (int ****)param_2[0x23];
        local_e8 = param_2[0x24];
        iStack_e4 = param_2[0x25];
        iStack_e0 = param_2[0x26];
        uStack_dc = param_2[0x27];
        local_128 = (int ****)param_2[0x28];
        ppppiStack_124 = (int ****)param_2[0x29];
        ppppiStack_120 = (int ****)param_2[0x2a];
        ppppiStack_11c = (int ****)param_2[0x2b];
        ppppiStack_118 = (int ****)param_2[0x2c];
        local_114 = (int ****)param_2[0x2d];
        local_110 = (int ****)param_2[0x2e];
        ppppiStack_10c = (int ****)param_2[0x2f];
        uStack_108 = param_2[0x30];
        iStack_104 = param_2[0x31];
        iStack_100 = param_2[0x32];
        iStack_fc = param_2[0x33];
        if (((uint)ppppiVar19 & 7) != 3) {
          if (ppppiVar19 == (int ****)&DAT_00000005) goto LAB_00d65a3c;
          iVar5 = param_2[0x39];
          local_224 = local_244;
          local_228 = ppppiVar21;
          if (iVar5 == 0) {
            local_1e0 = *piVar4;
            iStack_1dc = param_2[0x21];
            iStack_1d8 = param_2[0x22];
            iStack_1d4 = param_2[0x23];
            local_1d0 = param_2[0x24];
            iStack_1cc = param_2[0x25];
            iStack_1c8 = param_2[0x26];
            iStack_1c4 = param_2[0x27];
            local_1c0 = param_2[0x28];
            iStack_1bc = param_2[0x29];
            iStack_1b8 = param_2[0x2a];
            iStack_1b4 = param_2[0x2b];
            iStack_1b0 = param_2[0x2c];
            iStack_1ac = param_2[0x2d];
            local_1a8 = param_2[0x2e];
            iStack_1a4 = param_2[0x2f];
            iStack_1a0 = param_2[0x30];
            iStack_19c = param_2[0x31];
            iStack_198 = param_2[0x32];
            iStack_194 = param_2[0x33];
            ppppiVar18 = local_80;
            ppppiVar21 = local_7c;
            goto LAB_00d65b84;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            iVar5 = param_2[0x39];
          }
          param_2[2] = (int)unaff_r11;
          param_2[5] = (int)unaff_r7;
          param_2[3] = (int)ppppiVar23;
          *param_2 = (int)ppppiVar19;
          param_2[1] = (int)ppppiVar20;
          param_2[4] = (int)ppppiVar3;
          param_2[6] = (int)local_f8;
          param_2[7] = (int)ppppiStack_f4;
          param_2[8] = (int)ppppiStack_f0;
          param_2[9] = (int)ppppiStack_ec;
          param_2[10] = local_e8;
          param_2[0xb] = iStack_e4;
          param_2[0xc] = iStack_e0;
          param_2[0xd] = uStack_dc;
          param_2[0xe] = (int)local_128;
          param_2[0xf] = (int)ppppiStack_124;
          param_2[0x10] = (int)ppppiStack_120;
          param_2[0x11] = (int)ppppiStack_11c;
          param_2[0x12] = (int)ppppiStack_118;
          param_2[0x13] = (int)local_114;
          param_2[0x14] = (int)local_110;
          param_2[0x15] = (int)ppppiStack_10c;
          param_2[0x16] = uStack_108;
          param_2[0x17] = iStack_104;
          param_2[0x18] = iStack_100;
          param_2[0x19] = iStack_fc;
          FUN_01283fd8(&local_d4,local_22c,iVar5);
          if (((uint)local_c8 & 1) == 0) goto LAB_00d65490;
          local_bc = (int)local_d0 + ((uint)local_c8 >> 5);
          local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
          local_c4 = local_cc + ((uint)local_c8 >> 5);
          FUN_01283524(&local_190,&local_c4);
          local_b8 = (int **)((uint)local_c8 >> 5);
          if (local_188 < (int ****)((uint)local_c8 >> 5)) {
            local_88 = (int ****)&local_b4;
            local_b4 = local_188;
            local_84 = (int ****)&LAB_01a6a304;
            local_8c = (int ****)&LAB_01a6a304;
            local_90 = (int ****)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          local_d0 = (int ****)((int)local_188 - (int)local_b8);
          local_230 = local_190;
          local_234 = (int ****)((int)local_18c + (int)local_b8);
          local_c8 = local_184;
          goto LAB_00d65934;
        }
        local_218 = (int ****)*piVar4;
        local_214 = (int ****)param_2[0x21];
        ppppiStack_210 = (int ****)param_2[0x22];
        ppppiStack_20c = (int ****)param_2[0x23];
        local_208 = param_2[0x24];
        iStack_204 = param_2[0x25];
        local_200 = param_2[0x26];
        iStack_1fc = param_2[0x27];
        iVar10 = param_2[0x36];
        uVar15 = param_2[0x39];
        iVar5 = param_2[0x37];
        uVar6 = uVar15;
        if (param_2[0x3a] - uVar15 < 5) {
          FUN_01283c9c(local_22c,5);
          uVar6 = param_2[0x39];
          local_18c = (int ****)(param_2[0x3a] - uVar6);
          if (local_18c < 5) {
            local_228 = unaff_r11;
            local_21c = unaff_r7;
            local_220 = ppppiVar3;
            local_224 = ppppiVar23;
            local_190 = (int ****)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_190);
          }
        }
        uVar2 = uStack_dc;
        uVar1 = local_e8;
        ppppiVar19 = ppppiStack_f4;
        unaff_r10 = local_f8;
        param_2[0x39] = uVar6 + 5;
        local_190 = unaff_r11;
        local_184 = unaff_r7;
        local_188 = ppppiVar3;
        local_18c = ppppiVar23;
        local_180 = local_f8;
        local_17c = ppppiStack_f4;
        local_178 = ppppiStack_f0;
        local_174 = ppppiStack_ec;
        local_170 = local_e8;
        local_16c = iStack_e4;
        local_168 = iStack_e0;
        iVar17 = 0;
        iVar11 = 0;
        if (unaff_r11 != (int ****)0x0 || ppppiVar23 != (int ****)0x0) {
          uVar12 = LZCOUNT((uint)unaff_r11 | 1) | 0x20;
          if (ppppiVar23 != (int ****)0x0) {
            uVar12 = LZCOUNT(ppppiVar23);
          }
          iVar11 = ((uVar12 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        if (ppppiVar3 != (int ****)0x0 || unaff_r7 != (int ****)0x0) {
          uVar12 = LZCOUNT((uint)ppppiVar3 | 1) | 0x20;
          if (unaff_r7 != (int ****)0x0) {
            uVar12 = LZCOUNT(unaff_r7);
          }
          iVar17 = ((uVar12 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        iVar16 = 0;
        iVar13 = 0;
        if (local_f8 != (int ****)0x0 || ppppiStack_f4 != (int ****)0x0) {
          uVar12 = LZCOUNT((uint)local_f8 | 1) | 0x20;
          if (ppppiStack_f4 != (int ****)0x0) {
            uVar12 = LZCOUNT(ppppiStack_f4);
          }
          iVar13 = ((uVar12 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
        }
        if (local_e8 != 0) {
          iVar16 = local_e8 + ((LZCOUNT(local_e8 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        if (uStack_dc == 0) {
          iVar22 = 0;
        }
        else {
          iVar22 = uStack_dc + ((LZCOUNT(uStack_dc | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
        }
        pppiVar14 = (int ***)(iVar17 + iVar11 + iVar13 + iVar16 + iVar22);
        if ((int ***)(0x7ffffffa - uVar6) < pppiVar14) {
          local_d4 = (int ****)pppiVar14;
          local_d0 = (int ****)(0x7ffffffa - uVar6);
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_d4,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if (unaff_r11 != (int ****)0x0 || ppppiVar23 != (int ****)0x0) {
          FUN_00efe2f8(1,pppiVar14,unaff_r11,ppppiVar23,local_22c);
          pppiVar14 = extraout_r1;
        }
        if (ppppiVar3 != (int ****)0x0 || unaff_r7 != (int ****)0x0) {
          FUN_00efe2f8(2,pppiVar14,ppppiVar3,unaff_r7,local_22c);
          pppiVar14 = extraout_r1_00;
        }
        if (unaff_r10 != (int ****)0x0 || ppppiVar19 != (int ****)0x0) {
          FUN_00efe2f8(3,pppiVar14,unaff_r10,ppppiVar19,local_22c);
        }
        if (uVar1 != 0) {
          FUN_01016f10(4,local_174,uVar1,local_22c);
        }
        if (uVar2 != 0) {
          FUN_01016f10(5,local_168,uVar2,local_22c);
        }
        FUN_019bb7e0(local_178,local_174);
        FUN_019bb7e0(local_16c,local_168);
        uVar6 = param_2[0x39];
        if (uVar6 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar15,uVar6,uVar6,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,iVar10,iVar5,(int)*local_22c + uVar15,uVar6 - uVar15);
        ppppiVar21 = local_7c;
        ppppiVar18 = local_80;
        ppppiVar20 = local_8c;
        ppppiVar19 = local_90;
        if (local_90 != (int ****)&DAT_00000003 || local_8c != (int ****)0x0) {
          local_230 = local_88;
          local_234 = local_84;
          FUN_01bed4e2(&local_1e0,&local_78,0x50);
          goto LAB_00d65b84;
        }
        if (uVar8 <= (uint)param_2[0x39]) {
          FUN_01283fd8(&local_d4,local_22c);
          if (((uint)local_c8 & 1) == 0) goto LAB_00d65490;
          local_bc = (int)local_d0 + ((uint)local_c8 >> 5);
          local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
          local_c4 = local_cc + ((uint)local_c8 >> 5);
          FUN_01283524(&local_190,&local_c4);
          local_b8 = (int **)((uint)local_c8 >> 5);
          if (local_188 < (int ****)((uint)local_c8 >> 5)) {
            local_88 = (int ****)&local_b4;
            local_b4 = local_188;
            local_84 = (int ****)&LAB_01a6a304;
            local_8c = (int ****)&LAB_01a6a304;
            local_90 = (int ****)&local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d65918;
        }
        ppppiVar19 = (int ****)*piVar9;
        ppppiVar20 = (int ****)param_2[0x1b];
        local_244 = ppppiVar23;
        ppppiVar18 = unaff_r7;
        unaff_r10 = ppppiVar20;
        ppppiVar21 = unaff_r11;
      } while (ppppiVar19 != (int ****)&DAT_00000005 || ppppiVar20 != (int ****)0x0);
    }
    if (param_2[0x39] == 0) {
      ppppiVar20 = (int ****)0x0;
      ppppiVar19 = (int ****)&SUB_00000004;
      ppppiVar18 = unaff_r7;
      ppppiVar21 = unaff_r11;
    }
    else {
LAB_00d65464:
      FUN_01283fd8(&local_d4,local_22c);
      if (((uint)local_c8 & 1) == 0) {
LAB_00d65490:
        local_230 = (int ****)&DAT_01d2e520;
        local_234 = local_d4;
      }
      else {
        local_bc = (int)local_d0 + ((uint)local_c8 >> 5);
        local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
        local_c4 = local_cc + ((uint)local_c8 >> 5);
        FUN_01283524(&local_190,&local_c4);
        local_b8 = (int **)((uint)local_c8 >> 5);
        if (local_188 < (int ****)((uint)local_c8 >> 5)) {
          local_88 = (int ****)&local_b4;
          local_b4 = local_188;
          local_84 = (int ****)&LAB_01a6a304;
          local_8c = (int ****)&LAB_01a6a304;
          local_90 = (int ****)&local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d65918:
        local_d0 = (int ****)((int)local_188 - (int)local_b8);
        local_230 = local_190;
        local_234 = (int ****)((int)local_18c + (int)local_b8);
        local_c8 = local_184;
      }
LAB_00d65934:
      ppppiVar20 = (int ****)0x0;
      ppppiVar19 = (int ****)&DAT_00000003;
      ppppiVar18 = local_d0;
      ppppiVar21 = local_c8;
    }
LAB_00d65b84:
    if (ppppiVar19 == (int ****)&SUB_00000004 && ppppiVar20 == (int ****)0x0) {
      ppppiVar23 = (int ****)0xd65bc0;
      FUN_01a737fc(&local_90,param_2 + 0x42);
      ppppiVar18 = extraout_r12;
      if (local_90 != (int ****)&SUB_00000004 || local_8c != (int ****)0x0) {
        if (local_90 != (int ****)&DAT_00000003 || local_8c != (int ****)0x0) {
          local_b0 = local_48;
          iStack_ac = iStack_44;
          uStack_a8 = uStack_40;
          uStack_a4 = uStack_3c;
          local_a0 = local_38;
          uStack_9c = uStack_34;
          uStack_98 = uStack_30;
          uStack_94 = uStack_2c;
        }
        local_22c = local_88;
        local_234 = local_74;
        local_190 = local_70;
        local_18c = ppppiStack_6c;
        local_188 = ppppiStack_68;
        local_184 = ppppiStack_64;
        local_180 = ppppiStack_60;
        local_17c = local_5c;
        local_178 = ppppiStack_58;
        local_174 = ppppiStack_54;
        local_170 = uStack_50;
        local_16c = iStack_4c;
        unaff_r10 = local_84;
        ppppiVar21 = local_7c;
        ppppiVar18 = local_80;
        ppppiVar23 = local_78;
      }
      local_228 = local_190;
      local_224 = local_18c;
      local_220 = local_188;
      local_21c = local_184;
      local_218 = local_180;
      local_214 = local_17c;
      ppppiStack_210 = local_178;
      ppppiStack_20c = local_174;
      local_208 = local_170;
      iStack_204 = local_16c;
      local_200 = local_b0;
      iStack_1fc = iStack_ac;
      uStack_1f8 = uStack_a8;
      uStack_1f4 = uStack_a4;
      local_1f0 = local_a0;
      uStack_1ec = uStack_9c;
      uStack_1e8 = uStack_98;
      uStack_1e4 = uStack_94;
      ppppiVar19 = local_90;
      ppppiVar20 = local_8c;
LAB_00d65dbc:
      if (ppppiVar19 != (int ****)&DAT_00000003 || ppppiVar20 != (int ****)0x0) {
        if (ppppiVar19 != (int ****)&SUB_00000004 || ppppiVar20 != (int ****)0x0) {
          if (ppppiVar19 != (int ****)&DAT_00000005 || ppppiVar20 != (int ****)0x0) {
            FUN_01bed4e2(&local_70,&local_228,0x48);
            local_88 = local_22c;
            local_74 = local_234;
            local_90 = ppppiVar19;
            local_8c = ppppiVar20;
            local_84 = unaff_r10;
            local_80 = ppppiVar18;
            local_7c = ppppiVar21;
            local_78 = ppppiVar23;
            uVar7 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar7,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d65de0;
        }
        uVar7 = 4;
        goto LAB_00d65df4;
      }
      ppppiVar19 = local_234;
      local_230 = ppppiVar18;
    }
    else {
      if (ppppiVar19 != (int ****)&DAT_00000003 || ppppiVar20 != (int ****)0x0) {
        local_184 = local_234;
        local_188 = local_230;
        local_190 = ppppiVar19;
        local_18c = ppppiVar20;
        local_180 = ppppiVar18;
        local_17c = ppppiVar21;
        FUN_01bed4e2(&local_178,&local_1e0,0x50);
        ppppiVar23 = local_178;
        unaff_r10 = local_184;
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_190);
          ppppiVar20 = local_8c;
          ppppiVar19 = local_90;
          local_22c = local_88;
          local_234 = local_74;
          local_128 = local_70;
          ppppiStack_124 = ppppiStack_6c;
          ppppiStack_120 = ppppiStack_68;
          ppppiStack_11c = ppppiStack_64;
          ppppiStack_118 = ppppiStack_60;
          local_114 = local_5c;
          local_110 = ppppiStack_58;
          ppppiStack_10c = ppppiStack_54;
          uStack_108 = uStack_50;
          iStack_104 = iStack_4c;
          if (local_90 == (int ****)&DAT_00000003 && local_8c == (int ****)0x0) {
            local_228 = local_70;
            local_224 = ppppiStack_6c;
            local_220 = ppppiStack_68;
            local_21c = ppppiStack_64;
            local_218 = ppppiStack_60;
            local_214 = local_5c;
            ppppiStack_210 = ppppiStack_58;
            ppppiStack_20c = ppppiStack_54;
            local_208 = uStack_50;
            iStack_204 = iStack_4c;
            FUN_005f6588(&local_190);
            ppppiVar20 = (int ****)0x0;
            ppppiVar19 = (int ****)&DAT_00000003;
          }
          else {
            local_200 = local_48;
            iStack_1fc = iStack_44;
            uStack_1f8 = uStack_40;
            uStack_1f4 = uStack_3c;
            local_1f0 = local_38;
            uStack_1ec = uStack_34;
            uStack_1e8 = uStack_30;
            uStack_1e4 = uStack_2c;
            local_228 = local_70;
            local_224 = ppppiStack_6c;
            local_220 = ppppiStack_68;
            local_21c = ppppiStack_64;
            local_218 = ppppiStack_60;
            local_214 = local_5c;
            ppppiStack_210 = ppppiStack_58;
            ppppiStack_20c = ppppiStack_54;
            local_208 = uStack_50;
            iStack_204 = iStack_4c;
            FUN_005f6588(&local_190);
          }
          ppppiVar23 = local_78;
          ppppiVar18 = local_80;
          unaff_r10 = local_84;
          ppppiVar21 = local_7c;
        }
        else {
          local_234 = local_174;
          local_22c = local_188;
          FUN_01bed4e2(&local_228,&iStack_1d8,0x48);
        }
        goto LAB_00d65dbc;
      }
      unaff_r10 = (int ****)0x0;
      local_22c = (int ****)&DAT_00000003;
      ppppiVar19 = ppppiVar21;
      ppppiVar21 = local_234;
      ppppiVar23 = ppppiVar18;
    }
    param_1[8] = local_228;
    param_1[9] = local_224;
    param_1[10] = local_220;
    param_1[0xb] = local_21c;
    param_1[0xc] = local_218;
    param_1[0xd] = local_214;
    param_1[0xe] = ppppiStack_210;
    param_1[0xf] = ppppiStack_20c;
    param_1[0x10] = local_208;
    param_1[0x11] = iStack_204;
    param_1[1] = 0;
    param_1[2] = local_22c;
    param_1[3] = unaff_r10;
    *param_1 = 3;
    param_1[4] = local_230;
    param_1[5] = ppppiVar21;
    param_1[6] = ppppiVar23;
    param_1[7] = ppppiVar19;
  }
  else {
    local_230 = (int ****)param_2[2];
    local_234 = (int ****)param_2[3];
    ppppiVar18 = (int ****)param_2[4];
    ppppiVar21 = (int ****)param_2[5];
    FUN_01bed4e2(&local_1e0,param_2 + 6,0x50);
    if (ppppiVar19 != (int ****)&DAT_00000005 || ppppiVar20 != (int ****)0x0) goto LAB_00d65b84;
LAB_00d65de0:
    uVar7 = 5;
LAB_00d65df4:
    *param_1 = uVar7;
    param_1[1] = 0;
  }
  return;
}

