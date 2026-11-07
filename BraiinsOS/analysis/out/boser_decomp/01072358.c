// FUN_01072358 @ 01072358 size=1520 calls_out=14 calls_in=3
// strings: Missing request message.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01072358(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int local_220;
  int local_218;
  int local_20c;
  int local_208;
  int local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  int iStack_1f4;
  uint uStack_1f0;
  int iStack_1ec;
  uint local_1e8;
  int iStack_1e4;
  uint uStack_1e0;
  int iStack_1dc;
  uint uStack_1d8;
  int local_1d4;
  uint uStack_1d0;
  int iStack_1cc;
  uint uStack_1c8;
  int iStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  uint local_188;
  int iStack_184;
  uint uStack_180;
  int iStack_17c;
  uint local_178;
  int iStack_174;
  uint uStack_170;
  int iStack_16c;
  uint uStack_168;
  int local_164;
  uint uStack_160;
  int iStack_15c;
  uint uStack_158;
  int iStack_154;
  int local_150;
  int local_14c;
  uint local_148;
  undefined4 local_144;
  uint local_140;
  int iStack_13c;
  uint local_138;
  int iStack_134;
  uint local_130;
  int iStack_12c;
  uint uStack_128;
  int local_124;
  uint uStack_120;
  int local_11c;
  uint uStack_118;
  int iStack_114;
  uint uStack_110;
  int iStack_10c;
  int local_108;
  int local_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  uint local_b0;
  int iStack_ac;
  uint uStack_a8;
  int iStack_a4;
  uint local_a0;
  int iStack_9c;
  uint uStack_98;
  int iStack_94;
  uint uStack_90;
  int local_8c;
  uint uStack_88;
  int iStack_84;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  uint local_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  uint local_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  uint uStack_40;
  int local_3c;
  uint uStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  
  local_144 = CONCAT13(local_144._3_1_,CONCAT21(local_144._1_2_,(undefined1)local_144));
  puVar2 = (uint *)(param_2 + 0x218);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x210)) {
  case 0:
    iVar7 = param_2 + 0x90;
    puVar3 = *(undefined4 **)(param_2 + 0x208);
    *(undefined4 *)(param_2 + 0x211) = 0x100;
    FUN_01bed4e2(iVar7,param_2,0x90);
    FUN_01a6812c(&local_150,iVar7);
    if (local_150 == 3 && local_14c == 0) {
      *(undefined2 *)(param_2 + 0x211) = 1;
      uVar4 = *(undefined4 *)(param_2 + 0x118);
      uVar6 = *(undefined4 *)(param_2 + 0x11c);
      FUN_01bed4e2(param_2 + 0x220,iVar7,0x88);
      iVar7 = param_2 + 0x120;
      *(undefined1 *)(param_2 + 0x214) = 0;
      FUN_00fac82c(iVar7,0x2000,0x8000,uVar4,uVar6,*puVar3,puVar3[1]);
      *(int *)(param_2 + 0x20c) = iVar7;
      *(int **)(param_2 + 0x218) = (int *)(param_2 + 0x20c);
      goto LAB_01072484;
    }
    local_20c = local_150;
    local_60 = local_140;
    iStack_5c = iStack_13c;
    uStack_58 = local_138;
    iStack_54 = iStack_134;
    local_50 = local_130;
    iStack_4c = iStack_12c;
    uStack_48 = uStack_128;
    iStack_44 = local_124;
    uStack_40 = uStack_120;
    local_3c = local_11c;
    uStack_38 = uStack_118;
    iStack_34 = iStack_114;
    uStack_30 = uStack_110;
    iStack_2c = iStack_10c;
    local_218 = local_104;
    local_78 = local_100;
    iStack_74 = iStack_fc;
    iStack_70 = iStack_f8;
    iStack_6c = iStack_f4;
    iStack_68 = iStack_f0;
    iStack_64 = iStack_ec;
    uVar8 = local_148 >> 8 | local_144 << 0x18;
    uVar5 = local_144 >> 8;
    uVar9 = local_148;
    iVar7 = local_14c;
    local_220 = local_108;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22488);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22488);
  case 3:
    iVar7 = **(int **)(param_2 + 0x218);
