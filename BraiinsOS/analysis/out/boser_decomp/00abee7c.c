// FUN_00abee7c @ 00abee7c size=2128 calls_out=25 calls_in=2
// strings: boser_bosminer::info::FanInfo | FanInfo | FanInfo | __fake_type__ | boser_bosminer::info::FanInfo | FanInfo

void FUN_00abee7c(int *param_1,int param_2)

{
  undefined4 **ppuVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
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
  int local_1a0;
  undefined4 **ppuStack_19c;
  uint local_198;
  int iStack_194;
  undefined4 **local_190;
  uint uStack_18c;
  int local_188;
  undefined4 **ppuStack_184;
  uint uStack_180;
  int iStack_17c;
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
  int iStack_cc;
  undefined4 **local_c8;
  uint local_c4;
  int iStack_c0;
  undefined4 **ppuStack_bc;
  uint uStack_b8;
  int local_b4;
  undefined4 **local_b0;
  uint local_ac;
  int local_a8;
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
  local_1f4 = "boser_bosminer::info::FanInfo";
  local_1f0 = 0x1d;
  local_1f8 = 7;
  local_1fc = (uint **)0x3eebb7;
  iVar2 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),"FanInfo",7);
  if (iVar2 == 0) {
    local_1d4 = (undefined4 *)thunk_FUN_01be5118(7);
    if (local_1d4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,7);
    }
    *(undefined4 *)((int)local_1d4 + 3) = 0x6f666e49;
    *local_1d4 = 0x496e6146;
    local_1d0 = 7;
    local_1d8 = (char ***)0x7;
    FUN_006a0cfc(&local_e8,1,"boser_bosminer::info::FanInfo",0x1d);
    FUN_006c2a34(&local_1a8,(undefined4 *)(param_2 + 0x40),&local_1d8,&local_e8);
    if (local_198 != 0x80000006) {
      FUN_006b2000(&local_1a8);
    }
    local_e0 = (char **)0x7;
    local_e8 = (undefined4 ***)0x80000000;
    local_e4 = "FanInfo";
    uVar4 = FUN_0160ec7c(local_1e8,&local_e8);
    uVar12 = thunk_FUN_01bee35a(uVar4,0x2c0);
    puVar10 = (uint *)((int)uVar12 + (int)((ulonglong)uVar12 >> 0x20));
    if ((char)puVar10[4] == '\0') {
      FUN_019ae6ac(&local_e8);
      *puVar10 = (uint)local_e8;
      puVar10[1] = (uint)local_e4;
      puVar10[2] = (uint)local_e0;
      puVar10[3] = (uint)local_dc;
      *(undefined1 *)(puVar10 + 4) = 1;
    }
    local_1d8 = (char ***)*puVar10;
    local_1d4 = (undefined4 *)puVar10[1];
    local_1d0 = puVar10[2];
    uStack_1cc = puVar10[3];
    *puVar10 = (int)local_1d8 + 1;
    puVar10[1] = (int)local_1d4 + (uint)((uint **)0xfffffffe < local_1d8);
    local_1c0 = 0;
    local_1c4 = 8;
    local_1c8 = 0;
    puStack_1bc = &DAT_0056d238;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uVar4 = 4;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar5 == (undefined4 *)0x0) {
LAB_00abf668:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar4);
    }
    *puVar5 = 0x656d616e;
    local_ec = 4;
    local_f4 = 4;
    local_f0 = puVar5;
    puVar5 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    *puVar5 = 0x656d616e;
    FUN_006e01d0(&local_1a8);
    FUN_006c86e0(&local_38,param_2);
    local_64 = 4;
    local_6c = 4;
    local_9c = 0x80000000;
    local_e0 = (char **)(undefined4 **)local_1a8;
    local_dc = (code *)local_1a8._4_4_;
    local_d8 = (uint ***)local_1a0;
    local_d4 = ppuStack_19c;
    uStack_d0 = local_198;
    iStack_cc = iStack_194;
    local_c8 = local_190;
    local_c4 = uStack_18c;
    iStack_c0 = local_188;
    ppuStack_bc = ppuStack_184;
    uStack_b8 = uStack_180;
    local_b4 = iStack_17c;
    local_60 = local_38;
    uStack_5c = uStack_34;
    uStack_58 = uStack_30;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = -0x7fffffff;
    local_3c = 0;
    local_e8 = (undefined4 ***)0x0;
    local_84 = 0x80000000;
    local_90 = 0x80000000;
    local_3b = 0;
    local_b0 = (undefined4 **)0x0;
    local_4c = 0;
    local_50 = 4;
    local_54 = 0;
    local_78 = 0x80000000;
    local_40 = 0;
    local_44 = 8;
    local_48 = 0;
    local_ac = 0;
    local_68 = puVar5;
    FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
    FUN_00b3bb58(&local_1a8);
    uVar4 = 5;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(5);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00abf668;
    *(undefined1 *)(puVar5 + 1) = 100;
    *puVar5 = 0x65657073;
    local_ec = 5;
    local_f4 = 5;
    local_f0 = puVar5;
    puVar5 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,5);
    }
    *(undefined1 *)(puVar5 + 1) = 100;
    *puVar5 = 0x65657073;
    FUN_006e01d0(&local_1a8);
    FUN_006cd324(&local_38,param_2);
    local_64 = 5;
    local_6c = 5;
    local_9c = 0x80000000;
    local_e0 = (char **)(undefined4 **)local_1a8;
    local_dc = (code *)local_1a8._4_4_;
    local_d8 = (uint ***)local_1a0;
    local_d4 = ppuStack_19c;
    uStack_d0 = local_198;
    iStack_cc = iStack_194;
    local_c8 = local_190;
    local_c4 = uStack_18c;
    iStack_c0 = local_188;
    ppuStack_bc = ppuStack_184;
    uStack_b8 = uStack_180;
    local_b4 = iStack_17c;
    local_60 = local_38;
    uStack_5c = uStack_34;
    uStack_58 = uStack_30;
    local_e4 = (char *)CONCAT31(local_e4._1_3_,1);
    local_a8 = -0x7fffffff;
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
    local_68 = puVar5;
    FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
    FUN_00b3bb58(&local_1a8);
    uVar4 = 3;
    puVar5 = (undefined4 *)thunk_FUN_01be5118(3);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00abf668;
    *(undefined1 *)((int)puVar5 + 2) = 0x6d;
    *(undefined2 *)puVar5 = 0x7072;
    local_ec = 3;
    local_f4 = 3;
    local_f0 = puVar5;
    puVar5 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,3);
    }
    *(undefined1 *)((int)puVar5 + 2) = 0x6d;
    *(undefined2 *)puVar5 = 0x7072;
    FUN_006e01d0(&local_1a8);
    FUN_006cd324(&local_38,param_2);
    local_64 = 3;
    local_6c = 3;
    local_9c = 0x80000000;
    local_e0 = (char **)(undefined4 **)local_1a8;
    local_dc = (code *)local_1a8._4_4_;
    local_d8 = (uint ***)local_1a0;
    local_d4 = ppuStack_19c;
    uStack_d0 = local_198;
    iStack_cc = iStack_194;
    local_c8 = local_190;
    local_c4 = uStack_18c;
    iStack_c0 = local_188;
    ppuStack_bc = ppuStack_184;
    uStack_b8 = uStack_180;
    local_b4 = iStack_17c;
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
    local_68 = puVar5;
    FUN_006e10e8(&local_1a8,&local_1d8,&local_f4,&local_e8);
    FUN_00b3bb58(&local_1a8);
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
    local_d8 = (uint ***)0x80000001;
    local_d4 = (undefined4 **)local_1a8;
    uStack_d0 = local_1a8._4_4_;
    iStack_cc = local_1a0;
    local_c8 = ppuStack_19c;
    local_c4 = local_198;
    iStack_c0 = iStack_194;
    ppuStack_bc = local_190;
    uStack_b8 = uStack_18c;
    local_b4 = local_188;
    local_b0 = ppuStack_184;
    local_ac = uStack_180;
    local_a8 = iStack_17c;
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
    local_94 = 0x1d;
    local_a0 = 0;
    local_98 = "boser_bosminer::info::FanInfo";
    local_9c = CONCAT31(local_9c._1_3_,1);
    iVar2 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),"FanInfo",7
                        );
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_006b2000();
    FUN_01bed4e2(iVar2,&local_e8,0xb0);
  }
  else {
    uVar12 = FUN_006a71d4();
    iVar7 = (int)((ulonglong)uVar12 >> 0x20);
    iVar3 = (int)uVar12;
    if (iVar3 != 0) {
      local_1a8 = uVar12;
      if (iVar7 == 0x1d) {
        iVar3 = thunk_FUN_01bed842("boser_bosminer::info::FanInfo",iVar3,0x1d);
        if (iVar3 != 0) goto LAB_00abf4a4;
      }
      else {
        if (iVar7 == 0xd) {
          iVar3 = thunk_FUN_01bed842(iVar3,"__fake_type__",0xd);
          if (iVar3 == 0) goto LAB_00abf4d8;
        }
LAB_00abf4a4:
        iVar3 = FUN_006e5bc0(param_2 + 0x20,"FanInfo",7);
        if (iVar3 == 0) {
          local_d8 = &local_1fc;
          puVar9 = &DAT_01c226d0;
          puVar6 = &DAT_00572c5c;
          local_e0 = &local_1f4;
          local_dc = (code *)&DAT_0132b6a0;
          local_e8 = (undefined4 ***)&local_1a8;
          goto LAB_00abf648;
        }
      }
      uVar8 = 2;
      if ((int)*(uint *)(iVar2 + 0x10) < 0) {
        uVar8 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
      }
      if (uVar8 != 1) {
        local_d8 = (uint ***)&local_1d8;
        local_e0 = (char **)&local_1e9;
        puVar9 = &DAT_01c226e0;
        local_1d8 = (char ***)CONCAT31(local_1d8._1_3_,(char)uVar8);
        puVar6 = &DAT_005b5680;
        local_dc = FUN_006a7514;
        local_e8 = &local_1fc;
LAB_00abf648:
        local_e4 = (char *)&DAT_0132b6a0;
        local_d4 = (undefined4 **)local_dc;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(puVar6,&local_e8,puVar9);
      }
    }
  }
