// FUN_00d51ac0 @ 00d51ac0 size=2868 calls_out=15 calls_in=0
// strings: 

void FUN_00d51ac0(undefined4 *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *extraout_r1;
  byte bVar7;
  uint *puVar8;
  uint **ppuVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *local_204;
  uint *local_200;
  uint *local_1fc;
  uint *local_1f8;
  uint local_1f4;
  uint *local_1f0;
  uint *local_1ec;
  uint *local_1e8;
  uint *local_1e4;
  uint *local_1e0;
  uint *local_1dc;
  uint *local_1d8;
  uint *local_1d4;
  uint *puStack_1d0;
  uint *puStack_1cc;
  uint local_1c8;
  uint uStack_1c4;
  uint *local_1c0;
  uint *puStack_1bc;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint *local_1a8;
  uint *puStack_1a4;
  uint *puStack_1a0;
  uint *puStack_19c;
  uint *puStack_198;
  uint *local_194;
  uint *puStack_190;
  uint *puStack_18c;
  uint uStack_188;
  uint uStack_184;
  uint *local_180;
  uint *puStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  undefined4 local_168;
  undefined3 uStack_164;
  uint *local_160;
  uint *local_15c;
  uint *local_158;
  uint *local_154;
  uint *local_150;
  uint *local_14c;
  uint *local_148;
  uint *local_144;
  uint local_140;
  uint uStack_13c;
  uint *local_138;
  uint *puStack_134;
  uint *puStack_130;
  uint *puStack_12c;
  uint *puStack_128;
  uint *local_124;
  uint *puStack_120;
  uint *puStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint *local_110;
  uint *puStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint *local_f8;
  uint *local_f4;
  uint *local_f0;
  uint *local_ec;
  uint *local_e8;
  uint *puStack_e4;
  uint *puStack_e0;
  uint *puStack_dc;
  undefined4 local_d4;
  undefined3 uStack_d0;
  undefined4 uStack_cc;
  undefined3 uStack_c8;
  undefined1 *local_c4;
  int local_c0;
  undefined1 *local_bc;
  uint local_b8;
  uint *local_b4;
  uint local_b0;
  uint uStack_ac;
  uint *puStack_a8;
  uint *puStack_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint *local_90;
  uint *local_8c;
  uint **local_88;
  uint *local_84;
  uint *local_80;
  uint *local_7c;
  uint *local_78;
  uint *local_74;
  byte local_70;
  undefined1 *local_6f;
  undefined3 uStack_6b;
  uint *local_68;
  uint *puStack_64;
  uint *puStack_60;
  uint *puStack_5c;
  uint *local_58;
  uint *local_54;
  uint *puStack_50;
  uint *puStack_4c;
  uint local_48;
  uint uStack_44;
  uint *local_40;
  uint *puStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  puVar10 = (uint *)*param_2;
  puVar12 = (uint *)param_2[1];
  uVar3 = param_2[0x41];
  *param_2 = 3;
  param_2[1] = 0;
  if (puVar10 == (uint *)&DAT_00000003 && puVar12 == (uint *)0x0) {
    ppuVar9 = (uint **)(param_2 + 0x1a);
    puVar8 = param_2 + 0x38;
    puVar10 = *ppuVar9;
    puVar12 = (uint *)param_2[0x1b];
    bVar7 = (byte)local_1f4;
    if (puVar10 != (uint *)&DAT_00000005 || puVar12 != (uint *)0x0) {
      do {
        if (0x1f < param_2[0x34]) {
          iVar4 = *(int *)*param_3;
          iVar6 = ((int *)*param_3)[1];
          param_2[0x34] = 0;
          (**(code **)(iVar4 + 8))(iVar6);
          bVar7 = (byte)local_1f4;
LAB_00d522cc:
          local_1f4._0_1_ = bVar7;
          if (param_2[0x39] != 0) goto LAB_00d51b20;
          goto LAB_00d5218c;
        }
        local_1fc = (uint *)param_2[0x1c];
        local_200 = (uint *)param_2[0x1d];
        local_1f0 = (uint *)param_2[0x1e];
        local_1ec = (uint *)param_2[0x1f];
        *ppuVar9 = (uint *)0x4;
        param_2[0x1b] = 0;
        bVar7 = (byte)param_2[0x22];
        local_1f4 = (uint)bVar7;
        local_204 = (uint *)param_2[0x21];
        param_2[0x34] = param_2[0x34] + 1;
        if (((uint)puVar10 & 7) == 4) {
          *ppuVar9 = (uint *)0x5;
          param_2[0x1b] = 0;
          break;
        }
        if (puVar10 == (uint *)&DAT_00000005) goto LAB_00d522cc;
        local_1f8 = (uint *)param_2[0x20];
        uStack_cc = *(undefined4 *)((int)param_2 + 0x89);
        uStack_c8 = (undefined3)(param_2[0x23] >> 8);
        local_160 = (uint *)param_2[0x24];
        local_15c = (uint *)param_2[0x25];
        local_158 = (uint *)param_2[0x26];
        local_154 = (uint *)param_2[0x27];
        local_150 = (uint *)param_2[0x28];
        local_14c = (uint *)param_2[0x29];
        local_148 = (uint *)param_2[0x2a];
        local_144 = (uint *)param_2[0x2b];
        local_140 = param_2[0x2c];
        uStack_13c = param_2[0x2d];
        local_138 = (uint *)param_2[0x2e];
        puStack_134 = (uint *)param_2[0x2f];
        puStack_130 = (uint *)param_2[0x30];
        puStack_12c = (uint *)param_2[0x31];
        puStack_128 = (uint *)param_2[0x32];
        local_124 = (uint *)param_2[0x33];
        local_1f4._0_1_ = bVar7;
        if (puVar10 != (uint *)&DAT_00000003 || puVar12 != (uint *)0x0) {
          uVar3 = param_2[0x39];
          if (uVar3 == 0) {
            local_168 = *(undefined1 **)((int)param_2 + 0x89);
            uStack_164 = (undefined3)(param_2[0x23] >> 8);
            local_1a8 = (uint *)param_2[0x24];
            puStack_1a4 = (uint *)param_2[0x25];
            puStack_1a0 = (uint *)param_2[0x26];
            puStack_19c = (uint *)param_2[0x27];
            puStack_198 = (uint *)param_2[0x28];
            local_194 = (uint *)param_2[0x29];
            puStack_190 = (uint *)param_2[0x2a];
            puStack_18c = (uint *)param_2[0x2b];
            uStack_188 = param_2[0x2c];
            uStack_184 = param_2[0x2d];
            puVar8 = (uint *)param_2[0x2f];
            uStack_178 = param_2[0x30];
            uStack_174 = param_2[0x31];
            uStack_170 = param_2[0x32];
            uStack_16c = param_2[0x33];
            ppuVar9 = (uint **)local_1fc;
            local_180 = (uint *)param_2[0x2e];
            puStack_17c = puVar8;
            goto LAB_00d51e94;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            uVar3 = param_2[0x39];
          }
          *(undefined4 *)((int)param_2 + 0x21) = uStack_cc;
          param_2[3] = (uint)local_200;
          param_2[4] = (uint)local_1f0;
          param_2[5] = (uint)local_1ec;
          param_2[6] = (uint)local_1f8;
          param_2[7] = (uint)local_204;
          *(byte *)(param_2 + 8) = bVar7;
          param_2[9] = CONCAT31(uStack_c8,uStack_cc._3_1_);
          *param_2 = (uint)puVar10;
          param_2[1] = (uint)puVar12;
          param_2[2] = (uint)local_1fc;
          param_2[10] = (uint)local_160;
          param_2[0xb] = (uint)local_15c;
          param_2[0xc] = (uint)local_158;
          param_2[0xd] = (uint)local_154;
          param_2[0xe] = (uint)local_150;
          param_2[0xf] = (uint)local_14c;
          param_2[0x10] = (uint)local_148;
          param_2[0x11] = (uint)local_144;
          param_2[0x12] = local_140;
          param_2[0x13] = uStack_13c;
          param_2[0x14] = (uint)local_138;
          param_2[0x15] = (uint)puStack_134;
          param_2[0x16] = (uint)puStack_130;
          param_2[0x17] = (uint)puStack_12c;
          param_2[0x18] = (uint)puStack_128;
          param_2[0x19] = (uint)local_124;
          FUN_01283fd8(&local_f8,puVar8,uVar3);
          puVar10 = local_ec;
          if (((uint)local_ec & 1) == 0) goto LAB_00d51b40;
          local_bc = (undefined1 *)((int)local_f4 + ((uint)local_ec >> 5));
          local_c0 = (int)local_f8 - ((uint)local_ec >> 5);
          local_c4 = (undefined1 *)((int)local_f0 + ((uint)local_ec >> 5));
          FUN_01283524(&local_1e8,&local_c4);
          local_b8 = (uint)puVar10 >> 5;
          if (local_1e0 < (uint *)((uint)puVar10 >> 5)) {
            local_88 = &local_b4;
            local_b4 = local_1e0;
            local_84 = (uint *)&LAB_01a6a304;
            local_8c = (uint *)&LAB_01a6a304;
            local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d51e60;
        }
        uVar11 = param_2[0x39];
        local_204 = (uint *)param_2[0x36];
        local_200 = (uint *)param_2[0x37];
        uVar1 = uVar11;
        if (param_2[0x3a] - uVar11 < 5) {
          FUN_01283c9c(puVar8,5);
          uVar1 = param_2[0x39];
          if (param_2[0x3a] - uVar1 < 5) {
            local_1e8 = (uint *)0x5;
            local_1e4 = (uint *)(param_2[0x3a] - uVar1);
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_1e8);
          }
        }
        param_2[0x39] = uVar1 + 5;
        iVar4 = 0;
        if (((uint)local_1fc & 1) != 0) {
          if (local_1f0 == (uint *)0x0 && local_1ec == (uint *)0x0) {
            iVar6 = 2;
          }
          else {
            uVar5 = LZCOUNT((uint)local_1f0 | 1) | 0x20;
            if (local_1ec != (uint *)0x0) {
              uVar5 = LZCOUNT(local_1ec);
            }
            iVar6 = ((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 3;
          }
          if (local_1f8 == (uint *)0x0) {
            iVar4 = 0;
          }
          else {
            uVar5 = LZCOUNT((uint)local_1f8 | 1) | 0x20;
            if ((int)local_1f8 < 0) {
              uVar5 = LZCOUNT((int)local_1f8 >> 0x1f);
            }
            iVar4 = ((uVar5 ^ 0x3f) * 9 + 0x49 >> 6) + 1;
          }
          iVar4 = iVar4 + iVar6;
        }
        puVar10 = (uint *)(iVar4 + (local_1f4 & 0x7f) * 2);
        if ((uint *)(0x7ffffffa - uVar1) < puVar10) {
          local_1e8 = puVar10;
          local_1e4 = (uint *)(0x7ffffffa - uVar1);
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_1e8,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        if ((bVar7 & 1) != 0) {
          FUN_00efe13c(1,1,puVar8);
          puVar10 = extraout_r1;
        }
        if (((uint)local_1fc & 1) != 0) {
          FUN_00efc900(2,puVar10,local_1f0,local_1ec,local_1f8,puVar8);
        }
        uVar1 = param_2[0x39];
        if (uVar1 < uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar11,uVar1,uVar1,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,local_204,local_200,*puVar8 + uVar11,uVar1 - uVar11);
        if (local_90 != (uint *)&DAT_00000003 || local_8c != (uint *)0x0) {
          local_200 = local_84;
          local_1f0 = local_80;
          local_1ec = local_7c;
          local_204 = local_74;
          local_168 = local_6f;
          uStack_164 = uStack_6b;
          local_1f8 = local_78;
          local_1a8 = local_68;
          puStack_1a4 = puStack_64;
          puStack_1a0 = puStack_60;
          puStack_19c = puStack_5c;
          puStack_198 = local_58;
          local_194 = local_54;
          puStack_190 = puStack_50;
          puStack_18c = puStack_4c;
          uStack_188 = local_48;
          uStack_184 = uStack_44;
          local_180 = local_40;
          puStack_17c = puStack_3c;
          uStack_178 = local_38;
          uStack_174 = uStack_34;
          uStack_170 = uStack_30;
          uStack_16c = uStack_2c;
          puVar8 = local_40;
          ppuVar9 = local_88;
          puVar10 = local_90;
          puVar12 = local_8c;
          local_1f4._0_1_ = local_70;
          goto LAB_00d51e94;
        }
        if (uVar3 <= param_2[0x39]) {
          FUN_01283fd8(&local_f8,puVar8);
          puVar10 = local_ec;
          if (((uint)local_ec & 1) == 0) goto LAB_00d51b40;
          local_bc = (undefined1 *)((int)local_f4 + ((uint)local_ec >> 5));
          local_c0 = (int)local_f8 - ((uint)local_ec >> 5);
          local_c4 = (undefined1 *)((int)local_f0 + ((uint)local_ec >> 5));
          FUN_01283524(&local_1e8,&local_c4);
          local_b8 = (uint)puVar10 >> 5;
          if (local_1e0 < (uint *)((uint)puVar10 >> 5)) {
            local_88 = &local_b4;
            local_b4 = local_1e0;
            local_84 = (uint *)&LAB_01a6a304;
            local_8c = (uint *)&LAB_01a6a304;
            local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d51e60;
        }
        puVar10 = *ppuVar9;
        puVar12 = (uint *)param_2[0x1b];
      } while (puVar10 != (uint *)&DAT_00000005 || puVar12 != (uint *)0x0);
    }
    local_1f4._0_1_ = bVar7;
    if (param_2[0x39] == 0) {
      puVar8 = (uint *)0x0;
      puVar10 = (uint *)&SUB_00000004;
      puVar12 = (uint *)0x0;
    }
    else {
LAB_00d51b20:
      FUN_01283fd8(&local_f8,puVar8);
      puVar10 = local_ec;
      if (((uint)local_ec & 1) == 0) {
LAB_00d51b40:
        puVar8 = local_f8;
        ppuVar9 = (uint **)&DAT_01d2e520;
        local_200 = local_f8;
        local_1f0 = local_f4;
        local_1ec = local_ec;
      }
      else {
        local_bc = (undefined1 *)((int)local_f4 + ((uint)local_ec >> 5));
        local_c0 = (int)local_f8 - ((uint)local_ec >> 5);
        local_c4 = (undefined1 *)((int)local_f0 + ((uint)local_ec >> 5));
        FUN_01283524(&local_1e8,&local_c4);
        local_b8 = (uint)puVar10 >> 5;
        if (local_1e0 < (uint *)((uint)puVar10 >> 5)) {
          local_88 = &local_b4;
          local_b4 = local_1e0;
          local_84 = (uint *)&LAB_01a6a304;
          local_8c = (uint *)&LAB_01a6a304;
          local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d51e60:
        local_1ec = local_1dc;
        puVar8 = (uint *)((int)local_1e0 - local_b8);
        local_200 = (uint *)((int)local_1e4 + local_b8);
        ppuVar9 = (uint **)local_1e8;
        local_1f0 = puVar8;
      }
      puVar10 = (uint *)&DAT_00000003;
      puVar12 = (uint *)0x0;
    }
LAB_00d51e94:
    bVar7 = (byte)puVar8;
    if (puVar10 == (uint *)&SUB_00000004 && puVar12 == (uint *)0x0) {
      FUN_01a737fc(&local_90,param_2 + 0x42);
      puVar10 = param_2;
      if (local_90 != (uint *)&SUB_00000004 || local_8c != (uint *)0x0) {
        if (local_90 != (uint *)&DAT_00000003 || local_8c != (uint *)0x0) {
          local_b0 = local_48;
          uStack_ac = uStack_44;
          puStack_a8 = local_40;
          puStack_a4 = puStack_3c;
          local_a0 = local_38;
          uStack_9c = uStack_34;
          uStack_98 = uStack_30;
          uStack_94 = uStack_2c;
        }
        local_1f0 = local_80;
        local_1ec = local_7c;
        local_1f8 = local_78;
        local_1fc = (uint *)local_88;
        local_1f4._0_1_ = local_70;
        local_204 = local_74;
        local_d4 = local_6f;
        uStack_d0 = uStack_6b;
        local_160 = local_68;
        local_15c = puStack_64;
        local_158 = puStack_60;
        local_154 = puStack_5c;
        local_150 = local_58;
        local_14c = local_54;
        local_148 = puStack_50;
        local_144 = puStack_4c;
        puVar10 = local_84;
      }
      local_84 = puVar10;
      local_1e8 = local_160;
      local_1e4 = local_15c;
      local_1e0 = local_158;
      local_1dc = local_154;
      local_1d8 = local_150;
      local_1d4 = local_14c;
      puStack_1d0 = local_148;
      puStack_1cc = local_144;
      local_1c8 = local_b0;
      uStack_1c4 = uStack_ac;
      local_1c0 = puStack_a8;
      puStack_1bc = puStack_a4;
      local_1b8 = local_a0;
      uStack_1b4 = uStack_9c;
      uStack_1b0 = uStack_98;
      uStack_1ac = uStack_94;
LAB_00d52168:
      bVar7 = (byte)local_1f4;
      if (local_90 != (uint *)&DAT_00000003 || local_8c != (uint *)0x0) {
        if (local_90 != (uint *)&SUB_00000004 || local_8c != (uint *)0x0) {
          if (local_90 != (uint *)&DAT_00000005 || local_8c != (uint *)0x0) {
            local_6f = local_d4;
            uStack_6b = uStack_d0;
            local_68 = local_1e8;
            puStack_64 = local_1e4;
            puStack_60 = local_1e0;
            puStack_5c = local_1dc;
            local_58 = local_1d8;
            local_54 = local_1d4;
            puStack_50 = puStack_1d0;
            puStack_4c = puStack_1cc;
            local_48 = local_1c8;
            uStack_44 = uStack_1c4;
            local_40 = local_1c0;
            puStack_3c = puStack_1bc;
            local_38 = local_1b8;
            uStack_34 = uStack_1b4;
            uStack_30 = uStack_1b0;
            uStack_2c = uStack_1ac;
            local_88 = (uint **)local_1fc;
            local_74 = local_204;
            local_78 = local_1f8;
            local_7c = local_1ec;
            local_80 = local_1f0;
            local_70 = (byte)local_1f4;
            uVar2 = FUN_01a65494();
            FUN_01a7467c(param_1,uVar2,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d5218c;
        }
        uVar2 = 4;
        goto LAB_00d521a0;
      }
      local_200 = local_1ec;
      ppuVar9 = (uint **)local_1f0;
      local_1ec = local_204;
      local_1f0 = local_1f8;
    }
    else {
      if (puVar10 != (uint *)&DAT_00000003 || puVar12 != (uint *)0x0) {
        local_144 = local_204;
        local_148 = local_1f8;
        local_14c = local_1ec;
        local_150 = local_1f0;
        uStack_13c = CONCAT31(uStack_164,local_168._3_1_);
        local_154 = local_200;
        local_140._1_3_ = SUB43(local_168,0);
        local_140 = CONCAT31(local_140._1_3_,(byte)local_1f4);
        local_138 = local_1a8;
        puStack_134 = puStack_1a4;
        puStack_130 = puStack_1a0;
        puStack_12c = puStack_19c;
        puStack_128 = puStack_198;
        local_124 = local_194;
        puStack_120 = puStack_190;
        puStack_11c = puStack_18c;
        uStack_118 = uStack_188;
        uStack_114 = uStack_184;
        local_110 = local_180;
        puStack_10c = puStack_17c;
        uStack_108 = uStack_178;
        uStack_104 = uStack_174;
        uStack_100 = uStack_170;
        uStack_fc = uStack_16c;
        local_160 = puVar10;
        local_15c = puVar12;
        local_158 = (uint *)ppuVar9;
        if ((char)param_2[0x5c] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x171) = 1;
          FUN_01a738c0(&local_90,&local_160);
          local_1fc = (uint *)local_88;
          local_1f4._0_1_ = local_70;
          local_204 = local_74;
          local_c4 = local_6f;
          local_c0 = CONCAT13(local_c0._3_1_,uStack_6b);
          local_1ec = local_7c;
          local_1f0 = local_80;
          local_1f8 = local_78;
          local_f8 = local_68;
          local_f4 = puStack_64;
          local_f0 = puStack_60;
          local_ec = puStack_5c;
          local_e8 = local_58;
          puStack_e4 = local_54;
          puStack_e0 = puStack_50;
          puStack_dc = puStack_4c;
          if (local_90 == (uint *)&DAT_00000003 && local_8c == (uint *)0x0) {
            local_d4 = local_6f;
            uStack_d0 = uStack_6b;
            local_1e8 = local_68;
            local_1e4 = puStack_64;
            local_1e0 = puStack_60;
            local_1dc = puStack_5c;
            local_1d8 = local_58;
            local_1d4 = local_54;
            puStack_1d0 = puStack_50;
            puStack_1cc = puStack_4c;
            FUN_005f6588(&local_160);
            local_90 = (uint *)&DAT_00000003;
            local_8c = (uint *)0x0;
          }
          else {
            local_1c8 = local_48;
            uStack_1c4 = uStack_44;
            local_1c0 = local_40;
            puStack_1bc = puStack_3c;
            local_1b8 = local_38;
            uStack_1b4 = uStack_34;
            uStack_1b0 = uStack_30;
            uStack_1ac = uStack_2c;
            local_d4 = local_6f;
            uStack_d0 = uStack_6b;
            local_1e8 = local_68;
            local_1e4 = puStack_64;
            local_1e0 = puStack_60;
            local_1dc = puStack_5c;
            local_1d8 = local_58;
            local_1d4 = local_54;
            puStack_1d0 = puStack_50;
            puStack_1cc = puStack_4c;
            FUN_005f6588(&local_160);
          }
        }
        else {
          local_d4 = local_168;
          uStack_d0 = uStack_164;
          local_1e8 = local_1a8;
          local_1e4 = puStack_1a4;
          local_1e0 = puStack_1a0;
          local_1dc = puStack_19c;
          local_1d8 = puStack_198;
          local_1d4 = local_194;
          puStack_1d0 = puStack_190;
          puStack_1cc = puStack_18c;
          local_1c8 = uStack_188;
          uStack_1c4 = uStack_184;
          local_1c0 = local_180;
          puStack_1bc = puStack_17c;
          local_1b8 = uStack_178;
          uStack_1b4 = uStack_174;
          uStack_1b0 = uStack_170;
          uStack_1ac = uStack_16c;
          local_84 = local_200;
          local_90 = puVar10;
          local_8c = puVar12;
          local_1fc = (uint *)ppuVar9;
        }
        goto LAB_00d52168;
      }
      local_84 = (uint *)0x0;
      local_1fc = (uint *)&DAT_00000003;
    }
    *(undefined1 **)((int)param_1 + 0x21) = local_d4;
    param_1[9] = CONCAT31(uStack_d0,local_d4._3_1_);
    *(byte *)(param_1 + 8) = bVar7;
    param_1[10] = local_1e8;
    param_1[0xb] = local_1e4;
    param_1[0xc] = local_1e0;
    param_1[0xd] = local_1dc;
    param_1[0xe] = local_1d8;
    param_1[0xf] = local_1d4;
    param_1[0x10] = puStack_1d0;
    param_1[0x11] = puStack_1cc;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_1fc;
    param_1[3] = local_84;
    param_1[4] = ppuVar9;
    param_1[5] = local_200;
    param_1[6] = local_1f0;
    param_1[7] = local_1ec;
  }
  else {
    local_200 = (uint *)param_2[3];
    local_1f0 = (uint *)param_2[4];
    local_1ec = (uint *)param_2[5];
    local_1f8 = (uint *)param_2[6];
    local_204 = (uint *)param_2[7];
    local_1f4._0_1_ = (byte)param_2[8];
    local_168._0_3_ = (undefined3)*(undefined4 *)((int)param_2 + 0x21);
    local_168._3_1_ = (undefined1)param_2[9];
    uStack_164 = (undefined3)(param_2[9] >> 8);
    ppuVar9 = (uint **)param_2[2];
    local_1a8 = (uint *)param_2[10];
    puStack_1a4 = (uint *)param_2[0xb];
    puStack_1a0 = (uint *)param_2[0xc];
    puStack_19c = (uint *)param_2[0xd];
    puStack_198 = (uint *)param_2[0xe];
    local_194 = (uint *)param_2[0xf];
    puStack_190 = (uint *)param_2[0x10];
    puStack_18c = (uint *)param_2[0x11];
    uStack_188 = param_2[0x12];
    uStack_184 = param_2[0x13];
    puVar8 = (uint *)param_2[0x14];
    puStack_17c = (uint *)param_2[0x15];
    uStack_178 = param_2[0x16];
    uStack_174 = param_2[0x17];
    uStack_170 = param_2[0x18];
    uStack_16c = param_2[0x19];
    local_180 = puVar8;
    if (puVar10 != (uint *)&DAT_00000005 || puVar12 != (uint *)0x0) goto LAB_00d51e94;
LAB_00d5218c:
    uVar2 = 5;
LAB_00d521a0:
    *param_1 = uVar2;
    param_1[1] = 0;
  }
  return;
}

