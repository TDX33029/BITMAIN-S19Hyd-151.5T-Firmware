// FUN_00b3a37c @ 00b3a37c size=3932 calls_out=28 calls_in=1
// strings: boser::web::graphql::bos::wifi::WifiCell | __fake_type__ | boser::web::graphql::bos::wifi::WifiCell | signalStrength | signalStrength | boser::web::graphql::bos::wifi::SignalStrength

void FUN_00b3a37c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined *puVar10;
  uint *puVar11;
  undefined4 ***pppuVar12;
  undefined4 *puVar13;
  undefined4 ****ppppuVar14;
  undefined8 uVar15;
  undefined4 ***local_284;
  undefined4 local_280;
  char *local_27c;
  undefined4 local_278;
  undefined1 local_271;
  undefined1 local_270 [16];
  uint local_260;
  uint uStack_25c;
  uint uStack_258;
  uint local_254;
  uint local_250;
  uint local_24c;
  uint local_248;
  undefined4 *puStack_244;
  uint uStack_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  undefined4 local_22c;
  int local_228;
  undefined4 local_224;
  undefined4 *local_220;
  undefined4 *local_21c;
  undefined1 *local_218;
  undefined4 ***pppuStack_214;
  char *pcStack_210;
  undefined1 *puStack_20c;
  undefined4 ***local_208;
  char *pcStack_204;
  undefined1 *puStack_200;
  undefined4 ***pppuStack_1fc;
  char *pcStack_1f8;
  undefined1 *puStack_1f4;
  undefined4 ***local_1ec;
  undefined4 local_1e8;
  char *local_1e4;
  undefined4 local_1e0;
  undefined1 local_1d9;
  undefined8 local_1d8;
  undefined1 *puStack_1d0;
  undefined4 ***pppuStack_1cc;
  char *local_1c8;
  undefined1 *puStack_1c4;
  undefined4 ***local_1c0;
  char *pcStack_1bc;
  undefined1 *local_1b8;
  undefined4 ***pppuStack_1b4;
  char *pcStack_1b0;
  undefined1 *puStack_1ac;
  undefined4 uStack_1a8;
  undefined4 ***local_128;
  char *local_124;
  undefined8 local_120;
  undefined4 ****local_118;
  undefined8 local_114;
  undefined1 *local_10c;
  undefined4 ***local_108;
  char *local_104;
  undefined1 *puStack_100;
  undefined4 ***pppuStack_fc;
  char *local_f8;
  undefined1 *local_f4;
  undefined4 ***local_f0;
  char *local_ec;
  undefined1 *local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  char *local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  uint local_a4;
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined4 local_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char ***local_68;
  char *local_64;
  undefined1 *local_60;
  undefined4 ***pppuStack_5c;
  char *local_58;
  undefined1 *local_54;
  undefined4 ***local_50;
  char *pcStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  
  local_271 = 1;
  puVar13 = (undefined4 *)(param_2 + 0x40);
  local_27c = "boser::web::graphql::bos::wifi::WifiCell";
  local_278 = 0x28;
  local_280 = 8;
  local_284 = (undefined4 ***)&DAT_00570418;
  iVar1 = FUN_006c176c(*puVar13,*(undefined4 *)(param_2 + 0x44),&DAT_00570418,8);
  if (iVar1 == 0) {
    local_64 = (char *)thunk_FUN_01be5118(8);
    if (local_64 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,8);
    }
    *(undefined4 *)((int)local_64 + 4) = 0x6c6c6543;
    *(undefined4 *)local_64 = 0x69666957;
    local_60 = (undefined1 *)0x8;
    local_68 = (char ***)&DAT_00000008;
    FUN_006a0cfc(&local_128,1,"boser::web::graphql::bos::wifi::WifiCell",0x28);
    FUN_006c2a34(&local_1d8,puVar13,&local_68,&local_128);
    if (local_1c8 != (char *)0x80000006) {
      FUN_00abf870(&local_1d8);
    }
    local_124 = &DAT_00570418;
    local_128 = (undefined4 ***)0x80000000;
    local_120._0_4_ = (char **)&DAT_00000008;
    uVar3 = FUN_0160ec7c(local_270);
    uVar15 = thunk_FUN_01bee35a(uVar3,0x2c0);
    puVar11 = (uint *)((int)uVar15 + (int)((ulonglong)uVar15 >> 0x20));
    if ((char)puVar11[4] == '\0') {
      FUN_019ae6ac(&local_128);
      *puVar11 = (uint)local_128;
      puVar11[1] = (uint)local_124;
      puVar11[2] = (uint)(char **)local_120;
      puVar11[3] = (uint)local_120._4_4_;
      *(undefined1 *)(puVar11 + 4) = 1;
    }
    local_260 = *puVar11;
    uStack_25c = puVar11[1];
    local_254 = puVar11[3];
    puVar9 = puVar11 + 2;
    uStack_258 = *puVar9;
    local_24c = 8;
    local_248 = 0;
    local_250 = 0;
    *puVar11 = local_260 + 1;
    puVar11[1] = uStack_25c + (0xfffffffe < local_260);
    puStack_244 = &DAT_0056d238;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_238 = 0;
    uVar3 = 4;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00b3b228;
    *puVar4 = 0x64697373;
    local_218 = (undefined1 *)0x4;
    local_220 = (undefined4 *)&SUB_00000004;
    local_21c = puVar4;
    puVar4 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    *puVar4 = 0x64697373;
    FUN_006e01d0(&local_1d8);
    ppppuVar14 = (undefined4 ****)&local_68;
    FUN_006c86e0(ppppuVar14,param_2);
    local_a4 = 4;
    local_ac = 4;
    local_dc = 0x80000000;
    local_120._0_4_ = (char **)(undefined4 **)local_1d8;
    local_120._4_4_ = (code *)local_1d8._4_4_;
    local_118 = (undefined4 ****)puStack_1d0;
    local_114._0_4_ = pppuStack_1cc;
    local_114._4_4_ = local_1c8;
    local_10c = puStack_1c4;
    local_108 = local_1c0;
    local_104 = pcStack_1bc;
    puStack_100 = local_1b8;
    pppuStack_fc = pppuStack_1b4;
    local_f8 = pcStack_1b0;
    local_f4 = puStack_1ac;
    local_a0._0_4_ = local_68;
    local_a0._4_4_ = (undefined4 *)local_64;
    puStack_98 = local_60;
    local_124 = (char *)CONCAT31(local_124._1_3_,1);
    local_e8 = (undefined1 *)0x80000001;
    local_7c = 0;
    local_128 = (undefined4 ***)0x0;
    local_c4 = 0x80000000;
    local_d0 = 0x80000000;
    local_7b = 0;
    local_f0 = (undefined4 ***)0x0;
    local_8c = 0;
    local_90 = 4;
    local_94 = 0;
    local_b8 = 0x80000000;
    local_80 = 0;
    local_84 = 8;
    local_88 = 0;
    local_ec = (char *)0x0;
    local_a8 = puVar4;
    FUN_006e10e8(&local_1d8,&local_260,&local_220,&local_128);
    pppuVar12 = (undefined4 ***)&local_1d8;
    FUN_00abfaf0(pppuVar12);
    uVar3 = 0xe;
    iVar1 = thunk_FUN_01be5118(0xe);
    if (iVar1 == 0) goto LAB_00b3b228;
    FUN_01bed4e2(iVar1,"signalStrength",0xe);
    local_224 = 0xe;
    local_22c = 0xe;
    local_228 = iVar1;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(0xe);
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xe);
    }
    FUN_01bed4e2(puVar4,"signalStrength",0xe);
    FUN_006e01d0(&local_220);
    local_1e4 = "boser::web::graphql::bos::wifi::SignalStrength";
    local_1d9 = 4;
    local_1e0 = 0x2e;
    local_1e8 = 0xe;
    local_1ec = (undefined4 ***)0x3ed700;
    iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                         "SignalStrength",0xe);
    if (iVar1 == 0) {
      iVar1 = FUN_01298504(0xe,1);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xe);
      }
      FUN_01bed4e2(iVar1,"SignalStrength",0xe);
      local_60 = (undefined1 *)0xe;
      local_68 = (char ***)0xe;
      local_64 = (char *)iVar1;
      FUN_006a0cfc(&local_128,4,"boser::web::graphql::bos::wifi::SignalStrength",0x2e);
      FUN_006c2a34(&local_1d8,puVar13,&local_68,&local_128);
      if (local_1c8 != (char *)0x80000006) {
        FUN_00abf870(&local_1d8);
      }
      local_124 = "SignalStrength";
      local_120._0_4_ = (char **)0xe;
      local_128 = (undefined4 ***)0x80000000;
      FUN_0160ec7c(&local_78,&local_128);
      if ((char)puVar11[4] == '\0') {
        FUN_019ae6ac(&local_128);
        *puVar11 = (uint)local_128;
        puVar11[1] = (uint)local_124;
        *puVar9 = (uint)(char **)local_120;
        puVar11[3] = (uint)local_120._4_4_;
        *(undefined1 *)(puVar11 + 4) = 1;
      }
      local_68 = (char ***)*puVar11;
      local_64 = (char *)puVar11[1];
      local_60 = (undefined1 *)*puVar9;
      pppuStack_5c = (undefined4 ***)puVar11[3];
      local_50 = (undefined4 ***)0x0;
      *puVar11 = (int)local_68 + 1;
      puVar11[1] = (uint)(local_64 + ((undefined4 ***)0xfffffffe < local_68));
      local_58 = (char *)0x0;
      local_54 = (undefined1 *)0x4;
      pcStack_4c = (char *)&DAT_0056d238;
      puStack_48 = (undefined1 *)0x0;
      uStack_44 = 0;
      uStack_40 = 0;
      uVar3 = 7;
      puVar13 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar13 == (undefined4 *)0x0) {
LAB_00b3b238:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar3);
      }
      *(undefined4 *)((int)puVar13 + 3) = 0x454e494c;
      *puVar13 = 0x4c46464f;
      local_2c = 7;
      local_34 = 7;
      local_30 = puVar13;
      pcVar5 = (char *)thunk_FUN_01be5118(7);
      if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      builtin_strncpy(pcVar5,"OFFLINE",7);
      local_f8 = &DAT_80000001;
      local_10c = (undefined1 *)0x8;
      local_e8 = (undefined1 *)((uint)local_e8 & 0xffffff00);
      local_ec = (char *)0x0;
      local_104 = &DAT_80000000;
      local_120._0_4_ = (char **)0x7;
      local_128 = (undefined4 ***)0x7;
      local_108 = (undefined4 ***)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (undefined4 ***)0x0;
      local_118 = (undefined4 ****)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar5;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar3 = 3;
      puVar13 = (undefined4 *)thunk_FUN_01be5118(3);
      if (puVar13 == (undefined4 *)0x0) goto LAB_00b3b238;
      *(undefined1 *)((int)puVar13 + 2) = 0x57;
      *(undefined2 *)puVar13 = 0x4f4c;
      local_2c = 3;
      local_34 = 3;
      local_30 = puVar13;
      pcVar5 = (char *)thunk_FUN_01be5118(3);
      if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,3);
      }
      pcVar5[2] = 'W';
      pcVar5[0] = 'L';
      pcVar5[1] = 'O';
      local_f8 = &DAT_80000001;
      local_10c = (undefined1 *)0x8;
      local_e8 = (undefined1 *)((uint)local_e8 & 0xffffff00);
      local_ec = (char *)0x0;
      local_104 = &DAT_80000000;
      local_120._0_4_ = (char **)0x3;
      local_128 = (undefined4 ***)0x3;
      local_108 = (undefined4 ***)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (undefined4 ***)0x0;
      local_118 = (undefined4 ****)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar5;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar3 = 4;
      puVar13 = (undefined4 *)thunk_FUN_01be5118(4);
      if (puVar13 == (undefined4 *)0x0) goto LAB_00b3b238;
      *puVar13 = 0x52494146;
      local_2c = 4;
      local_34 = 4;
      local_30 = puVar13;
      pcVar5 = (char *)thunk_FUN_01be5118(4);
      if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      local_f8 = &DAT_80000001;
      builtin_strncpy(pcVar5,"FAIR",4);
      local_e8 = (undefined1 *)((uint)local_e8 & 0xffffff00);
      local_ec = (char *)0x0;
      local_104 = &DAT_80000000;
      local_120._0_4_ = (char **)0x4;
      local_128 = (undefined4 ***)0x4;
      local_108 = (undefined4 ***)0x0;
      local_10c = (undefined1 *)0x8;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (undefined4 ***)0x0;
      local_118 = (undefined4 ****)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = pcVar5;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar3 = 9;
      puVar13 = (undefined4 *)thunk_FUN_01be5118(9);
      if (puVar13 == (undefined4 *)0x0) goto LAB_00b3b238;
      FUN_01bed4e2(puVar13,"EXCELLENTaccess_point",9);
      local_2c = 9;
      local_34 = 9;
      local_30 = puVar13;
      iVar1 = thunk_FUN_01be5118(9);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,9);
      }
      FUN_01bed4e2(iVar1,"EXCELLENTaccess_point",9);
      local_f8 = (char *)0x80000001;
      local_104 = (char *)0x80000000;
      local_10c = (undefined1 *)0x8;
      local_e8 = (undefined1 *)((uint)local_e8 & 0xffffff00);
      local_ec = (char *)0x0;
      local_120._0_4_ = (char **)0x9;
      local_128 = (undefined4 ***)0x9;
      local_108 = (undefined4 ***)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (undefined4 ***)0x0;
      local_118 = (undefined4 ****)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = (char *)iVar1;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      local_108 = (undefined4 ***)local_68;
      local_104 = local_64;
      puStack_100 = local_60;
      pppuStack_fc = pppuStack_5c;
      local_f8 = local_58;
      local_f4 = local_54;
      local_f0 = local_50;
      local_ec = pcStack_4c;
      local_e8 = puStack_48;
      uStack_e4 = uStack_44;
      local_e0 = uStack_40;
      local_dc = uStack_3c;
      local_c8 = local_78;
      local_c4 = uStack_74;
      local_c0 = uStack_70;
      local_a4 = local_a4 & 0xffffff00;
      local_a8 = (undefined4 *)0x0;
      local_b0 = 0;
      local_b4 = 0;
      local_bc = 0;
      local_d8 = (char *)0x0;
      local_10c = (undefined1 *)0x2e;
      local_ac = 8;
      local_b8 = 4;
      local_d4 = 0x80000000;
      local_118 = (undefined4 ****)&DAT_80000004;
      local_114._4_4_ = "boser::web::graphql::bos::wifi::SignalStrength";
      iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                           "SignalStrength",0xe);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar1,&local_128,0xb0);
    }
    else {
      uVar15 = FUN_006a71d4();
      puVar7 = (undefined1 *)((ulonglong)uVar15 >> 0x20);
      iVar2 = (int)uVar15;
      if (iVar2 != 0) {
        local_1d8 = uVar15;
        if (puVar7 == &DAT_0000002e) {
          iVar2 = thunk_FUN_01bed842("boser::web::graphql::bos::wifi::SignalStrength",iVar2,0x2e);
          if (iVar2 != 0) goto LAB_00b3ac98;
        }
        else {
          if (puVar7 == &DAT_0000000d) {
            iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
            if (iVar2 == 0) goto LAB_00b3acd0;
          }
LAB_00b3ac98:
          iVar2 = FUN_015db690(param_2 + 0x20,"SignalStrength",0xe);
          if (iVar2 == 0) {
            ppppuVar14 = &local_1ec;
            local_120._0_4_ = &local_1e4;
            puVar10 = &DAT_01c226d0;
            puVar6 = &DAT_00572c5c;
            local_120._4_4_ = (code *)&DAT_0132b6a0;
            goto LAB_00b3b200;
          }
        }
        uVar8 = 2;
        if ((int)*(uint *)(iVar1 + 0x10) < 0) {
          uVar8 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
        }
        if (uVar8 != 4) {
          pppuVar12 = &local_1ec;
          puVar10 = &DAT_01c226e0;
          local_68 = (char ***)CONCAT31(local_68._1_3_,(char)uVar8);
          puVar6 = &DAT_005b5680;
          local_120._4_4_ = FUN_006a7514;
          local_120._0_4_ = (char **)&local_1d9;
LAB_00b3b200:
          local_124 = (char *)&DAT_0132b6a0;
          local_128 = pppuVar12;
          local_118 = ppppuVar14;
          local_114._0_4_ = (undefined4 ***)local_120._4_4_;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar6,&local_128,puVar10);
        }
      }
    }
