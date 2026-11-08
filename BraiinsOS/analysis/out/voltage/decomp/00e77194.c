// function @ 00e77194  size=12696  volt_strings=4
// strings: hash_chain | hash_chain_global | asic_boost | quick_ramping_time_up_s | quick_ramping_time_down_s | enabled | frequency | voltage | temp_control | enabled | frequency | voltage | fan_control | target_temp | dangerous_temp | cold_temp | speed | min_fan_rpm | min_fan_speed | max_fan_speed | fixed_share_ratio | enabled | user-- | manual_indefinite | cooldown_fan_speed

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e77194(undefined4 *param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *******pppppppuVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 ******ppppppuVar10;
  undefined4 *******pppppppuVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  undefined4 *extraout_r2;
  undefined *puVar18;
  int iVar19;
  uint uVar20;
  undefined4 *******pppppppuVar21;
  uint uVar22;
  undefined4 *******pppppppuVar23;
  undefined4 *******pppppppuVar24;
  int iVar25;
  undefined4 *******pppppppuVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  undefined4 *******pppppppuVar32;
  undefined4 *******pppppppuVar33;
  bool bVar34;
  double dVar35;
  undefined8 uVar36;
  undefined4 *******local_5b0;
  undefined4 *******local_5ac;
  undefined4 *******local_5a8;
  undefined4 *******local_5a4;
  undefined *local_5a0;
  undefined4 *******local_55c;
  undefined4 *******local_548;
  undefined4 *******local_544;
  undefined4 *******local_52c;
  undefined4 *******local_524;
  undefined4 *******local_50c;
  undefined4 *******local_4e0;
  undefined4 *******local_4dc;
  undefined4 *******local_4d8;
  undefined4 *******local_4d4;
  undefined4 *******local_4d0;
  undefined4 *******local_4cc;
  undefined4 *******local_4c8;
  undefined4 *******local_4c4;
  undefined4 *******local_4c0;
  undefined4 *******local_4bc;
  int local_4b8;
  undefined4 *******local_4b0;
  undefined4 *******local_4ac;
  undefined4 *******local_4a8;
  undefined4 *******pppppppuStack_4a4;
  undefined4 *******local_4a0;
  undefined4 *******local_49c;
  undefined4 *******pppppppuStack_498;
  undefined4 *******local_494;
  undefined4 *******local_490;
  undefined4 *******pppppppuStack_48c;
  undefined4 *******pppppppuStack_488;
  undefined4 *******pppppppuStack_484;
  undefined4 *******local_480;
  undefined4 *******local_47c;
  undefined4 *******local_478;
  undefined4 *******local_474;
  undefined4 *******local_470;
  undefined4 *******local_46c;
  undefined8 local_468;
  undefined4 *******local_460;
  undefined4 *******local_45c;
  undefined4 *******local_458;
  undefined4 *******local_454;
  undefined4 *******local_450;
  undefined4 *******local_44c;
  undefined4 *******local_448;
  undefined4 *******local_444;
  undefined4 *******pppppppuStack_440;
  undefined4 *******local_43c;
  undefined4 *******pppppppuStack_438;
  undefined4 *******local_434;
  undefined4 *******pppppppuStack_430;
  undefined4 *******local_42c;
  undefined4 *******local_428;
  undefined4 *******local_424;
  undefined4 *******local_420;
  undefined4 *******pppppppuStack_41c;
  undefined4 *******pppppppuStack_418;
  undefined4 *******pppppppuStack_414;
  undefined4 *******local_410;
  undefined4 *******local_40c;
  undefined4 *******pppppppuStack_408;
  undefined4 *******local_400;
  undefined4 *******local_3fc;
  undefined4 *******pppppppuStack_3f8;
  undefined4 *******pppppppuStack_3f4;
  undefined4 *******local_3f0;
  undefined4 *******pppppppuStack_3ec;
  undefined4 *******pppppppuStack_3e8;
  undefined4 *******pppppppuStack_3e4;
  undefined4 *******local_3b8;
  undefined4 *******local_3b4;
  undefined4 *******local_3b0;
  undefined4 *******local_3ac;
  undefined4 *******local_3a8;
  undefined4 *******local_3a4;
  undefined4 *******local_3a0;
  undefined4 *******pppppppuStack_39c;
  undefined4 *******local_398;
  undefined4 *******local_394;
  undefined4 *******pppppppuStack_390;
  undefined4 *******local_38c;
  undefined4 *******local_388;
  undefined4 *******pppppppuStack_384;
  undefined4 *******local_380;
  undefined4 *******local_37c;
  undefined4 *******pppppppuStack_378;
  undefined4 *******local_374;
  undefined4 *******pppppppuStack_370;
  undefined4 *******local_36c;
  undefined4 *******pppppppuStack_368;
  undefined4 *******local_364;
  undefined4 *******pppppppuStack_360;
  undefined4 *******local_35c;
  undefined4 *******local_358;
  undefined4 *******pppppppuStack_354;
  undefined4 *******pppppppuStack_350;
  undefined4 *******pppppppuStack_34c;
  undefined4 *******local_348;
  undefined4 *******local_344;
  undefined4 *******local_340;
  undefined4 *******local_338;
  undefined4 *******local_334;
  undefined4 *******local_330;
  undefined4 *******local_32c [3];
  undefined4 local_320;
  undefined4 local_314;
  undefined4 local_308;
  undefined4 local_2fc;
  undefined4 *******local_2e4;
  undefined4 *******local_2e0;
  undefined4 *******pppppppuStack_2dc;
  undefined4 *******pppppppuStack_2d8;
  undefined4 *******pppppppuStack_2d4;
  undefined4 *******local_2d0;
  undefined4 *******local_2cc;
  undefined4 *******local_2c8;
  undefined4 *******local_2c4;
  undefined4 *******local_2c0;
  undefined4 *******local_2bc;
  undefined4 *******local_2b8;
  undefined4 *******local_2b4;
  undefined4 *******pppppppuStack_2b0;
  undefined4 *******local_2ac;
  undefined4 *******local_2a8;
  undefined4 *******local_2a4;
  undefined4 *******local_2a0;
  undefined4 *******local_29c;
  undefined4 *******local_298;
  undefined4 *******local_294;
  undefined4 *******pppppppuStack_290;
  undefined4 *******local_28c;
  undefined4 *******local_288;
  undefined4 *******pppppppuStack_284;
  undefined4 *******pppppppuStack_280;
  undefined4 *******local_27c;
  undefined4 *******local_278;
  undefined4 *******pppppppuStack_274;
  undefined4 *******local_270;
  undefined4 *******local_26c;
  undefined4 local_264;
  undefined4 *******local_258;
  undefined4 *******local_254;
  undefined4 *******pppppppuStack_250;
  undefined4 *******local_248;
  undefined4 *******pppppppuStack_244;
  undefined4 *******pppppppuStack_240;
  undefined4 *******pppppppuStack_23c;
  undefined4 *******local_238;
  undefined4 *******pppppppuStack_234;
  undefined4 *******pppppppuStack_230;
  undefined4 *******pppppppuStack_22c;
  undefined4 *******local_200;
  undefined4 *******local_1fc;
  undefined4 *******local_1f8;
  undefined4 *******local_1f4;
  undefined4 *******local_1f0;
  undefined4 *******local_1ec;
  undefined4 *******local_1e8;
  undefined4 *******local_1e4;
  undefined4 *******local_1e0;
  undefined4 *******local_1dc;
  undefined4 *******local_1d8;
  undefined4 *******local_1d4;
  undefined4 *******local_1d0;
  undefined4 *******local_1cc;
  undefined4 *******local_1c8;
  undefined4 *******local_1c4;
  undefined4 *******pppppppuStack_1c0;
  undefined4 *******local_1bc;
  undefined4 *******pppppppuStack_1b8;
  undefined4 *******local_1b4;
  undefined4 *******pppppppuStack_1b0;
  undefined4 *******local_1ac;
  undefined4 *******local_1a8;
  undefined4 *******local_1a4;
  undefined4 *******local_1a0;
  undefined4 *******local_19c;
  undefined4 *******local_198;
  undefined4 *******local_194;
  undefined4 *******local_190;
  undefined4 *******local_18c;
  undefined4 *******local_188;
  undefined4 *******local_180;
  undefined4 *******local_17c;
  undefined4 *******local_178;
  undefined4 *******local_174;
  undefined4 *******local_170;
  undefined4 *******local_16c;
  undefined4 *******local_168;
  undefined4 *******local_164;
  undefined4 *******local_160;
  undefined4 *******pppppppuStack_15c;
  undefined4 *******pppppppuStack_158;
  undefined4 *******pppppppuStack_154;
  undefined4 *******local_150;
  undefined4 *******local_14c;
  undefined4 *******local_148;
  undefined4 *******local_144;
  undefined4 *******local_140;
  undefined4 *******local_13c;
  undefined4 *******local_138;
  undefined4 *******local_130;
  undefined4 *******local_12c;
  undefined4 *******local_128;
  undefined4 *******local_124;
  undefined4 *******local_120;
  undefined4 *******local_11c;
  undefined4 *******local_118;
  undefined4 *******local_114;
  undefined4 *******local_110;
  undefined4 *******local_10c;
  undefined4 *******local_108;
  undefined4 *******local_104;
  undefined4 *******local_100;
  undefined4 *******local_fc;
  undefined4 *******pppppppuStack_f8;
  undefined4 *******pppppppuStack_f4;
  undefined4 *******pppppppuStack_f0;
  undefined4 *******local_ec;
  undefined4 *******pppppppuStack_e8;
  undefined4 *******pppppppuStack_e4;
  undefined4 *******pppppppuStack_e0;
  undefined4 *******local_dc;
  undefined4 *******local_d8;
  undefined4 *******pppppppuStack_d4;
  undefined4 *******pppppppuStack_d0;
  undefined4 *******local_cc;
  undefined4 *******local_b8;
  undefined4 *******local_b4;
  undefined4 *******local_b0;
  undefined4 *******local_ac;
  undefined4 *******local_a8;
  undefined4 *******local_a4;
  undefined4 *******local_a0;
  undefined4 *******local_9c;
  undefined4 *******local_98;
  undefined4 *******local_94;
  undefined4 *******local_90;
  undefined4 *******local_8c;
  int local_88 [2];
  undefined4 *******local_80;
  undefined4 *******local_7c;
  undefined4 *******pppppppuStack_78;
  undefined4 *******pppppppuStack_74;
  undefined4 *******pppppppuStack_70;
  undefined4 *******local_6c;
  undefined4 *******pppppppuStack_68;
  undefined4 *******pppppppuStack_64;
  undefined4 *******pppppppuStack_60;
  undefined4 *******local_5c;
  undefined4 *******local_58;
  undefined4 *******pppppppuStack_54;
  undefined4 *******pppppppuStack_50;
  undefined4 *******pppppppuStack_4c;
  undefined4 *******local_40;
  undefined4 *******local_3c;
  undefined4 *******local_38;
  undefined4 *******local_34;
  
  iVar28 = param_2[0x12];
  iVar31 = param_2[0x13];
  iVar2 = *param_2;
  iVar12 = param_2[1];
  iVar19 = param_2[0x26];
  iVar17 = param_2[0x22];
  iVar3 = param_2[0x33];
  if (iVar28 != 3 || iVar31 != 0) {
    FUN_00f255d4(&local_b8,param_3,"hash_chain_global",0x11);
    if (local_b8 == (undefined4 *******)0x80000005) {
      if (*(int *)(param_3 + 0x10) == -0x80000000) goto LAB_00e79cdc;
      uVar36 = thunk_FUN_016de0ee(*(int *)(param_3 + 0x10),0x2c0);
      puVar6 = (undefined4 *)((int)uVar36 + (int)((ulonglong)uVar36 >> 0x20));
      if (*(char *)(puVar6 + 4) == '\0') {
        FUN_015f62e4(&local_b8);
        *puVar6 = local_b8;
        puVar6[1] = local_b4;
        puVar6[2] = local_b0;
        puVar6[3] = local_ac;
        *(undefined1 *)(puVar6 + 4) = 1;
      }
      local_130 = (undefined4 *******)*puVar6;
      local_12c = (undefined4 *******)puVar6[1];
      local_128 = (undefined4 *******)puVar6[2];
      local_124 = (undefined4 *******)puVar6[3];
      *puVar6 = (undefined1 *)((int)local_130 + 1);
      puVar6[1] = (undefined1 *)
                  ((int)local_12c + (uint)((undefined4 *******)0xfffffffe < local_130));
      local_114 = (undefined4 *******)&DAT_005674cc;
      local_11c = (undefined4 *******)&DAT_00000008;
      local_100 = (undefined4 *******)&DAT_80000000;
      local_110 = (undefined4 *******)0x0;
      local_118 = (undefined4 *******)0x0;
      local_120 = (undefined4 *******)0x0;
      local_10c = (undefined4 *******)0x0;
      local_108 = (undefined4 *******)0x0;
      if (((char)param_2[0x20] == '\x02') ||
         (FUN_00f17f1c(&local_b8,&local_130,"asic_boost",10,(char)param_2[0x20]),
         local_b8 == (undefined4 *******)0x80000005)) {
        if (iVar28 != 2 || iVar31 != 0) {
          iVar29 = param_2[0x16];
          iVar13 = param_2[0x17];
          if (((((char)param_2[0x1a] != '\x02') &&
               (FUN_00f17f1c(&local_b8,&local_130,"enabled",7,(char)param_2[0x1a]),
               local_b8 != (undefined4 *******)0x80000005)) ||
              ((iVar28 != 0 || iVar31 != 0 &&
               (FUN_00ecb6a8((int)*(undefined8 *)(param_2 + 0x14),&local_b8,&local_130,"frequency",9
                             ,iVar28,iVar31), local_b8 != (undefined4 *******)0x80000005)))) ||
             ((iVar29 != 0 || iVar13 != 0 &&
              (FUN_00ecb6a8((int)*(undefined8 *)(param_2 + 0x18),&local_b8,&local_130,"voltage",7,
                            iVar29,iVar13), local_b8 != (undefined4 *******)0x80000005))))
          goto LAB_00e775d8;
        }
        if (((param_2[0x1c] != 0) &&
            (FUN_00f17338(&local_b8,&local_130,"quick_ramping_time_up_s",0x17,param_2[0x1c],
                          param_2[0x1d]), local_b8 != (undefined4 *******)0x80000005)) ||
           ((param_2[0x1e] != 0 &&
            (FUN_00f17338(&local_b8,&local_130,"quick_ramping_time_down_s",0x19,param_2[0x1e],
                          param_2[0x1f]), local_b8 != (undefined4 *******)0x80000005))))
        goto LAB_00e775d8;
        FUN_016dd1aa(&local_b8,&local_130,0x78);
        FUN_0168298c(&local_3b8,&local_b8);
        if (local_364 != (undefined4 *******)&DAT_00000008) {
          FUN_016dd1aa(&local_200,&local_3b8,0x68);
          local_480 = *(undefined4 ********)(param_3 + 0x30);
          *(undefined4 *)(param_3 + 0x30) = 0x80000000;
          if (local_480 == (undefined4 *******)&DAT_80000000) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187e500);
          }
          FUN_016dd1aa(&local_47c,param_3 + 0x34,0x44);
          FUN_016dd1aa(&local_2c8,&local_3b8,0x68);
          local_2d0 = (undefined4 *******)&DAT_00000001;
          FUN_00ea0d40(&local_b8,param_3,&local_480,&local_2d0);
          FUN_016dd1aa(&local_130,&local_b0,0x70);
          if (local_130 != (undefined4 *******)&DAT_00000004) {
            FUN_00f17590(&local_130);
          }
          goto LAB_00e771f8;
        }
      }
      else {
LAB_00e775d8:
        local_364 = (undefined4 *******)&DAT_00000008;
        local_3b8 = local_b8;
        local_3b4 = local_b4;
        local_3b0 = local_b0;
        FUN_00e7a700(&local_130);
      }
      if (local_3b8 != (undefined4 *******)0x80000005) {
        local_338 = local_3b8;
        local_334 = local_3b4;
        local_330 = local_3b0;
        goto LAB_00e77500;
      }
      goto LAB_00e771f8;
    }
