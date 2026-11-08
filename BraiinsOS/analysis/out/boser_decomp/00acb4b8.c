// FUN_00acb4b8 @ 00acb4b8 size=7540 calls_out=29 calls_in=1
// strings: boser::web::graphql::bosminer::license::LicenseState | __fake_type__ | boser::web::graphql::bosminer::license::LicenseState | boser::web::graphql::bosminer::license::LicenseState | boser::web::graphql::bosminer::license::NoneLicense | NoneLicense

void FUN_00acb4b8(int param_1,uint **param_2,char *****param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *****pppppuVar11;
  undefined4 uVar12;
  uint *****pppppuVar13;
  undefined4 *puVar14;
  char *****pppppcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char ***local_210;
  char *****local_20c;
  char *local_208;
  undefined4 local_204;
  undefined1 local_1fd;
  uint ****local_1fc;
  undefined4 local_1f8;
  char *local_1f4;
  undefined4 local_1f0;
  undefined1 local_1e9;
  undefined4 local_1e8 [4];
  char *****local_1d8;
  undefined1 *local_1d4;
  char *****local_1d0;
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
  undefined4 uStack_19c;
  int local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  int iStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  int iStack_180;
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
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int local_a0;
  undefined4 local_9c;
  char *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  uint local_64;
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
  
  puVar14 = (undefined4 *)(param_1 + 0x40);
  local_204 = 0x34;
  local_1fd = 3;
  local_208 = "boser::web::graphql::bosminer::license::LicenseState";
  local_210 = (char ***)param_2;
  local_20c = param_3;
  iVar2 = FUN_006c176c(*puVar14,*(undefined4 *)(param_1 + 0x44),param_2,param_3);
  if (iVar2 != 0) {
    local_1a8 = FUN_006a71d4();
    iVar7 = (int)((ulonglong)local_1a8 >> 0x20);
    iVar3 = (int)local_1a8;
    if (iVar3 == 0) {
      return;
    }
    if (iVar7 == 0x34) {
      iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::license::LicenseState",iVar3,0x34);
      if (iVar3 == 0) goto LAB_00acb5d0;
    }
    else if (iVar7 == 0xd) {
      iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
      if (iVar3 == 0) {
        return;
      }
    }
    iVar3 = FUN_015db690(param_1 + 0x20,param_2,param_3);
    if (iVar3 == 0) {
      local_d8 = (uint *****)&local_210;
      local_d4._0_4_ = (code *)&DAT_0132b6a0;
      local_e0._4_4_ = (code *)&DAT_0132b6a0;
      local_e4 = (char *)&DAT_0132b6a0;
      local_e0._0_4_ = (undefined4 ****)&local_208;
      local_e8 = (undefined4 *****)&local_1a8;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_00572c5c,&local_e8,&DAT_01c226d0);
    }
LAB_00acb5d0:
    if (*(int *)(iVar2 + 0x10) != -0x7ffffffd) {
      uVar1 = FUN_006a7508();
      local_1d8 = (char *****)CONCAT31(local_1d8._1_3_,uVar1);
      local_d8 = (uint *****)&local_1d8;
      local_e0._0_4_ = (undefined4 ****)&local_1fd;
      local_e8 = (undefined4 *****)&local_210;
      local_e4 = (char *)&DAT_0132b6a0;
      local_d4._0_4_ = FUN_006a7514;
      local_e0._4_4_ = FUN_006a7514;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005b5680,&local_e8,&DAT_01c226e0);
    }
    return;
  }
  uVar12 = 0;
  if ((int)param_3 < 0) {
LAB_00acb568:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar12,param_3);
  }
  if (param_3 == (char *****)0x0) {
    pppppcVar15 = (char *****)0x0;
    puVar4 = (undefined1 *)0x1;
  }
  else {
    uVar12 = 1;
    puVar4 = (undefined1 *)FUN_01298504(param_3,1);
    pppppcVar15 = param_3;
    if (puVar4 == (undefined1 *)0x0) goto LAB_00acb568;
  }
  FUN_01bed4e2(puVar4,param_2,param_3);
  local_1d8 = pppppcVar15;
  local_1d4 = puVar4;
  local_1d0 = param_3;
  FUN_006a0cfc(&local_e8,3,"boser::web::graphql::bosminer::license::LicenseState",0x34);
  FUN_006c2a34(&local_1a8,puVar14,&local_1d8,&local_e8);
  if (local_198 != -0x7ffffffa) {
    FUN_00abf870(&local_1a8);
  }
  local_1e9 = 1;
  local_1f0 = 0x33;
  local_1f4 = "boser::web::graphql::bosminer::license::NoneLicense";
  local_1f8 = 0xb;
  local_1fc = (uint ****)0x4a2670;
  iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (iVar2 != 0) {
    uVar16 = FUN_006a71d4();
    iVar7 = (int)((ulonglong)uVar16 >> 0x20);
    iVar3 = (int)uVar16;
    if (iVar3 == 0) goto LAB_00acbaa8;
    local_1a8 = uVar16;
    if (iVar7 != 0x33) {
      if (iVar7 == 0xd) {
        iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
        if (iVar3 == 0) goto LAB_00acbaa8;
      }
LAB_00acba74:
      iVar3 = FUN_015db690(param_1 + 0x20,"NoneLicense",0xb);
      if (iVar3 != 0) goto LAB_00acba90;
LAB_00acd088:
      local_e8 = (undefined4 *****)&local_1a8;
      local_d8 = &local_1fc;
      local_e0._0_4_ = (undefined4 ****)&local_1f4;
      puVar8 = &DAT_01c226d0;
      puVar6 = &DAT_00572c5c;
      local_e0._4_4_ = (code *)&DAT_0132b6a0;
      goto LAB_00acd0a8;
    }
    iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::license::NoneLicense",iVar3,0x33);
    if (iVar3 != 0) goto LAB_00acba74;
LAB_00acba90:
    uVar9 = 2;
    if ((int)*(uint *)(iVar2 + 0x10) < 0) {
      uVar9 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
    }
    if (uVar9 == 1) goto LAB_00acbaa8;
LAB_00acd1fc:
    local_d8 = (uint *****)&local_1d8;
    local_e8 = &local_1fc;
    puVar8 = &DAT_01c226e0;
    local_1d8 = (char *****)CONCAT31(local_1d8._1_3_,(char)uVar9);
    puVar6 = &DAT_005b5680;
    local_e0._4_4_ = FUN_006a7514;
    local_e0._0_4_ = (undefined4 ****)&local_1e9;
LAB_00acd0a8:
    local_e4 = (char *)&DAT_0132b6a0;
    local_d4._0_4_ = local_e0._4_4_;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(puVar6,&local_e8,puVar8);
  }
  iVar2 = thunk_FUN_01be5118(0xb);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xb);
  }
  FUN_01bed4e2(iVar2,"NoneLicense",0xb);
  local_1d0 = (char *****)0xb;
  local_1d8 = (char *****)0xb;
  local_1d4 = (undefined1 *)iVar2;
  FUN_006a0cfc(&local_e8,1,"boser::web::graphql::bosminer::license::NoneLicense",0x33);
  FUN_006c2a34(&local_1a8,puVar14,&local_1d8,&local_e8);
  if (local_198 != -0x7ffffffa) {
    FUN_00abf870(&local_1a8);
  }
  local_e0._0_4_ = (undefined4 ****)0xb;
  local_e8 = (undefined4 *****)0x80000000;
  local_e4 = "NoneLicense";
  uVar12 = FUN_0160ec7c(local_1e8,&local_e8);
  uVar16 = thunk_FUN_01bee35a(uVar12,0x2c0);
  puVar10 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
  if ((char)puVar10[4] == '\0') {
    FUN_019ae6ac(&local_e8);
    *puVar10 = (uint)local_e8;
    puVar10[1] = (uint)local_e4;
    puVar10[2] = (uint)(undefined4 ****)local_e0;
    puVar10[3] = (uint)local_e0._4_4_;
    *(undefined1 *)(puVar10 + 4) = 1;
  }
  local_1d8 = (char *****)*puVar10;
  local_1d4 = (undefined1 *)puVar10[1];
  local_1d0 = (char *****)puVar10[2];
  uStack_1cc = puVar10[3];
  *puVar10 = (int)local_1d8 + 1;
  puVar10[1] = (int)local_1d4 + (uint)((uint ****)0xfffffffe < local_1d8);
  local_1c0 = 0;
  local_1c8 = 0;
  local_1c4 = 8;
  puStack_1bc = &DAT_0056d238;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0x13);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x13);
  }
  FUN_01bed4e2(puVar5,"secondsToRestricted",0x13);
  local_ec = 0x13;
  local_f4 = 0x13;
  local_f0 = puVar5;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0x13);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x13);
  }
  FUN_01bed4e2(puVar5,"secondsToRestricted",0x13);
  FUN_006e01d0(&local_1a8);
  FUN_006cd7c0(&local_38,param_1);
  local_64 = 0x13;
  local_6c = 0x13;
  local_9c = 0x80000000;
  local_e0._0_4_ = (undefined4 ****)local_1a8;
  local_e0._4_4_ = (code *)local_1a8._4_4_;
  local_d8 = (uint *****)uStack_1a0;
  local_d4._0_4_ = (code *)uStack_19c;
  local_d4._4_4_ = (char *)local_198;
  local_cc = uStack_194;
  local_c8._0_4_ = local_190;
  local_c8._4_4_ = iStack_18c;
  uStack_c0 = local_188;
  uStack_bc = uStack_184;
  iStack_b8 = iStack_180;
  local_b4 = uStack_17c;
  local_60 = local_38;
  uStack_5c = uStack_34;
  uStack_58 = uStack_30;
  local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
  local_a8 = 0x80000001;
  local_3c = 0;
  local_3b = 0;
  local_50 = 4;
  local_e8 = (undefined4 *****)0x0;
  local_84 = 0x80000000;
  local_90 = 0x80000000;
  local_b0 = 0;
  local_4c = 0;
  local_54 = 0;
  local_78 = 0x80000000;
  local_40 = 0;
  local_44 = 8;
  local_48 = 0;
  local_ac = 0;
  local_68 = puVar5;
  FUN_006e10e8(&local_1a8,&local_1d8,&local_f4);
  FUN_00abfaf0(&local_1a8);
  puVar10 = (uint *)((uint)&local_1a8 | 4);
  *puVar10 = (uint)local_1d8;
  puVar10[1] = (uint)local_1d4;
  puVar10[2] = (uint)local_1d0;
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
  local_d8 = (uint *****)0x80000001;
  local_d4._0_4_ = (code *)(undefined4 ****)local_1a8;
  local_d4._4_4_ = (char *)local_1a8._4_4_;
  local_cc = uStack_1a0;
  local_c8._0_4_ = uStack_19c;
  local_c8._4_4_ = local_198;
  uStack_c0 = uStack_194;
  uStack_bc = local_190;
  iStack_b8 = iStack_18c;
  local_b4 = local_188;
  local_b0 = uStack_184;
  local_ac = iStack_180;
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
  local_94 = 0x33;
  local_a0 = 0;
  local_98 = "boser::web::graphql::bosminer::license::NoneLicense";
  local_9c = CONCAT31(local_9c._1_3_,1);
  iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),"NoneLicense"
                       ,0xb);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01c226c0);
  }
  FUN_00abf870();
  FUN_01bed4e2(iVar2,&local_e8,0xb0);
