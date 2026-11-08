// FUN_00922ae8 @ 00922ae8 size=2360 calls_out=25 calls_in=1
// strings: boser::web::graphql::bosminer::configurator::PoolListResult | __fake_type__ | boser::web::graphql::bosminer::configurator::PoolListResult | boser::web::graphql::bosminer::configurator::PoolList | __fake_type__ | boser::web::graphql::bosminer::configurator::PoolList

void FUN_00922ae8(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 ***pppuVar9;
  uint *puVar10;
  int ***pppiVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
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
  undefined4 ***local_1d8;
  undefined4 *local_1d4;
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
  puVar12 = (undefined4 *)(param_2 + 0x40);
  local_208 = "boser::web::graphql::bosminer::configurator::PoolListResult";
  local_204 = 0x3b;
  local_20c = 0xe;
  local_210 = (int **)0x3e8150;
  iVar1 = FUN_006c176c(*puVar12,*(undefined4 *)(param_2 + 0x44),0x3e8150,0xe);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_01be5118(0xe);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xe);
    }
    FUN_01bed4e2(iVar1,0x3e8150,0xe);
    local_1d0 = 0xe;
    local_1d8 = (undefined4 ***)0xe;
    local_1d4 = (undefined4 *)iVar1;
    FUN_006a0cfc(&local_e8,3,"boser::web::graphql::bosminer::configurator::PoolListResult",0x3b);
    pppuVar9 = (undefined4 ***)&local_1a8;
    pppiVar11 = (int ***)&local_1d8;
    FUN_006c2a34(pppuVar9,puVar12,pppiVar11,&local_e8);
    if (local_198 != -0x7ffffffa) {
      FUN_00abf870(&local_1a8);
    }
    local_1e9 = 1;
    local_1f0 = 0x35;
    local_1f4 = "boser::web::graphql::bosminer::configurator::PoolList";
    local_1f8 = 8;
    local_1fc = (int **)&DAT_00570ed8;
    iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
    if (iVar1 == 0) {
      puVar3 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,8);
      }
      puVar3[1] = 0x7473694c;
      *puVar3 = 0x6c6f6f50;
      local_1d0 = 8;
      local_1d8 = (undefined4 ***)0x8;
      local_1d4 = puVar3;
      FUN_006a0cfc(&local_e8,1,"boser::web::graphql::bosminer::configurator::PoolList",0x35);
      FUN_006c2a34(&local_1a8,puVar12,&local_1d8,&local_e8);
      if (local_198 != -0x7ffffffa) {
        FUN_00abf870(&local_1a8);
      }
      local_e8 = (undefined4 ***)0x80000000;
      local_e0 = (char **)0x8;
      local_e4 = &DAT_00570ed8;
      uVar4 = FUN_0160ec7c(local_1e8,&local_e8);
      uVar13 = thunk_FUN_01bee35a(uVar4,0x2c0);
      puVar10 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
      if ((char)puVar10[4] == '\0') {
        FUN_019ae6ac(&local_e8);
        *puVar10 = (uint)local_e8;
        puVar10[1] = (uint)local_e4;
        puVar10[2] = (uint)local_e0;
        puVar10[3] = (uint)local_dc;
        *(undefined1 *)(puVar10 + 4) = 1;
      }
      local_1d8 = (undefined4 ***)*puVar10;
      local_1d4 = (undefined4 *)puVar10[1];
      local_1d0 = puVar10[2];
      uStack_1cc = puVar10[3];
      local_1c4 = 8;
      *puVar10 = (int)local_1d8 + 1;
      puVar10[1] = (int)local_1d4 + (uint)((int **)0xfffffffe < local_1d8);
      local_1c0 = 0;
      local_1c8 = 0;
      puStack_1bc = &DAT_0056d238;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      local_f0 = (undefined4 *)thunk_FUN_01be5118(5);
      if (local_f0 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,5);
      }
      *(undefined1 *)(local_f0 + 1) = 0x73;
      *local_f0 = 0x6c6f6f70;
      local_ec = 5;
      local_f4 = 5;
      puVar12 = (undefined4 *)thunk_FUN_01be5118(5);
      if (puVar12 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,5);
      }
      *(undefined1 *)(puVar12 + 1) = 0x73;
      *puVar12 = 0x6c6f6f70;
      FUN_006e01d0(&local_1a8);
      FUN_00b553cc(&local_38,param_2);
      local_64 = 5;
      local_6c = 5;
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
      local_68 = puVar12;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4);
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
      local_94 = 0x35;
      local_a0 = 0;
      local_98 = "boser::web::graphql::bosminer::configurator::PoolList";
      local_9c = CONCAT31(local_9c._1_3_,1);
      iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                           &DAT_00570ed8,8);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar1,&local_e8,0xb0);
    }
    else {
      uVar13 = FUN_006a71d4();
      iVar6 = (int)((ulonglong)uVar13 >> 0x20);
      iVar2 = (int)uVar13;
      if (iVar2 != 0) {
        local_1a8 = uVar13;
        if (iVar6 == 0x35) {
          iVar2 = thunk_FUN_01bed842("boser::web::graphql::bosminer::configurator::PoolList",iVar2,
                                     0x35);
          if (iVar2 != 0) goto LAB_00923064;
        }
        else {
          if (iVar6 == 0xd) {
            iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
            if (iVar2 == 0) goto LAB_00923098;
          }
LAB_00923064:
          iVar2 = FUN_015db690(param_2 + 0x20,&DAT_00570ed8,8);
          if (iVar2 == 0) {
            pppiVar11 = &local_1fc;
            local_e0 = &local_1f4;
            puVar8 = &DAT_01c226d0;
            puVar5 = &DAT_00572c5c;
            local_dc = (code *)&DAT_0132b6a0;
            goto LAB_009233ac;
          }
        }
        uVar7 = 2;
        if ((int)*(uint *)(iVar1 + 0x10) < 0) {
          uVar7 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
        }
        if (uVar7 != 1) {
          pppuVar9 = &local_1fc;
          puVar8 = &DAT_01c226e0;
          local_1d8 = (undefined4 ***)CONCAT31(local_1d8._1_3_,(char)uVar7);
          puVar5 = &DAT_005b5680;
          local_dc = FUN_006a7514;
          local_e0 = (char **)&local_1e9;
LAB_009233ac:
          local_e4 = (char *)&DAT_0132b6a0;
          local_e8 = pppuVar9;
          local_d8 = pppiVar11;
          local_d4 = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar5,&local_e8,puVar8);
        }
      }
    }
