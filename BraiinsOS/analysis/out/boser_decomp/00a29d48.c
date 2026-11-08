// FUN_00a29d48 @ 00a29d48 size=4400 calls_out=25 calls_in=2
// strings: boser::web::graphql::bosminer::configurator::performance::PerformanceError | __fake_type__ | boser::web::graphql::bosminer::configurator::performance::PerformanceError | globalFrequency | globalFrequency | globalVoltage

void FUN_00a29d48(undefined8 *param_1,int param_2)

{
  undefined4 **ppuVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 ***pppuVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint ***pppuVar17;
  undefined8 uVar18;
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
  uint uStack_1a0;
  undefined4 **ppuStack_19c;
  undefined4 *local_198;
  uint uStack_194;
  undefined4 **local_190;
  undefined4 *puStack_18c;
  uint local_188;
  undefined4 **ppuStack_184;
  undefined4 *puStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  undefined4 local_f4;
  undefined4 *local_f0;
  undefined4 local_ec;
  undefined4 ***local_e8;
  char *local_e4;
  char **local_e0;
  code *local_dc;
  uint ***local_d8;
  undefined8 local_d4;
  uint uStack_cc;
  undefined4 **local_c8;
  undefined4 *local_c4;
  uint uStack_c0;
  undefined4 **ppuStack_bc;
  undefined4 *puStack_b8;
  uint local_b4;
  undefined4 **local_b0;
  undefined4 *local_ac;
  uint local_a8;
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
  uint local_5c;
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
  uint uStack_34;
  uint uStack_30;
  
  local_281 = 1;
  puVar15 = (undefined4 *)(param_2 + 0x40);
  local_28c = "boser::web::graphql::bosminer::configurator::performance::PerformanceError";
  local_288 = 0x4a;
  local_290 = 0x10;
  local_294 = (uint **)&DAT_005696e8;
  iVar2 = FUN_006c176c(*puVar15,*(undefined4 *)(param_2 + 0x44),&DAT_005696e8,0x10);
  if (iVar2 == 0) {
    uVar9 = thunk_FUN_01be5118(0x10);
    if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x10);
    }
    FUN_01bed4e2(uVar9,&DAT_005696e8,0x10);
    local_1d0 = 0x10;
    local_1d8 = (char ***)0x10;
    local_1d4 = (undefined1 *)uVar9;
    FUN_006a0cfc(&local_e8,1,
                 "boser::web::graphql::bosminer::configurator::performance::PerformanceError",0x4a);
    FUN_006c2a34(&local_1a8,puVar15,&local_1d8,&local_e8);
    if (local_198 != (undefined4 *)0x80000006) {
      FUN_00abf870(&local_1a8);
    }
    local_e4 = &DAT_005696e8;
    local_e0 = (char **)0x10;
    local_e8 = (undefined4 ***)0x80000000;
    uVar4 = FUN_0160ec7c(local_280);
    uVar18 = thunk_FUN_01bee35a(uVar4,0x2c0);
    puVar14 = (uint *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
    if ((char)puVar14[4] == '\0') {
      FUN_019ae6ac(&local_e8);
      *puVar14 = (uint)local_e8;
      puVar14[1] = (uint)local_e4;
      puVar14[2] = (uint)local_e0;
      puVar14[3] = (uint)local_dc;
      *(undefined1 *)(puVar14 + 4) = 1;
    }
    local_270 = *puVar14;
    uStack_26c = puVar14[1];
    local_264 = puVar14[3];
    puVar10 = puVar14 + 2;
    uStack_268 = *puVar10;
    local_258 = 0;
    local_25c = 8;
    local_260 = 0;
    *puVar14 = local_270 + 1;
    puVar14[1] = uStack_26c + (0xfffffffe < local_270);
    puStack_254 = &DAT_0056d238;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    uVar4 = 7;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(7);
    if (puVar5 == (undefined4 *)0x0) {
LAB_00a2ade8:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar4);
    }
    *(undefined4 *)((int)puVar5 + 3) = 0x65676173;
    *puVar5 = 0x7373656d;
    local_228 = 7;
    local_230 = 7;
    local_22c = puVar5;
    puVar5 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,7);
    }
    *(undefined4 *)((int)puVar5 + 3) = 0x65676173;
    *puVar5 = 0x7373656d;
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
    local_5c = (uint)local_1d4;
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
    local_68 = puVar5;
    FUN_006e10e8(&local_1a8,&local_270,&local_230,&local_e8);
    FUN_00abfaf0(&local_1a8);
    uVar4 = 0xf;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0xf);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00a2ade8;
    FUN_01bed4e2(puVar5,"globalFrequency",0xf);
    local_228 = 0xf;
    local_230 = 0xf;
    local_22c = puVar5;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0xf);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xf);
    }
    FUN_01bed4e2(puVar5,"globalFrequency",0xf);
    FUN_006e01d0(&local_1a8);
    FUN_006c05b8(&local_1d8,param_2);
    local_64 = 0xf;
    local_6c = 0xf;
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
    local_5c = (uint)local_1d4;
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
    local_68 = puVar5;
    FUN_006e10e8(&local_1a8,&local_270,&local_230,&local_e8);
    FUN_00abfaf0(&local_1a8);
    uVar4 = 0xd;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0xd);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00a2ade8;
    FUN_01bed4e2(puVar5,"globalVoltage",0xd);
    local_228 = 0xd;
    local_230 = 0xd;
    local_22c = puVar5;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0xd);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xd);
    }
    FUN_01bed4e2(puVar5,"globalVoltage",0xd);
    FUN_006e01d0(&local_1a8);
    pppuVar17 = (uint ***)&local_1d8;
    FUN_006c05b8(pppuVar17,param_2);
    local_64 = 0xd;
    local_6c = 0xd;
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
    local_5c = (uint)local_1d4;
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
    local_68 = puVar5;
    FUN_006e10e8(&local_1a8,&local_270,&local_230,&local_e8);
    pppuVar13 = (undefined4 ***)&local_1a8;
    FUN_00abfaf0(pppuVar13);
    uVar4 = 10;
    iVar2 = thunk_FUN_01be5118(10);
    if (iVar2 == 0) goto LAB_00a2ade8;
    FUN_01bed4e2(iVar2,"hashChains",10);
    local_234 = 10;
    local_23c = 10;
    local_238 = iVar2;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(10);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,10);
    }
    FUN_01bed4e2(puVar5,"hashChains",10);
    FUN_006e01d0(&local_230);
    local_1e9 = 1;
    local_1f4 = "boser::web::graphql::bosminer::configurator::performance::HashChainError";
    local_1f0 = 0x48;
    local_1f8 = 0xe;
    local_1fc = (uint **)0x3e82b8;
    iVar2 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_01be5118(0xe);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xe);
      }
      FUN_01bed4e2(iVar2,"HashChainError",0xe);
      local_1d0 = 0xe;
      local_1d8 = (char ***)0xe;
      local_1d4 = (undefined1 *)iVar2;
      FUN_006a0cfc(&local_e8,1,
                   "boser::web::graphql::bosminer::configurator::performance::HashChainError",0x48);
      FUN_006c2a34(&local_1a8,puVar15,&local_1d8,&local_e8);
      if (local_198 != (undefined4 *)0x80000006) {
        FUN_00abf870(&local_1a8);
      }
      local_e4 = "HashChainError";
      local_e0 = (char **)0xe;
      local_e8 = (undefined4 ***)0x80000000;
      FUN_0160ec7c(local_1e8,&local_e8);
      if ((char)puVar14[4] == '\0') {
        FUN_019ae6ac(&local_e8);
        *puVar14 = (uint)local_e8;
        puVar14[1] = (uint)local_e4;
        *puVar10 = (uint)local_e0;
        puVar14[3] = (uint)local_dc;
        *(undefined1 *)(puVar14 + 4) = 1;
      }
      local_1d8 = (char ***)*puVar14;
      local_1d4 = (undefined1 *)puVar14[1];
      local_1d0 = *puVar10;
      uStack_1cc = puVar14[3];
      local_1c4 = 8;
      *puVar14 = (int)local_1d8 + 1;
      puVar14[1] = (int)local_1d4 + (uint)((uint **)0xfffffffe < local_1d8);
      local_1c0 = 0;
      local_1c8 = 0;
      puStack_1bc = &DAT_0056d238;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uVar4 = 4;
      puVar15 = (undefined4 *)thunk_FUN_01be5118(4);
      if (puVar15 == (undefined4 *)0x0) {
LAB_00a2adf8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar4);
      }
      *puVar15 = 0x656d616e;
      local_ec = 4;
      local_f4 = 4;
      local_f0 = puVar15;
      puVar15 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      *puVar15 = 0x656d616e;
      FUN_006e01d0(&local_1a8);
      FUN_006c86e0(&local_38,param_2);
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
      local_60 = local_38;
      local_5c = uStack_34;
      local_58 = uStack_30;
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
      local_68 = puVar15;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      uVar4 = 9;
      puVar15 = (undefined4 *)thunk_FUN_01be5118(9);
      if (puVar15 == (undefined4 *)0x0) goto LAB_00a2adf8;
      FUN_01bed4e2(puVar15,"frequency",9);
      local_ec = 9;
      local_f4 = 9;
      local_f0 = puVar15;
      puVar15 = (undefined4 *)thunk_FUN_01be5118(9);
      if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,9);
      }
      FUN_01bed4e2(puVar15,"frequency",9);
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
      local_5c = uStack_34;
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
      local_68 = puVar15;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      uVar4 = 7;
      puVar15 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar15 == (undefined4 *)0x0) goto LAB_00a2adf8;
      *(undefined4 *)((int)puVar15 + 3) = 0x65676174;
      *puVar15 = 0x746c6f76;
      local_ec = 7;
      local_f4 = 7;
      local_f0 = puVar15;
      puVar15 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      *(undefined4 *)((int)puVar15 + 3) = 0x65676174;
      *puVar15 = 0x746c6f76;
      FUN_006e01d0(&local_1a8);
      FUN_006c05b8(&local_38,param_2);
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
      local_60 = local_38;
      local_5c = uStack_34;
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
      local_68 = puVar15;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      puVar14 = (uint *)((uint)&local_1a8 | 4);
      *puVar14 = (uint)local_1d8;
      puVar14[1] = (uint)local_1d4;
      puVar14[2] = local_1d0;
      puVar14[3] = uStack_1cc;
      puVar14[4] = local_1c8;
      puVar14[5] = local_1c4;
      puVar14[6] = local_1c0;
      puVar14[7] = (uint)puStack_1bc;
      puVar14[8] = uStack_1b8;
      puVar14[9] = uStack_1b4;
      puVar14[10] = uStack_1b0;
      puVar14[0xb] = uStack_1ac;
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
      local_94 = 0x48;
      local_a0 = 0;
      local_98 = "boser::web::graphql::bosminer::configurator::performance::HashChainError";
      local_9c = CONCAT31(local_9c._1_3_,1);
      iVar2 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                           "HashChainError",0xe);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar2,&local_e8,0xb0);
    }
    else {
      uVar18 = FUN_006a71d4();
      puVar8 = (undefined1 *)((ulonglong)uVar18 >> 0x20);
      iVar3 = (int)uVar18;
      if (iVar3 != 0) {
        local_1a8 = uVar18;
        if (puVar8 == &DAT_00000048) {
          iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::configurator::performance::HashChainError"
                                     ,iVar3,0x48);
          if (iVar3 != 0) goto LAB_00a2a988;
        }
        else {
          if (puVar8 == &DAT_0000000d) {
            iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
            if (iVar3 == 0) goto LAB_00a2a9c0;
          }
LAB_00a2a988:
          iVar3 = FUN_015db690(param_2 + 0x20,"HashChainError",0xe);
          if (iVar3 == 0) {
            pppuVar17 = &local_1fc;
            local_e0 = &local_1f4;
            puVar11 = &DAT_01c226d0;
            puVar6 = &DAT_00572c5c;
            local_dc = (code *)&DAT_0132b6a0;
            goto LAB_00a2adc0;
          }
        }
        uVar9 = 2;
        if ((int)*(uint *)(iVar2 + 0x10) < 0) {
          uVar9 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
        }
        if (uVar9 != 1) {
          pppuVar13 = &local_1fc;
          puVar11 = &DAT_01c226e0;
          local_1d8 = (char ***)CONCAT31(local_1d8._1_3_,(char)uVar9);
          puVar6 = &DAT_005b5680;
          local_dc = FUN_006a7514;
          local_e0 = (char **)&local_1e9;
LAB_00a2adc0:
          local_e4 = (char *)&DAT_0132b6a0;
          local_e8 = pppuVar13;
          local_d8 = pppuVar17;
          local_d4._0_4_ = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar6,&local_e8,puVar11);
        }
      }
    }