LAB_00e774f8:
    local_338 = local_b8;
    local_334 = local_b4;
    local_330 = local_b0;
LAB_00e77500:
    param_1[1] = local_334;
    *param_1 = local_338;
    param_1[2] = local_330;
    return;
  }
LAB_00e771f8:
  if (iVar17 != 0) {
    FUN_00f255d4(&local_b8,param_3,"hash_chain",10);
    if (local_b8 != (undefined4 *******)0x80000005) goto LAB_00e774f8;
    if (*(int *)(param_3 + 0x10) == -0x80000000) goto LAB_00e79cdc;
    pppppppuVar4 = (undefined4 *******)param_2[0x23];
    if (pppppppuVar4 == (undefined4 *******)0x0) {
      local_4b8 = 0;
    }
    else {
      local_4b8 = param_2[0x25];
      local_4cc = (undefined4 *******)param_2[0x24];
      local_4c4 = (undefined4 *******)0x0;
      local_4d4 = (undefined4 *******)0x0;
      local_4d0 = pppppppuVar4;
      local_4c0 = pppppppuVar4;
      local_4bc = local_4cc;
    }
    local_4d8 = (undefined4 *******)(uint)(pppppppuVar4 != (undefined4 *******)0x0);
    local_4c8 = local_4d8;
    FUN_016833e0(&local_b8);
    pppppppuVar4 = local_a8;
    local_200 = local_b8;
    local_1fc = local_b4;
    local_1f8 = local_b0;
    local_1f4 = local_ac;
    FUN_016dd1aa(&local_130,&local_a4,100);
    if (pppppppuVar4 == (undefined4 *******)0x80000001) {
      local_338 = local_200;
      local_334 = local_1fc;
      local_330 = local_1f8;
      local_2e4 = (undefined4 *******)&DAT_00000008;
    }
    else {
      local_2d0 = local_200;
      local_2cc = local_1fc;
      local_2c8 = local_1f8;
      local_2c4 = local_1f4;
      local_2c0 = pppppppuVar4;
      FUN_016dd1aa(&local_2bc,&local_130,100);
      puVar6 = (undefined4 *)((uint)&local_480 | 4);
      puVar7 = (undefined4 *)((uint)&local_130 | 4);
      local_524 = &local_11c;
      puVar8 = (undefined4 *)((uint)&local_b8 | 4);
LAB_00e7789c:
      do {
        uVar36 = FUN_00e94b04(&local_4d8);
        piVar14 = (int *)((ulonglong)uVar36 >> 0x20);
        iVar17 = (int)uVar36;
        if (iVar17 == 0) {
          FUN_016dd1aa(&local_b8,&local_2d0,0x78);
          FUN_0168298c(&local_338,&local_b8);
          if (local_2e4 == (undefined4 *******)&DAT_00000008) goto LAB_00e77694;
          FUN_016dd1aa(&local_2d0,&local_338,0x68);
          local_400 = *(undefined4 ********)(param_3 + 0x30);
          *(undefined4 *)(param_3 + 0x30) = 0x80000000;
          if (local_400 == (undefined4 *******)&DAT_80000000) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187e500);
          }
          FUN_016dd1aa(&local_3fc,param_3 + 0x34,0x44);
          FUN_016dd1aa(&local_3b0,&local_338,0x68);
          local_3b8 = (undefined4 *******)&DAT_00000001;
          FUN_00ea0d40(&local_b8,param_3,&local_400,&local_3b8);
          FUN_016dd1aa(&local_130,&local_b0,0x70);
          if (local_130 != (undefined4 *******)&DAT_00000004) {
            FUN_00f17590(&local_130);
          }
          goto LAB_00e776a8;
        }
        if (local_2c0 == (undefined4 *******)&DAT_80000000) {
          puVar18 = &DAT_0187e4d0;
LAB_00e79db8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00414516,0xc5,puVar18);
        }
        pppppppuVar4 = *(undefined4 ********)(iVar17 + 8);
        uVar9 = 0;
        if ((int)pppppppuVar4 < 0) {
LAB_00e7a374:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar9,local_50c);
        }
        uVar9 = *(undefined4 *)(iVar17 + 4);
        if (pppppppuVar4 == (undefined4 *******)0x0) {
          pppppppuVar21 = (undefined4 *******)0x0;
          local_50c = (undefined4 *******)&DAT_00000001;
        }
        else {
          local_50c = (undefined4 *******)thunk_FUN_016d4a50(pppppppuVar4,local_50c);
          if (local_50c == (undefined4 *******)0x0) {
            uVar9 = 1;
            local_50c = pppppppuVar4;
            goto LAB_00e7a374;
          }
          pppppppuVar21 = pppppppuVar4;
        }
        FUN_016dd1aa(local_50c,uVar9,pppppppuVar4);
        local_294 = (undefined4 *******)
                    ((((undefined4 *******)0xfffffffb < pppppppuVar4) + 0x80000003) -
                    (uint)(pppppppuVar4 + 1 < &DAT_00000004));
        if (local_2a0 != (undefined4 *******)&DAT_80000000) {
          FUN_00f174cc(&local_2a0);
          local_264 = 0x80000003;
          local_270 = (undefined4 *******)0x80000003;
          local_27c = (undefined4 *******)0x80000003;
          local_288 = (undefined4 *******)0x80000003;
          if (local_2c0 == (undefined4 *******)&DAT_80000000) {
            puVar18 = &DAT_0187e4e0;
            local_2a0 = pppppppuVar21;
            local_29c = local_50c;
            goto LAB_00e79db8;
          }
        }
        local_264 = 0x80000003;
        local_270 = (undefined4 *******)0x80000003;
        local_27c = (undefined4 *******)0x80000003;
        local_288 = (undefined4 *******)0x80000003;
        iVar25 = *piVar14;
        iVar31 = piVar14[1];
        iVar17 = piVar14[8];
        iVar29 = piVar14[5];
        iVar13 = piVar14[4];
        iVar28 = iVar25;
        if ((char)iVar17 != '\x02') {
          iVar28 = iVar25 + 1;
        }
        local_2a0 = pppppppuVar21;
        local_29c = local_50c;
        local_298 = pppppppuVar4;
        FUN_016833e0(&local_b8,iVar28 + iVar13);
        pppppppuVar24 = local_a8;
        pppppppuVar21 = local_ac;
        pppppppuVar4 = local_b8;
        pppppppuVar23 = (undefined4 *******)*puVar8;
        pppppppuVar32 = (undefined4 *******)puVar8[1];
        if (local_a8 == (undefined4 *******)0x80000001) {
          local_190 = pppppppuVar23;
          local_18c = pppppppuVar32;
        }
        else {
          FUN_016dd1aa(local_524,&local_a4,100);
          local_120 = pppppppuVar24;
          *puVar7 = pppppppuVar23;
          puVar7[1] = pppppppuVar32;
          local_130 = pppppppuVar4;
          local_124 = pppppppuVar21;
          if (((((char)iVar17 == '\x02') ||
               (FUN_00f25ab4(&local_b8,&local_130,"enabled",7,(char)piVar14[8]),
               local_b8 == (undefined4 *******)0x80000005)) &&
              ((iVar25 == 0 && iVar31 == 0 ||
               (FUN_00f25680((int)*(undefined8 *)(piVar14 + 2),&local_b8,&local_130,"frequency",9,
                             *piVar14,piVar14[1]), local_b8 == (undefined4 *******)0x80000005)))) &&
             ((iVar13 == 0 && iVar29 == 0 ||
              (FUN_00f25680((int)*(undefined8 *)(piVar14 + 6),&local_b8,&local_130,"voltage",7,
                            piVar14[4],piVar14[5]), local_b8 == (undefined4 *******)0x80000005)))) {
            FUN_016dd1aa(&local_b8,&local_130,0x78);
            if (local_a8 == (undefined4 *******)&DAT_80000000) {
              if (local_a4 == (undefined4 *******)&SUB_00000002) {
                pppppppuVar4 = (undefined4 *******)0x80000002;
                break;
              }
              pppppppuVar23 = (undefined4 *******)&DAT_00000006;
              pppppppuVar32 = (undefined4 *******)0x80000003;
              local_190 = local_a0;
              local_544 = (undefined4 *******)0x80000003;
              local_52c = (undefined4 *******)0x80000003;
              *(undefined4 *)((uint)&local_190 | 4) = local_9c;
              ((undefined4 *)((uint)&local_190 | 4))[1] = local_98;
              pppppppuVar24 = local_90;
              pppppppuVar4 = local_a4;
              pppppppuVar21 = local_94;
LAB_00e77ce8:
              pppppppuVar26 = local_2a0;
              local_460 = local_40c;
              local_458 = local_38;
              local_454 = local_34;
              *puVar6 = local_190;
              puVar6[1] = local_18c;
              puVar6[2] = local_188;
              local_450 = local_52c;
              local_468 = (double)CONCAT44(local_468._4_4_,local_544);
              local_44c = local_4a0;
              local_448 = local_49c;
              local_444 = pppppppuStack_498;
              pppppppuStack_440 = local_494;
              local_43c = local_490;
              pppppppuStack_438 = pppppppuStack_48c;
              local_434 = pppppppuStack_488;
              pppppppuStack_430 = pppppppuStack_484;
              bVar34 = local_2a0 == (undefined4 *******)&DAT_80000000;
              local_428 = local_4b0;
              local_424 = local_4ac;
              local_420 = local_4a8;
              pppppppuStack_41c = pppppppuStack_4a4;
              local_2a0 = (undefined4 *******)&DAT_80000000;
              local_480 = pppppppuVar4;
              local_45c = pppppppuVar32;
              local_42c = pppppppuVar23;
              if (bVar34) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa444(&DAT_0187e500);
              }
              local_248 = pppppppuVar26;
              local_470 = pppppppuVar21;
              local_46c = pppppppuVar24;
              FUN_016dd1aa(&pppppppuStack_244,&local_29c,0x44);
              local_1dc = local_410;
              local_1d8 = local_40c;
              local_1d0 = local_38;
              local_1cc = local_34;
              local_1f4 = local_190;
              local_1f0 = local_18c;
              local_1ec = local_188;
              local_1c8 = local_52c;
              local_1e0 = local_544;
              local_1c4 = local_4a0;
              pppppppuStack_1c0 = local_49c;
              local_1bc = pppppppuStack_498;
              pppppppuStack_1b8 = local_494;
              local_1b4 = local_490;
              pppppppuStack_1b0 = pppppppuStack_48c;
              local_1ac = pppppppuStack_488;
              local_1a8 = pppppppuStack_484;
              local_1a0 = local_4b0;
              local_19c = local_4ac;
              local_198 = local_4a8;
              local_194 = pppppppuStack_4a4;
              local_200 = (undefined4 *******)&DAT_00000001;
              local_1f8 = pppppppuVar4;
              local_1e8 = pppppppuVar21;
              local_1e4 = pppppppuVar24;
              local_1d4 = pppppppuVar32;
              local_1a4 = pppppppuVar23;
              FUN_00ea0d40(&local_b8,&local_2d0,&local_248,&local_200);
              FUN_016dd1aa(&local_130,&local_b0,0x70);
              if (local_130 != (undefined4 *******)&DAT_00000004) {
                FUN_00f17590(&local_130);
              }
              goto LAB_00e7789c;
            }
            FUN_0167827c(&local_480,&local_b8);
            pppppppuVar23 = local_42c;
            local_52c = local_450;
            pppppppuVar32 = local_45c;
            pppppppuVar24 = local_46c;
            pppppppuVar21 = local_470;
            pppppppuVar4 = local_480;
            local_140 = (undefined4 *******)*puVar6;
            local_13c = (undefined4 *******)puVar6[1];
            local_138 = (undefined4 *******)puVar6[2];
            local_348 = local_458;
            local_344 = local_454;
            local_258 = local_468._4_4_;
            local_254 = local_460;
            local_544 = (undefined4 *******)local_468;
            local_170 = local_44c;
            local_16c = local_448;
            local_168 = local_444;
            local_164 = pppppppuStack_440;
            local_160 = local_43c;
            pppppppuStack_15c = pppppppuStack_438;
            pppppppuStack_158 = local_434;
            pppppppuStack_154 = pppppppuStack_430;
            local_180 = local_428;
            local_17c = local_424;
            local_178 = local_420;
            local_174 = pppppppuStack_41c;
            if (local_88[0] != -0x80000000) {
              FUN_00919614(local_88);
            }
            if (pppppppuVar23 == (undefined4 *******)&SUB_00000002) {
              local_18c = local_13c;
              local_190 = local_140;
            }
            else {
              local_410 = local_258;
              local_40c = local_254;
              local_190 = local_140;
              local_34 = local_344;
              local_38 = local_348;
              local_188 = local_138;
              local_18c = local_13c;
              local_4a0 = local_170;
              local_49c = local_16c;
              pppppppuStack_498 = local_168;
              local_494 = local_164;
              local_490 = local_160;
              pppppppuStack_48c = pppppppuStack_15c;
              pppppppuStack_488 = pppppppuStack_158;
              pppppppuStack_484 = pppppppuStack_154;
              local_4b0 = local_180;
              local_4ac = local_17c;
              local_4a8 = local_178;
              pppppppuStack_4a4 = local_174;
              if (pppppppuVar23 != (undefined4 *******)&DAT_00000008) goto LAB_00e77ce8;
            }
          }
          else {
            pppppppuVar4 = local_b8;
            local_190 = local_b4;
            local_18c = local_b0;
            FUN_00e7a700(&local_130);
          }
        }
      } while (pppppppuVar4 == (undefined4 *******)0x80000005);
      local_330 = local_18c;
      local_2e4 = (undefined4 *******)&DAT_00000008;
      local_338 = pppppppuVar4;
      local_334 = local_190;
      FUN_00e94c38(&local_2d0);
    }