LAB_01072484:
    FUN_00ebac0c(&local_150,iVar7,param_3);
    if (local_150 == 4 && local_14c == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar1 = 3;
      goto LAB_01072938;
    }
    uVar9 = local_148 & 0xff;
    uVar8 = CONCAT13((undefined1)local_144,local_148._1_3_);
    local_188 = local_140;
    iStack_184 = iStack_13c;
    uStack_180 = local_138;
    iStack_17c = iStack_134;
    local_20c = local_150;
    local_178 = local_130;
    iStack_174 = iStack_12c;
    uStack_170 = uStack_128;
    iStack_16c = local_124;
    uStack_168 = uStack_120;
    local_164 = local_11c;
    uStack_160 = uStack_118;
    iStack_15c = iStack_114;
    uStack_158 = uStack_110;
    iStack_154 = iStack_10c;
    local_1a0 = local_100;
    iStack_19c = iStack_fc;
    iStack_198 = iStack_f8;
    iStack_194 = iStack_f4;
    iStack_190 = iStack_f0;
    iStack_18c = iStack_ec;
    if (local_150 == 3 && local_14c == 0) {
      if ((local_148 & 1) == 0) {
        FUN_01a71aac(&local_208,0xd,"Missing request message.",0x18);
        if (local_208 != 3 || local_204 != 0) {
          local_20c = local_208;
          local_60 = local_1f8;
          iStack_5c = iStack_1f4;
          uStack_58 = uStack_1f0;
          iStack_54 = iStack_1ec;
          local_50 = local_1e8;
          iStack_4c = iStack_1e4;
          uStack_48 = uStack_1e0;
          iStack_44 = iStack_1dc;
          uStack_40 = uStack_1d8;
          local_3c = local_1d4;
          uStack_38 = uStack_1d0;
          iStack_34 = iStack_1cc;
          uStack_30 = uStack_1c8;
          iStack_2c = iStack_1c4;
          local_220 = local_1c0;
          local_218 = iStack_1bc;
          local_78 = local_1b8;
          iStack_74 = iStack_1b4;
          iStack_70 = iStack_1b0;
          iStack_6c = iStack_1ac;
          iStack_68 = iStack_1a8;
          iStack_64 = iStack_1a4;
          uVar8 = local_200 >> 8 | local_1fc << 0x18;
          uVar5 = local_1fc >> 8;
          uVar9 = local_200;
          iVar7 = local_204;
          goto LAB_01072884;
        }
      }
      *(undefined1 *)(param_2 + 0x211) = 0;
      FUN_01bed4e2(&local_150,param_2 + 0x220,0x88);
      *(undefined1 *)(param_2 + 0x213) = 0;
      FUN_00f07ac8(puVar2,&local_150);
      *(undefined1 *)(param_2 + 0x274) = 0;
      *(undefined4 *)(param_2 + 0x260) = *(undefined4 *)(param_2 + 0x20c);
      goto switchD_01072398_caseD_4;
    }
    local_218 = local_104;
    local_220 = local_108;
    uVar5 = local_144 >> 8;
    local_60 = local_140;
    iStack_5c = iStack_13c;
    uStack_58 = local_138;
    iStack_54 = iStack_134;
    local_50 = local_130;
    iStack_4c = iStack_12c;
    uStack_48 = uStack_128;
    iStack_44 = local_124;
    uStack_40 = uStack_120;
    local_3c = local_11c;
    uStack_38 = uStack_118;
    iStack_34 = iStack_114;
    uStack_30 = uStack_110;
    iStack_2c = iStack_10c;
    local_78 = local_100;
    iStack_74 = iStack_fc;
    iStack_70 = iStack_f8;
    iStack_6c = iStack_f4;
    iStack_68 = iStack_f0;
    iStack_64 = iStack_ec;
    iVar7 = local_14c;
LAB_01072884:
    *(undefined1 *)(param_2 + 0x213) = 0;
    FUN_01071a3c(param_2 + 0x120);
    *(undefined1 *)(param_2 + 0x214) = 0;
    if (*(char *)(param_2 + 0x211) != '\0') {
      FUN_0096a6b0(param_2 + 0x220);
    }
    *(undefined1 *)(param_2 + 0x211) = 0;
    break;
  case 4:
