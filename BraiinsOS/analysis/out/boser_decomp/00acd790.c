// FUN_00acd790 @ 00acd790 size=14668 calls_out=32 calls_in=1
// strings: boser::web::graphql::bosminer::info::miner_status::StopReason | __fake_type__ | boser::web::graphql::bosminer::info::miner_status::StopReason | boser::web::graphql::bosminer::info::miner_status::StopReason | boser::web::graphql::bosminer::info::miner_status::ApplicationUnavailable | ApplicationUnavailable

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00acd790(int param_1,uint **param_2,uint ****param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint ****ppppuVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *****pppppuVar12;
  uint ****ppppuVar13;
  undefined4 uVar14;
  undefined4 *****pppppuVar15;
  uint *puVar16;
  uint ****ppppuVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  longlong lVar21;
  undefined4 *****local_2b8;
  uint *****local_2b4;
  char ***local_298;
  uint ****local_294;
  char *local_290;
  undefined4 local_28c;
  undefined1 local_285;
  uint ****local_284;
  undefined4 local_280;
  char *local_27c;
  undefined4 local_278;
  undefined1 local_271;
  char *local_270;
  int iStack_26c;
  char *pcStack_268;
  uint local_260;
  undefined4 *local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  uint local_248;
  undefined4 *puStack_244;
  uint uStack_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  uint ****local_22c;
  undefined4 *local_228;
  undefined4 local_224;
  undefined4 local_220;
  uint uStack_21c;
  uint ****ppppuStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  uint ****local_1ec;
  undefined4 local_1e8;
  char *local_1e4;
  undefined4 local_1e0;
  undefined1 local_1d9;
  char *local_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  char *local_1c8;
  int local_1c4;
  char *local_1c0;
  char *****local_1b8;
  uint ****local_1b4;
  uint ****local_1b0;
  uint ****local_1ac;
  uint ****local_1a8;
  uint ****local_1a4;
  uint ****local_1a0;
  uint ****ppppuStack_19c;
  uint ****ppppuStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  uint ****ppppuStack_180;
  uint ****ppppuStack_17c;
  uint ****local_178;
  uint ****ppppuStack_174;
  uint ****local_170;
  uint ****ppppuStack_16c;
  uint ****local_168;
  uint ****ppppuStack_164;
  uint ****ppppuStack_160;
  uint ****ppppuStack_15c;
  uint uStack_158;
  undefined4 *****local_d8;
  char *local_d4;
  undefined8 local_d0;
  uint *****local_c8;
  undefined8 local_c4;
  uint ****local_bc;
  undefined8 local_b8;
  uint ****local_b0;
  uint ****local_ac;
  uint ****local_a8;
  uint ****local_a4;
  uint ****local_a0;
  uint ****local_9c;
  uint ****local_98;
  uint ****ppppuStack_94;
  uint ****local_90;
  uint ****local_8c;
  char *local_88;
  undefined4 local_84;
  char *local_80;
  int iStack_7c;
  char *local_78;
  uint local_74;
  uint ****local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  uint local_54;
  undefined8 local_50;
  uint ****ppppuStack_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined2 local_2b;
  
  local_270 = (char *)((uint)local_270._1_3_ << 8);
  puVar18 = (undefined4 *)(param_1 + 0x40);
  local_28c = 0x3d;
  local_285 = 3;
  local_290 = "boser::web::graphql::bosminer::info::miner_status::StopReason";
  local_298 = (char ***)param_2;
  local_294 = param_3;
  iVar2 = FUN_006c176c(*puVar18,*(undefined4 *)(param_1 + 0x44),param_2,param_3);
  if (iVar2 != 0) {
    local_188 = FUN_006a71d4();
    iVar8 = (int)((ulonglong)local_188 >> 0x20);
    iVar3 = (int)local_188;
    if (iVar3 == 0) {
      return;
    }
    if (iVar8 == 0x3d) {
      iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::info::miner_status::StopReason",
                                 iVar3,0x3d);
      if (iVar3 == 0) goto LAB_00acd8ac;
    }
    else if (iVar8 == 0xd) {
      iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
      if (iVar3 == 0) {
        return;
      }
    }
    iVar3 = FUN_015db690(param_1 + 0x20,param_2,param_3);
    if (iVar3 == 0) {
      local_c8 = (uint *****)&local_298;
      local_c4._0_4_ = (code *)&DAT_0132b6a0;
      local_d0._4_4_ = (code *)&DAT_0132b6a0;
      local_d4 = (char *)&DAT_0132b6a0;
      local_d0._0_4_ = (undefined4 ****)&local_290;
      local_d8 = (undefined4 *****)&local_188;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_00572c5c,&local_d8,&DAT_01c226d0);
    }
LAB_00acd8ac:
    if (*(int *)(iVar2 + 0x10) != -0x7ffffffd) {
      uVar1 = FUN_006a7508();
      local_1b8 = (char *****)CONCAT31(local_1b8._1_3_,uVar1);
      local_c8 = (uint *****)&local_1b8;
      local_d0._0_4_ = (undefined4 ****)&local_285;
      local_d8 = (undefined4 *****)&local_298;
      local_d4 = (char *)&DAT_0132b6a0;
      local_c4._0_4_ = FUN_006a7514;
      local_d0._4_4_ = FUN_006a7514;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005b5680,&local_d8,&DAT_01c226e0);
    }
    return;
  }
  uVar14 = 0;
  if ((int)param_3 < 0) {
LAB_00acd844:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar14,param_3);
  }
  if (param_3 == (uint ****)0x0) {
    ppppuVar13 = (uint ****)0x0;
    iVar2 = 1;
  }
  else {
    uVar14 = 1;
    iVar2 = FUN_01298504(param_3,1);
    ppppuVar13 = param_3;
    if (iVar2 == 0) goto LAB_00acd844;
  }
  FUN_01bed4e2(iVar2,param_2,param_3);
  local_1b8 = (char *****)ppppuVar13;
  local_1b4 = (uint ****)iVar2;
  local_1b0 = param_3;
  FUN_006a0cfc(&local_d8,3,"boser::web::graphql::bosminer::info::miner_status::StopReason",0x3d);
  pppppuVar15 = (undefined4 *****)&local_188;
  pppppuVar12 = (uint *****)&local_1b8;
  FUN_006c2a34(pppppuVar15,puVar18,pppppuVar12,&local_d8);
  if (local_178 != (uint ****)0x80000006) {
    FUN_00abf870(&local_188);
  }
  FUN_00b239ec(&local_d8,param_1);
  FUN_019bb7e0(local_d8,local_d4);
  local_270 = (char *)CONCAT31(local_270._1_3_,1);
  local_1d4 = 0x49;
  local_1d8 = "boser::web::graphql::bosminer::info::miner_status::ApplicationUnavailable";
  local_228 = (undefined4 *)0x16;
  local_22c = (uint ****)0x4a2908;
  iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_01be5118(0x16);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x16);
    }
    FUN_01bed4e2(iVar2,"ApplicationUnavailable",0x16);
    local_1b0 = (uint ****)0x16;
    local_1b8 = (char *****)0x16;
    local_1b4 = (uint ****)iVar2;
    FUN_006a0cfc(&local_d8,1,
                 "boser::web::graphql::bosminer::info::miner_status::ApplicationUnavailable",0x49);
    FUN_006c2a34(&local_188,puVar18,&local_1b8,&local_d8);
    if (local_178 != (uint ****)0x80000006) {
      FUN_00abf870(&local_188);
    }
    local_d0._0_4_ = (undefined4 ****)0x16;
    local_d8 = (undefined4 *****)0x80000000;
    local_d4 = "ApplicationUnavailable";
    uVar14 = FUN_0160ec7c(&local_1c8,&local_d8);
    uVar19 = thunk_FUN_01bee35a(uVar14,0x2c0);
    puVar11 = (uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
    if ((char)puVar11[4] == '\0') {
      FUN_019ae6ac(&local_d8);
      *puVar11 = (uint)local_d8;
      puVar11[1] = (uint)local_d4;
      puVar11[2] = (uint)(undefined4 ****)local_d0;
      puVar11[3] = (uint)local_d0._4_4_;
      *(undefined1 *)(puVar11 + 4) = 1;
    }
    local_1b8 = (char *****)*puVar11;
    local_1b4 = (uint ****)puVar11[1];
    local_1b0 = (uint ****)puVar11[2];
    local_1ac = (uint ****)puVar11[3];
    local_1a4 = (uint ****)0x8;
    *puVar11 = (int)local_1b8 + 1;
    puVar11[1] = (int)local_1b4 + (uint)((uint ****)0xfffffffe < local_1b8);
    local_1a0 = (uint ****)0x0;
    local_1a8 = (uint ****)0x0;
    ppppuStack_19c = (uint ****)&DAT_0056d238;
    ppppuStack_198 = (uint ****)0x0;
    uStack_194 = 0;
    uStack_190 = 0;
    local_25c = (undefined4 *)thunk_FUN_01be5118(4);
    if (local_25c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    *local_25c = 0x64696f76;
    local_258 = 4;
    local_260 = 4;
    puVar6 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    *puVar6 = 0x64696f76;
    FUN_006e01d0(&local_188);
    FUN_011e660c(&local_220,param_1);
    local_54 = 4;
    local_5c = 4;
    local_8c = (uint ****)0x80000000;
    local_d0._0_4_ = (undefined4 ****)local_188;
    local_d0._4_4_ = (code *)local_188._4_4_;
    local_c8 = (uint *****)ppppuStack_180;
    local_c4._0_4_ = (code *)ppppuStack_17c;
    local_c4._4_4_ = (char *)local_178;
    local_bc = ppppuStack_174;
    local_b8._0_4_ = local_170;
    local_b8._4_4_ = ppppuStack_16c;
    local_b0 = local_168;
    local_ac = ppppuStack_164;
    local_a8 = ppppuStack_160;
    local_a4 = ppppuStack_15c;
    local_50._0_4_ = local_220;
    local_50._4_4_ = uStack_21c;
    ppppuStack_48 = ppppuStack_218;
    local_d4 = (char *)CONCAT31(local_d4._1_3_,1);
    local_98 = (uint ****)0x80000001;
    local_2c = 0;
    local_d8 = (undefined4 *****)0x0;
    local_74 = 0x80000000;
    local_80 = (char *)0x80000000;
    local_2b = 0;
    local_a0 = (uint ****)0x0;
    local_3c = 0;
    local_40 = 4;
    local_44 = 0;
    local_68 = 0x80000000;
    local_30 = 0;
    local_34 = 8;
    local_38 = 0;
    local_9c = (uint ****)0x0;
    local_58 = puVar6;
    FUN_006e10e8(&local_188,&local_1b8,&local_260);
    FUN_00abfaf0(&local_188);
    puVar11 = (uint *)((uint)&local_188 | 4);
    *puVar11 = (uint)local_1b8;
    puVar11[1] = (uint)local_1b4;
    puVar11[2] = (uint)local_1b0;
    puVar11[3] = (uint)local_1ac;
    puVar11[4] = (uint)local_1a8;
    puVar11[5] = (uint)local_1a4;
    puVar11[6] = (uint)local_1a0;
    puVar11[7] = (uint)ppppuStack_19c;
    puVar11[8] = (uint)ppppuStack_198;
    puVar11[9] = uStack_194;
    puVar11[10] = uStack_190;
    puVar11[0xb] = uStack_18c;
    local_80 = local_1c8;
    iStack_7c = local_1c4;
    local_78 = local_1c0;
    local_c8 = (uint *****)0x80000001;
    local_c4._0_4_ = (code *)(undefined4 ****)local_188;
    local_c4._4_4_ = (char *)local_188._4_4_;
    local_bc = ppppuStack_180;
    local_b8._0_4_ = ppppuStack_17c;
    local_b8._4_4_ = local_178;
    local_b0 = ppppuStack_174;
    local_ac = local_170;
    local_a8 = ppppuStack_16c;
    local_a4 = local_168;
    local_a0 = ppppuStack_164;
    local_9c = ppppuStack_160;
    local_98 = ppppuStack_15c;
    ppppuStack_94 = (uint ****)uStack_158;
    local_3c = local_3c & 0xffff0000;
    local_40 = 0x10000;
    local_50._0_4_ = 0x80000000;
    local_5c = 0x80000000;
    local_64 = 8;
    local_70 = (uint ****)0x4;
    local_44 = 0;
    local_60 = 0;
    local_68 = 0;
    local_6c = 0;
    local_74 = 0;
    local_84 = 0x49;
    local_90 = (uint ****)0x0;
    local_88 = "boser::web::graphql::bosminer::info::miner_status::ApplicationUnavailable";
    local_8c = (uint ****)CONCAT31(local_8c._1_3_,1);
    iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                         "ApplicationUnavailable",0x16);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar2,&local_d8,0xb0);
  }
  else {
    uVar19 = FUN_006a71d4();
    iVar8 = (int)((ulonglong)uVar19 >> 0x20);
    iVar3 = (int)uVar19;
    if (iVar3 != 0) {
      local_188 = uVar19;
      if (iVar8 == 0x49) {
        iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::info::miner_status::ApplicationUnavailable"
                                   ,iVar3,0x49);
        if (iVar3 != 0) goto LAB_00acdd50;
      }
      else {
        if (iVar8 == 0xd) {
          iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
          if (iVar3 == 0) goto LAB_00acdd84;
        }
LAB_00acdd50:
        iVar3 = FUN_015db690(param_1 + 0x20,"ApplicationUnavailable",0x16);
        if (iVar3 == 0) {
          pppppuVar12 = &local_22c;
          local_d0._0_4_ = (undefined4 ****)&local_1d8;
          puVar9 = &DAT_01c226d0;
          puVar7 = &DAT_00572c5c;
          local_d0._4_4_ = (code *)&DAT_0132b6a0;
          goto LAB_00ad1030;
        }
      }
      uVar10 = 2;
      if ((int)*(uint *)(iVar2 + 0x10) < 0) {
        uVar10 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
      }
      if (uVar10 != 1) {
        pppppuVar15 = &local_22c;
        puVar9 = &DAT_01c226e0;
        local_1b8 = (char *****)CONCAT31(local_1b8._1_3_,(char)uVar10);
        puVar7 = &DAT_005b5680;
        local_d0._4_4_ = FUN_006a7514;
        local_d0._0_4_ = (undefined4 ****)&local_270;
LAB_00ad1030:
        local_d4 = (char *)&DAT_0132b6a0;
        local_d8 = pppppuVar15;
        local_c8 = pppppuVar12;
        local_c4._0_4_ = local_d0._4_4_;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(puVar7,&local_d8,puVar9);
      }
    }
  }
