// FUN_00b57b7c @ 00b57b7c size=2232 calls_out=24 calls_in=1
// strings: boser_bosminer::metadata::aux::UsizeMetadata | UsizeMetadata | UsizeMetadata | __fake_type__ | UsizeMetadata | boser_bosminer::metadata::aux::UsizeMetadata

void FUN_00b57b7c(undefined8 *param_1,int param_2)

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
  uint **local_1fc;
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
  local_1f4 = "boser_bosminer::metadata::aux::UsizeMetadata";
  local_1f0 = 0x2c;
  local_1f8 = 0xd;
  local_1fc = (uint **)0x401880;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                       "UsizeMetadata",0xd);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_01be5118(0xd);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xd);
    }
    FUN_01bed4e2(iVar1,"UsizeMetadata",0xd);
    local_1d0 = 0xd;
    local_1d8 = (char ***)0xd;
    local_1d4 = (undefined1 *)iVar1;
    FUN_006a0cfc(&local_e8,1,"boser_bosminer::metadata::aux::UsizeMetadata",0x2c);
    FUN_006c2a34(&local_1a8,(undefined4 *)(param_2 + 0x40),&local_1d8,&local_e8);
    if (local_198 != 0x80000006) {
      FUN_006b2000(&local_1a8);
    }
    local_e0 = (char **)0xd;
    local_e8 = (undefined4 ***)0x80000000;
    local_e4 = "UsizeMetadata";
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
    local_1d8 = (char ***)*puVar9;
    local_1d4 = (undefined1 *)puVar9[1];
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
    uVar3 = 7;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(7);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)((int)puVar4 + 3) = 0x746c7561;
      *puVar4 = 0x61666564;
      local_ec = 7;
      local_f4 = 7;
      local_f0 = puVar4;
      puVar4 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      *(undefined4 *)((int)puVar4 + 3) = 0x746c7561;
      *puVar4 = 0x61666564;
      FUN_006e01d0(&local_1a8);
      FUN_006ce45c(&local_38,param_2);
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
      FUN_00b3bb58(&local_1a8);
      uVar3 = 3;
      puVar4 = (undefined4 *)thunk_FUN_01be5118(3);
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined1 *)((int)puVar4 + 2) = 0x6e;
        *(undefined2 *)puVar4 = 0x696d;
        local_ec = 3;
        local_f4 = 3;
        local_f0 = puVar4;
        puVar4 = (undefined4 *)thunk_FUN_01be5118();
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,3);
        }
        *(undefined1 *)((int)puVar4 + 2) = 0x6e;
        *(undefined2 *)puVar4 = 0x696d;
        FUN_006e01d0(&local_1a8);
        FUN_00b65a04(&local_38,param_2);
        local_64 = 3;
        local_6c = 3;
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
        FUN_00b3bb58(&local_1a8);
        uVar3 = 3;
        puVar4 = (undefined4 *)thunk_FUN_01be5118(3);
        if (puVar4 != (undefined4 *)0x0) {
          *(undefined1 *)((int)puVar4 + 2) = 0x78;
          *(undefined2 *)puVar4 = 0x616d;
          local_ec = 3;
          local_f4 = 3;
          local_f0 = puVar4;
          puVar4 = (undefined4 *)thunk_FUN_01be5118();
          if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,3);
          }
          *(undefined1 *)((int)puVar4 + 2) = 0x78;
          *(undefined2 *)puVar4 = 0x616d;
          FUN_006e01d0(&local_1a8);
          FUN_00b65a04(&local_38,param_2);
          local_64 = 3;
          local_6c = 3;
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
          FUN_00b3bb58(&local_1a8);
          uVar3 = 4;
          puVar4 = (undefined4 *)thunk_FUN_01be5118(4);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = 0x74696e75;
            local_ec = 4;
            local_f4 = 4;
            local_f0 = puVar4;
            puVar4 = (undefined4 *)thunk_FUN_01be5118();
            if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(1,4);
            }
            *puVar4 = 0x74696e75;
            FUN_006e01d0(&local_1a8);
            FUN_006c05b8(&local_38,param_2);
            local_64 = 4;
            local_6c = 4;
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
            local_e8 = (undefined4 ***)0x0;
            local_3b = 0;
            local_84 = 0x80000000;
            local_90 = 0x80000000;
            local_b0 = (undefined4 **)0x0;
            local_4c = 0;
            local_50 = 4;
            local_54 = 0;
            local_78 = 0x80000000;
            local_40 = 0;
            local_44 = 8;
            local_48 = 0;
            local_ac = 0;
            local_68 = puVar4;
            FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
            FUN_00b3bb58(&local_1a8);
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
            local_94 = 0x2c;
            local_a0 = 0;
            local_98 = "boser_bosminer::metadata::aux::UsizeMetadata";
            local_9c = CONCAT31(local_9c._1_3_,1);
            iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                                 "UsizeMetadata",0xd);
            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01c226c0);
            }
            FUN_006b2000();
            FUN_01bed4e2(iVar1,&local_e8,0xb0);
            goto LAB_00b582e8;
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
  if (iVar2 == 0) goto LAB_00b582e8;
  local_1a8 = uVar10;
  if (iVar6 == 0x2c) {
    iVar2 = thunk_FUN_01bed842("boser_bosminer::metadata::aux::UsizeMetadata",iVar2,0x2c);
    if (iVar2 != 0) goto LAB_00b582b4;
  }
  else {
    if (iVar6 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00b582e8;
    }
LAB_00b582b4:
    iVar2 = FUN_006e5bc0(param_2 + 0x20,"UsizeMetadata",0xd);
    if (iVar2 == 0) {
      local_d8 = &local_1fc;
      puVar8 = &DAT_01c226d0;
      puVar5 = &DAT_00572c5c;
      local_e0 = &local_1f4;
      local_dc = (code *)&DAT_0132b6a0;
      local_e8 = (undefined4 ***)&local_1a8;
      goto LAB_00b583a0;
    }
  }
  uVar7 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar7 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar7 == 1) {
LAB_00b582e8:
    local_1d4 = &LAB_012b97d8;
    local_1d8 = (char ***)&local_e8;
    local_e0 = (char **)0xd;
    local_e4 = "UsizeMetadata";
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
LAB_00b583a0:
  local_e4 = (char *)&DAT_0132b6a0;
  local_d4 = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar5,&local_e8,puVar8);
}

