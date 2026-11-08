// FUN_00b19ad0 @ 00b19ad0 size=2028 calls_out=25 calls_in=1
// strings: boser::web::ui::Link | __fake_type__ | boser::web::ui::Link |  Link in UI | boser::web::ui::Link |  Link label

void FUN_00b19ad0(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  int local_218;
  int local_200;
  uint **local_1fc;
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
  undefined2 *local_e4;
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
  int local_9c;
  char *local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 *local_68;
  int local_64;
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
  local_1f4 = "boser::web::ui::Link";
  local_1f0 = 0x14;
  local_1f8 = 4;
  local_1fc = (uint **)&DAT_0056e8b4;
  iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),&DAT_0056e8b4
                       ,4);
  if (iVar1 == 0) {
    local_1d4 = (undefined4 *)thunk_FUN_01be5118(4);
    if (local_1d4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    local_1d0 = 4;
    *local_1d4 = 0x6b6e694c;
    local_1d8 = (undefined4 ***)0x4;
    FUN_006a0cfc(&local_e8,1,"boser::web::ui::Link",0x14);
    FUN_006c2a34(&local_1a8,(undefined4 *)(param_2 + 0x40),&local_1d8,&local_e8);
    if (local_198 != 0x80000006) {
      FUN_00abf870(&local_1a8);
    }
    local_e0 = (char **)0x4;
    local_e8 = (undefined4 ***)0x80000000;
    local_e4 = (undefined2 *)&DAT_0056e8b4;
    FUN_0160ec7c(local_1e8,&local_e8);
    lVar13 = FUN_013245a0("\nLink in UI",0xb);
    iVar1 = (int)((ulonglong)lVar13 >> 0x20);
    uVar11 = 0;
    if (lVar13 < 0) {
LAB_00b19c30:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar11,iVar1);
    }
    if (iVar1 == 0) {
      local_200 = 0;
      puVar3 = (undefined4 *)&DAT_00000001;
    }
    else {
      uVar11 = 1;
      puVar3 = (undefined4 *)FUN_01298504(iVar1,1);
      local_200 = iVar1;
      if (puVar3 == (undefined4 *)0x0) goto LAB_00b19c30;
    }
    uVar11 = FUN_01bed4e2(puVar3,(int)lVar13,iVar1);
    uVar12 = thunk_FUN_01bee35a(uVar11,0x2c0);
    puVar10 = (uint *)((int)uVar12 + (int)((ulonglong)uVar12 >> 0x20));
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
    *puVar10 = (int)local_1d8 + 1;
    puVar10[1] = (int)local_1d4 + (uint)((uint **)0xfffffffe < local_1d8);
    local_1c0 = 0;
    local_1c8 = 0;
    local_1c4 = 8;
    puStack_1bc = &DAT_0056d238;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uVar11 = 5;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(5);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar4 + 1) = 0x6c;
      *puVar4 = 0x6562616c;
      local_ec = 5;
      local_f4 = 5;
      local_f0 = puVar4;
      puVar4 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,5);
      }
      *(undefined1 *)(puVar4 + 1) = 0x6c;
      *puVar4 = 0x6562616c;
      lVar13 = FUN_013245a0("\nLink label",0xb);
      local_94 = (int)((ulonglong)lVar13 >> 0x20);
      uVar11 = 0;
      if (lVar13 < 0) {
LAB_00b19e14:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar11,local_94);
      }
      if (local_94 == 0) {
        pcVar5 = (char *)0x1;
        local_218 = 0;
      }
      else {
        uVar11 = 1;
        pcVar5 = (char *)FUN_01298504(local_94,1);
        local_218 = local_94;
        if (pcVar5 == (char *)0x0) goto LAB_00b19e14;
      }
      FUN_01bed4e2(pcVar5,(int)lVar13,local_94);
      FUN_006e01d0(&local_1a8);
      FUN_006c86e0(&local_38,param_2);
      local_64 = 5;
      local_6c = 5;
      local_9c = local_218;
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
      local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
      local_a8 = 0x80000001;
      local_84 = 0x80000000;
      local_90 = 0x80000000;
      local_78 = 0x80000000;
      local_3c = 0;
      local_e8 = (undefined4 ***)0x0;
      local_3b = 0;
      local_b0 = (undefined4 **)0x0;
      local_4c = 0;
      local_50 = 4;
      local_54 = 0;
      local_40 = 0;
      local_44 = 8;
      local_48 = 0;
      local_ac = 0;
      local_98 = pcVar5;
      local_68 = puVar4;
      FUN_006e10e8(&local_1a8,&local_1d8,&local_f4);
      FUN_00abfaf0(&local_1a8);
      uVar11 = 4;
      puVar4 = (undefined4 *)thunk_FUN_01be5118(4);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0x66657268;
        local_ec = 4;
        local_f4 = 4;
        local_f0 = puVar4;
        puVar4 = (undefined4 *)thunk_FUN_01be5118();
        if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,4);
        }
        *puVar4 = 0x66657268;
        lVar13 = FUN_013245a0("\nTarget link address (without hostname and protocol)",0x34);
        iVar2 = (int)((ulonglong)lVar13 >> 0x20);
        uVar11 = 0;
        if (lVar13 < 0) {
LAB_00b19fb8:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar11,iVar2);
        }
        if (iVar2 == 0) {
          local_218 = 0;
          iVar6 = 1;
        }
        else {
          uVar11 = 1;
          iVar6 = FUN_01298504(iVar2,1);
          local_218 = iVar2;
          if (iVar6 == 0) goto LAB_00b19fb8;
        }
        FUN_01bed4e2(iVar6,(int)lVar13,iVar2);
        FUN_006e01d0(&local_1a8);
        FUN_006c86e0(&local_38,param_2);
        local_64 = 4;
        local_6c = 4;
        local_9c = local_218;
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
        local_e4 = (undefined2 *)CONCAT31(local_e4._1_3_,1);
        local_a8 = 0x80000001;
        local_84 = 0x80000000;
        local_90 = 0x80000000;
        local_78 = 0x80000000;
        local_3c = 0;
        local_e8 = (undefined4 ***)0x0;
        local_3b = 0;
        local_b0 = (undefined4 **)0x0;
        local_4c = 0;
        local_50 = 4;
        local_54 = 0;
        local_40 = 0;
        local_44 = 8;
        local_48 = 0;
        local_ac = 0;
        local_98 = (char *)iVar6;
        local_94 = iVar2;
        local_68 = puVar4;
        FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
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
        local_6c = local_200;
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
        local_54 = 0;
        local_70 = 0;
        local_78 = 0;
        local_4c = local_4c & 0xffff0000;
        local_50 = 0x10000;
        local_60 = 0x80000000;
        local_74 = 8;
        local_80 = 4;
        local_7c = 0;
        local_84 = 0;
        local_94 = 0x14;
        local_a0 = 0;
        local_98 = "boser::web::ui::Link";
        local_9c = CONCAT31(local_9c._1_3_,1);
        local_68 = puVar3;
        local_64 = iVar1;
        iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                             &DAT_0056e8b4,4);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01c226c0);
        }
        FUN_00abf870();
        FUN_01bed4e2(iVar1,&local_e8,0xb0);
        goto LAB_00b19cb8;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar11);
  }
  uVar12 = FUN_006a71d4();
  iVar6 = (int)((ulonglong)uVar12 >> 0x20);
  iVar2 = (int)uVar12;
  if (iVar2 == 0) goto LAB_00b19cb8;
  local_1a8 = uVar12;
  if (iVar6 == 0x14) {
    iVar2 = thunk_FUN_01bed842("boser::web::ui::Link",iVar2,0x14);
    if (iVar2 != 0) goto LAB_00b19c84;
  }
  else {
    if (iVar6 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00b19cb8;
    }
LAB_00b19c84:
    iVar2 = FUN_015db690(param_2 + 0x20,&DAT_0056e8b4,4);
    if (iVar2 == 0) {
      local_d8 = &local_1fc;
      puVar9 = &DAT_01c226d0;
      puVar7 = &DAT_00572c5c;
      local_e0 = &local_1f4;
      local_dc = (code *)&DAT_0132b6a0;
      local_e8 = (undefined4 ***)&local_1a8;
      goto LAB_00b1a21c;
    }
  }
  uVar8 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar8 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar8 == 1) {
LAB_00b19cb8:
    FUN_00dd5ac8(&local_e8);
    FUN_019bb7e0(local_e8,local_e4);
    FUN_00dd5ac8(&local_e8);
    local_1d4 = (undefined4 *)&LAB_00632348;
    local_1d8 = &local_e8;
    FUN_00664898(&local_1a8,&DAT_005791cb,&local_1d8);
    FUN_019bb7e0(local_e8,local_e4);
    *param_1 = local_1a8;
    *(undefined4 *)(param_1 + 1) = uStack_1a0;
    return;
  }
  local_d8 = (uint ***)&local_1d8;
  local_e0 = (char **)&local_1e9;
  puVar9 = &DAT_01c226e0;
  local_1d8 = (undefined4 ***)CONCAT31(local_1d8._1_3_,(char)uVar8);
  puVar7 = &DAT_005b5680;
  local_dc = FUN_006a7514;
  local_e8 = &local_1fc;
LAB_00b1a21c:
  local_e4 = &DAT_0132b6a0;
  local_d4 = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar7,&local_e8,puVar9);
}