LAB_00acdd84:
  local_1b8 = (char *****)&local_d8;
  local_d0._0_4_ = (undefined4 ****)0x16;
  local_1b4 = (uint ****)&LAB_012b97d8;
  local_d4 = "ApplicationUnavailable";
  local_d8 = (undefined4 *****)0x80000000;
  FUN_00664898(&local_188,&DAT_0057a667,&local_1b8);
  uVar19 = local_188;
  if (local_d8 != (undefined4 *****)0x80000000) {
    FUN_019bb7e0(local_d8,local_d4);
    uVar19 = local_188;
  }
  local_188._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
  local_188._0_4_ = (undefined4 ****)uVar19;
  FUN_019bb7e0((undefined4 ****)local_188,local_188._4_4_);
  local_188 = uVar19;
  local_270 = (char *)CONCAT31(local_270._1_3_,1);
  local_1d8 = "boser::web::graphql::bosminer::info::miner_status::UnsupportedHardware";
  local_1d4 = 0x46;
  local_228 = (undefined4 *)&DAT_00000013;
  local_22c = (uint ****)0x4a28f0;
  iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_01be5118(0x13);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x13);
    }
    FUN_01bed4e2(iVar2,"UnsupportedHardware",0x13);
    local_1b0 = (uint ****)0x13;
    local_1b8 = (char *****)0x13;
    local_1b4 = (uint ****)iVar2;
    FUN_006a0cfc(&local_d8,1,
                 "boser::web::graphql::bosminer::info::miner_status::UnsupportedHardware",0x46);
    FUN_006c2a34(&local_188,puVar18,&local_1b8,&local_d8);
    if (local_178 != (uint ****)0x80000006) {
      FUN_00abf870(&local_188);
    }
    local_d0._0_4_ = (undefined4 ****)0x13;
    local_d8 = (undefined4 *****)0x80000000;
    local_d4 = "UnsupportedHardware";
    uVar14 = FUN_0160ec7c(&local_1c8,&local_d8);
    uVar19 = thunk_FUN_01bee35a(uVar14,0x2c0);
    puVar11 = (uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
    if ((char)puVar11[4] == '\0') {
      FUN_019ae6ac(&local_d8);
      *puVar11 = (uint)local_d8;
      puVar11[1] = (uint)local_d4;
      puVar11[2] = (uint)(undefined4 ****)local_d0;
      puVar11[3] = (uint)local_d0._4_4_;
      *(undefined1 *)(puVar11 + 4) = 1;
    }
    local_1b8 = (char *****)*puVar11;
    local_1b4 = (uint ****)puVar11[1];
    local_1b0 = (uint ****)puVar11[2];
    local_1ac = (uint ****)puVar11[3];
    *puVar11 = (int)local_1b8 + 1;
    puVar11[1] = (int)local_1b4 + (uint)((uint ****)0xfffffffe < local_1b8);
    local_1a0 = (uint ****)0x0;
    local_1a8 = (uint ****)0x0;
    local_1a4 = (uint ****)0x8;
    ppppuStack_19c = (uint ****)&DAT_0056d238;
    ppppuStack_198 = (uint ****)0x0;
    uStack_194 = 0;
    uStack_190 = 0;
    puVar6 = (undefined4 *)thunk_FUN_01be5118(6);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,6);
    }
    *(undefined2 *)(puVar6 + 1) = 0x7372;
    *puVar6 = 0x6f727265;
    local_258 = 6;
    local_260 = 6;
    local_25c = puVar6;
    puVar6 = (undefined4 *)thunk_FUN_01be5118(6);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,6);
    }
    *(undefined2 *)(puVar6 + 1) = 0x7372;
    *puVar6 = 0x6f727265;
    FUN_006e01d0(&local_188);
    FUN_00b55fec(&local_220,param_1);
    local_54 = 6;
    local_5c = 6;
    local_8c = (uint ****)0x80000000;
    local_c8 = (uint *****)ppppuStack_180;
    local_c4._0_4_ = (code *)ppppuStack_17c;
    local_c4._4_4_ = (char *)local_178;
    local_bc = ppppuStack_174;
    local_b8._0_4_ = local_170;
    local_b8._4_4_ = ppppuStack_16c;
    local_b0 = local_168;
    local_ac = ppppuStack_164;
    local_a8 = ppppuStack_160;
    local_a4 = ppppuStack_15c;
    local_50._0_4_ = local_220;
    local_50._4_4_ = uStack_21c;
    ppppuStack_48 = ppppuStack_218;
    local_d4 = (char *)CONCAT31(local_d4._1_3_,1);
    local_98 = (uint ****)0x80000001;
    local_2c = 0;
    local_2b = 0;
    local_40 = 4;
    local_d8 = (undefined4 *****)0x0;
    local_74 = 0x80000000;
    local_80 = (char *)0x80000000;
    local_a0 = (uint ****)0x0;
    local_3c = 0;
    local_44 = 0;
    local_68 = 0x80000000;
    local_30 = 0;
    local_34 = 8;
    local_38 = 0;
    local_9c = (uint ****)0x0;
    local_58 = puVar6;
    local_d0 = local_188;
    FUN_006e10e8(&local_188,&local_1b8,&local_260,&local_d8);
    FUN_00abfaf0(&local_188);
    puVar11 = (uint *)((uint)&local_188 | 4);
    *puVar11 = (uint)local_1b8;
    puVar11[1] = (uint)local_1b4;
    puVar11[2] = (uint)local_1b0;
    puVar11[3] = (uint)local_1ac;
    puVar11[4] = (uint)local_1a8;
    puVar11[5] = (uint)local_1a4;
    puVar11[6] = (uint)local_1a0;
    puVar11[7] = (uint)ppppuStack_19c;
    puVar11[8] = (uint)ppppuStack_198;
    puVar11[9] = uStack_194;
    puVar11[10] = uStack_190;
    puVar11[0xb] = uStack_18c;
    local_80 = local_1c8;
    iStack_7c = local_1c4;
    local_78 = local_1c0;
    local_c8 = (uint *****)0x80000001;
    local_bc = ppppuStack_180;
    local_b8._0_4_ = ppppuStack_17c;
    local_b8._4_4_ = local_178;
    local_b0 = ppppuStack_174;
    local_ac = local_170;
    local_a8 = ppppuStack_16c;
    local_a4 = local_168;
    local_a0 = ppppuStack_164;
    local_9c = ppppuStack_160;
    local_98 = ppppuStack_15c;
    ppppuStack_94 = (uint ****)uStack_158;
    local_3c = local_3c & 0xffff0000;
    local_40 = 0x10000;
    local_50._0_4_ = 0x80000000;
    local_5c = 0x80000000;
    local_64 = 8;
    local_70 = (uint ****)0x4;
    local_44 = 0;
    local_60 = 0;
    local_68 = 0;
    local_6c = 0;
    local_74 = 0;
    local_84 = 0x46;
    local_90 = (uint ****)0x0;
    local_88 = "boser::web::graphql::bosminer::info::miner_status::UnsupportedHardware";
    local_8c = (uint ****)CONCAT31(local_8c._1_3_,1);
    local_c4 = local_188;
    iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                         "UnsupportedHardware",0x13);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar2,&local_d8,0xb0);
