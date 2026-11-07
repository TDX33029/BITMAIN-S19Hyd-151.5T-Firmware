// FUN_00ac342c @ 00ac342c size=7392 calls_out=28 calls_in=1
// strings: boser::web::graphql::bos::CheckUpgradeResult | __fake_type__ | boser::web::graphql::bos::CheckUpgradeResult | boser::web::graphql::bos::CheckUpgradeResult | boser::system_upgrade::data::UpgradeDetail | UpgradeDetail

void FUN_00ac342c(int param_1,uint **param_2,uint ****param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined *puVar8;
  int iVar9;
  uint *puVar10;
  undefined *puVar11;
  uint uVar12;
  undefined4 *****pppppuVar13;
  uint ****ppppuVar14;
  uint *puVar15;
  uint *****pppppuVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  uint *****local_2b4;
  char ***local_2a8;
  uint ****local_2a4;
  char *local_2a0;
  undefined4 local_29c;
  undefined1 local_295;
  uint ****local_294;
  undefined4 local_290;
  char *local_28c;
  undefined4 local_288;
  undefined1 local_281 [17];
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
  uint local_230;
  uint uStack_22c;
  undefined4 uStack_228;
  undefined4 ****ppppuStack_224;
  uint uStack_220;
  undefined4 uStack_21c;
  undefined4 ****local_218;
  uint uStack_214;
  undefined4 uStack_210;
  undefined4 ****ppppuStack_20c;
  uint uStack_208;
  undefined4 uStack_204;
  uint ****local_1fc;
  undefined4 local_1f8;
  char *local_1f4;
  undefined4 local_1f0;
  undefined1 local_1e9;
  undefined4 local_1e8 [4];
  char *****local_1d8;
  undefined1 *local_1d4;
  uint ****local_1d0;
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
  undefined4 uStack_1a0;
  undefined4 ****ppppuStack_19c;
  uint local_198;
  undefined4 uStack_194;
  undefined4 ****local_190;
  uint uStack_18c;
  undefined4 local_188;
  undefined4 ****ppppuStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_f4;
  undefined4 *local_f0;
  undefined4 local_ec;
  undefined4 *****local_e8;
  char *local_e4;
  undefined8 local_e0;
  uint *****local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 ****ppppuStack_bc;
  uint uStack_b8;
  undefined4 local_b4;
  undefined4 ****local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 ****ppppuStack_a4;
  uint local_a0;
  undefined4 local_9c;
  char *local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  uint local_64;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  puVar19 = (undefined4 *)(param_1 + 0x40);
  local_29c = 0x2c;
  local_295 = 3;
  local_2a0 = "boser::web::graphql::bos::CheckUpgradeResult";
  local_2a8 = (char ***)param_2;
  local_2a4 = param_3;
  iVar2 = FUN_006c176c(*puVar19,*(undefined4 *)(param_1 + 0x44),param_2,param_3);
  if (iVar2 != 0) {
    local_1a8 = FUN_006a71d4();
    iVar9 = (int)((ulonglong)local_1a8 >> 0x20);
    iVar3 = (int)local_1a8;
    if (iVar3 == 0) {
      return;
    }
    if (iVar9 == 0x2c) {
      iVar3 = thunk_FUN_01bed842("boser::web::graphql::bos::CheckUpgradeResult",iVar3,0x2c);
      if (iVar3 == 0) goto LAB_00ac3548;
    }
    else if (iVar9 == 0xd) {
      iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
      if (iVar3 == 0) {
        return;
      }
    }
    iVar3 = FUN_015db690(param_1 + 0x20,param_2,param_3);
    if (iVar3 == 0) {
      local_d8 = (uint *****)&local_2a8;
      local_d4._0_4_ = (code *)&DAT_0132b6a0;
      local_e0._4_4_ = (code *)&DAT_0132b6a0;
      local_e4 = (char *)&DAT_0132b6a0;
      local_e0._0_4_ = (undefined4 ****)&local_2a0;
      local_e8 = (undefined4 *****)&local_1a8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_00572c5c,&local_e8,&DAT_01c226d0);
    }
LAB_00ac3548:
    if (*(int *)(iVar2 + 0x10) != -0x7ffffffd) {
      uVar1 = FUN_006a7508();
      local_1d8 = (char *****)CONCAT31(local_1d8._1_3_,uVar1);
      local_d8 = (uint *****)&local_1d8;
      local_e0._0_4_ = (undefined4 ****)&local_295;
      local_e8 = (undefined4 *****)&local_2a8;
      local_e4 = (char *)&DAT_0132b6a0;
      local_d4._0_4_ = FUN_006a7514;
      local_e0._4_4_ = FUN_006a7514;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005b5680,&local_e8,&DAT_01c226e0);
    }
    return;
  }
  uVar17 = 0;
  if ((int)param_3 < 0) {
LAB_00ac34e0:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar17,param_3);
  }
  if (param_3 == (uint ****)0x0) {
    ppppuVar14 = (uint ****)0x0;
    iVar2 = 1;
  }
  else {
    uVar17 = 1;
    iVar2 = FUN_01298504(param_3,1);
    ppppuVar14 = param_3;
    if (iVar2 == 0) goto LAB_00ac34e0;
  }
  FUN_01bed4e2(iVar2,param_2,param_3);
  local_1d8 = (char *****)ppppuVar14;
  local_1d4 = (undefined1 *)iVar2;
  local_1d0 = param_3;
  FUN_006a0cfc(&local_e8,3,"boser::web::graphql::bos::CheckUpgradeResult",0x2c);
  pppppuVar13 = (undefined4 *****)&local_1a8;
  pppppuVar16 = (uint *****)&local_1d8;
  FUN_006c2a34(pppppuVar13,puVar19,pppppuVar16,&local_e8);
  if (local_198 != 0x80000006) {
    FUN_00abf870(&local_1a8);
  }
  local_281[0] = 1;
  local_288 = 0x2a;
  local_28c = "boser::system_upgrade::data::UpgradeDetail";
  local_290 = 0xd;
  local_294 = (uint ****)0x3eb458;
  iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (iVar2 == 0) {
    puVar4 = (undefined1 *)thunk_FUN_01be5118(0xd);
    if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xd);
    }
    FUN_01bed4e2(puVar4,"UpgradeDetail",0xd);
    local_1d0 = (uint ****)0xd;
    local_1d8 = (char *****)&DAT_0000000d;
    local_1d4 = puVar4;
    FUN_006a0cfc(&local_e8,1,"boser::system_upgrade::data::UpgradeDetail",0x2a);
    local_2b4 = (uint *****)&local_1a8;
    FUN_006c2a34(local_2b4,puVar19,&local_1d8,&local_e8);
    if (local_198 != 0x80000006) {
      FUN_00abf870(&local_1a8);
    }
    local_e8 = (undefined4 *****)0x80000000;
    uVar18 = 0xd;
    local_e4 = "UpgradeDetail";
    local_e0._0_4_ = (undefined4 ****)0xd;
    uVar17 = FUN_0160ec7c();
    uVar20 = thunk_FUN_01bee35a(uVar17,0x2c0);
    puVar15 = (uint *)((int)uVar20 + (int)((ulonglong)uVar20 >> 0x20));
    if ((char)puVar15[4] == '\0') {
      FUN_019ae6ac(&local_e8);
      *puVar15 = (uint)local_e8;
      puVar15[1] = (uint)local_e4;
      puVar15[2] = (uint)(undefined4 ****)local_e0;
      puVar15[3] = (uint)local_e0._4_4_;
      *(undefined1 *)(puVar15 + 4) = 1;
    }
    local_270 = *puVar15;
    uStack_26c = puVar15[1];
    local_264 = puVar15[3];
    puVar10 = puVar15 + 2;
    uStack_268 = *puVar10;
    *puVar15 = local_270 + 1;
    local_258 = 0;
    local_260 = 0;
    puVar15[1] = uStack_26c + (0xfffffffe < local_270);
    local_25c = 8;
    puStack_254 = &DAT_0056d238;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_248 = 0;
    iVar2 = thunk_FUN_01be5118(0xd);
    if (iVar2 == 0) goto LAB_00ac5070;
    FUN_01bed4e2(iVar2,"latestRelease",0xd);
    local_234 = 0xd;
    local_23c = 0xd;
    local_238 = iVar2;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0xd);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xd);
    }
    FUN_01bed4e2(puVar5,"latestRelease",0xd);
    FUN_006e01d0(&local_230);
    local_1e9 = 1;
    local_1f4 = "boser::system_upgrade::data::UpgradeMetadata";
    local_1f0 = 0x2c;
    local_1f8 = 0xf;
    local_1fc = (uint ****)0x3eb4f0;
    iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_01be5118(0xf);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xf);
      }
      FUN_01bed4e2(iVar2,"UpgradeMetadata",0xf);
      local_1d0 = (uint ****)0xf;
      local_1d8 = (char *****)0xf;
      local_1d4 = (undefined1 *)iVar2;
      FUN_006a0cfc(&local_e8,1,"boser::system_upgrade::data::UpgradeMetadata",0x2c);
      FUN_006c2a34(&local_1a8,puVar19,&local_1d8,&local_e8);
      if (local_198 != 0x80000006) {
        FUN_00abf870(&local_1a8);
      }
      local_e4 = "UpgradeMetadata";
      local_e0._0_4_ = (undefined4 ****)0xf;
      local_e8 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(local_1e8,&local_e8);
      if ((char)puVar15[4] == '\0') {
        FUN_019ae6ac(&local_e8);
        *puVar15 = (uint)local_e8;
        puVar15[1] = (uint)local_e4;
        *puVar10 = (uint)(undefined4 ****)local_e0;
        puVar15[3] = (uint)local_e0._4_4_;
        *(undefined1 *)(puVar15 + 4) = 1;
      }
      local_1d8 = (char *****)*puVar15;
      local_1d4 = (undefined1 *)puVar15[1];
      local_1c0 = 0;
      local_1c8 = 0;
      local_1d0 = (uint ****)*puVar10;
      *puVar15 = (int)local_1d8 + 1;
      puVar15[1] = (int)local_1d4 + (uint)((uint ****)0xfffffffe < local_1d8);
      local_1c4 = 8;
      local_1cc = puVar15[3];
      puStack_1bc = &DAT_0056d238;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uVar17 = 4;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(4);
      if (puVar6 == (undefined4 *)0x0) {
LAB_00ac5060:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar17);
      }
      *puVar6 = 0x68736168;
      local_ec = 4;
      local_f4 = 4;
      local_f0 = puVar6;
      puVar6 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      *puVar6 = 0x68736168;
      FUN_006e01d0(&local_1a8);
      FUN_006c86e0(&local_38,param_1);
      local_64 = 4;
      local_6c = 4;
      local_9c = 0x80000000;
      local_e0._0_4_ = (undefined4 ****)local_1a8;
      local_e0._4_4_ = (code *)local_1a8._4_4_;
      local_d8 = (uint *****)uStack_1a0;
      local_d4._0_4_ = (code *)ppppuStack_19c;
      local_d4._4_4_ = (char *)local_198;
      local_cc = uStack_194;
      local_c8._0_4_ = local_190;
      local_c8._4_4_ = uStack_18c;
      uStack_c0 = local_188;
      ppppuStack_bc = ppppuStack_184;
      uStack_b8 = uStack_180;
      local_b4 = uStack_17c;
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_3c = 0;
      local_e8 = (undefined4 *****)0x0;
      local_3b = 0;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_b0 = (undefined4 ****)0x0;
      local_4c = 0;
      local_50 = 4;
      local_54 = 0;
      local_78 = 0x80000000;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = 0;
      local_68 = puVar6;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4);
      FUN_00abfaf0(&local_1a8);
      uVar17 = 7;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar6 == (undefined4 *)0x0) goto LAB_00ac5060;
      *(undefined4 *)((int)puVar6 + 3) = 0x6e6f6973;
      *puVar6 = 0x73726576;
      local_ec = 7;
      local_f4 = 7;
      local_f0 = puVar6;
      puVar6 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      *(undefined4 *)((int)puVar6 + 3) = 0x6e6f6973;
      *puVar6 = 0x73726576;
      FUN_006e01d0(&local_1a8);
      FUN_006c86e0(&local_38,param_1);
      local_64 = 7;
      local_6c = 7;
      local_9c = 0x80000000;
      local_e0._0_4_ = (undefined4 ****)local_1a8;
      local_e0._4_4_ = (code *)local_1a8._4_4_;
      local_d8 = (uint *****)uStack_1a0;
      local_d4._0_4_ = (code *)ppppuStack_19c;
      local_d4._4_4_ = (char *)local_198;
      local_cc = uStack_194;
      local_c8._0_4_ = local_190;
      local_c8._4_4_ = uStack_18c;
      uStack_c0 = local_188;
      ppppuStack_bc = ppppuStack_184;
      uStack_b8 = uStack_180;
      local_b4 = uStack_17c;
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_3c = 0;
      local_3b = 0;
      local_50 = 4;
      local_e8 = (undefined4 *****)0x0;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_b0 = (undefined4 ****)0x0;
      local_4c = 0;
      local_54 = 0;
      local_78 = 0x80000000;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = 0;
      local_68 = puVar6;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      uVar17 = 0xb;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(0xb);
      if (puVar6 == (undefined4 *)0x0) goto LAB_00ac5060;
      FUN_01bed4e2(puVar6,"releaseDate",0xb);
      local_ec = 0xb;
      local_f4 = 0xb;
      local_f0 = puVar6;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(0xb);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xb);
      }
      FUN_01bed4e2(puVar6,"releaseDate",0xb);
      FUN_006e01d0(&local_1a8);
      FUN_006c86e0(&local_38,param_1);
      local_64 = 0xb;
      local_6c = 0xb;
      local_9c = 0x80000000;
      local_e0._0_4_ = (undefined4 ****)local_1a8;
      local_e0._4_4_ = (code *)local_1a8._4_4_;
      local_d8 = (uint *****)uStack_1a0;
      local_d4._0_4_ = (code *)ppppuStack_19c;
      local_d4._4_4_ = (char *)local_198;
      local_cc = uStack_194;
      local_c8._0_4_ = local_190;
      local_c8._4_4_ = uStack_18c;
      uStack_c0 = local_188;
      ppppuStack_bc = ppppuStack_184;
      uStack_b8 = uStack_180;
      local_b4 = uStack_17c;
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_3c = 0;
      local_3b = 0;
      local_50 = 4;
      local_e8 = (undefined4 *****)0x0;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_b0 = (undefined4 ****)0x0;
      local_4c = 0;
      local_54 = 0;
      local_78 = 0x80000000;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = 0;
      local_68 = puVar6;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      uVar17 = 0xb;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(0xb);
      if (puVar6 == (undefined4 *)0x0) goto LAB_00ac5060;
      FUN_01bed4e2(puVar6,"description",0xb);
      local_ec = 0xb;
      local_f4 = 0xb;
      local_f0 = puVar6;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(0xb);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xb);
      }
      FUN_01bed4e2(puVar6,"description",0xb);
      FUN_006e01d0(&local_1a8);
      FUN_006c86e0(&local_38,param_1);
      local_64 = 0xb;
      local_6c = 0xb;
      local_9c = 0x80000000;
      local_e0._0_4_ = (undefined4 ****)local_1a8;
      local_e0._4_4_ = (code *)local_1a8._4_4_;
      local_d8 = (uint *****)uStack_1a0;
      local_d4._0_4_ = (code *)ppppuStack_19c;
      local_d4._4_4_ = (char *)local_198;
      local_cc = uStack_194;
      local_c8._0_4_ = local_190;
      local_c8._4_4_ = uStack_18c;
      uStack_c0 = local_188;
      ppppuStack_bc = ppppuStack_184;
      uStack_b8 = uStack_180;
      local_b4 = uStack_17c;
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_3c = 0;
      local_3b = 0;
      local_50 = 4;
      local_e8 = (undefined4 *****)0x0;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_b0 = (undefined4 ****)0x0;
      local_4c = 0;
      local_54 = 0;
      local_78 = 0x80000000;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = 0;
      local_68 = puVar6;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      uVar17 = 3;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(3);
      if (puVar6 == (undefined4 *)0x0) goto LAB_00ac5060;
      *(undefined1 *)((int)puVar6 + 2) = 0x6c;
      *(undefined2 *)puVar6 = 0x7275;
      local_ec = 3;
      local_f4 = 3;
      local_f0 = puVar6;
      puVar6 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,3);
      }
      *(undefined1 *)((int)puVar6 + 2) = 0x6c;
      *(undefined2 *)puVar6 = 0x7275;
      FUN_006e01d0(&local_1a8);
      FUN_006c86e0(&local_38,param_1);
      local_64 = 3;
      local_6c = 3;
      local_9c = 0x80000000;
      local_e0._0_4_ = (undefined4 ****)local_1a8;
      local_e0._4_4_ = (code *)local_1a8._4_4_;
      local_d8 = (uint *****)uStack_1a0;
      local_d4._0_4_ = (code *)ppppuStack_19c;
      local_d4._4_4_ = (char *)local_198;
      local_cc = uStack_194;
      local_c8._0_4_ = local_190;
      local_c8._4_4_ = uStack_18c;
      uStack_c0 = local_188;
      ppppuStack_bc = ppppuStack_184;
      uStack_b8 = uStack_180;
      local_b4 = uStack_17c;
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_3c = 0;
      local_3b = 0;
      local_50 = 4;
      local_e8 = (undefined4 *****)0x0;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_b0 = (undefined4 ****)0x0;
      local_4c = 0;
      local_54 = 0;
      local_78 = 0x80000000;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = 0;
      local_68 = puVar6;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      uVar17 = 8;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar6 == (undefined4 *)0x0) goto LAB_00ac5060;
      puVar6[1] = 0x657a6953;
      *puVar6 = 0x656c6966;
      local_ec = 8;
      local_f4 = 8;
      local_f0 = puVar6;
      puVar6 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,8);
      }
      *puVar6 = 0x656c6966;
      puVar6[1] = 0x657a6953;
      FUN_006e01d0(&local_1a8);
      FUN_006ce45c(&local_38,param_1);
      local_64 = 8;
      local_6c = 8;
      local_9c = 0x80000000;
      local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_3c = 0;
      local_e8 = (undefined4 *****)0x0;
      local_3b = 0;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_b0 = (undefined4 ****)0x0;
      local_4c = 0;
      local_50 = 4;
      local_54 = 0;
      local_78 = 0x80000000;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = 0;
      local_68 = puVar6;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      puVar7 = (uint *)((uint)&local_1a8 | 4);
      *puVar7 = (uint)local_1d8;
      puVar7[1] = (uint)local_1d4;
      puVar7[2] = (uint)local_1d0;
      puVar7[3] = local_1cc;
      puVar7[4] = local_1c8;
      puVar7[5] = local_1c4;
      puVar7[6] = local_1c0;
      puVar7[7] = (uint)puStack_1bc;
      puVar7[8] = uStack_1b8;
      puVar7[9] = uStack_1b4;
      puVar7[10] = uStack_1b0;
      puVar7[0xb] = uStack_1ac;
      local_d8 = (uint *****)0x80000001;
      local_d4._0_4_ = (code *)(undefined4 ****)local_1a8;
      local_d4._4_4_ = (char *)local_1a8._4_4_;
      local_cc = uStack_1a0;
      local_c8._0_4_ = ppppuStack_19c;
      local_c8._4_4_ = local_198;
      uStack_c0 = uStack_194;
      ppppuStack_bc = local_190;
      uStack_b8 = uStack_18c;
      local_b4 = local_188;
      local_b0 = ppppuStack_184;
      local_ac = uStack_180;
      local_a8 = uStack_17c;
      ppppuStack_a4 = (undefined4 ****)uStack_178;
      local_54 = 0;
      local_70 = 0;
      local_78 = 0;
      local_4c = local_4c & 0xffff0000;
      local_50 = 0x10000;
      local_60._0_4_ = 0x80000000;
      local_6c = 0x80000000;
      local_74 = 8;
      local_80 = 4;
      local_7c = 0;
      local_84 = 0;
      local_94 = 0x2c;
      local_a0 = 0;
      local_98 = "boser::system_upgrade::data::UpgradeMetadata";
      local_9c = CONCAT31(local_9c._1_3_,1);
      iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                           "UpgradeMetadata",0xf);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar2,&local_e8,0xb0);
    }
    else {
      uVar20 = FUN_006a71d4();
      iVar9 = (int)((ulonglong)uVar20 >> 0x20);
      iVar3 = (int)uVar20;
      if (iVar3 != 0) {
        local_1a8 = uVar20;
        if (iVar9 == 0x2c) {
          iVar3 = thunk_FUN_01bed842("boser::system_upgrade::data::UpgradeMetadata",iVar3,0x2c);
          if (iVar3 != 0) goto LAB_00ac424c;
        }
        else {
          if (iVar9 == 0xd) {
            iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
            if (iVar3 == 0) goto LAB_00ac4280;
          }
LAB_00ac424c:
          iVar3 = FUN_015db690(param_1 + 0x20,"UpgradeMetadata",0xf);
          if (iVar3 == 0) {
            local_e0._0_4_ = (undefined4 ****)&local_1f4;
            puVar11 = &DAT_01c226d0;
            puVar8 = &DAT_00572c5c;
            goto LAB_00ac4fe4;
          }
        }
        uVar12 = 2;
        if ((int)*(uint *)(iVar2 + 0x10) < 0) {
          uVar12 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
        }
        if (uVar12 != 1) {
          local_2b4 = &local_1fc;
          puVar11 = &DAT_01c226e0;
          local_1d8 = (char *****)CONCAT31(local_1d8._1_3_,(char)uVar12);
          puVar8 = &DAT_005b5680;
          local_e0._0_4_ = (undefined4 ****)&local_1e9;
LAB_00ac4fe4:
          local_e8 = local_2b4;
          local_e4 = (char *)&DAT_0132b6a0;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar8,&local_e8,puVar11);
        }
      }
    }
