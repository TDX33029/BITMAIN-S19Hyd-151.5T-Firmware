// FUN_00b1a46c @ 00b1a46c size=5116 calls_out=29 calls_in=2
// strings: boser_bosminer::info::GroupInfo | __fake_type__ | boser_bosminer::info::GroupInfo | boser_bosminer::info::PoolInfo | __fake_type__ | boser_bosminer::info::PoolInfo

void FUN_00b1a46c(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  undefined4 ***pppuVar11;
  uint *puVar12;
  uint ***pppuVar13;
  undefined4 *puVar14;
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
  undefined4 ***local_1d8;
  undefined4 *local_1d4;
  uint local_1d0;
  uint local_1cc;
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
  undefined2 *local_e4;
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
  undefined8 local_60;
  uint uStack_58;
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
  puVar14 = (undefined4 *)(param_2 + 0x40);
  local_28c = "boser_bosminer::info::GroupInfo";
  local_288 = 0x1f;
  local_290 = 9;
  local_294 = (uint **)&DAT_004cf6b8;
  iVar1 = FUN_006c176c(*puVar14,*(undefined4 *)(param_2 + 0x44));
  if (iVar1 == 0) {
    uVar8 = thunk_FUN_01be5118(9);
    if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(uVar8,&DAT_004cf6b8,9);
    local_1d0 = 9;
    local_1d8 = (undefined4 ***)0x9;
    local_1d4 = (undefined4 *)uVar8;
    FUN_006a0cfc(&local_e8,1,"boser_bosminer::info::GroupInfo",0x1f);
    FUN_006c2a34(&local_1a8,puVar14,&local_1d8,&local_e8);
    if (local_198 != (undefined4 *)0x80000006) {
      FUN_006b2000(&local_1a8);
    }
    local_e0 = (char **)0x9;
    local_e8 = (undefined4 ***)0x80000000;
    local_e4 = (undefined2 *)&DAT_004cf6b8;
    uVar3 = FUN_0160ec7c(local_280);
    uVar15 = thunk_FUN_01bee35a(uVar3,0x2c0);
    puVar12 = (uint *)((int)uVar15 + (int)((ulonglong)uVar15 >> 0x20));
    if ((char)puVar12[4] == '\0') {
      FUN_019ae6ac(&local_e8);
      *puVar12 = (uint)local_e8;
      puVar12[1] = (uint)local_e4;
      puVar12[2] = (uint)local_e0;
      puVar12[3] = (uint)local_dc;
      *(undefined1 *)(puVar12 + 4) = 1;
    }
    local_270 = *puVar12;
    uStack_26c = puVar12[1];
    local_264 = puVar12[3];
    local_258 = 0;
    local_260 = 0;
    local_25c = 8;
    puVar10 = puVar12 + 2;
    uStack_268 = *puVar10;
    *puVar12 = local_270 + 1;
    puVar12[1] = uStack_26c + (0xfffffffe < local_270);
    puStack_254 = &DAT_0056d238;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    uVar3 = 4;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar4 == (undefined4 *)0x0) {
LAB_00b1b7d4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar3);
    }
    *puVar4 = 0x656d616e;
    local_228 = 4;
    local_230 = 4;
    local_22c = puVar4;
    puVar4 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    *puVar4 = 0x656d616e;
    FUN_006e01d0(&local_1a8);
    pppuVar13 = (uint ***)&local_1d8;
    FUN_006c86e0(pppuVar13,param_2);
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
    local_60._0_4_ = (uint **)local_1d8;
    local_60._4_4_ = (uint)local_1d4;
    uStack_58 = local_1d0;
    local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_3c = 0;
    local_e8 = (undefined4 ***)0x0;
    local_84 = 0x80000000;
    local_90 = 0x80000000;
    local_3b = 0;
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
    pppuVar11 = (undefined4 ***)&local_1a8;
    FUN_00b3bb58(pppuVar11);
    uVar3 = 5;
    local_238 = (undefined4 *)thunk_FUN_01be5118(5);
    if (local_238 == (undefined4 *)0x0) goto LAB_00b1b7d4;
    *(undefined1 *)(local_238 + 1) = 0x73;
    *local_238 = 0x6c6f6f70;
    local_234 = 5;
    local_23c = 5;
    puVar4 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,5);
    }
    *(undefined1 *)(puVar4 + 1) = 0x73;
    *puVar4 = 0x6c6f6f70;
    FUN_006e01d0(&local_230);
    local_1e9 = 1;
    local_1f4 = "boser_bosminer::info::PoolInfo";
    local_1f0 = 0x1e;
    local_1f8 = 8;
    local_1fc = (uint **)&DAT_0056fd58;
    iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                         &DAT_0056fd58,8);
    if (iVar1 == 0) {
      puVar5 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,8);
      }
      puVar5[1] = 0x6f666e49;
      *puVar5 = 0x6c6f6f50;
      local_1d0 = 8;
      local_1d8 = (undefined4 ***)0x8;
      local_1d4 = puVar5;
      FUN_006a0cfc(&local_e8,1,"boser_bosminer::info::PoolInfo",0x1e);
      FUN_006c2a34(&local_1a8,puVar14,&local_1d8,&local_e8);
      if (local_198 != (undefined4 *)0x80000006) {
        FUN_006b2000(&local_1a8);
      }
      local_e4 = (undefined2 *)&DAT_0056fd58;
      local_e0 = (char **)0x8;
      local_e8 = (undefined4 ***)0x80000000;
      FUN_0160ec7c(local_1e8,&local_e8);
      if ((char)puVar12[4] == '\0') {
        FUN_019ae6ac(&local_e8);
        *puVar12 = (uint)local_e8;
        puVar12[1] = (uint)local_e4;
        *puVar10 = (uint)local_e0;
        puVar12[3] = (uint)local_dc;
        *(undefined1 *)(puVar12 + 4) = 1;
      }
      local_1d8 = (undefined4 ***)*puVar12;
      local_1d4 = (undefined4 *)puVar12[1];
      local_1d0 = *puVar10;
      local_1cc = puVar12[3];
      *puVar12 = (int)local_1d8 + 1;
      puVar12[1] = (int)local_1d4 + (uint)((uint **)0xfffffffe < local_1d8);
      local_1c0 = 0;
      local_1c8 = 0;
      local_1c4 = 8;
      puStack_1bc = &DAT_0056d238;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uVar3 = 3;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(3);
      if (puVar14 == (undefined4 *)0x0) {
LAB_00b1b7c4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar3);
      }
      *(undefined1 *)((int)puVar14 + 2) = 0x6c;
      *(undefined2 *)puVar14 = 0x7275;
      local_ec = 3;
      local_f4 = 3;
      local_f0 = puVar14;
      puVar14 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,3);
      }
      *(undefined1 *)((int)puVar14 + 2) = 0x6c;
      *(undefined2 *)puVar14 = 0x7275;
      FUN_006e01d0(&local_1a8);
      FUN_006c86e0(&local_38,param_2);
      local_64 = 3;
      local_6c = 3;
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
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
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
      local_68 = puVar14;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00b3bb58(&local_1a8);
      uVar3 = 4;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(4);
      if (puVar14 == (undefined4 *)0x0) goto LAB_00b1b7c4;
      *puVar14 = 0x72657375;
      local_ec = 4;
      local_f4 = 4;
      local_f0 = puVar14;
      puVar14 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      *puVar14 = 0x72657375;
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
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
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
      local_68 = puVar14;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00b3bb58(&local_1a8);
      uVar3 = 6;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(6);
      if (puVar14 == (undefined4 *)0x0) goto LAB_00b1b7c4;
      *(undefined2 *)(puVar14 + 1) = 0x7375;
      *puVar14 = 0x74617473;
      local_ec = 6;
      local_f4 = 6;
      local_f0 = puVar14;
      puVar14 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,6);
      }
      *(undefined2 *)(puVar14 + 1) = 0x7375;
      *puVar14 = 0x74617473;
      FUN_006e01d0(&local_1a8);
      FUN_00b5a52c(&local_38,param_2);
      local_64 = 6;
      local_6c = 6;
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
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
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
      local_68 = puVar14;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00b3bb58(&local_1a8);
      uVar3 = 6;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(6);
      if (puVar14 == (undefined4 *)0x0) goto LAB_00b1b7c4;
      *(undefined2 *)(puVar14 + 1) = 0x6576;
      *puVar14 = 0x69746361;
      local_ec = 6;
      local_f4 = 6;
      local_f0 = puVar14;
      puVar14 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,6);
      }
      *(undefined2 *)(puVar14 + 1) = 0x6576;
      *puVar14 = 0x69746361;
      FUN_006e01d0(&local_1a8);
      FUN_006ded7c(&local_38,param_2);
      local_64 = 6;
      local_6c = 6;
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
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
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
      local_68 = puVar14;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00b3bb58(&local_1a8);
      uVar3 = 6;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(6);
      if (puVar14 == (undefined4 *)0x0) goto LAB_00b1b7c4;
      *(undefined2 *)(puVar14 + 1) = 0x7365;
      *puVar14 = 0x72616873;
      local_ec = 6;
      local_f4 = 6;
      local_f0 = puVar14;
      puVar14 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,6);
      }
      *(undefined2 *)(puVar14 + 1) = 0x7365;
      *puVar14 = 0x72616873;
      FUN_006e01d0(&local_1a8);
      FUN_00b5ac5c(&local_38,param_2);
      local_64 = 6;
      local_6c = 6;
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
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
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
      local_68 = puVar14;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00b3bb58(&local_1a8);
      uVar3 = 0xe;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(0xe);
      if (puVar14 == (undefined4 *)0x0) goto LAB_00b1b7c4;
      FUN_01bed4e2(puVar14,"lastDifficulty",0xe);
      local_ec = 0xe;
      local_f4 = 0xe;
      local_f0 = puVar14;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(0xe);
      if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xe);
      }
      FUN_01bed4e2(puVar14,"lastDifficulty",0xe);
      FUN_006e01d0(&local_1a8);
      FUN_006bdfbc(&local_38,param_2);
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
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
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
      local_68 = puVar14;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00b3bb58(&local_1a8);
      uVar3 = 0xd;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(0xd);
      if (puVar14 == (undefined4 *)0x0) goto LAB_00b1b7c4;
      FUN_01bed4e2(puVar14,"generatedWork",0xd);
      local_ec = 0xd;
      local_f4 = 0xd;
      local_f0 = puVar14;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(0xd);
      if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xd);
      }
      FUN_01bed4e2(puVar14,"generatedWork",0xd);
      FUN_006e01d0(&local_1a8);
      FUN_006cd7c0(&local_38,param_2);
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
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
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
      local_68 = puVar14;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00b3bb58(&local_1a8);
      uVar3 = 9;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(9);
      if (puVar14 == (undefined4 *)0x0) goto LAB_00b1b7c4;
      FUN_01bed4e2(puVar14,"bestSharechips",9);
      local_ec = 9;
      local_f4 = 9;
      local_f0 = puVar14;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(9);
      if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,9);
      }
      FUN_01bed4e2(puVar14,"bestSharechips",9);
      FUN_006e01d0(&local_1a8);
      FUN_006c86e0(&local_38,param_2);
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
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
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
      local_68 = puVar14;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00b3bb58(&local_1a8);
      puVar12 = (uint *)((uint)&local_1a8 | 4);
      *puVar12 = (uint)local_1d8;
      puVar12[1] = (uint)local_1d4;
      puVar12[2] = local_1d0;
      puVar12[3] = local_1cc;
      puVar12[4] = local_1c8;
      puVar12[5] = local_1c4;
      puVar12[6] = local_1c0;
      puVar12[7] = (uint)puStack_1bc;
      puVar12[8] = uStack_1b8;
      puVar12[9] = uStack_1b4;
      puVar12[10] = uStack_1b0;
      puVar12[0xb] = uStack_1ac;
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
      local_60._0_4_ = (uint **)0x80000000;
      local_6c = 0x80000000;
      local_74 = 8;
      local_80 = 4;
      local_7c = 0;
      local_84 = 0;
      local_94 = 0x1e;
      local_a0 = 0;
      local_98 = "boser_bosminer::info::PoolInfo";
      local_9c = CONCAT31(local_9c._1_3_,1);
      iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                           &DAT_0056fd58,8);
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
        if (puVar7 == &DAT_0000001e) {
          iVar2 = thunk_FUN_01bed842("boser_bosminer::info::PoolInfo",iVar2,0x1e);
          if (iVar2 != 0) goto LAB_00b1b420;
        }
        else {
          if (puVar7 == &DAT_0000000d) {
            iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
            if (iVar2 == 0) goto LAB_00b1b458;
          }
LAB_00b1b420:
          iVar2 = FUN_006e5bc0(param_2 + 0x20,&DAT_0056fd58,8);
          if (iVar2 == 0) {
            pppuVar13 = &local_1fc;
            puVar9 = &DAT_01c226d0;
            puVar6 = &DAT_00572c5c;
            local_e0 = &local_1f4;
            local_dc = (code *)&DAT_0132b6a0;
            goto LAB_00b1b794;
          }
        }
        uVar8 = 2;
        if ((int)*(uint *)(iVar1 + 0x10) < 0) {
          uVar8 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
        }
        if (uVar8 != 1) {
          pppuVar11 = &local_1fc;
          puVar9 = &DAT_01c226e0;
          local_1d8 = (undefined4 ***)CONCAT31(local_1d8._1_3_,(char)uVar8);
          puVar6 = &DAT_005b5680;
          local_dc = FUN_006a7514;
          local_e0 = (char **)&local_1e9;
LAB_00b1b794:
          local_e4 = &DAT_0132b6a0;
          local_e8 = pppuVar11;
          local_d8 = pppuVar13;
          local_d4._0_4_ = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar6,&local_e8,puVar9);
        }
      }
    }