LAB_00ace1e4:
    local_d0._0_4_ = (undefined4 ****)0x13;
    local_1b8 = (char *****)&local_d8;
    local_1b4 = (uint ****)&LAB_012b97d8;
    local_d4 = "UnsupportedHardware";
    local_d8 = (undefined4 *****)0x80000000;
    FUN_00664898(&local_188,&DAT_0057a667,&local_1b8);
    uVar19 = local_188;
    if (local_d8 != (undefined4 *****)0x80000000) {
      FUN_019bb7e0(local_d8,local_d4);
      uVar19 = local_188;
    }
    local_188._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
    local_188._0_4_ = (undefined4 ****)uVar19;
    FUN_019bb7e0((undefined4 ****)local_188,local_188._4_4_);
    local_188 = uVar19;
    local_270 = (char *)CONCAT31(local_270._1_3_,1);
    local_1d8 = "boser::web::graphql::bosminer::info::miner_status::DeadPools";
    local_1d4 = 0x3c;
    local_228 = (undefined4 *)&DAT_00000009;
    local_22c = (uint ****)0x4a2920;
    iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_01be5118(9);
      if (iVar2 == 0) goto LAB_00ad1134;
      FUN_01bed4e2(iVar2,"DeadPools",9);
      local_1b0 = (uint ****)0x9;
      local_1b8 = (char *****)0x9;
      local_1b4 = (uint ****)iVar2;
      FUN_006a0cfc(&local_d8,1,"boser::web::graphql::bosminer::info::miner_status::DeadPools",0x3c);
      FUN_006c2a34(&local_188,puVar18,&local_1b8,&local_d8);
      if (local_178 != (uint ****)0x80000006) {
        FUN_00abf870(&local_188);
      }
      local_d0._0_4_ = (undefined4 ****)0x9;
      local_d8 = (undefined4 *****)0x80000000;
      local_d4 = "DeadPools";
      uVar14 = FUN_0160ec7c(&local_1c8,&local_d8);
      uVar19 = thunk_FUN_01bee35a(uVar14,0x2c0);
      puVar11 = (uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
      if ((char)puVar11[4] == '\0') {
        FUN_019ae6ac(&local_d8);
        *puVar11 = (uint)local_d8;
        puVar11[1] = (uint)local_d4;
        puVar11[2] = (uint)(undefined4 ****)local_d0;
        puVar11[3] = (uint)local_d0._4_4_;
        *(undefined1 *)(puVar11 + 4) = 1;
      }
      local_1b8 = (char *****)*puVar11;
      local_1b4 = (uint ****)puVar11[1];
      local_1b0 = (uint ****)puVar11[2];
      local_1ac = (uint ****)puVar11[3];
      *puVar11 = (int)local_1b8 + 1;
      puVar11[1] = (int)local_1b4 + (uint)((uint ****)0xfffffffe < local_1b8);
      local_1a0 = (uint ****)0x0;
      local_1a8 = (uint ****)0x0;
      local_1a4 = (uint ****)0x8;
      ppppuStack_19c = (uint ****)&DAT_0056d238;
      ppppuStack_198 = (uint ****)0x0;
      uStack_194 = 0;
      uStack_190 = 0;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(4);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      *puVar6 = 0x64696f76;
      local_258 = 4;
      local_260 = 4;
      local_25c = puVar6;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(4);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      *puVar6 = 0x64696f76;
      FUN_006e01d0(&local_188);
      FUN_011e660c(&local_220,param_1);
      local_54 = 4;
      local_5c = 4;
      local_8c = (uint ****)0x80000000;
      local_c8 = (uint *****)ppppuStack_180;
      local_c4._0_4_ = (code *)ppppuStack_17c;
      local_c4._4_4_ = (char *)local_178;
      local_bc = ppppuStack_174;
      local_b8._0_4_ = local_170;
      local_b8._4_4_ = ppppuStack_16c;
      local_b0 = local_168;
      local_ac = ppppuStack_164;
      local_a8 = ppppuStack_160;
      local_a4 = ppppuStack_15c;
      local_50._0_4_ = local_220;
      local_50._4_4_ = uStack_21c;
      ppppuStack_48 = ppppuStack_218;
      local_d4 = (char *)CONCAT31(local_d4._1_3_,1);
      local_98 = (uint ****)0x80000001;
      local_2c = 0;
      local_d8 = (undefined4 *****)0x0;
      local_2b = 0;
      local_74 = 0x80000000;
      local_80 = (char *)0x80000000;
      local_a0 = (uint ****)0x0;
      local_3c = 0;
      local_40 = 4;
      local_44 = 0;
      local_68 = 0x80000000;
      local_30 = 0;
      local_34 = 8;
      local_38 = 0;
      local_9c = (uint ****)0x0;
      local_58 = puVar6;
      local_d0 = local_188;
      FUN_006e10e8(&local_188,&local_1b8,&local_260,&local_d8);
      FUN_00abfaf0(&local_188);
      puVar11 = (uint *)((uint)&local_188 | 4);
      *puVar11 = (uint)local_1b8;
      puVar11[1] = (uint)local_1b4;
      puVar11[2] = (uint)local_1b0;
      puVar11[3] = (uint)local_1ac;
      puVar11[4] = (uint)local_1a8;
      puVar11[5] = (uint)local_1a4;
      puVar11[6] = (uint)local_1a0;
      puVar11[7] = (uint)ppppuStack_19c;
      puVar11[8] = (uint)ppppuStack_198;
      puVar11[9] = uStack_194;
      puVar11[10] = uStack_190;
      puVar11[0xb] = uStack_18c;
      local_80 = local_1c8;
      iStack_7c = local_1c4;
      local_78 = local_1c0;
      local_c8 = (uint *****)0x80000001;
      local_bc = ppppuStack_180;
      local_b8._0_4_ = ppppuStack_17c;
      local_b8._4_4_ = local_178;
      local_b0 = ppppuStack_174;
      local_ac = local_170;
      local_a8 = ppppuStack_16c;
      local_a4 = local_168;
      local_a0 = ppppuStack_164;
      local_9c = ppppuStack_160;
      local_98 = ppppuStack_15c;
      ppppuStack_94 = (uint ****)uStack_158;
      local_3c = local_3c & 0xffff0000;
      local_40 = 0x10000;
      local_50._0_4_ = 0x80000000;
      local_5c = 0x80000000;
      local_64 = 8;
      local_70 = (uint ****)0x4;
      local_44 = 0;
      local_60 = 0;
      local_68 = 0;
      local_6c = 0;
      local_74 = 0;
      local_84 = 0x3c;
      local_90 = (uint ****)0x0;
      local_88 = "boser::web::graphql::bosminer::info::miner_status::DeadPools";
      local_8c = (uint ****)CONCAT31(local_8c._1_3_,1);
      local_c4 = local_188;
      iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                           "DeadPools",9);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar2,&local_d8,0xb0);
      uVar19 = local_c4;
    }
    else {
      uVar20 = FUN_006a71d4();
      iVar8 = (int)((ulonglong)uVar20 >> 0x20);
      iVar3 = (int)uVar20;
      uVar19 = local_c4;
      if (iVar3 != 0) {
        local_188 = uVar20;
        if (iVar8 == 0x3c) {
          iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::info::miner_status::DeadPools",
                                     iVar3,0x3c);
          uVar19 = local_c4;
          if (iVar3 != 0) goto LAB_00ace5f8;
        }
        else {
          if (iVar8 == 0xd) {
            iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
            uVar19 = local_c4;
            if (iVar3 == 0) goto LAB_00ace62c;
          }
LAB_00ace5f8:
          iVar3 = FUN_015db690(param_1 + 0x20,"DeadPools",9);
          uVar19 = local_c4;
          if (iVar3 == 0) goto LAB_00ad0d98;
        }
        local_c4._4_4_ = (char *)((ulonglong)uVar19 >> 0x20);
        uVar10 = 2;
        if ((int)*(uint *)(iVar2 + 0x10) < 0) {
          uVar10 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
        }
        if (uVar10 != 1) goto LAB_00ad110c;
      }
    }
LAB_00ace62c:
    local_d0._0_4_ = (undefined4 ****)0x9;
    local_1b8 = (char *****)&local_d8;
    local_1b4 = (uint ****)&LAB_012b97d8;
    local_d4 = "DeadPools";
    local_d8 = (undefined4 *****)0x80000000;
    local_c4 = uVar19;
    FUN_00664898(&local_188,&DAT_0057a667,&local_1b8);
    uVar19 = local_188;
    if (local_d8 != (undefined4 *****)0x80000000) {
      FUN_019bb7e0(local_d8,local_d4);
      uVar19 = local_188;
    }
    local_188._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
    local_188._0_4_ = (undefined4 ****)uVar19;
    FUN_019bb7e0((undefined4 ****)local_188,local_188._4_4_);
    local_188 = uVar19;
    local_270 = (char *)CONCAT31(local_270._1_3_,1);
    local_1d8 = "boser::web::graphql::bosminer::info::miner_status::MissingLicense";
    local_1d4 = 0x41;
    local_228 = (undefined4 *)&DAT_0000000e;
    local_22c = (uint ****)0x4a2930;
    iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_01be5118(0xe);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xe);
      }
      FUN_01bed4e2(iVar2,"MissingLicense",0xe);
      local_1b0 = (uint ****)0xe;
      local_1b8 = (char *****)0xe;
      local_1b4 = (uint ****)iVar2;
      FUN_006a0cfc(&local_d8,1,"boser::web::graphql::bosminer::info::miner_status::MissingLicense",
                   0x41);
      FUN_006c2a34(&local_188,puVar18,&local_1b8,&local_d8);
      if (local_178 != (uint ****)0x80000006) {
        FUN_00abf870(&local_188);
      }
      local_d0._0_4_ = (undefined4 ****)0xe;
      local_d8 = (undefined4 *****)0x80000000;
      local_d4 = "MissingLicense";
      uVar14 = FUN_0160ec7c(&local_1c8,&local_d8);
      uVar19 = thunk_FUN_01bee35a(uVar14,0x2c0);
      puVar11 = (uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
      if ((char)puVar11[4] == '\0') {
        FUN_019ae6ac(&local_d8);
        *puVar11 = (uint)local_d8;
        puVar11[1] = (uint)local_d4;
        puVar11[2] = (uint)(undefined4 ****)local_d0;
        puVar11[3] = (uint)local_d0._4_4_;
        *(undefined1 *)(puVar11 + 4) = 1;
      }
      local_1b8 = (char *****)*puVar11;
      local_1b4 = (uint ****)puVar11[1];
      local_1b0 = (uint ****)puVar11[2];
      local_1ac = (uint ****)puVar11[3];
      *puVar11 = (int)local_1b8 + 1;
      puVar11[1] = (int)local_1b4 + (uint)((uint ****)0xfffffffe < local_1b8);
      local_1a0 = (uint ****)0x0;
      local_1a8 = (uint ****)0x0;
      local_1a4 = (uint ****)0x8;
      ppppuStack_19c = (uint ****)&DAT_0056d238;
      ppppuStack_198 = (uint ****)0x0;
      uStack_194 = 0;
      uStack_190 = 0;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(4);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      *puVar6 = 0x64696f76;
      local_258 = 4;
      local_260 = 4;
      local_25c = puVar6;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(4);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      *puVar6 = 0x64696f76;
      FUN_006e01d0(&local_188);
      FUN_011e660c(&local_220,param_1);
      local_54 = 4;
      local_5c = 4;
      local_8c = (uint ****)0x80000000;
      local_c8 = (uint *****)ppppuStack_180;
      local_c4._0_4_ = (code *)ppppuStack_17c;
      local_c4._4_4_ = (char *)local_178;
      local_bc = ppppuStack_174;
      local_b8._0_4_ = local_170;
      local_b8._4_4_ = ppppuStack_16c;
      local_b0 = local_168;
      local_ac = ppppuStack_164;
      local_a8 = ppppuStack_160;
      local_a4 = ppppuStack_15c;
      local_50._0_4_ = local_220;
      local_50._4_4_ = uStack_21c;
      ppppuStack_48 = ppppuStack_218;
      local_d4 = (char *)CONCAT31(local_d4._1_3_,1);
      local_98 = (uint ****)0x80000001;
      local_2c = 0;
      local_d8 = (undefined4 *****)0x0;
      local_2b = 0;
      local_74 = 0x80000000;
      local_80 = (char *)0x80000000;
      local_a0 = (uint ****)0x0;
      local_3c = 0;
      local_40 = 4;
      local_44 = 0;
      local_68 = 0x80000000;
      local_30 = 0;
      local_34 = 8;
      local_38 = 0;
      local_9c = (uint ****)0x0;
      local_58 = puVar6;
      local_d0 = local_188;
      FUN_006e10e8(&local_188,&local_1b8,&local_260,&local_d8);
      FUN_00abfaf0(&local_188);
      puVar11 = (uint *)((uint)&local_188 | 4);
      *puVar11 = (uint)local_1b8;
      puVar11[1] = (uint)local_1b4;
      puVar11[2] = (uint)local_1b0;
      puVar11[3] = (uint)local_1ac;
      puVar11[4] = (uint)local_1a8;
      puVar11[5] = (uint)local_1a4;
      puVar11[6] = (uint)local_1a0;
      puVar11[7] = (uint)ppppuStack_19c;
      puVar11[8] = (uint)ppppuStack_198;
      puVar11[9] = uStack_194;
      puVar11[10] = uStack_190;
      puVar11[0xb] = uStack_18c;
      local_80 = local_1c8;
      iStack_7c = local_1c4;
      local_78 = local_1c0;
      local_c8 = (uint *****)0x80000001;
      local_bc = ppppuStack_180;
      local_b8._0_4_ = ppppuStack_17c;
      local_b8._4_4_ = local_178;
      local_b0 = ppppuStack_174;
      local_ac = local_170;
      local_a8 = ppppuStack_16c;
      local_a4 = local_168;
      local_a0 = ppppuStack_164;
      local_9c = ppppuStack_160;
      local_98 = ppppuStack_15c;
      ppppuStack_94 = (uint ****)uStack_158;
      local_3c = local_3c & 0xffff0000;
      local_40 = 0x10000;
      local_50._0_4_ = 0x80000000;
      local_5c = 0x80000000;
      local_64 = 8;
      local_70 = (uint ****)0x4;
      local_44 = 0;
      local_60 = 0;
      local_68 = 0;
      local_6c = 0;
      local_74 = 0;
      local_84 = 0x41;
      local_90 = (uint ****)0x0;
      local_88 = "boser::web::graphql::bosminer::info::miner_status::MissingLicense";
      local_8c = (uint ****)CONCAT31(local_8c._1_3_,1);
      local_c4 = local_188;
      iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                           "MissingLicense",0xe);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar2,&local_d8,0xb0);
      uVar19 = local_c4;
    }
    else {
      uVar20 = FUN_006a71d4();
      iVar8 = (int)((ulonglong)uVar20 >> 0x20);
      iVar3 = (int)uVar20;
      uVar19 = local_c4;
      if (iVar3 != 0) {
        local_188 = uVar20;
        if (iVar8 == 0x41) {
          iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::info::miner_status::MissingLicense"
                                     ,iVar3,0x41);
          uVar19 = local_c4;
          if (iVar3 != 0) goto LAB_00acea7c;
        }
        else {
          if (iVar8 == 0xd) {
            iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
            uVar19 = local_c4;
            if (iVar3 == 0) goto LAB_00aceab0;
          }
LAB_00acea7c:
          iVar3 = FUN_015db690(param_1 + 0x20,"MissingLicense",0xe);
          uVar19 = local_c4;
          if (iVar3 == 0) goto LAB_00ad0d98;
        }
        local_c4._4_4_ = (char *)((ulonglong)uVar19 >> 0x20);
        uVar10 = 2;
        if ((int)*(uint *)(iVar2 + 0x10) < 0) {
          uVar10 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
        }
        if (uVar10 != 1) goto LAB_00ad110c;
      }
    }
