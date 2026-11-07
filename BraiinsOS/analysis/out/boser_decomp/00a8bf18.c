// FUN_00a8bf18 @ 00a8bf18 size=5560 calls_out=23 calls_in=2
// strings: boser::web::graphql::bosminer::configurator::autotuning::AutotuningError | AutotuningError | AutotuningError | __fake_type__ | AutotuningError | boser::web::graphql::bosminer::configurator::autotuning::AutotuningError

void FUN_00a8bf18(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined *puVar9;
  uint *puVar10;
  uint ***pppuVar11;
  undefined4 ***pppuVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
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
  int local_238;
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
  undefined1 *local_1d4;
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
  int local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  uint **local_38;
  int iStack_34;
  uint uStack_30;
  
  local_281 = 1;
  puVar13 = (undefined4 *)(param_2 + 0x40);
  local_28c = "boser::web::graphql::bosminer::configurator::autotuning::AutotuningError";
  local_288 = 0x48;
  local_290 = 0xf;
  local_294 = (uint **)0x3e82a8;
  iVar1 = FUN_006c176c(*puVar13,*(undefined4 *)(param_2 + 0x44),"AutotuningError",0xf);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_01be5118(0xf);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xf);
    }
    FUN_01bed4e2(iVar1,"AutotuningError",0xf);
    local_1d0 = 0xf;
    local_1d8 = (char ***)0xf;
    local_1d4 = (undefined1 *)iVar1;
    FUN_006a0cfc(&local_e8,1,
                 "boser::web::graphql::bosminer::configurator::autotuning::AutotuningError",0x48);
    FUN_006c2a34(&local_1a8,puVar13,&local_1d8,&local_e8);
    if (local_198 != (undefined4 *)0x80000006) {
      FUN_00abf870(&local_1a8);
    }
    local_e4 = "AutotuningError";
    local_e0 = (char **)0xf;
    local_e8 = (undefined4 ***)0x80000000;
    uVar3 = FUN_0160ec7c(local_280);
    uVar14 = thunk_FUN_01bee35a(uVar3,0x2c0);
    puVar10 = (uint *)((int)uVar14 + (int)((ulonglong)uVar14 >> 0x20));
    if ((char)puVar10[4] == '\0') {
      FUN_019ae6ac(&local_e8);
      *puVar10 = (uint)local_e8;
      puVar10[1] = (uint)local_e4;
      puVar10[2] = (uint)local_e0;
      puVar10[3] = (uint)local_dc;
      *(undefined1 *)(puVar10 + 4) = 1;
    }
    local_270 = *puVar10;
    uStack_26c = puVar10[1];
    local_264 = puVar10[3];
    puVar8 = puVar10 + 2;
    uStack_268 = *puVar8;
    local_258 = 0;
    local_25c = 8;
    local_260 = 0;
    *puVar10 = local_270 + 1;
    puVar10[1] = uStack_26c + (0xfffffffe < local_270);
    puStack_254 = &DAT_0056d238;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    uVar3 = 7;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(7);
    if (puVar4 == (undefined4 *)0x0) {
LAB_00a8d40c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar3);
    }
    *(undefined4 *)((int)puVar4 + 3) = 0x65676173;
    *puVar4 = 0x7373656d;
    local_228 = 7;
    local_230 = 7;
    local_22c = puVar4;
    puVar4 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,7);
    }
    *(undefined4 *)((int)puVar4 + 3) = 0x65676173;
    *puVar4 = 0x7373656d;
    FUN_006e01d0(&local_1a8);
    FUN_006c86e0(&local_1d8,param_2);
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
    local_5c = (int)local_1d4;
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
    local_68 = puVar4;
    FUN_006e10e8(&local_1a8,&local_270,&local_230,&local_e8);
    FUN_00abfaf0(&local_1a8);
    uVar3 = 4;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00a8d40c;
    *puVar4 = 0x65646f6d;
    local_228 = 4;
    local_230 = 4;
    local_22c = puVar4;
    puVar4 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    *puVar4 = 0x65646f6d;
    FUN_006e01d0(&local_1a8);
    FUN_006c05b8(&local_1d8,param_2);
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
    local_60 = (uint **)local_1d8;
    local_5c = (int)local_1d4;
    local_58 = local_1d0;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_3c = 0;
    local_e8 = (undefined4 ***)0x0;
    local_3b = 0;
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
    local_68 = puVar4;
    FUN_006e10e8(&local_1a8,&local_270,&local_230,&local_e8);
    FUN_00abfaf0(&local_1a8);
    uVar3 = 0xb;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0xb);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00a8d40c;
    FUN_01bed4e2(puVar4,"powerTarget",0xb);
    local_228 = 0xb;
    local_230 = 0xb;
    local_22c = puVar4;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0xb);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xb);
    }
    FUN_01bed4e2(puVar4,"powerTarget",0xb);
    FUN_006e01d0(&local_1a8);
    FUN_006c05b8(&local_1d8,param_2);
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
    local_5c = (int)local_1d4;
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
    local_68 = puVar4;
    FUN_006e10e8(&local_1a8,&local_270,&local_230,&local_e8);
    FUN_00abfaf0(&local_1a8);
    uVar3 = 0xe;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0xe);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00a8d40c;
    FUN_01bed4e2(puVar4,"hashrateTarget",0xe);
    local_228 = 0xe;
    local_230 = 0xe;
    local_22c = puVar4;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0xe);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xe);
    }
    FUN_01bed4e2(puVar4,"hashrateTarget",0xe);
    FUN_006e01d0(&local_1a8);
    pppuVar11 = (uint ***)&local_1d8;
    FUN_006c05b8(pppuVar11,param_2);
    local_64 = 0xe;
    local_6c = 0xe;
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
    local_5c = (int)local_1d4;
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
    local_68 = puVar4;
    FUN_006e10e8(&local_1a8,&local_270,&local_230,&local_e8);
    pppuVar12 = (undefined4 ***)&local_1a8;
    FUN_00abfaf0(pppuVar12);
    uVar3 = 0x12;
    iVar1 = thunk_FUN_01be5118(0x12);
    if (iVar1 == 0) goto LAB_00a8d40c;
    FUN_01bed4e2(iVar1,"performanceScaling",0x12);
    local_234 = 0x12;
    local_23c = 0x12;
    local_238 = iVar1;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0x12);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x12);
    }
    FUN_01bed4e2(puVar4,"performanceScaling",0x12);
    FUN_006e01d0(&local_230);
    local_1f4 = "boser::web::graphql::bosminer::configurator::autotuning::PerformanceScalingError";
    local_1e9 = 1;
    local_1f0 = 0x50;
    local_1f8 = 0x17;
    local_1fc = (uint **)0x3e82f8;
    iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                         "PerformanceScalingError",0x17);
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_01be5118(0x17);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x17);
      }
      FUN_01bed4e2(iVar1,"PerformanceScalingError",0x17);
      local_1d0 = 0x17;
      local_1d8 = (char ***)0x17;
      local_1d4 = (undefined1 *)iVar1;
      FUN_006a0cfc(&local_e8,1,
                   "boser::web::graphql::bosminer::configurator::autotuning::PerformanceScalingError"
                   ,0x50);
      FUN_006c2a34(&local_1a8,puVar13,&local_1d8,&local_e8);
      if (local_198 != (undefined4 *)0x80000006) {
        FUN_00abf870(&local_1a8);
      }
      local_e4 = "PerformanceScalingError";
      local_e0 = (char **)0x17;
      local_e8 = (undefined4 ***)0x80000000;
      FUN_0160ec7c(local_1e8,&local_e8);
      if ((char)puVar10[4] == '\0') {
        FUN_019ae6ac(&local_e8);
        *puVar10 = (uint)local_e8;
        puVar10[1] = (uint)local_e4;
        *puVar8 = (uint)local_e0;
        puVar10[3] = (uint)local_dc;
        *(undefined1 *)(puVar10 + 4) = 1;
      }
      local_1d8 = (char ***)*puVar10;
      local_1d4 = (undefined1 *)puVar10[1];
      local_1d0 = *puVar8;
      uStack_1cc = puVar10[3];
      local_1c0 = 0;
      *puVar10 = (int)local_1d8 + 1;
      puVar10[1] = (int)local_1d4 + (uint)((uint **)0xfffffffe < local_1d8);
      local_1c8 = 0;
      local_1c4 = 8;
      puStack_1bc = &DAT_0056d238;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uVar3 = 9;
      iVar1 = thunk_FUN_01be5118(9);
      if (iVar1 == 0) {
LAB_00a8d41c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar3);
      }
      FUN_01bed4e2(iVar1,"powerStep",9);
      local_ec = 9;
      local_f4 = 9;
      local_f0 = iVar1;
      puVar13 = (undefined4 *)thunk_FUN_01be5118(9);
      if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,9);
      }
      FUN_01bed4e2(puVar13,"powerStep",9);
      FUN_006e01d0(&local_1a8);
      FUN_006c05b8(&local_38,param_2);
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
      local_60 = local_38;
      local_5c = iStack_34;
      local_58 = uStack_30;
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
      local_68 = puVar13;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      uVar3 = 0xe;
      iVar1 = thunk_FUN_01be5118(0xe);
      if (iVar1 == 0) goto LAB_00a8d41c;
      FUN_01bed4e2(iVar1,"minPowerTarget",0xe);
      local_ec = 0xe;
      local_f4 = 0xe;
      local_f0 = iVar1;
      puVar13 = (undefined4 *)thunk_FUN_01be5118(0xe);
      if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xe);
      }
      FUN_01bed4e2(puVar13,"minPowerTarget",0xe);
      FUN_006e01d0(&local_1a8);
      FUN_006c05b8(&local_38,param_2);
      local_64 = 0xe;
      local_6c = 0xe;
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
      local_60 = local_38;
      local_5c = iStack_34;
      local_58 = uStack_30;
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
      local_68 = puVar13;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      uVar3 = 0xc;
      iVar1 = thunk_FUN_01be5118(0xc);
      if (iVar1 == 0) goto LAB_00a8d41c;
      FUN_01bed4e2(iVar1,"hashrateStep",0xc);
      local_ec = 0xc;
      local_f4 = 0xc;
      local_f0 = iVar1;
      puVar13 = (undefined4 *)thunk_FUN_01be5118(0xc);
      if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xc);
      }
      FUN_01bed4e2(puVar13,"hashrateStep",0xc);
      FUN_006e01d0(&local_1a8);
      FUN_006c05b8(&local_38,param_2);
      local_64 = 0xc;
      local_6c = 0xc;
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
      local_60 = local_38;
      local_5c = iStack_34;
      local_58 = uStack_30;
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
      local_68 = puVar13;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      uVar3 = 0x11;
      iVar1 = thunk_FUN_01be5118(0x11);
      if (iVar1 == 0) goto LAB_00a8d41c;
      FUN_01bed4e2(iVar1,"minHashrateTarget",0x11);
      local_ec = 0x11;
      local_f4 = 0x11;
      local_f0 = iVar1;
      puVar13 = (undefined4 *)thunk_FUN_01be5118(0x11);
      if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x11);
      }
      FUN_01bed4e2(puVar13,"minHashrateTarget",0x11);
      FUN_006e01d0(&local_1a8);
      FUN_006c05b8(&local_38,param_2);
      local_64 = 0x11;
      local_6c = 0x11;
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
      local_60 = local_38;
      local_5c = iStack_34;
      local_58 = uStack_30;
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
      local_68 = puVar13;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      uVar3 = 0x10;
      iVar1 = thunk_FUN_01be5118(0x10);
      if (iVar1 == 0) goto LAB_00a8d41c;
      FUN_01bed4e2(iVar1,&DAT_0056ad28,0x10);
      local_ec = 0x10;
      local_f4 = 0x10;
      local_f0 = iVar1;
      puVar13 = (undefined4 *)thunk_FUN_01be5118(0x10);
      if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x10);
      }
      FUN_01bed4e2(puVar13,&DAT_0056ad28,0x10);
      FUN_006e01d0(&local_1a8);
      FUN_006c05b8(&local_38,param_2);
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
      local_60 = local_38;
      local_5c = iStack_34;
      local_58 = uStack_30;
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
      local_68 = puVar13;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      uVar3 = 0x14;
      iVar1 = thunk_FUN_01be5118(0x14);
      if (iVar1 == 0) goto LAB_00a8d41c;
      FUN_01bed4e2(iVar1,"onStartTa",0x14);
      local_ec = 0x14;
      local_f4 = 0x14;
      local_f0 = iVar1;
      puVar13 = (undefined4 *)thunk_FUN_01be5118(0x14);
      if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x14);
      }
      FUN_01bed4e2(puVar13,"onStartTa",0x14);
      FUN_006e01d0(&local_1a8);
      FUN_006c05b8(&local_38,param_2);
      local_64 = 0x14;
      local_6c = 0x14;
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
      local_60 = local_38;
      local_5c = iStack_34;
      local_58 = uStack_30;
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
      local_68 = puVar13;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      puVar10 = (uint *)((uint)&local_1a8 | 4);
      *puVar10 = (uint)local_1d8;
      puVar10[1] = (uint)local_1d4;
      puVar10[2] = local_1d0;
      puVar10[3] = uStack_1cc;
      puVar10[4] = local_1c8;
      puVar10[5] = local_1c4;
      puVar10[6] = local_1c0;
      puVar10[7] = (uint)puStack_1bc;
      puVar10[8] = uStack_1b8;
      puVar10[9] = uStack_1b4;
      puVar10[10] = uStack_1b0;
      puVar10[0xb] = uStack_1ac;
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
      local_94 = 0x50;
      local_a0 = 0;
      local_98 = "boser::web::graphql::bosminer::configurator::autotuning::PerformanceScalingError";
      local_9c = CONCAT31(local_9c._1_3_,1);
      iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                           "PerformanceScalingError",0x17);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar1,&local_e8,0xb0);
    }
    else {
      uVar14 = FUN_006a71d4();
      puVar6 = (undefined1 *)((ulonglong)uVar14 >> 0x20);
      iVar2 = (int)uVar14;
      if (iVar2 != 0) {
        local_1a8 = uVar14;
        if (puVar6 == &DAT_00000050) {
          iVar2 = thunk_FUN_01bed842("boser::web::graphql::bosminer::configurator::autotuning::PerformanceScalingError"
                                     ,iVar2,0x50);
          if (iVar2 != 0) goto LAB_00a8d03c;
        }
        else {
          if (puVar6 == &DAT_0000000d) {
            iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
            if (iVar2 == 0) goto LAB_00a8d074;
          }
LAB_00a8d03c:
          iVar2 = FUN_015db690(param_2 + 0x20,"PerformanceScalingError",0x17);
          if (iVar2 == 0) {
            pppuVar11 = &local_1fc;
            local_e0 = &local_1f4;
            puVar9 = &DAT_01c226d0;
            puVar5 = &DAT_00572c5c;
            local_dc = (code *)&DAT_0132b6a0;
            goto LAB_00a8d3e4;
          }
        }
        uVar7 = 2;
        if ((int)*(uint *)(iVar1 + 0x10) < 0) {
          uVar7 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
        }
        if (uVar7 != 1) {
          pppuVar12 = &local_1fc;
          puVar9 = &DAT_01c226e0;
          local_1d8 = (char ***)CONCAT31(local_1d8._1_3_,(char)uVar7);
          puVar5 = &DAT_005b5680;
          local_dc = FUN_006a7514;
          local_e0 = (char **)&local_1e9;
LAB_00a8d3e4:
          local_e4 = (char *)&DAT_0132b6a0;
          local_e8 = pppuVar12;
          local_d8 = pppuVar11;
          local_d4._0_4_ = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar5,&local_e8,puVar9);
        }
      }
    }
