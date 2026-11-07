// FUN_00d87a60 @ 00d87a60 size=2672 calls_out=18 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d87a60(undefined4 *param_1,uint *param_2,int *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint *unaff_r5;
  uint *puVar11;
  uint uVar12;
  uint *unaff_r7;
  uint **ppuVar13;
  uint *puVar14;
  uint *unaff_r9;
  uint **ppuVar15;
  uint *puVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint *extraout_r12;
  uint *local_20c;
  uint *local_208;
  uint *local_204;
  uint *local_200;
  uint *puStack_1fc;
  uint *puStack_1f8;
  uint *puStack_1f4;
  uint *puStack_1f0;
  uint *local_1ec;
  uint *puStack_1e8;
  uint *puStack_1e4;
  uint *puStack_1e0;
  uint *puStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint local_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint local_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint local_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint *local_168;
  uint *local_164;
  uint *local_160;
  uint *local_15c;
  uint *local_158;
  uint *local_154;
  uint *local_150;
  uint *local_14c;
  uint *puStack_148;
  uint *local_144;
  uint *puStack_140;
  uint *puStack_13c;
  uint *puStack_138;
  uint *local_100;
  uint *puStack_fc;
  uint *puStack_f8;
  uint *puStack_f4;
  uint *puStack_f0;
  uint *local_ec;
  uint *puStack_e8;
  uint *puStack_e4;
  uint *puStack_e0;
  uint *puStack_dc;
  uint *local_d4;
  uint *local_d0;
  int local_cc;
  uint *local_c8;
  int local_c4;
  int local_c0;
  undefined1 *local_bc;
  uint local_b8;
  uint *local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint *local_90;
  uint *local_8c;
  uint **local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint *local_74;
  uint *local_70;
  uint *puStack_6c;
  uint *puStack_68;
  uint *puStack_64;
  uint *puStack_60;
  uint *local_5c;
  uint *puStack_58;
  uint *puStack_54;
  uint *puStack_50;
  uint *puStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar16 = (uint *)*param_2;
  puVar18 = (uint *)param_2[1];
  uVar5 = param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (puVar16 == (uint *)&DAT_00000003 && puVar18 == (uint *)0x0) {
    puVar11 = param_2 + 0x1a;
    puVar9 = param_2 + 0x38;
    puVar16 = (uint *)*puVar11;
    puVar18 = (uint *)param_2[0x1b];
    if (puVar16 != (uint *)&DAT_00000005 || puVar18 != (uint *)0x0) {
      do {
        local_204 = param_2;
        if (0x1f < param_2[0x34]) {
          iVar3 = *(int *)*param_3;
          iVar6 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar3 + 8))(iVar6);
LAB_00d87e70:
          if (param_2[0x39] == 0) goto LAB_00d882f8;
          goto LAB_00d87abc;
        }
        puVar14 = (uint *)param_2[0x1d];
        unaff_r5 = (uint *)param_2[0x1e];
        unaff_r9 = (uint *)param_2[0x1f];
        local_208 = (uint *)param_2[0x1c];
        param_2[0x34] = param_2[0x34] + 1;
        *puVar11 = 4;
        param_2[0x1b] = 0;
        if (((uint)puVar16 & 7) == 4) {
          *puVar11 = 5;
          param_2[0x1b] = 0;
          break;
        }
        if (puVar16 == (uint *)&DAT_00000005) goto LAB_00d87e70;
        local_200 = (uint *)param_2[0x20];
        puStack_1fc = (uint *)param_2[0x21];
        puStack_1f8 = (uint *)param_2[0x22];
        puStack_1f4 = (uint *)param_2[0x23];
        puStack_1f0 = (uint *)param_2[0x24];
        local_1ec = (uint *)param_2[0x25];
        puStack_1e8 = (uint *)param_2[0x26];
        puStack_1e4 = (uint *)param_2[0x27];
        puStack_1e0 = (uint *)param_2[0x28];
        puStack_1dc = (uint *)param_2[0x29];
        local_100 = (uint *)param_2[0x2a];
        puStack_fc = (uint *)param_2[0x2b];
        puStack_f8 = (uint *)param_2[0x2c];
        puStack_f4 = (uint *)param_2[0x2d];
        puStack_f0 = (uint *)param_2[0x2e];
        local_ec = (uint *)param_2[0x2f];
        puStack_e8 = (uint *)param_2[0x30];
        puStack_e4 = (uint *)param_2[0x31];
        puStack_e0 = (uint *)param_2[0x32];
        puStack_dc = (uint *)param_2[0x33];
        if (puVar16 != (uint *)&DAT_00000003 || puVar18 != (uint *)0x0) {
          uVar5 = param_2[0x39];
          if (uVar5 == 0) {
            local_1b8 = param_2[0x20];
            uStack_1b4 = param_2[0x21];
            uStack_1b0 = param_2[0x22];
            uStack_1ac = param_2[0x23];
            uStack_1a8 = param_2[0x24];
            local_1a4 = param_2[0x25];
            uStack_1a0 = param_2[0x26];
            uStack_19c = param_2[0x27];
            uStack_198 = param_2[0x28];
            uStack_194 = param_2[0x29];
            local_190 = param_2[0x2a];
            uStack_18c = param_2[0x2b];
            uStack_188 = param_2[0x2c];
            uStack_184 = param_2[0x2d];
            uStack_180 = param_2[0x2e];
            local_17c = param_2[0x2f];
            uStack_178 = param_2[0x30];
            uStack_174 = param_2[0x31];
            uStack_170 = param_2[0x32];
            uStack_16c = param_2[0x33];
            ppuVar13 = (uint **)local_208;
          }
          else {
            if (*param_2 != 3 || param_2[1] != 0) {
              FUN_005f6588(param_2);
              uVar5 = param_2[0x39];
            }
            param_2[5] = (uint)unaff_r9;
            param_2[2] = (uint)local_208;
            *param_2 = (uint)puVar16;
            param_2[1] = (uint)puVar18;
            param_2[3] = (uint)puVar14;
            param_2[4] = (uint)unaff_r5;
            param_2[6] = (uint)local_200;
            param_2[7] = (uint)puStack_1fc;
            param_2[8] = (uint)puStack_1f8;
            param_2[9] = (uint)puStack_1f4;
            param_2[10] = (uint)puStack_1f0;
            param_2[0xb] = (uint)local_1ec;
            param_2[0xc] = (uint)puStack_1e8;
            param_2[0xd] = (uint)puStack_1e4;
            param_2[0xe] = (uint)puStack_1e0;
            param_2[0xf] = (uint)puStack_1dc;
            param_2[0x10] = (uint)local_100;
            param_2[0x11] = (uint)puStack_fc;
            param_2[0x12] = (uint)puStack_f8;
            param_2[0x13] = (uint)puStack_f4;
            param_2[0x14] = (uint)puStack_f0;
            param_2[0x15] = (uint)local_ec;
            param_2[0x16] = (uint)puStack_e8;
            param_2[0x17] = (uint)puStack_e4;
            param_2[0x18] = (uint)puStack_e0;
            param_2[0x19] = (uint)puStack_dc;
            FUN_01283fd8(&local_d4,puVar9,uVar5);
            if (((uint)local_c8 & 1) == 0) {
              puVar14 = local_d4;
              unaff_r5 = local_d0;
              ppuVar13 = (uint **)&DAT_01d2e520;
              unaff_r9 = local_c8;
            }
            else {
              local_bc = (undefined1 *)((int)local_d0 + ((uint)local_c8 >> 5));
              local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
              local_c4 = local_cc + ((uint)local_c8 >> 5);
              FUN_01283524(&local_168,&local_c4);
              local_b8 = (uint)local_c8 >> 5;
              if (local_160 < (uint *)((uint)local_c8 >> 5)) {
                local_88 = &local_b4;
                local_b4 = local_160;
                local_84 = (uint *)&LAB_01a6a304;
                local_8c = (uint *)&LAB_01a6a304;
                local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
                FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
              }
              unaff_r5 = (uint *)((int)local_160 - local_b8);
              puVar14 = (uint *)((int)local_164 + local_b8);
              ppuVar13 = (uint **)local_168;
              unaff_r9 = local_15c;
            }
            puVar18 = (uint *)0x0;
            puVar16 = (uint *)&DAT_00000003;
          }
          goto LAB_00d88078;
        }
        uVar17 = param_2[0x39];
        uVar19 = param_2[0x36];
        local_20c = (uint *)param_2[0x37];
        uVar10 = uVar17;
        if (param_2[0x3a] - uVar17 < 5) {
          FUN_01283c9c(puVar9,5);
          uVar10 = param_2[0x39];
          local_164 = (uint *)(param_2[0x3a] - uVar10);
          if (local_164 < 5) {
            local_168 = (uint *)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_168);
          }
        }
        puVar1 = puStack_1f8;
        param_2[0x39] = uVar10 + 5;
        local_158 = local_200;
        local_154 = puStack_1fc;
        local_150 = puStack_1f8;
        local_14c = puStack_1f4;
        puStack_148 = puStack_1f0;
        local_144 = local_1ec;
        puStack_140 = puStack_1e8;
        puStack_13c = puStack_1e4;
        puStack_138 = puStack_1e0;
        unaff_r7 = (uint *)0x0;
        iVar3 = 0;
        uVar12 = (uint)puStack_1dc & 0xff;
        local_168 = local_208;
        local_164 = puVar14;
        local_160 = unaff_r5;
        local_15c = unaff_r9;
        if (puStack_1f8 != (uint *)&SUB_00000004) {
          iVar3 = FUN_00efe384(&local_150);
          iVar3 = iVar3 + 2;
        }
        puVar2 = local_168;
        if (((uint)local_168 & 1) != 0) {
          if (local_160 == (uint *)0x0 && local_15c == (uint *)0x0) {
            iVar6 = 2;
          }
          else {
            uVar7 = LZCOUNT((uint)local_160 | 1) | 0x20;
            if (local_15c != (uint *)0x0) {
              uVar7 = LZCOUNT(local_15c);
            }
            iVar6 = ((uVar7 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
          }
          if (local_158 == (uint *)0x0) {
            iVar8 = 0;
          }
          else {
            uVar7 = LZCOUNT((uint)local_158 | 1) | 0x20;
            if ((int)local_158 < 0) {
              uVar7 = LZCOUNT((int)local_158 >> 0x1f);
            }
            iVar8 = ((uVar7 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
          }
          unaff_r7 = (uint *)(iVar8 + iVar6);
        }
        puVar16 = (uint *)(iVar3 + uVar12 * 2 + (int)unaff_r7);
        if ((uint *)(0x7ffffffa - uVar10) < puVar16) {
          local_d4 = puVar16;
          local_d0 = (uint *)(0x7ffffffa - uVar10);
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_d4,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if (uVar12 != 0) {
          FUN_00efe13c(1,1,puVar9);
        }
        if (puVar1 != (uint *)&SUB_00000004) {
          FUN_00efe550(&local_150,puVar9);
        }
        if (((uint)puVar2 & 1) != 0) {
          FUN_00efc900(3,&local_160,local_160,local_15c,local_158,puVar9);
        }
        uVar10 = param_2[0x39];
        if (uVar10 < uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar17,uVar10,uVar10,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,uVar19,local_20c,*puVar9 + uVar17,uVar10 - uVar17);
        unaff_r9 = local_7c;
        unaff_r5 = local_80;
        puVar14 = local_84;
        ppuVar13 = local_88;
        puVar18 = local_8c;
        puVar16 = local_90;
        if (local_90 != (uint *)&DAT_00000003 || local_8c != (uint *)0x0) {
          FUN_01bed4e2(&local_1b8,&local_78,0x50);
          goto LAB_00d88078;
        }
        if (uVar5 <= param_2[0x39]) {
          FUN_01283fd8(&local_d4,puVar9);
          if (((uint)local_c8 & 1) == 0) goto LAB_00d87adc;
          local_bc = (undefined1 *)((int)local_d0 + ((uint)local_c8 >> 5));
          local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
          local_c4 = local_cc + ((uint)local_c8 >> 5);
          FUN_01283524(&local_168,&local_c4);
          local_b8 = (uint)local_c8 >> 5;
          if (local_160 < (uint *)((uint)local_c8 >> 5)) {
            local_88 = &local_b4;
            local_b4 = local_160;
            local_84 = (uint *)&LAB_01a6a304;
            local_8c = (uint *)&LAB_01a6a304;
            local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          local_d0 = (uint *)((int)local_160 - local_b8);
          local_d4 = (uint *)((int)local_164 + local_b8);
          ppuVar13 = (uint **)local_168;
          local_c8 = local_15c;
          goto LAB_00d87e38;
        }
        puVar16 = (uint *)*puVar11;
        puVar18 = (uint *)param_2[0x1b];
        unaff_r5 = puVar1;
        unaff_r9 = puVar2;
      } while (puVar16 != (uint *)&DAT_00000005 || puVar18 != (uint *)0x0);
    }
    if (param_2[0x39] == 0) {
      puVar18 = (uint *)0x0;
      puVar16 = (uint *)&SUB_00000004;
      puVar14 = puVar9;
      ppuVar13 = (uint **)unaff_r7;
    }
    else {
LAB_00d87abc:
      FUN_01283fd8(&local_d4,puVar9);
      if (((uint)local_c8 & 1) == 0) {
LAB_00d87adc:
        ppuVar13 = (uint **)&DAT_01d2e520;
      }
      else {
        local_bc = (undefined1 *)((int)local_d0 + ((uint)local_c8 >> 5));
        local_c0 = (int)local_d4 - ((uint)local_c8 >> 5);
        local_c4 = local_cc + ((uint)local_c8 >> 5);
        FUN_01283524(&local_168,&local_c4);
        local_b8 = (uint)local_c8 >> 5;
        if (local_160 < (uint *)((uint)local_c8 >> 5)) {
          local_88 = &local_b4;
          local_b4 = local_160;
          local_84 = (uint *)&LAB_01a6a304;
          local_8c = (uint *)&LAB_01a6a304;
          local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
        local_d0 = (uint *)((int)local_160 - local_b8);
        local_d4 = (uint *)((int)local_164 + local_b8);
        ppuVar13 = (uint **)local_168;
        local_c8 = local_15c;
      }
LAB_00d87e38:
      puVar18 = (uint *)0x0;
      puVar16 = (uint *)&DAT_00000003;
      puVar14 = local_d4;
      unaff_r5 = local_d0;
      unaff_r9 = local_c8;
    }
LAB_00d88078:
    if (puVar16 == (uint *)&SUB_00000004 && puVar18 == (uint *)0x0) {
      FUN_01a737fc(&local_90,param_2 + 0x42);
      if (local_90 == (uint *)&SUB_00000004 && local_8c == (uint *)0x0) {
        ppuVar15 = (uint **)unaff_r9;
        unaff_r5 = extraout_r12;
        puVar11 = (uint *)0xd880bc;
      }
      else {
        if (local_90 != (uint *)&DAT_00000003 || local_8c != (uint *)0x0) {
          local_b0 = local_48;
          uStack_ac = uStack_44;
          uStack_a8 = uStack_40;
          uStack_a4 = uStack_3c;
          local_a0 = local_38;
          uStack_9c = uStack_34;
          uStack_98 = uStack_30;
          uStack_94 = uStack_2c;
        }
        local_208 = local_7c;
        local_204 = local_84;
        local_20c = local_74;
        local_168 = local_70;
        local_164 = puStack_6c;
        local_160 = puStack_68;
        local_15c = puStack_64;
        local_158 = puStack_60;
        local_154 = local_5c;
        local_150 = puStack_58;
        local_14c = puStack_54;
        puStack_148 = puStack_50;
        local_144 = puStack_4c;
        ppuVar15 = local_88;
        unaff_r5 = local_80;
        puVar11 = local_78;
      }
      local_200 = local_168;
      puStack_1fc = local_164;
      puStack_1f8 = local_160;
      puStack_1f4 = local_15c;
      puStack_1f0 = local_158;
      local_1ec = local_154;
      puStack_1e8 = local_150;
      puStack_1e4 = local_14c;
      puStack_1e0 = puStack_148;
      puStack_1dc = local_144;
      local_1d8 = local_b0;
      uStack_1d4 = uStack_ac;
      uStack_1d0 = uStack_a8;
      uStack_1cc = uStack_a4;
      local_1c8 = local_a0;
      uStack_1c4 = uStack_9c;
      uStack_1c0 = uStack_98;
      uStack_1bc = uStack_94;
      puVar16 = local_90;
      puVar18 = local_8c;
LAB_00d882d0:
      if (puVar16 != (uint *)&DAT_00000003 || puVar18 != (uint *)0x0) {
        if (puVar16 != (uint *)&SUB_00000004 || puVar18 != (uint *)0x0) {
          if (puVar16 != (uint *)&DAT_00000005 || puVar18 != (uint *)0x0) {
            FUN_01bed4e2(&local_70,&local_200,0x48);
            local_84 = local_204;
            local_74 = local_20c;
            local_7c = local_208;
            local_90 = puVar16;
            local_8c = puVar18;
            local_88 = ppuVar15;
            local_80 = unaff_r5;
            local_78 = puVar11;
            uVar4 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar4,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d882f8;
        }
        uVar4 = 4;
        goto LAB_00d8830c;
      }
    }
    else {
      if (puVar16 != (uint *)&DAT_00000003 || puVar18 != (uint *)0x0) {
        local_168 = puVar16;
        local_164 = puVar18;
        local_160 = (uint *)ppuVar13;
        local_15c = puVar14;
        local_158 = unaff_r5;
        local_154 = unaff_r9;
        FUN_01bed4e2(&local_150,&local_1b8,0x50);
        puVar11 = local_150;
        ppuVar15 = (uint **)local_160;
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_168);
          local_204 = local_84;
          local_20c = local_74;
          local_208 = local_7c;
          local_100 = local_70;
          puStack_fc = puStack_6c;
          puStack_f8 = puStack_68;
          puStack_f4 = puStack_64;
          puStack_f0 = puStack_60;
          local_ec = local_5c;
          puStack_e8 = puStack_58;
          puStack_e4 = puStack_54;
          puStack_e0 = puStack_50;
          puStack_dc = puStack_4c;
          if (local_90 == (uint *)&DAT_00000003 && local_8c == (uint *)0x0) {
            local_200 = local_70;
            puStack_1fc = puStack_6c;
            puStack_1f8 = puStack_68;
            puStack_1f4 = puStack_64;
            puStack_1f0 = puStack_60;
            local_1ec = local_5c;
            puStack_1e8 = puStack_58;
            puStack_1e4 = puStack_54;
            puStack_1e0 = puStack_50;
            puStack_1dc = puStack_4c;
            FUN_005f6588(&local_168);
            local_8c = (uint *)0x0;
            local_90 = (uint *)&DAT_00000003;
          }
          else {
            local_1d8 = local_48;
            uStack_1d4 = uStack_44;
            uStack_1d0 = uStack_40;
            uStack_1cc = uStack_3c;
            local_1c8 = local_38;
            uStack_1c4 = uStack_34;
            uStack_1c0 = uStack_30;
            uStack_1bc = uStack_2c;
            local_200 = local_70;
            puStack_1fc = puStack_6c;
            puStack_1f8 = puStack_68;
            puStack_1f4 = puStack_64;
            puStack_1f0 = puStack_60;
            local_1ec = local_5c;
            puStack_1e8 = puStack_58;
            puStack_1e4 = puStack_54;
            puStack_1e0 = puStack_50;
            puStack_1dc = puStack_4c;
            FUN_005f6588(&local_168);
          }
          unaff_r5 = local_80;
          puVar11 = local_78;
          ppuVar15 = local_88;
          puVar16 = local_90;
          puVar18 = local_8c;
        }
        else {
          local_20c = local_14c;
          local_204 = local_15c;
          FUN_01bed4e2(&local_200,&uStack_1b0,0x48);
          local_208 = unaff_r9;
        }
        goto LAB_00d882d0;
      }
      local_204 = (uint *)0x0;
      ppuVar15 = (uint **)&DAT_00000003;
      puVar11 = unaff_r5;
      local_208 = puVar14;
      local_20c = unaff_r9;
      unaff_r5 = (uint *)ppuVar13;
    }
    param_1[8] = local_200;
    param_1[9] = puStack_1fc;
    param_1[10] = puStack_1f8;
    param_1[0xb] = puStack_1f4;
    param_1[0xc] = puStack_1f0;
    param_1[0xd] = local_1ec;
    param_1[0xe] = puStack_1e8;
    param_1[0xf] = puStack_1e4;
    param_1[0x10] = puStack_1e0;
    param_1[0x11] = puStack_1dc;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = ppuVar15;
    param_1[3] = local_204;
    param_1[4] = unaff_r5;
    param_1[5] = local_208;
    param_1[6] = puVar11;
    param_1[7] = local_20c;
  }
  else {
    puVar14 = (uint *)param_2[3];
    unaff_r5 = (uint *)param_2[4];
    unaff_r9 = (uint *)param_2[5];
    ppuVar13 = (uint **)param_2[2];
    FUN_01bed4e2(&local_1b8,param_2 + 6,0x50);
    if (puVar16 != (uint *)&DAT_00000005 || puVar18 != (uint *)0x0) goto LAB_00d88078;
LAB_00d882f8:
    uVar4 = 5;
LAB_00d8830c:
    *param_1 = uVar4;
    param_1[1] = 0;
  }
  return;
}