LAB_00aceab0:
    local_d0._0_4_ = (undefined4 ****)0xe;
    local_1b8 = (char *****)&local_d8;
    local_1b4 = (uint ****)&LAB_012b97d8;
    local_d4 = "MissingLicense";
    local_d8 = (undefined4 *****)0x80000000;
    local_c4 = uVar19;
    FUN_00664898(&local_188,&DAT_0057a667,&local_1b8);
    uVar19 = local_188;
    if (local_d8 != (undefined4 *****)0x80000000) {
      FUN_019bb7e0(local_d8,local_d4);
      uVar19 = local_188;
    }
    local_188._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
    local_188._0_4_ = (undefined4 ****)uVar19;
    FUN_019bb7e0((undefined4 ****)local_188,local_188._4_4_);
    local_188 = uVar19;
    local_270 = (char *)CONCAT31(local_270._1_3_,1);
    local_1d8 = "boser::web::graphql::bosminer::info::miner_status::UserPause";
    local_1d4 = 0x3c;
    local_228 = (undefined4 *)&DAT_00000009;
    local_22c = (uint ****)0x4a2940;
    iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_01be5118(9);
      if (iVar2 == 0) {
LAB_00ad1134:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,9);
      }
      FUN_01bed4e2(iVar2,"UserPause",9);
      local_1b0 = (uint ****)0x9;
      local_1b8 = (char *****)0x9;
      local_1b4 = (uint ****)iVar2;
      FUN_006a0cfc(&local_d8,1,"boser::web::graphql::bosminer::info::miner_status::UserPause",0x3c);
      FUN_006c2a34(&local_188,puVar18,&local_1b8,&local_d8);
      if (local_178 != (uint ****)0x80000006) {
        FUN_00abf870(&local_188);
      }
      local_d0._0_4_ = (undefined4 ****)0x9;
      local_d8 = (undefined4 *****)0x80000000;
      local_d4 = "UserPause";
      uVar14 = FUN_0160ec7c(&local_1c8,&local_d8);
      uVar19 = thunk_FUN_01bee35a(uVar14,0x2c0);
      puVar11 = (uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
      if ((char)puVar11[4] == '\0') {
        FUN_019ae6ac(&local_d8);
        *puVar11 = (uint)local_d8;
        puVar11[1] = (uint)local_d4;
        puVar11[2] = (uint)(undefined4 ****)local_d0;
        puVar11[3] = (uint)local_d0._4_4_;
        *(undefined1 *)(puVar11 + 4) = 1;
      }
      local_1b8 = (char *****)*puVar11;
      local_1b4 = (uint ****)puVar11[1];
      local_1b0 = (uint ****)puVar11[2];
      local_1ac = (uint ****)puVar11[3];
      *puVar11 = (int)local_1b8 + 1;
      puVar11[1] = (int)local_1b4 + (uint)((uint ****)0xfffffffe < local_1b8);
      local_1a0 = (uint ****)0x0;
      local_1a8 = (uint ****)0x0;
      local_1a4 = (uint ****)0x8;
      ppppuStack_19c = (uint ****)&DAT_0056d238;
      ppppuStack_198 = (uint ****)0x0;
      uStack_194 = 0;
      uStack_190 = 0;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(4);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      *puVar6 = 0x64696f76;
      local_258 = 4;
      local_260 = 4;
      local_25c = puVar6;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(4);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      *puVar6 = 0x64696f76;
      FUN_006e01d0(&local_188);
      FUN_011e660c(&local_220,param_1);
      local_54 = 4;
      local_5c = 4;
      local_8c = (uint ****)0x80000000;
      local_c8 = (uint *****)ppppuStack_180;
      local_c4._0_4_ = (code *)ppppuStack_17c;
      local_c4._4_4_ = (char *)local_178;
      local_bc = ppppuStack_174;
      local_b8._0_4_ = local_170;
      local_b8._4_4_ = ppppuStack_16c;
      local_b0 = local_168;
      local_ac = ppppuStack_164;
      local_a8 = ppppuStack_160;
      local_a4 = ppppuStack_15c;
      local_50._0_4_ = local_220;
      local_50._4_4_ = uStack_21c;
      ppppuStack_48 = ppppuStack_218;
      local_d4 = (char *)CONCAT31(local_d4._1_3_,1);
      local_98 = (uint ****)0x80000001;
      local_2c = 0;
      local_d8 = (undefined4 *****)0x0;
      local_2b = 0;
      local_74 = 0x80000000;
      local_80 = (char *)0x80000000;
      local_a0 = (uint ****)0x0;
      local_3c = 0;
      local_40 = 4;
      local_44 = 0;
      local_68 = 0x80000000;
      local_30 = 0;
      local_34 = 8;
      local_38 = 0;
      local_9c = (uint ****)0x0;
      local_58 = puVar6;
      local_d0 = local_188;
      FUN_006e10e8(&local_188,&local_1b8,&local_260,&local_d8);
      FUN_00abfaf0(&local_188);
      puVar11 = (uint *)((uint)&local_188 | 4);
      *puVar11 = (uint)local_1b8;
      puVar11[1] = (uint)local_1b4;
      puVar11[2] = (uint)local_1b0;
      puVar11[3] = (uint)local_1ac;
      puVar11[4] = (uint)local_1a8;
      puVar11[5] = (uint)local_1a4;
      puVar11[6] = (uint)local_1a0;
      puVar11[7] = (uint)ppppuStack_19c;
      puVar11[8] = (uint)ppppuStack_198;
      puVar11[9] = uStack_194;
      puVar11[10] = uStack_190;
      puVar11[0xb] = uStack_18c;
      local_80 = local_1c8;
      iStack_7c = local_1c4;
      local_78 = local_1c0;
      local_c8 = (uint *****)0x80000001;
      local_bc = ppppuStack_180;
      local_b8._0_4_ = ppppuStack_17c;
      local_b8._4_4_ = local_178;
      local_b0 = ppppuStack_174;
      local_ac = local_170;
      local_a8 = ppppuStack_16c;
      local_a4 = local_168;
      local_a0 = ppppuStack_164;
      local_9c = ppppuStack_160;
      local_98 = ppppuStack_15c;
      ppppuStack_94 = (uint ****)uStack_158;
      local_3c = local_3c & 0xffff0000;
      local_40 = 0x10000;
      local_50._0_4_ = 0x80000000;
      local_5c = 0x80000000;
      local_64 = 8;
      local_70 = (uint ****)0x4;
      local_44 = 0;
      local_60 = 0;
      local_68 = 0;
      local_6c = 0;
      local_74 = 0;
      local_84 = 0x3c;
      local_90 = (uint ****)0x0;
      local_88 = "boser::web::graphql::bosminer::info::miner_status::UserPause";
      local_8c = (uint ****)CONCAT31(local_8c._1_3_,1);
      local_c4 = local_188;
      iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                           "UserPause",9);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar2,&local_d8,0xb0);
      uVar19 = local_c4;
    }
    else {
      uVar20 = FUN_006a71d4();
      iVar8 = (int)((ulonglong)uVar20 >> 0x20);
      iVar3 = (int)uVar20;
      uVar19 = local_c4;
      if (iVar3 != 0) {
        local_188 = uVar20;
        if (iVar8 == 0x3c) {
          iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::info::miner_status::UserPause",
                                     iVar3,0x3c);
          uVar19 = local_c4;
          if (iVar3 != 0) goto LAB_00aceef8;
        }
        else {
          if (iVar8 == 0xd) {
            iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
            uVar19 = local_c4;
            if (iVar3 == 0) goto LAB_00acef2c;
          }
LAB_00aceef8:
          iVar3 = FUN_015db690(param_1 + 0x20,"UserPause",9);
          uVar19 = local_c4;
          if (iVar3 == 0) goto LAB_00ad0d98;
        }
        local_c4._4_4_ = (char *)((ulonglong)uVar19 >> 0x20);
        uVar10 = 2;
        if ((int)*(uint *)(iVar2 + 0x10) < 0) {
          uVar10 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
        }
        if (uVar10 != 1) goto LAB_00ad110c;
      }
    }