LAB_00a2a9c0:
    FUN_00a35428(&local_e8);
    FUN_019bb7e0(local_e8,local_e4);
    FUN_00a35428(&local_e8);
    local_1d4 = &LAB_00632348;
    local_1d8 = (char ***)&local_e8;
    FUN_00664898(&local_1a8,&DAT_005791cb,&local_1d8);
    FUN_019bb7e0(local_e8,local_e4);
    FUN_019bb7e0((undefined4 **)local_1a8,local_1a8._4_4_);
    FUN_00a35428(&local_e8);
    local_1d4 = &LAB_00632348;
    local_1d8 = (char ***)&local_e8;
    FUN_00664898(&local_1a8,&DAT_005bd5dc,&local_1d8);
    FUN_019bb7e0(local_e8,local_e4);
    uVar9 = uStack_1a0;
    uVar4 = local_1a8._4_4_;
    ppuVar1 = (undefined4 **)local_1a8;
    uVar12 = 0;
    if ((int)uStack_1a0 < 0) {
LAB_00a2aa64:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar12,uVar9);
    }
    if (uStack_1a0 == 0) {
      uVar7 = 1;
      uVar16 = 0;
    }
    else {
      uVar12 = 1;
      uVar7 = FUN_01298504(uStack_1a0,1);
      uVar16 = uVar9;
      if (uVar7 == 0) goto LAB_00a2aa64;
    }
    FUN_01bed4e2(uVar7,uVar4,uVar9);
    if (ppuVar1 != (undefined4 **)0x80000000) {
      FUN_019bb7e0(ppuVar1,uVar4);
    }
    local_64 = 10;
    local_6c = 10;
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
    local_58 = uVar9;
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
    local_68 = puVar5;
    local_60 = (uint **)uVar16;
    local_5c = uVar7;
    FUN_006e10e8(&local_1a8,&local_270,&local_23c,&local_e8);
    FUN_00abfaf0(&local_1a8);
    puVar14 = (uint *)((uint)&local_1a8 | 4);
    *puVar14 = local_270;
    puVar14[1] = uStack_26c;
    puVar14[2] = uStack_268;
    puVar14[3] = local_264;
    puVar14[4] = local_260;
    puVar14[5] = local_25c;
    puVar14[6] = local_258;
    puVar14[7] = (uint)puStack_254;
    puVar14[8] = uStack_250;
    puVar14[9] = uStack_24c;
    puVar14[10] = uStack_248;
    puVar14[0xb] = uStack_244;
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
    local_94 = 0x4a;
    local_a0 = 0;
    local_98 = "boser::web::graphql::bosminer::configurator::performance::PerformanceError";
    local_9c = CONCAT31(local_9c._1_3_,1);
    local_d4 = local_1a8;
    iVar2 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                         &DAT_005696e8,0x10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar2,&local_e8,0xb0);
    goto LAB_00a2ac88;
  }
  uVar18 = FUN_006a71d4();
  puVar8 = (undefined1 *)((ulonglong)uVar18 >> 0x20);
  iVar3 = (int)uVar18;
  if (iVar3 == 0) goto LAB_00a2ac88;
  local_1a8 = uVar18;
  if (puVar8 == &DAT_0000004a) {
    iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::configurator::performance::PerformanceError"
                               ,iVar3,0x4a);
    if (iVar3 != 0) goto LAB_00a2a904;
  }
  else {
    if (puVar8 == &DAT_0000000d) {
      iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
      if (iVar3 == 0) goto LAB_00a2ac88;
    }
LAB_00a2a904:
    iVar3 = FUN_015db690(param_2 + 0x20,&DAT_005696e8,0x10);
    if (iVar3 == 0) {
      local_d8 = &local_294;
      puVar11 = &DAT_01c226d0;
      puVar6 = &DAT_00572c5c;
      local_e0 = &local_28c;
      local_dc = (code *)&DAT_0132b6a0;
      local_e8 = (undefined4 ***)&local_1a8;
      goto LAB_00a2ad30;
    }
  }
  uVar9 = 2;
  if ((int)*(uint *)(iVar2 + 0x10) < 0) {
    uVar9 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
  }
  if (uVar9 == 1) {
LAB_00a2ac88:
    local_1d4 = &LAB_012b97d8;
    local_1d8 = (char ***)&local_e8;
    local_e0 = (char **)0x10;
    local_e4 = &DAT_005696e8;
    local_e8 = (undefined4 ***)0x80000000;
    FUN_00664898(&local_1a8,&DAT_0057a667,&local_1d8);
    if (local_e8 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_e8,local_e4);
    }
    *param_1 = local_1a8;
    *(uint *)(param_1 + 1) = uStack_1a0;
    return;
  }
  local_d8 = (uint ***)&local_1d8;
  local_e0 = (char **)&local_281;
  puVar11 = &DAT_01c226e0;
  local_1d8 = (char ***)CONCAT31(local_1d8._1_3_,(char)uVar9);
  puVar6 = &DAT_005b5680;
  local_dc = FUN_006a7514;
  local_e8 = &local_294;
LAB_00a2ad30:
  local_e4 = (char *)&DAT_0132b6a0;
  local_d4._0_4_ = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar6,&local_e8,puVar11);
}