LAB_00acbaa8:
  local_1d8 = (char *****)&local_e8;
  local_e0._0_4_ = (undefined4 ****)0xb;
  local_1d4 = &LAB_012b97d8;
  local_e4 = "NoneLicense";
  local_e8 = (undefined4 *****)0x80000000;
  FUN_00664898(&local_1a8,&DAT_0057a667,&local_1d8);
  uVar16 = local_1a8;
  if (local_e8 != (undefined4 *****)0x80000000) {
    FUN_019bb7e0(local_e8,local_e4);
    uVar16 = local_1a8;
  }
  local_1a8._4_4_ = (uint)((ulonglong)uVar16 >> 0x20);
  local_1a8._0_4_ = (undefined4 ****)uVar16;
  FUN_019bb7e0((undefined4 ****)local_1a8,local_1a8._4_4_);
  local_1a8 = uVar16;
  local_1e9 = 1;
  local_1f4 = "boser::web::graphql::bosminer::license::LimitedLicense";
  local_1f0 = 0x36;
  local_1f8 = 0xe;
  local_1fc = (uint ****)0x4a26a0;
  iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_01be5118(0xe);
    if (iVar2 == 0) goto LAB_00acd224;
    FUN_01bed4e2(iVar2,"LimitedLicense",0xe);
    local_1d0 = (char *****)0xe;
    local_1d8 = (char *****)0xe;
    local_1d4 = (undefined1 *)iVar2;
    FUN_006a0cfc(&local_e8,1,"boser::web::graphql::bosminer::license::LimitedLicense",0x36);
    FUN_006c2a34(&local_1a8,puVar14,&local_1d8,&local_e8);
    if (local_198 != -0x7ffffffa) {
      FUN_00abf870(&local_1a8);
    }
    local_e0._0_4_ = (undefined4 ****)0xe;
    local_e8 = (undefined4 *****)0x80000000;
    local_e4 = "LimitedLicense";
    uVar12 = FUN_0160ec7c(local_1e8,&local_e8);
    uVar16 = thunk_FUN_01bee35a(uVar12,0x2c0);
    puVar10 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
    if ((char)puVar10[4] == '\0') {
      FUN_019ae6ac(&local_e8);
      *puVar10 = (uint)local_e8;
      puVar10[1] = (uint)local_e4;
      puVar10[2] = (uint)(undefined4 ****)local_e0;
      puVar10[3] = (uint)local_e0._4_4_;
      *(undefined1 *)(puVar10 + 4) = 1;
    }
    local_1d8 = (char *****)*puVar10;
    local_1d4 = (undefined1 *)puVar10[1];
    local_1d0 = (char *****)puVar10[2];
    uStack_1cc = puVar10[3];
    *puVar10 = (int)local_1d8 + 1;
    puVar10[1] = (int)local_1d4 + (uint)((uint ****)0xfffffffe < local_1d8);
    local_1c0 = 0;
    local_1c8 = 0;
    local_1c4 = 8;
    puStack_1bc = &DAT_0056d238;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(7);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,7);
    }
    *(undefined4 *)((int)puVar5 + 3) = 0x64657469;
    *puVar5 = 0x696d696c;
    local_ec = 7;
    local_f4 = 7;
    local_f0 = puVar5;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(7);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,7);
    }
    *(undefined4 *)((int)puVar5 + 3) = 0x64657469;
    *puVar5 = 0x696d696c;
    FUN_006e01d0(&local_1a8);
    FUN_006ded7c(&local_38,param_1);
    local_64 = 7;
    local_6c = 7;
    local_9c = 0x80000000;
    local_d8 = (uint *****)uStack_1a0;
    local_d4._0_4_ = (code *)uStack_19c;
    local_d4._4_4_ = (char *)local_198;
    local_cc = uStack_194;
    local_c8._0_4_ = local_190;
    local_c8._4_4_ = iStack_18c;
    uStack_c0 = local_188;
    uStack_bc = uStack_184;
    iStack_b8 = iStack_180;
    local_b4 = uStack_17c;
    local_60 = local_38;
    uStack_5c = uStack_34;
    uStack_58 = uStack_30;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_3c = 0;
    local_3b = 0;
    local_50 = 4;
    local_e8 = (undefined4 *****)0x0;
    local_84 = 0x80000000;
    local_90 = 0x80000000;
    local_b0 = 0;
    local_4c = 0;
    local_54 = 0;
    local_78 = 0x80000000;
    local_40 = 0;
    local_44 = 8;
    local_48 = 0;
    local_ac = 0;
    local_68 = puVar5;
    local_e0 = local_1a8;
    FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
    FUN_00abfaf0(&local_1a8);
    puVar10 = (uint *)((uint)&local_1a8 | 4);
    *puVar10 = (uint)local_1d8;
    puVar10[1] = (uint)local_1d4;
    puVar10[2] = (uint)local_1d0;
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
    local_d8 = (uint *****)0x80000001;
    local_cc = uStack_1a0;
    local_c8._0_4_ = uStack_19c;
    local_c8._4_4_ = local_198;
    uStack_c0 = uStack_194;
    uStack_bc = local_190;
    iStack_b8 = iStack_18c;
    local_b4 = local_188;
    local_b0 = uStack_184;
    local_ac = iStack_180;
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
    local_94 = 0x36;
    local_a0 = 0;
    local_98 = "boser::web::graphql::bosminer::license::LimitedLicense";
    local_9c = CONCAT31(local_9c._1_3_,1);
    local_d4 = local_1a8;
    iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                         "LimitedLicense",0xe);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar2,&local_e8,0xb0);
  }
  else {
    uVar16 = FUN_006a71d4();
    iVar7 = (int)((ulonglong)uVar16 >> 0x20);
    iVar3 = (int)uVar16;
    if (iVar3 != 0) {
      local_1a8 = uVar16;
      if (iVar7 == 0x36) {
        iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::license::LimitedLicense",iVar3,
                                   0x36);
        if (iVar3 != 0) goto LAB_00acbedc;
      }
      else {
        if (iVar7 == 0xd) {
          iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
          if (iVar3 == 0) goto LAB_00acbf10;
        }
LAB_00acbedc:
        iVar3 = FUN_015db690(param_1 + 0x20,"LimitedLicense",0xe);
        if (iVar3 == 0) goto LAB_00acd088;
      }
      uVar9 = 2;
      if ((int)*(uint *)(iVar2 + 0x10) < 0) {
        uVar9 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
      }
      if (uVar9 != 1) goto LAB_00acd1fc;
    }
  }