LAB_00acef2c:
    local_d0._0_4_ = (undefined4 ****)0x9;
    local_1b8 = (char *****)&local_d8;
    local_1b4 = (uint ****)&LAB_012b97d8;
    local_d4 = "UserPause";
    local_d8 = (undefined4 *****)0x80000000;
    pppppuVar15 = (undefined4 *****)&local_188;
    pppppuVar12 = (uint *****)&local_1b8;
    local_c4 = uVar19;
    FUN_00664898(pppppuVar15,&DAT_0057a667,pppppuVar12);
    uVar19 = local_188;
    if (local_d8 != (undefined4 *****)0x80000000) {
      FUN_019bb7e0(local_d8,local_d4);
      uVar19 = local_188;
    }
    local_188._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
    local_188._0_4_ = (undefined4 ****)uVar19;
    FUN_019bb7e0((undefined4 ****)local_188,local_188._4_4_);
    local_188 = uVar19;
    local_271 = 1;
    local_27c = "boser::web::graphql::bosminer::info::miner_status::ThermalPause";
    local_278 = 0x3f;
    local_280 = 0xc;
    local_284 = (uint ****)0x4a2950;
    iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_01be5118(0xc);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xc);
      }
      FUN_01bed4e2(iVar2,"ThermalPause",0xc);
      local_1b0 = (uint ****)0xc;
      local_1b8 = (char *****)0xc;
      local_1b4 = (uint ****)iVar2;
      FUN_006a0cfc(&local_d8,1,"boser::web::graphql::bosminer::info::miner_status::ThermalPause",
                   0x3f);
      local_2b8 = (undefined4 *****)&local_188;
      local_2b4 = (uint *****)&local_1b8;
      FUN_006c2a34(local_2b8,puVar18,local_2b4,&local_d8);
      if (local_178 != (uint ****)0x80000006) {
        FUN_00abf870(&local_188);
      }
      local_d0._0_4_ = (undefined4 ****)0xc;
      local_d8 = (undefined4 *****)0x80000000;
      local_d4 = "ThermalPause";
      uVar14 = FUN_0160ec7c();
      uVar19 = thunk_FUN_01bee35a(uVar14,0x2c0);
      puVar11 = (uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
      if ((char)puVar11[4] == '\0') {
        FUN_019ae6ac(&local_d8);
        *puVar11 = (uint)local_d8;
        puVar11[1] = (uint)local_d4;
        puVar11[2] = (uint)(undefined4 ****)local_d0;
        puVar11[3] = (uint)local_d0._4_4_;
        *(undefined1 *)(puVar11 + 4) = 1;
      }
      local_260 = *puVar11;
      local_25c = (undefined4 *)puVar11[1];
      local_254 = puVar11[3];
      local_248 = 0;
      local_250 = 0;
      local_24c = 8;
      *puVar11 = local_260 + 1;
      puVar11[1] = (int)local_25c + (uint)(0xfffffffe < local_260);
      puVar16 = puVar11 + 2;
      local_258 = *puVar16;
      puStack_244 = &DAT_0056d238;
      uStack_240 = 0;
      uStack_23c = 0;
      uStack_238 = 0;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(6);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,6);
      }
      *(undefined2 *)(puVar6 + 1) = 0x6e6f;
      *puVar6 = 0x73616572;
      local_224 = 6;
      local_22c = (uint ****)0x6;
      local_228 = puVar6;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(6);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,6);
      }
      *(undefined2 *)(puVar6 + 1) = 0x6e6f;
      *puVar6 = 0x73616572;
      FUN_006e01d0(&local_220);
      local_1e4 = "boser::web::graphql::bosminer::info::miner_status::ThermalPauseReason";
      local_1d9 = 4;
      local_1e0 = 0x45;
      local_1e8 = 0x12;
      local_1ec = (uint ****)0x3ed720;
      iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                           "ThermalPauseReasonevent open/boser/boser/src/web/graphql/bosminer/info/miner_status.rs:214boser::web::graphql::bosminer::info::miner_statusopen/boser/boser/src/web/graphql/bosminer/info/miner_status.rsevent open/boser/boser/src/web/graphql/bosminer/info.rs:617"
                           ,0x12);
      if (iVar2 == 0) {
        iVar2 = FUN_01298504(0x12,1);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x12);
        }
        FUN_01bed4e2(iVar2,
                     "ThermalPauseReasonevent open/boser/boser/src/web/graphql/bosminer/info/miner_status.rs:214boser::web::graphql::bosminer::info::miner_statusopen/boser/boser/src/web/graphql/bosminer/info/miner_status.rsevent open/boser/boser/src/web/graphql/bosminer/info.rs:617"
                     ,0x12);
        local_1b0 = (uint ****)0x12;
        local_1b8 = (char *****)0x12;
        local_1b4 = (uint ****)iVar2;
        FUN_006a0cfc(&local_d8,4,
                     "boser::web::graphql::bosminer::info::miner_status::ThermalPauseReason",0x45);
        FUN_006c2a34(&local_188,puVar18,&local_1b8,&local_d8);
        if (local_178 != (uint ****)0x80000006) {
          FUN_00abf870(&local_188);
        }
        local_d4 = 
        "ThermalPauseReasonevent open/boser/boser/src/web/graphql/bosminer/info/miner_status.rs:214boser::web::graphql::bosminer::info::miner_statusopen/boser/boser/src/web/graphql/bosminer/info/miner_status.rsevent open/boser/boser/src/web/graphql/bosminer/info.rs:617"
        ;
        local_d0._0_4_ = (undefined4 ****)0x12;
        local_d8 = (undefined4 *****)0x80000000;
        FUN_0160ec7c(&local_1d8,&local_d8);
        if ((char)puVar11[4] == '\0') {
          FUN_019ae6ac(&local_d8);
          *puVar11 = (uint)local_d8;
          puVar11[1] = (uint)local_d4;
          *puVar16 = (uint)(undefined4 ****)local_d0;
          puVar11[3] = (uint)local_d0._4_4_;
          *(undefined1 *)(puVar11 + 4) = 1;
        }
        local_1b8 = (char *****)*puVar11;
        local_1b4 = (uint ****)puVar11[1];
        local_1a0 = (uint ****)0x0;
        local_1a4 = (uint ****)0x4;
        local_1a8 = (uint ****)0x0;
        local_1b0 = (uint ****)*puVar16;
        *puVar11 = (int)local_1b8 + 1;
        puVar11[1] = (int)local_1b4 + (uint)((uint ****)0xfffffffe < local_1b8);
        local_1ac = (uint ****)puVar11[3];
        ppppuStack_19c = (uint ****)&DAT_0056d238;
        ppppuStack_198 = (uint ****)0x0;
        uStack_194 = 0;
        uStack_190 = 0;
        uVar14 = 0xb;
        iVar2 = thunk_FUN_01be5118(0xb);
        if (iVar2 == 0) {
LAB_00ad12fc:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,uVar14);
        }
        FUN_01bed4e2(iVar2,"UNSPECIFIED",0xb);
        local_1c0 = (char *)0xb;
        local_1c8 = (char *)0xb;
        local_1c4 = iVar2;
        pcVar4 = (char *)thunk_FUN_01be5118(0xb);
        if (pcVar4 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0xb);
        }
        FUN_01bed4e2(pcVar4,"UNSPECIFIED",0xb);
        lVar21 = FUN_013245a0("\nReported when the thermal reason could not be determined (should not occur\nin practice; logged as an internal error when it does)."
                              ,0x83);
        ppppuVar13 = (uint ****)((ulonglong)lVar21 >> 0x20);
        uVar14 = 0;
        if (lVar21 < 0) {
LAB_00acf3e4:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar14,ppppuVar13);
        }
        if (ppppuVar13 == (uint ****)0x0) {
          ppppuVar5 = (uint ****)0x1;
          ppppuVar17 = (uint ****)0x0;
        }
        else {
          uVar14 = 1;
          ppppuVar5 = (uint ****)FUN_01298504(ppppuVar13,1);
          ppppuVar17 = ppppuVar13;
          if (ppppuVar5 == (uint ****)0x0) goto LAB_00acf3e4;
        }
        FUN_01bed4e2(ppppuVar5,(int)lVar21,ppppuVar13);
        local_98 = (uint ****)((uint)local_98 & 0xffffff00);
        local_a8 = (uint ****)0x80000001;
        local_d0._0_4_ = (undefined4 ****)0xb;
        local_d8 = (undefined4 *****)0xb;
        local_bc = (uint ****)0x8;
        local_9c = (uint ****)0x0;
        local_b8._0_4_ = (uint ****)0x0;
        local_c4._4_4_ = (char *)0x0;
        local_c4._0_4_ = (code *)0x0;
        local_c8 = (uint *****)0x4;
        local_d0._4_4_ = (code *)0x0;
        local_d4 = pcVar4;
        local_b8._4_4_ = ppppuVar17;
        local_b0 = ppppuVar5;
        local_ac = ppppuVar13;
        FUN_006e0c4c(&local_188,&local_1b8,&local_1c8,&local_d8);
        FUN_00ac5708(&local_188);
        uVar14 = 0x15;
        iVar2 = thunk_FUN_01be5118(0x15);
        if (iVar2 == 0) goto LAB_00ad12fc;
        FUN_01bed4e2(iVar2,"DANGEROUS_TEMPERATURE",0x15);
        local_1c0 = (char *)0x15;
        local_1c8 = (char *)0x15;
        local_1c4 = iVar2;
        pcVar4 = (char *)thunk_FUN_01be5118(0x15);
        if (pcVar4 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x15);
        }
        FUN_01bed4e2(pcVar4,"DANGEROUS_TEMPERATURE",0x15);
        local_a8 = (uint ****)0x80000001;
        local_b8._4_4_ = (uint ****)0x80000000;
        local_bc = (uint ****)0x8;
        local_98 = (uint ****)((uint)local_98 & 0xffffff00);
        local_9c = (uint ****)0x0;
        local_d0._0_4_ = (undefined4 ****)0x15;
        local_d8 = (undefined4 *****)0x15;
        local_b8._0_4_ = (uint ****)0x0;
        local_c4._4_4_ = (char *)0x0;
        local_c4._0_4_ = (code *)0x0;
        local_c8 = (uint *****)0x4;
        local_d0._4_4_ = (code *)0x0;
        local_d4 = pcVar4;
        FUN_006e0c4c(&local_188,&local_1b8,&local_1c8,&local_d8);
        FUN_00ac5708(&local_188);
        uVar14 = 0xb;
        iVar2 = thunk_FUN_01be5118(0xb);
        if (iVar2 == 0) goto LAB_00ad12fc;
        FUN_01bed4e2(iVar2,"BROKEN_FANS",0xb);
        local_1c0 = (char *)0xb;
        local_1c8 = (char *)0xb;
        local_1c4 = iVar2;
        iVar2 = thunk_FUN_01be5118(0xb);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0xb);
        }
        FUN_01bed4e2(iVar2,"BROKEN_FANS",0xb);
        local_a8 = (uint ****)0x80000001;
        local_b8._4_4_ = (uint ****)0x80000000;
        local_bc = (uint ****)0x8;
        local_98 = (uint ****)((uint)local_98 & 0xffffff00);
        local_9c = (uint ****)0x0;
        local_d0._0_4_ = (undefined4 ****)0xb;
        local_d8 = (undefined4 *****)0xb;
        local_b8._0_4_ = (uint ****)0x0;
        local_c4._4_4_ = (char *)0x0;
        local_c4._0_4_ = (code *)0x0;
        local_c8 = (uint *****)0x4;
        local_d0._4_4_ = (code *)0x0;
        local_d4 = (char *)iVar2;
        FUN_006e0c4c(&local_188,&local_1b8,&local_1c8,&local_d8);
        FUN_00ac5708(&local_188);
        local_b8._0_4_ = (uint ****)local_1b8;
        local_b8._4_4_ = local_1b4;
        local_b0 = local_1b0;
        local_ac = local_1ac;
        local_a8 = local_1a8;
        local_a4 = local_1a4;
        local_a0 = local_1a0;
        local_9c = ppppuStack_19c;
        local_98 = ppppuStack_198;
        ppppuStack_94 = (uint ****)uStack_194;
        local_90 = (uint ****)uStack_190;
        local_8c = (uint ****)uStack_18c;
        local_78 = local_1d8;
        local_74 = local_1d4;
        local_70 = (uint ****)uStack_1d0;
        local_5c = 8;
        local_68 = 4;
        local_54 = local_54 & 0xffffff00;
        local_58 = (undefined4 *)0x0;
        local_60 = 0;
        local_64 = 0;
        local_6c = 0;
        local_88 = (char *)0x0;
        local_84 = 0x80000000;
        local_bc = (uint ****)0x45;
        local_c8 = (uint *****)&DAT_80000004;
        local_c4._4_4_ = "boser::web::graphql::bosminer::info::miner_status::ThermalPauseReason";
        iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                             "ThermalPauseReasonevent open/boser/boser/src/web/graphql/bosminer/info/miner_status.rs:214boser::web::graphql::bosminer::info::miner_statusopen/boser/boser/src/web/graphql/bosminer/info/miner_status.rsevent open/boser/boser/src/web/graphql/bosminer/info.rs:617"
                             ,0x12);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01c226c0);
        }
        FUN_00abf870();
        FUN_01bed4e2(iVar2,&local_d8,0xb0);
        uVar19 = CONCAT44(local_c4._4_4_,(code *)local_c4);
      }
      else {
        uVar20 = FUN_006a71d4();
        iVar8 = (int)((ulonglong)uVar20 >> 0x20);
        iVar3 = (int)uVar20;
        uVar19 = local_c4;
        if (iVar3 != 0) {
          local_188 = uVar20;
          if (iVar8 == 0x45) {
            iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::info::miner_status::ThermalPauseReason"
                                       ,iVar3,0x45);
            uVar19 = local_c4;
            if (iVar3 != 0) goto LAB_00acf4c0;
          }
          else {
            if (iVar8 == 0xd) {
              iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
              uVar19 = local_c4;
              if (iVar3 == 0) goto LAB_00acf814;
            }
LAB_00acf4c0:
            iVar3 = FUN_015db690(param_1 + 0x20,
                                 "ThermalPauseReasonevent open/boser/boser/src/web/graphql/bosminer/info/miner_status.rs:214boser::web::graphql::bosminer::info::miner_statusopen/boser/boser/src/web/graphql/bosminer/info/miner_status.rsevent open/boser/boser/src/web/graphql/bosminer/info.rs:617"
                                 ,0x12);
            uVar19 = local_c4;
            if (iVar3 == 0) {
              local_2b4 = &local_1ec;
              puVar9 = &DAT_01c226d0;
              puVar7 = &DAT_00572c5c;
              local_d0._4_4_ = (code *)&DAT_0132b6a0;
              local_d0._0_4_ = (undefined4 ****)&local_1e4;
              goto LAB_00ad10cc;
            }
          }
          local_c4._4_4_ = (char *)((ulonglong)uVar19 >> 0x20);
          uVar10 = 2;
          if ((int)*(uint *)(iVar2 + 0x10) < 0) {
            uVar10 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
          }
          if (uVar10 != 4) {
            local_2b8 = &local_1ec;
            puVar9 = &DAT_01c226e0;
            local_1b8 = (char *****)CONCAT31(local_1b8._1_3_,(char)uVar10);
            puVar7 = &DAT_005b5680;
            local_d0._4_4_ = FUN_006a7514;
            local_d0._0_4_ = (undefined4 ****)&local_1d9;
LAB_00ad10cc:
            local_d8 = local_2b8;
            local_d4 = (char *)&DAT_0132b6a0;
            local_c8 = local_2b4;
            local_c4._0_4_ = local_d0._4_4_;
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(puVar7,&local_d8,puVar9);
          }
        }
      }