LAB_00b3acd0:
    local_120._0_4_ = (char **)0xe;
    local_124 = "SignalStrength";
    local_128 = (undefined4 ***)0x80000000;
    local_64 = &LAB_012b97d8;
    local_68 = (char ***)&local_128;
    FUN_00664898(&local_1d8,&DAT_0057a667,&local_68);
    if (local_128 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_128,local_124);
    }
    puStack_98 = puStack_1d0;
    local_a4 = 0xe;
    local_ac = 0xe;
    local_dc = 0x80000000;
    local_120._0_4_ = (char **)local_220;
    local_120._4_4_ = (code *)local_21c;
    local_118 = (undefined4 ****)local_218;
    local_114._0_4_ = pppuStack_214;
    local_114._4_4_ = pcStack_210;
    local_10c = puStack_20c;
    local_108 = local_208;
    local_104 = pcStack_204;
    puStack_100 = puStack_200;
    pppuStack_fc = pppuStack_1fc;
    local_f8 = pcStack_1f8;
    local_f4 = puStack_1f4;
    local_124 = (char *)CONCAT31(local_124._1_3_,1);
    local_e8 = (undefined1 *)0x80000001;
    local_7c = 0;
    local_7b = 0;
    local_128 = (undefined4 ***)0x0;
    local_c4 = 0x80000000;
    local_d0 = 0x80000000;
    local_f0 = (undefined4 ***)0x0;
    local_8c = 0;
    local_90 = 4;
    local_94 = 0;
    local_b8 = 0x80000000;
    local_80 = 0;
    local_84 = 8;
    local_88 = 0;
    local_ec = (char *)0x0;
    local_a8 = puVar4;
    local_a0 = local_1d8;
    FUN_006e10e8(&local_1d8,&local_260,&local_22c,&local_128);
    FUN_00abfaf0(&local_1d8);
    uVar3 = 0xe;
    puVar13 = (undefined4 *)thunk_FUN_01be5118(0xe);
    if (puVar13 == (undefined4 *)0x0) {
LAB_00b3b228:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar3);
    }
    FUN_01bed4e2(puVar13,"encryptionType",0xe);
    local_218 = (undefined1 *)0xe;
    local_220 = (undefined4 *)&DAT_0000000e;
    local_21c = puVar13;
    puVar13 = (undefined4 *)thunk_FUN_01be5118(0xe);
    if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xe);
    }
    FUN_01bed4e2(puVar13,"encryptionType",0xe);
    FUN_006e01d0(&local_1d8);
    FUN_00ad5c88(&local_68,param_2);
    local_a4 = 0xe;
    local_ac = 0xe;
    local_dc = 0x80000000;
    local_118 = (undefined4 ****)puStack_1d0;
    local_114._0_4_ = pppuStack_1cc;
    local_114._4_4_ = local_1c8;
    local_10c = puStack_1c4;
    local_108 = local_1c0;
    local_104 = pcStack_1bc;
    puStack_100 = local_1b8;
    pppuStack_fc = pppuStack_1b4;
    local_f8 = pcStack_1b0;
    local_f4 = puStack_1ac;
    local_a0._0_4_ = local_68;
    local_a0._4_4_ = (undefined4 *)local_64;
    puStack_98 = local_60;
    local_124 = (char *)CONCAT31(local_124._1_3_,1);
    local_e8 = (undefined1 *)0x80000001;
    local_7c = 0;
    local_7b = 0;
    local_90 = 4;
    local_128 = (undefined4 ***)0x0;
    local_c4 = 0x80000000;
    local_d0 = 0x80000000;
    local_f0 = (undefined4 ***)0x0;
    local_8c = 0;
    local_94 = 0;
    local_b8 = 0x80000000;
    local_80 = 0;
    local_84 = 8;
    local_88 = 0;
    local_ec = (char *)0x0;
    local_a8 = puVar13;
    local_120 = local_1d8;
    FUN_006e10e8(&local_1d8,&local_260,&local_220,&local_128);
    FUN_00abfaf0(&local_1d8);
    uVar3 = 9;
    puVar13 = (undefined4 *)thunk_FUN_01be5118(9);
    if (puVar13 == (undefined4 *)0x0) goto LAB_00b3b228;
    FUN_01bed4e2(puVar13,"connectedaccess_pointsOFFLINELOW",9);
    local_218 = (undefined1 *)0x9;
    local_220 = (undefined4 *)&DAT_00000009;
    local_21c = puVar13;
    puVar13 = (undefined4 *)thunk_FUN_01be5118(9);
    if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(puVar13,"connectedaccess_pointsOFFLINELOW",9);
    FUN_006e01d0(&local_1d8);
    FUN_006ded7c(&local_68,param_2);
    local_a4 = 9;
    local_ac = 9;
    local_dc = 0x80000000;
    local_118 = (undefined4 ****)puStack_1d0;
    local_114._0_4_ = pppuStack_1cc;
    local_114._4_4_ = local_1c8;
    local_10c = puStack_1c4;
    local_108 = local_1c0;
    local_104 = pcStack_1bc;
    puStack_100 = local_1b8;
    pppuStack_fc = pppuStack_1b4;
    local_f8 = pcStack_1b0;
    local_f4 = puStack_1ac;
    local_a0._0_4_ = local_68;
    local_a0._4_4_ = (undefined4 *)local_64;
    puStack_98 = local_60;
    local_124 = (char *)CONCAT31(local_124._1_3_,1);
    local_e8 = (undefined1 *)0x80000001;
    local_7c = 0;
    local_7b = 0;
    local_90 = 4;
    local_128 = (undefined4 ***)0x0;
    local_c4 = 0x80000000;
    local_d0 = 0x80000000;
    local_f0 = (undefined4 ***)0x0;
    local_8c = 0;
    local_94 = 0;
    local_b8 = 0x80000000;
    local_80 = 0;
    local_84 = 8;
    local_88 = 0;
    local_ec = (char *)0x0;
    local_a8 = puVar13;
    local_120 = local_1d8;
    FUN_006e10e8(&local_1d8,&local_260,&local_220,&local_128);
    FUN_00abfaf0(&local_1d8);
    puVar11 = (uint *)((uint)&local_1d8 | 4);
    *puVar11 = local_260;
    puVar11[1] = uStack_25c;
    puVar11[2] = uStack_258;
    puVar11[3] = local_254;
    puVar11[4] = local_250;
    puVar11[5] = local_24c;
    puVar11[6] = local_248;
    puVar11[7] = (uint)puStack_244;
    puVar11[8] = uStack_240;
    puVar11[9] = uStack_23c;
    puVar11[10] = uStack_238;
    puVar11[0xb] = uStack_234;
    local_118 = (undefined4 ****)0x80000001;
    local_10c = puStack_1d0;
    local_108 = pppuStack_1cc;
    local_104 = local_1c8;
    puStack_100 = puStack_1c4;
    pppuStack_fc = local_1c0;
    local_f8 = pcStack_1bc;
    local_f4 = local_1b8;
    local_f0 = pppuStack_1b4;
    local_ec = pcStack_1b0;
    local_e8 = puStack_1ac;
    uStack_e4 = uStack_1a8;
    local_94 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_8c = local_8c & 0xffff0000;
    local_90 = 0x10000;
    local_a0._0_4_ = (char ***)&DAT_80000000;
    local_ac = 0x80000000;
    local_b4 = 8;
    local_c0 = 4;
    local_bc = 0;
    local_c4 = 0;
    local_d4 = 0x28;
    local_e0 = 0;
    local_d8 = "boser::web::graphql::bos::wifi::WifiCell";
    local_dc = CONCAT31(local_dc._1_3_,1);
    local_114 = local_1d8;
    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                         &DAT_00570418,8);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar1,&local_128,0xb0);
    goto LAB_00b3b120;
  }
  uVar15 = FUN_006a71d4();
  puVar7 = (undefined1 *)((ulonglong)uVar15 >> 0x20);
  iVar2 = (int)uVar15;
  if (iVar2 == 0) goto LAB_00b3b120;
  local_1d8 = uVar15;
  if (puVar7 == &DAT_00000028) {
    iVar2 = thunk_FUN_01bed842("boser::web::graphql::bos::wifi::WifiCell",iVar2,0x28);
    if (iVar2 != 0) goto LAB_00b3ac14;
  }
  else {
    if (puVar7 == &DAT_0000000d) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00b3b120;
    }
LAB_00b3ac14:
    iVar2 = FUN_015db690(param_2 + 0x20,&DAT_00570418,8);
    if (iVar2 == 0) {
      local_118 = &local_284;
      puVar10 = &DAT_01c226d0;
      puVar6 = &DAT_00572c5c;
      local_120._0_4_ = &local_27c;
      local_120._4_4_ = (code *)&DAT_0132b6a0;
      local_128 = (undefined4 ***)&local_1d8;
      goto LAB_00b3b188;
    }
  }
  uVar8 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar8 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar8 == 1) {
LAB_00b3b120:
    FUN_00b23950(param_1);
    return;
  }
  local_118 = (undefined4 ****)&local_68;
  local_120._0_4_ = (char **)&local_271;
  puVar10 = &DAT_01c226e0;
  local_68 = (char ***)CONCAT31(local_68._1_3_,(char)uVar8);
  puVar6 = &DAT_005b5680;
  local_120._4_4_ = FUN_006a7514;
  local_128 = &local_284;
LAB_00b3b188:
  local_124 = (char *)&DAT_0132b6a0;
  local_114._0_4_ = (undefined4 ***)local_120._4_4_;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar6,&local_128,puVar10);
}

