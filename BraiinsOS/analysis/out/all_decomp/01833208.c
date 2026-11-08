// FUN_01833208 @ 01833208 size=1116 calls_out=10 calls_in=1
// strings: keypair != NULL | rustsecp256k1_v0_9_2_ecmult_gen_context_is_built(&ctx->ecmult_gen_ctx) | seckey32 != NULL

uint FUN_01833208(int *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint local_174;
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
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
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
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_2 == (uint *)0x0) {
    (*(code *)param_1[0x28])("keypair != NULL",param_1[0x29]);
  }
  else {
    FUN_016dd606(param_2,0,0x60,0);
    if (*param_1 == 0) {
      (*(code *)param_1[0x28])
                ("rustsecp256k1_v0_9_2_ecmult_gen_context_is_built(&ctx->ecmult_gen_ctx)",
                 param_1[0x29]);
    }
    else {
      if (param_3 != 0) {
        FUN_0182582c(&local_170,param_3,&local_174);
        uVar4 = (uint)(local_174 == 0);
        if (((((((local_170 == 0 && local_16c == 0) && local_168 == 0) && local_164 == 0) &&
              local_160 == 0) && local_15c == 0) && local_158 == 0) && local_154 == 0) {
          uVar4 = 0;
        }
        uVar5 = uVar4 ^ 1;
        uVar1 = uVar5 - 1;
        local_164 = local_164 & uVar1;
        local_170 = local_170 & uVar1 | uVar5;
        local_16c = uVar1 & local_16c;
        local_168 = uVar1 & local_168;
        local_160 = uVar1 & local_160;
        local_15c = uVar1 & local_15c;
        local_158 = uVar1 & local_158;
        local_154 = uVar1 & local_154;
        local_174 = uVar5;
        FUN_0182b61c(param_1,&local_a8,&local_170);
        local_ac = local_30;
        local_124 = local_58;
        local_120 = local_54;
        local_11c = local_50;
        local_118 = local_4c;
        local_114 = local_48;
        local_110 = local_44;
        local_10c = local_40;
        local_108 = local_3c;
        local_104 = local_38;
        local_100 = local_34;
        FUN_0181e7cc(&local_124);
        local_150 = (local_124 | local_120 << 0x1a) & 0x3fffffff;
        local_13c = (local_10c & 0xffffff) << 6 | local_110 >> 0x14;
        local_140 = (local_110 & 0xfffff) << 10 | local_114 >> 0x10;
        local_144 = (local_114 & 0xffff) << 0xe | local_118 >> 0xc;
        local_14c = (local_11c & 0xff) << 0x16 | local_120 >> 4;
        local_148 = (local_118 & 0xfff) << 0x12 | local_11c >> 8;
        local_138 = (local_104 << 0x1c | local_108 << 2) & 0x3fffffff | local_10c >> 0x18;
        local_130 = local_100 >> 6;
        local_134 = (local_100 & 0x3f) << 0x18 | local_104 >> 2;
        FUN_01824f24(&local_150,&DAT_00563c04);
        local_34 = local_130 << 6 | local_134 >> 0x18;
        local_38 = (local_134 & 0xffffff) << 2 | local_138 >> 0x1c;
        local_58 = local_150 & 0x3ffffff;
        local_54 = (local_14c & 0x3fffff) << 4 | local_150 >> 0x1a;
        local_50 = (local_148 & 0x3ffff) << 8 | local_14c >> 0x16;
        local_4c = (local_144 & 0x3fff) << 0xc | local_148 >> 0x12;
        local_48 = (local_140 & 0x3ff) << 0x10 | local_144 >> 0xe;
        local_44 = (local_13c & 0x3f) << 0x14 | local_140 >> 10;
        local_3c = (local_138 & 0xfffffff) >> 2;
        local_40 = (local_138 & 3) << 0x18 | local_13c >> 6;
        FUN_0181f914(&local_150);
        FUN_0181f130(&local_124,&local_58,&local_150);
        FUN_0181f130(&local_a8,&local_a8,&local_150);
        FUN_0181f130(&local_80,&local_80,&local_124);
        local_fc = local_a8;
        uStack_f8 = uStack_a4;
        uStack_f4 = uStack_a0;
        uStack_f0 = uStack_9c;
        local_ec = local_98;
        uStack_e8 = uStack_94;
        uStack_e4 = uStack_90;
        uStack_e0 = uStack_8c;
        local_dc = local_88;
        uStack_d8 = uStack_84;
        local_d4 = local_80;
        uStack_d0 = uStack_7c;
        uStack_cc = uStack_78;
        uStack_c8 = uStack_74;
        local_c4 = local_70;
        uStack_c0 = uStack_6c;
        uStack_bc = uStack_68;
        uStack_b8 = uStack_64;
        local_b4 = local_60;
        uStack_b0 = uStack_5c;
        FUN_0181fef0(param_2,&local_170);
        FUN_0182f990(param_2 + 8,&local_fc);
        uVar1 = uVar5 - 1 & 0xff;
        puVar2 = param_2;
        do {
          puVar3 = puVar2 + 1;
          *puVar2 = *puVar2 & (uVar1 | uVar1 << 8 | uVar1 << 0x10 | (uVar5 - 1) * 0x1000000);
          puVar2 = puVar3;
        } while (puVar3 != param_2 + 0x18);
        goto LAB_018335d4;
      }
      (*(code *)param_1[0x28])("seckey32 != NULL",param_1[0x29]);
    }
  }
  uVar4 = 0;
LAB_018335d4:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar4;
}

