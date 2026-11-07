// FUN_00b637ec @ 00b637ec size=4748 calls_out=24 calls_in=2
// strings: boser_bosminer::config::FanControl | FanControl | FanControl | __fake_type__ | FanControl | boser_bosminer::config::FanControl

void FUN_00b637ec(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint ***pppuVar13;
  undefined4 ***pppuVar14;
  undefined8 uVar15;
  uint **local_294;
  undefined4 local_290;
  char *local_28c;
  undefined4 local_288;
  undefined1 local_281;
  undefined1 local_280 [16];
  uint local_270;
  uint uStack_26c;
  uint uStack_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  undefined4 *puStack_254;
  uint uStack_250;
  uint uStack_24c;
  uint uStack_248;
  uint uStack_244;
  undefined4 local_23c;
  undefined4 *local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 *local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  uint **local_1fc;
  undefined4 local_1f8;
  char *local_1f4;
  undefined4 local_1f0;
  undefined1 local_1e9;
  undefined4 local_1e8 [4];
  char ***local_1d8;
  undefined4 *local_1d4;
  uint local_1d0;
  uint uStack_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  undefined4 *puStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 **ppuStack_19c;
  undefined4 *local_198;
  undefined4 uStack_194;
  undefined4 **local_190;
  undefined4 *puStack_18c;
  undefined4 local_188;
  undefined4 **ppuStack_184;
  undefined4 *puStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined4 ***local_e8;
  char *local_e4;
  char **local_e0;
  code *local_dc;
  uint ***local_d8;
  undefined8 local_d4;
  undefined4 uStack_cc;
  undefined4 **local_c8;
  undefined4 *local_c4;
  undefined4 uStack_c0;
  undefined4 **ppuStack_bc;
  undefined4 *puStack_b8;
  undefined4 local_b4;
  undefined4 **local_b0;
  undefined4 *local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  char *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  uint **local_60;
  undefined4 *local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  undefined4 local_38;
  undefined4 *local_34;
  uint local_30;
  
  local_281 = 1;
  puVar12 = (undefined4 *)(param_2 + 0x40);
  local_28c = "boser_bosminer::config::FanControl";
  local_288 = 0x22;
  local_290 = 10;
  local_294 = (uint **)0x3eed48;
  iVar1 = FUN_006c176c(*puVar12,*(undefined4 *)(param_2 + 0x44),"FanControl",10);
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)thunk_FUN_01be5118(10);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,10);
    }
    FUN_01bed4e2(puVar3,"FanControl",10);
    local_1d0 = 10;
    local_1d8 = (char ***)0xa;
    local_1d4 = puVar3;
    FUN_006a0cfc(&local_e8,1,"boser_bosminer::config::FanControl",0x22);
    FUN_006c2a34(&local_1a8,puVar12,&local_1d8,&local_e8);
    if (local_198 != (undefined4 *)0x80000006) {
      FUN_006b2000(&local_1a8);
    }
    local_e0 = (char **)0xa;
    local_e8 = (undefined4 ***)0x80000000;
    local_e4 = "FanControl";
    uVar4 = FUN_0160ec7c(local_280);
    uVar15 = thunk_FUN_01bee35a(uVar4,0x2c0);
    puVar11 = (uint *)((int)uVar15 + (int)((ulonglong)uVar15 >> 0x20));
    if ((char)puVar11[4] == '\0') {
      FUN_019ae6ac(&local_e8);
      *puVar11 = (uint)local_e8;
      puVar11[1] = (uint)local_e4;
      puVar11[2] = (uint)local_e0;
      puVar11[3] = (uint)local_dc;
      *(undefined1 *)(puVar11 + 4) = 1;
    }
    local_270 = *puVar11;
    uStack_26c = puVar11[1];
    local_264 = puVar11[3];
    local_258 = 0;
    local_260 = 0;
    local_25c = 8;
    puVar10 = puVar11 + 2;
    uStack_268 = *puVar10;
    *puVar11 = local_270 + 1;
    puVar11[1] = uStack_26c + (0xfffffffe < local_270);
    puStack_254 = &DAT_0056d238;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    uVar4 = 5;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(5);
    if (puVar3 == (undefined4 *)0x0) {
LAB_00b649d4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar4);
    }
    *(undefined1 *)(puVar3 + 1) = 100;
    *puVar3 = 0x65657073;
    local_228 = 5;
    local_230 = 5;
    local_22c = puVar3;
    puVar3 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,5);
    }
    *(undefined1 *)(puVar3 + 1) = 100;
    *puVar3 = 0x65657073;
    FUN_006e01d0(&local_1a8);
    FUN_00b65a04(&local_1d8,param_2);
    local_64 = 5;
    local_6c = 5;
    local_9c = 0x80000000;
    local_e0 = (char **)(undefined4 **)local_1a8;
    local_dc = (code *)local_1a8._4_4_;
    local_d8 = (uint ***)uStack_1a0;
    local_d4._0_4_ = ppuStack_19c;
    local_d4._4_4_ = local_198;
    uStack_cc = uStack_194;
    local_c8 = local_190;
    local_c4 = puStack_18c;
    uStack_c0 = local_188;
    ppuStack_bc = ppuStack_184;
    puStack_b8 = puStack_180;
    local_b4 = uStack_17c;
    local_60 = (uint **)local_1d8;
    local_5c = local_1d4;
    local_58 = local_1d0;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_50 = 4;
    local_3c = 0;
    local_e8 = (undefined4 ***)0x0;
    local_84 = 0x80000000;
    local_90 = 0x80000000;
    local_3b = 0;
    local_b0 = (undefined4 **)0x0;
    local_4c = 0;
    local_54 = 0;
    local_78 = 0x80000000;
    local_40 = 0;
    local_44 = 8;
    local_48 = 0;
    local_ac = (undefined4 *)0x0;
    local_68 = puVar3;
    FUN_006e10e8(&local_1a8,&local_270,&local_230,&local_e8);
    FUN_00b3bb58(&local_1a8);
    uVar4 = 7;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(7);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00b649d4;
    *(undefined4 *)((int)puVar3 + 3) = 0x736e6146;
    *puVar3 = 0x466e696d;
    local_228 = 7;
    local_230 = 7;
    local_22c = puVar3;
    puVar3 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,7);
    }
    *(undefined4 *)((int)puVar3 + 3) = 0x736e6146;
    *puVar3 = 0x466e696d;
    FUN_006e01d0(&local_1a8);
    FUN_00b65a04(&local_1d8,param_2);
    local_64 = 7;
    local_6c = 7;
    local_9c = 0x80000000;
    local_e0 = (char **)(undefined4 **)local_1a8;
    local_dc = (code *)local_1a8._4_4_;
    local_d8 = (uint ***)uStack_1a0;
    local_d4._0_4_ = ppuStack_19c;
    local_d4._4_4_ = local_198;
    uStack_cc = uStack_194;
    local_c8 = local_190;
    local_c4 = puStack_18c;
    uStack_c0 = local_188;
    ppuStack_bc = ppuStack_184;
    puStack_b8 = puStack_180;
    local_b4 = uStack_17c;
    local_60 = (uint **)local_1d8;
    local_5c = local_1d4;
    local_58 = local_1d0;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_3c = 0;
    local_3b = 0;
    local_50 = 4;
    local_e8 = (undefined4 ***)0x0;
    local_84 = 0x80000000;
    local_90 = 0x80000000;
    local_b0 = (undefined4 **)0x0;
    local_4c = 0;
    local_54 = 0;
    local_78 = 0x80000000;
    local_40 = 0;
    local_44 = 8;
    local_48 = 0;
    local_ac = (undefined4 *)0x0;
    local_68 = puVar3;
    FUN_006e10e8(&local_1a8,&local_270,&local_230,&local_e8);
    FUN_00b3bb58(&local_1a8);
    uVar4 = 9;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(9);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00b649d4;
    FUN_01bed4e2(puVar3,"minFanRpm",9);
    local_228 = 9;
    local_230 = 9;
    local_22c = puVar3;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(9);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(puVar3,"minFanRpm",9);
    FUN_006e01d0(&local_1a8);
    FUN_00b65a04(&local_1d8,param_2);
    local_64 = 9;
    local_6c = 9;
    local_9c = 0x80000000;
    local_e0 = (char **)(undefined4 **)local_1a8;
    local_dc = (code *)local_1a8._4_4_;
    local_d8 = (uint ***)uStack_1a0;
    local_d4._0_4_ = ppuStack_19c;
    local_d4._4_4_ = local_198;
    uStack_cc = uStack_194;
    local_c8 = local_190;
    local_c4 = puStack_18c;
    uStack_c0 = local_188;
    ppuStack_bc = ppuStack_184;
    puStack_b8 = puStack_180;
    local_b4 = uStack_17c;
    local_60 = (uint **)local_1d8;
    local_5c = local_1d4;
    local_58 = local_1d0;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_3c = 0;
    local_3b = 0;
    local_50 = 4;
    local_e8 = (undefined4 ***)0x0;
    local_84 = 0x80000000;
    local_90 = 0x80000000;
    local_b0 = (undefined4 **)0x0;
    local_4c = 0;
    local_54 = 0;
    local_78 = 0x80000000;
    local_40 = 0;
    local_44 = 8;
    local_48 = 0;
    local_ac = (undefined4 *)0x0;
    local_68 = puVar3;
    FUN_006e10e8(&local_1a8,&local_270,&local_230,&local_e8);
    FUN_00b3bb58(&local_1a8);
    uVar4 = 0xb;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(0xb);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00b649d4;
    FUN_01bed4e2(puVar3,"minFanSpeed",0xb);
    local_228 = 0xb;
    local_230 = 0xb;
    local_22c = puVar3;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(0xb);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xb);
    }
    FUN_01bed4e2(puVar3,"minFanSpeed",0xb);
    FUN_006e01d0(&local_1a8);
    FUN_00b65a04(&local_1d8,param_2);
    local_64 = 0xb;
    local_6c = 0xb;
    local_9c = 0x80000000;
    local_e0 = (char **)(undefined4 **)local_1a8;
    local_dc = (code *)local_1a8._4_4_;
    local_d8 = (uint ***)uStack_1a0;
    local_d4._0_4_ = ppuStack_19c;
    local_d4._4_4_ = local_198;
    uStack_cc = uStack_194;
    local_c8 = local_190;
    local_c4 = puStack_18c;
    uStack_c0 = local_188;
    ppuStack_bc = ppuStack_184;
    puStack_b8 = puStack_180;
    local_b4 = uStack_17c;
    local_60 = (uint **)local_1d8;
    local_5c = local_1d4;
    local_58 = local_1d0;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_3c = 0;
    local_3b = 0;
    local_50 = 4;
    local_e8 = (undefined4 ***)0x0;
    local_84 = 0x80000000;
    local_90 = 0x80000000;
    local_b0 = (undefined4 **)0x0;
    local_4c = 0;
    local_54 = 0;
    local_78 = 0x80000000;
    local_40 = 0;
    local_44 = 8;
    local_48 = 0;
    local_ac = (undefined4 *)0x0;
    local_68 = puVar3;
    FUN_006e10e8(&local_1a8,&local_270,&local_230,&local_e8);
    FUN_00b3bb58(&local_1a8);
    uVar4 = 0xb;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(0xb);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00b649d4;
    FUN_01bed4e2(puVar3,"maxFanSpeed",0xb);
    local_228 = 0xb;
    local_230 = 0xb;
    local_22c = puVar3;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(0xb);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xb);
    }
    FUN_01bed4e2(puVar3,"maxFanSpeed",0xb);
    FUN_006e01d0(&local_1a8);
    pppuVar13 = (uint ***)&local_1d8;
    FUN_00b65a04(pppuVar13,param_2);
    local_64 = 0xb;
    local_6c = 0xb;
    local_9c = 0x80000000;
    local_e0 = (char **)(undefined4 **)local_1a8;
    local_dc = (code *)local_1a8._4_4_;
    local_d8 = (uint ***)uStack_1a0;
    local_d4._0_4_ = ppuStack_19c;
    local_d4._4_4_ = local_198;
    uStack_cc = uStack_194;
    local_c8 = local_190;
    local_c4 = puStack_18c;
    uStack_c0 = local_188;
    ppuStack_bc = ppuStack_184;
    puStack_b8 = puStack_180;
    local_b4 = uStack_17c;
    local_60 = (uint **)local_1d8;
    local_5c = local_1d4;
    local_58 = local_1d0;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_84 = 0x80000000;
    local_3b = 0;
    local_90 = 0x80000000;
    local_78 = 0x80000000;
    local_3c = 0;
    local_e8 = (undefined4 ***)0x0;
    local_b0 = (undefined4 **)0x0;
    local_4c = 0;
    local_50 = 4;
    local_54 = 0;
    local_40 = 0;
    local_44 = 8;
    local_48 = 0;
    local_ac = (undefined4 *)0x0;
    local_68 = puVar3;
    FUN_006e10e8(&local_1a8,&local_270,&local_230,&local_e8);
    pppuVar14 = (undefined4 ***)&local_1a8;
    FUN_00b3bb58(pppuVar14);
    uVar4 = 5;
    local_238 = (undefined4 *)thunk_FUN_01be5118(5);
    if (local_238 == (undefined4 *)0x0) goto LAB_00b649d4;
    *(undefined1 *)(local_238 + 1) = 0x65;
    *local_238 = 0x73756170;
    local_234 = 5;
    local_23c = 5;
    puVar3 = (undefined4 *)thunk_FUN_01be5118(5);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,5);
    }
    *(undefined1 *)(puVar3 + 1) = 0x65;
    *puVar3 = 0x73756170;
    FUN_006e01d0(&local_230);
    local_1f4 = "boser_bosminer::config::PauseConfig";
    local_1e9 = 1;
    local_1f0 = 0x23;
    local_1f8 = 0xb;
    local_1fc = (uint **)0x3eed68;
    iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                         "PauseConfig",0xb);
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_01be5118(0xb);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xb);
      }
      FUN_01bed4e2(iVar1,"PauseConfig",0xb);
      local_1d0 = 0xb;
      local_1d8 = (char ***)0xb;
      local_1d4 = (undefined4 *)iVar1;
      FUN_006a0cfc(&local_e8,1,"boser_bosminer::config::PauseConfig",0x23);
      FUN_006c2a34(&local_1a8,puVar12,&local_1d8,&local_e8);
      if (local_198 != (undefined4 *)0x80000006) {
        FUN_006b2000(&local_1a8);
      }
      local_e4 = "PauseConfig";
      local_e0 = (char **)0xb;
      local_e8 = (undefined4 ***)0x80000000;
      FUN_0160ec7c(local_1e8,&local_e8);
      if ((char)puVar11[4] == '\0') {
        FUN_019ae6ac(&local_e8);
        *puVar11 = (uint)local_e8;
        puVar11[1] = (uint)local_e4;
        *puVar10 = (uint)local_e0;
        puVar11[3] = (uint)local_dc;
        *(undefined1 *)(puVar11 + 4) = 1;
      }
      local_1d8 = (char ***)*puVar11;
      local_1d4 = (undefined4 *)puVar11[1];
      local_1d0 = *puVar10;
      uStack_1cc = puVar11[3];
      *puVar11 = (int)local_1d8 + 1;
      puVar11[1] = (int)local_1d4 + (uint)((uint **)0xfffffffe < local_1d8);
      local_1c0 = 0;
      local_1c8 = 0;
      local_1c4 = 8;
      puStack_1bc = &DAT_0056d238;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uVar4 = 4;
      puVar12 = (undefined4 *)thunk_FUN_01be5118(4);
      if (puVar12 == (undefined4 *)0x0) {
LAB_00b64a60:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar4);
      }
      *puVar12 = 0x65646f6d;
      local_30 = 4;
      local_38 = 4;
      local_34 = puVar12;
      puVar12 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      *puVar12 = 0x65646f6d;
      FUN_006e01d0(&local_1a8);
      FUN_00b4d3c0(&local_e8,param_2);
      FUN_019bb7e0(local_e8,local_e4);
      puVar5 = (undefined4 *)FUN_01298504(0xc,1);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xc);
      }
      FUN_01bed4e2(puVar5,"PauseFanMode",0xc);
      local_64 = 4;
      local_6c = 4;
      local_9c = 0x80000000;
      local_e0 = (char **)(undefined4 **)local_1a8;
      local_dc = (code *)local_1a8._4_4_;
      local_d8 = (uint ***)uStack_1a0;
      local_d4._0_4_ = ppuStack_19c;
      local_d4._4_4_ = local_198;
      uStack_cc = uStack_194;
      local_c8 = local_190;
      local_c4 = puStack_18c;
      uStack_c0 = local_188;
      ppuStack_bc = ppuStack_184;
      puStack_b8 = puStack_180;
      local_b4 = uStack_17c;
      local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_58 = 0xc;
      local_3b = 0;
      local_60 = (uint **)0xc;
      local_3c = 0;
      local_e8 = (undefined4 ***)0x0;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_b0 = (undefined4 **)0x0;
      local_4c = 0;
      local_50 = 4;
      local_54 = 0;
      local_78 = 0x80000000;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = (undefined4 *)0x0;
      local_68 = puVar12;
      local_5c = puVar5;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_38,&local_e8);
      FUN_00b3bb58(&local_1a8);
      uVar4 = 0x10;
      iVar1 = thunk_FUN_01be5118(0x10);
      if (iVar1 == 0) goto LAB_00b64a60;
      FUN_01bed4e2(iVar1,"cooldownFanSpeed",0x10);
      local_ec = 0x10;
      local_f4 = 0x10;
      local_f0 = iVar1;
      puVar12 = (undefined4 *)thunk_FUN_01be5118(0x10);
      if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x10);
      }
      FUN_01bed4e2(puVar12,"cooldownFanSpeed",0x10);
      FUN_006e01d0(&local_1a8);
      FUN_00b65a04(&local_38,param_2);
      local_64 = 0x10;
      local_6c = 0x10;
      local_9c = 0x80000000;
      local_e0 = (char **)(undefined4 **)local_1a8;
      local_dc = (code *)local_1a8._4_4_;
      local_d8 = (uint ***)uStack_1a0;
      local_d4._0_4_ = ppuStack_19c;
      local_d4._4_4_ = local_198;
      uStack_cc = uStack_194;
      local_c8 = local_190;
      local_c4 = puStack_18c;
      uStack_c0 = local_188;
      ppuStack_bc = ppuStack_184;
      puStack_b8 = puStack_180;
      local_b4 = uStack_17c;
      local_60 = (uint **)local_38;
      local_5c = local_34;
      local_58 = local_30;
      local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_3c = 0;
      local_3b = 0;
      local_50 = 4;
      local_e8 = (undefined4 ***)0x0;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_b0 = (undefined4 **)0x0;
      local_4c = 0;
      local_54 = 0;
      local_78 = 0x80000000;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = (undefined4 *)0x0;
      local_68 = puVar12;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00b3bb58(&local_1a8);
      puVar11 = (uint *)((uint)&local_1a8 | 4);
      *puVar11 = (uint)local_1d8;
      puVar11[1] = (uint)local_1d4;
      puVar11[2] = local_1d0;
      puVar11[3] = uStack_1cc;
      puVar11[4] = local_1c8;
      puVar11[5] = local_1c4;
      puVar11[6] = local_1c0;
      puVar11[7] = (uint)puStack_1bc;
      puVar11[8] = uStack_1b8;
      puVar11[9] = uStack_1b4;
      puVar11[10] = uStack_1b0;
      puVar11[0xb] = uStack_1ac;
      local_90 = local_1e8[0];
      local_d8 = (uint ***)0x80000001;
      local_d4._0_4_ = (undefined4 **)local_1a8;
      local_d4._4_4_ = local_1a8._4_4_;
      uStack_cc = uStack_1a0;
      local_c8 = ppuStack_19c;
      local_c4 = local_198;
      uStack_c0 = uStack_194;
      ppuStack_bc = local_190;
      puStack_b8 = puStack_18c;
      local_b4 = local_188;
      local_b0 = ppuStack_184;
      local_ac = puStack_180;
      local_a8 = uStack_17c;
      uStack_a4 = uStack_178;
      local_54 = 0;
      local_70 = 0;
      local_78 = 0;
      local_4c = local_4c & 0xffff0000;
      local_50 = 0x10000;
      local_60 = (uint **)0x80000000;
      local_6c = 0x80000000;
      local_74 = 8;
      local_80 = 4;
      local_7c = 0;
      local_84 = 0;
      local_94 = 0x23;
      local_a0 = 0;
      local_98 = "boser_bosminer::config::PauseConfig";
      local_9c = CONCAT31(local_9c._1_3_,1);
      iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                           "PauseConfig",0xb);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_006b2000();
      FUN_01bed4e2(iVar1,&local_e8,0xb0);
    }
    else {
      uVar15 = FUN_006a71d4();
      puVar7 = (undefined1 *)((ulonglong)uVar15 >> 0x20);
      iVar2 = (int)uVar15;
      if (iVar2 != 0) {
        local_1a8 = uVar15;
        if (puVar7 == &DAT_00000023) {
          iVar2 = thunk_FUN_01bed842("boser_bosminer::config::PauseConfig",iVar2,0x23);
          if (iVar2 != 0) goto LAB_00b645bc;
        }
        else {
          if (puVar7 == &DAT_0000000d) {
            iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
            if (iVar2 == 0) goto LAB_00b645f4;
          }
LAB_00b645bc:
          iVar2 = FUN_006e5bc0(param_2 + 0x20,"PauseConfig",0xb);
          if (iVar2 == 0) {
            pppuVar13 = &local_1fc;
            local_e0 = &local_1f4;
            puVar9 = &DAT_01c226d0;
            puVar6 = &DAT_00572c5c;
            local_dc = (code *)&DAT_0132b6a0;
            goto LAB_00b649ac;
          }
        }
        uVar8 = 2;
        if ((int)*(uint *)(iVar1 + 0x10) < 0) {
          uVar8 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
        }
        if (uVar8 != 1) {
          pppuVar14 = &local_1fc;
          puVar9 = &DAT_01c226e0;
          local_1d8 = (char ***)CONCAT31(local_1d8._1_3_,(char)uVar8);
          puVar6 = &DAT_005b5680;
          local_dc = FUN_006a7514;
          local_e0 = (char **)&local_1e9;
LAB_00b649ac:
          local_e4 = (char *)&DAT_0132b6a0;
          local_e8 = pppuVar14;
          local_d8 = pppuVar13;
          local_d4._0_4_ = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar6,&local_e8,puVar9);
        }
      }
    }
