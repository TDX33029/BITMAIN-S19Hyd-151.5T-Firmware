// FUN_016d88f0 @ 016d88f0 size=1436 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016d88f0(uint *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_198;
  uint uStack_194;
  uint local_190;
  uint uStack_18c;
  uint local_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint local_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint local_150;
  uint local_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint local_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint local_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint local_10c;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint local_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint local_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint local_b8;
  uint local_b4;
  uint uStack_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint local_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  undefined4 local_40 [7];
  
  FUN_016da298(&local_80);
  local_b8 = local_7c;
  local_b4 = local_78;
  uStack_b0 = uStack_74;
  local_ac = uStack_70;
  local_a8 = local_6c;
  local_a4 = uStack_68;
  uStack_a0 = uStack_64;
  uStack_9c = uStack_60;
  uStack_98 = local_5c;
  local_94 = local_58;
  uStack_90 = uStack_54;
  uStack_8c = local_50;
  uStack_88 = uStack_4c;
  uStack_84 = uStack_48;
  if (local_80 != 0x22) {
    param_1[2] = local_7c;
    param_1[3] = local_78;
    param_1[4] = uStack_74;
    param_1[5] = uStack_70;
    param_1[6] = local_6c;
    param_1[7] = uStack_68;
    param_1[8] = uStack_64;
    param_1[9] = uStack_60;
    param_1[10] = local_5c;
    param_1[0xb] = local_58;
    param_1[0xc] = uStack_54;
    param_1[0xd] = local_50;
    param_1[0xe] = uStack_4c;
    param_1[0xf] = uStack_48;
    param_1[0x10] = local_44;
    *param_1 = 0x110008;
    param_1[1] = local_80;
    return;
  }
  local_198 = local_7c;
  uStack_194 = local_78;
  local_190 = uStack_74;
  uStack_18c = uStack_70;
  local_188 = local_6c;
  uStack_184 = uStack_68;
  uStack_180 = uStack_64;
  uStack_17c = uStack_60;
  uStack_178 = local_5c;
  local_174 = local_58;
  uStack_170 = uStack_54;
  uStack_16c = local_50;
  uStack_168 = uStack_4c;
  uStack_164 = uStack_48;
  FUN_016d4684(param_2);
  iVar5 = param_2[2];
  if (*(int *)(*param_2 + 0x50) == iVar5) {
    FUN_016d8808(&local_80,param_2);
LAB_016d898c:
    param_1[1] = local_80;
    param_1[2] = local_7c;
    param_1[3] = local_78;
    param_1[4] = uStack_74;
    param_1[5] = uStack_70;
    param_1[6] = local_6c;
    param_1[7] = uStack_68;
    param_1[8] = uStack_64;
    param_1[9] = uStack_60;
    param_1[10] = local_5c;
    param_1[0xb] = local_58;
    param_1[0xc] = uStack_54;
    param_1[0xd] = local_50;
    param_1[0xe] = uStack_4c;
    param_1[0xf] = uStack_48;
    param_1[0x10] = local_44;
    *param_1 = 0x110008;
  }
  else {
    iVar1 = FUN_016d4a28(param_2);
    puVar4 = (uint *)((uint)&local_198 | 4);
    if (((iVar1 != 0x2d) || (iVar1 = FUN_016da32c(param_2), iVar1 == 0x5d)) ||
       (iVar1 = FUN_016da32c(param_2), iVar1 == 0x2d)) {
      uVar7 = local_198 + 0x7ffffffe;
      uVar3 = uVar7;
      if (local_198 < 0x80000002) {
        uVar3 = 4;
      }
      if (uVar3 == 0) {
        uVar3 = puVar4[1];
        uVar7 = puVar4[2];
        uVar6 = puVar4[3];
        param_1[1] = *puVar4;
        param_1[2] = uVar3;
        param_1[3] = uVar7;
        param_1[4] = uVar6;
        uVar3 = puVar4[5];
        uVar7 = puVar4[6];
        uVar6 = puVar4[7];
        param_1[5] = puVar4[4];
        param_1[6] = uVar3;
        param_1[7] = uVar7;
        param_1[8] = uVar6;
        uVar3 = 0x110001;
LAB_016d8af0:
        *param_1 = uVar3;
        return;
      }
      if (uVar3 == 3) {
        uVar3 = puVar4[1];
        uVar7 = puVar4[2];
        param_1[1] = *puVar4;
        param_1[2] = uVar3;
        param_1[3] = uVar7;
        uVar3 = puVar4[4];
        uVar7 = puVar4[5];
        uVar6 = puVar4[6];
        param_1[4] = puVar4[3];
        param_1[5] = uVar3;
        param_1[6] = uVar7;
        param_1[7] = uVar6;
        uVar3 = 0x110005;
        goto LAB_016d8af0;
      }
      if (uVar3 == 4) {
        *param_1 = (uint)&DAT_00110004;
        param_1[1] = local_198;
        uVar3 = puVar4[1];
        uVar7 = puVar4[2];
        uVar6 = puVar4[3];
        param_1[2] = *puVar4;
        param_1[3] = uVar3;
        param_1[4] = uVar7;
        param_1[5] = uVar6;
        uVar3 = puVar4[5];
        uVar7 = puVar4[6];
        uVar6 = puVar4[7];
        param_1[6] = puVar4[4];
        param_1[7] = uVar3;
        param_1[8] = uVar7;
        param_1[9] = uVar6;
        param_1[10] = local_174;
        param_1[0xb] = uStack_170;
        param_1[0xc] = uStack_16c;
        param_1[0xd] = uStack_168;
        param_1[0xe] = uStack_164;
        return;
      }
      local_b8 = local_198;
      local_b4 = *puVar4;
      uStack_b0 = puVar4[1];
      local_ac = puVar4[2];
      local_a8 = puVar4[3];
      local_a4 = puVar4[4];
      uStack_a0 = puVar4[5];
      uStack_9c = puVar4[6];
      uStack_98 = puVar4[7];
      local_94 = local_174;
      uStack_90 = uStack_170;
      uStack_8c = uStack_16c;
      uStack_88 = uStack_168;
      uStack_84 = uStack_164;
      local_40[0] = 1;
      FUN_016d4540(&local_80,param_2[1],iVar5,puVar4,local_40);
      param_1[1] = local_80;
      param_1[2] = local_7c;
      param_1[3] = local_78;
      param_1[4] = uStack_74;
      param_1[5] = uStack_70;
      param_1[6] = local_6c;
      param_1[7] = uStack_68;
      param_1[8] = uStack_64;
      param_1[9] = uStack_60;
      param_1[10] = local_5c;
      param_1[0xb] = local_58;
      param_1[0xc] = uStack_54;
      param_1[0xd] = local_50;
      param_1[0xe] = uStack_4c;
      param_1[0xf] = uStack_48;
      param_1[0x10] = local_44;
      *param_1 = 0x110008;
      if (uVar7 < 4) {
        return;
      }
      puVar4 = &local_b8;
      goto LAB_016d89cc;
    }
    iVar1 = FUN_016d819c(param_2);
    if (iVar1 == 0) {
      FUN_016d8808(&local_80,param_2);
      goto LAB_016d898c;
    }
    FUN_016da298(&local_80,param_2);
    local_b8 = local_7c;
    local_b4 = local_78;
    uStack_b0 = uStack_74;
    local_ac = uStack_70;
    local_a8 = local_6c;
    local_a4 = uStack_68;
    uStack_a0 = uStack_64;
    uStack_9c = uStack_60;
    uStack_98 = local_5c;
    local_94 = local_58;
    uStack_90 = uStack_54;
    uStack_8c = local_50;
    uStack_88 = uStack_4c;
    uStack_84 = uStack_48;
    if (local_80 == 0x22) {
      local_160 = local_7c;
      uStack_15c = local_78;
      uStack_158 = uStack_74;
      uStack_154 = uStack_70;
      local_150 = local_6c;
      local_14c = uStack_68;
      uStack_148 = uStack_64;
      uStack_144 = uStack_60;
      uStack_140 = local_5c;
      iVar1 = 4;
      local_13c = local_58;
      uStack_138 = uStack_54;
      uStack_134 = local_50;
      uStack_130 = uStack_4c;
      uStack_12c = uStack_48;
      if (0x80000001 < local_198) {
        iVar1 = local_198 + 0x7ffffffe;
      }
      if (2 < iVar1 - 1U) {
        if (iVar1 == 0) {
          puVar4 = &local_190;
        }
        else {
          puVar4 = &uStack_17c;
        }
      }
      uVar7 = local_7c + 0x7ffffffe;
      uVar3 = 4;
      if (0x80000001 < local_7c) {
        uVar3 = uVar7;
      }
      if (uVar3 - 1 < 3) {
        puVar2 = (uint *)((uint)&local_160 | 4);
      }
      else if (uVar3 == 0) {
        puVar2 = &uStack_158;
      }
      else {
        puVar2 = &uStack_144;
      }
      local_e4 = puVar2[3];
      uStack_e0 = puVar2[4];
      uStack_dc = puVar2[5];
      local_f0 = *puVar4;
      uStack_ec = puVar4[1];
      uStack_e8 = puVar4[2];
      iVar1 = param_2[1];
      FUN_016da5e0(&local_80,&local_198,iVar1,iVar5);
      uVar3 = local_7c;
      local_d8 = local_78;
      uStack_d4 = uStack_74;
      uStack_d0 = uStack_70;
      local_cc = local_6c;
      uStack_c8 = uStack_68;
      uStack_c4 = uStack_64;
      uStack_c0 = uStack_60;
      if (local_80 != 0x22) {
        param_1[10] = local_5c;
        param_1[0xb] = local_58;
        param_1[0xc] = uStack_54;
        param_1[0xd] = local_50;
        param_1[0xe] = uStack_4c;
        param_1[0xf] = uStack_48;
        param_1[0x10] = local_44;
        param_1[3] = local_78;
        param_1[4] = uStack_74;
        param_1[5] = uStack_70;
        param_1[6] = local_6c;
        param_1[7] = uStack_68;
        param_1[8] = uStack_64;
        param_1[9] = uStack_60;
        *param_1 = 0x110008;
        param_1[1] = local_80;
        param_1[2] = local_7c;
        if (uVar7 < 4) {
          return;
        }
        puVar4 = &local_160;
        goto LAB_016d89cc;
      }
      FUN_016da5e0(&local_80,&local_160,iVar1,iVar5);
      local_b8 = local_78;
      local_b4 = uStack_74;
      uStack_b0 = uStack_70;
      local_ac = local_6c;
      local_a8 = uStack_68;
      local_a4 = uStack_64;
      uStack_a0 = uStack_60;
      if (local_80 != 0x22) {
        param_1[10] = local_5c;
        param_1[0xb] = local_58;
        param_1[0xc] = uStack_54;
        param_1[0xd] = local_50;
        param_1[0xe] = uStack_4c;
        param_1[0xf] = uStack_48;
        param_1[0x10] = local_44;
        param_1[3] = local_78;
        param_1[4] = uStack_74;
        param_1[5] = uStack_70;
        param_1[6] = local_6c;
        param_1[7] = uStack_68;
        param_1[8] = uStack_64;
        param_1[9] = uStack_60;
        *param_1 = 0x110008;
        param_1[1] = local_80;
        param_1[2] = local_7c;
        return;
      }
      local_128 = local_78;
      uStack_124 = uStack_74;
      uStack_120 = uStack_70;
      local_11c = local_6c;
      local_118 = uStack_68;
      uStack_114 = uStack_64;
      uStack_110 = uStack_60;
      local_10c = local_f0;
      local_108 = uStack_ec;
      uStack_104 = uStack_e8;
      uStack_100 = local_e4;
      uStack_fc = uStack_e0;
      uStack_f8 = uStack_dc;
      if (local_7c < uVar3) {
        local_80 = 2;
        FUN_016d4540(param_1 + 1,iVar1,iVar5,&local_f0,&local_80);
        uVar3 = 0x110008;
      }
      else {
        param_1[1] = local_d8;
        param_1[2] = uStack_d4;
        param_1[3] = uStack_d0;
        param_1[4] = local_cc;
        param_1[5] = uStack_c8;
        param_1[6] = uStack_c4;
        param_1[7] = uStack_c0;
        param_1[9] = local_78;
        param_1[10] = uStack_74;
        param_1[0xb] = uStack_70;
        param_1[0xc] = local_6c;
        param_1[0xd] = uStack_68;
        param_1[0xe] = uStack_64;
        param_1[0xf] = uStack_60;
        param_1[0x10] = local_f0;
        param_1[0x11] = uStack_ec;
        param_1[0x12] = uStack_e8;
        param_1[0x13] = local_e4;
        param_1[0x14] = uStack_e0;
        param_1[0x15] = uStack_dc;
        param_1[8] = local_7c;
      }
      goto LAB_016d8af0;
    }
    param_1[2] = local_7c;
    param_1[3] = local_78;
    param_1[4] = uStack_74;
    param_1[5] = uStack_70;
    param_1[6] = local_6c;
    param_1[7] = uStack_68;
    param_1[8] = uStack_64;
    param_1[9] = uStack_60;
    param_1[10] = local_5c;
    param_1[0xb] = local_58;
    param_1[0xc] = uStack_54;
    param_1[0xd] = local_50;
    param_1[0xe] = uStack_4c;
    param_1[0xf] = uStack_48;
    param_1[0x10] = local_44;
    *param_1 = 0x110008;
    param_1[1] = local_80;
  }
  if (local_198 + 0x7ffffffe < 4) {
    return;
  }
  puVar4 = &local_198;
LAB_016d89cc:
  FUN_016d8154(puVar4);
  return;
}

