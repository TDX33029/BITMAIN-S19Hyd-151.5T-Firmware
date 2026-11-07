// FUN_00b5ac5c @ 00b5ac5c size=3516 calls_out=23 calls_in=2
// strings: SharesInfo | SharesInfo | __fake_type__ | SharesInfo | SharesInfo | SharesInfo

void FUN_00b5ac5c(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint **local_1fc;
  undefined4 local_1f8;
  undefined *local_1f4;
  undefined4 local_1f0;
  undefined1 local_1e9;
  undefined1 local_1e8 [16];
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
  uint local_198;
  undefined4 uStack_194;
  undefined4 **local_190;
  uint uStack_18c;
  undefined4 local_188;
  undefined4 **ppuStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined4 ***local_e8;
  char *local_e4;
  undefined4 **local_e0;
  code *local_dc;
  uint ***local_d8;
  undefined4 **local_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  undefined4 **local_c8;
  uint local_c4;
  undefined4 uStack_c0;
  undefined4 **ppuStack_bc;
  uint uStack_b8;
  undefined4 local_b4;
  undefined4 **local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  local_1e9 = 1;
  local_1f4 = &DAT_0056c108;
  local_1f0 = 0x20;
  local_1f8 = 10;
  local_1fc = (uint **)0x3eebc0;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),"SharesInfo",
                       10);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_01be5118(10);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,10);
    }
    FUN_01bed4e2(iVar1,"SharesInfo",10);
    local_1d0 = 10;
    local_1d8 = (char ***)0xa;
    local_1d4 = (undefined1 *)iVar1;
    FUN_006a0cfc(&local_e8,1,&DAT_0056c108,0x20);
    FUN_006c2a34(&local_1a8,(undefined4 *)(param_2 + 0x40),&local_1d8,&local_e8);
    if (local_198 != 0x80000006) {
      FUN_006b2000(&local_1a8);
    }
    local_e0 = (undefined4 **)0xa;
    local_e8 = (undefined4 ***)0x80000000;
    local_e4 = "SharesInfo";
    uVar3 = FUN_0160ec7c(local_1e8,&local_e8);
    uVar9 = thunk_FUN_01bee35a(uVar3,0x2c0);
    puVar8 = (uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
    if ((char)puVar8[4] == '\0') {
      FUN_019ae6ac(&local_e8);
      *puVar8 = (uint)local_e8;
      puVar8[1] = (uint)local_e4;
      puVar8[2] = (uint)local_e0;
      puVar8[3] = (uint)local_dc;
      *(undefined1 *)(puVar8 + 4) = 1;
    }
    local_1d8 = (char ***)*puVar8;
    local_1d4 = (undefined1 *)puVar8[1];
    local_1d0 = puVar8[2];
    uStack_1cc = puVar8[3];
    *puVar8 = (int)local_1d8 + 1;
    puVar8[1] = (int)local_1d4 + (uint)((uint **)0xfffffffe < local_1d8);
    local_1c0 = 0;
    local_1c8 = 0;
    local_1c4 = 8;
    puStack_1bc = &DAT_0056d238;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uVar3 = 0x12;
    iVar1 = thunk_FUN_01be5118(0x12);
    if (iVar1 != 0) {
      FUN_01bed4e2(iVar1,"acceptedDifficulty",0x12);
      local_ec = 0x12;
      local_f4 = 0x12;
      local_f0 = iVar1;
      iVar1 = thunk_FUN_01be5118(0x12);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x12);
      }
      FUN_01bed4e2(iVar1,"acceptedDifficulty",0x12);
      FUN_006e01d0(&local_1a8);
      FUN_006cd7c0(&local_38,param_2);
      local_64 = 0x12;
      local_6c = 0x12;
      local_9c = 0x80000000;
      local_e0 = (undefined4 **)local_1a8;
      local_dc = (code *)local_1a8._4_4_;
      local_d8 = (uint ***)uStack_1a0;
      local_d4 = ppuStack_19c;
      uStack_d0 = local_198;
      uStack_cc = uStack_194;
      local_c8 = local_190;
      local_c4 = uStack_18c;
      uStack_c0 = local_188;
      ppuStack_bc = ppuStack_184;
      uStack_b8 = uStack_180;
      local_b4 = uStack_17c;
      local_60 = local_38;
      uStack_5c = uStack_34;
      uStack_58 = uStack_30;
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
      local_ac = 0;
      local_68 = iVar1;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4);
      FUN_00b3bb58(&local_1a8);
      uVar3 = 0x11;
      iVar1 = thunk_FUN_01be5118(0x11);
      if (iVar1 != 0) {
        FUN_01bed4e2(iVar1,"acceptedSolutions",0x11);
        local_ec = 0x11;
        local_f4 = 0x11;
        local_f0 = iVar1;
        iVar1 = thunk_FUN_01be5118(0x11);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x11);
        }
        FUN_01bed4e2(iVar1,"acceptedSolutions",0x11);
        FUN_006e01d0(&local_1a8);
        FUN_006cd7c0(&local_38,param_2);
        local_64 = 0x11;
        local_6c = 0x11;
        local_9c = 0x80000000;
        local_e0 = (undefined4 **)local_1a8;
        local_dc = (code *)local_1a8._4_4_;
        local_d8 = (uint ***)uStack_1a0;
        local_d4 = ppuStack_19c;
        uStack_d0 = local_198;
        uStack_cc = uStack_194;
        local_c8 = local_190;
        local_c4 = uStack_18c;
        uStack_c0 = local_188;
        ppuStack_bc = ppuStack_184;
        uStack_b8 = uStack_180;
        local_b4 = uStack_17c;
        local_60 = local_38;
        uStack_5c = uStack_34;
        uStack_58 = uStack_30;
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
        local_ac = 0;
        local_68 = iVar1;
        FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
        FUN_00b3bb58(&local_1a8);
        uVar3 = 0x12;
        iVar1 = thunk_FUN_01be5118(0x12);
        if (iVar1 != 0) {
          FUN_01bed4e2(iVar1,"rejectedDifficulty",0x12);
          local_ec = 0x12;
          local_f4 = 0x12;
          local_f0 = iVar1;
          iVar1 = thunk_FUN_01be5118(0x12);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,0x12);
          }
          FUN_01bed4e2(iVar1,"rejectedDifficulty",0x12);
          FUN_006e01d0(&local_1a8);
          FUN_006cd7c0(&local_38,param_2);
          local_64 = 0x12;
          local_6c = 0x12;
          local_9c = 0x80000000;
          local_e0 = (undefined4 **)local_1a8;
          local_dc = (code *)local_1a8._4_4_;
          local_d8 = (uint ***)uStack_1a0;
          local_d4 = ppuStack_19c;
          uStack_d0 = local_198;
          uStack_cc = uStack_194;
          local_c8 = local_190;
          local_c4 = uStack_18c;
          uStack_c0 = local_188;
          ppuStack_bc = ppuStack_184;
          uStack_b8 = uStack_180;
          local_b4 = uStack_17c;
          local_60 = local_38;
          uStack_5c = uStack_34;
          uStack_58 = uStack_30;
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
          local_ac = 0;
          local_68 = iVar1;
          FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
          FUN_00b3bb58(&local_1a8);
          uVar3 = 0x11;
          iVar1 = thunk_FUN_01be5118(0x11);
          if (iVar1 != 0) {
            FUN_01bed4e2(iVar1,"rejectedSolutions",0x11);
            local_ec = 0x11;
            local_f4 = 0x11;
            local_f0 = iVar1;
            iVar1 = thunk_FUN_01be5118(0x11);
            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(1,0x11);
            }
            FUN_01bed4e2(iVar1,"rejectedSolutions",0x11);
            FUN_006e01d0(&local_1a8);
            FUN_006cd7c0(&local_38,param_2);
            local_64 = 0x11;
            local_6c = 0x11;
            local_9c = 0x80000000;
            local_e0 = (undefined4 **)local_1a8;
            local_dc = (code *)local_1a8._4_4_;
            local_d8 = (uint ***)uStack_1a0;
            local_d4 = ppuStack_19c;
            uStack_d0 = local_198;
            uStack_cc = uStack_194;
            local_c8 = local_190;
            local_c4 = uStack_18c;
            uStack_c0 = local_188;
            ppuStack_bc = ppuStack_184;
            uStack_b8 = uStack_180;
            local_b4 = uStack_17c;
            local_60 = local_38;
            uStack_5c = uStack_34;
            uStack_58 = uStack_30;
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
            local_ac = 0;
            local_68 = iVar1;
            FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
            FUN_00b3bb58(&local_1a8);
            uVar3 = 0xd;
            iVar1 = thunk_FUN_01be5118(0xd);
            if (iVar1 != 0) {
              FUN_01bed4e2(iVar1,"rejectedRatio",0xd);
              local_ec = 0xd;
              local_f4 = 0xd;
              local_f0 = iVar1;
              iVar1 = thunk_FUN_01be5118(0xd);
              if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,0xd);
              }
              FUN_01bed4e2(iVar1,"rejectedRatio",0xd);
              FUN_006e01d0(&local_1a8);
              FUN_006bdfbc(&local_38,param_2);
              local_64 = 0xd;
              local_6c = 0xd;
              local_9c = 0x80000000;
              local_e0 = (undefined4 **)local_1a8;
              local_dc = (code *)local_1a8._4_4_;
              local_d8 = (uint ***)uStack_1a0;
              local_d4 = ppuStack_19c;
              uStack_d0 = local_198;
              uStack_cc = uStack_194;
              local_c8 = local_190;
              local_c4 = uStack_18c;
              uStack_c0 = local_188;
              ppuStack_bc = ppuStack_184;
              uStack_b8 = uStack_180;
              local_b4 = uStack_17c;
              local_60 = local_38;
              uStack_5c = uStack_34;
              uStack_58 = uStack_30;
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
              local_ac = 0;
              local_68 = iVar1;
              FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
              FUN_00b3bb58(&local_1a8);
              uVar3 = 0xf;
              iVar1 = thunk_FUN_01be5118(0xf);
              if (iVar1 != 0) {
                FUN_01bed4e2(iVar1,"staleDifficulty",0xf);
                local_ec = 0xf;
                local_f4 = 0xf;
                local_f0 = iVar1;
                iVar1 = thunk_FUN_01be5118(0xf);
                if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00664620(1,0xf);
                }
                FUN_01bed4e2(iVar1,"staleDifficulty",0xf);
                FUN_006e01d0(&local_1a8);
                FUN_006cd7c0(&local_38,param_2);
                local_64 = 0xf;
                local_6c = 0xf;
                local_9c = 0x80000000;
                local_e0 = (undefined4 **)local_1a8;
                local_dc = (code *)local_1a8._4_4_;
                local_d8 = (uint ***)uStack_1a0;
                local_d4 = ppuStack_19c;
                uStack_d0 = local_198;
                uStack_cc = uStack_194;
                local_c8 = local_190;
                local_c4 = uStack_18c;
                uStack_c0 = local_188;
                ppuStack_bc = ppuStack_184;
                uStack_b8 = uStack_180;
                local_b4 = uStack_17c;
                local_60 = local_38;
                uStack_5c = uStack_34;
                uStack_58 = uStack_30;
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
                local_ac = 0;
                local_68 = iVar1;
                FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
                FUN_00b3bb58(&local_1a8);
                uVar3 = 0xe;
                iVar1 = thunk_FUN_01be5118(0xe);
                if (iVar1 != 0) {
                  FUN_01bed4e2(iVar1,"staleSolutions",0xe);
                  local_ec = 0xe;
                  local_f4 = 0xe;
                  local_f0 = iVar1;
                  iVar1 = thunk_FUN_01be5118(0xe);
                  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00664620(1,0xe);
                  }
                  FUN_01bed4e2(iVar1,"staleSolutions",0xe);
                  FUN_006e01d0(&local_1a8);
                  FUN_006cd7c0(&local_38,param_2);
                  local_64 = 0xe;
                  local_6c = 0xe;
                  local_9c = 0x80000000;
                  local_e0 = (undefined4 **)local_1a8;
                  local_dc = (code *)local_1a8._4_4_;
                  local_d8 = (uint ***)uStack_1a0;
                  local_d4 = ppuStack_19c;
                  uStack_d0 = local_198;
                  uStack_cc = uStack_194;
                  local_c8 = local_190;
                  local_c4 = uStack_18c;
                  uStack_c0 = local_188;
                  ppuStack_bc = ppuStack_184;
                  uStack_b8 = uStack_180;
                  local_b4 = uStack_17c;
                  local_60 = local_38;
                  uStack_5c = uStack_34;
                  uStack_58 = uStack_30;
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
                  local_ac = 0;
                  local_68 = iVar1;
                  FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
                  FUN_00b3bb58(&local_1a8);
                  uVar3 = 10;
                  iVar1 = thunk_FUN_01be5118(10);
                  if (iVar1 != 0) {
                    FUN_01bed4e2(iVar1,"staleRatio",10);
                    local_ec = 10;
                    local_f4 = 10;
                    local_f0 = iVar1;
                    iVar1 = thunk_FUN_01be5118(10);
                    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00664620(1,10);
                    }
                    FUN_01bed4e2(iVar1,"staleRatio",10);
                    FUN_006e01d0(&local_1a8);
                    FUN_006bdfbc(&local_38,param_2);
                    local_64 = 10;
                    local_6c = 10;
                    local_9c = 0x80000000;
                    local_e0 = (undefined4 **)local_1a8;
                    local_dc = (code *)local_1a8._4_4_;
                    local_d8 = (uint ***)uStack_1a0;
                    local_d4 = ppuStack_19c;
                    uStack_d0 = local_198;
                    uStack_cc = uStack_194;
                    local_c8 = local_190;
                    local_c4 = uStack_18c;
                    uStack_c0 = local_188;
                    ppuStack_bc = ppuStack_184;
                    uStack_b8 = uStack_180;
                    local_b4 = uStack_17c;
                    local_60 = local_38;
                    uStack_5c = uStack_34;
                    uStack_58 = uStack_30;
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
                    local_ac = 0;
                    local_68 = iVar1;
                    FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
                    FUN_00b3bb58(&local_1a8);
                    puVar8 = (uint *)((uint)&local_1a8 | 4);
                    *puVar8 = (uint)local_1d8;
                    puVar8[1] = (uint)local_1d4;
                    puVar8[2] = local_1d0;
                    puVar8[3] = uStack_1cc;
                    puVar8[4] = local_1c8;
                    puVar8[5] = local_1c4;
                    puVar8[6] = local_1c0;
                    puVar8[7] = (uint)puStack_1bc;
                    puVar8[8] = uStack_1b8;
                    puVar8[9] = uStack_1b4;
                    puVar8[10] = uStack_1b0;
                    puVar8[0xb] = uStack_1ac;
                    local_d8 = (uint ***)0x80000001;
                    local_d4 = (undefined4 **)local_1a8;
                    uStack_d0 = local_1a8._4_4_;
                    uStack_cc = uStack_1a0;
                    local_c8 = ppuStack_19c;
                    local_c4 = local_198;
                    uStack_c0 = uStack_194;
                    ppuStack_bc = local_190;
                    uStack_b8 = uStack_18c;
                    local_b4 = local_188;
                    local_b0 = ppuStack_184;
                    local_ac = uStack_180;
                    local_a8 = uStack_17c;
                    uStack_a4 = uStack_178;
                    local_4c = local_4c & 0xffff0000;
                    local_50 = 0x10000;
                    local_60 = 0x80000000;
                    local_6c = 0x80000000;
                    local_74 = 8;
                    local_80 = 4;
                    local_54 = 0;
                    local_70 = 0;
                    local_78 = 0;
                    local_7c = 0;
                    local_84 = 0;
                    local_94 = 0x20;
                    local_a0 = 0;
                    local_98 = &DAT_0056c108;
                    local_9c = CONCAT31(local_9c._1_3_,1);
                    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),
                                         *(undefined4 *)(param_2 + 0x44),"SharesInfo",10);
                    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_012fb0cc(&DAT_01c226c0);
                    }
                    FUN_006b2000();
                    FUN_01bed4e2(iVar1,&local_e8,0xb0);
                    goto LAB_00b5b89c;
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
  uVar9 = FUN_006a71d4();
  iVar5 = (int)((ulonglong)uVar9 >> 0x20);
  iVar2 = (int)uVar9;
  if (iVar2 == 0) goto LAB_00b5b89c;
  local_1a8 = uVar9;
  if (iVar5 == 0x20) {
    iVar2 = thunk_FUN_01bed842(&DAT_0056c108,iVar2,0x20);
    if (iVar2 != 0) goto LAB_00b5b868;
  }
  else {
    if (iVar5 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00b5b89c;
    }
LAB_00b5b868:
    iVar2 = FUN_006e5bc0(param_2 + 0x20,"SharesInfo",10);
    if (iVar2 == 0) {
      local_d8 = &local_1fc;
      puVar7 = &DAT_01c226d0;
      puVar4 = &DAT_00572c5c;
      local_e0 = (undefined4 **)&local_1f4;
      local_dc = (code *)&DAT_0132b6a0;
      local_e8 = (undefined4 ***)&local_1a8;
      goto LAB_00b5b954;
    }
  }
  uVar6 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar6 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar6 == 1) {
LAB_00b5b89c:
    local_1d4 = &LAB_012b97d8;
    local_1d8 = (char ***)&local_e8;
    local_e0 = (undefined4 **)0xa;
    local_e4 = "SharesInfo";
    local_e8 = (undefined4 ***)0x80000000;
    FUN_00664898(&local_1a8,&DAT_0057a667,&local_1d8);
    if (local_e8 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_e8,local_e4);
    }
    *param_1 = local_1a8;
    *(undefined4 *)(param_1 + 1) = uStack_1a0;
    return;
  }
  local_d8 = (uint ***)&local_1d8;
  local_e0 = (undefined4 **)&local_1e9;
  puVar7 = &DAT_01c226e0;
  local_1d8 = (char ***)CONCAT31(local_1d8._1_3_,(char)uVar6);
  puVar4 = &DAT_005b5680;
  local_dc = FUN_006a7514;
  local_e8 = &local_1fc;
LAB_00b5b954:
  local_e4 = (char *)&DAT_0132b6a0;
  local_d4 = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar4,&local_e8,puVar7);
}

