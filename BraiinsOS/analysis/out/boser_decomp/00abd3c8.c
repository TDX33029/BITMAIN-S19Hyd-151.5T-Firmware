// FUN_00abd3c8 @ 00abd3c8 size=3616 calls_out=26 calls_in=3
// strings: boser::web::graphql::bosminer::info::miner_status::ExpectedTime | ExpectedTime | ExpectedTime | __fake_type__ | ExpectedTime | boser::web::graphql::bosminer::info::miner_status::ExpectedTime

void FUN_00abd3c8(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  char ***pppcVar12;
  int iVar13;
  undefined *puVar14;
  uint *puVar15;
  undefined4 uVar16;
  uint ***pppuVar17;
  uint *puVar18;
  char ****ppppcVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  longlong lVar22;
  char ***local_2a8;
  uint local_290;
  char ***local_284;
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
  undefined4 local_220;
  uint local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  char ***local_1ec;
  undefined4 local_1e8;
  char *local_1e4;
  undefined4 local_1e0;
  undefined1 local_1d9;
  undefined8 local_1d8;
  undefined1 *puStack_1d0;
  char ***pppcStack_1cc;
  char ***local_1c8;
  undefined1 *puStack_1c4;
  char ***local_1c0;
  char ***pppcStack_1bc;
  undefined1 *local_1b8;
  char ***pppcStack_1b4;
  char ***pppcStack_1b0;
  undefined1 *puStack_1ac;
  undefined4 uStack_1a8;
  uint ***local_128;
  char *local_124;
  uint **local_120;
  code *local_11c;
  char ****local_118;
  undefined8 local_114;
  undefined1 *local_10c;
  char ***local_108;
  char ***local_104;
  undefined1 *local_100;
  char ***local_fc;
  char ***local_f8;
  undefined1 *local_f4;
  char ***local_f0;
  char ***local_ec;
  undefined1 *local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  char *local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_ac;
  int local_a8;
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
  undefined1 local_78 [4];
  undefined4 uStack_74;
  undefined4 ****local_68;
  char ***local_64;
  undefined1 *local_60;
  char ***pppcStack_5c;
  char ***local_58;
  undefined1 *local_54;
  char ***local_50;
  char ***pppcStack_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  
  local_271 = 1;
  puVar20 = (undefined4 *)(param_2 + 0x40);
  local_27c = "boser::web::graphql::bosminer::info::miner_status::ExpectedTime";
  local_278 = 0x3f;
  local_280 = 0xc;
  local_284 = (char ***)0x4a1ec0;
  iVar1 = FUN_006c176c(*puVar20,*(undefined4 *)(param_2 + 0x44),"ExpectedTime",0xc);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_01be5118(0xc);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xc);
    }
    FUN_01bed4e2(iVar1,"ExpectedTime",0xc);
    local_60 = (undefined1 *)0xc;
    local_68 = (undefined4 ****)0xc;
    local_64 = (char ***)iVar1;
    FUN_006a0cfc(&local_128,1,"boser::web::graphql::bosminer::info::miner_status::ExpectedTime",0x3f
                );
    FUN_006c2a34(&local_1d8,puVar20,&local_68,&local_128);
    if (local_1c8 != (char ***)0x80000006) {
      FUN_00abf870(&local_1d8);
    }
    local_120 = (uint **)0xc;
    local_128 = (undefined4 ***)0x80000000;
    local_124 = "ExpectedTime";
    FUN_0160ec7c(local_270,&local_128);
    lVar22 = FUN_013245a0("\nA point in time the miner is expected to leave the current state, together with\nhow precisely that time is known."
                          ,0x72);
    uVar11 = (uint)((ulonglong)lVar22 >> 0x20);
    uVar16 = 0;
    if (lVar22 < 0) {
LAB_00abd534:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar16,uVar11);
    }
    if (uVar11 == 0) {
      local_290 = 0;
      iVar1 = 1;
    }
    else {
      uVar16 = 1;
      iVar1 = FUN_01298504(uVar11,1);
      local_290 = uVar11;
      if (iVar1 == 0) goto LAB_00abd534;
    }
    uVar16 = FUN_01bed4e2(iVar1,(int)lVar22,uVar11);
    uVar21 = thunk_FUN_01bee35a(uVar16,0x2c0);
    puVar18 = (uint *)((int)uVar21 + (int)((ulonglong)uVar21 >> 0x20));
    if ((char)puVar18[4] == '\0') {
      FUN_019ae6ac(&local_128);
      *puVar18 = (uint)local_128;
      puVar18[1] = (uint)local_124;
      puVar18[2] = (uint)local_120;
      puVar18[3] = (uint)local_11c;
      *(undefined1 *)(puVar18 + 4) = 1;
    }
    local_260 = *puVar18;
    uStack_25c = puVar18[1];
    local_254 = puVar18[3];
    puVar15 = puVar18 + 2;
    uStack_258 = *puVar15;
    local_248 = 0;
    local_250 = 0;
    *puVar18 = local_260 + 1;
    puVar18[1] = uStack_25c + (0xfffffffe < local_260);
    local_24c = 8;
    puStack_244 = &DAT_0056d238;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_238 = 0;
    uVar4 = thunk_FUN_01be5118(9);
    if (uVar4 == 0) {
LAB_00abe188:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(uVar4,&DAT_004c1920,9);
    local_218 = 9;
    local_220 = 9;
    local_21c = uVar4;
    iVar2 = thunk_FUN_01be5118(9);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(iVar2,&DAT_004c1920,9);
    FUN_006e01d0(&local_1d8);
    ppppcVar19 = (char ****)&local_68;
    FUN_011e6a00(ppppcVar19,param_2);
    local_a4 = 9;
    local_ac = 9;
    local_dc = 0x80000000;
    local_120 = (uint **)local_1d8;
    local_11c = (code *)local_1d8._4_4_;
    local_118 = (char ****)puStack_1d0;
    local_114._0_4_ = pppcStack_1cc;
    local_114._4_4_ = (char *)local_1c8;
    local_10c = puStack_1c4;
    local_108 = local_1c0;
    local_104 = pppcStack_1bc;
    local_100 = local_1b8;
    local_fc = pppcStack_1b4;
    local_f8 = pppcStack_1b0;
    local_f4 = puStack_1ac;
    local_a0._0_4_ = (char ***)local_68;
    local_a0._4_4_ = (int)local_64;
    puStack_98 = local_60;
    local_124 = (char *)CONCAT31(local_124._1_3_,1);
    local_e8 = (undefined1 *)0x80000001;
    local_90 = 4;
    local_7c = 0;
    local_128 = (undefined4 ***)0x0;
    local_c4 = 0x80000000;
    local_d0 = -0x80000000;
    local_7b = 0;
    local_f0 = (char ***)0x0;
    local_8c = 0;
    local_94 = 0;
    local_b8 = 0x80000000;
    local_80 = 0;
    local_84 = 8;
    local_88 = 0;
    local_ec = (char ***)0x0;
    local_a8 = iVar2;
    FUN_006e10e8(&local_1d8,&local_260,&local_220,&local_128);
    pppuVar17 = (uint ***)&local_1d8;
    FUN_00abfaf0(pppuVar17);
    iVar2 = thunk_FUN_01be5118(9);
    if (iVar2 == 0) goto LAB_00abe188;
    FUN_01bed4e2(iVar2,"precisioniso1+ignoreoffset_houroffset_minuteoffset_second",9);
    local_224 = 9;
    local_22c = 9;
    local_228 = iVar2;
    iVar2 = thunk_FUN_01be5118(9);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(iVar2,"precisioniso1+ignoreoffset_houroffset_minuteoffset_second",9);
    FUN_006e01d0(&local_220);
    local_1d9 = 4;
    local_1e0 = 0x40;
    local_1e4 = "boser::web::graphql::bosminer::info::miner_status::TimePrecision";
    local_1e8 = 0xd;
    local_1ec = (char ***)0x3ed710;
    iVar5 = FUN_006c176c(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                         "TimePrecision",0xd);
    if (iVar5 == 0) {
      iVar5 = FUN_01298504(0xd,1);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0xd);
      }
      FUN_01bed4e2(iVar5,"TimePrecision",0xd);
      local_60 = (undefined1 *)0xd;
      local_68 = (undefined4 ****)0xd;
      local_64 = (char ***)iVar5;
      FUN_006a0cfc(&local_128,4,"boser::web::graphql::bosminer::info::miner_status::TimePrecision",
                   0x40);
      FUN_006c2a34(&local_1d8,puVar20,&local_68,&local_128);
      if (local_1c8 != (char ***)0x80000006) {
        FUN_00abf870(&local_1d8);
      }
      local_124 = "TimePrecision";
      local_120 = (uint **)0xd;
      local_128 = (undefined4 ***)0x80000000;
      FUN_0160ec7c(local_78,&local_128);
      lVar22 = FUN_013245a0("\nPrecision of an `ExpectedTime`: whether the timestamp is exact or an upper bound."
                            ,0x52);
      iVar5 = (int)((ulonglong)lVar22 >> 0x20);
      uVar16 = 0;
      if (lVar22 < 0) {
LAB_00abd978:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar16,iVar5);
      }
      if (iVar5 == 0) {
        iVar7 = 1;
        iVar6 = 0;
      }
      else {
        uVar16 = 1;
        iVar7 = FUN_01298504(iVar5,1);
        iVar6 = iVar5;
        if (iVar7 == 0) goto LAB_00abd978;
      }
      FUN_01bed4e2(iVar7,(int)lVar22,iVar5);
      if ((char)puVar18[4] == '\0') {
        FUN_019ae6ac(&local_128);
        *puVar18 = (uint)local_128;
        puVar18[1] = (uint)local_124;
        *puVar15 = (uint)local_120;
        puVar18[3] = (uint)local_11c;
        *(undefined1 *)(puVar18 + 4) = 1;
      }
      local_68 = (undefined4 ****)*puVar18;
      local_64 = (char ***)puVar18[1];
      local_50 = (char ***)0x0;
      local_58 = (char ***)0x0;
      *puVar18 = (uint)((int)local_68 + 1);
      puVar18[1] = (uint)((int)local_64 + (uint)((char ***)0xfffffffe < local_68));
      local_54 = (undefined1 *)0x4;
      local_60 = (undefined1 *)*puVar15;
      pppcStack_5c = (char ***)puVar18[3];
      pppcStack_4c = (char ***)&DAT_0056d238;
      puStack_48 = (undefined1 *)0x0;
      uStack_44 = 0;
      uStack_40 = 0;
      uVar16 = 3;
      puVar20 = (undefined4 *)thunk_FUN_01be5118(3);
      if (puVar20 == (undefined4 *)0x0) {
LAB_00abe1f0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar16);
      }
      *(undefined1 *)((int)puVar20 + 2) = 0x58;
      *(undefined2 *)puVar20 = 0x414d;
      local_2c = 3;
      local_34 = 3;
      local_30 = puVar20;
      pcVar8 = (char *)thunk_FUN_01be5118();
      if (pcVar8 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,3);
      }
      pcVar8[2] = 'X';
      pcVar8[0] = 'M';
      pcVar8[1] = 'A';
      lVar22 = FUN_013245a0("\nUpper bound: the event happens no later than the timestamp.",0x3c);
      pppcVar12 = (char ***)((ulonglong)lVar22 >> 0x20);
      uVar16 = 0;
      if (lVar22 < 0) {
LAB_00abdda4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar16,pppcVar12);
      }
      if (pppcVar12 == (char ***)0x0) {
        puVar9 = (undefined1 *)0x1;
        local_2a8 = (char ***)0x0;
      }
      else {
        uVar16 = 1;
        puVar9 = (undefined1 *)FUN_01298504(pppcVar12,1);
        local_2a8 = pppcVar12;
        if (puVar9 == (undefined1 *)0x0) goto LAB_00abdda4;
      }
      FUN_01bed4e2(puVar9,(int)lVar22,pppcVar12);
      local_e8 = (undefined1 *)((uint)local_e8 & 0xffffff00);
      local_f8 = (char ***)0x80000001;
      local_104 = local_2a8;
      local_120 = (uint **)0x3;
      local_128 = (undefined4 ***)0x3;
      local_10c = (undefined1 *)0x8;
      local_ec = (char ***)0x0;
      local_108 = (char ***)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (char ***)0x0;
      local_118 = (char ****)0x4;
      local_11c = (code *)0x0;
      local_124 = pcVar8;
      local_100 = puVar9;
      local_fc = pppcVar12;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      uVar16 = 5;
      puVar20 = (undefined4 *)thunk_FUN_01be5118(5);
      if (puVar20 == (undefined4 *)0x0) goto LAB_00abe1f0;
      *(undefined1 *)(puVar20 + 1) = 0x54;
      *puVar20 = 0x43415845;
      local_2c = 5;
      local_34 = 5;
      local_30 = puVar20;
      puVar20 = (undefined4 *)thunk_FUN_01be5118();
      if (puVar20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,5);
      }
      *(undefined1 *)(puVar20 + 1) = 0x54;
      *puVar20 = 0x43415845;
      lVar22 = FUN_013245a0("\nExact: the event happens precisely at the timestamp.",0x35);
      iVar13 = (int)((ulonglong)lVar22 >> 0x20);
      uVar16 = 0;
      if (lVar22 < 0) {
LAB_00abdee0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar16,iVar13);
      }
      if (iVar13 == 0) {
        iVar10 = 1;
        local_2a8 = (char ***)0x0;
      }
      else {
        uVar16 = 1;
        iVar10 = FUN_01298504(iVar13,1);
        local_2a8 = (char ***)iVar13;
        if (iVar10 == 0) goto LAB_00abdee0;
      }
      FUN_01bed4e2(iVar10,(int)lVar22,iVar13);
      local_e8 = (undefined1 *)((uint)local_e8 & 0xffffff00);
      local_f8 = (char ***)0x80000001;
      local_104 = local_2a8;
      local_120 = (uint **)0x5;
      local_128 = (undefined4 ***)0x5;
      local_10c = (undefined1 *)0x8;
      local_ec = (char ***)0x0;
      local_108 = (char ***)0x0;
      local_114._4_4_ = (char *)0x0;
      local_114._0_4_ = (char ***)0x0;
      local_118 = (char ****)0x4;
      local_11c = (code *)0x0;
      local_124 = (char *)puVar20;
      local_100 = (undefined1 *)iVar10;
      local_fc = (char ***)iVar13;
      FUN_006e0c4c(&local_1d8,&local_68,&local_34,&local_128);
      FUN_00ac5708(&local_1d8);
      local_108 = (char ***)local_68;
      local_104 = local_64;
      local_100 = local_60;
      local_fc = pppcStack_5c;
      local_f8 = local_58;
      local_f4 = local_54;
      local_f0 = local_50;
      local_ec = pppcStack_4c;
      local_e8 = puStack_48;
      uStack_e4 = uStack_44;
      local_e0 = uStack_40;
      local_dc = uStack_3c;
      local_c4 = uStack_74;
      local_ac = 8;
      local_a4 = local_a4 & 0xffffff00;
      local_a8 = 0;
      local_b0 = 0;
      local_b4 = 0;
      local_bc = 0;
      local_d8 = (char *)0x0;
      local_b8 = 4;
      local_10c = (undefined1 *)0x40;
      local_118 = (char ****)&DAT_80000004;
      local_114._4_4_ = "boser::web::graphql::bosminer::info::miner_status::TimePrecision";
      local_d4 = iVar6;
      local_d0 = iVar7;
      local_cc = iVar5;
      iVar5 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                           "TimePrecision",0xd);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c226c0);
      }
      FUN_00abf870();
      FUN_01bed4e2(iVar5,&local_128,0xb0);
    }
    else {
      uVar21 = FUN_006a71d4();
      iVar7 = (int)((ulonglong)uVar21 >> 0x20);
      iVar6 = (int)uVar21;
      if (iVar6 != 0) {
        local_1d8 = uVar21;
        if (iVar7 == 0x40) {
          iVar6 = thunk_FUN_01bed842("boser::web::graphql::bosminer::info::miner_status::TimePrecision"
                                     ,iVar6,0x40);
          if (iVar6 != 0) goto LAB_00abd9cc;
        }
        else {
          if (iVar7 == 0xd) {
            iVar6 = thunk_FUN_01bed842(iVar6,"__fake_type__",0xd);
            if (iVar6 == 0) goto LAB_00abda00;
          }
LAB_00abd9cc:
          iVar6 = FUN_015db690(param_2 + 0x20,"TimePrecision",0xd);
          if (iVar6 == 0) {
            ppppcVar19 = &local_1ec;
            local_120 = (uint **)&local_1e4;
            puVar14 = &DAT_01c226d0;
            puVar3 = &DAT_00572c5c;
            local_11c = (code *)&DAT_0132b6a0;
            goto LAB_00abe11c;
          }
        }
        uVar4 = 2;
        if ((int)*(uint *)(iVar5 + 0x10) < 0) {
          uVar4 = *(uint *)(iVar5 + 0x10) ^ 0x80000000;
        }
        if (uVar4 != 4) {
          pppuVar17 = (uint ***)&local_1ec;
          puVar14 = &DAT_01c226e0;
          local_68 = (undefined4 ****)CONCAT31(local_68._1_3_,(char)uVar4);
          puVar3 = &DAT_005b5680;
          local_11c = FUN_006a7514;
          local_120 = (uint **)&local_1d9;
LAB_00abe11c:
          local_124 = (char *)&DAT_0132b6a0;
          local_128 = pppuVar17;
          local_118 = ppppcVar19;
          local_114._0_4_ = (char ***)local_11c;
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(puVar3,&local_128,puVar14);
        }
      }
    }