LAB_00e77694:
    if (local_338 != (undefined4 *******)0x80000005) goto LAB_00e77500;
  }
LAB_00e776a8:
  if (iVar2 != 2 || iVar12 != 0) {
    FUN_00f255d4(&local_b8,param_3,"temp_control",0xc);
    if (local_b8 == (undefined4 *******)0x80000005) {
      if (*(int *)(param_3 + 0x10) == -0x80000000) goto LAB_00e79cdc;
      cVar1 = (char)param_2[0x10];
      iVar28 = param_2[5];
      iVar31 = param_2[9];
      iVar29 = param_2[4];
      iVar17 = iVar2;
      if (cVar1 != '\x04') {
        iVar17 = iVar2 + 1;
      }
      iVar27 = param_2[8];
      iVar25 = param_2[0xc];
      iVar13 = param_2[0xd];
      FUN_016833e0(&local_b8,iVar17 + iVar29 + iVar27 + iVar25);
      pppppppuVar24 = local_a8;
      pppppppuVar21 = local_ac;
      pppppppuVar4 = local_b8;
      local_2cc = local_b0;
      local_2d0 = local_b4;
      if (local_a8 == (undefined4 *******)0x80000001) {
        local_170 = local_b4;
        local_16c = local_b0;
LAB_00e781d0:
        if (pppppppuVar4 == (undefined4 *******)0x80000005) goto LAB_00e776c0;
      }
      else {
        FUN_016dd1aa(&local_11c,&local_a4,100);
        local_124 = pppppppuVar21;
        local_120 = pppppppuVar24;
        local_130 = pppppppuVar4;
        local_128 = local_2cc;
        local_12c = local_2d0;
        if (pppppppuVar24 != (undefined4 *******)&DAT_80000000 && cVar1 != '\x04') {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(cVar1) {
          case '\0':
            uVar9 = 4;
            pppppppuVar4 = (undefined4 *******)thunk_FUN_016d4a50(4);
            if (pppppppuVar4 == (undefined4 *******)0x0) {
LAB_00e7a380:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,uVar9);
            }
            *pppppppuVar4 = (undefined4 ******)0x6f747561;
            local_1f8 = (undefined4 *******)&DAT_00000004;
            break;
          case '\x01':
            uVar9 = 6;
            pppppppuVar4 = (undefined4 *******)thunk_FUN_016d4a50(6);
            if (pppppppuVar4 == (undefined4 *******)0x0) goto LAB_00e7a380;
            *(undefined2 *)(pppppppuVar4 + 1) = 0x6c61;
            *pppppppuVar4 = (undefined4 ******)0x756e616d;
            local_1f8 = (undefined4 *******)&DAT_00000006;
            break;
          case '\x02':
            uVar9 = 9;
            pppppppuVar4 = (undefined4 *******)thunk_FUN_016d4a50(9);
            if (pppppppuVar4 == (undefined4 *******)0x0) goto LAB_00e7a380;
            *(undefined1 *)(pppppppuVar4 + 2) = 0x6e;
            pppppppuVar4[1] = (undefined4 ******)0x6f697372;
            *pppppppuVar4 = (undefined4 ******)0x656d6d69;
            local_1f8 = (undefined4 *******)&DAT_00000009;
            break;
          case '\x03':
            uVar9 = 5;
            pppppppuVar4 = (undefined4 *******)thunk_FUN_016d4a50(5);
            if (pppppppuVar4 == (undefined4 *******)0x0) goto LAB_00e7a380;
            *(undefined1 *)(pppppppuVar4 + 1) = 0x6f;
            *pppppppuVar4 = (undefined4 ******)0x72647968;
            local_1f8 = (undefined4 *******)&DAT_00000005;
          }
          local_1a4 = (undefined4 *******)&SUB_00000002;
          local_1ec = (undefined4 *******)0x80000003;
          local_200 = (undefined4 *******)&DAT_00000001;
          local_1d4 = (undefined4 *******)0x80000003;
          local_1e0 = (undefined4 *******)0x80000003;
          local_1f4 = pppppppuVar4;
          local_1f0 = local_1f8;
          local_47c = (undefined4 *******)thunk_FUN_016d4a50(4);
          if (local_47c == (undefined4 *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,4);
          }
          local_444 = (undefined4 *******)0x80000003;
          local_450 = (undefined4 *******)0x80000003;
          *local_47c = (undefined4 ******)0x65646f6d;
          local_45c = (undefined4 *******)0x80000003;
          local_468 = (double)CONCAT44(local_468._4_4_,0x80000003);
          local_474 = (undefined4 *******)0x80000003;
          local_478 = (undefined4 *******)&DAT_00000004;
          local_480 = (undefined4 *******)&DAT_00000004;
          FUN_00ea0d40(&local_b8,&local_130,&local_480,&local_200);
          FUN_016dd1aa(&local_2d0,&local_b0,0x70);
          if (local_2d0 != (undefined4 *******)&DAT_00000004) {
            FUN_00f17590(&local_2d0);
          }
        }
        if ((((iVar2 != 0 || iVar12 != 0) &&
             (FUN_00f25680((int)*(undefined8 *)(param_2 + 2),&local_b8,&local_130,"target_temp",0xb,
                           iVar2,iVar12), local_b8 != (undefined4 *******)0x80000005)) ||
            ((iVar29 != 0 || iVar28 != 0 &&
             (FUN_00f25680((int)*(undefined8 *)(param_2 + 6),&local_b8,&local_130,&DAT_0056a8a8,8,
                           iVar29,iVar28), local_b8 != (undefined4 *******)0x80000005)))) ||
           (((iVar27 != 0 || iVar31 != 0 &&
             (FUN_00f25680((int)*(undefined8 *)(param_2 + 10),&local_b8,&local_130,"dangerous_temp",
                           0xe,iVar27,iVar31), local_b8 != (undefined4 *******)0x80000005)) ||
            ((iVar25 != 0 || iVar13 != 0 &&
             (FUN_00f25680((int)*(undefined8 *)(param_2 + 0xe),&local_b8,&local_130,"cold_temp",9,
                           iVar25,iVar13), local_b8 != (undefined4 *******)0x80000005)))))) {
          pppppppuVar4 = local_b8;
          local_170 = local_b4;
          local_16c = local_b0;
          FUN_00e7a700(&local_130);
          goto LAB_00e781d0;
        }
        FUN_016dd1aa(&local_b8,&local_130,0x78);
        if (local_a8 != (undefined4 *******)&DAT_80000000) {
          FUN_0167827c(&local_2d0,&local_b8);
          pppppppuVar33 = local_27c;
          pppppppuVar26 = local_2a0;
          pppppppuVar23 = local_2ac;
          pppppppuVar32 = local_2b8;
          pppppppuVar24 = local_2bc;
          pppppppuVar21 = local_2c0;
          pppppppuVar4 = local_2d0;
          local_4d8 = local_2cc;
          local_180 = local_2a8;
          local_17c = local_2a4;
          local_4a0 = local_2b4;
          local_49c = pppppppuStack_2b0;
          local_4d4 = local_2c8;
          local_4d0 = local_2c4;
          local_200 = local_29c;
          local_1fc = local_298;
          local_1f8 = local_294;
          local_1f4 = pppppppuStack_290;
          local_1f0 = local_28c;
          local_1ec = local_288;
          local_1e8 = pppppppuStack_284;
          local_1e4 = pppppppuStack_280;
          local_480 = local_278;
          local_47c = pppppppuStack_274;
          local_478 = local_270;
          local_474 = local_26c;
          if (local_88[0] != -0x80000000) {
            FUN_00919614(local_88);
          }
          if (pppppppuVar33 == (undefined4 *******)&SUB_00000002) {
            local_16c = local_4d4;
            local_170 = local_4d8;
          }
          else {
            local_4ac = local_49c;
            local_4b0 = local_4a0;
            local_168 = local_4d0;
            local_13c = local_17c;
            local_140 = local_180;
            local_16c = local_4d4;
            local_170 = local_4d8;
            local_248 = local_200;
            pppppppuStack_244 = local_1fc;
            pppppppuStack_240 = local_1f8;
            pppppppuStack_23c = local_1f4;
            local_238 = local_1f0;
            pppppppuStack_234 = local_1ec;
            pppppppuStack_230 = local_1e8;
            pppppppuStack_22c = local_1e4;
            local_400 = local_480;
            local_3fc = local_47c;
            pppppppuStack_3f8 = local_478;
            pppppppuStack_3f4 = local_474;
            if (pppppppuVar33 != (undefined4 *******)&DAT_00000008) goto LAB_00e797b8;
          }
          goto LAB_00e781d0;
        }
        if (local_a4 != (undefined4 *******)&SUB_00000002) {
          pppppppuVar33 = (undefined4 *******)&DAT_00000006;
          pppppppuVar32 = (undefined4 *******)0x80000003;
          local_170 = local_a0;
          pppppppuVar23 = (undefined4 *******)0x80000003;
          local_16c = local_9c;
          local_168 = local_98;
          pppppppuVar26 = (undefined4 *******)0x80000003;
          pppppppuVar4 = local_a4;
          pppppppuVar21 = local_94;
          pppppppuVar24 = local_90;
LAB_00e797b8:
          local_2c8 = local_16c;
          local_2a8 = local_140;
          local_2a4 = local_13c;
          local_2b4 = local_4b0;
          pppppppuStack_2b0 = local_4ac;
          local_2cc = local_170;
          local_2c4 = local_168;
          local_29c = local_248;
          local_298 = pppppppuStack_244;
          local_294 = pppppppuStack_240;
          pppppppuStack_290 = pppppppuStack_23c;
          local_28c = local_238;
          local_288 = pppppppuStack_234;
          pppppppuStack_284 = pppppppuStack_230;
          pppppppuStack_280 = pppppppuStack_22c;
          pppppppuVar11 = *(undefined4 ********)(param_3 + 0x30);
          *(undefined4 *)(param_3 + 0x30) = 0x80000000;
          local_278 = local_400;
          pppppppuStack_274 = local_3fc;
          local_270 = pppppppuStack_3f8;
          local_26c = pppppppuStack_3f4;
          local_2d0 = pppppppuVar4;
          local_2c0 = pppppppuVar21;
          local_2b8 = pppppppuVar32;
          local_2ac = pppppppuVar23;
          local_2a0 = pppppppuVar26;
          local_27c = pppppppuVar33;
          if (pppppppuVar11 == (undefined4 *******)&DAT_80000000) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187e500);
          }
          local_338 = pppppppuVar11;
          local_2bc = pppppppuVar24;
          FUN_016dd1aa(&local_334,param_3 + 0x34,0x44);
          local_388 = local_140;
          pppppppuStack_384 = local_13c;
          local_394 = local_4b0;
          pppppppuStack_390 = local_4ac;
          local_3ac = local_170;
          local_3a8 = local_16c;
          local_3a4 = local_168;
          local_37c = local_248;
          pppppppuStack_378 = pppppppuStack_244;
          local_374 = pppppppuStack_240;
          pppppppuStack_370 = pppppppuStack_23c;
          local_36c = local_238;
          pppppppuStack_368 = pppppppuStack_234;
          local_364 = pppppppuStack_230;
          pppppppuStack_360 = pppppppuStack_22c;
          local_358 = local_400;
          pppppppuStack_354 = local_3fc;
          pppppppuStack_350 = pppppppuStack_3f8;
          pppppppuStack_34c = pppppppuStack_3f4;
          local_3b8 = (undefined4 *******)&DAT_00000001;
          local_3b0 = pppppppuVar4;
          local_3a0 = pppppppuVar21;
          pppppppuStack_39c = pppppppuVar24;
          local_398 = pppppppuVar32;
          local_38c = pppppppuVar23;
          local_380 = pppppppuVar26;
          local_35c = pppppppuVar33;
          FUN_00ea0d40(&local_b8,param_3,&local_338,&local_3b8);
          FUN_016dd1aa(&local_130,&local_b0,0x70);
          if (local_130 != (undefined4 *******)&DAT_00000004) {
            FUN_00f17590(&local_130);
          }
          goto LAB_00e776c0;
        }
        pppppppuVar4 = (undefined4 *******)0x80000002;
      }
      local_140 = local_170;
      local_13c = local_16c;
      local_b8 = pppppppuVar4;
    }
    else {
      local_140 = local_b4;
      local_13c = local_b0;
    }
    *param_1 = local_b8;
    goto LAB_00e781f4;
  }