LAB_00a8d074:
    local_e0 = (char **)0x17;
    local_e4 = "PerformanceScalingError";
    local_e8 = (undefined4 ***)0x80000000;
    local_1d4 = &LAB_012b97d8;
    local_1d8 = (char ***)&local_e8;
    FUN_00664898(&local_1a8,&DAT_0057a667,&local_1d8);
    uVar14 = local_1a8;
    if (local_e8 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_e8,local_e4);
      uVar14 = local_1a8;
    }
    local_1a8._4_4_ = (undefined4 *)((ulonglong)uVar14 >> 0x20);
    local_1a8._0_4_ = (undefined4 **)uVar14;
    FUN_019bb7e0((undefined4 **)local_1a8,local_1a8._4_4_);
    local_1a8 = uVar14;
    iVar1 = thunk_FUN_01be5118(0x17);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x17);
    }
    FUN_01bed4e2(iVar1,"PerformanceScalingError",0x17);
    local_64 = 0x12;
    local_6c = 0x12;
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
    local_58 = 0x17;
    local_60 = (uint **)0x17;
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
    local_68 = puVar4;
    local_5c = iVar1;
    FUN_006e10e8(&local_1a8,&local_270,&local_23c,&local_e8);
    FUN_00abfaf0(&local_1a8);
    puVar10 = (uint *)((uint)&local_1a8 | 4);
    *puVar10 = local_270;
    puVar10[1] = uStack_26c;
    puVar10[2] = uStack_268;
    puVar10[3] = local_264;
    puVar10[4] = local_260;
    puVar10[5] = local_25c;
    puVar10[6] = local_258;
    puVar10[7] = (uint)puStack_254;
    puVar10[8] = uStack_250;
    puVar10[9] = uStack_24c;
    puVar10[10] = uStack_248;
    puVar10[0xb] = uStack_244;
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
    local_94 = 0x48;
    local_a0 = 0;
    local_98 = "boser::web::graphql::bosminer::configurator::autotuning::AutotuningError";
    local_9c = CONCAT31(local_9c._1_3_,1);
    local_d4 = local_1a8;
    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                         "AutotuningError",0xf);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar1,&local_e8,0xb0);
    goto LAB_00a8d2b4;
  }
  uVar14 = FUN_006a71d4();
  puVar6 = (undefined1 *)((ulonglong)uVar14 >> 0x20);
  iVar2 = (int)uVar14;
  if (iVar2 == 0) goto LAB_00a8d2b4;
  local_1a8 = uVar14;
  if (puVar6 == &DAT_00000048) {
    iVar2 = thunk_FUN_01bed842("boser::web::graphql::bosminer::configurator::autotuning::AutotuningError"
                               ,iVar2,0x48);
    if (iVar2 != 0) goto LAB_00a8cfb0;
  }
  else {
    if (puVar6 == &DAT_0000000d) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00a8d2b4;
    }
