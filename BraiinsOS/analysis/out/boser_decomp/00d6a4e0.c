// FUN_00d6a4e0 @ 00d6a4e0 size=2668 calls_out=17 calls_in=0
// strings: 

void FUN_00d6a4e0(int ****param_1,int ****param_2,int *param_3)

{
  int ****ppppiVar1;
  int ****ppppiVar2;
  int ****ppppiVar3;
  int ****ppppiVar4;
  int iVar5;
  int ***pppiVar6;
  undefined4 uVar7;
  int iVar8;
  int ****ppppiVar9;
  int ****ppppiVar10;
  int ***pppiVar11;
  int ****ppppiVar12;
  int ****ppppiVar13;
  int ****ppppiVar14;
  int ***pppiVar15;
  int ****ppppiVar16;
  int ***pppiVar17;
  int ****unaff_r11;
  int ****ppppiVar18;
  int ****local_23c;
  int ****local_238;
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
  int ****ppppiStack_208;
  int ****local_204;
  int ***local_200;
  int ***pppiStack_1fc;
  int ***pppiStack_1f8;
  int ***pppiStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  int ***local_1e0;
  int ***pppiStack_1dc;
  int ***pppiStack_1d8;
  int ***pppiStack_1d4;
  int ***pppiStack_1d0;
  int ***local_1cc;
  int ***pppiStack_1c8;
  int ***pppiStack_1c4;
  int ***pppiStack_1c0;
  int ***pppiStack_1bc;
  int ***local_1b8;
  int ***pppiStack_1b4;
  int ***pppiStack_1b0;
  int ***pppiStack_1ac;
  int ***pppiStack_1a8;
  int ***local_1a4;
  int ***pppiStack_1a0;
  int ***pppiStack_19c;
  int ***pppiStack_198;
  int ***pppiStack_194;
  int ****local_190;
  int ****local_18c;
  int ****local_188;
  int ****local_184;
  int ****local_180;
  int ****local_17c;
  int ****local_178;
  int ****local_174;
  int ****ppppiStack_170;
  int ****local_16c;
  int ****ppppiStack_168;
  int ****ppppiStack_164;
  int ****ppppiStack_160;
  int ****ppppiStack_15c;
  int ***local_128;
  int ***pppiStack_124;
  int ***pppiStack_120;
  int ***pppiStack_11c;
  int ***pppiStack_118;
  int ***local_114;
  int ***pppiStack_110;
  int ***pppiStack_10c;
  int ***pppiStack_108;
  int ***pppiStack_104;
  int ****local_100;
  int ****ppppiStack_fc;
  int ****ppppiStack_f8;
  int ****ppppiStack_f4;
  int ****ppppiStack_f0;
  int ****local_ec;
  int ****ppppiStack_e8;
  int ****ppppiStack_e4;
  int ****ppppiStack_e0;
  int ****ppppiStack_dc;
  int ****local_d4;
  int ****local_d0;
  int local_cc;
  int ****local_c8;
  int ****local_c4;
  int local_c0;
  int local_bc;
  int **local_b8;
  int ****local_b4;
  int ***local_b0;
  int ***pppiStack_ac;
  int ***pppiStack_a8;
  int ***pppiStack_a4;
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
  int ****ppppiStack_50;
  int ****ppppiStack_4c;
  int ***local_48;
  int ***pppiStack_44;
  int ***pppiStack_40;
  int ***pppiStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  ppppiVar14 = (int ****)*param_2;
  ppppiVar16 = (int ****)param_2[1];
  local_23c = (int ****)param_2[0x41];
  *param_2 = (int ***)0x3;
  param_2[1] = (int ***)0x0;
  if (ppppiVar14 == (int ****)&DAT_00000003 && ppppiVar16 == (int ****)0x0) {
    ppppiVar9 = param_2 + 0x1a;
    ppppiVar12 = param_2 + 0x38;
    ppppiVar14 = (int ****)*ppppiVar9;
    ppppiVar13 = (int ****)param_2[0x1b];
    if (ppppiVar14 != (int ****)&DAT_00000005 || ppppiVar13 != (int ****)0x0) {
      ppppiVar4 = param_2 + 0x20;
      ppppiVar18 = param_1;
      do {
        local_230 = param_2;
        if ((int ***)0x1f < param_2[0x34]) {
          iVar5 = *(int *)*param_3;
          iVar8 = ((int *)*param_3)[1];
          param_2[0x34] = (int ***)0x0;
          (**(code **)(iVar5 + 8))(iVar8);
LAB_00d6a938:
          if (param_2[0x39] != (int ***)0x0) goto LAB_00d6a544;
          goto LAB_00d6abfc;
        }
        *ppppiVar9 = (int ***)0x4;
        param_2[0x1b] = (int ***)0x0;
        param_2[0x34] = (int ***)((int)param_2[0x34] + 1);
        local_90 = ppppiVar14;
        local_8c = ppppiVar13;
        FUN_01bed4e2(&local_88,param_2 + 0x1c,0x60);
        ppppiVar3 = local_7c;
        ppppiVar10 = local_80;
        ppppiVar2 = local_84;
        ppppiVar1 = local_88;
        if (ppppiVar14 == (int ****)&SUB_00000004 && ppppiVar13 == (int ****)0x0) {
          FUN_00d6a3b8(ppppiVar9);
          *ppppiVar9 = (int ***)0x5;
          param_2[0x1b] = (int ***)0x0;
          break;
        }
        local_22c = local_88;
        local_238 = local_84;
        local_100 = (int ****)*ppppiVar4;
        ppppiStack_fc = (int ****)param_2[0x21];
        ppppiStack_f8 = (int ****)param_2[0x22];
        ppppiStack_f4 = (int ****)param_2[0x23];
        ppppiStack_f0 = (int ****)param_2[0x24];
        local_ec = (int ****)param_2[0x25];
        ppppiStack_e8 = (int ****)param_2[0x26];
        ppppiStack_e4 = (int ****)param_2[0x27];
        ppppiStack_e0 = (int ****)param_2[0x28];
        ppppiStack_dc = (int ****)param_2[0x29];
        local_128 = param_2[0x2a];
        pppiStack_124 = param_2[0x2b];
        pppiStack_120 = param_2[0x2c];
        pppiStack_11c = param_2[0x2d];
        pppiStack_118 = param_2[0x2e];
        local_114 = param_2[0x2f];
        pppiStack_110 = param_2[0x30];
        pppiStack_10c = param_2[0x31];
        pppiStack_108 = param_2[0x32];
        pppiStack_104 = param_2[0x33];
        if (((uint)ppppiVar14 & 7) != 3) {
          if (ppppiVar14 == (int ****)&DAT_00000005) goto LAB_00d6a938;
          pppiVar6 = param_2[0x39];
          local_228 = ppppiVar18;
          local_224 = ppppiVar16;
          if (pppiVar6 == (int ***)0x0) {
            local_1e0 = *ppppiVar4;
            pppiStack_1dc = param_2[0x21];
            pppiStack_1d8 = param_2[0x22];
            pppiStack_1d4 = param_2[0x23];
            pppiStack_1d0 = param_2[0x24];
            local_1cc = param_2[0x25];
            pppiStack_1c8 = param_2[0x26];
            pppiStack_1c4 = param_2[0x27];
            pppiStack_1c0 = param_2[0x28];
            pppiStack_1bc = param_2[0x29];
            local_1b8 = param_2[0x2a];
            pppiStack_1b4 = param_2[0x2b];
            pppiStack_1b0 = param_2[0x2c];
            pppiStack_1ac = param_2[0x2d];
            pppiStack_1a8 = param_2[0x2e];
            local_1a4 = param_2[0x2f];
            pppiStack_1a0 = param_2[0x30];
            pppiStack_19c = param_2[0x31];
            pppiStack_198 = param_2[0x32];
            pppiStack_194 = param_2[0x33];
            ppppiVar10 = local_7c;
            ppppiVar18 = local_80;
            ppppiVar16 = ppppiVar13;
            unaff_r11 = local_84;
          }
          else {
            if (*param_2 != (int ***)0x3 || param_2[1] != (int ***)0x0) {
              FUN_005f6588(param_2);
              pppiVar6 = param_2[0x39];
            }
            param_2[2] = (int ***)ppppiVar1;
            param_2[3] = (int ***)ppppiVar2;
            param_2[4] = (int ***)ppppiVar10;
            *param_2 = (int ***)ppppiVar14;
            param_2[1] = (int ***)ppppiVar13;
            param_2[5] = (int ***)ppppiVar3;
            param_2[6] = (int ***)local_100;
            param_2[7] = (int ***)ppppiStack_fc;
            param_2[8] = (int ***)ppppiStack_f8;
            param_2[9] = (int ***)ppppiStack_f4;
            param_2[10] = (int ***)ppppiStack_f0;
            param_2[0xb] = (int ***)local_ec;
            param_2[0xc] = (int ***)ppppiStack_e8;
            param_2[0xd] = (int ***)ppppiStack_e4;
            param_2[0xe] = (int ***)ppppiStack_e0;
            param_2[0xf] = (int ***)ppppiStack_dc;
            param_2[0x10] = local_128;
            param_2[0x11] = pppiStack_124;
            param_2[0x12] = pppiStack_120;
            param_2[0x13] = pppiStack_11c;
            param_2[0x14] = pppiStack_118;
            param_2[0x15] = local_114;
            param_2[0x16] = pppiStack_110;
            param_2[0x17] = pppiStack_10c;
            param_2[0x18] = pppiStack_108;
            param_2[0x19] = pppiStack_104;
            FUN_01283fd8(&local_d4,ppppiVar12,pppiVar6);
            if (((uint)local_c8 & 1) == 0) {
              local_22c = (int ****)&DAT_01d2e520;
            }
            else {
              local_bc = (int)local_d0 + ((uint)local_c8 >> 5);
              local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
              local_c4 = (int ****)(local_cc + ((uint)local_c8 >> 5));
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
              local_22c = local_190;
              local_d4 = (int ****)((int)local_18c + (int)local_b8);
              local_c8 = local_184;
            }
            ppppiVar14 = (int ****)&DAT_00000003;
            ppppiVar10 = local_c8;
            ppppiVar18 = local_d0;
            ppppiVar16 = (int ****)0x0;
            unaff_r11 = local_d4;
          }
          goto LAB_00d6a990;
        }
        local_218 = (int ****)*ppppiVar4;
        local_214 = (int ****)param_2[0x21];
        ppppiStack_210 = (int ****)param_2[0x22];
        ppppiStack_20c = (int ****)param_2[0x23];
        ppppiStack_208 = (int ****)param_2[0x24];
        local_204 = (int ****)param_2[0x25];
        local_200 = param_2[0x26];
        pppiStack_1fc = param_2[0x27];
        pppiStack_1f8 = param_2[0x28];
        pppiStack_1f4 = param_2[0x29];
        pppiVar11 = param_2[0x39];
        pppiVar15 = param_2[0x36];
        pppiVar17 = param_2[0x37];
        pppiVar6 = pppiVar11;
        if ((uint)((int)param_2[0x3a] - (int)pppiVar11) < 5) {
          FUN_01283c9c(ppppiVar12,5);
          pppiVar6 = param_2[0x39];
          local_18c = (int ****)((int)param_2[0x3a] - (int)pppiVar6);
          if (local_18c < 5) {
            local_220 = ppppiVar10;
            local_224 = ppppiVar2;
            local_228 = ppppiVar1;
            local_21c = ppppiVar3;
            local_190 = (int ****)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_190);
          }
        }
        param_2[0x39] = (int ***)((int)pppiVar6 + 5);
        local_188 = ppppiVar10;
        local_184 = ppppiVar3;
        local_18c = ppppiVar2;
        local_190 = ppppiVar1;
        local_180 = local_100;
        local_17c = ppppiStack_fc;
        local_178 = ppppiStack_f8;
        local_174 = ppppiStack_f4;
        ppppiStack_170 = ppppiStack_f0;
        local_16c = local_ec;
        ppppiStack_168 = ppppiStack_e8;
        ppppiStack_164 = ppppiStack_e4;
        ppppiStack_160 = ppppiStack_e0;
        ppppiStack_15c = ppppiStack_dc;
        FUN_00efff18(&local_d4,&local_190,ppppiVar12);
        if (local_d4 == (int ****)&DAT_00000001) {
          local_c0 = local_cc;
          local_c4 = local_d0;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_c4,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        FUN_00d6b0f4(&local_190);
        pppiVar6 = param_2[0x39];
        if (pppiVar6 < pppiVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(pppiVar11,pppiVar6,pppiVar6,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,pppiVar15,pppiVar17,(int)*ppppiVar12 + (int)pppiVar11,
                     (int)pppiVar6 - (int)pppiVar11);
        ppppiVar10 = local_7c;
        ppppiVar18 = local_80;
        unaff_r11 = local_84;
        ppppiVar16 = local_8c;
        ppppiVar14 = local_90;
        if (local_90 != (int ****)&DAT_00000003 || local_8c != (int ****)0x0) {
          local_22c = local_88;
          FUN_01bed4e2(&local_1e0,&local_78,0x50);
          goto LAB_00d6a98c;
        }
        if (local_23c <= param_2[0x39]) {
          FUN_01283fd8(&local_d4,ppppiVar12);
          if (((uint)local_c8 & 1) == 0) goto LAB_00d6a570;
          local_bc = (int)local_d0 + ((uint)local_c8 >> 5);
          local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
          local_c4 = (int ****)(local_cc + ((uint)local_c8 >> 5));
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
          local_22c = local_190;
          local_d4 = (int ****)((int)local_18c + (int)local_b8);
          local_c8 = local_184;
          goto LAB_00d6a834;
        }
        ppppiVar14 = (int ****)*ppppiVar9;
        ppppiVar13 = (int ****)param_2[0x1b];
        ppppiVar16 = ppppiVar2;
        ppppiVar18 = ppppiVar1;
        unaff_r11 = ppppiVar1;
      } while (ppppiVar14 != (int ****)&DAT_00000005 || ppppiVar13 != (int ****)0x0);
    }
    if (param_2[0x39] == (int ***)0x0) {
      ppppiVar16 = (int ****)0x0;
      ppppiVar14 = (int ****)&SUB_00000004;
      ppppiVar10 = ppppiVar9;
      ppppiVar18 = ppppiVar12;
LAB_00d6a98c:
    }
    else {
LAB_00d6a544:
      FUN_01283fd8(&local_d4,ppppiVar12);
      if (((uint)local_c8 & 1) == 0) {
LAB_00d6a570:
        local_22c = (int ****)&DAT_01d2e520;
      }
      else {
        local_bc = (int)local_d0 + ((uint)local_c8 >> 5);
        local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
        local_c4 = (int ****)(local_cc + ((uint)local_c8 >> 5));
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
        local_22c = local_190;
        local_d4 = (int ****)((int)local_18c + (int)local_b8);
        local_c8 = local_184;
      }
LAB_00d6a834:
      ppppiVar14 = (int ****)&DAT_00000003;
      ppppiVar10 = local_c8;
      ppppiVar18 = local_d0;
      ppppiVar16 = (int ****)0x0;
      unaff_r11 = local_d4;
    }
LAB_00d6a990:
    if (ppppiVar14 == (int ****)&SUB_00000004 && ppppiVar16 == (int ****)0x0) {
      ppppiVar18 = (int ****)0xd6a9cc;
      FUN_01a737fc(&local_90,param_2 + 0x42);
      if (local_90 != (int ****)&SUB_00000004 || local_8c != (int ****)0x0) {
        if (local_90 != (int ****)&DAT_00000003 || local_8c != (int ****)0x0) {
          local_b0 = local_48;
          pppiStack_ac = pppiStack_44;
          pppiStack_a8 = pppiStack_40;
          pppiStack_a4 = pppiStack_3c;
          local_a0 = local_38;
          uStack_9c = uStack_34;
          uStack_98 = uStack_30;
          uStack_94 = uStack_2c;
        }
        local_23c = local_74;
        local_230 = local_88;
        local_238 = local_84;
        local_190 = local_70;
        local_18c = ppppiStack_6c;
        local_188 = ppppiStack_68;
        local_184 = ppppiStack_64;
        local_180 = ppppiStack_60;
        local_17c = local_5c;
        local_178 = ppppiStack_58;
        local_174 = ppppiStack_54;
        ppppiStack_170 = ppppiStack_50;
        local_16c = ppppiStack_4c;
        ppppiVar10 = local_7c;
        unaff_r11 = local_78;
        ppppiVar18 = local_80;
      }
      local_228 = local_190;
      local_224 = local_18c;
      local_220 = local_188;
      local_21c = local_184;
      local_218 = local_180;
      local_214 = local_17c;
      ppppiStack_210 = local_178;
      ppppiStack_20c = local_174;
      ppppiStack_208 = ppppiStack_170;
      local_204 = local_16c;
      local_200 = local_b0;
      pppiStack_1fc = pppiStack_ac;
      pppiStack_1f8 = pppiStack_a8;
      pppiStack_1f4 = pppiStack_a4;
      local_1f0 = local_a0;
      uStack_1ec = uStack_9c;
      uStack_1e8 = uStack_98;
      uStack_1e4 = uStack_94;
      ppppiVar14 = local_90;
      ppppiVar16 = local_8c;
LAB_00d6abd8:
      if (ppppiVar14 != (int ****)&DAT_00000003 || ppppiVar16 != (int ****)0x0) {
        if (ppppiVar14 != (int ****)&SUB_00000004 || ppppiVar16 != (int ****)0x0) {
          if (ppppiVar14 != (int ****)&DAT_00000005 || ppppiVar16 != (int ****)0x0) {
            FUN_01bed4e2(&local_70,&local_228,0x48);
            local_84 = local_238;
            local_88 = local_230;
            local_74 = local_23c;
            local_90 = ppppiVar14;
            local_8c = ppppiVar16;
            local_80 = ppppiVar18;
            local_7c = ppppiVar10;
            local_78 = unaff_r11;
            uVar7 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar7,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d6abfc;
        }
        pppiVar6 = (int ***)0x4;
        goto LAB_00d6ac10;
      }
      local_22c = ppppiVar18;
    }
    else {
      if (ppppiVar14 != (int ****)&DAT_00000003 || ppppiVar16 != (int ****)0x0) {
        local_188 = local_22c;
        local_190 = ppppiVar14;
        local_18c = ppppiVar16;
        local_184 = unaff_r11;
        local_180 = ppppiVar18;
        local_17c = ppppiVar10;
        FUN_01bed4e2(&local_178,&local_1e0,0x50);
        unaff_r11 = local_178;
        if (*(char *)(param_2 + 0x5c) == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_190);
          ppppiVar16 = local_8c;
          ppppiVar14 = local_90;
          local_230 = local_88;
          local_238 = local_84;
          local_23c = local_74;
          local_100 = local_70;
          ppppiStack_fc = ppppiStack_6c;
          ppppiStack_f8 = ppppiStack_68;
          ppppiStack_f4 = ppppiStack_64;
          ppppiStack_f0 = ppppiStack_60;
          local_ec = local_5c;
          ppppiStack_e8 = ppppiStack_58;
          ppppiStack_e4 = ppppiStack_54;
          ppppiStack_e0 = ppppiStack_50;
          ppppiStack_dc = ppppiStack_4c;
          if (local_90 == (int ****)&DAT_00000003 && local_8c == (int ****)0x0) {
            local_228 = local_70;
            local_224 = ppppiStack_6c;
            local_220 = ppppiStack_68;
            local_21c = ppppiStack_64;
            local_218 = ppppiStack_60;
            local_214 = local_5c;
            ppppiStack_210 = ppppiStack_58;
            ppppiStack_20c = ppppiStack_54;
            ppppiStack_208 = ppppiStack_50;
            local_204 = ppppiStack_4c;
            FUN_005f6588(&local_190);
            ppppiVar16 = (int ****)0x0;
            ppppiVar14 = (int ****)&DAT_00000003;
          }
          else {
            local_200 = local_48;
            pppiStack_1fc = pppiStack_44;
            pppiStack_1f8 = pppiStack_40;
            pppiStack_1f4 = pppiStack_3c;
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
            ppppiStack_208 = ppppiStack_50;
            local_204 = ppppiStack_4c;
            FUN_005f6588(&local_190);
          }
          ppppiVar10 = local_7c;
          ppppiVar18 = local_80;
          unaff_r11 = local_78;
        }
        else {
          local_23c = local_174;
          local_230 = local_188;
          local_238 = local_184;
          FUN_01bed4e2(&local_228,&pppiStack_1d8,0x48);
        }
        goto LAB_00d6abd8;
      }
      local_238 = (int ****)0x0;
      local_230 = (int ****)&DAT_00000003;
      local_23c = ppppiVar10;
      ppppiVar10 = unaff_r11;
      unaff_r11 = ppppiVar18;
    }
    param_1[8] = (int ***)local_228;
    param_1[9] = (int ***)local_224;
    param_1[10] = (int ***)local_220;
    param_1[0xb] = (int ***)local_21c;
    param_1[0xc] = (int ***)local_218;
    param_1[0xd] = (int ***)local_214;
    param_1[0xe] = (int ***)ppppiStack_210;
    param_1[0xf] = (int ***)ppppiStack_20c;
    param_1[0x10] = (int ***)ppppiStack_208;
    param_1[0x11] = (int ***)local_204;
    param_1[1] = (int ***)0x0;
    param_1[2] = (int ***)local_230;
    param_1[3] = (int ***)local_238;
    *param_1 = (int ***)0x3;
    param_1[4] = (int ***)local_22c;
    param_1[5] = (int ***)ppppiVar10;
    param_1[6] = (int ***)unaff_r11;
    param_1[7] = (int ***)local_23c;
  }
  else {
    local_22c = (int ****)param_2[2];
    unaff_r11 = (int ****)param_2[3];
    ppppiVar18 = (int ****)param_2[4];
    ppppiVar10 = (int ****)param_2[5];
    FUN_01bed4e2(&local_1e0,param_2 + 6,0x50);
    if (ppppiVar14 != (int ****)&DAT_00000005 || ppppiVar16 != (int ****)0x0) goto LAB_00d6a990;
LAB_00d6abfc:
    pppiVar6 = (int ***)0x5;
LAB_00d6ac10:
    *param_1 = pppiVar6;
    param_1[1] = (int ***)0x0;
  }
  return;
}

