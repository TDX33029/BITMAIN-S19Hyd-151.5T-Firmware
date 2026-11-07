// FUN_00a99160 @ 00a99160 size=2160 calls_out=25 calls_in=2
// strings: boser::web::graphql::storage::PublicStorage | PublicStorage | PublicStorage | __fake_type__ | PublicStorage | boser::web::graphql::storage::PublicStorage

void FUN_00a99160(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint **local_1ec;
  undefined4 local_1e8;
  char *local_1e4;
  undefined4 local_1e0;
  undefined1 local_1d9;
  undefined1 local_1d8 [16];
  char ***local_1c8;
  undefined1 *local_1c4;
  uint local_1c0;
  uint uStack_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  undefined4 *puStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 **ppuStack_18c;
  uint local_188;
  undefined4 uStack_184;
  undefined4 **local_180;
  uint uStack_17c;
  undefined4 local_178;
  undefined4 **ppuStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_e4;
  undefined4 *local_e0;
  undefined4 local_dc;
  undefined4 ***local_d8;
  char *local_d4;
  char **local_d0;
  code *local_cc;
  uint ***local_c8;
  undefined4 **local_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 **local_b8;
  uint local_b4;
  undefined4 uStack_b0;
  undefined4 **ppuStack_ac;
  uint uStack_a8;
  undefined4 local_a4;
  undefined4 **local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  char *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined2 local_2b;
  
  local_1d9 = 1;
  local_1e4 = "boser::web::graphql::storage::PublicStorage";
  local_1e0 = 0x2b;
  local_1e8 = 0xd;
  local_1ec = (uint **)0x3eb4e0;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                       "PublicStorage",0xd);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_01be5118(0xd);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xd);
    }
    FUN_01bed4e2(iVar1,"PublicStorage",0xd);
    local_1c0 = 0xd;
    local_1c8 = (char ***)0xd;
    local_1c4 = (undefined1 *)iVar1;
    FUN_006a0cfc(&local_d8,1,"boser::web::graphql::storage::PublicStorage",0x2b);
    FUN_006c2a34(&local_198,(undefined4 *)(param_2 + 0x40),&local_1c8,&local_d8);
    if (local_188 != 0x80000006) {
      FUN_00abf870(&local_198);
    }
    local_d0 = (char **)0xd;
    local_d8 = (undefined4 ***)0x80000000;
    local_d4 = "PublicStorage";
    uVar3 = FUN_0160ec7c(local_1d8,&local_d8);
    uVar11 = thunk_FUN_01bee35a(uVar3,0x2c0);
    puVar10 = (uint *)((int)uVar11 + (int)((ulonglong)uVar11 >> 0x20));
    if ((char)puVar10[4] == '\0') {
      FUN_019ae6ac(&local_d8);
      *puVar10 = (uint)local_d8;
      puVar10[1] = (uint)local_d4;
      puVar10[2] = (uint)local_d0;
      puVar10[3] = (uint)local_cc;
      *(undefined1 *)(puVar10 + 4) = 1;
    }
    local_1c8 = (char ***)*puVar10;
    local_1c4 = (undefined1 *)puVar10[1];
    local_1c0 = puVar10[2];
    uStack_1bc = puVar10[3];
    uVar3 = 8;
    *puVar10 = (int)local_1c8 + 1;
    puVar10[1] = (int)local_1c4 + (uint)((uint **)0xfffffffe < local_1c8);
    local_1b0 = 0;
    local_1b8 = 0;
    local_1b4 = 8;
    puStack_1ac = &DAT_0056d238;
    uStack_1a8 = 0;
    uStack_1a4 = 0;
    uStack_1a0 = 0;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(8);
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = 0x656d6568;
      *puVar4 = 0x54626577;
      local_dc = 8;
      local_e4 = 8;
      local_e0 = puVar4;
      puVar4 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,8);
      }
      *puVar4 = 0x54626577;
      puVar4[1] = 0x656d6568;
      FUN_006e01d0(&local_198);
      FUN_00ad556c(&local_d8,param_2);
      FUN_019bb7e0(local_d8,local_d4);
      local_4c = (undefined4 *)FUN_01298504(8,1);
      if (local_4c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,8);
      }
      *local_4c = 0x54626557;
      local_4c[1] = 0x656d6568;
      local_54 = 8;
      local_5c = 8;
      local_8c = 0x80000000;
      local_d0 = (char **)(undefined4 **)local_198;
      local_cc = (code *)local_198._4_4_;
      local_c8 = (uint ***)uStack_190;
      local_c4 = ppuStack_18c;
      uStack_c0 = local_188;
      uStack_bc = uStack_184;
      local_b8 = local_180;
      local_b4 = uStack_17c;
      uStack_b0 = local_178;
      ppuStack_ac = ppuStack_174;
      uStack_a8 = uStack_170;
      local_a4 = uStack_16c;
      local_98 = 0x80000001;
      local_d4 = (char *)CONCAT31(local_d4._1_3_,1);
      local_48 = 8;
      local_50 = 8;
      local_2c = 0;
      local_d8 = (undefined4 ***)0x0;
      local_74 = 0x80000000;
      local_80 = 0x80000000;
      local_2b = 0;
      local_a0 = (undefined4 **)0x0;
      local_3c = 0;
      local_40 = 4;
      local_44 = 0;
      local_68 = 0x80000000;
      local_30 = 0;
      local_34 = 8;
      local_38 = 0;
      local_9c = 0;
      local_58 = puVar4;
      FUN_006e10e8(&local_198,&local_1c8,&local_e4,&local_d8);
      FUN_00abfaf0(&local_198);
      uVar3 = 0x10;
      puVar4 = (undefined4 *)thunk_FUN_01be5118(0x10);
      if (puVar4 != (undefined4 *)0x0) {
        FUN_01bed4e2(puVar4,&DAT_00569c68,0x10);
        local_dc = 0x10;
        local_e4 = 0x10;
        local_e0 = puVar4;
        puVar4 = (undefined4 *)thunk_FUN_01be5118(0x10);
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x10);
        }
        FUN_01bed4e2(puVar4,&DAT_00569c68,0x10);
        FUN_006e01d0(&local_198);
        FUN_00ad4efc(&local_d8,param_2);
        FUN_019bb7e0(local_d8,local_d4);
        puVar5 = (undefined4 *)FUN_01298504(0x10,1);
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x10);
        }
        FUN_01bed4e2(puVar5,&DAT_00568d08,0x10);
        local_54 = 0x10;
        local_5c = 0x10;
        local_8c = 0x80000000;
        local_d0 = (char **)(undefined4 **)local_198;
        local_cc = (code *)local_198._4_4_;
        local_c8 = (uint ***)uStack_190;
        local_c4 = ppuStack_18c;
        uStack_c0 = local_188;
        uStack_bc = uStack_184;
        local_b8 = local_180;
        local_b4 = uStack_17c;
        uStack_b0 = local_178;
        ppuStack_ac = ppuStack_174;
        uStack_a8 = uStack_170;
        local_a4 = uStack_16c;
        local_d4 = (char *)CONCAT31(local_d4._1_3_,1);
        local_98 = 0x80000001;
        local_2b = 0;
        local_40 = 4;
        local_48 = 0x10;
        local_50 = 0x10;
        local_2c = 0;
        local_d8 = (undefined4 ***)0x0;
        local_74 = 0x80000000;
        local_80 = 0x80000000;
        local_a0 = (undefined4 **)0x0;
        local_3c = 0;
        local_44 = 0;
        local_68 = 0x80000000;
        local_30 = 0;
        local_34 = 8;
        local_38 = 0;
        local_9c = 0;
        local_58 = puVar4;
        local_4c = puVar5;
        FUN_006e10e8(&local_198,&local_1c8,&local_e4,&local_d8);
        FUN_00abfaf0(&local_198);
        uVar3 = 0xb;
        puVar4 = (undefined4 *)thunk_FUN_01be5118(0xb);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_01bed4e2(puVar4,"webLanguage",0xb);
          local_dc = 0xb;
          local_e4 = 0xb;
          local_e0 = puVar4;
          puVar4 = (undefined4 *)thunk_FUN_01be5118(0xb);
          if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,0xb);
          }
          FUN_01bed4e2(puVar4,"webLanguage",0xb);
          FUN_006e01d0(&local_198);
          FUN_00ad3e6c(&local_d8,param_2);
          FUN_019bb7e0(local_d8,local_d4);
          puVar5 = (undefined4 *)FUN_01298504(0xb,1);
          if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,0xb);
          }
          FUN_01bed4e2(puVar5,"WebLanguage",0xb);
          local_54 = 0xb;
          local_5c = 0xb;
          local_8c = 0x80000000;
          local_d0 = (char **)(undefined4 **)local_198;
          local_cc = (code *)local_198._4_4_;
          local_c8 = (uint ***)uStack_190;
          local_c4 = ppuStack_18c;
          uStack_c0 = local_188;
          uStack_bc = uStack_184;
          local_b8 = local_180;
          local_b4 = uStack_17c;
          uStack_b0 = local_178;
          ppuStack_ac = ppuStack_174;
          uStack_a8 = uStack_170;
          local_a4 = uStack_16c;
          local_d4 = (char *)CONCAT31(local_d4._1_3_,1);
          local_98 = 0x80000001;
          local_2b = 0;
          local_40 = 4;
          local_48 = 0xb;
          local_50 = 0xb;
          local_2c = 0;
          local_d8 = (undefined4 ***)0x0;
          local_74 = 0x80000000;
          local_80 = 0x80000000;
          local_a0 = (undefined4 **)0x0;
          local_3c = 0;
          local_44 = 0;
          local_68 = 0x80000000;
          local_30 = 0;
          local_34 = 8;
          local_38 = 0;
          local_9c = 0;
          local_58 = puVar4;
          local_4c = puVar5;
          FUN_006e10e8(&local_198,&local_1c8,&local_e4,&local_d8);
          FUN_00abfaf0(&local_198);
          puVar10 = (uint *)((uint)&local_198 | 4);
          *puVar10 = (uint)local_1c8;
          puVar10[1] = (uint)local_1c4;
          puVar10[2] = local_1c0;
          puVar10[3] = uStack_1bc;
          puVar10[4] = local_1b8;
          puVar10[5] = local_1b4;
          puVar10[6] = local_1b0;
          puVar10[7] = (uint)puStack_1ac;
          puVar10[8] = uStack_1a8;
          puVar10[9] = uStack_1a4;
          puVar10[10] = uStack_1a0;
          puVar10[0xb] = uStack_19c;
          local_c8 = (uint ***)0x80000001;
          local_c4 = (undefined4 **)local_198;
          uStack_c0 = local_198._4_4_;
          uStack_bc = uStack_190;
          local_b8 = ppuStack_18c;
          local_b4 = local_188;
          uStack_b0 = uStack_184;
          ppuStack_ac = local_180;
          uStack_a8 = uStack_17c;
          local_a4 = local_178;
          local_a0 = ppuStack_174;
          local_9c = uStack_170;
          local_98 = uStack_16c;
          uStack_94 = uStack_168;
          local_44 = 0;
          local_60 = 0;
          local_68 = 0;
          local_3c = local_3c & 0xffff0000;
          local_40 = 0x10000;
          local_50 = 0x80000000;
          local_5c = 0x80000000;
          local_64 = 8;
          local_70 = 4;
          local_6c = 0;
          local_74 = 0;
          local_84 = 0x2b;
          local_90 = 0;
          local_88 = "boser::web::graphql::storage::PublicStorage";
          local_8c = CONCAT31(local_8c._1_3_,1);
          iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                               "PublicStorage",0xd);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01c226c0);
          }
          FUN_00abf870();
          FUN_01bed4e2(iVar1,&local_d8,0xb0);
          goto LAB_00a9986c;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar3);
  }
  uVar11 = FUN_006a71d4();
  iVar7 = (int)((ulonglong)uVar11 >> 0x20);
  iVar2 = (int)uVar11;
  if (iVar2 == 0) goto LAB_00a9986c;
  local_198 = uVar11;
  if (iVar7 == 0x2b) {
    iVar2 = thunk_FUN_01bed842("boser::web::graphql::storage::PublicStorage",iVar2,0x2b);
    if (iVar2 != 0) goto LAB_00a99834;
  }
  else {
    if (iVar7 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00a9986c;
    }
LAB_00a99834:
    iVar2 = FUN_015db690(param_2 + 0x20,"PublicStorage",0xd);
    if (iVar2 == 0) {
      local_c8 = &local_1ec;
      puVar9 = &DAT_01c226d0;
      puVar6 = &DAT_00572c5c;
      local_d0 = &local_1e4;
      local_cc = (code *)&DAT_0132b6a0;
      local_d8 = (undefined4 ***)&local_198;
      goto LAB_00a99924;
    }
  }
  uVar8 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar8 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar8 == 1) {
LAB_00a9986c:
    local_1c4 = &LAB_012b97d8;
    local_1c8 = (char ***)&local_d8;
    local_d0 = (char **)0xd;
    local_d4 = "PublicStorage";
    local_d8 = (undefined4 ***)0x80000000;
    FUN_00664898(&local_198,&DAT_0057a667,&local_1c8);
    if (local_d8 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_d8,local_d4);
    }
    *param_1 = local_198;
    *(undefined4 *)(param_1 + 1) = uStack_190;
    return;
  }
  local_c8 = (uint ***)&local_1c8;
  local_d0 = (char **)&local_1d9;
  puVar9 = &DAT_01c226e0;
  local_1c8 = (char ***)CONCAT31(local_1c8._1_3_,(char)uVar8);
  puVar6 = &DAT_005b5680;
  local_cc = FUN_006a7514;
  local_d8 = &local_1ec;
LAB_00a99924:
  local_d4 = (char *)&DAT_0132b6a0;
  local_c4 = (undefined4 **)local_cc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar6,&local_d8,puVar9);
}