LAB_00b645f4:
    local_1d4 = (undefined4 *)&LAB_012b97d8;
    local_e0 = (char **)0xb;
    local_e4 = "PauseConfig";
    local_e8 = (undefined4 ***)0x80000000;
    local_1d8 = (char ***)&local_e8;
    FUN_00664898(&local_1a8,&DAT_0057a667,&local_1d8);
    uVar15 = local_1a8;
    if (local_e8 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_e8,local_e4);
      uVar15 = local_1a8;
    }
    local_1a8._4_4_ = (undefined4 *)((ulonglong)uVar15 >> 0x20);
    local_1a8._0_4_ = (undefined4 **)uVar15;
    FUN_019bb7e0((undefined4 **)local_1a8,local_1a8._4_4_);
    local_1a8 = uVar15;
    puVar12 = (undefined4 *)thunk_FUN_01be5118(0xb);
    if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xb);
    }
    FUN_01bed4e2(puVar12,"PauseConfig",0xb);
    local_64 = 5;
    local_6c = 5;
    local_9c = 0x80000000;
    local_e0 = (char **)local_230;
    local_dc = (code *)local_22c;
    local_d8 = (uint ***)local_228;
    local_d4._0_4_ = (undefined4 **)uStack_224;
    local_d4._4_4_ = (undefined4 *)uStack_220;
    uStack_cc = uStack_21c;
    local_c8 = (undefined4 **)local_218;
    local_c4 = (undefined4 *)uStack_214;
    uStack_c0 = uStack_210;
    ppuStack_bc = (undefined4 **)uStack_20c;
    puStack_b8 = (undefined4 *)uStack_208;
    local_b4 = uStack_204;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_3b = 0;
    local_50 = 4;
    local_58 = 0xb;
    local_60 = (uint **)0xb;
    local_3c = 0;
    local_e8 = (undefined4 ***)0x0;
    local_84 = 0x80000000;
    local_90 = 0x80000000;
    local_b0 = (undefined4 **)0x0;
    local_4c = 0;
    local_54 = 0;
    local_78 = 0x80000000;
    local_40 = 0;
    local_44 = 8;
    local_48 = 0;
    local_ac = (undefined4 *)0x0;
    local_68 = puVar3;
    local_5c = puVar12;
    FUN_006e10e8(&local_1a8,&local_270,&local_23c,&local_e8);
    FUN_00b3bb58(&local_1a8);
    puVar11 = (uint *)((uint)&local_1a8 | 4);
    *puVar11 = local_270;
    puVar11[1] = uStack_26c;
    puVar11[2] = uStack_268;
    puVar11[3] = local_264;
    puVar11[4] = local_260;
    puVar11[5] = local_25c;
    puVar11[6] = local_258;
    puVar11[7] = (uint)puStack_254;
    puVar11[8] = uStack_250;
    puVar11[9] = uStack_24c;
    puVar11[10] = uStack_248;
    puVar11[0xb] = uStack_244;
    local_d8 = (uint ***)0x80000001;
    uStack_cc = uStack_1a0;
    local_c8 = ppuStack_19c;
    local_c4 = local_198;
    uStack_c0 = uStack_194;
    ppuStack_bc = local_190;
    puStack_b8 = puStack_18c;
    local_b4 = local_188;
    local_b0 = ppuStack_184;
    local_ac = puStack_180;
    local_a8 = uStack_17c;
    uStack_a4 = uStack_178;
    local_54 = 0;
    local_70 = 0;
    local_78 = 0;
    local_4c = local_4c & 0xffff0000;
    local_50 = 0x10000;
    local_60 = (uint **)0x80000000;
    local_6c = 0x80000000;
    local_74 = 8;
    local_80 = 4;
    local_7c = 0;
    local_84 = 0;
    local_94 = 0x22;
    local_a0 = 0;
    local_98 = "boser_bosminer::config::FanControl";
    local_9c = CONCAT31(local_9c._1_3_,1);
    local_d4 = local_1a8;
    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                         "FanControl",10);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_006b2000();
    FUN_01bed4e2(iVar1,&local_e8,0xb0);
    goto LAB_00b64830;
  }
  uVar15 = FUN_006a71d4();
  puVar7 = (undefined1 *)((ulonglong)uVar15 >> 0x20);
  iVar2 = (int)uVar15;
  if (iVar2 == 0) goto LAB_00b64830;
  local_1a8 = uVar15;
  if (puVar7 == &DAT_00000022) {
    iVar2 = thunk_FUN_01bed842("boser_bosminer::config::FanControl",iVar2,0x22);
    if (iVar2 != 0) goto LAB_00b64524;
  }
  else {
    if (puVar7 == &DAT_0000000d) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00b64830;
    }
