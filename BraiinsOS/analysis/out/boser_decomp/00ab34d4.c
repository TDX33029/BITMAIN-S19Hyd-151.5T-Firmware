// FUN_00ab34d4 @ 00ab34d4 size=5300 calls_out=18 calls_in=2
// strings: yearly | weekly | daily | hourly0 * * * *0 0 * * *0 0 * * 00 0 1 * *0 0 1 1 * | Invalid cron expression.

/* WARNING: Removing unreachable block (ram,0x00ab3e6c) */
/* WARNING: Removing unreachable block (ram,0x00ab4518) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ab34d4(undefined4 *param_1,undefined4 *****param_2,int param_3,uint param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined4 *******pppppppuVar4;
  char cVar5;
  undefined4 *******pppppppuVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *******pppppppuVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 *******pppppppuVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *******pppppppuVar16;
  undefined4 *******unaff_r10;
  undefined4 *******pppppppuVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined4 *******local_524;
  undefined4 *******local_510;
  undefined4 *****local_508;
  int local_504;
  undefined4 *******local_500;
  undefined4 *******local_4fc;
  undefined4 *******local_4f8;
  undefined4 *******local_4f4;
  undefined4 *******local_4f0;
  undefined4 *******local_4ec;
  undefined4 *******local_4e8;
  undefined4 *******pppppppuStack_4e4;
  undefined4 *******pppppppuStack_4e0;
  undefined4 *******pppppppuStack_4dc;
  undefined4 *******local_4d8;
  undefined4 *******pppppppuStack_4d4;
  undefined4 *******local_4d0;
  undefined4 *******pppppppuStack_4cc;
  undefined4 *******local_4c8;
  undefined4 *******pppppppuStack_4c4;
  undefined4 *******local_4c0;
  undefined4 *******pppppppuStack_4bc;
  undefined4 *******local_4b8;
  undefined4 *******pppppppuStack_4b4;
  undefined4 *******local_4b0;
  undefined4 *******pppppppuStack_4ac;
  undefined4 *******local_4a8;
  undefined4 *******pppppppuStack_4a4;
  undefined4 *******local_4a0;
  undefined4 *******pppppppuStack_49c;
  undefined4 *******local_498;
  undefined4 *******local_494;
  undefined4 *******local_490;
  undefined4 *******local_48c;
  int local_488;
  undefined1 auStack_480 [96];
  undefined4 *******local_420;
  undefined4 local_41c;
  undefined4 ******local_418;
  undefined4 *******local_414;
  undefined4 *******local_410;
  undefined4 *******local_40c;
  undefined4 *******local_408 [24];
  undefined4 *******local_3a8;
  undefined4 *******pppppppuStack_3a4;
  undefined4 *******pppppppuStack_3a0;
  undefined1 auStack_398 [96];
  undefined4 *******local_338;
  undefined4 *******pppppppuStack_334;
  undefined4 *******pppppppuStack_330;
  undefined4 *******local_328;
  undefined4 *******pppppppuStack_324;
  undefined4 *******pppppppuStack_320;
  undefined4 *******local_318;
  undefined4 *******pppppppuStack_314;
  undefined4 *******pppppppuStack_310;
  undefined4 *******pppppppuStack_30c;
  undefined4 *******local_2b8;
  undefined4 *******pppppppuStack_2b4;
  undefined4 *******pppppppuStack_2b0;
  undefined4 *******local_2a8;
  undefined4 *******local_2a4;
  undefined4 *******local_2a0;
  undefined4 *******local_29c;
  undefined4 *******local_298;
  undefined4 *******local_294;
  undefined4 local_290;
  undefined4 local_280;
  undefined4 *******pppppppuStack_27c;
  undefined4 *******pppppppuStack_278;
  undefined4 *******pppppppuStack_274;
  undefined4 *******local_270;
  undefined4 *******pppppppuStack_26c;
  undefined4 *******pppppppuStack_268;
  undefined4 *******pppppppuStack_264;
  undefined4 *******local_260;
  undefined4 *******pppppppuStack_25c;
  undefined4 *******pppppppuStack_258;
  undefined4 *******pppppppuStack_254;
  undefined4 *******local_250;
  undefined4 *******pppppppuStack_24c;
  undefined4 *******pppppppuStack_248;
  undefined4 *******pppppppuStack_244;
  undefined4 *******local_240;
  undefined4 *******pppppppuStack_23c;
  undefined4 *******pppppppuStack_238;
  undefined4 *******pppppppuStack_234;
  undefined4 *******local_230;
  undefined4 *******local_22c;
  undefined4 *******local_228;
  undefined4 *******local_224;
  undefined4 *******local_220;
  undefined4 *******local_21c;
  undefined4 local_218;
  undefined4 local_208;
  undefined4 local_1f8;
  undefined4 *******pppppppuStack_1f4;
  undefined4 *******pppppppuStack_1f0;
  undefined4 *******pppppppuStack_1ec;
  undefined4 *******local_1e8;
  undefined4 *******pppppppuStack_1e4;
  undefined4 *******pppppppuStack_1e0;
  undefined4 *******pppppppuStack_1dc;
  undefined4 *******local_1d8;
  undefined4 *******pppppppuStack_1d4;
  undefined4 *******pppppppuStack_1d0;
  undefined4 *******pppppppuStack_1cc;
  undefined4 *******local_1c8;
  undefined4 *******pppppppuStack_1c4;
  undefined4 *******pppppppuStack_1c0;
  undefined4 *******pppppppuStack_1bc;
  undefined4 *******local_1b8;
  undefined4 *******local_1b4;
  undefined4 *******local_1b0;
  undefined4 *******local_1ac;
  undefined4 *******local_1a8;
  undefined4 *******local_1a4;
  undefined4 *******local_1a0;
  undefined4 *******local_19c;
  undefined4 *******pppppppuStack_198;
  undefined4 *******pppppppuStack_194;
  undefined4 *******local_190;
  undefined4 *******local_18c;
  undefined4 *******pppppppuStack_188;
  undefined4 *******pppppppuStack_184;
  undefined4 *******local_180;
  undefined4 *******local_17c;
  undefined4 *******pppppppuStack_178;
  undefined4 *******pppppppuStack_174;
  undefined4 *******local_170;
  undefined4 *******local_16c;
  undefined4 *******pppppppuStack_168;
  undefined4 *******pppppppuStack_164;
  undefined4 *******local_160;
  undefined4 *******pppppppuStack_15c;
  undefined4 *******pppppppuStack_158;
  undefined4 *******pppppppuStack_154;
  undefined4 *******local_150;
  undefined4 *******pppppppuStack_14c;
  undefined4 *******pppppppuStack_148;
  undefined4 *******pppppppuStack_144;
  undefined4 *******local_140;
  undefined4 *******local_13c;
  undefined4 *******local_138;
  undefined4 *******local_134;
  undefined4 *******local_130;
  undefined4 *******local_12c;
  undefined4 *******local_128;
  undefined4 ******local_124;
  undefined4 ******local_120;
  undefined4 local_118;
  undefined4 local_108;
  undefined4 local_f8;
  undefined4 *******pppppppuStack_f4;
  undefined4 *******pppppppuStack_f0;
  undefined4 *******pppppppuStack_ec;
  undefined4 *******local_e8;
  undefined4 *******pppppppuStack_e4;
  undefined4 *******pppppppuStack_e0;
  undefined4 *******pppppppuStack_dc;
  undefined4 *******local_d8;
  undefined4 *******pppppppuStack_d4;
  undefined4 *******pppppppuStack_d0;
  undefined4 *******pppppppuStack_cc;
  undefined4 *******local_c8;
  undefined4 *******pppppppuStack_c4;
  undefined4 *******pppppppuStack_c0;
  undefined4 *******pppppppuStack_bc;
  undefined4 *******local_b8;
  undefined4 *******pppppppuStack_b4;
  undefined4 *******pppppppuStack_b0;
  undefined4 *******pppppppuStack_ac;
  undefined4 *******local_a8;
  undefined4 *******pppppppuStack_a4;
  undefined4 *******pppppppuStack_a0;
  undefined4 *******pppppppuStack_9c;
  undefined4 *******local_98;
  undefined4 *******pppppppuStack_94;
  undefined4 *******pppppppuStack_90;
  undefined4 *******pppppppuStack_8c;
  undefined4 *******local_88;
  undefined4 *******pppppppuStack_84;
  undefined4 *******pppppppuStack_80;
  undefined4 *******pppppppuStack_7c;
  undefined4 *******local_78;
  undefined4 *******pppppppuStack_74;
  undefined4 *******pppppppuStack_70;
  undefined4 *******pppppppuStack_6c;
  undefined4 *******local_68;
  undefined4 *******pppppppuStack_64;
  undefined4 *******pppppppuStack_60;
  undefined4 *******pppppppuStack_5c;
  undefined4 *******local_58;
  undefined4 *******pppppppuStack_54;
  undefined4 *******pppppppuStack_50;
  undefined4 *******pppppppuStack_4c;
  undefined4 *******local_48;
  undefined4 *******pppppppuStack_44;
  undefined4 *******pppppppuStack_40;
  undefined4 *******pppppppuStack_3c;
  undefined4 *******local_38;
  undefined4 *******pppppppuStack_34;
  undefined4 *******pppppppuStack_30;
  undefined4 *******pppppppuStack_2c;
  
  pppppppuVar16 = &local_140;
  cVar5 = FUN_00a4ac84(param_2,param_3);
  local_508 = param_2;
  local_504 = param_3;
  FUN_01312ce0(&local_500,param_2,param_3);
  pppppppuVar17 = local_4f8;
  pppppppuVar13 = local_4fc;
  if (local_500 == (undefined4 *******)&DAT_00000001) {
    local_128 = local_4f0;
    local_12c = local_4f4;
    local_130 = local_4f8;
    local_134 = local_4fc;
LAB_00ab3ecc:
    pppppppuVar13 = (undefined4 *******)0x2;
    local_138 = (undefined4 *******)0x2;
    pppppppuVar16 = local_134;
    pppppppuVar17 = unaff_r10;
  }
  else {
    pppppppuVar6 = local_4f8;
    if (&DAT_00000006 < local_4f8) {
      pppppppuVar6 = (undefined4 *******)&DAT_00000007;
    }
    if (local_4f8 != (undefined4 *******)0x0) {
      puVar12 = (undefined1 *)0x0;
      do {
        pcVar1 = (char *)((int)local_4fc + (int)puVar12);
        pcVar2 = "@" + (int)puVar12;
        if ((undefined1 *)((int)pppppppuVar6 + -1) == puVar12) break;
        puVar12 = puVar12 + 1;
      } while (*pcVar1 == *pcVar2);
      if ((local_4f8 < &DAT_00000007) || (*pcVar1 != *pcVar2)) goto LAB_00ab372c;
      if ((local_4f8 < &DAT_00000008) || (-0x41 < *(char *)((int)local_4fc + 7))) {
        FUN_0130ec28((uint)&local_38 | 4,0);
        local_38 = (undefined4 *******)&DAT_00000001;
        FUN_0130ec28((uint)&local_230 | 4,0);
        local_230 = (undefined4 *******)&DAT_00000001;
        FUN_0130ec28((uint)&local_1b8 | 4,0);
        local_1b8 = (undefined4 *******)&DAT_00000001;
        FUN_0130ec28((uint)&local_140 | 4,1);
        local_140 = (undefined4 *******)&DAT_00000001;
        FUN_0130ec28((uint)&local_500 | 4,1);
        local_510 = (undefined4 *******)((int)pppppppuVar13 + 7);
        local_524 = (undefined4 *******)((int)pppppppuVar17 + -7);
        local_48 = (undefined4 *******)&DAT_00000001;
        pppppppuStack_44 = local_4fc;
        pppppppuStack_40 = local_4f8;
        pppppppuStack_3c = local_4f4;
        local_58 = local_140;
        pppppppuStack_54 = local_13c;
        pppppppuStack_50 = local_138;
        pppppppuStack_4c = local_134;
        local_68 = local_1b8;
        pppppppuStack_64 = local_1b4;
        pppppppuStack_60 = local_1b0;
        pppppppuStack_5c = local_1ac;
        local_78 = local_230;
        pppppppuStack_74 = local_22c;
        pppppppuStack_70 = local_228;
        pppppppuStack_6c = local_224;
        local_88 = local_38;
        pppppppuStack_84 = pppppppuStack_34;
        pppppppuStack_80 = pppppppuStack_30;
        pppppppuStack_7c = pppppppuStack_2c;
        local_290 = 0;
        local_2a0 = (undefined4 *******)0x0;
        local_2a4 = local_524;
        local_2a8 = local_510;
        local_280 = 1;
        pppppppuStack_27c = local_4fc;
        pppppppuStack_278 = local_4f8;
        pppppppuStack_274 = local_4f4;
        local_270 = local_140;
        pppppppuStack_26c = local_13c;
        pppppppuStack_268 = local_138;
        pppppppuStack_264 = local_134;
        local_260 = local_1b8;
        pppppppuStack_25c = local_1b4;
        pppppppuStack_258 = local_1b0;
        pppppppuStack_254 = local_1ac;
        local_250 = local_230;
        pppppppuStack_24c = local_22c;
        pppppppuStack_248 = local_228;
        pppppppuStack_244 = local_224;
        local_240 = local_38;
        pppppppuStack_23c = pppppppuStack_34;
        pppppppuStack_238 = pppppppuStack_30;
        pppppppuStack_234 = pppppppuStack_2c;
        pppppppuVar16 = &local_2a8;
        unaff_r10 = local_29c;
        goto LAB_00ab3e74;
      }
LAB_00ab493c:
      uVar14 = 7;
LAB_00ab4968:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(local_4fc,local_4f8,0,uVar14,&DAT_01d2e668);
    }
LAB_00ab372c:
    local_290 = 0;
    local_294 = local_4f8;
    local_298 = local_4fc;
    local_29c = (undefined4 *******)&DAT_00000001;
    local_2a0 = (undefined4 *******)0x2;
    pppppppuVar10 = local_4f8;
    if (&DAT_00000007 < local_4f8) {
      pppppppuVar10 = (undefined4 *******)&DAT_00000008;
    }
    if (local_4f8 == (undefined4 *******)0x0) {
LAB_00ab38f8:
      local_218 = 0;
      local_21c = local_4f8;
      local_220 = local_4fc;
      local_224 = (undefined4 *******)&DAT_00000001;
      local_228 = (undefined4 *******)0x2;
      if (local_4f8 != (undefined4 *******)0x0) {
        puVar12 = (undefined1 *)0x0;
        do {
          pcVar1 = (char *)((int)local_4fc + (int)puVar12);
          pcVar2 = "@" + (int)puVar12;
          if ((undefined1 *)((int)pppppppuVar6 + -1) == puVar12) break;
          puVar12 = puVar12 + 1;
        } while (*pcVar1 == *pcVar2);
        if ((&DAT_00000006 < local_4f8) && (*pcVar1 == *pcVar2)) {
          if ((&DAT_00000007 < local_4f8) && (*(char *)((int)local_4fc + 7) < -0x40))
          goto LAB_00ab493c;
          FUN_0130ec28((uint)&local_68 | 4,0);
          local_68 = (undefined4 *******)&DAT_00000001;
          FUN_0130ec28((uint)&local_58 | 4,0);
          local_58 = (undefined4 *******)&DAT_00000001;
          FUN_0130ec28((uint)&local_48 | 4,0);
          local_48 = (undefined4 *******)&DAT_00000001;
          local_38 = (undefined4 *******)0x0;
          local_140 = (undefined4 *******)0x0;
          FUN_0130ec28((uint)&local_500 | 4,1);
          local_524 = (undefined4 *******)((int)pppppppuVar17 + -7);
          local_510 = (undefined4 *******)((int)pppppppuVar13 + 7);
          local_78 = (undefined4 *******)&DAT_00000001;
          pppppppuStack_74 = local_4fc;
          pppppppuStack_70 = local_4f8;
          pppppppuStack_6c = local_4f4;
          local_88 = local_140;
          pppppppuStack_84 = local_13c;
          pppppppuStack_80 = local_138;
          pppppppuStack_7c = local_134;
          local_98 = local_38;
          pppppppuStack_94 = pppppppuStack_34;
          pppppppuStack_90 = pppppppuStack_30;
          pppppppuStack_8c = pppppppuStack_2c;
          local_a8 = local_48;
          pppppppuStack_a4 = pppppppuStack_44;
          pppppppuStack_a0 = pppppppuStack_40;
          pppppppuStack_9c = pppppppuStack_3c;
          local_b8 = local_58;
          pppppppuStack_b4 = pppppppuStack_54;
          pppppppuStack_b0 = pppppppuStack_50;
          pppppppuStack_ac = pppppppuStack_4c;
          local_c8 = local_68;
          pppppppuStack_c4 = pppppppuStack_64;
          pppppppuStack_c0 = pppppppuStack_60;
          pppppppuStack_bc = pppppppuStack_5c;
          local_1b0 = (undefined4 *******)0x0;
          local_1b4 = local_524;
          local_1b8 = local_510;
          local_1a0 = (undefined4 *******)&DAT_00000001;
          local_19c = local_4fc;
          pppppppuStack_198 = local_4f8;
          pppppppuStack_194 = local_4f4;
          local_190 = local_140;
          local_18c = local_13c;
          pppppppuStack_188 = local_138;
          pppppppuStack_184 = local_134;
          local_180 = local_38;
          local_17c = pppppppuStack_34;
          pppppppuStack_178 = pppppppuStack_30;
          pppppppuStack_174 = pppppppuStack_2c;
          local_170 = local_48;
          local_16c = pppppppuStack_44;
          pppppppuStack_168 = pppppppuStack_40;
          pppppppuStack_164 = pppppppuStack_3c;
          local_160 = local_58;
          pppppppuStack_15c = pppppppuStack_54;
          pppppppuStack_158 = pppppppuStack_50;
          pppppppuStack_154 = pppppppuStack_4c;
          local_150 = local_68;
          pppppppuStack_14c = pppppppuStack_64;
          pppppppuStack_148 = pppppppuStack_60;
          pppppppuStack_144 = pppppppuStack_5c;
          pppppppuVar16 = &local_1b8;
          unaff_r10 = local_1ac;
          goto LAB_00ab3e74;
        }
      }
      local_1a0 = (undefined4 *******)0x0;
      local_1a4 = local_4f8;
      local_1a8 = local_4fc;
      local_1ac = (undefined4 *******)&DAT_00000001;
      local_1b0 = (undefined4 *******)0x2;
      pppppppuVar10 = local_4f8;
      if (&DAT_00000005 < local_4f8) {
        pppppppuVar10 = (undefined4 *******)&DAT_00000006;
      }
      if (local_4f8 != (undefined4 *******)0x0) {
        puVar12 = (undefined1 *)0x0;
        do {
          pcVar1 = (char *)((int)local_4fc + (int)puVar12);
          pcVar2 = "@" + (int)puVar12;
          if ((undefined1 *)((int)pppppppuVar10 + -1) == puVar12) break;
          puVar12 = puVar12 + 1;
        } while (*pcVar1 == *pcVar2);
        if ((&DAT_00000005 < local_4f8) && (*pcVar1 == *pcVar2)) {
          if ((&DAT_00000006 < local_4f8) && (*(char *)((int)local_4fc + 6) < -0x40)) {
            uVar14 = 6;
            goto LAB_00ab4968;
          }
          FUN_0130ec28((uint)&local_48 | 4,0);
          local_48 = (undefined4 *******)&DAT_00000001;
          FUN_0130ec28((uint)&local_38 | 4,0);
          local_38 = (undefined4 *******)&DAT_00000001;
          FUN_0130ec28((uint)&local_500 | 4,0);
          local_524 = (undefined4 *******)((int)pppppppuVar17 + -6);
          local_510 = (undefined4 *******)((int)pppppppuVar13 + 6);
          local_58 = (undefined4 *******)&DAT_00000001;
          pppppppuStack_54 = local_4fc;
          pppppppuStack_50 = local_4f8;
          pppppppuStack_4c = local_4f4;
          local_68 = local_38;
          pppppppuStack_64 = pppppppuStack_34;
          pppppppuStack_60 = pppppppuStack_30;
          pppppppuStack_5c = pppppppuStack_2c;
          local_78 = local_48;
          pppppppuStack_74 = pppppppuStack_44;
          pppppppuStack_70 = pppppppuStack_40;
          pppppppuStack_6c = pppppppuStack_3c;
          local_108 = 0;
          local_118 = 0;
          local_128 = (undefined4 *******)0x0;
          local_138 = (undefined4 *******)0x0;
          local_13c = local_524;
          local_140 = local_510;
          local_f8 = 1;
          pppppppuStack_f4 = local_4fc;
          pppppppuStack_f0 = local_4f8;
          pppppppuStack_ec = local_4f4;
          local_e8 = local_38;
          pppppppuStack_e4 = pppppppuStack_34;
          pppppppuStack_e0 = pppppppuStack_30;
          pppppppuStack_dc = pppppppuStack_2c;
          local_d8 = local_48;
          pppppppuStack_d4 = pppppppuStack_44;
          pppppppuStack_d0 = pppppppuStack_40;
          pppppppuStack_cc = pppppppuStack_3c;
          unaff_r10 = local_134;
          goto LAB_00ab3e74;
        }
      }
      local_128 = (undefined4 *******)0x0;
      local_12c = local_4f8;
      local_130 = local_4fc;
      local_134 = (undefined4 *******)&DAT_00000001;
      local_138 = (undefined4 *******)0x2;
      if (local_4f8 != (undefined4 *******)0x0) {
        puVar12 = (undefined1 *)0x0;
        do {
          pcVar1 = (char *)((int)local_4fc + (int)puVar12);
          pcVar2 = "@" + (int)puVar12;
          if ((undefined1 *)((int)pppppppuVar6 + -1) == puVar12) break;
          puVar12 = puVar12 + 1;
        } while (*pcVar1 == *pcVar2);
        if ((&DAT_00000006 < local_4f8) && (*pcVar1 == *pcVar2)) {
          if ((&DAT_00000007 < local_4f8) && (*(char *)((int)local_4fc + 7) < -0x40))
          goto LAB_00ab493c;
          FUN_0130ec28((uint)&local_48 | 4,0);
          local_48 = (undefined4 *******)&DAT_00000001;
          FUN_0130ec28((uint)&local_38 | 4,0);
          local_38 = (undefined4 *******)&DAT_00000001;
          local_58 = (undefined4 *******)&DAT_00000001;
          pppppppuStack_54 = pppppppuStack_34;
          pppppppuStack_50 = pppppppuStack_30;
          pppppppuStack_4c = pppppppuStack_2c;
          local_68 = local_48;
          pppppppuStack_64 = pppppppuStack_44;
          pppppppuStack_60 = pppppppuStack_40;
          pppppppuStack_5c = pppppppuStack_3c;
          local_524 = (undefined4 *******)((int)local_4f8 + -7);
          local_4b8 = (undefined4 *******)0x0;
          local_4c8 = (undefined4 *******)0x0;
          local_4d8 = (undefined4 *******)0x0;
          local_4e8 = (undefined4 *******)0x0;
          local_4f8 = (undefined4 *******)0x0;
          local_510 = (undefined4 *******)((int)local_4fc + 7);
          local_4a8 = (undefined4 *******)&DAT_00000001;
          pppppppuStack_4a4 = pppppppuStack_34;
          local_4a0 = pppppppuStack_30;
          pppppppuStack_49c = pppppppuStack_2c;
          local_498 = local_48;
          local_494 = pppppppuStack_44;
          local_490 = pppppppuStack_40;
          local_48c = pppppppuStack_3c;
          local_2b8 = local_4f0;
          pppppppuStack_2b4 = local_4ec;
          pppppppuStack_2b0 = (undefined4 *******)0x0;
          pppppppuVar16 = &local_500;
          unaff_r10 = local_4f4;
          local_500 = local_510;
          local_4fc = local_524;
          goto LAB_00ab3e88;
        }
      }
      local_4f4 = (undefined4 *******)&DAT_00000001;
      pppppppuVar13 = (undefined4 *******)0x2;
      local_4e8 = (undefined4 *******)0x0;
      local_4ec = local_4f8;
      unaff_r10 = (undefined4 *******)&DAT_00000001;
      local_4f0 = local_4fc;
      local_4f8 = (undefined4 *******)0x2;
      local_2b8 = local_4fc;
      pppppppuStack_2b4 = pppppppuVar17;
      pppppppuStack_2b0 = (undefined4 *******)0x0;
    }
    else {
      puVar12 = (undefined1 *)0x0;
      do {
        pcVar1 = (char *)((int)local_4fc + (int)puVar12);
        pcVar2 = &DAT_00570458 + (int)puVar12;
        if ((undefined1 *)((int)pppppppuVar10 + -1) == puVar12) break;
        puVar12 = puVar12 + 1;
      } while (*pcVar1 == *pcVar2);
      if ((local_4f8 < &DAT_00000008) || (*pcVar1 != *pcVar2)) goto LAB_00ab38f8;
      if ((&DAT_00000008 < local_4f8) && (*(char *)(local_4fc + 2) < -0x40)) {
        uVar14 = 8;
        goto LAB_00ab4968;
      }
      FUN_0130ec28((uint)&local_38 | 4,0);
      local_38 = (undefined4 *******)&DAT_00000001;
      FUN_0130ec28((uint)&local_1b8 | 4,0);
      local_1b8 = (undefined4 *******)&DAT_00000001;
      FUN_0130ec28((uint)&local_140 | 4,0);
      local_140 = (undefined4 *******)&DAT_00000001;
      FUN_0130ec28((uint)&local_500 | 4,1);
      local_524 = pppppppuVar17 + -2;
      local_510 = pppppppuVar13 + 2;
      local_48 = (undefined4 *******)&DAT_00000001;
      pppppppuStack_44 = local_4fc;
      pppppppuStack_40 = local_4f8;
      pppppppuStack_3c = local_4f4;
      local_58 = local_140;
      pppppppuStack_54 = local_13c;
      pppppppuStack_50 = local_138;
      pppppppuStack_4c = local_134;
      local_68 = local_1b8;
      pppppppuStack_64 = local_1b4;
      pppppppuStack_60 = local_1b0;
      pppppppuStack_5c = local_1ac;
      local_78 = local_38;
      pppppppuStack_74 = pppppppuStack_34;
      pppppppuStack_70 = pppppppuStack_30;
      pppppppuStack_6c = pppppppuStack_2c;
      local_208 = 0;
      local_218 = 0;
      local_228 = (undefined4 *******)0x0;
      local_22c = local_524;
      local_230 = local_510;
      local_1f8 = 1;
      pppppppuStack_1f4 = local_4fc;
      pppppppuStack_1f0 = local_4f8;
      pppppppuStack_1ec = local_4f4;
      local_1e8 = local_140;
      pppppppuStack_1e4 = local_13c;
      pppppppuStack_1e0 = local_138;
      pppppppuStack_1dc = local_134;
      local_1d8 = local_1b8;
      pppppppuStack_1d4 = local_1b4;
      pppppppuStack_1d0 = local_1b0;
      pppppppuStack_1cc = local_1ac;
      local_1c8 = local_38;
      pppppppuStack_1c4 = pppppppuStack_34;
      pppppppuStack_1c0 = pppppppuStack_30;
      pppppppuStack_1bc = pppppppuStack_2c;
      pppppppuVar16 = &local_230;
      unaff_r10 = local_224;
LAB_00ab3e74:
      local_500 = (undefined4 *******)&DAT_00000001;
      local_2b8 = (undefined4 *******)pppppppuVar16[4];
      pppppppuStack_2b4 = (undefined4 *******)pppppppuVar16[5];
      pppppppuStack_2b0 = (undefined4 *******)pppppppuVar16[6];
LAB_00ab3e88:
      pppppppuVar13 = (undefined4 *******)0x0;
      FUN_01bed4e2(&local_318,pppppppuVar16 + 7,0x5c);
    }
    if (pppppppuVar13 == (undefined4 *******)0x2) {
      local_328 = local_2b8;
      pppppppuStack_324 = pppppppuStack_2b4;
      pppppppuStack_320 = pppppppuStack_2b0;
      local_130 = local_2b8;
      local_12c = pppppppuStack_2b4;
      local_128 = pppppppuStack_2b0;
      local_134 = unaff_r10;
      goto LAB_00ab3ecc;
    }
    local_328 = local_2b8;
    pppppppuStack_324 = pppppppuStack_2b4;
    pppppppuStack_320 = pppppppuStack_2b0;
    FUN_01bed4e2(&local_1b8,&local_318,0x5c);
    local_2a8 = local_328;
    local_2a4 = pppppppuStack_324;
    local_2a0 = pppppppuStack_320;
    FUN_01312ce0(&local_230,local_510,local_524);
    local_4f8 = local_2a8;
    local_4f4 = local_2a4;
    local_4f0 = local_2a0;
    local_500 = pppppppuVar13;
    local_4fc = unaff_r10;
    FUN_01bed4e2(&local_4ec,&local_1b8,0x5c);
    pppppppuVar17 = local_228;
    pppppppuVar16 = local_22c;
    if (local_230 == (undefined4 *******)&DAT_00000001) {
      pppppppuVar13 = (undefined4 *******)0x2;
      local_134 = local_22c;
      local_130 = local_228;
      local_12c = local_224;
      local_128 = local_220;
      local_138 = (undefined4 *******)0x2;
      FUN_0130a994(&local_500);
      pppppppuVar16 = local_134;
      pppppppuVar17 = unaff_r10;
    }
    else {
      local_130 = local_2a8;
      local_12c = local_2a4;
      local_128 = local_2a0;
      local_138 = pppppppuVar13;
      local_134 = unaff_r10;
      FUN_01bed4e2(&local_124,&local_1b8,0x5c);
      local_13c = pppppppuVar17;
      local_510 = pppppppuVar16;
      local_140 = pppppppuVar16;
      pppppppuVar16 = unaff_r10;
    }
  }
  if (pppppppuVar13 == (undefined4 *******)0x2 && pppppppuVar16 == (undefined4 *******)&DAT_00000001
     ) {
    pppppppuVar17 = &local_500;
    FUN_0130c5f4(pppppppuVar17,param_2,param_3);
    pppppppuVar16 = local_4f8;
    pppppppuVar10 = local_4fc;
    pppppppuVar6 = local_500;
    if (local_4f8 == (undefined4 *******)0x2) {
      local_58 = local_4f4;
      pppppppuStack_54 = local_4f0;
      pppppppuStack_50 = local_4ec;
      pppppppuStack_4c = local_4e8;
      pppppppuVar13 = (undefined4 *******)0x2;
      local_4f8 = (undefined4 *******)0x2;
      local_338 = local_4f0;
      pppppppuStack_334 = local_4ec;
      pppppppuStack_330 = local_4e8;
      pppppppuVar16 = (undefined4 *******)&DAT_00000001;
      if (local_4f4 == (undefined4 *******)&DAT_00000001) goto LAB_00ab425c;
    }
    else {
      local_510 = local_500;
      local_58 = local_4f4;
      pppppppuStack_54 = local_4f0;
      pppppppuStack_50 = local_4ec;
      pppppppuStack_4c = local_4e8;
      FUN_01bed4e2(&local_1a8,&pppppppuStack_4e4,0x4c);
      pppppppuVar4 = pppppppuStack_50;
      pppppppuVar17 = pppppppuStack_54;
      pppppppuVar13 = local_58;
      local_68 = local_494;
      pppppppuStack_64 = local_490;
      pppppppuStack_60 = local_48c;
      local_1b8 = local_58;
      local_1b4 = pppppppuStack_54;
      local_1b0 = pppppppuStack_50;
      local_1ac = pppppppuStack_4c;
      local_4f8 = (undefined4 *******)0x0;
      if (local_498 != (undefined4 *******)0x2) {
        local_58 = local_494;
        pppppppuStack_54 = local_490;
        pppppppuStack_50 = local_48c;
        local_4f8 = local_498;
      }
      local_494 = pppppppuVar13;
      local_490 = pppppppuVar17;
      local_48c = pppppppuVar4;
      local_48 = pppppppuStack_4c;
      pppppppuStack_44 = local_1a8;
      pppppppuStack_40 = local_1a4;
      pppppppuStack_3c = local_1a0;
      local_38 = local_19c;
      pppppppuStack_34 = pppppppuStack_198;
      pppppppuStack_30 = pppppppuStack_194;
      pppppppuStack_2c = local_190;
      local_318 = local_18c;
      pppppppuStack_314 = pppppppuStack_188;
      pppppppuStack_310 = pppppppuStack_184;
      pppppppuStack_30c = local_180;
      local_2a8 = local_17c;
      local_2a4 = pppppppuStack_178;
      local_2a0 = pppppppuStack_174;
      local_29c = local_170;
      local_230 = local_16c;
      local_22c = pppppppuStack_168;
      local_228 = pppppppuStack_164;
      local_224 = local_160;
      local_78 = local_58;
      pppppppuStack_74 = pppppppuStack_54;
      pppppppuStack_70 = pppppppuStack_50;
      pppppppuStack_4e4 = pppppppuStack_168;
      pppppppuStack_4e0 = pppppppuStack_164;
      pppppppuStack_4dc = local_160;
      local_4d8 = local_17c;
      pppppppuStack_4d4 = pppppppuStack_178;
      local_4d0 = pppppppuStack_174;
      pppppppuStack_4cc = local_170;
      local_4c8 = local_18c;
      pppppppuStack_4c4 = pppppppuStack_188;
      local_4c0 = pppppppuStack_184;
      pppppppuStack_4bc = local_180;
      local_4b8 = local_19c;
      pppppppuStack_4b4 = pppppppuStack_198;
      local_4b0 = pppppppuStack_194;
      pppppppuStack_4ac = local_190;
      local_4a8 = pppppppuStack_4c;
      pppppppuStack_4a4 = local_1a8;
      local_4a0 = local_1a4;
      pppppppuStack_49c = local_1a0;
      local_498 = pppppppuVar16;
      pppppppuStack_330 = local_16c;
      pppppppuVar17 = pppppppuVar10;
    }
    pppppppuVar16 = local_58;
    pppppppuVar13 = local_4f8;
    local_500 = pppppppuVar6;
    local_4fc = pppppppuVar10;
    local_4f4 = local_58;
    local_4f0 = pppppppuStack_54;
    local_4ec = pppppppuStack_50;
    local_4e8 = pppppppuStack_330;
    local_338 = pppppppuStack_54;
    pppppppuStack_334 = pppppppuStack_50;
    FUN_01bed4e2(auStack_398,&pppppppuStack_4e4,0x5c);
  }
  else {
    local_338 = local_130;
    pppppppuStack_334 = local_12c;
    pppppppuStack_330 = local_128;
    FUN_01bed4e2(auStack_398,&local_124,0x5c);
  }
LAB_00ab425c:
  if (pppppppuVar13 == (undefined4 *******)0x2) {
    local_3a8 = local_338;
    pppppppuStack_3a4 = pppppppuStack_334;
    pppppppuStack_3a0 = pppppppuStack_330;
    local_410 = local_338;
    local_40c = pppppppuStack_334;
    local_408[0] = pppppppuStack_330;
    local_418 = (undefined4 ******)0x2;
    local_414 = pppppppuVar16;
LAB_00ab4574:
    iVar7 = thunk_FUN_01be5118(0x18);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x18);
    }
    FUN_01bed4e2(iVar7,"Invalid cron expression.",0x18);
    local_4f8 = (undefined4 *******)0x18;
    local_500 = (undefined4 *******)0x18;
    local_4fc = (undefined4 *******)iVar7;
    uVar14 = FUN_00a98c4c(&local_500);
    *param_1 = 4;
    param_1[1] = uVar14;
    return;
  }
  local_3a8 = local_338;
  pppppppuStack_3a4 = pppppppuStack_334;
  pppppppuStack_3a0 = pppppppuStack_330;
  FUN_01bed4e2(&local_4ec,auStack_398,0x5c);
  local_4f8 = local_3a8;
  local_4f4 = pppppppuStack_3a4;
  local_4f0 = pppppppuStack_3a0;
  local_500 = pppppppuVar13;
  local_4fc = pppppppuVar16;
  if (pppppppuVar17 != (undefined4 *******)0x0) {
    local_408[0] = (undefined4 *******)CONCAT31(local_408[0]._1_3_,0x17);
    local_410 = local_510;
    local_414 = (undefined4 *******)&DAT_00000001;
    local_418 = (undefined4 ******)0x2;
    local_40c = pppppppuVar17;
    FUN_0130a994(&local_500);
    goto LAB_00ab4574;
  }
  FUN_01bed4e2(&local_418,&local_500,0x70);
  uVar14 = 0;
  local_41c = 0;
  local_420 = local_510;
  if (local_418 == (undefined4 ******)0x2) goto LAB_00ab4574;
  if (param_3 < 0) {
LAB_00ab42e4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar14,param_3);
  }
  if (param_3 == 0) {
    iVar7 = 1;
    local_510 = (undefined4 *******)0x0;
  }
  else {
    uVar14 = 1;
    iVar7 = FUN_01298504(param_3,1);
    local_510 = (undefined4 *******)param_3;
    if (iVar7 == 0) goto LAB_00ab42e4;
  }
  FUN_01bed4e2(iVar7,param_2,param_3);
  FUN_01bed4e2(auStack_480,local_408,0x60);
  FUN_01bed4e2(&local_4f0,auStack_480,0x60);
  local_490 = local_510;
  local_500 = (undefined4 *******)local_418;
  local_488 = param_3;
  local_48c = (undefined4 *******)iVar7;
  local_4f4 = local_40c;
  local_4f8 = local_410;
  local_4fc = local_414;
  if (((uint)local_4c0 & 1) == 0) {
    pppppppuVar16 = (undefined4 *******)&DAT_01d4cfa4;
    DataMemoryBarrier(0xb);
    if (DAT_01d4cfb0 != 2) {
      FUN_0130fe50(&DAT_01d4cfa0,&DAT_01d4cfa0);
    }
  }
  else {
    pppppppuVar16 = &pppppppuStack_4bc;
  }
  local_138 = (undefined4 *******)*pppppppuVar16;
  local_134 = (undefined4 *******)pppppppuVar16[1];
  local_120 = pppppppuVar16[2];
  if (local_138 == (undefined4 *******)0x0) {
    local_120 = (undefined4 ******)0x0;
  }
  local_140 = (undefined4 *******)(uint)(local_138 != (undefined4 *******)0x0);
  local_12c = (undefined4 *******)0x0;
  local_13c = (undefined4 *******)0x0;
  local_130 = local_140;
  local_128 = local_138;
  local_124 = local_134;
  uVar18 = FUN_013126ac(&local_140);
  uVar14 = (undefined4)(uVar18 >> 0x20);
  if ((uVar18 & 1) == 0) {
    local_140 = (undefined4 *******)&local_508;
    local_13c = (undefined4 *******)&DAT_0132b6a0;
    uVar14 = FUN_00a57a98(&DAT_005b9177,&local_140);
  }
  else {
    if (((uint)local_4b0 & 1) == 0) {
      pppppppuVar16 = (undefined4 *******)&DAT_01d4cf8c;
      DataMemoryBarrier(0xb);
      if (DAT_01d4cf98 != 2) {
        FUN_0130fe50(&DAT_01d4cf88,&DAT_01d4cf88);
      }
    }
    else {
      pppppppuVar16 = &pppppppuStack_4ac;
    }
    local_138 = (undefined4 *******)*pppppppuVar16;
    local_134 = (undefined4 *******)pppppppuVar16[1];
    local_120 = pppppppuVar16[2];
    if (local_138 == (undefined4 *******)0x0) {
      local_120 = (undefined4 ******)0x0;
    }
    local_140 = (undefined4 *******)(uint)(local_138 != (undefined4 *******)0x0);
    local_12c = (undefined4 *******)0x0;
    local_13c = (undefined4 *******)0x0;
    local_130 = local_140;
    local_128 = local_138;
    local_124 = local_134;
    uVar18 = FUN_013126ac(&local_140);
    uVar11 = (undefined4)(uVar18 >> 0x20);
    uVar3 = CONCAT44(uVar11,uVar14);
    if ((uVar18 & 1) != 0) {
      if (((uint)local_4a0 & 1) == 0) {
        pppppppuVar16 = (undefined4 *******)&DAT_01d4cfbc;
        DataMemoryBarrier(0xb);
        if (DAT_01d4cfc8 != 2) {
          FUN_0130fe50(&DAT_01d4cfb8,&DAT_01d4cfb8);
        }
      }
      else {
        pppppppuVar16 = &pppppppuStack_49c;
      }
      local_138 = (undefined4 *******)*pppppppuVar16;
      local_134 = (undefined4 *******)pppppppuVar16[1];
      local_120 = pppppppuVar16[2];
      if (local_138 == (undefined4 *******)0x0) {
        local_120 = (undefined4 ******)0x0;
      }
      local_140 = (undefined4 *******)(uint)(local_138 != (undefined4 *******)0x0);
      local_12c = (undefined4 *******)0x0;
      local_13c = (undefined4 *******)0x0;
      local_130 = local_140;
      local_128 = local_138;
      local_124 = local_134;
      uVar19 = FUN_013126ac(&local_140);
      uVar9 = (uint)((ulonglong)uVar19 >> 0x20);
      uVar8 = (undefined4)uVar19;
      if (cVar5 == '\0') {
        uVar15 = 0;
      }
      else {
        uVar9 = param_4;
        uVar3 = uVar19;
        if (cVar5 == '\x01') {
          if (((uint)local_4f0 & 1) == 0) {
            pppppppuVar16 = (undefined4 *******)&DAT_01d4cf74;
            DataMemoryBarrier(0xb);
            if (DAT_01d4cf80 != 2) {
              FUN_0130fe50(&DAT_01d4cf70,&DAT_01d4cf70);
            }
          }
          else {
            pppppppuVar16 = &local_4ec;
          }
          if (pppppppuVar16[2] == (undefined4 ******)0x7) {
            if (param_4 == 0) {
              uVar8 = 0;
              uVar15 = 1;
            }
            else {
              if (0x2a2fe < *(int *)(param_4 + 0x18) + *(int *)(param_4 + 0x14) + 0x1517fU) {
LAB_00ab491c:
                    /* WARNING: Subroutine does not return */
                FUN_012fb0cc(&DAT_01ce21ec);
              }
              FUN_0128fca4(&local_140);
              uVar15 = 1;
              iVar7 = (((uint)local_140 & 0x1fff) >> 4) + ((uint)local_140 & 7);
              uVar8 = 1;
              uVar9 = iVar7 + ((uint)((short)iVar7 * 0x2493) >> 0x10) * -7 + 1 & 0xffff;
            }
          }
          else {
            if (((uint)local_4f0 & 1) == 0) {
              pppppppuVar16 = (undefined4 *******)&DAT_01d4cf74;
              DataMemoryBarrier(0xb);
              if (DAT_01d4cf80 != 2) {
                FUN_0130fe50(&DAT_01d4cf70,&DAT_01d4cf70);
              }
            }
            else {
              pppppppuVar16 = &local_4ec;
            }
            local_138 = (undefined4 *******)*pppppppuVar16;
            local_134 = (undefined4 *******)pppppppuVar16[1];
            local_120 = pppppppuVar16[2];
            if (local_138 == (undefined4 *******)0x0) {
              local_120 = (undefined4 ******)0x0;
            }
            local_140 = (undefined4 *******)(uint)(local_138 != (undefined4 *******)0x0);
            local_12c = (undefined4 *******)0x0;
            local_13c = (undefined4 *******)0x0;
            local_130 = local_140;
            local_128 = local_138;
            local_124 = local_134;
            uVar19 = FUN_013126ac(&local_140);
            uVar9 = (uint)((ulonglong)uVar19 >> 0x20);
            uVar8 = (undefined4)uVar19;
            uVar15 = 1;
          }
        }
        else {
          if (((uint)local_4d0 & 1) == 0) {
            pppppppuVar16 = (undefined4 *******)&DAT_01d4cfd4;
            DataMemoryBarrier(0xb);
            if (DAT_01d4cfe0 != 2) {
              FUN_0130fe50(&DAT_01d4cfd0,&DAT_01d4cfd0);
            }
          }
          else {
            pppppppuVar16 = &pppppppuStack_4cc;
          }
          if (pppppppuVar16[2] == (undefined4 ******)0x1f) {
            if (param_4 == 0) {
              uVar8 = 0;
            }
            else {
              if (0x2a2fe < *(int *)(param_4 + 0x18) + *(int *)(param_4 + 0x14) + 0x1517fU)
              goto LAB_00ab491c;
              FUN_0128fca4(&local_140);
              uVar9 = ((uint)local_140 & 0x1fff) >> 3;
              if (0x2dc < uVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar9,0x2dd,&DAT_01d2a928);
              }
              uVar8 = 1;
              uVar9 = (((uint)local_140 >> 3) + (uint)(byte)""[uVar9] & 0x3f) >> 1;
            }
          }
          else {
            if (((uint)local_4d0 & 1) == 0) {
              pppppppuVar16 = (undefined4 *******)&DAT_01d4cfd4;
              DataMemoryBarrier(0xb);
              if (DAT_01d4cfe0 != 2) {
                FUN_0130fe50(&DAT_01d4cfd0,&DAT_01d4cfd0);
              }
            }
            else {
              pppppppuVar16 = &pppppppuStack_4cc;
            }
            local_138 = (undefined4 *******)*pppppppuVar16;
            local_134 = (undefined4 *******)pppppppuVar16[1];
            local_120 = pppppppuVar16[2];
            if (local_138 == (undefined4 *******)0x0) {
              local_120 = (undefined4 ******)0x0;
            }
            local_140 = (undefined4 *******)(uint)(local_138 != (undefined4 *******)0x0);
            local_12c = (undefined4 *******)0x0;
            local_13c = (undefined4 *******)0x0;
            local_130 = local_140;
            local_128 = local_138;
            local_124 = local_134;
            uVar19 = FUN_013126ac(&local_140);
            uVar9 = (uint)((ulonglong)uVar19 >> 0x20);
            uVar8 = (undefined4)uVar19;
          }
          uVar15 = 2;
        }
      }
      param_1[1] = uVar8;
      param_1[2] = uVar9;
      *(undefined8 *)(param_1 + 3) = uVar3;
      *param_1 = uVar15;
      param_1[5] = uVar14;
      param_1[6] = uVar11;
      goto LAB_00ab48fc;
    }
    local_140 = (undefined4 *******)&local_508;
    local_13c = (undefined4 *******)&DAT_0132b6a0;
    uVar14 = FUN_00a57a98(&DAT_005b9177,&local_140);
  }
  *param_1 = 4;
  param_1[1] = uVar14;
LAB_00ab48fc:
  FUN_019bb7e0(local_490,local_48c);
  FUN_0130a994(&local_500);
  return;
}