LAB_00923098:
    local_e0 = (char **)0x8;
    local_e8 = (undefined4 ***)0x80000000;
    local_1d8 = &local_e8;
    local_e4 = &DAT_00570ed8;
    local_1d4 = (undefined4 *)&LAB_012b97d8;
    FUN_00664898(&local_1a8,&DAT_0057a667,&local_1d8);
    uVar13 = local_1a8;
    if (local_e8 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_e8,local_e4);
      uVar13 = local_1a8;
    }
    local_1a8._4_4_ = (char *)((ulonglong)uVar13 >> 0x20);
    local_1a8._0_4_ = (undefined4 **)uVar13;
    FUN_019bb7e0((undefined4 **)local_1a8,local_1a8._4_4_);
    local_1a8 = uVar13;
    FUN_00921384(&local_e8,param_2);
    FUN_019bb7e0(local_e8,local_e4);
    FUN_00ab9820(&local_e8,param_2);
    FUN_019bb7e0(local_e8,local_e4);
    local_e0 = (char **)0xe;
    local_e4 = "PoolListResult";
    local_e8 = (undefined4 ***)0x80000000;
    FUN_0160ec7c(&local_38,&local_e8);
    FUN_006e01d0(&local_1a8);
    local_e4 = &DAT_00570ed8;
    local_e0 = (char **)0x8;
    local_e8 = (undefined4 ***)0x80000000;
    FUN_0160ec7c(&local_1d8,&local_e8);
    FUN_006dd1ec(&local_1a8,&local_1d8);
    local_e0 = (char **)0xd;
    local_e4 = "PoolListError";
    local_e8 = (undefined4 ***)0x80000000;
    FUN_0160ec7c(&local_1d8,&local_e8);
    FUN_006dd1ec(&local_1a8,&local_1d8);
    local_e0 = (char **)0xe;
    local_e4 = "AttributeError";
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
    local_cc = 0x3b;
    local_d8 = (int ***)0x80000003;
    local_d0 = "boser::web::graphql::bosminer::configurator::PoolListResult";
    local_c8 = local_1a8;
    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),0x3e8150,
                         0xe);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar1,&local_e8,0xb0);
    goto LAB_009232ac;
  }
  uVar13 = FUN_006a71d4();
  iVar6 = (int)((ulonglong)uVar13 >> 0x20);
  iVar2 = (int)uVar13;
  if (iVar2 == 0) goto LAB_009232ac;
  local_1a8 = uVar13;
  if (iVar6 == 0x3b) {
    iVar2 = thunk_FUN_01bed842("boser::web::graphql::bosminer::configurator::PoolListResult",iVar2,
                               0x3b);
    if (iVar2 != 0) goto LAB_00922fe4;
  }
  else {
    if (iVar6 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_009232ac;
    }
LAB_00922fe4:
    iVar2 = FUN_015db690(param_2 + 0x20,0x3e8150,0xe);
    if (iVar2 == 0) {
      local_d8 = &local_210;
      puVar8 = &DAT_01c226d0;
      puVar5 = &DAT_00572c5c;
      local_e0 = &local_208;
      local_dc = (code *)&DAT_0132b6a0;
      local_e8 = (undefined4 ***)&local_1a8;
      goto LAB_0092333c;
    }
  }
  uVar7 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar7 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar7 == 3) {
LAB_009232ac:
    local_e0 = (char **)0xe;
    local_e8 = (undefined4 ***)0x80000000;
    local_1d8 = &local_e8;
    local_e4 = "PoolListResult";
    local_1d4 = (undefined4 *)&LAB_012b97d8;
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
  puVar8 = &DAT_01c226e0;
  local_1d8 = (undefined4 ***)CONCAT31(local_1d8._1_3_,(char)uVar7);
  puVar5 = &DAT_005b5680;
  local_dc = FUN_006a7514;
  local_e8 = &local_210;
LAB_0092333c:
  local_e4 = (char *)&DAT_0132b6a0;
  local_d4 = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar5,&local_e8,puVar8);
}