LAB_00a8cfb0:
    iVar2 = FUN_015db690(param_2 + 0x20,"AutotuningError",0xf);
    if (iVar2 == 0) {
      local_d8 = &local_294;
      puVar9 = &DAT_01c226d0;
      puVar5 = &DAT_00572c5c;
      local_e0 = &local_28c;
      local_dc = (code *)&DAT_0132b6a0;
      local_e8 = (undefined4 ***)&local_1a8;
      goto LAB_00a8d36c;
    }
  }
  uVar7 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar7 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar7 == 1) {
LAB_00a8d2b4:
    local_e0 = (char **)0xf;
    local_e8 = (undefined4 ***)0x80000000;
    local_1d8 = (char ***)&local_e8;
    local_e4 = "AutotuningError";
    local_1d4 = &LAB_012b97d8;
    FUN_00664898(&local_1a8,&DAT_0057a667,&local_1d8);
    if (local_e8 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_e8,local_e4);
    }
    *param_1 = local_1a8;
    *(undefined4 *)(param_1 + 1) = uStack_1a0;
    return;
  }
  local_d8 = (uint ***)&local_1d8;
  local_e0 = (char **)&local_281;
  puVar9 = &DAT_01c226e0;
  local_1d8 = (char ***)CONCAT31(local_1d8._1_3_,(char)uVar7);
  puVar5 = &DAT_005b5680;
  local_dc = FUN_006a7514;
  local_e8 = &local_294;
LAB_00a8d36c:
  local_e4 = (char *)&DAT_0132b6a0;
  local_d4._0_4_ = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar5,&local_e8,puVar9);
}

