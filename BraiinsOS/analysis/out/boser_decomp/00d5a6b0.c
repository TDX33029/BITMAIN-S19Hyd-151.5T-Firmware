// FUN_00d5a6b0 @ 00d5a6b0 size=2196 calls_out=13 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d5a6b0(undefined4 *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint **ppuVar4;
  int iVar5;
  uint *unaff_r4;
  uint *puVar6;
  uint *unaff_r7;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *unaff_r11;
  uint *puVar12;
  uint *puVar13;
  uint *local_208;
  uint *local_204;
  uint *local_200;
  uint *local_1fc;
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [72];
  uint *local_1a8;
  uint *local_1a4;
  uint *local_1a0;
  uint *local_19c;
  uint *puStack_198;
  uint *local_194;
  uint *puStack_190;
  uint *puStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  uint *local_180;
  uint *puStack_17c;
  uint *puStack_178;
  uint *puStack_174;
  uint *puStack_170;
  uint *local_16c;
  uint *puStack_168;
  uint *puStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint *local_130;
  uint *local_12c;
  uint *local_128;
  uint *local_124;
  uint *local_120;
  uint *local_11c;
  uint *local_118;
  uint *local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 *local_c4;
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
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar3 = param_2 + 0x1e;
  puVar11 = (uint *)*puVar3;
  puVar6 = (uint *)param_2[0x1f];
  *puVar3 = 3;
  local_208 = (uint *)param_2[0x43];
  param_2[0x1f] = 0;
  if (puVar11 == (uint *)&DAT_00000003 && puVar6 == (uint *)0x0) {
    local_1fc = param_2 + 0x3a;
    uVar8 = *param_2;
    puVar10 = (uint *)param_2[1];
    if (uVar8 != 3 || puVar10 != (uint *)0x0) {
      do {
        if (0x1f < param_2[0x1c]) {
          iVar1 = *(int *)*param_3;
          iVar5 = ((int *)*param_3)[1];
          param_2[0x1c] = 0;
          (**(code **)(iVar1 + 8))(iVar5);
LAB_00d5ad68:
          if (param_2[0x3b] != 0) goto LAB_00d5a71c;
          goto LAB_00d5a778;
        }
        unaff_r7 = (uint *)param_2[4];
        puVar10 = (uint *)param_2[5];
        puVar11 = (uint *)param_2[2];
        puVar6 = (uint *)param_2[3];
        unaff_r4 = (uint *)param_2[6];
        unaff_r11 = (uint *)param_2[7];
        param_2[0x1c] = param_2[0x1c] + 1;
        *param_2 = 2;
        param_2[1] = 0;
        if ((uVar8 & 3) == 2) {
          *param_2 = 3;
          param_2[1] = 0;
          break;
        }
        if ((uVar8 & 3) == 3) goto LAB_00d5ad68;
        FUN_01bed4e2(&local_180,param_2 + 8,0x50);
        if ((uVar8 & 1) != 0) {
          uVar8 = param_2[0x3b];
          if (uVar8 == 0) {
            ppuVar4 = &local_180;
            goto LAB_00d5a760;
          }
          if (*puVar3 != 3 || param_2[0x1f] != 0) {
            FUN_005f6588();
            uVar8 = param_2[0x3b];
          }
          *puVar3 = (uint)puVar11;
          param_2[0x1f] = (uint)puVar6;
          param_2[0x22] = (uint)unaff_r4;
          param_2[0x20] = (uint)unaff_r7;
          param_2[0x21] = (uint)puVar10;
          param_2[0x23] = (uint)unaff_r11;
          FUN_01bed4e2(param_2 + 0x24,&local_180,0x50);
          FUN_01283fd8(&local_1a8,local_1fc,uVar8);
          puVar11 = local_19c;
          if (((uint)local_19c & 1) == 0) goto LAB_00d5a740;
          local_bc = (undefined1 *)((int)local_1a4 + ((uint)local_19c >> 5));
          local_c0 = (int)local_1a8 - ((uint)local_19c >> 5);
          local_c4 = (undefined1 *)((int)local_1a0 + ((uint)local_19c >> 5));
          FUN_01283524(&local_130,&local_c4);
          local_b8 = (uint)puVar11 >> 5;
          if (local_128 < (uint *)((uint)puVar11 >> 5)) {
            local_88 = &local_b4;
            local_b4 = local_128;
            local_84 = (uint *)&LAB_01a6a304;
            local_8c = (uint *)&LAB_01a6a304;
            local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d5ad1c;
        }
        local_204 = (uint *)param_2[0x38];
        uVar9 = param_2[0x3b];
        local_200 = (uint *)param_2[0x39];
        uVar8 = uVar9;
        if (param_2[0x3c] - uVar9 < 5) {
          FUN_01283c9c(local_1fc,5);
          uVar8 = param_2[0x3b];
          local_8c = (uint *)(param_2[0x3c] - uVar8);
          if (local_8c < 5) {
            local_90 = (uint *)0x5;
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_90);
          }
        }
        param_2[0x3b] = uVar8 + 5;
        local_90 = puVar11;
        local_8c = puVar6;
        local_88 = (uint **)unaff_r7;
        local_84 = puVar10;
        local_80 = unaff_r4;
        local_7c = unaff_r11;
        FUN_01bed4e2(&local_78,&local_180,0x50);
        if (puVar11 != (uint *)&SUB_00000004 || puVar6 != (uint *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5a8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&LAB_00d5a8c8 + *(int *)(&LAB_00d5a8c8 + (int)puVar11 * 4)))
                    (&LAB_00d5a8c8,*(int *)(&LAB_00d5a8c8 + (int)puVar11 * 4),local_88);
          return;
        }
        uVar8 = param_2[0x3b];
        if (uVar8 < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar9,uVar8,uVar8,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_130,local_204,local_200,*local_1fc + uVar9,uVar8 - uVar9);
        puVar12 = local_11c;
        puVar13 = local_120;
        puVar10 = local_124;
        puVar7 = local_128;
        puVar6 = local_12c;
        puVar11 = local_130;
        if (local_130 != (uint *)&DAT_00000003 || local_12c != (uint *)0x0) {
          FUN_01bed4e2(auStack_1f8,&local_118,0x50);
          goto LAB_00d5aeb8;
        }
        if (local_208 <= (uint *)param_2[0x3b]) {
          FUN_01283fd8(&local_1a8,local_1fc);
          puVar11 = local_19c;
          if (((uint)local_19c & 1) == 0) goto LAB_00d5a740;
          local_bc = (undefined1 *)((int)local_1a4 + ((uint)local_19c >> 5));
          local_c0 = (int)local_1a8 - ((uint)local_19c >> 5);
          local_c4 = (undefined1 *)((int)local_1a0 + ((uint)local_19c >> 5));
          FUN_01283524(&local_130,&local_c4);
          local_b8 = (uint)puVar11 >> 5;
          if (local_128 < (uint *)((uint)puVar11 >> 5)) {
            local_88 = &local_b4;
            local_b4 = local_128;
            local_84 = (uint *)&LAB_01a6a304;
            local_8c = (uint *)&LAB_01a6a304;
            local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d5ad1c;
        }
        uVar8 = *param_2;
        puVar10 = (uint *)param_2[1];
      } while (uVar8 != 3 || puVar10 != (uint *)0x0);
    }
    if (param_2[0x3b] == 0) {
      puVar6 = (uint *)0x0;
      puVar11 = (uint *)&SUB_00000004;
      puVar13 = unaff_r4;
      puVar7 = unaff_r7;
      puVar12 = unaff_r11;
    }
    else {
LAB_00d5a71c:
      FUN_01283fd8(&local_1a8,local_1fc);
      puVar11 = local_19c;
      if (((uint)local_19c & 1) == 0) {
LAB_00d5a740:
        puVar13 = local_1a4;
        puVar7 = &DAT_01d2e520;
        puVar10 = local_1a8;
        puVar12 = local_19c;
      }
      else {
        local_bc = (undefined1 *)((int)local_1a4 + ((uint)local_19c >> 5));
        local_c0 = (int)local_1a8 - ((uint)local_19c >> 5);
        local_c4 = (undefined1 *)((int)local_1a0 + ((uint)local_19c >> 5));
        FUN_01283524(&local_130,&local_c4);
        local_b8 = (uint)puVar11 >> 5;
        if (local_128 < (uint *)((uint)puVar11 >> 5)) {
          local_88 = &local_b4;
          local_b4 = local_128;
          local_84 = (uint *)&LAB_01a6a304;
          local_8c = (uint *)&LAB_01a6a304;
          local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d5ad1c:
        puVar13 = (uint *)((int)local_128 - local_b8);
        puVar10 = (uint *)((int)local_12c + local_b8);
        puVar7 = local_130;
        puVar12 = local_124;
      }
      puVar6 = (uint *)0x0;
      puVar11 = (uint *)&DAT_00000003;
    }
LAB_00d5aeb8:
    if (puVar11 == (uint *)&SUB_00000004 && puVar6 == (uint *)0x0) {
      puVar13 = (uint *)0xd5aef8;
      FUN_01a737fc(&local_90,param_2 + 0x44);
      if (local_90 != (uint *)&SUB_00000004 || local_8c != (uint *)0x0) {
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
        local_204 = local_78;
        local_208 = local_74;
        local_1fc = (uint *)local_88;
        local_200 = local_84;
        local_130 = local_70;
        local_12c = puStack_6c;
        local_128 = puStack_68;
        local_124 = puStack_64;
        local_120 = puStack_60;
        local_11c = local_5c;
        local_118 = puStack_58;
        local_114 = puStack_54;
        uStack_110 = uStack_50;
        uStack_10c = uStack_4c;
        puVar12 = local_7c;
        puVar13 = local_80;
      }
      local_180 = local_130;
      puStack_17c = local_12c;
      puStack_178 = local_128;
      puStack_174 = local_124;
      puStack_170 = local_120;
      local_16c = local_11c;
      puStack_168 = local_118;
      puStack_164 = local_114;
      uStack_160 = uStack_110;
      uStack_15c = uStack_10c;
      local_158 = local_b0;
      uStack_154 = uStack_ac;
      uStack_150 = uStack_a8;
      uStack_14c = uStack_a4;
      local_148 = local_a0;
      uStack_144 = uStack_9c;
      uStack_140 = uStack_98;
      uStack_13c = uStack_94;
      puVar6 = local_8c;
      puVar11 = local_90;
      puVar10 = puVar12;
LAB_00d5b0fc:
      if (puVar11 != (uint *)&DAT_00000003 || puVar6 != (uint *)0x0) {
        if (puVar11 != (uint *)&SUB_00000004 || puVar6 != (uint *)0x0) {
          FUN_01bed4e2(&local_70,&local_180,0x48);
          local_84 = local_200;
          local_88 = (uint **)local_1fc;
          local_74 = local_208;
          local_78 = local_204;
          local_90 = puVar11;
          local_8c = puVar6;
          local_80 = puVar13;
          local_7c = puVar10;
          uVar2 = FUN_01a65494(&local_90);
          FUN_01a7467c(param_1,uVar2,&DAT_01d2cc7c);
          return;
        }
        uVar2 = 4;
        goto LAB_00d5b11c;
      }
      puVar7 = puVar13;
    }
    else {
      if (puVar11 != (uint *)&DAT_00000003 || puVar6 != (uint *)0x0) {
        local_130 = puVar11;
        local_12c = puVar6;
        local_128 = puVar7;
        local_124 = puVar10;
        local_120 = puVar13;
        local_11c = puVar12;
        FUN_01bed4e2(&local_118,auStack_1f8,0x50);
        if ((char)param_2[0x5e] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x179) = 1;
          FUN_01a738c0(&local_90,&local_130);
          puVar10 = local_7c;
          puVar13 = local_80;
          puVar6 = local_8c;
          puVar11 = local_90;
          local_1fc = (uint *)local_88;
          local_200 = local_84;
          local_208 = local_74;
          local_204 = local_78;
          local_1a8 = local_70;
          local_1a4 = puStack_6c;
          local_1a0 = puStack_68;
          local_19c = puStack_64;
          puStack_198 = puStack_60;
          local_194 = local_5c;
          puStack_190 = puStack_58;
          puStack_18c = puStack_54;
          uStack_188 = uStack_50;
          uStack_184 = uStack_4c;
          if (local_90 == (uint *)&DAT_00000003 && local_8c == (uint *)0x0) {
            local_180 = local_70;
            puStack_17c = puStack_6c;
            puStack_178 = puStack_68;
            puStack_174 = puStack_64;
            puStack_170 = puStack_60;
            local_16c = local_5c;
            puStack_168 = puStack_58;
            puStack_164 = puStack_54;
            uStack_160 = uStack_50;
            uStack_15c = uStack_4c;
            FUN_005f6588(&local_130);
            puVar6 = (uint *)0x0;
            puVar11 = (uint *)&DAT_00000003;
          }
          else {
            local_158 = local_48;
            uStack_154 = uStack_44;
            uStack_150 = uStack_40;
            uStack_14c = uStack_3c;
            local_148 = local_38;
            uStack_144 = uStack_34;
            uStack_140 = uStack_30;
            uStack_13c = uStack_2c;
            local_180 = local_70;
            puStack_17c = puStack_6c;
            puStack_178 = puStack_68;
            puStack_174 = puStack_64;
            puStack_170 = puStack_60;
            local_16c = local_5c;
            puStack_168 = puStack_58;
            puStack_164 = puStack_54;
            uStack_160 = uStack_50;
            uStack_15c = uStack_4c;
            FUN_005f6588(&local_130);
          }
        }
        else {
          local_204 = local_118;
          local_208 = local_114;
          local_1fc = local_128;
          local_200 = local_124;
          FUN_01bed4e2(&local_180,auStack_1f0,0x48);
          puVar10 = puVar12;
        }
        goto LAB_00d5b0fc;
      }
      local_200 = (uint *)0x0;
      local_1fc = (uint *)&DAT_00000003;
      local_208 = puVar12;
      local_204 = puVar13;
    }
    param_1[8] = local_180;
    param_1[9] = puStack_17c;
    param_1[10] = puStack_178;
    param_1[0xb] = puStack_174;
    param_1[0xc] = puStack_170;
    param_1[0xd] = local_16c;
    param_1[0xe] = puStack_168;
    param_1[0xf] = puStack_164;
    param_1[0x10] = uStack_160;
    param_1[0x11] = uStack_15c;
    param_1[1] = 0;
    param_1[2] = local_1fc;
    *param_1 = 3;
    param_1[3] = local_200;
    param_1[4] = puVar7;
    param_1[5] = puVar10;
    param_1[6] = local_204;
    param_1[7] = local_208;
  }
  else {
    unaff_r7 = (uint *)param_2[0x20];
    ppuVar4 = (uint **)(param_2 + 0x24);
    puVar10 = (uint *)param_2[0x21];
    unaff_r4 = (uint *)param_2[0x22];
    unaff_r11 = (uint *)param_2[0x23];
LAB_00d5a760:
    FUN_01bed4e2(auStack_1f8,ppuVar4,0x50);
    puVar13 = unaff_r4;
    puVar7 = unaff_r7;
    puVar12 = unaff_r11;
    if (puVar11 != (uint *)&DAT_00000005 || puVar6 != (uint *)0x0) goto LAB_00d5aeb8;
LAB_00d5a778:
    uVar2 = 5;
LAB_00d5b11c:
    *param_1 = uVar2;
    param_1[1] = 0;
  }
  return;
}