LAB_00acbf10:
  local_e0._0_4_ = (undefined4 ****)0xe;
  local_1d8 = (char *****)&local_e8;
  local_1d4 = &LAB_012b97d8;
  local_e4 = "LimitedLicense";
  local_e8 = (undefined4 *****)0x80000000;
  FUN_00664898(&local_1a8,&DAT_0057a667,&local_1d8);
  uVar16 = local_1a8;
  if (local_e8 != (undefined4 *****)0x80000000) {
    FUN_019bb7e0(local_e8,local_e4);
    uVar16 = local_1a8;
  }
  local_1a8._4_4_ = (uint)((ulonglong)uVar16 >> 0x20);
  local_1a8._0_4_ = (undefined4 ****)uVar16;
  FUN_019bb7e0((undefined4 ****)local_1a8,local_1a8._4_4_);
  local_1a8 = uVar16;
  local_1e9 = 1;
  local_1f4 = "boser::web::graphql::bosminer::license::ValidLicense";
  local_1f0 = 0x34;
  local_1f8 = 0xc;
  local_1fc = (uint ****)0x4a2680;
  iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_01be5118(0xc);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xc);
    }
    FUN_01bed4e2(iVar2,"ValidLicense",0xc);
    local_1d0 = (char *****)0xc;
    local_1d8 = (char *****)0xc;
    local_1d4 = (undefined1 *)iVar2;
    FUN_006a0cfc(&local_e8,1,"boser::web::graphql::bosminer::license::ValidLicense",0x34);
    FUN_006c2a34(&local_1a8,puVar14,&local_1d8,&local_e8);
    if (local_198 != -0x7ffffffa) {
      FUN_00abf870(&local_1a8);
    }
    local_e0._0_4_ = (undefined4 ****)0xc;
    local_e8 = (undefined4 *****)0x80000000;
    local_e4 = "ValidLicense";
    uVar12 = FUN_0160ec7c(local_1e8,&local_e8);
    uVar16 = thunk_FUN_01bee35a(uVar12,0x2c0);
    puVar10 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
    if ((char)puVar10[4] == '\0') {
      FUN_019ae6ac(&local_e8);
      *puVar10 = (uint)local_e8;
      puVar10[1] = (uint)local_e4;
      puVar10[2] = (uint)(undefined4 ****)local_e0;
      puVar10[3] = (uint)local_e0._4_4_;
      *(undefined1 *)(puVar10 + 4) = 1;
    }
    local_1d8 = (char *****)*puVar10;
    local_1d4 = (undefined1 *)puVar10[1];
    local_1d0 = (char *****)puVar10[2];
    uStack_1cc = puVar10[3];
    *puVar10 = (int)local_1d8 + 1;
    puVar10[1] = (int)local_1d4 + (uint)((uint ****)0xfffffffe < local_1d8);
    local_1c0 = 0;
    local_1c8 = 0;
    local_1c4 = 8;
    puStack_1bc = &DAT_0056d238;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uVar12 = 4;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar5 == (undefined4 *)0x0) {
LAB_00acd1dc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar12);
    }
    *puVar5 = 0x65707974;
    local_ec = 4;
    local_f4 = 4;
    local_f0 = puVar5;
    puVar5 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    *puVar5 = 0x65707974;
    FUN_006e01d0(&local_1a8);
    FUN_009e7438(&local_38,param_1);
    local_64 = 4;
    local_6c = 4;
    local_9c = 0x80000000;
    local_d8 = (uint *****)uStack_1a0;
    local_d4._0_4_ = (code *)uStack_19c;
    local_d4._4_4_ = (char *)local_198;
    local_cc = uStack_194;
    local_c8._0_4_ = local_190;
    local_c8._4_4_ = iStack_18c;
    uStack_c0 = local_188;
    uStack_bc = uStack_184;
    iStack_b8 = iStack_180;
    local_b4 = uStack_17c;
    local_60 = local_38;
    uStack_5c = uStack_34;
    uStack_58 = uStack_30;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_3c = 0;
    local_e8 = (undefined4 *****)0x0;
    local_3b = 0;
    local_84 = 0x80000000;
    local_90 = 0x80000000;
    local_b0 = 0;
    local_4c = 0;
    local_50 = 4;
    local_54 = 0;
    local_78 = 0x80000000;
    local_40 = 0;
    local_44 = 8;
    local_48 = 0;
    local_ac = 0;
    local_68 = puVar5;
    local_e0 = local_1a8;
    FUN_006e10e8(&local_1a8,&local_1d8,&local_f4);
    FUN_00abfaf0(&local_1a8);
    uVar12 = 0xc;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00acd1dc;
    FUN_01bed4e2(puVar5,"contractName",0xc);
    local_ec = 0xc;
    local_f4 = 0xc;
    local_f0 = puVar5;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xc);
    }
    FUN_01bed4e2(puVar5,"contractName",0xc);
    FUN_006e01d0(&local_1a8);
    FUN_006c86e0(&local_38,param_1);
    local_64 = 0xc;
    local_6c = 0xc;
    local_9c = 0x80000000;
    local_d8 = (uint *****)uStack_1a0;
    local_d4._0_4_ = (code *)uStack_19c;
    local_d4._4_4_ = (char *)local_198;
    local_cc = uStack_194;
    local_c8._0_4_ = local_190;
    local_c8._4_4_ = iStack_18c;
    uStack_c0 = local_188;
    uStack_bc = uStack_184;
    iStack_b8 = iStack_180;
    local_b4 = uStack_17c;
    local_60 = local_38;
    uStack_5c = uStack_34;
    uStack_58 = uStack_30;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_3c = 0;
    local_3b = 0;
    local_50 = 4;
    local_e8 = (undefined4 *****)0x0;
    local_84 = 0x80000000;
    local_90 = 0x80000000;
    local_b0 = 0;
    local_4c = 0;
    local_54 = 0;
    local_78 = 0x80000000;
    local_40 = 0;
    local_44 = 8;
    local_48 = 0;
    local_ac = 0;
    local_68 = puVar5;
    local_e0 = local_1a8;
    FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
    FUN_00abfaf0(&local_1a8);
    uVar12 = 0xb;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0xb);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00acd1dc;
    FUN_01bed4e2(puVar5,"devfeeRatio",0xb);
    local_ec = 0xb;
    local_f4 = 0xb;
    local_f0 = puVar5;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0xb);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xb);
    }
    FUN_01bed4e2(puVar5,"devfeeRatio",0xb);
    FUN_006e01d0(&local_1a8);
    FUN_006bdfbc(&local_38,param_1);
    local_64 = 0xb;
    local_6c = 0xb;
    local_9c = 0x80000000;
    local_d8 = (uint *****)uStack_1a0;
    local_d4._0_4_ = (code *)uStack_19c;
    local_d4._4_4_ = (char *)local_198;
    local_cc = uStack_194;
    local_c8._0_4_ = local_190;
    local_c8._4_4_ = iStack_18c;
    uStack_c0 = local_188;
    uStack_bc = uStack_184;
    iStack_b8 = iStack_180;
    local_b4 = uStack_17c;
    local_60 = local_38;
    uStack_5c = uStack_34;
    uStack_58 = uStack_30;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_3c = 0;
    local_3b = 0;
    local_50 = 4;
    local_e8 = (undefined4 *****)0x0;
    local_84 = 0x80000000;
    local_90 = 0x80000000;
    local_b0 = 0;
    local_4c = 0;
    local_54 = 0;
    local_78 = 0x80000000;
    local_40 = 0;
    local_44 = 8;
    local_48 = 0;
    local_ac = 0;
    local_68 = puVar5;
    local_e0 = local_1a8;
    FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
    FUN_00abfaf0(&local_1a8);
    uVar12 = 0x13;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0x13);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00acd1dc;
    FUN_01bed4e2(puVar5,"secondsToRestricted",0x13);
    local_ec = 0x13;
    local_f4 = 0x13;
    local_f0 = puVar5;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(0x13);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x13);
    }
    FUN_01bed4e2(puVar5,"secondsToRestricted",0x13);
    FUN_006e01d0(&local_1a8);
    FUN_006cd7c0(&local_38,param_1);
    local_64 = 0x13;
    local_6c = 0x13;
    local_9c = 0x80000000;
    uStack_5c = uStack_34;
    uStack_58 = uStack_30;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = 0x80000001;
    local_3c = 0;
    local_3b = 0;
    local_50 = 4;
    local_e8 = (undefined4 *****)0x0;
    local_84 = 0x80000000;
    local_90 = 0x80000000;
    local_b0 = 0;
    local_4c = 0;
    local_54 = 0;
    local_78 = 0x80000000;
    local_40 = 0;
    local_44 = 8;
    local_48 = 0;
    local_ac = 0;
    local_68 = puVar5;
    local_e0 = local_1a8;
    FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
    FUN_00abfaf0(&local_1a8);
    puVar10 = (uint *)((uint)&local_1a8 | 4);
    *puVar10 = (uint)local_1d8;
    puVar10[1] = (uint)local_1d4;
    puVar10[2] = (uint)local_1d0;
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
    local_d8 = (uint *****)0x80000001;
    local_cc = uStack_1a0;
    local_c8._0_4_ = uStack_19c;
    local_c8._4_4_ = local_198;
    uStack_c0 = uStack_194;
    uStack_bc = local_190;
    iStack_b8 = iStack_18c;
    local_b4 = local_188;
    local_b0 = uStack_184;
    local_ac = iStack_180;
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
    local_94 = 0x34;
    local_a0 = 0;
    local_98 = "boser::web::graphql::bosminer::license::ValidLicense";
    local_9c = CONCAT31(local_9c._1_3_,1);
    local_d4 = local_1a8;
    iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                         "ValidLicense",0xc);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar2,&local_e8,0xb0);
    uVar16 = local_d4;
  }
  else {
    uVar17 = FUN_006a71d4();
    iVar7 = (int)((ulonglong)uVar17 >> 0x20);
    iVar3 = (int)uVar17;
    uVar16 = local_d4;
    if (iVar3 != 0) {
      local_1a8 = uVar17;
      if (iVar7 == 0x34) {
        iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::license::ValidLicense",iVar3,0x34
                                  );
        uVar16 = local_d4;
        if (iVar3 != 0) goto LAB_00acc6e4;
      }
      else {
        if (iVar7 == 0xd) {
          iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
          uVar16 = local_d4;
          if (iVar3 == 0) goto LAB_00acc718;
        }
LAB_00acc6e4:
        iVar3 = FUN_015db690(param_1 + 0x20,"ValidLicense",0xc);
        uVar16 = local_d4;
        if (iVar3 == 0) goto LAB_00acd088;
      }
      local_d4._4_4_ = (char *)((ulonglong)uVar16 >> 0x20);
      uVar9 = 2;
      if ((int)*(uint *)(iVar2 + 0x10) < 0) {
        uVar9 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
      }
      if (uVar9 != 1) goto LAB_00acd1fc;
    }
  }
