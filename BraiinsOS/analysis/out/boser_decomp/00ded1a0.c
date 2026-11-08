// FUN_00ded1a0 @ 00ded1a0 size=1048 calls_out=6 calls_in=3
// strings: 

void FUN_00ded1a0(uint *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_r4;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint local_32c;
  undefined1 auStack_318 [184];
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined2 local_184;
  undefined1 local_182;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  piVar6 = (int *)param_2[1];
  piVar5 = (int *)param_2[3];
  if (0x2762760 < (uint)((int)piVar5 - (int)piVar6)) {
    uVar10 = 0;
LAB_00ded1d0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar10,unaff_r4);
  }
  uVar9 = (uint)((int)piVar5 - (int)piVar6) >> 2;
  unaff_r4 = uVar9 * 0xd0;
  uVar8 = 0;
  if (unaff_r4 == 0) {
    uVar3 = 4;
    uVar9 = 0;
  }
  else {
    uVar10 = 4;
    uVar3 = FUN_01298504(unaff_r4,4);
    if (uVar3 == 0) goto LAB_00ded1d0;
  }
  uVar10 = *param_2;
  uVar4 = param_2[2];
  if (piVar6 != piVar5) {
    uVar8 = 0;
    local_32c = uVar3;
    do {
      piVar7 = piVar6 + 1;
      iVar11 = *piVar6;
      if (*(int *)(iVar11 + 0xc4) == -0x80000000) {
        local_248 = 0x80000000;
      }
      else {
        FUN_006666fc(&local_248,*(undefined4 *)(iVar11 + 200),*(undefined4 *)(iVar11 + 0xcc));
      }
      FUN_006666fc(&local_c8,*(undefined4 *)(iVar11 + 4),*(undefined4 *)(iVar11 + 8));
      FUN_015e8ad4(&local_b8,*(undefined4 *)(iVar11 + 0x10),*(undefined4 *)(iVar11 + 0x14));
      local_ac = *(undefined4 *)(iVar11 + 0x18);
      local_a8 = *(undefined4 *)(iVar11 + 0x1c);
      local_a4 = CONCAT22(CONCAT11(local_a4._3_1_,*(undefined1 *)(iVar11 + 0x22)),
                          *(undefined2 *)(iVar11 + 0x20));
      FUN_015e8ad4(&local_a0,*(undefined4 *)(iVar11 + 0x28),*(undefined4 *)(iVar11 + 0x2c));
      local_94 = *(undefined4 *)(iVar11 + 0x30);
      local_90 = *(undefined4 *)(iVar11 + 0x34);
      local_8c = CONCAT22(CONCAT11(local_8c._3_1_,*(undefined1 *)(iVar11 + 0x3a)),
                          *(undefined2 *)(iVar11 + 0x38));
      FUN_015e8ad4(&local_88,*(undefined4 *)(iVar11 + 0x40),*(undefined4 *)(iVar11 + 0x44));
      local_7c = *(undefined4 *)(iVar11 + 0x48);
      local_78 = *(undefined4 *)(iVar11 + 0x4c);
      local_74 = CONCAT22(CONCAT11(local_74._3_1_,*(undefined1 *)(iVar11 + 0x52)),
                          *(undefined2 *)(iVar11 + 0x50));
      FUN_015e8ad4(&local_70,*(undefined4 *)(iVar11 + 0x58),*(undefined4 *)(iVar11 + 0x5c));
      local_64 = *(undefined4 *)(iVar11 + 0x60);
      local_60 = *(undefined4 *)(iVar11 + 100);
      local_5c = CONCAT22(CONCAT11(local_5c._3_1_,*(undefined1 *)(iVar11 + 0x6a)),
                          *(undefined2 *)(iVar11 + 0x68));
      FUN_015e8ad4(&local_58,*(undefined4 *)(iVar11 + 0x70),*(undefined4 *)(iVar11 + 0x74));
      local_4c = *(undefined4 *)(iVar11 + 0x78);
      local_48 = *(undefined4 *)(iVar11 + 0x7c);
      local_44 = CONCAT22(CONCAT11(local_44._3_1_,*(undefined1 *)(iVar11 + 0x82)),
                          *(undefined2 *)(iVar11 + 0x80));
      FUN_015e8ad4(&local_40,*(undefined4 *)(iVar11 + 0x88),*(undefined4 *)(iVar11 + 0x8c));
      local_34 = *(undefined4 *)(iVar11 + 0x90);
      local_30 = *(undefined4 *)(iVar11 + 0x94);
      local_2c = CONCAT22(CONCAT11(local_2c._3_1_,*(undefined1 *)(iVar11 + 0x9a)),
                          *(undefined2 *)(iVar11 + 0x98));
      FUN_015e8ad4(&local_238,*(undefined4 *)(iVar11 + 0xa0),*(undefined4 *)(iVar11 + 0xa4));
      local_22c = *(undefined4 *)(iVar11 + 0xa8);
      local_228 = *(undefined4 *)(iVar11 + 0xac);
      uVar2 = *(undefined2 *)(iVar11 + 0xb4);
      uVar1 = *(undefined1 *)(iVar11 + 0xb6);
      local_224 = CONCAT22(CONCAT11(local_224._3_1_,*(undefined1 *)(iVar11 + 0xb2)),
                           *(undefined2 *)(iVar11 + 0xb0));
      local_180 = local_c8;
      uStack_17c = uStack_c4;
      uStack_178 = uStack_c0;
      local_174 = local_b8;
      uStack_170 = uStack_b4;
      uStack_16c = uStack_b0;
      uStack_168 = local_ac;
      uStack_164 = local_a8;
      uStack_160 = local_a4;
      local_15c = local_a0;
      uStack_158 = uStack_9c;
      uStack_154 = uStack_98;
      uStack_150 = local_94;
      uStack_14c = local_90;
      uStack_148 = local_8c;
      local_144 = local_88;
      uStack_140 = uStack_84;
      uStack_13c = uStack_80;
      uStack_138 = local_7c;
      uStack_134 = local_78;
      uStack_130 = local_74;
      local_12c = local_70;
      uStack_128 = uStack_6c;
      uStack_124 = uStack_68;
      uStack_120 = local_64;
      uStack_11c = local_60;
      uStack_118 = local_5c;
      local_114 = local_58;
      uStack_110 = uStack_54;
      uStack_10c = uStack_50;
      uStack_108 = local_4c;
      uStack_104 = local_48;
      uStack_100 = local_44;
      local_fc = local_40;
      uStack_f8 = uStack_3c;
      uStack_f4 = uStack_38;
      uStack_f0 = local_34;
      uStack_ec = local_30;
      uStack_e8 = local_2c;
      local_e4 = local_238;
      uStack_e0 = uStack_234;
      uStack_dc = uStack_230;
      uStack_d0 = local_224;
      uStack_d8 = local_22c;
      uStack_d4 = local_228;
      FUN_01bed4e2(&local_238,&local_180,0xb4);
      local_184 = uVar2;
      local_182 = uVar1;
      FUN_006666fc(&local_180,*(undefined4 *)(iVar11 + 0xbc),*(undefined4 *)(iVar11 + 0xc0));
      uStack_254 = local_248;
      uStack_250 = uStack_244;
      uStack_24c = uStack_240;
      FUN_01bed4e2(auStack_318,&local_238,0xb8);
      local_260 = local_180;
      uStack_25c = uStack_17c;
      uStack_258 = uStack_178;
      FUN_01bed4e2(local_32c,auStack_318,0xd0);
      local_32c = local_32c + 0xd0;
      uVar8 = uVar8 + 1;
      piVar6 = piVar7;
    } while (piVar7 != piVar5);
  }
  FUN_0132b958(uVar4,uVar10,4,4);
  *param_1 = uVar9;
  param_1[1] = uVar3;
  param_1[2] = uVar8;
  return;
}