LAB_00b64524:
    iVar2 = FUN_006e5bc0(param_2 + 0x20,"FanControl",10);
    if (iVar2 == 0) {
      local_d8 = &local_294;
      puVar9 = &DAT_01c226d0;
      puVar6 = &DAT_00572c5c;
      local_e0 = &local_28c;
      local_dc = (code *)&DAT_0132b6a0;
      local_e8 = (undefined4 ***)&local_1a8;
      goto LAB_00b64934;
    }
  }
  uVar8 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar8 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar8 == 1) {
LAB_00b64830:
    local_e0 = (char **)0xa;
    local_e8 = (undefined4 ***)0x80000000;
    local_1d8 = (char ***)&local_e8;
    local_e4 = "FanControl";
    local_1d4 = (undefined4 *)&LAB_012b97d8;
    FUN_00664898(&local_1a8,&DAT_0057a667,&local_1d8);
    uVar15 = local_1a8;
    if (local_e8 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_e8,local_e4);
      uVar15 = local_1a8;
    }
    local_1a8._4_4_ = (undefined4 *)((ulonglong)uVar15 >> 0x20);
    local_1a8._0_4_ = (undefined4 **)uVar15;
    FUN_019bb7e0((undefined4 **)local_1a8,local_1a8._4_4_);
    local_1a8 = uVar15;
    iVar1 = thunk_FUN_01be5118(10);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,10);
    }
    FUN_01bed4e2(iVar1,"FanControl",10);
    *param_1 = 10;
    param_1[1] = iVar1;
    param_1[2] = 10;
    return;
  }
  local_d8 = (uint ***)&local_1d8;
  local_e0 = (char **)&local_281;
  puVar9 = &DAT_01c226e0;
  local_1d8 = (char ***)CONCAT31(local_1d8._1_3_,(char)uVar8);
  puVar6 = &DAT_005b5680;
  local_dc = FUN_006a7514;
  local_e8 = &local_294;
LAB_00b64934:
  local_e4 = (char *)&DAT_0132b6a0;
  local_d4._0_4_ = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar6,&local_e8,puVar9);
}