LAB_00e776c0:
  if (iVar19 != 2) {
    FUN_00f255d4(&local_b8,param_3,"fan_control",0xb);
    if (local_b8 != (undefined4 *******)0x80000005) {
      *param_1 = local_b8;
      local_140 = local_b4;
      local_13c = local_b0;
      goto LAB_00e781f4;
    }
    if (*(int *)(param_3 + 0x10) == -0x80000000) goto LAB_00e79cdc;
    iVar2 = param_2[0x26];
    if (iVar2 == 2) goto LAB_00e776c8;
    iVar31 = param_2[0x28];
    iVar29 = param_2[0x2a];
    iVar19 = param_2[0x2c];
    iVar28 = param_2[0x30];
    iVar17 = param_2[0x2e];
    iVar12 = iVar31 + iVar2 + iVar29 + iVar19 + iVar17;
    if (iVar28 != 2) {
      iVar12 = iVar12 + 1;
    }
    FUN_016833e0(&local_b8,iVar12);
    pppppppuVar24 = local_a8;
    pppppppuVar21 = local_ac;
    pppppppuVar4 = local_b8;
    if (local_a8 == (undefined4 *******)0x80000001) {
      local_13c = local_b0;
      local_140 = local_b4;
      goto LAB_00e7846c;
    }
    local_130 = local_b4;
    local_12c = local_b0;
    FUN_016dd1aa(&local_2bc,&local_a4,100);
    local_2d0 = pppppppuVar4;
    local_2c4 = pppppppuVar21;
    local_2c0 = pppppppuVar24;
    local_2c8 = local_12c;
    local_2cc = local_130;
    pppppppuVar4 = local_130;
    if ((((iVar2 == 0) ||
         (pppppppuVar4 = (undefined4 *******)
                         FUN_00f257b0(&local_b8,&local_2d0,"speed",5,iVar2,param_2[0x27]),
         local_b8 == (undefined4 *******)0x80000005)) &&
        ((iVar31 == 0 ||
         (pppppppuVar4 = (undefined4 *******)
                         FUN_00f257b0(&local_b8,&local_2d0,&DAT_0056a608,8,iVar31,param_2[0x29]),
         local_b8 == (undefined4 *******)0x80000005)))) &&
       ((((iVar29 == 0 ||
          (pppppppuVar4 = (undefined4 *******)
                          FUN_00f257b0(&local_b8,&local_2d0,"min_fan_rpm",0xb,iVar29,param_2[0x2b]),
          local_b8 == (undefined4 *******)0x80000005)) &&
         ((iVar19 == 0 ||
          (pppppppuVar4 = (undefined4 *******)
                          FUN_00f257b0(&local_b8,&local_2d0,"min_fan_speed",0xd,iVar19,param_2[0x2d]
                                      ), local_b8 == (undefined4 *******)0x80000005)))) &&
        ((iVar17 == 0 ||
         (pppppppuVar4 = (undefined4 *******)
                         FUN_00f257b0(&local_b8,&local_2d0,"max_fan_speed",0xd,iVar17,param_2[0x2f])
         , local_b8 == (undefined4 *******)0x80000005)))))) {
      if (iVar28 != 2) {
        pppppppuVar4 = local_2c0;
      }
      if (iVar28 != 2 && pppppppuVar4 != (undefined4 *******)&DAT_80000000) {
        cVar1 = (char)param_2[0x32];
        iVar2 = iVar28;
        if (cVar1 != '\x03') {
          iVar2 = iVar28 + 1;
        }
        FUN_016833e0(&local_b8,iVar2);
        pppppppuVar24 = local_a8;
        pppppppuVar21 = local_ac;
        pppppppuVar4 = local_b8;
        local_1fc = local_b0;
        local_200 = local_b4;
        if (local_a8 == (undefined4 *******)0x80000001) {
          local_4b0 = local_b4;
          local_4ac = local_b0;
LAB_00e7a0f8:
          if (pppppppuVar4 == (undefined4 *******)0x80000005) goto LAB_00e78414;
        }
        else {
          FUN_016dd1aa(&local_11c,&local_a4,100);
          local_130 = pppppppuVar4;
          local_120 = pppppppuVar24;
          local_124 = pppppppuVar21;
          local_128 = local_1fc;
          local_12c = local_200;
          if (pppppppuVar24 != (undefined4 *******)&DAT_80000000 && cVar1 != '\x03') {
            if (cVar1 == '\0') {
              uVar9 = 4;
              pppppppuVar4 = (undefined4 *******)thunk_FUN_016d4a50(4);
              if (pppppppuVar4 == (undefined4 *******)0x0) goto LAB_00e7a3dc;
              pppppppuVar21 = (undefined4 *******)&DAT_00000004;
              *pppppppuVar4 = (undefined4 ******)0x6f747561;
            }
            else if (cVar1 == '\x01') {
              uVar9 = 6;
              pppppppuVar4 = (undefined4 *******)thunk_FUN_016d4a50(6);
              if (pppppppuVar4 == (undefined4 *******)0x0) goto LAB_00e7a3dc;
              pppppppuVar21 = (undefined4 *******)&DAT_00000006;
              *(undefined2 *)(pppppppuVar4 + 1) = 0x6c61;
              *pppppppuVar4 = (undefined4 ******)0x756e616d;
            }
            else {
              uVar9 = 0x11;
              pppppppuVar4 = (undefined4 *******)thunk_FUN_016d4a50(0x11);
              if (pppppppuVar4 == (undefined4 *******)0x0) {
LAB_00e7a3dc:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(1,uVar9);
              }
              pppppppuVar21 = (undefined4 *******)&DAT_00000011;
              FUN_016dd1aa(pppppppuVar4,"manual_indefinite",0x11);
            }
            local_35c = (undefined4 *******)&SUB_00000002;
            local_3a4 = (undefined4 *******)0x80000003;
            local_3b8 = (undefined4 *******)&DAT_00000001;
            local_38c = (undefined4 *******)0x80000003;
            local_398 = (undefined4 *******)0x80000003;
            local_3b0 = pppppppuVar21;
            local_3ac = pppppppuVar4;
            local_3a8 = pppppppuVar21;
            pppppppuVar4 = (undefined4 *******)thunk_FUN_016d4a50(4);
            if (pppppppuVar4 == (undefined4 *******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,4);
            }
            local_2fc = 0x80000003;
            local_308 = 0x80000003;
            *pppppppuVar4 = (undefined4 ******)0x65646f6d;
            local_314 = 0x80000003;
            local_320 = 0x80000003;
            local_330 = (undefined4 *******)&DAT_00000004;
            local_32c[0] = (undefined4 *******)0x80000003;
            local_338 = (undefined4 *******)&DAT_00000004;
            local_334 = pppppppuVar4;
            FUN_00ea0d40(&local_b8,&local_130,&local_338,&local_3b8);
            FUN_016dd1aa(&local_200,&local_b0,0x70);
            if (local_200 != (undefined4 *******)&DAT_00000004) {
              FUN_00f17590(&local_200);
            }
          }
          if (iVar28 != 0) {
            FUN_00f257b0(&local_b8,&local_130,"cooldown_fan_speed",0x12,iVar28,param_2[0x31]);
            pppppppuVar4 = local_b8;
            if (local_b8 != (undefined4 *******)0x80000005) {
              local_4ac = local_b0;
              local_4b0 = local_b4;
              FUN_00e7a700(&local_130);
              goto LAB_00e7a0f8;
            }
          }
          FUN_016dd1aa(&local_b8,&local_130,0x78);
          if (local_a8 != (undefined4 *******)&DAT_80000000) {
            FUN_0167827c(&local_200,&local_b8);
            pppppppuVar24 = local_1ac;
            pppppppuVar21 = local_1e8;
            pppppppuVar4 = local_200;
            local_180 = local_1fc;
            local_4dc = local_1f0;
            local_190 = local_1e4;
            local_18c = local_1e0;
            local_4e0 = local_1ec;
            local_17c = local_1f8;
            local_178 = local_1f4;
            local_254 = local_1d4;
            local_258 = local_1d8;
            local_3b8 = local_1cc;
            local_3b4 = local_1c8;
            local_3b0 = local_1c4;
            local_3ac = pppppppuStack_1c0;
            local_3a8 = local_1bc;
            local_3a4 = pppppppuStack_1b8;
            local_3a0 = local_1b4;
            pppppppuStack_39c = pppppppuStack_1b0;
            local_338 = local_1a8;
            local_334 = local_1a4;
            local_330 = local_1a0;
            local_32c[0] = local_19c;
            if (local_88[0] != -0x80000000) {
              FUN_00919614(local_88);
            }
            if (pppppppuVar24 == (undefined4 *******)&SUB_00000002) {
              local_4ac = local_17c;
              local_4b0 = local_180;
            }
            else {
              local_4b0 = local_180;
              local_348 = local_190;
              local_344 = local_18c;
              local_40c = local_254;
              local_410 = local_258;
              local_4a8 = local_178;
              local_4ac = local_17c;
              local_400 = local_3b8;
              local_3fc = local_3b4;
              pppppppuStack_3f8 = local_3b0;
              pppppppuStack_3f4 = local_3ac;
              local_3f0 = local_3a8;
              pppppppuStack_3ec = local_3a4;
              pppppppuStack_3e8 = local_3a0;
              pppppppuStack_3e4 = pppppppuStack_39c;
              local_164 = local_32c[0];
              local_168 = local_330;
              local_16c = local_334;
              local_170 = local_338;
              if (pppppppuVar24 != (undefined4 *******)&DAT_00000008) goto LAB_00e7a114;
            }
            goto LAB_00e7a0f8;
          }
          if (local_a4 != (undefined4 *******)&SUB_00000002) {
            pppppppuVar24 = (undefined4 *******)&DAT_00000006;
            pppppppuVar21 = (undefined4 *******)0x80000003;
            local_1dc = (undefined4 *******)0x80000003;
            local_1d0 = (undefined4 *******)0x80000003;
            local_4ac = local_9c;
            local_4a8 = local_98;
            local_4dc = local_94;
            local_4e0 = local_90;
            local_4b0 = local_a0;
            pppppppuVar4 = local_a4;
LAB_00e7a114:
            local_1d8 = local_344;
            local_1e8 = local_4dc;
            local_1e4 = local_4e0;
            local_1f4 = local_4b0;
            local_1f0 = local_4ac;
            local_1ec = local_4a8;
            local_1c4 = local_400;
            pppppppuStack_1c0 = local_3fc;
            local_1bc = pppppppuStack_3f8;
            pppppppuStack_1b8 = pppppppuStack_3f4;
            local_1b4 = local_3f0;
            pppppppuStack_1b0 = pppppppuStack_3ec;
            local_1ac = pppppppuStack_3e8;
            local_1a8 = pppppppuStack_3e4;
            local_1a0 = local_170;
            local_200 = (undefined4 *******)&DAT_00000001;
            local_19c = local_16c;
            local_198 = local_168;
            local_194 = local_164;
            local_1f8 = pppppppuVar4;
            local_1e0 = pppppppuVar21;
            local_1d4 = local_1dc;
            local_1c8 = local_1d0;
            local_1a4 = pppppppuVar24;
            pppppppuVar4 = (undefined4 *******)thunk_FUN_016d4a50(5);
            if (pppppppuVar4 == (undefined4 *******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,5);
            }
            local_3b0 = (undefined4 *******)&DAT_00000005;
            *(undefined1 *)(pppppppuVar4 + 1) = 0x65;
            *pppppppuVar4 = (undefined4 ******)0x73756170;
            local_37c = (undefined4 *******)0x80000003;
            local_388 = (undefined4 *******)0x80000003;
            local_394 = (undefined4 *******)0x80000003;
            local_3a0 = (undefined4 *******)0x80000003;
            local_3ac = (undefined4 *******)0x80000003;
            local_3b8 = (undefined4 *******)&DAT_00000005;
            local_3b4 = pppppppuVar4;
            FUN_00ea0d40(&local_b8,&local_2d0,&local_3b8,&local_200);
            FUN_016dd1aa(&local_130,&local_b0,0x70);
            if (local_130 != (undefined4 *******)&DAT_00000004) {
              FUN_00f17590(&local_130);
            }
            goto LAB_00e78414;
          }
          pppppppuVar4 = (undefined4 *******)0x80000002;
        }
        local_140 = local_4b0;
        local_13c = local_4ac;
        goto LAB_00e78460;
      }
LAB_00e78414:
      FUN_016dd1aa(&local_b8,&local_2d0,0x78);
      if (local_a8 == (undefined4 *******)&DAT_80000000) {
        if (local_a4 == (undefined4 *******)&SUB_00000002) {
          *param_1 = 0x80000002;
          goto LAB_00e781f4;
        }
        local_dc = (undefined4 *******)&DAT_00000006;
        pppppppuVar32 = (undefined4 *******)0x80000003;
        local_140 = local_a0;
        local_13c = local_9c;
        local_138 = local_98;
        local_4dc = (undefined4 *******)0x80000003;
        local_4e0 = (undefined4 *******)0x80000003;
        pppppppuVar4 = local_a4;
        pppppppuVar21 = local_94;
        pppppppuVar24 = local_90;
LAB_00e79af0:
        local_2a8 = local_40;
        local_2cc = local_140;
        local_2a4 = local_3c;
        local_2b4 = local_38;
        pppppppuStack_2b0 = local_34;
        local_2ac = local_4dc;
        local_2a0 = local_4e0;
        local_2c8 = local_13c;
        local_2c4 = local_138;
        local_29c = local_4d8;
        local_298 = local_4d4;
        local_294 = local_4d0;
        pppppppuStack_290 = local_4cc;
        local_28c = local_4c8;
        local_288 = local_4c4;
        pppppppuStack_284 = local_4c0;
        pppppppuStack_280 = local_4bc;
        pppppppuVar23 = *(undefined4 ********)(param_3 + 0x30);
        *(undefined4 *)(param_3 + 0x30) = 0x80000000;
        local_278 = local_4a0;
        pppppppuStack_274 = local_49c;
        local_270 = pppppppuStack_498;
        local_26c = local_494;
        local_2d0 = pppppppuVar4;
        local_2c0 = pppppppuVar21;
        local_2b8 = pppppppuVar32;
        local_27c = local_dc;
        if (pppppppuVar23 == (undefined4 *******)&DAT_80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_0187e500);
        }
        local_2bc = pppppppuVar24;
        local_248 = pppppppuVar23;
        FUN_016dd1aa(&pppppppuStack_244,param_3 + 0x34,0x44);
        local_450 = local_40;
        local_44c = local_3c;
        local_468 = (double)CONCAT44(pppppppuVar24,pppppppuVar21);
        local_454 = local_4dc;
        local_448 = local_4e0;
        local_474 = local_140;
        local_470 = local_13c;
        local_46c = local_138;
        local_45c = local_38;
        local_458 = local_34;
        local_444 = local_4d8;
        pppppppuStack_440 = local_4d4;
        local_43c = local_4d0;
        pppppppuStack_438 = local_4cc;
        local_434 = local_4c8;
        pppppppuStack_430 = local_4c4;
        local_42c = local_4c0;
        local_428 = local_4bc;
        local_420 = local_4a0;
        pppppppuStack_41c = local_49c;
        pppppppuStack_418 = pppppppuStack_498;
        pppppppuStack_414 = local_494;
        local_480 = (undefined4 *******)&DAT_00000001;
        local_478 = pppppppuVar4;
        local_460 = pppppppuVar32;
        local_424 = local_dc;
        FUN_00ea0d40(&local_b8,param_3,&local_248,&local_480);
        FUN_016dd1aa(&local_130,&local_b0,0x70);
        if (local_130 != (undefined4 *******)&DAT_00000004) {
          FUN_00f17590(&local_130);
        }
        goto LAB_00e776c8;
      }
      FUN_0167827c(&local_130,&local_b8);
      pppppppuVar32 = local_118;
      pppppppuVar24 = local_11c;
      pppppppuVar21 = local_120;
      pppppppuVar4 = local_130;
      local_338 = local_12c;
      local_334 = local_128;
      local_3fc = local_110;
      local_400 = local_114;
      local_4e0 = local_100;
      local_330 = local_124;
      local_4dc = local_10c;
      local_16c = local_104;
      local_170 = local_108;
      local_200 = local_fc;
      local_1fc = pppppppuStack_f8;
      local_1f8 = pppppppuStack_f4;
      local_1f4 = pppppppuStack_f0;
      local_1f0 = local_ec;
      local_1ec = pppppppuStack_e8;
      local_1e8 = pppppppuStack_e4;
      local_1e4 = pppppppuStack_e0;
      local_3b8 = local_d8;
      local_3b4 = pppppppuStack_d4;
      local_3b0 = pppppppuStack_d0;
      local_3ac = local_cc;
      if (local_88[0] != -0x80000000) {
        FUN_00919614(local_88);
      }
      if (local_dc == (undefined4 *******)&SUB_00000002) {
        local_13c = local_334;
        local_140 = local_338;
      }
      else {
        local_34 = local_3fc;
        local_38 = local_400;
        local_138 = local_330;
        local_3c = local_16c;
        local_40 = local_170;
        local_13c = local_334;
        local_140 = local_338;
        local_4d8 = local_200;
        local_4d4 = local_1fc;
        local_4d0 = local_1f8;
        local_4cc = local_1f4;
        local_4c8 = local_1f0;
        local_4c4 = local_1ec;
        local_4c0 = local_1e8;
        local_4bc = local_1e4;
        local_4a0 = local_3b8;
        local_49c = local_3b4;
        pppppppuStack_498 = local_3b0;
        local_494 = local_3ac;
        if (local_dc != (undefined4 *******)&DAT_00000008) goto LAB_00e79af0;
      }
    }
    else {
      local_13c = local_b0;
      local_140 = local_b4;
      pppppppuVar4 = local_b8;
LAB_00e78460:
      FUN_00e7a700(&local_2d0);
    }
