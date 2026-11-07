// FUN_009219f4 @ 009219f4 size=3592 calls_out=26 calls_in=2
// strings: boser::web::graphql::bosminer::configurator::GroupListError | GroupListError | GroupListError | __fake_type__ | GroupListError | boser::web::graphql::bosminer::configurator::GroupListError

void FUN_009219f4(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint **local_204;
  undefined4 local_200;
  char *local_1fc;
  undefined4 local_1f8;
  undefined1 local_1f1;
  undefined1 local_1f0 [16];
  char ***local_1e0;
  undefined1 *local_1dc;
  uint local_1d8;
  uint uStack_1d4;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  undefined4 *puStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 **ppuStack_1a4;
  uint local_1a0;
  undefined4 uStack_19c;
  undefined4 **local_198;
  uint uStack_194;
  undefined4 local_190;
  undefined4 **ppuStack_18c;
  uint uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_fc;
  undefined4 *local_f8;
  undefined4 local_f4;
  undefined4 ***local_f0;
  char *local_ec;
  char **local_e8;
  code *local_e4;
  uint ***local_e0;
  undefined4 **local_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined4 **local_d0;
  uint local_cc;
  undefined4 uStack_c8;
  undefined4 **ppuStack_c4;
  uint uStack_c0;
  undefined4 local_bc;
  undefined4 **local_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  char *local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined2 local_43;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char ***local_30;
  undefined1 *local_2c;
  
  local_1f1 = 1;
  local_1fc = "boser::web::graphql::bosminer::configurator::GroupListError";
  local_1f8 = 0x3b;
  local_200 = 0xe;
  local_204 = (uint **)0x3e80d8;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                       "GroupListError",0xe);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_01be5118(0xe);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xe);
    }
    FUN_01bed4e2(iVar1,"GroupListError",0xe);
    local_1d8 = 0xe;
    local_1e0 = (char ***)0xe;
    local_1dc = (undefined1 *)iVar1;
    FUN_006a0cfc(&local_f0,1,"boser::web::graphql::bosminer::configurator::GroupListError",0x3b);
    FUN_006c2a34(&local_1b0,(undefined4 *)(param_2 + 0x40),&local_1e0,&local_f0);
    if (local_1a0 != 0x80000006) {
      FUN_00abf870(&local_1b0);
    }
    local_e8 = (char **)0xe;
    local_f0 = (undefined4 ***)0x80000000;
    local_ec = "GroupListError";
    uVar3 = FUN_0160ec7c(local_1f0,&local_f0);
    uVar10 = thunk_FUN_01bee35a(uVar3,0x2c0);
    puVar9 = (uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
    if ((char)puVar9[4] == '\0') {
      FUN_019ae6ac(&local_f0);
      *puVar9 = (uint)local_f0;
      puVar9[1] = (uint)local_ec;
      puVar9[2] = (uint)local_e8;
      puVar9[3] = (uint)local_e4;
      *(undefined1 *)(puVar9 + 4) = 1;
    }
    local_1e0 = (char ***)*puVar9;
    local_1dc = (undefined1 *)puVar9[1];
    local_1d8 = puVar9[2];
    uStack_1d4 = puVar9[3];
    *puVar9 = (int)local_1e0 + 1;
    puVar9[1] = (int)local_1dc + (uint)((uint **)0xfffffffe < local_1e0);
    local_1c8 = 0;
    local_1d0 = 0;
    local_1cc = 8;
    puStack_1c4 = &DAT_0056d238;
    uStack_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uVar3 = 7;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(7);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)((int)puVar4 + 3) = 0x65676173;
      *puVar4 = 0x7373656d;
      local_f4 = 7;
      local_fc = 7;
      local_f8 = puVar4;
      puVar4 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      *(undefined4 *)((int)puVar4 + 3) = 0x65676173;
      *puVar4 = 0x7373656d;
      FUN_006e01d0(&local_1b0);
      FUN_006c86e0(&local_40,param_2);
      local_6c = 7;
      local_74 = 7;
      local_a4 = 0x80000000;
      local_e8 = (char **)(undefined4 **)local_1b0;
      local_e4 = (code *)local_1b0._4_4_;
      local_e0 = (uint ***)uStack_1a8;
      local_dc = ppuStack_1a4;
      uStack_d8 = local_1a0;
      uStack_d4 = uStack_19c;
      local_d0 = local_198;
      local_cc = uStack_194;
      uStack_c8 = local_190;
      ppuStack_c4 = ppuStack_18c;
      uStack_c0 = uStack_188;
      local_bc = uStack_184;
      local_68 = local_40;
      uStack_64 = uStack_3c;
      uStack_60 = uStack_38;
      local_ec = (char *)CONCAT31(local_ec._1_3_,1);
      local_b0 = 0x80000001;
      local_58 = 4;
      local_44 = 0;
      local_f0 = (undefined4 ***)0x0;
      local_8c = 0x80000000;
      local_98 = 0x80000000;
      local_43 = 0;
      local_b8 = (undefined4 **)0x0;
      local_54 = 0;
      local_5c = 0;
      local_80 = 0x80000000;
      local_48 = 0;
      local_4c = 8;
      local_50 = 0;
      local_b4 = 0;
      local_70 = puVar4;
      FUN_006e10e8(&local_1b0,&local_1e0,&local_fc,&local_f0);
      FUN_00abfaf0(&local_1b0);
      uVar3 = 9;
      puVar4 = (undefined4 *)thunk_FUN_01be5118(9);
      if (puVar4 != (undefined4 *)0x0) {
        FUN_01bed4e2(puVar4,"emptyName",9);
        local_f4 = 9;
        local_fc = 9;
        local_f8 = puVar4;
        puVar4 = (undefined4 *)thunk_FUN_01be5118(9);
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,9);
        }
        FUN_01bed4e2(puVar4,"emptyName",9);
        FUN_006e01d0(&local_1b0);
        FUN_006c05b8(&local_40,param_2);
        local_6c = 9;
        local_74 = 9;
        local_a4 = 0x80000000;
        local_e8 = (char **)(undefined4 **)local_1b0;
        local_e4 = (code *)local_1b0._4_4_;
        local_e0 = (uint ***)uStack_1a8;
        local_dc = ppuStack_1a4;
        uStack_d8 = local_1a0;
        uStack_d4 = uStack_19c;
        local_d0 = local_198;
        local_cc = uStack_194;
        uStack_c8 = local_190;
        ppuStack_c4 = ppuStack_18c;
        uStack_c0 = uStack_188;
        local_bc = uStack_184;
        local_68 = local_40;
        uStack_64 = uStack_3c;
        uStack_60 = uStack_38;
        local_ec = (char *)CONCAT31(local_ec._1_3_,1);
        local_b0 = 0x80000001;
        local_44 = 0;
        local_43 = 0;
        local_58 = 4;
        local_f0 = (undefined4 ***)0x0;
        local_8c = 0x80000000;
        local_98 = 0x80000000;
        local_b8 = (undefined4 **)0x0;
        local_54 = 0;
        local_5c = 0;
        local_80 = 0x80000000;
        local_48 = 0;
        local_4c = 8;
        local_50 = 0;
        local_b4 = 0;
        local_70 = puVar4;
        FUN_006e10e8(&local_1b0,&local_1e0,&local_fc,&local_f0);
        FUN_00abfaf0(&local_1b0);
        uVar3 = 0xe;
        puVar4 = (undefined4 *)thunk_FUN_01be5118(0xe);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_01bed4e2(puVar4,"duplicateNames",0xe);
          local_f4 = 0xe;
          local_fc = 0xe;
          local_f8 = puVar4;
          puVar4 = (undefined4 *)thunk_FUN_01be5118(0xe);
          if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,0xe);
          }
          FUN_01bed4e2(puVar4,"duplicateNames",0xe);
          FUN_006e01d0(&local_1b0);
          FUN_00b55fec(&local_40,param_2);
          local_6c = 0xe;
          local_74 = 0xe;
          local_a4 = 0x80000000;
          local_e8 = (char **)(undefined4 **)local_1b0;
          local_e4 = (code *)local_1b0._4_4_;
          local_e0 = (uint ***)uStack_1a8;
          local_dc = ppuStack_1a4;
          uStack_d8 = local_1a0;
          uStack_d4 = uStack_19c;
          local_d0 = local_198;
          local_cc = uStack_194;
          uStack_c8 = local_190;
          ppuStack_c4 = ppuStack_18c;
          uStack_c0 = uStack_188;
          local_bc = uStack_184;
          local_68 = local_40;
          uStack_64 = uStack_3c;
          uStack_60 = uStack_38;
          local_ec = (char *)CONCAT31(local_ec._1_3_,1);
          local_b0 = 0x80000001;
          local_44 = 0;
          local_43 = 0;
          local_58 = 4;
          local_f0 = (undefined4 ***)0x0;
          local_8c = 0x80000000;
          local_98 = 0x80000000;
          local_b8 = (undefined4 **)0x0;
          local_54 = 0;
          local_5c = 0;
          local_80 = 0x80000000;
          local_48 = 0;
          local_4c = 8;
          local_50 = 0;
          local_b4 = 0;
          local_70 = puVar4;
          FUN_006e10e8(&local_1b0,&local_1e0,&local_fc,&local_f0);
          FUN_00abfaf0(&local_1b0);
          uVar3 = 0xe;
          puVar4 = (undefined4 *)thunk_FUN_01be5118(0xe);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_01bed4e2(puVar4,"zeroStrategies",0xe);
            local_f4 = 0xe;
            local_fc = 0xe;
            local_f8 = puVar4;
            puVar4 = (undefined4 *)thunk_FUN_01be5118(0xe);
            if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(1,0xe);
            }
            FUN_01bed4e2(puVar4,"zeroStrategies",0xe);
            FUN_006e01d0(&local_1b0);
            FUN_006c05b8(&local_40,param_2);
            local_6c = 0xe;
            local_74 = 0xe;
            local_a4 = 0x80000000;
            local_e8 = (char **)(undefined4 **)local_1b0;
            local_e4 = (code *)local_1b0._4_4_;
            local_e0 = (uint ***)uStack_1a8;
            local_dc = ppuStack_1a4;
            uStack_d8 = local_1a0;
            uStack_d4 = uStack_19c;
            local_d0 = local_198;
            local_cc = uStack_194;
            uStack_c8 = local_190;
            ppuStack_c4 = ppuStack_18c;
            uStack_c0 = uStack_188;
            local_bc = uStack_184;
            local_68 = local_40;
            uStack_64 = uStack_3c;
            uStack_60 = uStack_38;
            local_ec = (char *)CONCAT31(local_ec._1_3_,1);
            local_b0 = 0x80000001;
            local_44 = 0;
            local_43 = 0;
            local_58 = 4;
            local_f0 = (undefined4 ***)0x0;
            local_8c = 0x80000000;
            local_98 = 0x80000000;
            local_b8 = (undefined4 **)0x0;
            local_54 = 0;
            local_5c = 0;
            local_80 = 0x80000000;
            local_48 = 0;
            local_4c = 8;
            local_50 = 0;
            local_b4 = 0;
            local_70 = puVar4;
            FUN_006e10e8(&local_1b0,&local_1e0,&local_fc,&local_f0);
            FUN_00abfaf0(&local_1b0);
            uVar3 = 0x12;
            puVar4 = (undefined4 *)thunk_FUN_01be5118(0x12);
            if (puVar4 != (undefined4 *)0x0) {
              FUN_01bed4e2(puVar4,"fixedShareRatioSum",0x12);
              local_f4 = 0x12;
              local_fc = 0x12;
              local_f8 = puVar4;
              puVar4 = (undefined4 *)thunk_FUN_01be5118(0x12);
              if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,0x12);
              }
              FUN_01bed4e2(puVar4,"fixedShareRatioSum",0x12);
              FUN_006e01d0(&local_1b0);
              FUN_006c05b8(&local_40,param_2);
              local_6c = 0x12;
              local_74 = 0x12;
              local_a4 = 0x80000000;
              local_e8 = (char **)(undefined4 **)local_1b0;
              local_e4 = (code *)local_1b0._4_4_;
              local_e0 = (uint ***)uStack_1a8;
              local_dc = ppuStack_1a4;
              uStack_d8 = local_1a0;
              uStack_d4 = uStack_19c;
              local_d0 = local_198;
              local_cc = uStack_194;
              uStack_c8 = local_190;
              ppuStack_c4 = ppuStack_18c;
              uStack_c0 = uStack_188;
              local_bc = uStack_184;
              local_68 = local_40;
              uStack_64 = uStack_3c;
              uStack_60 = uStack_38;
              local_ec = (char *)CONCAT31(local_ec._1_3_,1);
              local_b0 = 0x80000001;
              local_44 = 0;
              local_43 = 0;
              local_58 = 4;
              local_f0 = (undefined4 ***)0x0;
              local_8c = 0x80000000;
              local_98 = 0x80000000;
              local_b8 = (undefined4 **)0x0;
              local_54 = 0;
              local_5c = 0;
              local_80 = 0x80000000;
              local_48 = 0;
              local_4c = 8;
              local_50 = 0;
              local_b4 = 0;
              local_70 = puVar4;
              FUN_006e10e8(&local_1b0,&local_1e0,&local_fc,&local_f0);
              FUN_00abfaf0(&local_1b0);
              uVar3 = 0xc;
              puVar4 = (undefined4 *)thunk_FUN_01be5118(0xc);
              if (puVar4 != (undefined4 *)0x0) {
                FUN_01bed4e2(puVar4,"missingQuota",0xc);
                local_f4 = 0xc;
                local_fc = 0xc;
                local_f8 = puVar4;
                puVar4 = (undefined4 *)thunk_FUN_01be5118(0xc);
                if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(1,0xc);
                }
                FUN_01bed4e2(puVar4,"missingQuota",0xc);
                FUN_006e01d0(&local_1b0);
                FUN_006c05b8(&local_40,param_2);
                local_6c = 0xc;
                local_74 = 0xc;
                local_a4 = 0x80000000;
                local_e8 = (char **)(undefined4 **)local_1b0;
                local_e4 = (code *)local_1b0._4_4_;
                local_e0 = (uint ***)uStack_1a8;
                local_dc = ppuStack_1a4;
                uStack_d8 = local_1a0;
                uStack_d4 = uStack_19c;
                local_d0 = local_198;
                local_cc = uStack_194;
                uStack_c8 = local_190;
                ppuStack_c4 = ppuStack_18c;
                uStack_c0 = uStack_188;
                local_bc = uStack_184;
                local_68 = local_40;
                uStack_64 = uStack_3c;
                uStack_60 = uStack_38;
                local_ec = (char *)CONCAT31(local_ec._1_3_,1);
                local_b0 = 0x80000001;
                local_44 = 0;
                local_43 = 0;
                local_58 = 4;
                local_f0 = (undefined4 ***)0x0;
                local_8c = 0x80000000;
                local_98 = 0x80000000;
                local_b8 = (undefined4 **)0x0;
                local_54 = 0;
                local_5c = 0;
                local_80 = 0x80000000;
                local_48 = 0;
                local_4c = 8;
                local_50 = 0;
                local_b4 = 0;
                local_70 = puVar4;
                FUN_006e10e8(&local_1b0,&local_1e0,&local_fc,&local_f0);
                FUN_00abfaf0(&local_1b0);
                uVar3 = 0xf;
                puVar4 = (undefined4 *)thunk_FUN_01be5118(0xf);
                if (puVar4 != (undefined4 *)0x0) {
                  FUN_01bed4e2(puVar4,&DAT_003e8140,0xf);
                  local_f4 = 0xf;
                  local_fc = 0xf;
                  local_f8 = puVar4;
                  puVar4 = (undefined4 *)thunk_FUN_01be5118(0xf);
                  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00664620(1,0xf);
                  }
                  FUN_01bed4e2(puVar4,&DAT_003e8140,0xf);
                  FUN_006e01d0(&local_1b0);
                  FUN_006c05b8(&local_40,param_2);
                  local_6c = 0xf;
                  local_74 = 0xf;
                  local_a4 = 0x80000000;
                  local_e8 = (char **)(undefined4 **)local_1b0;
                  local_e4 = (code *)local_1b0._4_4_;
                  local_e0 = (uint ***)uStack_1a8;
                  local_dc = ppuStack_1a4;
                  uStack_d8 = local_1a0;
                  uStack_d4 = uStack_19c;
                  local_d0 = local_198;
                  local_cc = uStack_194;
                  uStack_c8 = local_190;
                  ppuStack_c4 = ppuStack_18c;
                  uStack_c0 = uStack_188;
                  local_bc = uStack_184;
                  local_68 = local_40;
                  uStack_64 = uStack_3c;
                  uStack_60 = uStack_38;
                  local_ec = (char *)CONCAT31(local_ec._1_3_,1);
                  local_b0 = 0x80000001;
                  local_44 = 0;
                  local_43 = 0;
                  local_58 = 4;
                  local_f0 = (undefined4 ***)0x0;
                  local_8c = 0x80000000;
                  local_98 = 0x80000000;
                  local_b8 = (undefined4 **)0x0;
                  local_54 = 0;
                  local_5c = 0;
                  local_80 = 0x80000000;
                  local_48 = 0;
                  local_4c = 8;
                  local_50 = 0;
                  local_b4 = 0;
                  local_70 = puVar4;
                  FUN_006e10e8(&local_1b0,&local_1e0,&local_fc,&local_f0);
                  FUN_00abfaf0(&local_1b0);
                  uVar3 = 0x10;
                  puVar4 = (undefined4 *)thunk_FUN_01be5118(0x10);
                  if (puVar4 != (undefined4 *)0x0) {
                    FUN_01bed4e2(puVar4,"poolRecordErrors",0x10);
                    local_f4 = 0x10;
                    local_fc = 0x10;
                    local_f8 = puVar4;
                    puVar4 = (undefined4 *)thunk_FUN_01be5118(0x10);
                    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00664620(1,0x10);
                    }
                    FUN_01bed4e2(puVar4,"poolRecordErrors",0x10);
                    FUN_006e01d0(&local_1b0);
                    FUN_00924644(&local_f0,param_2);
                    FUN_019bb7e0(local_f0,local_ec);
                    FUN_0093e398(&local_f0);
                    local_2c = &LAB_00632348;
                    local_30 = (char ***)&local_f0;
                    FUN_00664898(&local_40,&DAT_005791cb,&local_30);
                    FUN_019bb7e0(local_f0,local_ec);
                    local_68 = local_40;
                    uStack_64 = uStack_3c;
                    uStack_60 = uStack_38;
                    local_6c = 0x10;
                    local_74 = 0x10;
                    local_a4 = 0x80000000;
                    local_e8 = (char **)(undefined4 **)local_1b0;
                    local_e4 = (code *)local_1b0._4_4_;
                    local_e0 = (uint ***)uStack_1a8;
                    local_dc = ppuStack_1a4;
                    uStack_d8 = local_1a0;
                    uStack_d4 = uStack_19c;
                    local_d0 = local_198;
                    local_cc = uStack_194;
                    uStack_c8 = local_190;
                    ppuStack_c4 = ppuStack_18c;
                    uStack_c0 = uStack_188;
                    local_bc = uStack_184;
                    local_ec = (char *)CONCAT31(local_ec._1_3_,1);
                    local_b0 = 0x80000001;
                    local_8c = 0x80000000;
                    local_43 = 0;
                    local_98 = 0x80000000;
                    local_80 = 0x80000000;
                    local_44 = 0;
                    local_f0 = (undefined4 ***)0x0;
                    local_b8 = (undefined4 **)0x0;
                    local_54 = 0;
                    local_58 = 4;
                    local_5c = 0;
                    local_48 = 0;
                    local_4c = 8;
                    local_50 = 0;
                    local_b4 = 0;
                    local_70 = puVar4;
                    FUN_006e10e8(&local_1b0,&local_1e0,&local_fc,&local_f0);
                    FUN_00abfaf0(&local_1b0);
                    puVar9 = (uint *)((uint)&local_1b0 | 4);
                    *puVar9 = (uint)local_1e0;
                    puVar9[1] = (uint)local_1dc;
                    puVar9[2] = local_1d8;
                    puVar9[3] = uStack_1d4;
                    puVar9[4] = local_1d0;
                    puVar9[5] = local_1cc;
                    puVar9[6] = local_1c8;
                    puVar9[7] = (uint)puStack_1c4;
                    puVar9[8] = uStack_1c0;
                    puVar9[9] = uStack_1bc;
                    puVar9[10] = uStack_1b8;
                    puVar9[0xb] = uStack_1b4;
                    local_e0 = (uint ***)0x80000001;
                    local_dc = (undefined4 **)local_1b0;
                    uStack_d8 = local_1b0._4_4_;
                    uStack_d4 = uStack_1a8;
                    local_d0 = ppuStack_1a4;
                    local_cc = local_1a0;
                    uStack_c8 = uStack_19c;
                    ppuStack_c4 = local_198;
                    uStack_c0 = uStack_194;
                    local_bc = local_190;
                    local_b8 = ppuStack_18c;
                    local_b4 = uStack_188;
                    local_b0 = uStack_184;
                    uStack_ac = uStack_180;
                    local_54 = local_54 & 0xffff0000;
                    local_58 = 0x10000;
                    local_68 = 0x80000000;
                    local_74 = 0x80000000;
                    local_7c = 8;
                    local_88 = 4;
                    local_5c = 0;
                    local_78 = 0;
                    local_80 = 0;
                    local_84 = 0;
                    local_8c = 0;
                    local_9c = 0x3b;
                    local_a8 = 0;
                    local_a0 = "boser::web::graphql::bosminer::configurator::GroupListError";
                    local_a4 = CONCAT31(local_a4._1_3_,1);
                    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),
                                         *(undefined4 *)(param_2 + 0x44),"GroupListError",0xe);
                    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb0cc(&DAT_01c226c0);
                    }
                    FUN_00abf870();
                    FUN_01bed4e2(iVar1,&local_f0,0xb0);
                    goto LAB_00922680;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar3);
  }
  uVar10 = FUN_006a71d4();
  iVar6 = (int)((ulonglong)uVar10 >> 0x20);
  iVar2 = (int)uVar10;
  if (iVar2 == 0) goto LAB_00922680;
  local_1b0 = uVar10;
  if (iVar6 == 0x3b) {
    iVar2 = thunk_FUN_01bed842("boser::web::graphql::bosminer::configurator::GroupListError",iVar2,
                               0x3b);
    if (iVar2 != 0) goto LAB_0092264c;
  }
  else {
    if (iVar6 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00922680;
    }
LAB_0092264c:
    iVar2 = FUN_015db690(param_2 + 0x20,"GroupListError",0xe);
    if (iVar2 == 0) {
      local_e0 = &local_204;
      puVar8 = &DAT_01c226d0;
      puVar5 = &DAT_00572c5c;
      local_e8 = &local_1fc;
      local_e4 = (code *)&DAT_0132b6a0;
      local_f0 = (undefined4 ***)&local_1b0;
      goto LAB_00922738;
    }
  }
  uVar7 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar7 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar7 == 1) {
LAB_00922680:
    local_1dc = &LAB_012b97d8;
    local_1e0 = (char ***)&local_f0;
    local_e8 = (char **)0xe;
    local_ec = "GroupListError";
    local_f0 = (undefined4 ***)0x80000000;
    FUN_00664898(&local_1b0,&DAT_0057a667,&local_1e0);
    if (local_f0 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_f0,local_ec);
    }
    *param_1 = local_1b0;
    *(undefined4 *)(param_1 + 1) = uStack_1a8;
    return;
  }
  local_e0 = (uint ***)&local_1e0;
  local_e8 = (char **)&local_1f1;
  puVar8 = &DAT_01c226e0;
  local_1e0 = (char ***)CONCAT31(local_1e0._1_3_,(char)uVar7);
  puVar5 = &DAT_005b5680;
  local_e4 = FUN_006a7514;
  local_f0 = &local_204;
LAB_00922738:
  local_ec = (char *)&DAT_0132b6a0;
  local_dc = (undefined4 **)local_e4;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar5,&local_f0,puVar8);
}