LAB_00ac4280:
    local_e0._0_4_ = (undefined4 ****)0xf;
    local_e4 = "UpgradeMetadata";
    local_e8 = (undefined4 *****)0x80000000;
    local_1d4 = &LAB_012b97d8;
    local_2b4 = (uint *****)&local_1d8;
    local_1d8 = (char *****)&local_e8;
    FUN_00664898(&local_1a8,&DAT_0057a667,local_2b4);
    if (local_e8 != (undefined4 *****)0x80000000) {
      FUN_019bb7e0(local_e8,local_e4);
    }
    uStack_58 = uStack_1a0;
    local_64 = 0xd;
    local_6c = 0xd;
    local_9c = 0x80000000;
    local_e0._0_4_ = (undefined4 ****)local_230;
    local_e0._4_4_ = (code *)uStack_22c;
    local_d8 = (uint *****)uStack_228;
    local_d4._0_4_ = (code *)ppppuStack_224;
    local_d4._4_4_ = (char *)uStack_220;
    local_cc = uStack_21c;
    local_c8._0_4_ = local_218;
    local_c8._4_4_ = uStack_214;
    uStack_c0 = uStack_210;
    ppppuStack_bc = ppppuStack_20c;
    uStack_b8 = uStack_208;
    local_b4 = uStack_204;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_84 = 0x80000000;
    local_3b = 0;
    local_90 = 0x80000000;
    local_78 = 0x80000000;
    local_3c = 0;
    local_e8 = (undefined4 *****)0x0;
    local_b0 = (undefined4 ****)0x0;
    local_4c = 0;
    local_50 = 4;
    local_54 = 0;
    local_40 = 0;
    local_44 = 8;
    local_48 = 0;
    local_ac = 0;
    local_68 = puVar5;
    local_60 = local_1a8;
    FUN_006e10e8(&local_1a8,&local_270,&local_23c,&local_e8);
    pppppuVar13 = (undefined4 *****)&local_1a8;
    FUN_00abfaf0(pppppuVar13);
    uVar18 = 0x10;
    iVar2 = thunk_FUN_01be5118(0x10);
    if (iVar2 == 0) {
LAB_00ac5070:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar18);
    }
    FUN_01bed4e2(iVar2,&DAT_005698a8,0x10);
    local_234 = 0x10;
    local_23c = 0x10;
    local_238 = iVar2;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0x10);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x10);
    }
    FUN_01bed4e2(puVar5,&DAT_005698a8,0x10);
    FUN_006e01d0(&local_230);
    local_1e9 = 1;
    local_1f0 = 0x28;
    local_1f4 = "boser::system_upgrade::data::ReleaseInfo";
    local_1f8 = 0xb;
    local_1fc = (uint ****)0x3eb418;
    iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_01be5118(0xb);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xb);
      }
      FUN_01bed4e2(iVar2,"ReleaseInfo",0xb);
      local_1d0 = (uint ****)0xb;
      local_1d8 = (char *****)0xb;
      local_1d4 = (undefined1 *)iVar2;
      FUN_006a0cfc(&local_e8,1,"boser::system_upgrade::data::ReleaseInfo",0x28);
      FUN_006c2a34(&local_1a8,puVar19,&local_1d8,&local_e8);
      if (local_198 != 0x80000006) {
        FUN_00abf870(&local_1a8);
      }
      local_e4 = "ReleaseInfo";
      local_e0._0_4_ = (undefined4 ****)0xb;
      local_e8 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(local_1e8,&local_e8);
      if ((char)puVar15[4] == '\0') {
        FUN_019ae6ac(&local_e8);
        *puVar15 = (uint)local_e8;
        puVar15[1] = (uint)local_e4;
        *puVar10 = (uint)(undefined4 ****)local_e0;
        puVar15[3] = (uint)local_e0._4_4_;
        *(undefined1 *)(puVar15 + 4) = 1;
      }
      local_1d8 = (char *****)*puVar15;
      local_1d4 = (undefined1 *)puVar15[1];
      local_1c0 = 0;
      local_1d0 = (uint ****)*puVar10;
      local_1cc = puVar15[3];
      *puVar15 = (uint)((int)local_1d8 + 1);
      puVar15[1] = (uint)(local_1d4 + ((char *****)0xfffffffe < local_1d8));
      local_1c8 = 0;
      local_1c4 = 8;
      puStack_1bc = &DAT_0056d238;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uVar17 = 7;
      puVar19 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar19 == (undefined4 *)0x0) {
LAB_00ac5080:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar17);
      }
      *(undefined4 *)((int)puVar19 + 3) = 0x6e6f6973;
      *puVar19 = 0x73726576;
      local_ec = 7;
      local_f4 = 7;
      local_f0 = puVar19;
      puVar19 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar19 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      *(undefined4 *)((int)puVar19 + 3) = 0x6e6f6973;
      *puVar19 = 0x73726576;
      FUN_006e01d0(&local_1a8);
      FUN_006c86e0(&local_38,param_1);
      local_64 = 7;
      local_6c = 7;
      local_9c = 0x80000000;
      local_d8 = (uint *****)uStack_1a0;
      local_d4._0_4_ = (code *)ppppuStack_19c;
      local_d4._4_4_ = (char *)local_198;
      local_cc = uStack_194;
      local_c8._0_4_ = local_190;
      local_c8._4_4_ = uStack_18c;
      uStack_c0 = local_188;
      ppppuStack_bc = ppppuStack_184;
      uStack_b8 = uStack_180;
      local_b4 = uStack_17c;
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_3c = 0;
      local_3b = 0;
      local_50 = 4;
      local_e8 = (undefined4 *****)0x0;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_b0 = (undefined4 ****)0x0;
      local_4c = 0;
      local_54 = 0;
      local_78 = 0x80000000;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = 0;
      local_68 = puVar19;
      local_e0 = local_1a8;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4);
      FUN_00abfaf0(&local_1a8);
      uVar17 = 0xb;
      puVar19 = (undefined4 *)thunk_FUN_01be5118(0xb);
      if (puVar19 == (undefined4 *)0x0) goto LAB_00ac5080;
      FUN_01bed4e2(puVar19,"description",0xb);
      local_ec = 0xb;
      local_f4 = 0xb;
      local_f0 = puVar19;
      puVar19 = (undefined4 *)thunk_FUN_01be5118(0xb);
      if (puVar19 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xb);
      }
      FUN_01bed4e2(puVar19,"description",0xb);
      FUN_006e01d0(&local_1a8);
      FUN_006c86e0(&local_38,param_1);
      local_64 = 0xb;
      local_6c = 0xb;
      local_9c = 0x80000000;
      local_d8 = (uint *****)uStack_1a0;
      local_d4._0_4_ = (code *)ppppuStack_19c;
      local_d4._4_4_ = (char *)local_198;
      local_cc = uStack_194;
      local_c8._0_4_ = local_190;
      local_c8._4_4_ = uStack_18c;
      uStack_c0 = local_188;
      ppppuStack_bc = ppppuStack_184;
      uStack_b8 = uStack_180;
      local_b4 = uStack_17c;
      local_60._0_4_ = local_38;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_3c = 0;
      local_3b = 0;
      local_50 = 4;
      local_e8 = (undefined4 *****)0x0;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_b0 = (undefined4 ****)0x0;
      local_4c = 0;
      local_54 = 0;
      local_78 = 0x80000000;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = 0;
      local_68 = puVar19;
      local_e0 = local_1a8;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      uVar17 = 3;
      puVar19 = (undefined4 *)thunk_FUN_01be5118(3);
      if (puVar19 == (undefined4 *)0x0) goto LAB_00ac5080;
      *(undefined1 *)((int)puVar19 + 2) = 0x6c;
      *(undefined2 *)puVar19 = 0x7275;
      local_ec = 3;
      local_f4 = 3;
      local_f0 = puVar19;
      puVar19 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar19 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,3);
      }
      *(undefined1 *)((int)puVar19 + 2) = 0x6c;
      *(undefined2 *)puVar19 = 0x7275;
      FUN_006e01d0(&local_1a8);
      FUN_006c86e0(&local_38,param_1);
      local_64 = 3;
      local_6c = 3;
      local_9c = 0x80000000;
      local_d8 = (uint *****)uStack_1a0;
      local_d4._0_4_ = (code *)ppppuStack_19c;
      local_d4._4_4_ = (char *)local_198;
      local_cc = uStack_194;
      local_c8._0_4_ = local_190;
      local_c8._4_4_ = uStack_18c;
      uStack_c0 = local_188;
      ppppuStack_bc = ppppuStack_184;
      uStack_b8 = uStack_180;
      local_b4 = uStack_17c;
      local_60._4_4_ = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_3c = 0;
      local_3b = 0;
      local_50 = 4;
      local_e8 = (undefined4 *****)0x0;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_b0 = (undefined4 ****)0x0;
      local_4c = 0;
      local_54 = 0;
      local_78 = 0x80000000;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = 0;
      local_68 = puVar19;
      local_e0 = local_1a8;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      puVar19 = (undefined4 *)((uint)&local_1a8 | 4);
      *puVar19 = local_1d8;
      puVar19[1] = local_1d4;
      puVar19[2] = local_1d0;
      puVar19[3] = local_1cc;
      puVar19[4] = local_1c8;
      puVar19[5] = local_1c4;
      puVar19[6] = local_1c0;
      puVar19[7] = puStack_1bc;
      puVar19[8] = uStack_1b8;
      puVar19[9] = uStack_1b4;
      puVar19[10] = uStack_1b0;
      puVar19[0xb] = uStack_1ac;
      local_90 = local_1e8[0];
      local_d8 = (uint *****)0x80000001;
      local_cc = uStack_1a0;
      local_c8._0_4_ = ppppuStack_19c;
      local_c8._4_4_ = local_198;
      uStack_c0 = uStack_194;
      ppppuStack_bc = local_190;
      uStack_b8 = uStack_18c;
      local_b4 = local_188;
      local_b0 = ppppuStack_184;
      local_ac = uStack_180;
      local_a8 = uStack_17c;
      ppppuStack_a4 = (undefined4 ****)uStack_178;
      local_54 = 0;
      local_70 = 0;
      local_78 = 0;
      local_4c = local_4c & 0xffff0000;
      local_50 = 0x10000;
      local_60._0_4_ = 0x80000000;
      local_6c = 0x80000000;
      local_74 = 8;
      local_80 = 4;
      local_7c = 0;
      local_84 = 0;
      local_94 = 0x28;
      local_a0 = 0;
      local_98 = "boser::system_upgrade::data::ReleaseInfo";
      local_9c = CONCAT31(local_9c._1_3_,1);
      local_d4 = local_1a8;
      iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                           "ReleaseInfo",0xb);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar2,&local_e8,0xb0);
    }
    else {
      uVar20 = FUN_006a71d4();
      iVar9 = (int)((ulonglong)uVar20 >> 0x20);
      iVar3 = (int)uVar20;
      if (iVar3 != 0) {
        local_1a8 = uVar20;
        if (iVar9 == 0x28) {
          iVar3 = thunk_FUN_01bed842("boser::system_upgrade::data::ReleaseInfo",iVar3,0x28);
          if (iVar3 != 0) goto LAB_00ac4a84;
        }
        else {
          if (iVar9 == 0xd) {
            iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
            if (iVar3 == 0) goto LAB_00ac4ab8;
          }
LAB_00ac4a84:
          iVar3 = FUN_015db690(param_1 + 0x20,"ReleaseInfo",0xb);
          if (iVar3 == 0) {
            local_2b4 = &local_1fc;
            puVar11 = &DAT_01c226d0;
            puVar8 = &DAT_00572c5c;
            local_e0._4_4_ = (code *)&DAT_0132b6a0;
            local_e0._0_4_ = (undefined4 ****)&local_1f4;
            goto LAB_00ac5034;
          }
        }
        uVar12 = 2;
        if ((int)*(uint *)(iVar2 + 0x10) < 0) {
          uVar12 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
        }
        if (uVar12 != 1) {
          pppppuVar13 = &local_1fc;
          puVar11 = &DAT_01c226e0;
          local_1d8 = (char *****)CONCAT31(local_1d8._1_3_,(char)uVar12);
          puVar8 = &DAT_005b5680;
          local_e0._4_4_ = FUN_006a7514;
          local_e0._0_4_ = (undefined4 ****)&local_1e9;
LAB_00ac5034:
          local_e4 = (char *)&DAT_0132b6a0;
          local_d8 = local_2b4;
          local_e8 = pppppuVar13;
          local_d4._0_4_ = local_e0._4_4_;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar8,&local_e8,puVar11);
        }
      }
    }