LAB_00b1b458:
    FUN_00b59ca0(&local_e8);
    FUN_019bb7e0(local_e8,local_e4);
    FUN_00b59ca0(&local_e8);
    local_1d4 = (undefined4 *)&LAB_00632348;
    local_1d8 = &local_e8;
    FUN_00664898(&local_1a8,&DAT_005791cb,&local_1d8);
    FUN_019bb7e0(local_e8,local_e4);
    uStack_58 = uStack_1a0;
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
    local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_3c = 0;
    local_3b = 0;
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
    local_68 = puVar4;
    local_60 = local_1a8;
    FUN_006e10e8(&local_1a8,&local_270,&local_23c,&local_e8);
    FUN_00b3bb58(&local_1a8);
    puVar12 = (uint *)((uint)&local_1a8 | 4);
    *puVar12 = local_270;
    puVar12[1] = uStack_26c;
    puVar12[2] = uStack_268;
    puVar12[3] = local_264;
    puVar12[4] = local_260;
    puVar12[5] = local_25c;
    puVar12[6] = local_258;
    puVar12[7] = (uint)puStack_254;
    puVar12[8] = uStack_250;
    puVar12[9] = uStack_24c;
    puVar12[10] = uStack_248;
    puVar12[0xb] = uStack_244;
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
    local_60._0_4_ = (uint **)0x80000000;
    local_6c = 0x80000000;
    local_74 = 8;
    local_80 = 4;
    local_7c = 0;
    local_84 = 0;
    local_94 = 0x1f;
    local_a0 = 0;
    local_98 = "boser_bosminer::info::GroupInfo";
    local_9c = CONCAT31(local_9c._1_3_,1);
    local_d4 = local_1a8;
    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                         &DAT_004cf6b8,9);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_006b2000();
    FUN_01bed4e2(iVar1,&local_e8,0xb0);
    goto LAB_00b1b668;
  }
  uVar15 = FUN_006a71d4();
  puVar7 = (undefined1 *)((ulonglong)uVar15 >> 0x20);
  iVar2 = (int)uVar15;
  if (iVar2 == 0) goto LAB_00b1b668;
  local_1a8 = uVar15;
  if (puVar7 == &DAT_0000001f) {
    iVar2 = thunk_FUN_01bed842("boser_bosminer::info::GroupInfo",iVar2,0x1f);
    if (iVar2 != 0) goto LAB_00b1b37c;
  }
  else {
    if (puVar7 == &DAT_0000000d) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00b1b668;
    }