LAB_00acf814:
      local_d0._0_4_ = (undefined4 ****)0x12;
      local_d4 = 
      "ThermalPauseReasonevent open/boser/boser/src/web/graphql/bosminer/info/miner_status.rs:214boser::web::graphql::bosminer::info::miner_statusopen/boser/boser/src/web/graphql/bosminer/info/miner_status.rsevent open/boser/boser/src/web/graphql/bosminer/info.rs:617"
      ;
      local_d8 = (undefined4 *****)0x80000000;
      local_1b4 = (uint ****)&LAB_012b97d8;
      local_1b8 = (char *****)&local_d8;
      local_c4 = uVar19;
      FUN_00664898(&local_188,&DAT_0057a667,&local_1b8);
      if (local_d8 != (undefined4 *****)0x80000000) {
        FUN_019bb7e0(local_d8,local_d4);
      }
      ppppuStack_48 = ppppuStack_180;
      local_54 = 6;
      local_5c = 6;
      local_8c = (uint ****)0x80000000;
      local_d0._0_4_ = (undefined4 ****)local_220;
      local_d0._4_4_ = (code *)uStack_21c;
      local_c8 = (uint *****)ppppuStack_218;
      local_c4._0_4_ = (code *)uStack_214;
      local_c4._4_4_ = (char *)uStack_210;
      local_bc = (uint ****)uStack_20c;
      local_b8._0_4_ = (uint ****)local_208;
      local_b8._4_4_ = (uint ****)uStack_204;
      local_b0 = (uint ****)uStack_200;
      local_ac = (uint ****)uStack_1fc;
      local_a8 = (uint ****)uStack_1f8;
      local_a4 = (uint ****)uStack_1f4;
      local_d4 = (char *)CONCAT31(local_d4._1_3_,1);
      local_98 = (uint ****)0x80000001;
      local_2c = 0;
      local_2b = 0;
      local_d8 = (undefined4 *****)0x0;
      local_74 = 0x80000000;
      local_80 = (char *)0x80000000;
      local_a0 = (uint ****)0x0;
      local_3c = 0;
      local_40 = 4;
      local_44 = 0;
      local_68 = 0x80000000;
      local_30 = 0;
      local_34 = 8;
      local_38 = 0;
      local_9c = (uint ****)0x0;
      local_58 = puVar6;
      local_50 = local_188;
      FUN_006e10e8(&local_188,&local_260,&local_22c,&local_d8);
      FUN_00abfaf0(&local_188);
      puVar11 = (uint *)((uint)&local_188 | 4);
      *puVar11 = local_260;
      puVar11[1] = (uint)local_25c;
      puVar11[2] = local_258;
      puVar11[3] = local_254;
      puVar11[4] = local_250;
      puVar11[5] = local_24c;
      puVar11[6] = local_248;
      puVar11[7] = (uint)puStack_244;
      puVar11[8] = uStack_240;
      puVar11[9] = uStack_23c;
      puVar11[10] = uStack_238;
      puVar11[0xb] = uStack_234;
      local_80 = local_270;
      iStack_7c = iStack_26c;
      local_78 = pcStack_268;
      local_c8 = (uint *****)0x80000001;
      local_bc = ppppuStack_180;
      local_b8._0_4_ = ppppuStack_17c;
      local_b8._4_4_ = local_178;
      local_b0 = ppppuStack_174;
      local_ac = local_170;
      local_a8 = ppppuStack_16c;
      local_a4 = local_168;
      local_a0 = ppppuStack_164;
      local_9c = ppppuStack_160;
      local_98 = ppppuStack_15c;
      ppppuStack_94 = (uint ****)uStack_158;
      local_3c = local_3c & 0xffff0000;
      local_40 = 0x10000;
      local_50._0_4_ = 0x80000000;
      local_5c = 0x80000000;
      local_64 = 8;
      local_70 = (uint ****)0x4;
      local_44 = 0;
      local_60 = 0;
      local_68 = 0;
      local_6c = 0;
      local_74 = 0;
      local_84 = 0x3f;
      local_90 = (uint ****)0x0;
      local_88 = "boser::web::graphql::bosminer::info::miner_status::ThermalPause";
      local_8c = (uint ****)CONCAT31(local_8c._1_3_,1);
      local_c4 = local_188;
      iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                           "ThermalPause",0xc);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar2,&local_d8,0xb0);
      uVar19 = local_c4;
    }
    else {
      uVar20 = FUN_006a71d4();
      iVar8 = (int)((ulonglong)uVar20 >> 0x20);
      iVar3 = (int)uVar20;
      uVar19 = local_c4;
      if (iVar3 != 0) {
        local_188 = uVar20;
        if (iVar8 == 0x3f) {
          iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::info::miner_status::ThermalPause"
                                     ,iVar3,0x3f);
          uVar19 = local_c4;
          if (iVar3 != 0) goto LAB_00acf410;
        }
        else {
          if (iVar8 == 0xd) {
            iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
            uVar19 = local_c4;
            if (iVar3 == 0) goto LAB_00acfa14;
          }
LAB_00acf410:
          iVar3 = FUN_015db690(param_1 + 0x20,"ThermalPause",0xc);
          uVar19 = local_c4;
          if (iVar3 == 0) {
            pppppuVar12 = &local_284;
            local_d0._0_4_ = (undefined4 ****)&local_27c;
            puVar9 = &DAT_01c226d0;
            puVar7 = &DAT_00572c5c;
            local_d0._4_4_ = (code *)&DAT_0132b6a0;
            goto LAB_00ad0db8;
          }
        }
        local_c4._4_4_ = (char *)((ulonglong)uVar19 >> 0x20);
        uVar10 = 2;
        if ((int)*(uint *)(iVar2 + 0x10) < 0) {
          uVar10 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
        }
        if (uVar10 != 1) {
          pppppuVar15 = &local_284;
          puVar9 = &DAT_01c226e0;
          local_1b8 = (char *****)CONCAT31(local_1b8._1_3_,(char)uVar10);
          puVar7 = &DAT_005b5680;
          local_d0._4_4_ = FUN_006a7514;
          local_d0._0_4_ = (undefined4 ****)&local_271;
          goto LAB_00ad0db8;
        }
      }
    }
LAB_00acfa14:
    local_d0._0_4_ = (undefined4 ****)0xc;
    local_1b8 = (char *****)&local_d8;
    local_1b4 = (uint ****)&LAB_012b97d8;
    local_d4 = "ThermalPause";
    local_d8 = (undefined4 *****)0x80000000;
    local_c4 = uVar19;
    FUN_00664898(&local_188,&DAT_0057a667,&local_1b8);
    uVar19 = local_188;
    if (local_d8 != (undefined4 *****)0x80000000) {
      FUN_019bb7e0(local_d8,local_d4);
      uVar19 = local_188;
    }
    local_188._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
    local_188._0_4_ = (undefined4 ****)uVar19;
    FUN_019bb7e0((undefined4 ****)local_188,local_188._4_4_);
    local_188 = uVar19;
    local_270 = (char *)CONCAT31(local_270._1_3_,1);
    local_1d8 = "boser::web::graphql::bosminer::info::miner_status::DpsCooldown";
    local_1d4 = 0x3e;
    local_228 = (undefined4 *)&DAT_0000000b;
    local_22c = (uint ****)0x4a2960;
    iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_01be5118(0xb);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xb);
      }
      FUN_01bed4e2(iVar2,"DpsCooldown",0xb);
      local_1b0 = (uint ****)0xb;
      local_1b8 = (char *****)0xb;
      local_1b4 = (uint ****)iVar2;
      FUN_006a0cfc(&local_d8,1,"boser::web::graphql::bosminer::info::miner_status::DpsCooldown",0x3e
                  );
      FUN_006c2a34(&local_188,puVar18,&local_1b8,&local_d8);
      if (local_178 != (uint ****)0x80000006) {
        FUN_00abf870(&local_188);
      }
      local_d0._0_4_ = (undefined4 ****)0xb;
      local_d8 = (undefined4 *****)0x80000000;
      local_d4 = "DpsCooldown";
      uVar14 = FUN_0160ec7c(&local_1c8,&local_d8);
      uVar19 = thunk_FUN_01bee35a(uVar14,0x2c0);
      puVar11 = (uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
      if ((char)puVar11[4] == '\0') {
        FUN_019ae6ac(&local_d8);
        *puVar11 = (uint)local_d8;
        puVar11[1] = (uint)local_d4;
        puVar11[2] = (uint)(undefined4 ****)local_d0;
        puVar11[3] = (uint)local_d0._4_4_;
        *(undefined1 *)(puVar11 + 4) = 1;
      }
      local_1b8 = (char *****)*puVar11;
      local_1b4 = (uint ****)puVar11[1];
      local_1b0 = (uint ****)puVar11[2];
      local_1ac = (uint ****)puVar11[3];
      *puVar11 = (int)local_1b8 + 1;
      puVar11[1] = (int)local_1b4 + (uint)((uint ****)0xfffffffe < local_1b8);
      local_1a0 = (uint ****)0x0;
      local_1a8 = (uint ****)0x0;
      local_1a4 = (uint ****)0x8;
      ppppuStack_19c = (uint ****)&DAT_0056d238;
      ppppuStack_198 = (uint ****)0x0;
      uStack_194 = 0;
      uStack_190 = 0;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      *(undefined4 *)((int)puVar6 + 3) = 0x656d6954;
      *puVar6 = 0x54646e65;
      local_258 = 7;
      local_260 = 7;
      local_25c = puVar6;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      *(undefined4 *)((int)puVar6 + 3) = 0x656d6954;
      *puVar6 = 0x54646e65;
      FUN_006e01d0(&local_188);
      FUN_00abd3c8(&local_220,param_1);
      local_54 = 7;
      local_5c = 7;
      local_8c = (uint ****)0x80000000;
      local_c8 = (uint *****)ppppuStack_180;
      local_c4._0_4_ = (code *)ppppuStack_17c;
      local_c4._4_4_ = (char *)local_178;
      local_bc = ppppuStack_174;
      local_b8._0_4_ = local_170;
      local_b8._4_4_ = ppppuStack_16c;
      local_b0 = local_168;
      local_ac = ppppuStack_164;
      local_a8 = ppppuStack_160;
      local_a4 = ppppuStack_15c;
      local_50._0_4_ = local_220;
      local_50._4_4_ = uStack_21c;
      ppppuStack_48 = ppppuStack_218;
      local_d4 = (char *)CONCAT31(local_d4._1_3_,1);
      local_98 = (uint ****)0x80000001;
      local_2c = 0;
      local_2b = 0;
      local_40 = 4;
      local_d8 = (undefined4 *****)0x0;
      local_74 = 0x80000000;
      local_80 = (char *)0x80000000;
      local_a0 = (uint ****)0x0;
      local_3c = 0;
      local_44 = 0;
      local_68 = 0x80000000;
      local_30 = 0;
      local_34 = 8;
      local_38 = 0;
      local_9c = (uint ****)0x0;
      local_58 = puVar6;
      local_d0 = local_188;
      FUN_006e10e8(&local_188,&local_1b8,&local_260,&local_d8);
      FUN_00abfaf0(&local_188);
      puVar11 = (uint *)((uint)&local_188 | 4);
      *puVar11 = (uint)local_1b8;
      puVar11[1] = (uint)local_1b4;
      puVar11[2] = (uint)local_1b0;
      puVar11[3] = (uint)local_1ac;
      puVar11[4] = (uint)local_1a8;
      puVar11[5] = (uint)local_1a4;
      puVar11[6] = (uint)local_1a0;
      puVar11[7] = (uint)ppppuStack_19c;
      puVar11[8] = (uint)ppppuStack_198;
      puVar11[9] = uStack_194;
      puVar11[10] = uStack_190;
      puVar11[0xb] = uStack_18c;
      local_80 = local_1c8;
      iStack_7c = local_1c4;
      local_78 = local_1c0;
      local_c8 = (uint *****)0x80000001;
      local_bc = ppppuStack_180;
      local_b8._0_4_ = ppppuStack_17c;
      local_b8._4_4_ = local_178;
      local_b0 = ppppuStack_174;
      local_ac = local_170;
      local_a8 = ppppuStack_16c;
      local_a4 = local_168;
      local_a0 = ppppuStack_164;
      local_9c = ppppuStack_160;
      local_98 = ppppuStack_15c;
      ppppuStack_94 = (uint ****)uStack_158;
      local_3c = local_3c & 0xffff0000;
      local_40 = 0x10000;
      local_50._0_4_ = 0x80000000;
      local_5c = 0x80000000;
      local_64 = 8;
      local_70 = (uint ****)0x4;
      local_44 = 0;
      local_60 = 0;
      local_68 = 0;
      local_6c = 0;
      local_74 = 0;
      local_84 = 0x3e;
      local_90 = (uint ****)0x0;
      local_88 = "boser::web::graphql::bosminer::info::miner_status::DpsCooldown";
      local_8c = (uint ****)CONCAT31(local_8c._1_3_,1);
      local_c4 = local_188;
      iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                           "DpsCooldown",0xb);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar2,&local_d8,0xb0);
      uVar19 = local_c4;
    }
    else {
      uVar20 = FUN_006a71d4();
      iVar8 = (int)((ulonglong)uVar20 >> 0x20);
      iVar3 = (int)uVar20;
      uVar19 = local_c4;
      if (iVar3 != 0) {
        local_188 = uVar20;
        if (iVar8 == 0x3e) {
          iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::info::miner_status::DpsCooldown"
                                     ,iVar3,0x3e);
          uVar19 = local_c4;
          if (iVar3 != 0) goto LAB_00acfe70;
        }
        else {
          if (iVar8 == 0xd) {
            iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
            uVar19 = local_c4;
            if (iVar3 == 0) goto LAB_00acfea4;
          }
LAB_00acfe70:
          iVar3 = FUN_015db690(param_1 + 0x20,"DpsCooldown",0xb);
          uVar19 = local_c4;
          if (iVar3 == 0) goto LAB_00ad0d98;
        }
        local_c4._4_4_ = (char *)((ulonglong)uVar19 >> 0x20);
        uVar10 = 2;
        if ((int)*(uint *)(iVar2 + 0x10) < 0) {
          uVar10 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
        }
        if (uVar10 != 1) goto LAB_00ad110c;
      }
    }