LAB_00ac4ab8:
    FUN_009ea5c8(&local_e8);
    FUN_019bb7e0(local_e8,local_e4);
    FUN_009ea5c8(&local_e8);
    local_1d4 = &LAB_00632348;
    local_1d8 = (char *****)&local_e8;
    FUN_00664898(&local_1a8,&DAT_005791cb,&local_1d8);
    FUN_019bb7e0(local_e8,local_e4);
    uStack_58 = uStack_1a0;
    local_64 = 0x10;
    local_6c = 0x10;
    local_9c = 0x80000000;
    local_e0._0_4_ = (undefined4 ****)local_230;
    local_e0._4_4_ = (code *)uStack_22c;
    local_d8 = (uint *****)uStack_228;
    local_d4._0_4_ = (code *)ppppuStack_224;
    local_d4._4_4_ = (char *)uStack_220;
    local_cc = uStack_21c;
    local_c8._0_4_ = local_218;
    local_c8._4_4_ = uStack_214;
    uStack_c0 = uStack_210;
    ppppuStack_bc = ppppuStack_20c;
    uStack_b8 = uStack_208;
    local_b4 = uStack_204;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_3c = 0;
    local_3b = 0;
    local_e8 = (undefined4 *****)0x0;
    local_84 = 0x80000000;
    local_90 = 0x80000000;
    local_b0 = (undefined4 ****)0x0;
    local_4c = 0;
    local_50 = 4;
    local_54 = 0;
    local_78 = 0x80000000;
    local_40 = 0;
    local_44 = 8;
    local_48 = 0;
    local_ac = 0;
    local_68 = puVar5;
    local_60 = local_1a8;
    FUN_006e10e8(&local_1a8,&local_270,&local_23c,&local_e8);
    FUN_00abfaf0(&local_1a8);
    puVar15 = (uint *)((uint)&local_1a8 | 4);
    *puVar15 = local_270;
    puVar15[1] = uStack_26c;
    puVar15[2] = uStack_268;
    puVar15[3] = local_264;
    puVar15[4] = local_260;
    puVar15[5] = local_25c;
    puVar15[6] = local_258;
    puVar15[7] = (uint)puStack_254;
    puVar15[8] = uStack_250;
    puVar15[9] = uStack_24c;
    puVar15[10] = uStack_248;
    puVar15[0xb] = uStack_244;
    local_d8 = (uint *****)0x80000001;
    local_cc = uStack_1a0;
    local_c8._0_4_ = ppppuStack_19c;
    local_c8._4_4_ = local_198;
    uStack_c0 = uStack_194;
    ppppuStack_bc = local_190;
    uStack_b8 = uStack_18c;
    local_b4 = local_188;
    local_b0 = ppppuStack_184;
    local_ac = uStack_180;
    local_a8 = uStack_17c;
    ppppuStack_a4 = (undefined4 ****)uStack_178;
    local_54 = 0;
    local_70 = 0;
    local_78 = 0;
    local_4c = local_4c & 0xffff0000;
    local_50 = 0x10000;
    local_60._0_4_ = 0x80000000;
    local_6c = 0x80000000;
    local_74 = 8;
    local_80 = 4;
    local_7c = 0;
    local_84 = 0;
    local_94 = 0x2a;
    local_a0 = 0;
    local_98 = "boser::system_upgrade::data::UpgradeDetail";
    local_9c = CONCAT31(local_9c._1_3_,1);
    local_d4 = local_1a8;
    iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                         "UpgradeDetail",0xd);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar2,&local_e8,0xb0);
    goto LAB_00ac4cc0;
  }
  uVar20 = FUN_006a71d4();
  iVar9 = (int)((ulonglong)uVar20 >> 0x20);
  iVar3 = (int)uVar20;
  if (iVar3 == 0) goto LAB_00ac4cc0;
  local_1a8 = uVar20;
  if (iVar9 == 0x2a) {
    iVar3 = thunk_FUN_01bed842("boser::system_upgrade::data::UpgradeDetail",iVar3,0x2a);
    if (iVar3 != 0) goto LAB_00ac41cc;
  }
  else {
    if (iVar9 == 0xd) {
      iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
      if (iVar3 == 0) goto LAB_00ac4cc0;
    }
LAB_00ac41cc:
    iVar3 = FUN_015db690(param_1 + 0x20,"UpgradeDetail",0xd);
    if (iVar3 == 0) {
      pppppuVar16 = &local_294;
      local_e0._0_4_ = (undefined4 ****)&local_28c;
      puVar11 = &DAT_01c226d0;
      puVar8 = &DAT_00572c5c;
      local_e0._4_4_ = (code *)&DAT_0132b6a0;
      goto LAB_00ac4f20;
    }
  }
  uVar12 = 2;
  if ((int)*(uint *)(iVar2 + 0x10) < 0) {
    uVar12 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
  }
  if (uVar12 == 1) {
LAB_00ac4cc0:
    local_e0._0_4_ = (undefined4 ****)0xd;
    local_e8 = (undefined4 *****)0x80000000;
    local_1d8 = (char *****)&local_e8;
    local_e4 = "UpgradeDetail";
    local_1d4 = &LAB_012b97d8;
    FUN_00664898(&local_1a8,&DAT_0057a667,&local_1d8);
    uVar20 = local_1a8;
    if (local_e8 != (undefined4 *****)0x80000000) {
      FUN_019bb7e0(local_e8,local_e4);
      uVar20 = local_1a8;
    }
    local_1a8._4_4_ = (uint)((ulonglong)uVar20 >> 0x20);
    local_1a8._0_4_ = (undefined4 ****)uVar20;
    FUN_019bb7e0((undefined4 ****)local_1a8,local_1a8._4_4_);
    local_1a8 = uVar20;
    FUN_00a45534(&local_e8,param_1);
    FUN_019bb7e0(local_e8,local_e4);
    local_e0._0_4_ = (undefined4 ****)0x12;
    local_e4 = "CheckUpgradeResult";
    local_e8 = (undefined4 *****)0x80000000;
    FUN_0160ec7c(&local_230,&local_e8);
    FUN_006e01d0(&local_1a8);
    local_e4 = "UpgradeDetail";
    local_e0._0_4_ = (undefined4 ****)0xd;
    local_e8 = (undefined4 *****)0x80000000;
    FUN_0160ec7c(&local_1d8,&local_e8);
    FUN_006dd1ec(&local_1a8,&local_1d8);
    local_e0._0_4_ = (undefined4 ****)0x8;
    local_e4 = "BosError";
    local_e8 = (undefined4 *****)0x80000000;
    FUN_0160ec7c(&local_1d8,&local_e8);
    FUN_006dd1ec(&local_1a8,&local_1d8);
    uStack_c0 = uStack_1a0;
    ppppuStack_bc = ppppuStack_19c;
    uStack_b8 = local_198;
    local_b4 = uStack_194;
    local_b0 = local_190;
    local_ac = uStack_18c;
    local_a8 = local_188;
    ppppuStack_a4 = ppppuStack_184;
    local_a0 = uStack_180;
    local_9c = uStack_17c;
    local_88 = local_230;
    local_84 = uStack_22c;
    local_80 = uStack_228;
    local_6c = 8;
    local_78 = 4;
    local_64 = local_64 & 0xffffff00;
    local_68 = (undefined4 *)0x0;
    local_70 = 0;
    local_74 = 0;
    local_7c = 0;
    local_98 = (char *)0x0;
    local_94 = 0x80000000;
    local_cc = 0x2c;
    local_d8 = (uint *****)0x80000003;
    local_d4._4_4_ = "boser::web::graphql::bos::CheckUpgradeResult";
    local_c8 = local_1a8;
    iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),param_2,
                         param_3);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar2,&local_e8,0xb0);
    return;
  }
  pppppuVar13 = &local_294;
  puVar11 = &DAT_01c226e0;
  local_1d8 = (char *****)CONCAT31(local_1d8._1_3_,(char)uVar12);
  puVar8 = &DAT_005b5680;
  local_e0._4_4_ = FUN_006a7514;
  local_e0._0_4_ = (undefined4 ****)local_281;
LAB_00ac4f20:
  local_e4 = (char *)&DAT_0132b6a0;
  local_e8 = pppppuVar13;
  local_d8 = pppppuVar16;
  local_d4._0_4_ = local_e0._4_4_;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar8,&local_e8,puVar11);
}

