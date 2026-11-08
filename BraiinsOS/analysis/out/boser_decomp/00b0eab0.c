// FUN_00b0eab0 @ 00b0eab0 size=3892 calls_out=28 calls_in=2
// strings: boser::web::graphql::event::Appeal | Appeal | Appeal | __fake_type__ | boser::web::graphql::event::Appeal | Appeal

void FUN_00b0eab0(undefined4 param_1,int param_2)

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
  undefined4 ***pppuVar11;
  uint *puVar12;
  undefined4 ****ppppuVar13;
  undefined4 *puVar14;
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
  undefined4 *local_228;
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
  puVar14 = (undefined4 *)(param_2 + 0x40);
  local_27c = "boser::web::graphql::event::Appeal";
  local_278 = 0x22;
  local_280 = 6;
  local_284 = (undefined4 ***)0x4017e6;
  iVar1 = FUN_006c176c(*puVar14,*(undefined4 *)(param_2 + 0x44),"Appeal",6);
  if (iVar1 == 0) {
    local_64 = (char *)thunk_FUN_01be5118(6);
    if (local_64 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,6);
    }
    *(undefined2 *)((int)local_64 + 4) = 0x6c61;
    *(undefined4 *)local_64 = 0x65707041;
    local_60 = (undefined1 *)0x6;
    local_68 = (char ***)&DAT_00000006;
    FUN_006a0cfc(&local_128,1,"boser::web::graphql::event::Appeal",0x22);
    FUN_006c2a34(&local_1d8,puVar14,&local_68,&local_128);
    if (local_1c8 != (char *)0x80000006) {
      FUN_00abf870(&local_1d8);
    }
    local_124 = "Appeal";
    local_120._0_4_ = (char **)&DAT_00000006;
    local_128 = (undefined4 ***)0x80000000;
    uVar3 = FUN_0160ec7c(local_270,&local_128);
    uVar15 = thunk_FUN_01bee35a(uVar3,0x2c0);
    puVar12 = (uint *)((int)uVar15 + (int)((ulonglong)uVar15 >> 0x20));
    if ((char)puVar12[4] == '\0') {
      FUN_019ae6ac(&local_128);
      *puVar12 = (uint)local_128;
      puVar12[1] = (uint)local_124;
      puVar12[2] = (uint)(char **)local_120;
      puVar12[3] = (uint)local_120._4_4_;
      *(undefined1 *)(puVar12 + 4) = 1;
    }
    local_260 = *puVar12;
    uStack_25c = puVar12[1];
    local_254 = puVar12[3];
    puVar9 = puVar12 + 2;
    uStack_258 = *puVar9;
    local_248 = 0;
    local_250 = 0;
    *puVar12 = local_260 + 1;
    puVar12[1] = uStack_25c + (0xfffffffe < local_260);
    local_24c = 8;
    puStack_244 = &DAT_0056d238;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_238 = 0;
    uVar3 = 2;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(2);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00b0f930;
    *(undefined2 *)puVar4 = 0x6469;
    local_218 = (undefined1 *)0x2;
    local_220 = (undefined4 *)0x2;
    local_21c = puVar4;
    puVar4 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,2);
    }
    *(undefined2 *)puVar4 = 0x6469;
    FUN_006e01d0(&local_1d8);
    ppppuVar13 = (undefined4 ****)&local_68;
    FUN_006c9534(ppppuVar13,param_2);
    local_a4 = 2;
    local_ac = 2;
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
    local_90 = 4;
    local_7c = 0;
    local_128 = (undefined4 ***)0x0;
    local_c4 = 0x80000000;
    local_d0 = 0x80000000;
    local_7b = 0;
    local_f0 = (undefined4 ***)0x0;
    local_8c = 0;
    local_94 = 0;
    local_b8 = 0x80000000;
    local_80 = 0;
    local_84 = 8;
    local_88 = 0;
    local_ec = (char *)0x0;
    local_a8 = puVar4;
    FUN_006e10e8(&local_1d8,&local_260,&local_220,&local_128);
    pppuVar11 = (undefined4 ***)&local_1d8;
    FUN_00abfaf0(pppuVar11);
    uVar3 = 4;
    puVar4 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00b0f930;
    *puVar4 = 0x646e696b;
    local_224 = 4;
    local_22c = 4;
    local_228 = puVar4;
    puVar4 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    *puVar4 = 0x646e696b;
    FUN_006e01d0(&local_220);
    local_1e4 = "boser::web::graphql::event::AppealKind";
    local_1d9 = 4;
    local_1e0 = 0x26;
    local_1e8 = 10;
    local_1ec = (undefined4 ***)0x3ec068;
    iVar1 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
    if (iVar1 == 0) {
      iVar1 = FUN_01298504(10,1);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,10);
      }
      FUN_01bed4e2(iVar1,"AppealKindevent open/boser/boser/src/web/graphql/event.rs:185",10);
      local_60 = (undefined1 *)0xa;
      local_68 = (char ***)0xa;
      local_64 = (char *)iVar1;
      FUN_006a0cfc(&local_128,4,"boser::web::graphql::event::AppealKind",0x26);
      FUN_006c2a34(&local_1d8,puVar14,&local_68,&local_128);
      if (local_1c8 != (char *)0x80000006) {
        FUN_00abf870(&local_1d8);
      }
      local_124 = "AppealKindevent open/boser/boser/src/web/graphql/event.rs:185";
      local_120._0_4_ = (char **)0xa;
      local_128 = (undefined4 ***)0x80000000;
      FUN_0160ec7c(&local_78,&local_128);
      if ((char)puVar12[4] == '\0') {
        FUN_019ae6ac(&local_128);
        *puVar12 = (uint)local_128;
        puVar12[1] = (uint)local_124;
        *puVar9 = (uint)(char **)local_120;
        puVar12[3] = (uint)local_120._4_4_;
        *(undefined1 *)(puVar12 + 4) = 1;
      }
      local_68 = (char ***)*puVar12;
      local_64 = (char *)puVar12[1];
      local_60 = (undefined1 *)*puVar9;
      pppuStack_5c = (undefined4 ***)puVar12[3];
      local_50 = (undefined4 ***)0x0;
      local_58 = (char *)0x0;
      *puVar12 = (int)local_68 + 1;
      puVar12[1] = (uint)(local_64 + ((undefined4 ***)0xfffffffe < local_68));
      uVar3 = 4;
      local_54 = (undefined1 *)0x4;
      pcStack_4c = (char *)&DAT_0056d238;
      puStack_48 = (undefined1 *)0x0;
      uStack_44 = 0;
      uStack_40 = 0;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(4);
      if (puVar14 == (undefined4 *)0x0) {
LAB_00b0f940:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar3);
      }
      *puVar14 = 0x4f464e49;
      local_2c = 4;
      local_34 = 4;
      local_30 = puVar14;
      pcVar5 = (char *)thunk_FUN_01be5118(4);
      if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,4);
      }
      local_f8 = &DAT_80000001;
      builtin_strncpy(pcVar5,"INFO",4);
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
      uVar3 = 7;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar14 == (undefined4 *)0x0) goto LAB_00b0f940;
      *(undefined4 *)((int)puVar14 + 3) = 0x53534543;
      *puVar14 = 0x43435553;
      local_2c = 7;
      local_34 = 7;
      local_30 = puVar14;
      pcVar5 = (char *)thunk_FUN_01be5118(7);
      if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      builtin_strncpy(pcVar5,"SUCCESS",7);
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
      uVar3 = 7;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(7);
      if (puVar14 == (undefined4 *)0x0) goto LAB_00b0f940;
      *(undefined4 *)((int)puVar14 + 3) = 0x474e494e;
      *puVar14 = 0x4e524157;
      local_2c = 7;
      local_34 = 7;
      local_30 = puVar14;
      pcVar5 = (char *)thunk_FUN_01be5118(7);
      if (pcVar5 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,7);
      }
      builtin_strncpy(pcVar5,"WARNING",7);
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
      uVar3 = 5;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(5);
      if (puVar14 == (undefined4 *)0x0) goto LAB_00b0f940;
      *(undefined1 *)(puVar14 + 1) = 0x52;
      *puVar14 = 0x4f525245;
      local_2c = 5;
      local_34 = 5;
      local_30 = puVar14;
      puVar14 = (undefined4 *)thunk_FUN_01be5118(5);
      if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,5);
      }
      *(undefined1 *)(puVar14 + 1) = 0x52;
      *puVar14 = 0x4f525245;
      local_f8 = (char *)0x80000001;
      local_10c = (undefined1 *)0x8;
      local_e8 = (undefined1 *)((uint)local_e8 & 0xffffff00);
      local_ec = (char *)0x0;
      local_104 = (char *)0x80000000;
      local_120._0_4_ = (char **)0x5;
      local_128 = (undefined4 ***)0x5;
      local_108 = (undefined4 ***)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (undefined4 ***)0x0;
      local_118 = (undefined4 ****)0x4;
      local_120._4_4_ = (code *)0x0;
      local_124 = (char *)puVar14;
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
      local_ac = 8;
      local_b8 = 4;
      local_a4 = local_a4 & 0xffffff00;
      local_a8 = (undefined4 *)0x0;
      local_b0 = 0;
      local_b4 = 0;
      local_bc = 0;
      local_d8 = (char *)0x0;
      local_d4 = 0x80000000;
      local_10c = (undefined1 *)0x26;
      local_118 = (undefined4 ****)&DAT_80000004;
      local_114._4_4_ = "boser::web::graphql::event::AppealKind";
      iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                           "AppealKindevent open/boser/boser/src/web/graphql/event.rs:185",10);
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
        if (puVar7 == &DAT_00000026) {
          iVar2 = thunk_FUN_01bed842("boser::web::graphql::event::AppealKind",iVar2,0x26);
          if (iVar2 != 0) goto LAB_00b0f39c;
        }
        else {
          if (puVar7 == &DAT_0000000d) {
            iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
            if (iVar2 == 0) goto LAB_00b0f3d4;
          }
LAB_00b0f39c:
          iVar2 = FUN_015db690(param_2 + 0x20,
                               "AppealKindevent open/boser/boser/src/web/graphql/event.rs:185",10);
          if (iVar2 == 0) {
            ppppuVar13 = &local_1ec;
            local_120._0_4_ = &local_1e4;
            puVar10 = &DAT_01c226d0;
            puVar6 = &DAT_00572c5c;
            local_120._4_4_ = (code *)&DAT_0132b6a0;
            goto LAB_00b0f908;
          }
        }
        uVar8 = 2;
        if ((int)*(uint *)(iVar1 + 0x10) < 0) {
          uVar8 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
        }
        if (uVar8 != 4) {
          pppuVar11 = &local_1ec;
          puVar10 = &DAT_01c226e0;
          local_68 = (char ***)CONCAT31(local_68._1_3_,(char)uVar8);
          puVar6 = &DAT_005b5680;
          local_120._4_4_ = FUN_006a7514;
          local_120._0_4_ = (char **)&local_1d9;
LAB_00b0f908:
          local_124 = (char *)&DAT_0132b6a0;
          local_128 = pppuVar11;
          local_118 = ppppuVar13;
          local_114._0_4_ = (undefined4 ***)local_120._4_4_;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar6,&local_128,puVar10);
        }
      }
    }