LAB_00acfea4:
    local_d0._0_4_ = (undefined4 ****)0xb;
    local_1b8 = (char *****)&local_d8;
    local_1b4 = (uint ****)&LAB_012b97d8;
    local_d4 = "DpsCooldown";
    local_d8 = (undefined4 *****)0x80000000;
    local_c4 = uVar19;
    FUN_00664898(&local_188,&DAT_0057a667,&local_1b8);
    uVar19 = local_188;
    if (local_d8 != (undefined4 *****)0x80000000) {
      FUN_019bb7e0(local_d8,local_d4);
      uVar19 = local_188;
    }
    local_188._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
    local_188._0_4_ = (undefined4 ****)uVar19;
    FUN_019bb7e0((undefined4 ****)local_188,local_188._4_4_);
    local_188 = uVar19;
    local_270 = (char *)CONCAT31(local_270._1_3_,1);
    local_1d8 = "boser::web::graphql::bosminer::info::miner_status::TunerError";
    local_1d4 = 0x3d;
    local_228 = (undefined4 *)&DAT_0000000a;
    local_22c = (uint ****)0x4a2970;
    iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_01be5118(10);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,10);
      }
      FUN_01bed4e2(iVar2,"TunerError",10);
      local_1b0 = (uint ****)0xa;
      local_1b8 = (char *****)0xa;
      local_1b4 = (uint ****)iVar2;
      FUN_006a0cfc(&local_d8,1,"boser::web::graphql::bosminer::info::miner_status::TunerError",0x3d)
      ;
      FUN_006c2a34(&local_188,puVar18,&local_1b8,&local_d8);
      if (local_178 != (uint ****)0x80000006) {
        FUN_00abf870(&local_188);
      }
      local_d0._0_4_ = (undefined4 ****)0xa;
      local_d8 = (undefined4 *****)0x80000000;
      local_d4 = "TunerError";
      uVar14 = FUN_0160ec7c();
      uVar19 = thunk_FUN_01bee35a(uVar14,0x2c0);
      puVar11 = (uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
      if ((char)puVar11[4] == '\0') {
        FUN_019ae6ac(&local_d8);
        *puVar11 = (uint)local_d8;
        puVar11[1] = (uint)local_d4;
        puVar11[2] = (uint)(undefined4 ****)local_d0;
        puVar11[3] = (uint)local_d0._4_4_;
        *(undefined1 *)(puVar11 + 4) = 1;
      }
      local_1b8 = (char *****)*puVar11;
      local_1b4 = (uint ****)puVar11[1];
      local_1b0 = (uint ****)puVar11[2];
      local_1ac = (uint ****)puVar11[3];
      *puVar11 = (int)local_1b8 + 1;
      puVar11[1] = (int)local_1b4 + (uint)((uint ****)0xfffffffe < local_1b8);
      local_1a0 = (uint ****)0x0;
      local_1a8 = (uint ****)0x0;
      local_1a4 = (uint ****)0x8;
      ppppuStack_19c = (uint ****)&DAT_0056d238;
      ppppuStack_198 = (uint ****)0x0;
      uStack_194 = 0;
      uStack_190 = 0;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar6 == (undefined4 *)0x0) {
LAB_00ad1140:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      *(undefined4 *)((int)puVar6 + 3) = 0x65676173;
      *puVar6 = 0x7373656d;
      local_258 = 7;
      local_260 = 7;
      local_25c = puVar6;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      *(undefined4 *)((int)puVar6 + 3) = 0x65676173;
      *puVar6 = 0x7373656d;
      FUN_006e01d0(&local_188);
      FUN_006c86e0(&local_220,param_1);
      local_54 = 7;
      local_5c = 7;
      local_8c = (uint ****)0x80000000;
      local_c8 = (uint *****)ppppuStack_180;
      local_c4._0_4_ = (code *)ppppuStack_17c;
      local_c4._4_4_ = (char *)local_178;
      local_bc = ppppuStack_174;
      local_b8._0_4_ = local_170;
      local_b8._4_4_ = ppppuStack_16c;
      local_b0 = local_168;
      local_ac = ppppuStack_164;
      local_a8 = ppppuStack_160;
      local_a4 = ppppuStack_15c;
      local_50._0_4_ = local_220;
      local_50._4_4_ = uStack_21c;
      ppppuStack_48 = ppppuStack_218;
      local_d4 = (char *)CONCAT31(local_d4._1_3_,1);
      local_98 = (uint ****)0x80000001;
      local_2c = 0;
      local_2b = 0;
      local_40 = 4;
      local_d8 = (undefined4 *****)0x0;
      local_74 = 0x80000000;
      local_80 = (char *)0x80000000;
      local_a0 = (uint ****)0x0;
      local_3c = 0;
      local_44 = 0;
      local_68 = 0x80000000;
      local_30 = 0;
      local_34 = 8;
      local_38 = 0;
      local_9c = (uint ****)0x0;
      local_58 = puVar6;
      local_d0 = local_188;
      FUN_006e10e8(&local_188,&local_1b8,&local_260,&local_d8);
      FUN_00abfaf0(&local_188);
      puVar6 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar6 == (undefined4 *)0x0) goto LAB_00ad1140;
      *(undefined4 *)((int)puVar6 + 3) = 0x656d6954;
      *puVar6 = 0x54646e65;
      local_258 = 7;
      local_260 = 7;
      local_25c = puVar6;
      puVar6 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      *(undefined4 *)((int)puVar6 + 3) = 0x656d6954;
      *puVar6 = 0x54646e65;
      FUN_006e01d0(&local_188);
      FUN_00abd3c8(&local_220,param_1);
      local_54 = 7;
      local_5c = 7;
      local_8c = (uint ****)0x80000000;
      local_c8 = (uint *****)ppppuStack_180;
      local_c4._0_4_ = (code *)ppppuStack_17c;
      local_c4._4_4_ = (char *)local_178;
      local_bc = ppppuStack_174;
      local_b8._0_4_ = local_170;
      local_b8._4_4_ = ppppuStack_16c;
      local_b0 = local_168;
      local_ac = ppppuStack_164;
      local_a8 = ppppuStack_160;
      local_a4 = ppppuStack_15c;
      local_50._0_4_ = local_220;
      local_50._4_4_ = uStack_21c;
      ppppuStack_48 = ppppuStack_218;
      local_d4 = (char *)CONCAT31(local_d4._1_3_,1);
      local_98 = (uint ****)0x80000001;
      local_2c = 0;
      local_2b = 0;
      local_40 = 4;
      local_d8 = (undefined4 *****)0x0;
      local_74 = 0x80000000;
      local_80 = (char *)0x80000000;
      local_a0 = (uint ****)0x0;
      local_3c = 0;
      local_44 = 0;
      local_68 = 0x80000000;
      local_30 = 0;
      local_34 = 8;
      local_38 = 0;
      local_9c = (uint ****)0x0;
      local_58 = puVar6;
      local_d0 = local_188;
      FUN_006e10e8(&local_188,&local_1b8,&local_260,&local_d8);
      FUN_00abfaf0(&local_188);
      puVar11 = (uint *)((uint)&local_188 | 4);
      *puVar11 = (uint)local_1b8;
      puVar11[1] = (uint)local_1b4;
      puVar11[2] = (uint)local_1b0;
      puVar11[3] = (uint)local_1ac;
      puVar11[4] = (uint)local_1a8;
      puVar11[5] = (uint)local_1a4;
      puVar11[6] = (uint)local_1a0;
      puVar11[7] = (uint)ppppuStack_19c;
      puVar11[8] = (uint)ppppuStack_198;
      puVar11[9] = uStack_194;
      puVar11[10] = uStack_190;
      puVar11[0xb] = uStack_18c;
      local_80 = local_1c8;
      iStack_7c = local_1c4;
      local_78 = local_1c0;
      local_c8 = (uint *****)0x80000001;
      local_bc = ppppuStack_180;
      local_b8._0_4_ = ppppuStack_17c;
      local_b8._4_4_ = local_178;
      local_b0 = ppppuStack_174;
      local_ac = local_170;
      local_a8 = ppppuStack_16c;
      local_a4 = local_168;
      local_a0 = ppppuStack_164;
      local_9c = ppppuStack_160;
      local_98 = ppppuStack_15c;
      ppppuStack_94 = (uint ****)uStack_158;
      local_3c = local_3c & 0xffff0000;
      local_40 = 0x10000;
      local_50._0_4_ = 0x80000000;
      local_5c = 0x80000000;
      local_64 = 8;
      local_70 = (uint ****)0x4;
      local_44 = 0;
      local_60 = 0;
      local_68 = 0;
      local_6c = 0;
      local_74 = 0;
      local_84 = 0x3d;
      local_90 = (uint ****)0x0;
      local_88 = "boser::web::graphql::bosminer::info::miner_status::TunerError";
      local_8c = (uint ****)CONCAT31(local_8c._1_3_,1);
      local_c4 = local_188;
      iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                           "TunerError",10);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar2,&local_d8,0xb0);
      uVar19 = local_c4;
    }
    else {
      uVar20 = FUN_006a71d4();
      iVar8 = (int)((ulonglong)uVar20 >> 0x20);
      iVar3 = (int)uVar20;
      uVar19 = local_c4;
      if (iVar3 != 0) {
        local_188 = uVar20;
        if (iVar8 == 0x3d) {
          iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::info::miner_status::TunerError"
                                     ,iVar3,0x3d);
          uVar19 = local_c4;
          if (iVar3 != 0) goto LAB_00ad0450;
        }
        else {
          if (iVar8 == 0xd) {
            iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
            uVar19 = local_c4;
            if (iVar3 == 0) goto LAB_00ad0484;
          }
LAB_00ad0450:
          iVar3 = FUN_015db690(param_1 + 0x20,"TunerError",10);
          uVar19 = local_c4;
          if (iVar3 == 0) goto LAB_00ad0d98;
        }
        local_c4._4_4_ = (char *)((ulonglong)uVar19 >> 0x20);
        uVar10 = 2;
        if ((int)*(uint *)(iVar2 + 0x10) < 0) {
          uVar10 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
        }
        if (uVar10 != 1) goto LAB_00ad110c;
      }
    }