LAB_00acc718:
  local_e0._0_4_ = (undefined4 ****)0xc;
  local_1d4 = &LAB_012b97d8;
  local_e4 = "ValidLicense";
  local_e8 = (undefined4 *****)0x80000000;
  pppppuVar11 = (undefined4 *****)&local_1a8;
  pppppuVar13 = (uint *****)&local_1d8;
  local_1d8 = (char *****)&local_e8;
  local_d4 = uVar16;
  FUN_00664898(pppppuVar11,&DAT_0057a667,pppppuVar13);
  uVar16 = local_1a8;
  if (local_e8 != (undefined4 *****)0x80000000) {
    FUN_019bb7e0(local_e8,local_e4);
    uVar16 = local_1a8;
  }
  local_1a8._4_4_ = (uint)((ulonglong)uVar16 >> 0x20);
  local_1a8._0_4_ = (undefined4 ****)uVar16;
  FUN_019bb7e0((undefined4 ****)local_1a8,local_1a8._4_4_);
  local_1a8 = uVar16;
  local_1e9 = 1;
  local_1f4 = "boser::web::graphql::bosminer::license::ExpiredLicense";
  local_1f0 = 0x36;
  local_1f8 = 0xe;
  local_1fc = (uint ****)0x4a2690;
  iVar2 = FUN_006c176c(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_01be5118(0xe);
    if (iVar2 == 0) {
LAB_00acd224:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xe);
    }
    FUN_01bed4e2(iVar2,"ExpiredLicense",0xe);
    local_1d0 = (char *****)0xe;
    local_1d8 = (char *****)0xe;
    local_1d4 = (undefined1 *)iVar2;
    FUN_006a0cfc(&local_e8,1,"boser::web::graphql::bosminer::license::ExpiredLicense",0x36);
    FUN_006c2a34(&local_1a8,puVar14,&local_1d8,&local_e8);
    if (local_198 != -0x7ffffffa) {
      FUN_00abf870(&local_1a8);
    }
    local_e0._0_4_ = (undefined4 ****)0xe;
    local_e8 = (undefined4 *****)0x80000000;
    local_e4 = "ExpiredLicense";
    uVar12 = FUN_0160ec7c(local_1e8,&local_e8);
    uVar16 = thunk_FUN_01bee35a(uVar12,0x2c0);
    puVar10 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
    if ((char)puVar10[4] == '\0') {
      FUN_019ae6ac(&local_e8);
      *puVar10 = (uint)local_e8;
      puVar10[1] = (uint)local_e4;
      puVar10[2] = (uint)(undefined4 ****)local_e0;
      puVar10[3] = (uint)local_e0._4_4_;
      *(undefined1 *)(puVar10 + 4) = 1;
    }
    local_1d8 = (char *****)*puVar10;
    local_1d4 = (undefined1 *)puVar10[1];
    local_1d0 = (char *****)puVar10[2];
    uStack_1cc = puVar10[3];
    *puVar10 = (int)local_1d8 + 1;
    puVar10[1] = (int)local_1d4 + (uint)((uint ****)0xfffffffe < local_1d8);
    local_1c0 = 0;
    local_1c8 = 0;
    local_1c4 = 8;
    puStack_1bc = &DAT_0056d238;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uVar12 = 4;
    puVar14 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar14 != (undefined4 *)0x0) {
      *puVar14 = 0x65707974;
      local_ec = 4;
      local_f4 = 4;
      local_f0 = puVar14;
      puVar14 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      *puVar14 = 0x65707974;
      FUN_006e01d0(&local_1a8);
      FUN_009e7438(&local_38,param_1);
      local_64 = 4;
      local_6c = 4;
      local_9c = 0x80000000;
      local_d8 = (uint *****)uStack_1a0;
      local_d4._0_4_ = (code *)uStack_19c;
      local_d4._4_4_ = (char *)local_198;
      local_cc = uStack_194;
      local_c8._0_4_ = local_190;
      local_c8._4_4_ = iStack_18c;
      uStack_c0 = local_188;
      uStack_bc = uStack_184;
      iStack_b8 = iStack_180;
      local_b4 = uStack_17c;
      local_60 = local_38;
      uStack_5c = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_3c = 0;
      local_e8 = (undefined4 *****)0x0;
      local_3b = 0;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_b0 = 0;
      local_4c = 0;
      local_50 = 4;
      local_54 = 0;
      local_78 = 0x80000000;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = 0;
      local_68 = puVar14;
      local_e0 = local_1a8;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
      FUN_00abfaf0(&local_1a8);
      uVar12 = 0xc;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(0xc);
      if (puVar14 != (undefined4 *)0x0) {
        FUN_01bed4e2(puVar14,"contractName",0xc);
        local_ec = 0xc;
        local_f4 = 0xc;
        local_f0 = puVar14;
        puVar14 = (undefined4 *)thunk_FUN_01be5118(0xc);
        if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0xc);
        }
        FUN_01bed4e2(puVar14,"contractName",0xc);
        FUN_006e01d0(&local_1a8);
        FUN_006c86e0(&local_38,param_1);
        local_64 = 0xc;
        local_6c = 0xc;
        local_9c = 0x80000000;
        local_d8 = (uint *****)uStack_1a0;
        local_d4._0_4_ = (code *)uStack_19c;
        local_d4._4_4_ = (char *)local_198;
        local_cc = uStack_194;
        local_c8._0_4_ = local_190;
        local_c8._4_4_ = iStack_18c;
        uStack_c0 = local_188;
        uStack_bc = uStack_184;
        iStack_b8 = iStack_180;
        local_b4 = uStack_17c;
        local_60 = local_38;
        uStack_5c = uStack_34;
        uStack_58 = uStack_30;
        local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
        local_a8 = 0x80000001;
        local_3c = 0;
        local_3b = 0;
        local_50 = 4;
        local_e8 = (undefined4 *****)0x0;
        local_84 = 0x80000000;
        local_90 = 0x80000000;
        local_b0 = 0;
        local_4c = 0;
        local_54 = 0;
        local_78 = 0x80000000;
        local_40 = 0;
        local_44 = 8;
        local_48 = 0;
        local_ac = 0;
        local_68 = puVar14;
        local_e0 = local_1a8;
        FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
        FUN_00abfaf0(&local_1a8);
        uVar12 = 0xb;
        puVar14 = (undefined4 *)thunk_FUN_01be5118(0xb);
        if (puVar14 != (undefined4 *)0x0) {
          FUN_01bed4e2(puVar14,"devfeeRatio",0xb);
          local_ec = 0xb;
          local_f4 = 0xb;
          local_f0 = puVar14;
          puVar14 = (undefined4 *)thunk_FUN_01be5118(0xb);
          if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,0xb);
          }
          FUN_01bed4e2(puVar14,"devfeeRatio",0xb);
          FUN_006e01d0(&local_1a8);
          FUN_006bdfbc(&local_38,param_1);
          local_64 = 0xb;
          local_6c = 0xb;
          local_9c = 0x80000000;
          local_d8 = (uint *****)uStack_1a0;
          local_d4._0_4_ = (code *)uStack_19c;
          local_d4._4_4_ = (char *)local_198;
          local_cc = uStack_194;
          local_c8._0_4_ = local_190;
          local_c8._4_4_ = iStack_18c;
          uStack_c0 = local_188;
          uStack_bc = uStack_184;
          iStack_b8 = iStack_180;
          local_b4 = uStack_17c;
          local_60 = local_38;
          uStack_5c = uStack_34;
          uStack_58 = uStack_30;
          local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
          local_a8 = 0x80000001;
          local_3c = 0;
          local_3b = 0;
          local_50 = 4;
          local_e8 = (undefined4 *****)0x0;
          local_84 = 0x80000000;
          local_90 = 0x80000000;
          local_b0 = 0;
          local_4c = 0;
          local_54 = 0;
          local_78 = 0x80000000;
          local_40 = 0;
          local_44 = 8;
          local_48 = 0;
          local_ac = 0;
          local_68 = puVar14;
          local_e0 = local_1a8;
          FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
          FUN_00abfaf0(&local_1a8);
          puVar10 = (uint *)((uint)&local_1a8 | 4);
          *puVar10 = (uint)local_1d8;
          puVar10[1] = (uint)local_1d4;
          puVar10[2] = (uint)local_1d0;
          puVar10[3] = uStack_1cc;
          puVar10[4] = local_1c8;
          puVar10[5] = local_1c4;
          puVar10[6] = local_1c0;
          puVar10[7] = (uint)puStack_1bc;
          puVar10[8] = uStack_1b8;
          puVar10[9] = uStack_1b4;
          puVar10[10] = uStack_1b0;
          puVar10[0xb] = uStack_1ac;
          local_d8 = (uint *****)0x80000001;
          local_cc = uStack_1a0;
          local_c8._0_4_ = uStack_19c;
          local_c8._4_4_ = local_198;
          uStack_c0 = uStack_194;
          uStack_bc = local_190;
          iStack_b8 = iStack_18c;
          local_b4 = local_188;
          local_b0 = uStack_184;
          local_ac = iStack_180;
          local_a8 = uStack_17c;
          uStack_a4 = uStack_178;
          local_54 = 0;
          local_70 = 0;
          local_78 = 0;
          local_4c = local_4c & 0xffff0000;
          local_50 = 0x10000;
          local_60 = 0x80000000;
          local_6c = 0x80000000;
          local_74 = 8;
          local_80 = 4;
          local_7c = 0;
          local_84 = 0;
          local_94 = 0x36;
          local_a0 = 0;
          local_98 = "boser::web::graphql::bosminer::license::ExpiredLicense";
          local_9c = CONCAT31(local_9c._1_3_,1);
          local_d4 = local_1a8;
          iVar2 = FUN_006c4014(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
                               "ExpiredLicense",0xe);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01c226c0);
          }
          FUN_00abf870();
          FUN_01bed4e2(iVar2,&local_e8,0xb0);
          uVar16 = local_d4;
          goto LAB_00acce20;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar12);
  }
  uVar17 = FUN_006a71d4();
  iVar7 = (int)((ulonglong)uVar17 >> 0x20);
  iVar3 = (int)uVar17;
  uVar16 = local_d4;
  if (iVar3 == 0) goto LAB_00acce20;
  local_1a8 = uVar17;
  if (iVar7 == 0x36) {
    iVar3 = thunk_FUN_01bed842("boser::web::graphql::bosminer::license::ExpiredLicense",iVar3,0x36);
    uVar16 = local_d4;
    if (iVar3 != 0) goto LAB_00accdec;
  }
  else {
    if (iVar7 == 0xd) {
      iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
      uVar16 = local_d4;
      if (iVar3 == 0) goto LAB_00acce20;
    }
LAB_00accdec:
    iVar3 = FUN_015db690(param_1 + 0x20,"ExpiredLicense",0xe);
    uVar16 = local_d4;
    if (iVar3 == 0) {
      pppppuVar13 = &local_1fc;
      local_e0._0_4_ = (undefined4 ****)&local_1f4;
      puVar8 = &DAT_01c226d0;
      puVar6 = &DAT_00572c5c;
      local_e0._4_4_ = (code *)&DAT_0132b6a0;
      goto LAB_00acd1b8;
    }
  }
  local_d4._4_4_ = (char *)((ulonglong)uVar16 >> 0x20);
  uVar9 = 2;
  if ((int)*(uint *)(iVar2 + 0x10) < 0) {
    uVar9 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
  }
  if (uVar9 == 1) {
LAB_00acce20:
    local_e0._0_4_ = (undefined4 ****)0xe;
    local_e8 = (undefined4 *****)0x80000000;
    local_1d8 = (char *****)&local_e8;
    local_e4 = "ExpiredLicense";
    local_1d4 = &LAB_012b97d8;
    local_d4 = uVar16;
    FUN_00664898(&local_1a8,&DAT_0057a667,&local_1d8);
    uVar16 = local_1a8;
    if (local_e8 != (undefined4 *****)0x80000000) {
      FUN_019bb7e0(local_e8,local_e4);
      uVar16 = local_1a8;
    }
    local_1a8._4_4_ = (uint)((ulonglong)uVar16 >> 0x20);
    local_1a8._0_4_ = (undefined4 ****)uVar16;
    FUN_019bb7e0((undefined4 ****)local_1a8,local_1a8._4_4_);
    local_1a8 = uVar16;
    local_e0._0_4_ = (undefined4 ****)0xc;
    local_e4 = "LicenseState";
    local_e8 = (undefined4 *****)0x80000000;
    FUN_0160ec7c(&local_38,&local_e8);
    FUN_006e01d0(&local_1a8);
    local_e0._0_4_ = (undefined4 ****)0xb;
    local_e8 = (undefined4 *****)0x80000000;
    local_e4 = "NoneLicense";
    FUN_0160ec7c(&local_1d8,&local_e8);
    FUN_006dd1ec(&local_1a8,&local_1d8);
    local_e0._0_4_ = (undefined4 ****)0xe;
    local_e4 = "LimitedLicense";
    local_e8 = (undefined4 *****)0x80000000;
    FUN_0160ec7c(&local_1d8,&local_e8);
    FUN_006dd1ec(&local_1a8,&local_1d8);
    local_e0._0_4_ = (undefined4 ****)0xc;
    local_e4 = "ValidLicense";
    local_e8 = (undefined4 *****)0x80000000;
    FUN_0160ec7c(&local_1d8,&local_e8);
    FUN_006dd1ec(&local_1a8,&local_1d8);
    local_e4 = "ExpiredLicense";
    local_e0._0_4_ = (undefined4 ****)0xe;
    local_e8 = (undefined4 *****)0x80000000;
    FUN_0160ec7c(&local_1d8,&local_e8);
    FUN_006dd1ec(&local_1a8,&local_1d8);
    uStack_c0 = uStack_1a0;
    uStack_bc = uStack_19c;
    iStack_b8 = local_198;
    local_b4 = uStack_194;
    local_b0 = local_190;
    local_ac = iStack_18c;
    local_a8 = local_188;
    uStack_a4 = uStack_184;
    local_a0 = iStack_180;
    local_9c = uStack_17c;
    local_88 = local_38;
    local_84 = uStack_34;
    local_80 = uStack_30;
    local_6c = 8;
    local_78 = 4;
    local_64 = local_64 & 0xffffff00;
    local_68 = (undefined4 *)0x0;
    local_70 = 0;
    local_74 = 0;
    local_7c = 0;
    local_98 = (char *)0x0;
    local_94 = 0x80000000;
    local_cc = 0x34;
    local_d4._4_4_ = "boser::web::graphql::bosminer::license::LicenseState";
    local_d8 = (uint *****)0x80000003;
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
  pppppuVar11 = &local_1fc;
  puVar8 = &DAT_01c226e0;
  local_1d8 = (char *****)CONCAT31(local_1d8._1_3_,(char)uVar9);
  puVar6 = &DAT_005b5680;
  local_e0._4_4_ = FUN_006a7514;
  local_e0._0_4_ = (undefined4 ****)&local_1e9;
LAB_00acd1b8:
  local_e4 = (char *)&DAT_0132b6a0;
  local_e8 = pppppuVar11;
  local_d8 = pppppuVar13;
  local_d4._0_4_ = local_e0._4_4_;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar6,&local_e8,puVar8);
}

