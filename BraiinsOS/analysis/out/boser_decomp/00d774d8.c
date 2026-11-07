// FUN_00d774d8 @ 00d774d8 size=2112 calls_out=17 calls_in=0
// strings: 

void FUN_00d774d8(undefined4 *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint **ppuVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *unaff_r6;
  uint *puVar9;
  uint *unaff_r8;
  uint *puVar10;
  uint *puVar11;
  uint **unaff_r10;
  uint *unaff_r11;
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
  
  puVar5 = (uint *)*param_2;
  puVar7 = (uint *)param_2[1];
  local_204 = (uint *)param_2[0x27];
  *param_2 = 3;
  param_2[1] = 0;
  local_200 = param_3;
  if (puVar5 == (uint *)&DAT_00000003 && puVar7 == (uint *)0x0) {
    uVar3 = param_2[0x24];
    local_1fc = param_2 + 0x1c;
    puVar9 = unaff_r6;
    if (uVar3 != 0) {
      do {
        (**(code **)(param_2[0x25] + 0xc))(&local_90,uVar3,param_3);
        if (local_90 == (uint *)&DAT_00000005 && local_8c == (uint *)0x0) {
LAB_00d776bc:
          if (param_2[0x1d] == 0) goto LAB_00d77afc;
          goto LAB_00d776f4;
        }
        FUN_01bed4e2(&local_130,&local_90,0x68);
        puVar9 = local_11c;
        puVar1 = local_120;
        puVar10 = local_124;
        puVar11 = local_128;
        puVar7 = local_12c;
        puVar5 = local_130;
        if (local_130 == (uint *)&SUB_00000004 && local_12c == (uint *)0x0) {
          if (param_2[0x24] != 0) {
            FUN_01139b38(param_2[0x24],param_2[0x25]);
          }
          param_2[0x24] = 0;
          puVar9 = unaff_r6;
          break;
        }
        FUN_01bed4e2(&local_180,&local_118,0x50);
        if (puVar5 != (uint *)&DAT_00000003 || puVar7 != (uint *)0x0) {
          if (puVar5 == (uint *)&DAT_00000005 && puVar7 == (uint *)0x0) goto LAB_00d776bc;
          local_200 = puVar9;
          uVar3 = param_2[0x1d];
          if (uVar3 == 0) {
            ppuVar4 = &local_180;
            unaff_r8 = puVar10;
            unaff_r10 = (uint **)puVar11;
            unaff_r11 = puVar1;
            goto LAB_00d77694;
          }
          if (*param_2 != 3 || param_2[1] != 0) {
            FUN_005f6588(param_2);
            uVar3 = param_2[0x1d];
          }
          param_2[5] = (uint)puVar9;
          *param_2 = (uint)puVar5;
          param_2[1] = (uint)puVar7;
          param_2[2] = (uint)puVar11;
          param_2[3] = (uint)puVar10;
          param_2[4] = (uint)puVar1;
          FUN_01bed4e2(param_2 + 6,&local_180,0x50);
          FUN_01283fd8(&local_1a8,local_1fc,uVar3);
          puVar5 = local_19c;
          if (((uint)local_19c & 1) == 0) goto LAB_00d77714;
          local_bc = (undefined1 *)((int)local_1a4 + ((uint)local_19c >> 5));
          local_c0 = (int)local_1a8 - ((uint)local_19c >> 5);
          local_c4 = (undefined1 *)((int)local_1a0 + ((uint)local_19c >> 5));
          FUN_01283524(&local_130,&local_c4);
          local_b8 = (uint)puVar5 >> 5;
          if (local_128 < (uint *)((uint)puVar5 >> 5)) {
            local_88 = &local_b4;
            local_b4 = local_128;
            local_84 = (uint *)&LAB_01a6a304;
            local_8c = (uint *)&LAB_01a6a304;
            local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d77764;
        }
        uVar6 = param_2[0x1d];
        unaff_r6 = (uint *)param_2[0x1a];
        uVar8 = param_2[0x1b];
        uVar3 = uVar6;
        if (param_2[0x1e] - uVar6 < 5) {
          FUN_01283c9c(local_1fc,5);
          uVar3 = param_2[0x1d];
          if (param_2[0x1e] - uVar3 < 5) {
            local_130 = (uint *)0x5;
            local_12c = (uint *)(param_2[0x1e] - uVar3);
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&local_130);
          }
        }
        param_2[0x1d] = uVar3 + 5;
        FUN_00f00a30(&local_130,puVar10,puVar1,local_1fc);
        if (local_130 == (uint *)&DAT_00000001) {
          local_1a4 = local_128;
          local_1a8 = local_12c;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_003efa56,0x27,&local_1a8,&DAT_01c15d9c,&DAT_01c15fbc);
        }
        FUN_019bb7e0(puVar11,puVar10);
        uVar3 = param_2[0x1d];
        if (uVar3 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar6,uVar3,uVar3,&DAT_01c15f4c);
        }
        FUN_01a745b4(&local_90,unaff_r6,uVar8,*local_1fc + uVar6,uVar3 - uVar6);
        puVar9 = local_7c;
        unaff_r11 = local_80;
        unaff_r8 = local_84;
        unaff_r10 = local_88;
        puVar7 = local_8c;
        puVar5 = local_90;
        if (local_90 != (uint *)&DAT_00000003 || local_8c != (uint *)0x0) {
          FUN_01bed4e2(auStack_1f8,&local_78,0x50);
          goto LAB_00d778a8;
        }
        if (local_204 <= (uint *)param_2[0x1d]) {
          FUN_01283fd8(&local_1a8,local_1fc);
          puVar5 = local_19c;
          if (((uint)local_19c & 1) == 0) goto LAB_00d77714;
          local_bc = (undefined1 *)((int)local_1a4 + ((uint)local_19c >> 5));
          local_c0 = (int)local_1a8 - ((uint)local_19c >> 5);
          local_c4 = (undefined1 *)((int)local_1a0 + ((uint)local_19c >> 5));
          FUN_01283524(&local_130,&local_c4);
          local_b8 = (uint)puVar5 >> 5;
          if (local_128 < (uint *)((uint)puVar5 >> 5)) {
            local_88 = &local_b4;
            local_b4 = local_128;
            local_84 = (uint *)&LAB_01a6a304;
            local_8c = (uint *)&LAB_01a6a304;
            local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
          }
          goto LAB_00d77764;
        }
        uVar3 = param_2[0x24];
        puVar9 = unaff_r6;
        unaff_r8 = puVar10;
        unaff_r10 = (uint **)puVar11;
        unaff_r11 = puVar1;
      } while (uVar3 != 0);
    }
    if (param_2[0x1d] == 0) {
      puVar7 = (uint *)0x0;
      puVar5 = (uint *)&SUB_00000004;
    }
    else {
LAB_00d776f4:
      FUN_01283fd8(&local_1a8,local_1fc);
      puVar5 = local_19c;
      if (((uint)local_19c & 1) == 0) {
LAB_00d77714:
        puVar9 = local_19c;
        unaff_r8 = local_1a8;
        unaff_r10 = (uint **)&DAT_01d2e520;
        unaff_r11 = local_1a4;
      }
      else {
        local_bc = (undefined1 *)((int)local_1a4 + ((uint)local_19c >> 5));
        local_c0 = (int)local_1a8 - ((uint)local_19c >> 5);
        local_c4 = (undefined1 *)((int)local_1a0 + ((uint)local_19c >> 5));
        FUN_01283524(&local_130,&local_c4);
        local_b8 = (uint)puVar5 >> 5;
        if (local_128 < (uint *)((uint)puVar5 >> 5)) {
          local_88 = &local_b4;
          local_b4 = local_128;
          local_84 = (uint *)&LAB_01a6a304;
          local_8c = (uint *)&LAB_01a6a304;
          local_90 = &local_b8;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_005ac267,&local_90,&DAT_01d2e534);
        }
LAB_00d77764:
        unaff_r11 = (uint *)((int)local_128 - local_b8);
        unaff_r8 = (uint *)((int)local_12c + local_b8);
        puVar9 = local_124;
        unaff_r10 = (uint **)local_130;
      }
      puVar7 = (uint *)0x0;
      puVar5 = (uint *)&DAT_00000003;
    }
