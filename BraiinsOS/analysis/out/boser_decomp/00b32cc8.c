// FUN_00b32cc8 @ 00b32cc8 size=1556 calls_out=17 calls_in=2
// strings: rambo_mode | rambo_mode | rambo_mode | rambo_mode | rambo_mode

void FUN_00b32cc8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  char *pcVar16;
  undefined4 uVar17;
  int local_2cc;
  int local_2bc;
  uint local_2b0;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  uint local_294;
  uint local_290;
  uint uStack_28c;
  uint uStack_288;
  uint uStack_284;
  uint local_280;
  uint uStack_27c;
  uint uStack_278;
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  undefined4 local_268;
  undefined4 local_264;
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  uint uStack_254;
  uint uStack_250;
  uint uStack_24c;
  uint local_248;
  uint local_244;
  uint local_240;
  uint uStack_23c;
  uint uStack_238;
  uint local_234;
  uint uStack_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  uint local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 local_140;
  undefined1 auStack_134 [12];
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 local_48;
  undefined4 local_44;
  
  FUN_019a5900(&local_1b0);
  if (local_1b0 == 0x80000000) {
    cVar4 = FUN_005ef5e8(&local_1ac);
    if (cVar4 != '\0') {
      local_2a8 = local_1ac;
      local_2a4 = local_1a8;
      uVar5 = FUN_012749e4(&local_2a8);
      *param_1 = 0;
      param_1[1] = uVar5;
      return;
    }
    FUN_0069263c(local_1ac,local_1a8);
    local_2b0 = 0;
    uVar5 = 1;
    uVar11 = 0;
  }
  else {
    local_2b0 = local_1b0;
    uVar5 = local_1ac;
    uVar11 = local_1a8;
  }
  FUN_01a42a34(&local_248,uVar5,uVar11);
  uVar13 = uStack_238;
  uVar11 = uStack_23c;
  local_e0 = local_234;
  local_dc = uStack_230;
  local_d8 = uStack_22c;
  uStack_d4 = uStack_228;
  uStack_d0 = uStack_224;
  uStack_cc = uStack_220;
  local_44 = local_218;
  local_48 = local_21c;
  if (local_248 != 4) {
    local_17c = local_214;
    uStack_178 = uStack_210;
    uStack_174 = uStack_20c;
    uStack_170 = uStack_208;
    uStack_16c = uStack_204;
    local_168 = local_200;
    uStack_164 = uStack_1fc;
    uStack_160 = uStack_1f8;
    uStack_15c = uStack_1f4;
    uStack_158 = uStack_1f0;
    local_154 = local_1ec;
    uStack_150 = uStack_1e8;
    uStack_14c = uStack_1e4;
    uStack_148 = uStack_1e0;
    uStack_144 = uStack_1dc;
    local_128 = local_234;
    uStack_124 = uStack_230;
    uStack_120 = uStack_22c;
    uStack_11c = uStack_228;
    uStack_118 = uStack_224;
    uStack_114 = uStack_220;
    local_19c = local_234;
    uStack_198 = uStack_230;
    uStack_194 = uStack_22c;
    uStack_190 = uStack_228;
    uStack_18c = uStack_224;
    local_188 = uStack_220;
    local_140 = 0;
    local_1a0 = uStack_238;
    local_1ac = local_244;
    local_180 = local_218;
    local_184 = local_21c;
    local_1a4 = uStack_23c;
    local_1a8 = local_240;
    local_1b0 = local_248;
    FUN_01a56a10(auStack_134,&local_1b0);
                    /* WARNING: Could not recover jumptable at 0x00b32e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00b32e84 + *(int *)(&DAT_00b32e84 + local_248 * 4)))((uint)&local_1b0 | 4);
    return;
  }
  local_128 = local_234;
  uStack_124 = uStack_230;
  uStack_120 = uStack_22c;
  uStack_11c = uStack_228;
  uStack_118 = uStack_224;
  uStack_114 = uStack_220;
  local_260 = local_234;
  uStack_25c = uStack_230;
  uStack_258 = uStack_22c;
  uStack_254 = uStack_228;
  uStack_250 = uStack_224;
  uStack_24c = uStack_220;
  local_264 = local_218;
  local_268 = local_21c;
  if (local_244 == 2) {
    local_280 = local_234;
    uStack_27c = uStack_230;
    uStack_278 = uStack_22c;
    uStack_274 = uStack_228;
    uStack_270 = uStack_224;
    uStack_26c = uStack_220;
    if (uStack_23c != 0) {
      local_298 = local_234;
      local_294 = uStack_230;
      local_290 = uStack_22c;
      uStack_28c = uStack_228;
      uStack_288 = uStack_224;
      uStack_284 = uStack_220;
      local_29c = uStack_238;
      local_2a0 = uStack_23c;
      if (uStack_230 != 0) {
        pcVar16 = "rambo_mode";
        uVar17 = 10;
        uVar6 = FUN_01a60560();
        uVar10 = uVar6 >> 0x19;
        local_2cc = 0;
        while( true ) {
          uVar6 = uVar13 & uVar6;
          uVar15 = *(uint *)(uVar11 + uVar6);
          uVar7 = uVar15 ^ uVar10 * 0x1010101;
          uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
          while (uVar7 != 0) {
            uVar8 = uVar7 >> 8;
            uVar1 = uVar7 >> 0x10;
            uVar2 = uVar7 >> 0x18;
            uVar3 = uVar7 << 0x18;
            uVar7 = uVar7 - 1 & uVar7;
            uVar8 = uVar6 + ((uint)LZCOUNT(uVar3 | (uVar8 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                           uVar2) >> 3) & uVar13;
            iVar9 = (uVar11 - 0x28) + uVar8 * -0x28;
            if ((*(int *)(iVar9 + 8) == 10) &&
               (iVar9 = thunk_FUN_01bed842("rambo_mode",*(undefined4 *)(iVar9 + 4),10,uVar13,pcVar16
                                           ,uVar17), iVar9 == 0)) {
              iVar9 = uVar11 + uVar8 * -0x28;
              if (*(int *)(iVar9 + -0x18) != 3) goto LAB_00b33600;
              uVar10 = *(uint *)(iVar9 + -0x10);
              if (*(uint *)(iVar9 + -0xc) != 0 || *(uint *)(iVar9 + -0xc) < (uint)(2 < uVar10)) {
                uVar6 = FUN_01a60560(uStack_22c,uStack_228,uStack_224,uStack_220,"rambo_mode",10);
                uVar10 = uVar6 >> 0x19;
                local_2bc = 0;
                goto LAB_00b334e4;
              }
              uVar17 = *(undefined4 *)(&DAT_01d30dec + uVar10 * 4);
              uVar13 = *(uint *)(&DAT_00535344 + uVar10 * 4);
              uVar11 = thunk_FUN_01be5118(10);
              if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,10);
              }
              FUN_01bed4e2(uVar11,"rambo_mode",10);
              local_d8 = 10;
              local_e0 = 10;
              local_dc = uVar11;
              uVar11 = FUN_01298504(uVar13,1);
              if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,uVar13);
              }
              FUN_01bed4e2(uVar11,uVar17,uVar13);
              local_1b0 = 2;
              local_1ac = uVar13;
              local_1a8 = uVar11;
              local_1a4 = uVar13;
              FUN_01274dcc(&local_248,&local_2a0,&local_e0,&local_1b0);
              FUN_0126e3b0(&local_248);
              goto LAB_00b33600;
            }
          }
          if ((uVar15 & 0x80808080 & uVar15 << 1) != 0) break;
          local_2cc = local_2cc + 4;
          uVar6 = uVar6 + local_2cc;
        }
      }
      goto LAB_00b33600;
    }
  }
  else {
    local_1ac = local_240;
    local_1a4 = uStack_238;
    local_1a8 = uStack_23c;
    local_1b0 = local_244;
    local_1a0 = local_234;
    local_19c = uStack_230;
    uStack_198 = uStack_22c;
    uStack_194 = uStack_228;
    uStack_190 = uStack_224;
    uStack_18c = uStack_220;
    local_184 = local_218;
    local_188 = local_21c;
    uVar13 = FUN_01274a38();
  }
  *param_1 = 0;
  param_1[1] = uVar13;
LAB_00b33614:
  FUN_019bb7e0(local_2b0,uVar5);
  return;
LAB_00b334e4:
  uVar6 = uVar13 & uVar6;
  uVar15 = *(uint *)(uVar11 + uVar6);
  uVar7 = uVar15 ^ uVar10 * 0x1010101;
  uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
  while (uVar7 != 0) {
    uVar8 = uVar7 >> 8;
    uVar1 = uVar7 >> 0x10;
    uVar2 = uVar7 >> 0x18;
    uVar3 = uVar7 << 0x18;
    uVar7 = uVar7 - 1 & uVar7;
    uVar8 = uVar6 + ((uint)LZCOUNT(uVar3 | (uVar8 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2) >>
                    3) & uVar13;
    iVar9 = (uVar11 - 0x28) + uVar8 * -0x28;
    if ((*(int *)(iVar9 + 8) == 10) &&
       (iVar9 = thunk_FUN_01bed842("rambo_mode",*(undefined4 *)(iVar9 + 4),10), iVar9 == 0)) {
      iVar9 = uVar11 + uVar8 * -0x28;
      FUN_0126f444(&local_2a0,iVar9);
      uVar11 = *(uint *)(iVar9 + -0x18);
      uVar17 = *(undefined4 *)(iVar9 + -0x28);
      uVar14 = *(undefined4 *)(iVar9 + -0x24);
      local_248 = *(uint *)(iVar9 + -0x14);
      local_244 = *(uint *)(iVar9 + -0x10);
      local_240 = *(uint *)(iVar9 + -0xc);
      uStack_23c = *(uint *)(iVar9 + -8);
      uStack_238 = *(uint *)(iVar9 + -4);
      local_1b0 = 9;
      if (uVar11 != 9) {
        puVar12 = (uint *)((uint)&local_1b0 | 4);
        *puVar12 = local_248;
        puVar12[1] = local_244;
        puVar12[2] = local_240;
        puVar12[3] = uStack_23c;
        puVar12[4] = uStack_238;
        FUN_019bb7e0(uVar17,uVar14);
        local_1b0 = uVar11;
      }
      goto LAB_00b335f4;
    }
  }
  local_1b0 = 9;
  if ((uVar15 & 0x80808080 & uVar15 << 1) != 0) goto LAB_00b335f4;
  local_2bc = local_2bc + 4;
  uVar6 = uVar6 + local_2bc;
  goto LAB_00b334e4;
LAB_00b335f4:
  FUN_0126e3b0(&local_1b0);
LAB_00b33600:
  *param_1 = local_2a0;
  param_1[1] = local_29c;
  param_1[2] = local_298;
  param_1[3] = local_294;
  param_1[4] = local_290;
  param_1[5] = uStack_28c;
  param_1[6] = uStack_288;
  param_1[7] = uStack_284;
  goto LAB_00b33614;
}