LAB_00b0f3d4:
    local_120._0_4_ = (char **)0xa;
    local_64 = &LAB_012b97d8;
    local_124 = "AppealKindevent open/boser/boser/src/web/graphql/event.rs:185";
    local_128 = (undefined4 ***)0x80000000;
    local_68 = (char ***)&local_128;
    FUN_00664898(&local_1d8,&DAT_0057a667,&local_68);
    if (local_128 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_128,local_124);
    }
    puStack_98 = puStack_1d0;
    local_a4 = 4;
    local_ac = 4;
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
    local_a0 = local_1d8;
    FUN_006e10e8(&local_1d8,&local_260,&local_22c,&local_128);
    FUN_00abfaf0(&local_1d8);
    uVar3 = 9;
    puVar14 = (undefined4 *)thunk_FUN_01be5118(9);
    if (puVar14 == (undefined4 *)0x0) {
LAB_00b0f930:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar3);
    }
    FUN_01bed4e2(puVar14,&DAT_004c1920,9);
    local_218 = (undefined1 *)0x9;
    local_220 = (undefined4 *)&DAT_00000009;
    local_21c = puVar14;
    puVar14 = (undefined4 *)thunk_FUN_01be5118(9);
    if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(puVar14,&DAT_004c1920,9);
    FUN_006e01d0(&local_1d8);
    FUN_011e6a00(&local_68,param_2);
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
    local_a8 = puVar14;
    local_120 = local_1d8;
    FUN_006e10e8(&local_1d8,&local_260,&local_220,&local_128);
    FUN_00abfaf0(&local_1d8);
    uVar3 = 7;
    puVar14 = (undefined4 *)thunk_FUN_01be5118(7);
    if (puVar14 == (undefined4 *)0x0) goto LAB_00b0f930;
    *(undefined4 *)((int)puVar14 + 3) = 0x65676173;
    *puVar14 = 0x7373656d;
    local_218 = (undefined1 *)0x7;
    local_220 = (undefined4 *)&DAT_00000007;
    local_21c = puVar14;
    puVar14 = (undefined4 *)thunk_FUN_01be5118();
    if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,7);
    }
    *(undefined4 *)((int)puVar14 + 3) = 0x65676173;
    *puVar14 = 0x7373656d;
    FUN_006e01d0(&local_1d8);
    FUN_006c86e0(&local_68,param_2);
    local_a4 = 7;
    local_ac = 7;
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
    local_a8 = puVar14;
    local_120 = local_1d8;
    FUN_006e10e8(&local_1d8,&local_260,&local_220,&local_128);
    FUN_00abfaf0(&local_1d8);
    puVar12 = (uint *)((uint)&local_1d8 | 4);
    *puVar12 = local_260;
    puVar12[1] = uStack_25c;
    puVar12[2] = uStack_258;
    puVar12[3] = local_254;
    puVar12[4] = local_250;
    puVar12[5] = local_24c;
    puVar12[6] = local_248;
    puVar12[7] = (uint)puStack_244;
    puVar12[8] = uStack_240;
    puVar12[9] = uStack_23c;
    puVar12[10] = uStack_238;
    puVar12[0xb] = uStack_234;
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
    local_d4 = 0x22;
    local_e0 = 0;
    local_d8 = "boser::web::graphql::event::Appeal";
    local_dc = CONCAT31(local_dc._1_3_,1);
    local_114 = local_1d8;
    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),"Appeal",6)
    ;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar1,&local_128,0xb0);
    goto LAB_00b0f828;
  }
  uVar15 = FUN_006a71d4();
  puVar7 = (undefined1 *)((ulonglong)uVar15 >> 0x20);
  iVar2 = (int)uVar15;
  if (iVar2 == 0) goto LAB_00b0f828;
  local_1d8 = uVar15;
  if (puVar7 == &DAT_00000022) {
    iVar2 = thunk_FUN_01bed842("boser::web::graphql::event::Appeal",iVar2,0x22);
    if (iVar2 != 0) goto LAB_00b0f318;
  }
  else {
    if (puVar7 == &DAT_0000000d) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00b0f828;
    }
LAB_00b0f318:
    iVar2 = FUN_015db690(param_2 + 0x20,"Appeal",6);
    if (iVar2 == 0) {
      local_118 = &local_284;
      puVar10 = &DAT_01c226d0;
      puVar6 = &DAT_00572c5c;
      local_120._0_4_ = &local_27c;
      local_120._4_4_ = (code *)&DAT_0132b6a0;
      local_128 = (undefined4 ***)&local_1d8;
      goto LAB_00b0f890;
    }
  }
  uVar8 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar8 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar8 == 1) {
LAB_00b0f828:
    FUN_01192e28(param_1);
    return;
  }
  local_118 = (undefined4 ****)&local_68;
  local_120._0_4_ = (char **)&local_271;
  puVar10 = &DAT_01c226e0;
  local_68 = (char ***)CONCAT31(local_68._1_3_,(char)uVar8);
  puVar6 = &DAT_005b5680;
  local_120._4_4_ = FUN_006a7514;
  local_128 = &local_284;
LAB_00b0f890:
  local_124 = (char *)&DAT_0132b6a0;
  local_114._0_4_ = (undefined4 ***)local_120._4_4_;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar6,&local_128,puVar10);
}