switchD_01072398_caseD_4:
    FUN_00dddd38(&local_150,param_2 + 0x260,param_3);
    if (local_150 == 4 && local_14c == 0) {
      uVar1 = 4;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_01072938;
    }
    local_20c = local_150;
    local_b0 = local_140;
    iStack_ac = iStack_13c;
    uStack_a8 = local_138;
    iStack_a4 = iStack_134;
    local_a0 = local_130;
    iStack_9c = iStack_12c;
    uStack_98 = uStack_128;
    iStack_94 = local_124;
    uStack_90 = uStack_120;
    local_8c = local_11c;
    uStack_88 = uStack_118;
    iStack_84 = iStack_114;
    uStack_80 = uStack_110;
    iStack_7c = iStack_10c;
    local_220 = local_108;
    local_218 = local_104;
    local_c8 = local_100;
    iStack_c4 = iStack_fc;
    iStack_c0 = iStack_f8;
    iStack_bc = iStack_f4;
    iStack_b8 = iStack_f0;
    iStack_b4 = iStack_ec;
    if (local_150 != 3 || local_14c != 0) {
      local_78 = local_100;
      iStack_74 = iStack_fc;
      iStack_70 = iStack_f8;
      iStack_6c = iStack_f4;
      iStack_68 = iStack_f0;
      iStack_64 = iStack_ec;
      local_60 = local_140;
      iStack_5c = iStack_13c;
      uStack_58 = local_138;
      iStack_54 = iStack_134;
      local_50 = local_130;
      iStack_4c = iStack_12c;
      uStack_48 = uStack_128;
      iStack_44 = local_124;
      uStack_40 = uStack_120;
      local_3c = local_11c;
      uStack_38 = uStack_118;
      iStack_34 = iStack_114;
      uStack_30 = uStack_110;
      iStack_2c = iStack_10c;
      FUN_00f9604c(puVar2);
      uVar8 = local_148 >> 8 | local_144 << 0x18;
      uVar5 = local_144 >> 8;
      uVar9 = local_148;
      iVar7 = local_14c;
      goto LAB_01072884;
    }
    if (local_148 != 3 || local_144 != 0) {
      local_148 = local_140;
      local_140 = local_138;
      iStack_13c = iStack_134;
      local_138 = local_130;
      iStack_134 = iStack_12c;
      local_130 = uStack_128;
      iStack_12c = local_124;
      uStack_128 = uStack_120;
      local_124 = local_11c;
      uStack_120 = uStack_118;
      local_11c = iStack_114;
      uStack_118 = uStack_110;
      iStack_114 = iStack_10c;
      FUN_00713444(puVar2);
    }
    iVar7 = 0;
    uVar9 = *puVar2;
    uVar8 = *(uint *)(param_2 + 0x21c);
    local_60 = *(uint *)(param_2 + 0x220);
    iStack_5c = *(int *)(param_2 + 0x224);
    uStack_58 = *(uint *)(param_2 + 0x228);
    iStack_54 = *(int *)(param_2 + 0x22c);
    local_50 = *(uint *)(param_2 + 0x230);
    iStack_4c = *(int *)(param_2 + 0x234);
    uStack_48 = *(uint *)(param_2 + 0x238);
    iStack_44 = *(int *)(param_2 + 0x23c);
    uStack_40 = *(uint *)(param_2 + 0x240);
    local_3c = *(int *)(param_2 + 0x244);
    uStack_38 = *(uint *)(param_2 + 0x248);
    iStack_34 = *(int *)(param_2 + 0x24c);
    uStack_30 = *(uint *)(param_2 + 0x250);
    iStack_2c = *(int *)(param_2 + 0x254);
    local_218 = *(int *)(param_2 + 0x25c);
    local_220 = *(int *)(param_2 + 600);
    *(undefined1 *)(param_2 + 0x213) = 0;
    FUN_01071a3c(param_2 + 0x120);
    uVar5 = uVar8 >> 8;
    *(undefined2 *)(param_2 + 0x211) = 0;
    uVar8 = uVar9 >> 8 | uVar8 << 0x18;
    local_20c = 3;
    *(undefined1 *)(param_2 + 0x214) = 0;
    goto LAB_010728dc;
  }
  if (*(char *)(param_2 + 0x212) != '\0') {
    FUN_005f9b88(param_2 + 0x90);
  }
  *(undefined1 *)(param_2 + 0x212) = 0;
LAB_010728dc:
  *param_1 = local_20c;
  param_1[1] = iVar7;
  param_1[2] = uVar9 & 0xff | uVar8 << 8;
  param_1[3] = uVar5 << 8 | uVar8 >> 0x18;
  param_1[4] = local_60;
  param_1[5] = iStack_5c;
  param_1[6] = uStack_58;
  param_1[7] = iStack_54;
  param_1[8] = local_50;
  param_1[9] = iStack_4c;
  param_1[10] = uStack_48;
  param_1[0xb] = iStack_44;
  param_1[0xc] = uStack_40;
  param_1[0xd] = local_3c;
  param_1[0xe] = uStack_38;
  param_1[0xf] = iStack_34;
  param_1[0x10] = uStack_30;
  param_1[0x11] = iStack_2c;
  param_1[0x12] = local_220;
  param_1[0x13] = local_218;
  param_1[0x14] = local_78;
  param_1[0x15] = iStack_74;
  param_1[0x16] = iStack_70;
  param_1[0x17] = iStack_6c;
  param_1[0x18] = iStack_68;
  param_1[0x19] = iStack_64;
  uVar1 = 1;
LAB_01072938:
  *(undefined1 *)(param_2 + 0x210) = uVar1;
  return;
}

