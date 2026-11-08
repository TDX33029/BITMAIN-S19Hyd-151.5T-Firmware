// FUN_00a26b84 @ 00a26b84 size=2284 calls_out=24 calls_in=1
// strings: boser::web::graphql::bosminer::BosminerResult | BosminerResult | BosminerResult | __fake_type__ | BosminerResult | boser::web::graphql::bosminer::BosminerResult

void FUN_00a26b84(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  uint *puVar8;
  undefined4 ***pppuVar9;
  undefined4 *puVar10;
  int ***pppiVar11;
  undefined8 uVar12;
  int **local_210;
  undefined4 local_20c;
  char *local_208;
  undefined4 local_204;
  undefined1 local_1fd;
  int **local_1fc;
  undefined4 local_1f8;
  char *local_1f4;
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
  undefined4 ***local_e8;
  char *local_e4;
  char **local_e0;
  code *local_dc;
  int ***local_d8;
  undefined4 **local_d4;
  char *local_d0;
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
  
  local_1fd = 3;
  puVar10 = (undefined4 *)(param_2 + 0x40);
  local_208 = "boser::web::graphql::bosminer::BosminerResult";
  local_204 = 0x2d;
  local_20c = 0xe;
  local_210 = (int **)0x3ef6e0;
  iVar1 = FUN_006c176c(*puVar10,*(undefined4 *)(param_2 + 0x44),"BosminerResult",0xe);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_01be5118(0xe);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xe);
    }
    FUN_01bed4e2(iVar1,"BosminerResult",0xe);
    local_1d0 = 0xe;
    local_1d8 = (char ***)0xe;
    local_1d4 = (undefined1 *)iVar1;
    FUN_006a0cfc(&local_e8,3,"boser::web::graphql::bosminer::BosminerResult",0x2d);
    pppuVar9 = (undefined4 ***)&local_1a8;
    pppiVar11 = (int ***)&local_1d8;
    FUN_006c2a34(pppuVar9,puVar10,pppiVar11,&local_e8);
    if (local_198 != -0x7ffffffa) {
      FUN_00abf870(&local_1a8);
    }
    FUN_00a25388(&local_e8,param_2);
    FUN_019bb7e0(local_e8,local_e4);
    local_1e9 = 1;
    local_1f0 = 0x2c;
    local_1f4 = "boser::web::graphql::bosminer::BosminerError";
    local_1f8 = 0xd;
    local_1fc = (int **)0x3eb540;
    iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_01be5118(0xd);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xd);
      }
      FUN_01bed4e2(iVar1,"BosminerErrorSUCCESSWARNING",0xd);
      local_1d0 = 0xd;
      local_1d8 = (char ***)0xd;
      local_1d4 = (undefined1 *)iVar1;
      FUN_006a0cfc(&local_e8,1,"boser::web::graphql::bosminer::BosminerError",0x2c);
      FUN_006c2a34(&local_1a8,puVar10,&local_1d8,&local_e8);
      if (local_198 != -0x7ffffffa) {
        FUN_00abf870(&local_1a8);
      }
      local_e0 = (char **)0xd;
      local_e8 = (undefined4 ***)0x80000000;
      local_e4 = "BosminerErrorSUCCESSWARNING";
      uVar3 = FUN_0160ec7c(local_1e8,&local_e8);
      uVar12 = thunk_FUN_01bee35a(uVar3,0x2c0);
      puVar8 = (uint *)((int)uVar12 + (int)((ulonglong)uVar12 >> 0x20));
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
      puVar8[1] = (int)local_1d4 + (uint)((int **)0xfffffffe < local_1d8);
      local_1c0 = 0;
      local_1c8 = 0;
      local_1c4 = 8;
      puStack_1bc = &DAT_0056d238;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      local_f0 = (undefined4 *)thunk_FUN_01be5118(7);
      if (local_f0 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      *(undefined4 *)((int)local_f0 + 3) = 0x65676173;
      *local_f0 = 0x7373656d;
      local_ec = 7;
      local_f4 = 7;
      puVar10 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      *(undefined4 *)((int)puVar10 + 3) = 0x65676173;
      *puVar10 = 0x7373656d;
      FUN_006e01d0(&local_1a8);
      FUN_006c86e0(&local_38,param_2);
      local_64 = 7;
      local_6c = 7;
      local_9c = 0x80000000;
      local_e0 = (char **)(undefined4 **)local_1a8;
      local_dc = (code *)local_1a8._4_4_;
      local_d8 = (int ***)uStack_1a0;
      local_d4 = (undefined4 **)uStack_19c;
      local_d0 = (char *)local_198;
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
      local_50 = 4;
      local_3c = 0;
      local_e8 = (undefined4 ***)0x0;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_3b = 0;
      local_b0 = 0;
      local_4c = 0;
      local_54 = 0;
      local_78 = 0x80000000;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = 0;
      local_68 = puVar10;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4);
      FUN_00abfaf0(&local_1a8);
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
      local_d8 = (int ***)0x80000001;
      local_d4 = (undefined4 **)local_1a8;
      local_d0 = local_1a8._4_4_;
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
      local_94 = 0x2c;
      local_a0 = 0;
      local_98 = "boser::web::graphql::bosminer::BosminerError";
      local_9c = CONCAT31(local_9c._1_3_,1);
      iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                           "BosminerErrorSUCCESSWARNING",0xd);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar1,&local_e8,0xb0);
    }
    else {
      uVar12 = FUN_006a71d4();
      iVar5 = (int)((ulonglong)uVar12 >> 0x20);
      iVar2 = (int)uVar12;
      if (iVar2 != 0) {
        local_1a8 = uVar12;
        if (iVar5 == 0x2c) {
          iVar2 = thunk_FUN_01bed842("boser::web::graphql::bosminer::BosminerError",iVar2,0x2c);
          if (iVar2 != 0) goto LAB_00a27110;
        }
        else {
          if (iVar5 == 0xd) {
            iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
            if (iVar2 == 0) goto LAB_00a27144;
          }
LAB_00a27110:
          iVar2 = FUN_015db690(param_2 + 0x20,"BosminerErrorSUCCESSWARNING",0xd);
          if (iVar2 == 0) {
            pppiVar11 = &local_1fc;
            local_e0 = &local_1f4;
            puVar7 = &DAT_01c226d0;
            puVar4 = &DAT_00572c5c;
            local_dc = (code *)&DAT_0132b6a0;
            goto LAB_00a273fc;
          }
        }
        uVar6 = 2;
        if ((int)*(uint *)(iVar1 + 0x10) < 0) {
          uVar6 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
        }
        if (uVar6 != 1) {
          pppuVar9 = &local_1fc;
          puVar7 = &DAT_01c226e0;
          local_1d8 = (char ***)CONCAT31(local_1d8._1_3_,(char)uVar6);
          puVar4 = &DAT_005b5680;
          local_dc = FUN_006a7514;
          local_e0 = (char **)&local_1e9;
LAB_00a273fc:
          local_e4 = (char *)&DAT_0132b6a0;
          local_e8 = pppuVar9;
          local_d8 = pppiVar11;
          local_d4 = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar4,&local_e8,puVar7);
        }
      }
    }