LAB_00abf4d8:
  FUN_00ab085c(&local_e8);
  FUN_019bb7e0(local_e8,local_e4);
  FUN_00ab085c(&local_e8);
  local_1d4 = (undefined4 *)&LAB_00632348;
  local_1d8 = (char ***)&local_e8;
  FUN_00664898(&local_1a8,&DAT_005791cb,&local_1d8);
  FUN_019bb7e0(local_e8,local_e4);
  FUN_019bb7e0((undefined4 **)local_1a8,local_1a8._4_4_);
  FUN_00ab085c(&local_e8);
  local_1d4 = (undefined4 *)&LAB_00632348;
  local_1d8 = (char ***)&local_e8;
  FUN_00664898(&local_1a8,&DAT_005bd5dc,&local_1d8);
  FUN_019bb7e0(local_e8,local_e4);
  uVar4 = local_1a8._4_4_;
  ppuVar1 = (undefined4 **)local_1a8;
  if (local_1a0 < 0) {
    uVar11 = 0;
LAB_00abf57c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar11,local_1a0);
  }
  if (local_1a0 == 0) {
    iVar2 = 0;
    iVar3 = 1;
  }
  else {
    uVar11 = 1;
    iVar3 = FUN_01298504(local_1a0,1);
    if (iVar3 == 0) goto LAB_00abf57c;
    iVar2 = local_1a0;
  }
  FUN_01bed4e2(iVar3,uVar4,local_1a0);
  *param_1 = iVar2;
  param_1[1] = iVar3;
  param_1[2] = local_1a0;
  if (ppuVar1 != (undefined4 **)0x80000000) {
    FUN_019bb7e0(ppuVar1,uVar4);
  }
  return;
}

