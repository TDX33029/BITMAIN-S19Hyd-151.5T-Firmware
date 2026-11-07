// FUN_01834764 @ 01834764 size=1488 calls_out=10 calls_in=1
// strings: output != NULL | ell_a64 != NULL | ell_b64 != NULL | seckey32 != NULL | hashfp != NULL

void FUN_01834764(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 code *param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_288 [4];
  uint local_284;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  uint local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  undefined1 auStack_1e4 [40];
  undefined1 auStack_1bc [40];
  undefined1 auStack_194 [40];
  undefined1 auStack_16c [40];
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  undefined1 auStack_11c [40];
  undefined1 auStack_f4 [40];
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined1 auStack_78 [44];
  undefined1 auStack_4c [32];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_2 == 0) {
    (**(code **)(param_1 + 0xa0))("output != NULL",*(undefined4 *)(param_1 + 0xa4));
    uVar10 = extraout_r1;
  }
  else if (param_3 == 0) {
    (**(code **)(param_1 + 0xa0))("ell_a64 != NULL",*(undefined4 *)(param_1 + 0xa4));
    uVar10 = extraout_r1_00;
  }
  else if (param_4 == 0) {
    (**(code **)(param_1 + 0xa0))("ell_b64 != NULL",*(undefined4 *)(param_1 + 0xa4));
    uVar10 = extraout_r1_01;
  }
  else if (param_5 == 0) {
    (**(code **)(param_1 + 0xa0))("seckey32 != NULL",*(undefined4 *)(param_1 + 0xa4));
    uVar10 = extraout_r1_02;
  }
  else {
    if (param_7 != (code *)0x0) {
      if (param_6 == 0) {
        iVar12 = param_4;
      }
      else {
        iVar12 = param_3;
      }
      FUN_0181edb4(auStack_194,iVar12);
      FUN_0181edb4(auStack_16c,iVar12 + 0x20);
      FUN_01827be4(auStack_1e4,auStack_1bc,auStack_194,auStack_16c);
      FUN_0182582c(&local_280,param_5,auStack_288);
      uVar8 = local_264;
      uVar7 = local_268;
      uVar6 = local_26c;
      uVar5 = local_270;
      uVar4 = local_274;
      uVar3 = local_278;
      uVar2 = local_27c;
      uVar1 = local_280;
      local_284 = (uint)(((((((local_280 == 0 && local_27c == 0) && local_278 == 0) &&
                            local_274 == 0) && local_270 == 0) && local_26c == 0) && local_268 == 0)
                        && local_264 == 0);
      uVar11 = local_284 - 1;
      local_27c = local_27c & uVar11;
      local_280 = local_280 & uVar11 | local_284;
      local_270 = local_270 & uVar11;
      local_278 = local_278 & uVar11;
      local_274 = local_274 & uVar11;
      local_26c = local_26c & uVar11;
      local_268 = local_268 & uVar11;
      local_264 = uVar11 & local_264;
      FUN_0181f914(&local_238,auStack_1e4);
      FUN_0181f130(&local_238,&local_238,auStack_1e4);
      FUN_0181f914(&local_c8,auStack_1bc);
      local_c8 = local_c8 * 7;
      local_c4 = local_c4 * 7;
      local_c0 = local_c0 * 7;
      local_bc = local_bc * 7;
      local_b8 = local_b8 * 7;
      local_b4 = local_b4 * 7;
      local_b0 = local_b0 * 7;
      local_ac = local_ac * 7;
      local_a8 = local_a8 * 7;
      local_a4 = local_a4 * 7;
      FUN_0181f130(&local_c8,&local_c8,auStack_1bc);
      local_238 = local_238 + local_c8;
      local_234 = local_234 + local_c4;
      local_230 = local_230 + local_c0;
      local_22c = local_22c + local_bc;
      local_228 = local_228 + local_b8;
      local_224 = local_224 + local_b4;
      local_220 = local_220 + local_b0;
      local_21c = local_21c + local_ac;
      local_218 = local_218 + local_a8;
      local_214 = local_214 + local_a4;
      FUN_0181f130(auStack_11c,&local_238,auStack_1e4);
      FUN_0181f914(auStack_f4,&local_238);
      local_cc = 0;
      FUN_0182d210(&local_c8,auStack_11c,&local_280);
      FUN_0181f914(&local_210,auStack_78);
      FUN_0181f130(&local_210,&local_210,&local_238);
      FUN_0181f130(&local_210,&local_210,auStack_1bc);
      local_144 = local_210;
      local_140 = local_20c;
      local_13c = local_208;
      local_138 = local_204;
      local_134 = local_200;
      uStack_130 = local_1fc;
      uStack_12c = local_1f8;
      local_128 = local_1f4;
      local_124 = local_1f0;
      local_120 = local_1ec;
      FUN_0181e7cc(&local_144);
      local_260 = (local_144 | local_140 << 0x1a) & 0x3fffffff;
      local_250 = (uStack_130 & 0xfffff) << 10 | local_134 >> 0x10;
      local_254 = (local_134 & 0xffff) << 0xe | local_138 >> 0xc;
      local_24c = (uStack_12c & 0xffffff) << 6 | uStack_130 >> 0x14;
      local_25c = (local_13c & 0xff) << 0x16 | local_140 >> 4;
      local_258 = (local_138 & 0xfff) << 0x12 | local_13c >> 8;
      local_248 = (local_124 << 0x1c | local_128 << 2) & 0x3fffffff | uStack_12c >> 0x18;
      local_244 = (local_120 & 0x3f) << 0x18 | local_124 >> 2;
      local_240 = local_120 >> 6;
      FUN_01824f24(&local_260,&DAT_00563c04);
      local_1ec = local_240 << 6 | local_244 >> 0x18;
      local_1f0 = (local_244 & 0xffffff) << 2 | local_248 >> 0x1c;
      local_20c = (local_25c & 0x3fffff) << 4 | local_260 >> 0x1a;
      local_210 = local_260 & 0x3ffffff;
      local_208 = (local_258 & 0x3ffff) << 8 | local_25c >> 0x16;
      local_204 = (local_254 & 0x3fff) << 0xc | local_258 >> 0x12;
      local_200 = (local_250 & 0x3ff) << 0x10 | local_254 >> 0xe;
      local_1fc = (local_24c & 0x3f) << 0x14 | local_250 >> 10;
      local_1f4 = (local_248 & 0xfffffff) >> 2;
      local_1f8 = (local_248 & 3) << 0x18 | local_24c >> 6;
      FUN_0181f130(&local_144,&local_c8,&local_210);
      FUN_0181e7cc(&local_144);
      FUN_0181ef6c(auStack_4c,&local_144);
      uVar13 = (*param_7)(param_2,auStack_4c,param_3,param_4,param_8);
      uVar10 = (undefined4)((ulonglong)uVar13 >> 0x20);
      if ((int)uVar13 == 0 ||
          ((((((uVar1 == 0 && uVar2 == 0) && uVar3 == 0) && uVar4 == 0) && uVar5 == 0) && uVar6 == 0
           ) && uVar7 == 0) && uVar8 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      goto LAB_01834c78;
    }
    (**(code **)(param_1 + 0xa0))("hashfp != NULL",*(undefined4 *)(param_1 + 0xa4));
    uVar10 = extraout_r1_03;
  }
  uVar9 = 0;
LAB_01834c78:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar9,uVar10,local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

