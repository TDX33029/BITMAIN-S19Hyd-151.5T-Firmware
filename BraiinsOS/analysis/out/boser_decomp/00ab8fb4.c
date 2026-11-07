// FUN_00ab8fb4 @ 00ab8fb4 size=1668 calls_out=22 calls_in=2
// strings: boser::web::graphql::error::IoError | IoErrorInvalidFieldInvalidInterfaceIdInvalidTsResolutionTimestampTooBig | IoErrorInvalidFieldInvalidInterfaceIdInvalidTsResolutionTimestampTooBig | __fake_type__ | boser::web::graphql::error::IoError | IoErrorInvalidFieldInvalidInterfaceIdInvalidTsResolutionTimestampTooBig

void FUN_00ab8fb4(undefined8 *param_1,int param_2)

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
  undefined4 uVar10;
  undefined8 uVar11;
  uint **local_1fc;
  undefined4 local_1f8;
  char *local_1f4;
  undefined4 local_1f0;
  undefined1 local_1e9;
  undefined1 local_1e8 [16];
  char ***local_1d8;
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
  undefined4 *local_f0;
  undefined4 local_ec;
  undefined4 ***local_e8;
  char *local_e4;
  char **local_e0;
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
  local_1f4 = "boser::web::graphql::error::IoError";
  local_1f0 = 0x23;
  local_1f8 = 7;
  local_1fc = (uint **)0x421333;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                       "IoErrorInvalidFieldInvalidInterfaceIdInvalidTsResolutionTimestampTooBig",7);
  if (iVar1 == 0) {
    local_1d4 = (undefined4 *)thunk_FUN_01be5118(7);
    if (local_1d4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,7);
    }
    *(undefined4 *)((int)local_1d4 + 3) = 0x726f7272;
    *local_1d4 = 0x72456f49;
    local_1d0 = 7;
    local_1d8 = (char ***)0x7;
    FUN_006a0cfc(&local_e8,1,"boser::web::graphql::error::IoError",0x23);
    FUN_006c2a34(&local_1a8,(undefined4 *)(param_2 + 0x40),&local_1d8,&local_e8);
    if (local_198 != 0x80000006) {
      FUN_00abf870(&local_1a8);
    }
    uVar10 = 7;
    local_e8 = (undefined4 ***)0x80000000;
    local_e0 = (char **)0x7;
    local_e4 = "IoErrorInvalidFieldInvalidInterfaceIdInvalidTsResolutionTimestampTooBig";
    uVar3 = FUN_0160ec7c(local_1e8,&local_e8);
    uVar11 = thunk_FUN_01bee35a(uVar3,0x2c0);
    puVar9 = (uint *)((int)uVar11 + (int)((ulonglong)uVar11 >> 0x20));
    if ((char)puVar9[4] == '\0') {
      FUN_019ae6ac(&local_e8);
      *puVar9 = (uint)local_e8;
      puVar9[1] = (uint)local_e4;
      puVar9[2] = (uint)local_e0;
      puVar9[3] = (uint)local_dc;
      *(undefined1 *)(puVar9 + 4) = 1;
    }
    local_1d8 = (char ***)*puVar9;
    local_1d4 = (undefined4 *)puVar9[1];
    local_1d0 = puVar9[2];
    uStack_1cc = puVar9[3];
    *puVar9 = (int)local_1d8 + 1;
    puVar9[1] = (int)local_1d4 + (uint)((uint **)0xfffffffe < local_1d8);
    local_1c0 = 0;
    local_1c8 = 0;
    local_1c4 = 8;
    puStack_1bc = &DAT_0056d238;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
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
      local_e0 = (char **)(undefined4 **)local_1a8;
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
      local_68 = puVar4;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4);
      FUN_00abfaf0(&local_1a8);
      uVar10 = 9;
      puVar4 = (undefined4 *)thunk_FUN_01be5118(9);
      if (puVar4 != (undefined4 *)0x0) {
        FUN_01bed4e2(puVar4,"exception",9);
        local_ec = 9;
        local_f4 = 9;
        local_f0 = puVar4;
        puVar4 = (undefined4 *)thunk_FUN_01be5118(9);
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,9);
        }
        FUN_01bed4e2(puVar4,"exception",9);
        FUN_006e01d0(&local_1a8);
        FUN_006c86e0(&local_38,param_2);
        local_64 = 9;
        local_6c = 9;
        local_9c = 0x80000000;
        local_e0 = (char **)(undefined4 **)local_1a8;
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
        local_68 = puVar4;
        FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
        FUN_00abfaf0(&local_1a8);
        puVar9 = (uint *)((uint)&local_1a8 | 4);
        *puVar9 = (uint)local_1d8;
        puVar9[1] = (uint)local_1d4;
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
        local_94 = 0x23;
        local_a0 = 0;
        local_98 = "boser::web::graphql::error::IoError";
        local_9c = CONCAT31(local_9c._1_3_,1);
        iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                             "IoErrorInvalidFieldInvalidInterfaceIdInvalidTsResolutionTimestampTooBig"
                             ,7);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01c226c0);
        }
        FUN_00abf870();
        FUN_01bed4e2(iVar1,&local_e8,0xb0);
        goto LAB_00ab9504;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar10);
  }
  uVar11 = FUN_006a71d4();
  iVar6 = (int)((ulonglong)uVar11 >> 0x20);
  iVar2 = (int)uVar11;
  if (iVar2 == 0) goto LAB_00ab9504;
  local_1a8 = uVar11;
  if (iVar6 == 0x23) {
    iVar2 = thunk_FUN_01bed842("boser::web::graphql::error::IoError",iVar2,0x23);
    if (iVar2 != 0) goto LAB_00ab94d0;
  }
  else {
    if (iVar6 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00ab9504;
    }
LAB_00ab94d0:
    iVar2 = FUN_015db690(param_2 + 0x20,
                         "IoErrorInvalidFieldInvalidInterfaceIdInvalidTsResolutionTimestampTooBig",7
                        );
    if (iVar2 == 0) {
      local_d8 = &local_1fc;
      puVar8 = &DAT_01c226d0;
      puVar5 = &DAT_00572c5c;
      local_e0 = &local_1f4;
      local_dc = (code *)&DAT_0132b6a0;
      local_e8 = (undefined4 ***)&local_1a8;
      goto LAB_00ab95bc;
    }
  }
  uVar7 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar7 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar7 == 1) {
LAB_00ab9504:
    local_1d4 = (undefined4 *)&LAB_012b97d8;
    local_1d8 = (char ***)&local_e8;
    local_e0 = (char **)0x7;
    local_e4 = "IoErrorInvalidFieldInvalidInterfaceIdInvalidTsResolutionTimestampTooBig";
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
  local_e0 = (char **)&local_1e9;
  puVar8 = &DAT_01c226e0;
  local_1d8 = (char ***)CONCAT31(local_1d8._1_3_,(char)uVar7);
  puVar5 = &DAT_005b5680;
  local_dc = FUN_006a7514;
  local_e8 = &local_1fc;
LAB_00ab95bc:
  local_e4 = (char *)&DAT_0132b6a0;
  local_d4 = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar5,&local_e8,puVar8);
}