LAB_00e7846c:
    if (pppppppuVar4 != (undefined4 *******)0x80000005) {
      *param_1 = pppppppuVar4;
LAB_00e781f4:
      param_1[1] = local_140;
      param_1[2] = local_13c;
      return;
    }
  }
LAB_00e776c8:
  if (iVar3 != -0x80000000) {
    FUN_00f255d4(&local_b8,param_3,&DAT_00377f5d,5);
    if (local_b8 != (undefined4 *******)0x80000005) {
      pppppppuVar21 = local_b4;
      pppppppuVar24 = local_b0;
      pppppppuVar4 = local_b8;
LAB_00e781a8:
      *param_1 = pppppppuVar4;
      param_1[1] = pppppppuVar21;
      param_1[2] = pppppppuVar24;
      return;
    }
    if (*(int *)(param_3 + 0x10) == -0x80000000) {
LAB_00e79cdc:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00414516,0xc5,&DAT_0187e4e0);
    }
    if (param_2[0x33] != -0x80000000) {
      iVar2 = param_2[0x35];
      local_4dc = (undefined4 *******)param_2[0x34];
      FUN_0168d9d4(&local_b8,iVar2);
      if (local_b8 == (undefined4 *******)0x0) {
        local_348 = local_b4;
        local_344 = local_b0;
        local_340 = local_ac;
        if (iVar2 != 0) {
          puVar5 = (uint *)(local_4dc + iVar2 * 0xc);
          uVar36 = thunk_FUN_016de0ee(puVar5,0x2c0,&local_ac);
          puVar15 = (undefined4 *)((int)uVar36 + (int)((ulonglong)uVar36 >> 0x20));
          puVar6 = (undefined4 *)((uint)&local_480 | 4);
          puVar7 = (undefined4 *)((uint)&local_b8 | 4);
          puVar8 = (undefined4 *)((uint)&local_338 | 4);
          local_5a0 = &DAT_0187e4d0;
          do {
            if (*(char *)(puVar15 + 4) == '\0') {
              FUN_015f62e4(&local_b8);
              *puVar15 = local_b8;
              puVar15[1] = local_b4;
              puVar15[2] = local_b0;
              puVar15[3] = local_ac;
              *(undefined1 *)(puVar15 + 4) = 1;
            }
            local_2d0 = (undefined4 *******)*puVar15;
            local_2cc = (undefined4 *******)puVar15[1];
            local_2c8 = (undefined4 *******)puVar15[2];
            local_2c4 = (undefined4 *******)puVar15[3];
            local_2bc = (undefined4 *******)&DAT_00000008;
            *puVar15 = (undefined1 *)((int)local_2d0 + 1);
            puVar15[1] = (undefined1 *)
                         ((int)local_2cc + (uint)((undefined4 *******)0xfffffffe < local_2d0));
            pppppppuStack_2b0 = (undefined4 *******)0x0;
            local_2ac = (undefined4 *******)0x0;
            local_2a8 = (undefined4 *******)0x0;
            local_2b4 = (undefined4 *******)&DAT_005674cc;
            local_2b8 = (undefined4 *******)0x0;
            uVar20 = (uint)local_4dc[5];
            pppppppuVar21 = (undefined4 *******)local_4dc[6];
            local_2c0 = (undefined4 *******)0x0;
            local_2a0 = (undefined4 *******)&DAT_80000000;
            pppppppuVar4 = (undefined4 *******)thunk_FUN_016d4a50(4);
            if (pppppppuVar4 == (undefined4 *******)0x0) {
LAB_00e7a3a0:
              local_524 = (undefined4 *******)&DAT_00000004;
LAB_00e7a3a8:
              uVar9 = 1;
LAB_00e7a3ac:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar9,local_524);
            }
            *pppppppuVar4 = (undefined4 ******)0x656d616e;
            uVar9 = 0;
            local_298 = (undefined4 *******)&DAT_00000004;
            local_294 = (undefined4 *******)0x80000003;
            local_2a0 = (undefined4 *******)&DAT_00000004;
            local_264 = 0x80000003;
            local_270 = (undefined4 *******)0x80000003;
            local_27c = (undefined4 *******)0x80000003;
            local_288 = (undefined4 *******)0x80000003;
            local_29c = pppppppuVar4;
            if ((int)pppppppuVar21 < 0) goto LAB_00e7a3ac;
            if (pppppppuVar21 == (undefined4 *******)0x0) {
              local_524 = (undefined4 *******)&DAT_00000001;
              pppppppuVar4 = (undefined4 *******)0x0;
            }
            else {
              local_524 = (undefined4 *******)thunk_FUN_016d4a50(pppppppuVar21);
              if (local_524 == (undefined4 *******)0x0) {
                uVar9 = 1;
                local_524 = pppppppuVar21;
                goto LAB_00e7a3ac;
              }
              pppppppuVar4 = pppppppuVar21;
            }
            FUN_016dd1aa(local_524,uVar20,pppppppuVar21);
            pppppppuVar24 = local_2a0;
            local_42c = (undefined4 *******)&SUB_00000002;
            bVar34 = local_2a0 == (undefined4 *******)&DAT_80000000;
            local_45c = (undefined4 *******)0x80000003;
            local_468 = (double)CONCAT44(local_468._4_4_,0x80000003);
            local_474 = (undefined4 *******)0x80000003;
            local_2a0 = (undefined4 *******)&DAT_80000000;
            local_480 = pppppppuVar4;
            local_47c = local_524;
            local_478 = pppppppuVar21;
            if (bVar34) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_0187e500);
            }
            local_248 = pppppppuVar24;
            FUN_016dd1aa(&pppppppuStack_244,&local_29c,0x44);
            local_1a4 = (undefined4 *******)&SUB_00000002;
            local_1d4 = (undefined4 *******)0x80000003;
            local_1e0 = (undefined4 *******)0x80000003;
            local_1ec = (undefined4 *******)0x80000003;
            local_200 = (undefined4 *******)&DAT_00000001;
            local_1f8 = pppppppuVar4;
            local_1f4 = local_524;
            local_1f0 = pppppppuVar21;
            FUN_00ea0d40(&local_b8,&local_2d0,&local_248,&local_200);
            FUN_016dd1aa(&local_130,&local_b0,0x70);
            if (local_130 != (undefined4 *******)&DAT_00000004) {
              FUN_00f17590(&local_130);
            }
            if (*local_4dc != (undefined4 ******)0x2) {
              if (((uint)*local_4dc & 1) == 0) {
                if (local_2c0 == (undefined4 *******)&DAT_80000000) goto LAB_00e7a2f4;
                pppppppuVar21 = (undefined4 *******)local_4dc[1];
                pppppppuVar4 = (undefined4 *******)thunk_FUN_016d4a50(5);
                if (pppppppuVar4 == (undefined4 *******)0x0) {
                  local_524 = (undefined4 *******)&DAT_00000005;
                  goto LAB_00e7a3a8;
                }
                *(undefined1 *)(pppppppuVar4 + 1) = 0x61;
                *pppppppuVar4 = (undefined4 ******)0x746f7571;
                if (local_2a0 != (undefined4 *******)&DAT_80000000) {
                  FUN_00f174cc(&local_2a0);
                  local_2a0 = (undefined4 *******)&DAT_00000005;
                  local_298 = (undefined4 *******)&DAT_00000005;
                  local_29c = pppppppuVar4;
                  if (local_2c0 == (undefined4 *******)&DAT_80000000) goto LAB_00e7a2e8;
                }
                local_294 = (undefined4 *******)0x80000003;
                local_298 = (undefined4 *******)&DAT_00000005;
                local_264 = 0x80000003;
                local_270 = (undefined4 *******)0x80000003;
                local_27c = (undefined4 *******)0x80000003;
                local_288 = (undefined4 *******)0x80000003;
                local_480 = (undefined4 *******)&DAT_00000005;
                local_2a0 = (undefined4 *******)&DAT_80000000;
                local_29c = pppppppuVar4;
                FUN_016dd1aa(&local_47c,&local_29c,0x44);
                local_1ec = (undefined4 *******)0x80000003;
                local_1f8 = (undefined4 *******)0x80000003;
                local_1a4 = (undefined4 *******)0x3;
                local_1d8 = (undefined4 *******)0x80000003;
                local_200 = (undefined4 *******)&DAT_00000001;
                local_1e0 = pppppppuVar21;
                FUN_00ea0d40(&local_b8,&local_2d0,&local_480,&local_200);
                FUN_016dd1aa(&local_130,&local_b0,0x70);
                if (local_130 != (undefined4 *******)&DAT_00000004) {
                  FUN_00f17590(&local_130);
                }
                goto LAB_00e787f4;
              }
              if (local_2c0 == (undefined4 *******)&DAT_80000000) goto LAB_00e7a2f4;
              dVar35 = *(double *)(local_4dc + 2);
              pppppppuVar4 = (undefined4 *******)thunk_FUN_016d4a50(0x11);
              if (pppppppuVar4 != (undefined4 *******)0x0) {
                FUN_016dd1aa(pppppppuVar4,"fixed_share_ratio",0x11);
                if (local_2a0 == (undefined4 *******)&DAT_80000000) {
LAB_00e78b60:
                  local_294 = (undefined4 *******)0x80000003;
                  local_298 = (undefined4 *******)&DAT_00000011;
                  local_264 = 0x80000003;
                  local_270 = (undefined4 *******)0x80000003;
                  local_27c = (undefined4 *******)0x80000003;
                  local_288 = (undefined4 *******)0x80000003;
                  local_2a0 = (undefined4 *******)&DAT_80000000;
                  local_42c = (undefined4 *******)&DAT_00000004;
                  local_460 = (undefined4 *******)0x80000003;
                  local_474 = (undefined4 *******)0x80000003;
                  local_480 = (undefined4 *******)0x80000003;
                  local_248 = (undefined4 *******)&DAT_00000011;
                  local_468 = dVar35;
                  if (NAN(dVar35)) {
                    local_468 = ABS(dVar35);
                  }
                  local_29c = pppppppuVar4;
                  FUN_016dd1aa(&pppppppuStack_244,&local_29c,0x44);
                  FUN_016dd1aa(&local_1f8,&local_480,0x68);
                  local_200 = (undefined4 *******)&DAT_00000001;
                  FUN_00ea0d40(&local_b8,&local_2d0,&local_248,&local_200);
                  FUN_016dd1aa(&local_130,&local_b0,0x70);
                  if (local_130 != (undefined4 *******)&DAT_00000004) {
                    FUN_00f17590(&local_130);
                  }
                  goto LAB_00e787f4;
                }
                FUN_00f174cc(&local_2a0);
                local_2a0 = (undefined4 *******)&DAT_00000011;
                local_298 = (undefined4 *******)&DAT_00000011;
                local_29c = pppppppuVar4;
                if (local_2c0 != (undefined4 *******)&DAT_80000000) goto LAB_00e78b60;
LAB_00e7a2e8:
                local_294 = (undefined4 *******)0x80000003;
                local_264 = 0x80000003;
                local_270 = (undefined4 *******)0x80000003;
                local_27c = (undefined4 *******)0x80000003;
                local_288 = (undefined4 *******)0x80000003;
                local_5a0 = &DAT_0187e4e0;
LAB_00e7a2f4:
                    /* WARNING: Subroutine does not return */
                FUN_00faa478(&DAT_00414516,0xc5,local_5a0);
              }
              local_524 = (undefined4 *******)&DAT_00000011;
              goto LAB_00e7a3a8;
            }
LAB_00e787f4:
            if (local_4dc[8] == (undefined4 ******)0x80000000) goto LAB_00e78a20;
            if (local_2c0 == (undefined4 *******)&DAT_80000000) goto LAB_00e7a2f4;
            pppppppuVar4 = (undefined4 *******)thunk_FUN_016d4a50(4);
            if (pppppppuVar4 == (undefined4 *******)0x0) goto LAB_00e7a3a0;
            *pppppppuVar4 = (undefined4 ******)0x6c6f6f70;
            if (local_2a0 != (undefined4 *******)&DAT_80000000) {
              FUN_00f174cc(&local_2a0);
              local_2a0 = (undefined4 *******)&DAT_00000004;
              local_298 = (undefined4 *******)&DAT_00000004;
              local_29c = pppppppuVar4;
              if (local_2c0 == (undefined4 *******)&DAT_80000000) goto LAB_00e7a2e8;
            }
            local_294 = (undefined4 *******)0x80000003;
            local_298 = (undefined4 *******)&DAT_00000004;
            local_264 = 0x80000003;
            local_270 = (undefined4 *******)0x80000003;
            local_27c = (undefined4 *******)0x80000003;
            local_288 = (undefined4 *******)0x80000003;
            local_2a0 = (undefined4 *******)&DAT_00000004;
            local_29c = pppppppuVar4;
            if (local_4dc[8] != (undefined4 ******)0x80000000) {
              uVar22 = (uint)local_4dc[10];
              uVar20 = (uint)local_4dc[9];
              FUN_0168d9d4(&local_b8,uVar22);
              if (local_b8 == (undefined4 *******)0x0) {
                local_190 = local_b4;
                local_18c = local_b0;
                local_188 = local_ac;
                if (uVar22 != 0) {
                  iVar2 = 0;
                  do {
                    iVar12 = uVar20 + iVar2;
                    uVar30 = (uint)*(byte *)(iVar12 + 0x24);
                    iVar3 = *(int *)(iVar12 + 0x18);
                    uVar16 = uVar30;
                    if (uVar30 != 2) {
                      uVar16 = 3;
                    }
                    if (iVar3 != -0x80000000) {
                      uVar16 = uVar16 + 1;
                    }
                    FUN_016833e0(&local_b8,uVar16);
                    pppppppuVar24 = local_a8;
                    pppppppuVar21 = local_ac;
                    pppppppuVar4 = local_b8;
                    pppppppuVar32 = (undefined4 *******)*puVar7;
                    pppppppuVar23 = (undefined4 *******)puVar7[1];
                    if (local_a8 == (undefined4 *******)0x80000001) {
LAB_00e78f2c:
                      local_13c = pppppppuVar23;
                      local_140 = pppppppuVar32;
                      if (pppppppuVar4 != (undefined4 *******)0x80000005) {
LAB_00e7a264:
                        local_5a8 = local_13c;
                        local_5a4 = local_140;
                        pppppppuVar21 = local_18c;
                        FUN_00f17a30(local_18c,local_188);
                        if (local_190 != (undefined4 *******)0x0) {
                          thunk_FUN_016d3fb4(pppppppuVar21);
                        }
                        goto LAB_00e7a294;
                      }
                    }
                    else {
                      FUN_016dd1aa(&local_11c,&local_a4,100);
                      local_120 = pppppppuVar24;
                      *(undefined4 *)((uint)&local_130 | 4) = pppppppuVar32;
                      ((undefined4 *)((uint)&local_130 | 4))[1] = pppppppuVar23;
                      local_130 = pppppppuVar4;
                      local_124 = pppppppuVar21;
                      if ((((uVar30 != 2) &&
                           (FUN_00f25ab4(&local_b8,&local_130,"enabled",7,
                                         *(undefined1 *)(iVar12 + 0x24)),
                           local_b8 != (undefined4 *******)0x80000005)) ||
                          (FUN_00f25940(&local_b8,&local_130,"url",3,*(undefined4 *)(iVar12 + 4),
                                        *(undefined4 *)(iVar12 + 8)),
                          local_b8 != (undefined4 *******)0x80000005)) ||
                         ((FUN_00f25940(&local_b8,&local_130,"user--",4,
                                        *(undefined4 *)(iVar12 + 0x10),
                                        *(undefined4 *)(iVar12 + 0x14)),
                          local_b8 != (undefined4 *******)0x80000005 ||
                          ((iVar3 != -0x80000000 &&
                           (FUN_00f25bd8(&local_b8,&local_130,&DAT_0056aa78,8,(int *)(iVar12 + 0x18)
                                        ), local_b8 != (undefined4 *******)0x80000005)))))) {
                        pppppppuVar4 = local_b8;
                        local_140 = local_b4;
                        local_13c = local_b0;
                        FUN_00e7a700(&local_130);
                        pppppppuVar32 = local_140;
                        pppppppuVar23 = local_13c;
                        goto LAB_00e78f2c;
                      }
                      FUN_016dd1aa(&local_b8,&local_130,0x78);
                      if (local_a8 != (undefined4 *******)&DAT_80000000) {
                        FUN_0167827c(&local_480,&local_b8);
                        local_5ac = local_42c;
                        local_5b0 = local_450;
                        pppppppuVar24 = local_45c;
                        pppppppuVar4 = local_480;
                        local_548 = local_46c;
                        local_55c = local_470;
                        local_40 = local_458;
                        local_3c = local_454;
                        local_4b0 = (undefined4 *******)*puVar6;
                        local_4ac = (undefined4 *******)puVar6[1];
                        local_4a8 = (undefined4 *******)puVar6[2];
                        local_38 = local_468._4_4_;
                        local_34 = local_460;
                        pppppppuVar21 = (undefined4 *******)local_468;
                        local_4d8 = local_44c;
                        local_4d4 = local_448;
                        local_4d0 = local_444;
                        local_4cc = pppppppuStack_440;
                        local_4c8 = local_43c;
                        local_4c4 = pppppppuStack_438;
                        local_4c0 = local_434;
                        local_4bc = pppppppuStack_430;
                        local_4a0 = local_428;
                        local_49c = local_424;
                        pppppppuStack_498 = local_420;
                        local_494 = pppppppuStack_41c;
                        if (local_88[0] != -0x80000000) {
                          FUN_00919614(local_88);
                        }
                        if (local_5ac == (undefined4 *******)&SUB_00000002) {
                          local_13c = local_4ac;
                          local_140 = local_4b0;
                          pppppppuVar32 = local_140;
                          pppppppuVar23 = local_13c;
                        }
                        else {
                          local_150 = local_40;
                          local_148 = local_38;
                          local_144 = local_34;
                          local_140 = local_4b0;
                          local_14c = local_3c;
                          local_138 = local_4a8;
                          local_13c = local_4ac;
                          local_170 = local_4d8;
                          local_16c = local_4d4;
                          local_168 = local_4d0;
                          local_164 = local_4cc;
                          local_160 = local_4c8;
                          pppppppuStack_15c = local_4c4;
                          pppppppuStack_158 = local_4c0;
                          pppppppuStack_154 = local_4bc;
                          local_174 = local_494;
                          local_178 = pppppppuStack_498;
                          local_17c = local_49c;
                          local_180 = local_4a0;
                          pppppppuVar32 = local_140;
                          pppppppuVar23 = local_13c;
                          if (local_5ac != (undefined4 *******)&DAT_00000008) goto LAB_00e790b8;
                        }
                        goto LAB_00e78f2c;
                      }
                      if (local_a4 == (undefined4 *******)&SUB_00000002) {
                        pppppppuVar4 = (undefined4 *******)0x80000002;
                        goto LAB_00e7a264;
                      }
                      pppppppuVar24 = (undefined4 *******)0x80000003;
                      pppppppuVar21 = (undefined4 *******)0x80000003;
                      local_55c = local_94;
                      local_548 = local_90;
                      *(undefined4 *)((uint)&local_140 | 4) = local_9c;
                      ((undefined4 *)((uint)&local_140 | 4))[1] = local_98;
                      local_5b0 = (undefined4 *******)0x80000003;
                      local_5ac = (undefined4 *******)&DAT_00000006;
                      local_140 = local_a0;
                      pppppppuVar4 = local_a4;
LAB_00e790b8:
                      pppppppuVar32 = local_188;
                      extraout_r2[6] = local_148;
                      extraout_r2[7] = local_144;
                      extraout_r2[9] = local_150;
                      extraout_r2[10] = local_14c;
                      extraout_r2[3] = local_55c;
                      extraout_r2[4] = local_548;
                      local_80 = local_5b0;
                      local_a4 = local_138;
                      local_7c = local_170;
                      pppppppuStack_78 = local_16c;
                      pppppppuStack_74 = local_168;
                      pppppppuStack_70 = local_164;
                      local_6c = local_160;
                      pppppppuStack_68 = pppppppuStack_15c;
                      pppppppuStack_64 = pppppppuStack_158;
                      pppppppuStack_60 = pppppppuStack_154;
                      local_58 = local_180;
                      pppppppuStack_54 = local_17c;
                      pppppppuStack_50 = local_178;
                      pppppppuStack_4c = local_174;
                      *extraout_r2 = local_140;
                      extraout_r2[1] = local_13c;
                      local_5c = local_5ac;
                      local_b8 = (undefined4 *******)&DAT_00000001;
                      local_b0 = pppppppuVar4;
                      local_98 = pppppppuVar21;
                      local_8c = pppppppuVar24;
                      if (local_188 == local_190) {
                        FUN_0166e448(&local_190);
                      }
                      FUN_016dd1aa(local_18c + (int)pppppppuVar32 * 0x1c,&local_b8,0x70);
                      local_188 = (undefined4 *******)((int)pppppppuVar32 + 1);
                    }
                    iVar2 = iVar2 + 0x28;
                  } while (uVar22 * 0x28 != iVar2);
                }
                pppppppuVar4 = local_2a0;
                local_258 = local_190;
                local_254 = local_18c;
                pppppppuStack_250 = local_188;
                *puVar6 = local_5a4;
                puVar6[1] = local_5a8;
                local_480 = (undefined4 *******)0x0;
                local_474 = local_190;
                local_470 = local_18c;
                local_46c = local_188;
                local_42c = (undefined4 *******)&DAT_00000007;
                local_444 = (undefined4 *******)((uint)local_444 & 0xffffff00);
                bVar34 = local_2a0 == (undefined4 *******)&DAT_80000000;
                local_450 = (undefined4 *******)0x80000003;
                local_45c = (undefined4 *******)0x80000003;
                local_468 = (double)CONCAT44(local_468._4_4_,0x80000000);
                local_2a0 = (undefined4 *******)&DAT_80000000;
                if (bVar34) {
                    /* WARNING: Subroutine does not return */
                  FUN_00faa444(&DAT_0187e500);
                }
                local_248 = pppppppuVar4;
                FUN_016dd1aa(&pppppppuStack_244,&local_29c,0x44);
                local_1f8 = (undefined4 *******)0x0;
                local_1f4 = local_5a4;
                local_1f0 = local_5a8;
                local_1bc = (undefined4 *******)((uint)local_1bc & 0xffffff00);
                local_1ec = local_258;
                local_1e8 = local_254;
                local_1e4 = pppppppuStack_250;
                local_1a4 = (undefined4 *******)&DAT_00000007;
                local_1c8 = (undefined4 *******)0x80000003;
                local_1d4 = (undefined4 *******)0x80000003;
                local_1e0 = (undefined4 *******)&DAT_80000000;
                local_200 = (undefined4 *******)&DAT_00000001;
                FUN_00ea0d40(&local_b8,&local_2d0,&local_248,&local_200);
                FUN_016dd1aa(&local_130,&local_b0,0x70);
                if (local_130 != (undefined4 *******)&DAT_00000004) {
                  FUN_00f17590(&local_130);
                }
                goto LAB_00e78a20;
              }
              local_5a4 = local_b0;
              local_5a8 = local_ac;
              pppppppuVar4 = local_b4;
              if (local_b4 == (undefined4 *******)0x80000005) goto LAB_00e78a20;
LAB_00e7a294:
              *puVar8 = local_5a4;
              puVar8[1] = local_5a8;
              local_338 = pppppppuVar4;
              FUN_00e7a700(&local_2d0);
              pppppppuVar21 = local_5a4;
              pppppppuVar24 = local_5a8;
LAB_00e7a2b0:
              pppppppuVar32 = local_344;
              FUN_00f17a30(local_344,local_340);
              if (local_348 != (undefined4 *******)0x0) {
                thunk_FUN_016d3fb4(pppppppuVar32);
              }
              goto LAB_00e781a8;
            }
LAB_00e78a20:
            FUN_016dd1aa(&local_b8,&local_2d0,0x78);
            FUN_0168298c(&local_338,&local_b8);
            pppppppuVar32 = local_2e4;
            pppppppuVar4 = local_338;
            pppppppuVar21 = (undefined4 *******)*puVar8;
            pppppppuVar24 = (undefined4 *******)puVar8[1];
            if (local_2e4 == (undefined4 *******)&DAT_00000008) {
              if (local_338 != (undefined4 *******)0x80000005) goto LAB_00e7a2b0;
            }
            else {
              FUN_016dd1aa(&local_a4,local_32c,0x48);
              pppppppuVar23 = local_340;
              local_b0 = pppppppuVar4;
              pppppppuStack_54 = pppppppuStack_2dc;
              pppppppuStack_50 = pppppppuStack_2d8;
              pppppppuStack_4c = pppppppuStack_2d4;
              local_58 = local_2e0;
              local_5c = pppppppuVar32;
              local_b8 = (undefined4 *******)&DAT_00000001;
              local_ac = pppppppuVar21;
              local_a8 = pppppppuVar24;
              if (local_340 == local_348) {
                FUN_0166e448(&local_348);
              }
              FUN_016dd1aa(local_344 + (int)pppppppuVar23 * 0x1c,&local_b8,0x70);
              local_340 = (undefined4 *******)((int)pppppppuVar23 + 1);
            }
            local_4dc = local_4dc + 0xc;
          } while (local_4dc != (undefined4 *******)puVar5);
        }
        local_410 = local_348;
        local_40c = local_344;
        pppppppuStack_408 = local_340;
        ppppppuVar10 = *(undefined4 *******)(param_3 + 0x30);
        *(undefined4 *)(param_3 + 0x30) = 0x80000000;
        local_2d0 = (undefined4 *******)0x0;
        local_2c4 = local_348;
        local_2c0 = local_344;
        local_2bc = local_340;
        local_27c = (undefined4 *******)0x7;
        local_294 = (undefined4 *******)((uint)local_294 & 0xffffff00);
        local_2a0 = (undefined4 *******)0x80000003;
        local_2ac = (undefined4 *******)0x80000003;
        local_2b8 = (undefined4 *******)0x80000000;
        if (ppppppuVar10 == (undefined4 ******)0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_0187e500);
        }
        local_400 = (undefined4 *******)ppppppuVar10;
        FUN_016dd1aa(&local_3fc,param_3 + 0x34,0x44);
        local_398 = (undefined4 *******)0x80000000;
        local_3b8 = (undefined4 *******)0x1;
        local_3a4 = local_410;
        local_3a0 = local_40c;
        pppppppuStack_39c = pppppppuStack_408;
        local_3b0 = (undefined4 *******)0x0;
        local_35c = (undefined4 *******)0x7;
        local_374 = (undefined4 *******)((uint)local_374 & 0xffffff00);
        local_380 = (undefined4 *******)0x80000003;
        local_38c = (undefined4 *******)0x80000003;
        FUN_00ea0d40(&local_b8,param_3,&local_400,&local_3b8);
        FUN_016dd1aa(&local_130,&local_b0,0x70);
        if (local_130 != (undefined4 *******)&DAT_00000004) {
          FUN_00f17590(&local_130);
        }
      }
      else if (local_b4 != (undefined4 *******)0x80000005) {
        pppppppuVar21 = local_b0;
        pppppppuVar24 = local_ac;
        pppppppuVar4 = local_b4;
        goto LAB_00e781a8;
      }
    }
  }
  *param_1 = 0x80000005;
  return;
}