LAB_00b1b37c:
    iVar2 = FUN_006e5bc0(param_2 + 0x20,&DAT_004cf6b8,9);
    if (iVar2 == 0) {
      local_d8 = &local_294;
      puVar9 = &DAT_01c226d0;
      puVar6 = &DAT_00572c5c;
      local_e0 = &local_28c;
      local_dc = (code *)&DAT_0132b6a0;
      local_e8 = (undefined4 ***)&local_1a8;
      goto LAB_00b1b71c;
    }
  }
  uVar8 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar8 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar8 == 1) {
LAB_00b1b668:
    FUN_00ab08f8(&local_e8);
    FUN_019bb7e0(local_e8,local_e4);
    FUN_00ab08f8(&local_e8);
    local_1d4 = (undefined4 *)&LAB_00632348;
    local_1d8 = &local_e8;
    FUN_00664898(&local_1a8,&DAT_005791cb,&local_1d8);
    FUN_019bb7e0(local_e8,local_e4);
    *param_1 = local_1a8;
    *(uint *)(param_1 + 1) = uStack_1a0;
    return;
  }
  local_d8 = (uint ***)&local_1d8;
  local_e0 = (char **)&local_281;
  puVar9 = &DAT_01c226e0;
  local_1d8 = (undefined4 ***)CONCAT31(local_1d8._1_3_,(char)uVar8);
  puVar6 = &DAT_005b5680;
  local_dc = FUN_006a7514;
  local_e8 = &local_294;
LAB_00b1b71c:
  local_e4 = &DAT_0132b6a0;
  local_d4._0_4_ = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar6,&local_e8,puVar9);
}

