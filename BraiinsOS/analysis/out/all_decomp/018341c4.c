// FUN_018341c4 @ 018341c4 size=1416 calls_out=9 calls_in=1
// strings: pubkey != NULL | ell64 != NULL

void FUN_018341c4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  undefined1 auStack_198 [40];
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [40];
  int local_f8 [10];
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_2 == 0) {
    (**(code **)(param_1 + 0xa0))("pubkey != NULL",*(undefined4 *)(param_1 + 0xa4));
    uVar3 = extraout_r1_00;
  }
  else {
    if (param_3 != 0) {
      FUN_0181edb4(auStack_198,param_3);
      FUN_0181edb4(&local_170,param_3 + 0x20);
      local_170 = (local_14c >> 0x16) * 0x3d1 + local_170;
      local_16c = local_16c + (local_14c >> 0x16) * 0x40 + (local_170 >> 0x1a);
      uVar6 = local_170 & 0x3ffffff;
      uVar7 = local_168 + (local_16c >> 0x1a);
      local_16c = local_16c & 0x3ffffff;
      local_164 = local_164 + (uVar7 >> 0x1a);
      uVar11 = local_160 + (local_164 >> 0x1a);
      local_164 = local_164 & 0x3ffffff;
      local_168 = uVar7 & 0x3ffffff;
      uVar10 = local_15c + (uVar11 >> 0x1a);
      local_160 = uVar11 & 0x3ffffff;
      uVar4 = local_158 + (uVar10 >> 0x1a);
      local_15c = uVar10 & 0x3ffffff;
      uVar5 = local_154 + (uVar4 >> 0x1a);
      local_158 = uVar4 & 0x3ffffff;
      uVar1 = local_150 + (uVar5 >> 0x1a);
      local_154 = uVar5 & 0x3ffffff;
      local_14c = (local_14c & 0x3fffff) + (uVar1 >> 0x1a);
      local_150 = uVar1 & 0x3ffffff;
      iVar8 = local_16c + (uVar6 + 0x3d1 >> 0x1a);
      uVar9 = iVar8 + 0x40;
      if ((local_14c == 0x3fffff &&
          (uVar7 & local_164 & uVar11 & uVar10 & uVar4 & uVar5 & uVar1) == 0x3ffffff) &&
          (0x3fffffe < uVar9 && iVar8 != 0x3ffffbf) || local_14c >> 0x16 != 0) {
        local_168 = local_168 + (uVar9 >> 0x1a);
        local_16c = uVar9 & 0x3ffffff;
        local_164 = local_164 + (local_168 >> 0x1a);
        uVar6 = uVar6 + 0x3d1 & 0x3ffffff;
        local_168 = local_168 & 0x3ffffff;
        local_160 = local_160 + (local_164 >> 0x1a);
        local_164 = local_164 & 0x3ffffff;
        local_15c = local_15c + (local_160 >> 0x1a);
        local_160 = local_160 & 0x3ffffff;
        local_158 = local_158 + (local_15c >> 0x1a);
        local_15c = local_15c & 0x3ffffff;
        local_154 = local_154 + (local_158 >> 0x1a);
        local_158 = local_158 & 0x3ffffff;
        uVar1 = local_150 + (local_154 >> 0x1a);
        local_154 = local_154 & 0x3ffffff;
        local_150 = uVar1 & 0x3ffffff;
        local_14c = local_14c + (uVar1 >> 0x1a) & 0x3fffff;
      }
      local_d0 = 0;
      local_cc = 0;
      local_c8 = 0;
      local_c4 = 0;
      local_c0 = 0;
      local_bc = 0;
      local_b8 = 0;
      local_b4 = 0;
      local_b0 = 0;
      local_ac = 0;
      local_170 = uVar6;
      FUN_01827be4(&local_80,&local_d0,auStack_198,&local_170);
      local_a4 = local_cc;
      local_a0 = local_c8;
      local_9c = local_c4;
      local_98 = local_c0;
      local_94 = local_bc;
      local_90 = local_b8;
      local_8c = local_b4;
      local_88 = local_b0;
      local_84 = local_ac;
      local_a8 = local_d0;
      FUN_0181ea1c(&local_a8);
      local_1bc = (local_a8 | local_a4 << 0x1a) & 0x3fffffff;
      local_1a8 = (local_90 & 0xffffff) << 6 | local_94 >> 0x14;
      local_1b0 = (local_98 & 0xffff) << 0xe | local_9c >> 0xc;
      local_1b4 = (local_9c & 0xfff) << 0x12 | local_a0 >> 8;
      local_1a4 = (local_88 << 0x1c | local_8c << 2) & 0x3fffffff | local_90 >> 0x18;
      local_1b8 = (local_a0 & 0xff) << 0x16 | local_a4 >> 4;
      local_1ac = (local_94 & 0xfffff) << 10 | local_98 >> 0x10;
      local_1a0 = (local_84 & 0x3f) << 0x18 | local_88 >> 2;
      local_19c = local_84 >> 6;
      FUN_018245a4(&local_1bc,&DAT_00563c04);
      local_cc = (local_1b8 & 0x3fffff) << 4 | local_1bc >> 0x1a;
      local_c8 = (local_1b4 & 0x3ffff) << 8 | local_1b8 >> 0x16;
      local_c4 = (local_1b0 & 0x3fff) << 0xc | local_1b4 >> 0x12;
      local_d0 = local_1bc & 0x3ffffff;
      local_c0 = (local_1ac & 0x3ff) << 0x10 | local_1b0 >> 0xe;
      local_bc = (local_1a8 & 0x3f) << 0x14 | local_1ac >> 10;
      local_b8 = (local_1a4 & 3) << 0x18 | local_1a8 >> 6;
      local_ac = local_1a0 >> 0x18 | local_19c << 6;
      local_b4 = (local_1a4 & 0xfffffff) >> 2;
      local_b0 = (local_1a0 & 0xffffff) << 2 | local_1a4 >> 0x1c;
      FUN_0181f130(&local_148,&local_80,&local_d0);
      local_80 = local_148;
      uStack_7c = uStack_144;
      uStack_78 = uStack_140;
      uStack_74 = uStack_13c;
      local_70 = local_138;
      uStack_6c = uStack_134;
      uStack_68 = uStack_130;
      uStack_64 = uStack_12c;
      local_60 = local_128;
      uStack_5c = uStack_124;
      FUN_0181f914(auStack_120,&local_148);
      FUN_0181f130(local_f8,&local_148,auStack_120);
      local_f8[0] = local_f8[0] + 7;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      FUN_01825fac(&local_58,local_f8);
      FUN_0181ea1c(&local_58);
      if (((uVar6 ^ local_58) & 1) != 0) {
        local_54 = 0xffffefc - local_54;
        local_58 = 0xffff0bc - local_58;
        local_34 = 0xfffffc - local_34;
        local_50 = 0xffffffc - local_50;
        local_4c = 0xffffffc - local_4c;
        local_48 = 0xffffffc - local_48;
        local_44 = 0xffffffc - local_44;
        local_40 = 0xffffffc - local_40;
        local_3c = 0xffffffc - local_3c;
        local_38 = 0xffffffc - local_38;
      }
      FUN_0182f990(param_2,&local_80);
      uVar2 = 1;
      uVar3 = extraout_r1;
      goto LAB_0183468c;
    }
    (**(code **)(param_1 + 0xa0))("ell64 != NULL",*(undefined4 *)(param_1 + 0xa4));
    uVar3 = extraout_r1_01;
  }
  uVar2 = 0;
LAB_0183468c:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,uVar3,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