LAB_00d778a8:
    if (puVar5 == (uint *)&SUB_00000004 && puVar7 == (uint *)0x0) {
      FUN_01a737fc(&local_90,param_2 + 0x28);
      puVar11 = param_2;
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
        local_1fc = local_80;
        local_204 = local_78;
        local_200 = (uint *)local_88;
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
        unaff_r8 = local_74;
        puVar11 = local_84;
        unaff_r11 = local_7c;
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
      puVar5 = local_90;
      puVar7 = local_8c;
      puVar10 = unaff_r11;
LAB_00d77ad8:
      if (puVar5 != (uint *)&DAT_00000003 || puVar7 != (uint *)0x0) {
        if (puVar5 != (uint *)&SUB_00000004 || puVar7 != (uint *)0x0) {
          if (puVar5 != (uint *)&DAT_00000005 || puVar7 != (uint *)0x0) {
            FUN_01bed4e2(&local_70,&local_180,0x48);
            local_88 = (uint **)local_200;
            local_78 = local_204;
            local_80 = local_1fc;
            local_90 = puVar5;
            local_8c = puVar7;
            local_84 = puVar11;
            local_7c = puVar10;
            local_74 = unaff_r8;
            uVar2 = FUN_01a65494(&local_90);
            FUN_01a7467c(param_1,uVar2,&DAT_01d2cc7c);
            return;
          }
          goto LAB_00d77afc;
        }
        uVar2 = 4;
        goto LAB_00d77b10;
      }
    }
    else {
      if (puVar5 != (uint *)&DAT_00000003 || puVar7 != (uint *)0x0) {
        local_130 = puVar5;
        local_12c = puVar7;
        local_128 = (uint *)unaff_r10;
        local_124 = unaff_r8;
        local_120 = unaff_r11;
        local_11c = puVar9;
        FUN_01bed4e2(&local_118,auStack_1f8,0x50);
        unaff_r8 = local_114;
        puVar11 = local_124;
        if ((char)param_2[0x42] == '\x01') {
          *(undefined1 *)((int)param_2 + 0x109) = 1;
          FUN_01a738c0(&local_90,&local_130);
          local_200 = (uint *)local_88;
          local_204 = local_78;
          local_1fc = local_80;
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
            local_8c = (uint *)0x0;
            local_90 = (uint *)&DAT_00000003;
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
          puVar5 = local_90;
          puVar7 = local_8c;
          unaff_r8 = local_74;
          puVar11 = local_84;
          puVar10 = local_7c;
        }
        else {
          local_204 = local_118;
          local_200 = local_128;
          FUN_01bed4e2(&local_180,auStack_1f0,0x48);
          puVar10 = puVar9;
          local_1fc = unaff_r11;
        }
        goto LAB_00d77ad8;
      }
      puVar11 = (uint *)0x0;
      local_200 = (uint *)&DAT_00000003;
      puVar10 = unaff_r8;
      local_1fc = (uint *)unaff_r10;
      local_204 = unaff_r11;
      unaff_r8 = puVar9;
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
    param_1[2] = local_200;
    *param_1 = 3;
    param_1[3] = puVar11;
    param_1[4] = local_1fc;
    param_1[5] = puVar10;
    param_1[6] = local_204;
    param_1[7] = unaff_r8;
  }
  else {
    unaff_r10 = (uint **)param_2[2];
    ppuVar4 = (uint **)(param_2 + 6);
    unaff_r8 = (uint *)param_2[3];
    unaff_r11 = (uint *)param_2[4];
    puVar9 = (uint *)param_2[5];
LAB_00d77694:
    FUN_01bed4e2(auStack_1f8,ppuVar4,0x50);
    if (puVar5 != (uint *)&DAT_00000005 || puVar7 != (uint *)0x0) goto LAB_00d778a8;
LAB_00d77afc:
    uVar2 = 5;
LAB_00d77b10:
    *param_1 = uVar2;
    param_1[1] = 0;
  }
  return;
}