LAB_00a27144:
    local_e0 = (char **)0xd;
    local_e8 = (undefined4 ***)0x80000000;
    local_e4 = "BosminerErrorSUCCESSWARNING";
    local_1d4 = &LAB_012b97d8;
    local_1d8 = (char ***)&local_e8;
    FUN_00664898(&local_1a8,&DAT_0057a667,&local_1d8);
    uVar12 = local_1a8;
    if (local_e8 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_e8,local_e4);
      uVar12 = local_1a8;
    }
    local_1a8._4_4_ = (char *)((ulonglong)uVar12 >> 0x20);
    local_1a8._0_4_ = (undefined4 **)uVar12;
    FUN_019bb7e0((undefined4 **)local_1a8,local_1a8._4_4_);
    local_1a8 = uVar12;
    local_e0 = (char **)0xe;
    local_e4 = "BosminerResult";
    local_e8 = (undefined4 ***)0x80000000;
    FUN_0160ec7c(&local_38,&local_e8);
    FUN_006e01d0(&local_1a8);
    local_e0 = (char **)0xa;
    local_e4 = "VoidResultevent open/boser/boser/src/metrics_scraper/filter.rs:423";
    local_e8 = (undefined4 ***)0x80000000;
    FUN_0160ec7c(&local_1d8,&local_e8);
    FUN_006dd1ec(&local_1a8,&local_1d8);
    local_e4 = "BosminerErrorSUCCESSWARNING";
    local_e0 = (char **)0xd;
    local_e8 = (undefined4 ***)0x80000000;
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
    local_cc = 0x2d;
    local_d8 = (int ***)0x80000003;
    local_d0 = "boser::web::graphql::bosminer::BosminerResult";
    local_c8 = local_1a8;
    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                         "BosminerResult",0xe);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar1,&local_e8,0xb0);
    goto LAB_00a272fc;
  }
  uVar12 = FUN_006a71d4();
  iVar5 = (int)((ulonglong)uVar12 >> 0x20);
  iVar2 = (int)uVar12;
  if (iVar2 == 0) goto LAB_00a272fc;
  local_1a8 = uVar12;
  if (iVar5 == 0x2d) {
    iVar2 = thunk_FUN_01bed842("boser::web::graphql::bosminer::BosminerResult",iVar2,0x2d);
    if (iVar2 != 0) goto LAB_00a27090;
  }
  else {
    if (iVar5 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00a272fc;
    }
LAB_00a27090:
    iVar2 = FUN_015db690(param_2 + 0x20,"BosminerResult",0xe);
    if (iVar2 == 0) {
      local_d8 = &local_210;
      puVar7 = &DAT_01c226d0;
      puVar4 = &DAT_00572c5c;
      local_e0 = &local_208;
      local_dc = (code *)&DAT_0132b6a0;
      local_e8 = (undefined4 ***)&local_1a8;
      goto LAB_00a2738c;
    }
  }
  uVar6 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar6 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar6 == 3) {
LAB_00a272fc:
    local_e0 = (char **)0xe;
    local_e8 = (undefined4 ***)0x80000000;
    local_1d8 = (char ***)&local_e8;
    local_e4 = "BosminerResult";
    local_1d4 = &LAB_012b97d8;
    FUN_00664898(&local_1a8,&DAT_0057a667,&local_1d8);
    if (local_e8 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_e8,local_e4);
    }
    *param_1 = local_1a8;
    *(undefined4 *)(param_1 + 1) = uStack_1a0;
    return;
  }
  local_d8 = (int ***)&local_1d8;
  local_e0 = (char **)&local_1fd;
  puVar7 = &DAT_01c226e0;
  local_1d8 = (char ***)CONCAT31(local_1d8._1_3_,(char)uVar6);
  puVar4 = &DAT_005b5680;
  local_dc = FUN_006a7514;
  local_e8 = &local_210;
LAB_00a2738c:
  local_e4 = (char *)&DAT_0132b6a0;
  local_d4 = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar4,&local_e8,puVar7);
}