LAB_00ad0484:
    local_d0._0_4_ = (undefined4 ****)0xa;
    local_1b8 = (char *****)&local_d8;
    local_1b4 = (uint ****)&LAB_012b97d8;
    local_d4 = "TunerError";
    local_d8 = (undefined4 *****)0x80000000;
    local_c4 = uVar19;
    FUN_00664898(&local_188,&DAT_0057a667,&local_1b8);
    uVar19 = local_188;
    if (local_d8 != (undefined4 *****)0x80000000) {
      FUN_019bb7e0(local_d8,local_d4);
      uVar19 = local_188;
    }
    local_188._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
    local_188._0_4_ = (undefined4 ****)uVar19;
    FUN_019bb7e0((undefined4 ****)local_188,local_188._4_4_);
    local_188 = uVar19;
    local_270 = (char *)CONCAT31(local_270._1_3_,1);
    local_1d8 = "boser::web::graphql::bosminer::info::miner_status::HardwareError";
    local_1d4 = 0x40;
    local_228 = (undefined4 *)&DAT_0000000d;
    local_22c = (uint ****)0x4a2980;
    iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_01be5118(0xd);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xd);
      }
      FUN_01bed4e2(iVar2,"HardwareError",0xd);
      local_1b0 = (uint ****)0xd;
      local_1b8 = (char *****)0xd;
      local_1b4 = (uint ****)iVar2;
      FUN_006a0cfc(&local_d8,1,"boser::web::graphql::bosminer::info::miner_status::HardwareError",
                   0x40);
      FUN_006c2a34(&local_188,puVar18,&local_1b8,&local_d8);
      if (local_178 != (uint ****)0x80000006) {
        FUN_00abf870(&local_188);
      }
      local_d0._0_4_ = (undefined4 ****)0xd;
      local_d8 = (undefined4 *****)0x80000000;
      local_d4 = "HardwareError";
      uVar14 = FUN_0160ec7c(&local_1c8,&local_d8);
      uVar19 = thunk_FUN_01bee35a(uVar14,0x2c0);
      puVar11 = (uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
      if ((char)puVar11[4] == '\0') {
        FUN_019ae6ac(&local_d8);
        *puVar11 = (uint)local_d8;
        puVar11[1] = (uint)local_d4;
        puVar11[2] = (uint)(undefined4 ****)local_d0;
        puVar11[3] = (uint)local_d0._4_4_;
        *(undefined1 *)(puVar11 + 4) = 1;
      }
      local_1b8 = (char *****)*puVar11;
      local_1b4 = (uint ****)puVar11[1];
      local_1b0 = (uint ****)puVar11[2];
      local_1ac = (uint ****)puVar11[3];
      *puVar11 = (int)local_1b8 + 1;
      puVar11[1] = (int)local_1b4 + (uint)((uint ****)0xfffffffe < local_1b8);
      local_1a0 = (uint ****)0x0;
      local_1a8 = (uint ****)0x0;
      local_1a4 = (uint ****)0x8;
      ppppuStack_19c = (uint ****)&DAT_0056d238;
      ppppuStack_198 = (uint ****)0x0;
      uStack_194 = 0;
      uStack_190 = 0;
      puVar18 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar18 != (undefined4 *)0x0) {
        *(undefined4 *)((int)puVar18 + 3) = 0x65676173;
        *puVar18 = 0x7373656d;
        local_258 = 7;
        local_260 = 7;
        local_25c = puVar18;
        puVar18 = (undefined4 *)thunk_FUN_01be5118(7);
        if (puVar18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,7);
        }
        *(undefined4 *)((int)puVar18 + 3) = 0x65676173;
        *puVar18 = 0x7373656d;
        FUN_006e01d0(&local_188);
        FUN_006c86e0(&local_220,param_1);
        local_54 = 7;
        local_5c = 7;
        local_8c = (uint ****)0x80000000;
        local_c8 = (uint *****)ppppuStack_180;
        local_c4._0_4_ = (code *)ppppuStack_17c;
        local_c4._4_4_ = (char *)local_178;
        local_bc = ppppuStack_174;
        local_b8._0_4_ = local_170;
        local_b8._4_4_ = ppppuStack_16c;
        local_b0 = local_168;
        local_ac = ppppuStack_164;
        local_a8 = ppppuStack_160;
        local_a4 = ppppuStack_15c;
        local_50._0_4_ = local_220;
        local_50._4_4_ = uStack_21c;
        ppppuStack_48 = ppppuStack_218;
        local_d4 = (char *)CONCAT31(local_d4._1_3_,1);
        local_98 = (uint ****)0x80000001;
        local_2c = 0;
        local_2b = 0;
        local_40 = 4;
        local_d8 = (undefined4 *****)0x0;
        local_74 = 0x80000000;
        local_80 = (char *)0x80000000;
        local_a0 = (uint ****)0x0;
        local_3c = 0;
        local_44 = 0;
        local_68 = 0x80000000;
        local_30 = 0;
        local_34 = 8;
        local_38 = 0;
        local_9c = (uint ****)0x0;
        local_58 = puVar18;
        local_d0 = local_188;
        FUN_006e10e8(&local_188,&local_1b8,&local_260);
        FUN_00abfaf0(&local_188);
        puVar18 = (undefined4 *)thunk_FUN_01be5118(7);
        if (puVar18 != (undefined4 *)0x0) {
          *(undefined4 *)((int)puVar18 + 3) = 0x656d6954;
          *puVar18 = 0x54646e65;
          local_258 = 7;
          local_260 = 7;
          local_25c = puVar18;
          puVar18 = (undefined4 *)thunk_FUN_01be5118(7);
          if (puVar18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,7);
          }
          *(undefined4 *)((int)puVar18 + 3) = 0x656d6954;
          *puVar18 = 0x54646e65;
          FUN_006e01d0(&local_188);
          FUN_00abd3c8(&local_220,param_1);
          local_54 = 7;
          local_5c = 7;
          local_8c = (uint ****)0x80000000;
          local_c8 = (uint *****)ppppuStack_180;
          local_c4._0_4_ = (code *)ppppuStack_17c;
          local_c4._4_4_ = (char *)local_178;
          local_bc = ppppuStack_174;
          local_b8._0_4_ = local_170;
          local_b8._4_4_ = ppppuStack_16c;
          local_b0 = local_168;
          local_ac = ppppuStack_164;
          local_a8 = ppppuStack_160;
          local_a4 = ppppuStack_15c;
          local_50._0_4_ = local_220;
          local_50._4_4_ = uStack_21c;
          ppppuStack_48 = ppppuStack_218;
          local_d4 = (char *)CONCAT31(local_d4._1_3_,1);
          local_98 = (uint ****)0x80000001;
          local_2c = 0;
          local_2b = 0;
          local_40 = 4;
          local_d8 = (undefined4 *****)0x0;
          local_74 = 0x80000000;
          local_80 = (char *)0x80000000;
          local_a0 = (uint ****)0x0;
          local_3c = 0;
          local_44 = 0;
          local_68 = 0x80000000;
          local_30 = 0;
          local_34 = 8;
          local_38 = 0;
          local_9c = (uint ****)0x0;
          local_58 = puVar18;
          local_d0 = local_188;
          FUN_006e10e8(&local_188,&local_1b8,&local_260,&local_d8);
          FUN_00abfaf0(&local_188);
          puVar11 = (uint *)((uint)&local_188 | 4);
          *puVar11 = (uint)local_1b8;
          puVar11[1] = (uint)local_1b4;
          puVar11[2] = (uint)local_1b0;
          puVar11[3] = (uint)local_1ac;
          puVar11[4] = (uint)local_1a8;
          puVar11[5] = (uint)local_1a4;
          puVar11[6] = (uint)local_1a0;
          puVar11[7] = (uint)ppppuStack_19c;
          puVar11[8] = (uint)ppppuStack_198;
          puVar11[9] = uStack_194;
          puVar11[10] = uStack_190;
          puVar11[0xb] = uStack_18c;
          local_80 = local_1c8;
          iStack_7c = local_1c4;
          local_78 = local_1c0;
          local_c8 = (uint *****)0x80000001;
          local_bc = ppppuStack_180;
          local_b8._0_4_ = ppppuStack_17c;
          local_b8._4_4_ = local_178;
          local_b0 = ppppuStack_174;
          local_ac = local_170;
          local_a8 = ppppuStack_16c;
          local_a4 = local_168;
          local_a0 = ppppuStack_164;
          local_9c = ppppuStack_160;
          local_98 = ppppuStack_15c;
          ppppuStack_94 = (uint ****)uStack_158;
          local_44 = 0;
          local_60 = 0;
          local_68 = 0;
          local_3c = local_3c & 0xffff0000;
          local_40 = 0x10000;
          local_50._0_4_ = 0x80000000;
          local_5c = 0x80000000;
          local_64 = 8;
          local_70 = (uint ****)0x4;
          local_6c = 0;
          local_74 = 0;
          local_84 = 0x40;
          local_90 = (uint ****)0x0;
          local_88 = "boser::web::graphql::bosminer::info::miner_status::HardwareError";
          local_8c = (uint ****)CONCAT31(local_8c._1_3_,1);
          local_c4 = local_188;
          iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                               "HardwareError",0xd);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01c226c0);
          }
          FUN_00abf870();
          FUN_01bed4e2(iVar2,&local_d8,0xb0);
          uVar19 = local_c4;
          goto LAB_00ad0a5c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,7);
    }
    uVar20 = FUN_006a71d4();
    iVar8 = (int)((ulonglong)uVar20 >> 0x20);
    iVar3 = (int)uVar20;
    uVar19 = local_c4;
    if (iVar3 == 0) goto LAB_00ad0a5c;
    local_188 = uVar20;
    if (iVar8 == 0x40) {
      iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::info::miner_status::HardwareError",
                                 iVar3,0x40);
      uVar19 = local_c4;
      if (iVar3 != 0) goto LAB_00ad0a28;
    }
    else {
      if (iVar8 == 0xd) {
        iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
        uVar19 = local_c4;
        if (iVar3 == 0) goto LAB_00ad0a5c;
      }
LAB_00ad0a28:
      iVar3 = FUN_015db690(param_1 + 0x20,"HardwareError",0xd);
      uVar19 = local_c4;
      if (iVar3 == 0) goto LAB_00ad0d98;
    }
    local_c4._4_4_ = (char *)((ulonglong)uVar19 >> 0x20);
    uVar10 = 2;
    if ((int)*(uint *)(iVar2 + 0x10) < 0) {
      uVar10 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
    }
    if (uVar10 == 1) {
LAB_00ad0a5c:
      local_d0._0_4_ = (undefined4 ****)0xd;
      local_d8 = (undefined4 *****)0x80000000;
      local_1b8 = (char *****)&local_d8;
      local_d4 = "HardwareError";
      local_1b4 = (uint ****)&LAB_012b97d8;
      local_c4 = uVar19;
      FUN_00664898(&local_188,&DAT_0057a667,&local_1b8);
      uVar19 = local_188;
      if (local_d8 != (undefined4 *****)0x80000000) {
        FUN_019bb7e0(local_d8,local_d4);
        uVar19 = local_188;
      }
      local_188._4_4_ = (uint)((ulonglong)uVar19 >> 0x20);
      local_188._0_4_ = (undefined4 ****)uVar19;
      FUN_019bb7e0((undefined4 ****)local_188,local_188._4_4_);
      local_188 = uVar19;
      local_d4 = "StopReason";
      local_d0._0_4_ = (undefined4 ****)0xa;
      local_d8 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(&local_220,&local_d8);
      FUN_006e01d0(&local_188);
      local_d0._0_4_ = (undefined4 ****)0xa;
      local_d4 = "NoneReason";
      local_d8 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(&local_1b8,&local_d8);
      FUN_006dd1ec(&local_188,&local_1b8);
      local_d0._0_4_ = (undefined4 ****)0x16;
      local_d4 = "ApplicationUnavailable";
      local_d8 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(&local_1b8,&local_d8);
      FUN_006dd1ec(&local_188,&local_1b8);
      local_d0._0_4_ = (undefined4 ****)0x13;
      local_d4 = "UnsupportedHardware";
      local_d8 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(&local_1b8,&local_d8);
      FUN_006dd1ec(&local_188,&local_1b8);
      local_d0._0_4_ = (undefined4 ****)0x9;
      local_d4 = "DeadPools";
      local_d8 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(&local_1b8,&local_d8);
      FUN_006dd1ec(&local_188,&local_1b8);
      local_d0._0_4_ = (undefined4 ****)0xe;
      local_d4 = "MissingLicense";
      local_d8 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(&local_1b8,&local_d8);
      FUN_006dd1ec(&local_188,&local_1b8);
      local_d0._0_4_ = (undefined4 ****)0x9;
      local_d4 = "UserPause";
      local_d8 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(&local_1b8,&local_d8);
      FUN_006dd1ec(&local_188,&local_1b8);
      local_d0._0_4_ = (undefined4 ****)0xc;
      local_d4 = "ThermalPause";
      local_d8 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(&local_1b8,&local_d8);
      FUN_006dd1ec(&local_188,&local_1b8);
      local_d0._0_4_ = (undefined4 ****)0xb;
      local_d4 = "DpsCooldown";
      local_d8 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(&local_1b8,&local_d8);
      FUN_006dd1ec(&local_188,&local_1b8);
      local_d0._0_4_ = (undefined4 ****)0xa;
      local_d4 = "TunerError";
      local_d8 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(&local_1b8,&local_d8);
      FUN_006dd1ec(&local_188,&local_1b8);
      local_d4 = "HardwareError";
      local_d0._0_4_ = (undefined4 ****)0xd;
      local_d8 = (undefined4 *****)0x80000000;
      FUN_0160ec7c(&local_1b8,&local_d8);
      FUN_006dd1ec(&local_188,&local_1b8);
      local_b0 = ppppuStack_180;
      local_ac = ppppuStack_17c;
      local_a8 = local_178;
      local_a4 = ppppuStack_174;
      local_a0 = local_170;
      local_9c = ppppuStack_16c;
      local_98 = local_168;
      ppppuStack_94 = ppppuStack_164;
      local_90 = ppppuStack_160;
      local_8c = ppppuStack_15c;
      local_78 = (char *)local_220;
      local_74 = uStack_21c;
      local_70 = ppppuStack_218;
      local_5c = 8;
      local_68 = 4;
      local_54 = local_54 & 0xffffff00;
      local_58 = (undefined4 *)0x0;
      local_60 = 0;
      local_64 = 0;
      local_6c = 0;
      local_88 = (char *)0x0;
      local_84 = 0x80000000;
      local_bc = (uint ****)0x3d;
      local_c8 = (uint *****)0x80000003;
      local_c4._4_4_ = "boser::web::graphql::bosminer::info::miner_status::StopReason";
      local_b8 = local_188;
      iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),param_2,
                           param_3);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar2,&local_d8,0xb0);
      return;
    }
  }
  else {
    uVar19 = FUN_006a71d4();
    iVar8 = (int)((ulonglong)uVar19 >> 0x20);
    iVar3 = (int)uVar19;
    if (iVar3 == 0) goto LAB_00ace1e4;
    local_188 = uVar19;
    if (iVar8 != 0x46) {
      if (iVar8 == 0xd) {
        iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
        if (iVar3 == 0) goto LAB_00ace1e4;
      }
LAB_00ace1b0:
      iVar3 = FUN_015db690(param_1 + 0x20,"UnsupportedHardware",0x13);
      if (iVar3 != 0) goto LAB_00ace1cc;
LAB_00ad0d98:
      pppppuVar15 = (undefined4 *****)&local_188;
      pppppuVar12 = &local_22c;
      local_d0._0_4_ = (undefined4 ****)&local_1d8;
      puVar9 = &DAT_01c226d0;
      puVar7 = &DAT_00572c5c;
      local_d0._4_4_ = (code *)&DAT_0132b6a0;
      goto LAB_00ad0db8;
    }
    iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::info::miner_status::UnsupportedHardware"
                               ,iVar3,0x46);
    if (iVar3 != 0) goto LAB_00ace1b0;
LAB_00ace1cc:
    uVar10 = 2;
    if ((int)*(uint *)(iVar2 + 0x10) < 0) {
      uVar10 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
    }
    if (uVar10 == 1) goto LAB_00ace1e4;
  }
LAB_00ad110c:
  pppppuVar12 = (uint *****)&local_1b8;
  pppppuVar15 = &local_22c;
  puVar9 = &DAT_01c226e0;
  local_1b8 = (char *****)CONCAT31(local_1b8._1_3_,(char)uVar10);
  puVar7 = &DAT_005b5680;
  local_d0._4_4_ = FUN_006a7514;
  local_d0._0_4_ = (undefined4 ****)&local_270;
LAB_00ad0db8:
  local_d4 = (char *)&DAT_0132b6a0;
  local_d8 = pppppuVar15;
  local_c8 = pppppuVar12;
  local_c4._0_4_ = local_d0._4_4_;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar7,&local_d8,puVar9);
}