LAB_00abda00:
    local_124 = "TimePrecision";
    local_120 = (uint **)0xd;
    local_128 = (undefined4 ***)0x80000000;
    local_64 = (char ***)&LAB_012b97d8;
    local_68 = &local_128;
    FUN_00664898(&local_1d8,&DAT_0057a667,&local_68);
    if (local_128 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_128,local_124);
    }
    puStack_98 = puStack_1d0;
    local_a4 = 9;
    local_ac = 9;
    local_dc = 0x80000000;
    local_120 = (uint **)local_220;
    local_11c = (code *)local_21c;
    local_118 = (char ****)local_218;
    local_114._0_4_ = (char ***)uStack_214;
    local_114._4_4_ = (char *)uStack_210;
    local_10c = (undefined1 *)uStack_20c;
    local_108 = (char ***)local_208;
    local_104 = (char ***)uStack_204;
    local_100 = (undefined1 *)uStack_200;
    local_fc = (char ***)uStack_1fc;
    local_f8 = (char ***)uStack_1f8;
    local_f4 = (undefined1 *)uStack_1f4;
    local_124 = (char *)CONCAT31(local_124._1_3_,1);
    local_e8 = (undefined1 *)0x80000001;
    local_7b = 0;
    local_7c = 0;
    local_128 = (undefined4 ***)0x0;
    local_c4 = 0x80000000;
    local_d0 = 0x80000000;
    local_f0 = (char ***)0x0;
    local_8c = 0;
    local_90 = 4;
    local_94 = 0;
    local_b8 = 0x80000000;
    local_80 = 0;
    local_84 = 8;
    local_88 = 0;
    local_ec = (char ***)0x0;
    local_a8 = iVar2;
    local_a0 = local_1d8;
    FUN_006e10e8(&local_1d8,&local_260,&local_22c,&local_128);
    FUN_00abfaf0(&local_1d8);
    puVar18 = (uint *)((uint)&local_1d8 | 4);
    *puVar18 = local_260;
    puVar18[1] = uStack_25c;
    puVar18[2] = uStack_258;
    puVar18[3] = local_254;
    puVar18[4] = local_250;
    puVar18[5] = local_24c;
    puVar18[6] = local_248;
    puVar18[7] = (uint)puStack_244;
    puVar18[8] = uStack_240;
    puVar18[9] = uStack_23c;
    puVar18[10] = uStack_238;
    puVar18[0xb] = uStack_234;
    local_ac = local_290;
    local_118 = (char ****)0x80000001;
    local_10c = puStack_1d0;
    local_108 = pppcStack_1cc;
    local_104 = local_1c8;
    local_100 = puStack_1c4;
    local_fc = local_1c0;
    local_f8 = pppcStack_1bc;
    local_f4 = local_1b8;
    local_f0 = pppcStack_1b4;
    local_ec = pppcStack_1b0;
    local_e8 = puStack_1ac;
    uStack_e4 = uStack_1a8;
    local_94 = 0;
    local_b0 = 0;
    local_b8 = 0;
    local_8c = local_8c & 0xffff0000;
    local_90 = 0x10000;
    local_a0._0_4_ = (char ***)0x80000000;
    local_b4 = 8;
    local_c0 = 4;
    local_bc = 0;
    local_c4 = 0;
    local_d4 = 0x3f;
    local_e0 = 0;
    local_d8 = "boser::web::graphql::bosminer::info::miner_status::ExpectedTime";
    local_dc = CONCAT31(local_dc._1_3_,1);
    local_a8 = iVar1;
    local_a4 = uVar11;
    local_114 = local_1d8;
    iVar1 = FUN_006c4014(*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                         "ExpectedTime",0xc);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c226c0);
    }
    FUN_00abf870();
    FUN_01bed4e2(iVar1,&local_128,0xb0);
    goto LAB_00abdc20;
  }
  uVar21 = FUN_006a71d4();
  iVar5 = (int)((ulonglong)uVar21 >> 0x20);
  iVar2 = (int)uVar21;
  if (iVar2 == 0) goto LAB_00abdc20;
  local_1d8 = uVar21;
  if (iVar5 == 0x3f) {
    iVar2 = thunk_FUN_01bed842("boser::web::graphql::bosminer::info::miner_status::ExpectedTime",
                               iVar2,0x3f);
    if (iVar2 != 0) goto LAB_00abd588;
  }
  else {
    if (iVar5 == 0xd) {
      iVar2 = thunk_FUN_01bed842(iVar2,"__fake_type__",0xd);
      if (iVar2 == 0) goto LAB_00abdc20;
    }
LAB_00abd588:
    iVar2 = FUN_015db690(param_2 + 0x20,"ExpectedTime",0xc);
    if (iVar2 == 0) {
      local_118 = &local_284;
      puVar14 = &DAT_01c226d0;
      puVar3 = &DAT_00572c5c;
      local_120 = (uint **)&local_27c;
      local_11c = (code *)&DAT_0132b6a0;
      local_128 = (uint ***)&local_1d8;
      goto LAB_00abe0ac;
    }
  }
  uVar11 = 2;
  if ((int)*(uint *)(iVar1 + 0x10) < 0) {
    uVar11 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
  }
  if (uVar11 == 1) {
LAB_00abdc20:
    local_64 = (char ***)&LAB_012b97d8;
    local_68 = &local_128;
    local_120 = (uint **)0xc;
    local_124 = "ExpectedTime";
    local_128 = (undefined4 ***)0x80000000;
    FUN_00664898(&local_1d8,&DAT_0057a667,&local_68);
    uVar21 = local_1d8;
    if (local_128 != (undefined4 ***)0x80000000) {
      FUN_019bb7e0(local_128,local_124);
      uVar21 = local_1d8;
    }
    local_1d8._4_4_ = (uint)((ulonglong)uVar21 >> 0x20);
    local_1d8._0_4_ = (uint **)uVar21;
    FUN_019bb7e0((uint **)local_1d8,local_1d8._4_4_);
    local_1d8 = uVar21;
    iVar1 = thunk_FUN_01be5118(0xc);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xc);
    }
    FUN_01bed4e2(iVar1,"ExpectedTime",0xc);
    *param_1 = 0xc;
    param_1[1] = iVar1;
    param_1[2] = 0xc;
    return;
  }
  local_118 = (char ****)&local_68;
  local_120 = (uint **)&local_271;
  puVar14 = &DAT_01c226e0;
  local_68 = (undefined4 ****)CONCAT31(local_68._1_3_,(char)uVar11);
  puVar3 = &DAT_005b5680;
  local_11c = FUN_006a7514;
  local_128 = (uint ***)&local_284;
LAB_00abe0ac:
  local_124 = (char *)&DAT_0132b6a0;
  local_114._0_4_ = (char ***)local_11c;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar3,&local_128,puVar14);
}

