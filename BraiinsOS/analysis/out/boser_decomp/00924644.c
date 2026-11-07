// FUN_00924644 @ 00924644 size=2180 calls_out=23 calls_in=3
// strings: boser::web::graphql::bosminer::configurator::PoolRecordError | __fake_type__ | boser::web::graphql::bosminer::configurator::PoolRecordError | invalidUrl | invalidUrl | invalidUser

void FUN_00924644(undefined4 param_1,int param_2)

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
  uint local_1fc [2];
  char *local_1f4;
  undefined4 local_1f0;
  undefined1 local_1e9;
  undefined1 local_1e8 [16];
  uint local_1d8;
  uint local_1d4;
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
  uint uStack_19c;
  uint local_198;
  undefined4 uStack_194;
  uint local_190;
  uint uStack_18c;
  undefined4 local_188;
  uint uStack_184;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_f4;
  undefined4 *local_f0;
  undefined4 local_ec;
  uint *local_e8;
  undefined2 *local_e4;
  char **local_e0;
  code *local_dc;
  uint *local_d8;
  code *local_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  uint local_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined4 local_b4;
  uint local_b0;
  uint local_ac;
  undefined4 local_a8;
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
  local_1f4 = "boser::web::graphql::bosminer::configurator::PoolRecordError";
  local_1f0 = 0x3c;
  local_1fc[1] = 0xf;
  local_1fc[0] = 0x3e8160;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_01be5118(0xf);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xf);
    }
    FUN_01bed4e2(iVar1,0x3e8160,0xf);
    local_1d0 = 0xf;
    local_1d8 = 0xf;
    local_1d4 = iVar1;
    FUN_006a0cfc(&local_e8,1,"boser::web::graphql::bosminer::configurator::PoolRecordError",0x3c);
    FUN_006c2a34(&local_1a8,(undefined4 *)(param_2 + 0x40),&local_1d8,&local_e8);
    if (local_198 != 0x80000006) {
      FUN_00abf870(&local_1a8);
    }
    local_e0 = (char **)0xf;
    local_e8 = (uint *)0x80000000;
    local_e4 = (undefined2 *)0x3e8160;
    uVar3 = FUN_0160ec7c(local_1e8,&local_e8);
    uVar10 = thunk_FUN_01bee35a(uVar3,0x2c0);
    puVar9 = (uint *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
    if ((char)puVar9[4] == '\0') {
      FUN_019ae6ac(&local_e8);
      *puVar9 = (uint)local_e8;
      puVar9[1] = (uint)local_e4;
      puVar9[2] = (uint)local_e0;
      puVar9[3] = (uint)local_dc;
      *(undefined1 *)(puVar9 + 4) = 1;
    }
    local_1d8 = *puVar9;
    local_1d4 = puVar9[1];
    local_1d0 = puVar9[2];
    uStack_1cc = puVar9[3];
    *puVar9 = local_1d8 + 1;
    puVar9[1] = local_1d4 + (0xfffffffe < local_1d8);
    local_1c0 = 0;
    local_1c8 = 0;
    local_1c4 = 8;
    puStack_1bc = &DAT_0056d238;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uVar3 = 5;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(5);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar4 + 1) = 0x78;
      *puVar4 = 0x65646e69;
      local_ec = 5;
      local_f4 = 5;
      local_f0 = puVar4;
      puVar4 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,5);
      }
      *(undefined1 *)(puVar4 + 1) = 0x78;
      *puVar4 = 0x65646e69;
      FUN_006e01d0(&local_1a8);
      FUN_00b65a04(&local_38,param_2);
      local_64 = 5;
      local_6c = 5;
      local_9c = 0x80000000;
      local_e0 = (char **)(uint)local_1a8;
      local_dc = (code *)local_1a8._4_4_;
      local_d8 = (uint *)uStack_1a0;
      local_d4 = (code *)uStack_19c;
      uStack_d0 = local_198;
      uStack_cc = uStack_194;
      local_c8 = local_190;
      local_c4 = uStack_18c;
      uStack_c0 = local_188;
      uStack_bc = uStack_184;
      uStack_b8 = uStack_180;
      local_b4 = uStack_17c;
      local_60 = local_38;
      uStack_5c = uStack_34;
      uStack_58 = uStack_30;
      local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_50 = 4;
      local_3c = 0;
      local_e8 = (uint *)0x0;
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
      local_68 = puVar4;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4);
      FUN_00abfaf0(&local_1a8);
      uVar3 = 7;
      puVar4 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined4 *)((int)puVar4 + 3) = 0x65676173;
        *puVar4 = 0x7373656d;
        local_ec = 7;
        local_f4 = 7;
        local_f0 = puVar4;
        puVar4 = (undefined4 *)thunk_FUN_01be5118();
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,7);
        }
        *(undefined4 *)((int)puVar4 + 3) = 0x65676173;
        *puVar4 = 0x7373656d;
        FUN_006e01d0(&local_1a8);
        FUN_006c86e0(&local_38,param_2);
        local_64 = 7;
        local_6c = 7;
        local_9c = 0x80000000;
        local_e0 = (char **)(uint)local_1a8;
        local_dc = (code *)local_1a8._4_4_;
        local_d8 = (uint *)uStack_1a0;
        local_d4 = (code *)uStack_19c;
        uStack_d0 = local_198;
        uStack_cc = uStack_194;
        local_c8 = local_190;
        local_c4 = uStack_18c;
        uStack_c0 = local_188;
        uStack_bc = uStack_184;
        uStack_b8 = uStack_180;
        local_b4 = uStack_17c;
        local_60 = local_38;
        uStack_5c = uStack_34;
        uStack_58 = uStack_30;
        local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
        local_a8 = 0x80000001;
        local_3c = 0;
        local_3b = 0;
        local_50 = 4;
        local_e8 = (uint *)0x0;
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
        local_68 = puVar4;
        FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
        FUN_00abfaf0(&local_1a8);
        uVar3 = 10;
        puVar4 = (undefined4 *)thunk_FUN_01be5118(10);
        if (puVar4 != (undefined4 *)0x0) {
          FUN_01bed4e2(puVar4,"invalidUrl",10);
          local_ec = 10;
          local_f4 = 10;
          local_f0 = puVar4;
          puVar4 = (undefined4 *)thunk_FUN_01be5118(10);
          if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,10);
          }
          FUN_01bed4e2(puVar4,"invalidUrl",10);
          FUN_006e01d0(&local_1a8);
          FUN_006c05b8(&local_38,param_2);
          local_64 = 10;
          local_6c = 10;
          local_9c = 0x80000000;
          local_e0 = (char **)(uint)local_1a8;
          local_dc = (code *)local_1a8._4_4_;
          local_d8 = (uint *)uStack_1a0;
          local_d4 = (code *)uStack_19c;
          uStack_d0 = local_198;
          uStack_cc = uStack_194;
          local_c8 = local_190;
          local_c4 = uStack_18c;
          uStack_c0 = local_188;
          uStack_bc = uStack_184;
          uStack_b8 = uStack_180;
          local_b4 = uStack_17c;
          local_60 = local_38;
          uStack_5c = uStack_34;
          uStack_58 = uStack_30;
          local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
          local_a8 = 0x80000001;
          local_3c = 0;
          local_3b = 0;
          local_50 = 4;
          local_e8 = (uint *)0x0;
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
          local_68 = puVar4;
          FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
          FUN_00abfaf0(&local_1a8);
          uVar3 = 0xb;
          puVar4 = (undefined4 *)thunk_FUN_01be5118(0xb);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_01bed4e2(puVar4,"invalidUser",0xb);
            local_ec = 0xb;
            local_f4 = 0xb;
            local_f0 = puVar4;
            puVar4 = (undefined4 *)thunk_FUN_01be5118(0xb);
            if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(1,0xb);
            }
            FUN_01bed4e2(puVar4,"invalidUser",0xb);
            FUN_006e01d0(&local_1a8);
            FUN_006c05b8(&local_38,param_2);
            local_64 = 0xb;
            local_6c = 0xb;
            local_9c = 0x80000000;
            local_e0 = (char **)(uint)local_1a8;
            local_dc = (code *)local_1a8._4_4_;
            local_d8 = (uint *)uStack_1a0;
            local_d4 = (code *)uStack_19c;
            uStack_d0 = local_198;
            uStack_cc = uStack_194;
            local_c8 = local_190;
            local_c4 = uStack_18c;
            uStack_c0 = local_188;
            uStack_bc = uStack_184;
            uStack_b8 = uStack_180;
            local_b4 = uStack_17c;
            local_60 = local_38;
            uStack_5c = uStack_34;
            uStack_58 = uStack_30;
            local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
            local_a8 = 0x80000001;
            local_3c = 0;
            local_3b = 0;
            local_50 = 4;
            local_e8 = (uint *)0x0;
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
            local_68 = puVar4;
            FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
            FUN_00abfaf0(&local_1a8);
            puVar9 = (uint *)((uint)&local_1a8 | 4);
            *puVar9 = local_1d8;
            puVar9[1] = local_1d4;
            puVar9[2] = local_1d0;
            puVar9[3] = uStack_1cc;
            puVar9[4] = local_1c8;
            puVar9[5] = local_1c4;
            puVar9[6] = local_1c0;
            puVar9[7] = (uint)puStack_1bc;
            puVar9[8] = uStack_1b8;
            puVar9[9] = uStack_1b4;
            puVar9[10] = uStack_1b0;
            puVar9[0xb] = uStack_1ac;
            local_d8 = (uint *)0x80000001;
            local_d4 = (code *)(uint)local_1a8;
            uStack_d0 = local_1a8._4_4_;
            uStack_cc = uStack_1a0;
            local_c8 = uStack_19c;
            local_c4 = local_198;
            uStack_c0 = uStack_194;
            uStack_bc = local_190;
            uStack_b8 = uStack_18c;
            local_b4 = local_188;
            local_b0 = uStack_184;
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
            local_94 = 0x3c;
            local_a0 = 0;
            local_98 = "boser::web::graphql::bosminer::configurator::PoolRecordError";
            local_9c = CONCAT31(local_9c._1_3_,1);
            iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                                 0x3e8160,0xf);
            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01c226c0);
            }
            FUN_00abf870();
            FUN_01bed4e2(iVar1,&local_e8,0xb0);
            goto LAB_00924dcc;
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
  if (iVar2 == 0) goto LAB_00924dcc;
  local_1a8 = uVar10;
  if (iVar6 == 0x3c) {
    iVar2 = thunk_FUN_01bed842("boser::web::graphql::bosminer::configurator::PoolRecordError",iVar2,
                               0x3c);
    if (iVar2 != 0) goto LAB_00924d98;
  }
  else {
    if (iVar6 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00924dcc;
    }
LAB_00924d98:
    iVar2 = FUN_015db690(param_2 + 0x20,0x3e8160,0xf);
    if (iVar2 == 0) {
      local_d8 = local_1fc;
      puVar8 = &DAT_01c226d0;
      puVar5 = &DAT_00572c5c;
      local_e0 = &local_1f4;
      local_dc = (code *)&DAT_0132b6a0;
      local_e8 = (uint *)&local_1a8;
      goto LAB_00924e34;
    }
  }
  uVar7 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar7 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar7 == 1) {
LAB_00924dcc:
    FUN_0093e398(param_1);
    return;
  }
  local_d8 = &local_1d8;
  local_e0 = (char **)&local_1e9;
  puVar8 = &DAT_01c226e0;
  local_1d8 = CONCAT31(local_1d8._1_3_,(char)uVar7);
  puVar5 = &DAT_005b5680;
  local_dc = FUN_006a7514;
  local_e8 = local_1fc;
LAB_00924e34:
  local_e4 = &DAT_0132b6a0;
  local_d4 = local_dc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar5,&local_e8,puVar8);
}

