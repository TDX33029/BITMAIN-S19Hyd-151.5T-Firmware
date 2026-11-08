// FUN_01761068 @ 01761068 size=11844 calls_out=79 calls_in=1
// strings:  0   |  0   | eep-alive | overflow when adding duration to instant | current header name

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01761068(uint *****param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  uint *****pppppuVar6;
  uint *****pppppuVar7;
  uint *****pppppuVar8;
  undefined4 *puVar9;
  uint *****pppppuVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint *****pppppuVar13;
  uint *****pppppuVar14;
  uint *****pppppuVar15;
  uint *****pppppuVar16;
  uint *****pppppuVar17;
  uint *****pppppuVar18;
  uint *****pppppuVar19;
  uint *****pppppuVar20;
  uint *****pppppuVar21;
  uint *****pppppuVar22;
  uint *****pppppuVar23;
  uint *****pppppuVar24;
  uint *****pppppuVar25;
  uint *****pppppuVar26;
  int iVar27;
  uint ****ppppuVar28;
  int iVar29;
  uint *****pppppuVar30;
  uint *****pppppuVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 *puVar37;
  uint *puVar38;
  undefined4 uVar39;
  uint *****pppppuVar40;
  int *piVar41;
  uint ****extraout_r1;
  undefined1 *puVar42;
  uint ***pppuVar43;
  uint *****pppppuVar44;
  uint *****pppppuVar45;
  uint uVar46;
  uint *****pppppuVar47;
  uint *****pppppuVar48;
  uint ****ppppuVar49;
  uint ****ppppuVar50;
  bool bVar51;
  bool bVar52;
  ulonglong uVar53;
  undefined8 uVar54;
  uint *****local_554;
  uint *****local_550;
  uint *****local_54c;
  uint *****local_548;
  uint *****local_544;
  uint *****local_540;
  uint *****local_53c;
  uint *****local_538;
  uint *****local_534;
  uint local_510;
  uint local_50c;
  uint *****local_4a4;
  uint *****local_484;
  uint ****local_468;
  uint ****local_464;
  uint ****local_460;
  uint ****local_45c;
  uint ****local_454;
  uint ****local_450;
  uint ****local_440;
  uint local_3ec;
  uint *****local_3e8;
  uint *****local_3e0;
  uint *****local_3dc;
  uint *****local_3d8;
  uint *****local_3d4;
  uint *****local_3d0;
  uint *****pppppuStack_3cc;
  uint *****local_3c8;
  uint *****pppppuStack_3c4;
  uint *****pppppuStack_3c0;
  uint *****pppppuStack_3bc;
  uint *****pppppuStack_3b8;
  uint *****local_3b4;
  uint *****pppppuStack_3b0;
  uint *****pppppuStack_3ac;
  uint *****pppppuStack_3a8;
  uint ****ppppuStack_3a4;
  uint *****local_3a0;
  uint *****local_39c;
  uint *****pppppuStack_398;
  uint *****pppppuStack_394;
  uint *****pppppuStack_390;
  uint *****local_38c;
  uint *****pppppuStack_388;
  uint *****pppppuStack_384;
  uint *****pppppuStack_380;
  uint *****pppppuStack_37c;
  uint *****local_378;
  uint *****pppppuStack_374;
  uint ****ppppuStack_370;
  uint *****pppppuStack_36c;
  uint *****pppppuStack_368;
  uint *****local_360;
  uint *****local_35c;
  uint *****pppppuStack_358;
  uint *****pppppuStack_354;
  uint *****local_350;
  uint *****local_34c;
  uint *****local_348;
  uint *****local_344;
  uint *****local_340;
  uint *****local_310;
  uint *****local_30c;
  uint *****local_308;
  uint *****local_304;
  uint *****local_300;
  uint *****pppppuStack_2fc;
  undefined3 uStack_2f8;
  undefined1 local_2f5;
  undefined1 local_2f4;
  uint *****local_2f0;
  uint *****local_2ec;
  uint *****local_2e8;
  uint *****local_2e4;
  undefined1 local_2e0 [4];
  uint *****pppppuStack_2dc;
  uint *****pppppuStack_2d8;
  uint *****local_2d4;
  undefined4 local_2d0;
  uint *****local_270;
  uint *****pppppuStack_26c;
  uint *****pppppuStack_268;
  uint *****pppppuStack_264;
  uint *****local_260;
  uint *****pppppuStack_25c;
  uint *****pppppuStack_258;
  uint *****pppppuStack_254;
  uint *****local_250;
  uint *****pppppuStack_24c;
  uint *****pppppuStack_248;
  uint *****pppppuStack_244;
  uint ****ppppuStack_240;
  uint *****local_238;
  uint *****local_234;
  uint *****local_230;
  uint *****local_22c;
  uint *****local_228;
  uint *****local_224;
  uint *****local_220;
  uint *****local_21c;
  uint *****local_218;
  uint *****local_214;
  uint *****local_210;
  uint *****local_20c;
  uint *****local_208;
  uint *****local_204;
  uint *****local_200;
  uint ****ppppuStack_1fc;
  uint *****local_1f8;
  uint *****pppppuStack_1f4;
  uint *****pppppuStack_1f0;
  uint *****pppppuStack_1ec;
  uint *****pppppuStack_1e8;
  uint *****local_1e4;
  uint *****pppppuStack_1e0;
  uint *****pppppuStack_1dc;
  uint *****pppppuStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  int local_1b8;
  char local_1b4;
  uint *****local_1b0;
  uint *****pppppuStack_1ac;
  uint *****pppppuStack_1a8;
  uint *****pppppuStack_1a4;
  uint *****local_1a0;
  uint *****pppppuStack_19c;
  uint *****pppppuStack_198;
  uint *****local_190;
  uint *****local_18c;
  uint *****local_188;
  uint *****local_184;
  uint *****local_180;
  uint *****pppppuStack_17c;
  uint *****local_178;
  uint *****local_174;
  uint *****local_170;
  uint *****local_16c;
  uint *****local_168;
  uint *****local_164;
  uint *****pppppuStack_160;
  uint *****pppppuStack_15c;
  uint *****pppppuStack_158;
  uint ****ppppuStack_154;
  uint *****local_148;
  uint *****pppppuStack_144;
  uint *****pppppuStack_140;
  uint *****pppppuStack_13c;
  uint *****local_138;
  uint *****pppppuStack_134;
  uint *****pppppuStack_130;
  uint *****pppppuStack_12c;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_f8;
  uint *****local_f4;
  uint *****local_f0;
  uint *****local_ec;
  uint *****local_e8;
  uint *****local_e4;
  undefined4 local_e0;
  uint *****pppppuStack_dc;
  uint *****local_d8;
  uint *****pppppuStack_d4;
  uint *****local_d0;
  uint *****pppppuStack_cc;
  uint *****pppppuStack_c8;
  uint *****local_c4;
  uint *****pppppuStack_c0;
  uint ****ppppuStack_bc;
  uint *****local_b8;
  undefined4 uStack_b4;
  uint *****local_b0;
  uint *****local_ac;
  char local_a8;
  char local_a7;
  byte local_a6;
  uint *****local_a4;
  uint *****pppppuStack_a0;
  uint *****pppppuStack_9c;
  uint *****pppppuStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 local_74;
  int local_6c;
  uint *****local_68;
  uint *****local_64;
  uint *****local_60;
  uint *****pppppuStack_5c;
  uint *****local_58;
  uint *****pppppuStack_54;
  uint *****pppppuStack_50;
  uint *****pppppuStack_4c;
  uint *****pppppuStack_48;
  uint *****pppppuStack_44;
  uint *****local_40;
  uint *****pppppuStack_3c;
  uint *****pppppuStack_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  uStack_b4 = (uint *****)CONCAT13(uStack_b4._3_1_,CONCAT12(uStack_b4._2_1_,(undefined2)uStack_b4));
  puVar9 = (undefined4 *)((uint)&local_58 | 4);
  pppppuVar10 = (uint *****)((uint)&local_f8 | 4);
  puVar11 = (undefined4 *)((uint)&local_360 | 4);
  puVar12 = (undefined4 *)((uint)&local_3e0 | 4);
  pppppuVar13 = (uint *****)(local_2e0 + 1);
  pppppuVar14 = param_1 + 0x26;
  pppppuVar15 = param_1 + 0x42;
  pppppuVar16 = param_1 + 0x46;
  pppppuVar17 = param_1 + 0x18;
  pppppuVar18 = param_1 + 0x16;
  pppppuVar19 = param_1 + 0x52;
  pppppuVar20 = param_1 + 0x32;
  pppppuVar21 = param_1 + 0x34;
  pppppuVar22 = param_1 + 0x40;
  pppppuVar23 = param_1 + 0x58;
  pppppuVar24 = param_1 + 0x5e;
  pppppuVar25 = param_1 + 0x24;
  pppppuVar26 = param_1 + 0x10;
  local_3ec = 0;
  local_50c = 0;
  local_3e8 = (uint *****)0x0;
  local_510 = 0;
  bVar5 = 0;
  iVar27 = 0;
  pppppuVar44 = param_1;
  do {
    if (iVar27 == 0x10) {
      (**(code **)(*(int *)*param_2 + 8))(((int *)*param_2)[1]);
      uVar39 = 1;
      goto LAB_01763d38;
    }
    pppppuVar48 = local_3e8;
    pppppuVar30 = pppppuVar44;
LAB_017612dc:
    do {
      local_3e8 = pppppuVar48;
      if (*(char *)(param_1 + 100) != '\0') goto LAB_01762684;
      ppppuVar28 = *pppppuVar26;
      if ((ppppuVar28 != (uint ****)0x0 || param_1[0x11] != (uint ****)0x0) ||
         (*pppppuVar25 == (uint ****)0x3)) {
        cVar2 = *(char *)(param_1 + 0x62);
        *(undefined1 *)(param_1 + 0x62) = 3;
        if (cVar2 == '\x03') {
          if (((uint)ppppuVar28 & 7) == 4) goto LAB_01762684;
          pppppuVar44 = pppppuVar30;
          if ((ppppuVar28 != (uint ****)0x0) || (*pppppuVar25 != (uint ****)0x3)) {
            ppppuVar28 = (uint ****)(uint)*(byte *)(param_1 + 0x3a);
            bVar51 = ppppuVar28 != (uint ****)0x0;
            if (!bVar51) {
              ppppuVar28 = param_1[0x53];
            }
            if (bVar51 || ppppuVar28 != (uint ****)0x0) goto LAB_01762684;
            FUN_0175f40c(&local_190,param_1,param_2);
            iVar32 = ((uint)local_190 & 0xff) - 5;
            if (iVar32 != 0) {
              if (((uint)local_190 & 0xff) == 4) {
                if (local_18c != (uint *****)0x0) goto LAB_01762680;
                FUN_0172f038(pppppuVar26);
                bVar51 = false;
                *pppppuVar26 = (uint ****)0x4;
                param_1[0x11] = (uint ****)0x0;
                *(undefined1 *)((int)param_1 + 0xf7) = 2;
                pppppuVar44 = (uint *****)FUN_01427b74();
                goto LAB_01762668;
              }
LAB_0176264c:
              local_238 = local_190;
              local_234 = local_18c;
              pppppuVar44 = (uint *****)FUN_01427eb0(&local_238);
            }
LAB_01762660:
            bVar51 = iVar32 == 0;
            goto LAB_01762668;
          }
          if (param_1[0x53] == (uint ****)0x0) {
            FUN_0175f40c(&local_190,param_1,param_2);
            iVar32 = ((uint)local_190 & 0xff) - 5;
            if (iVar32 == 0) goto LAB_01762660;
            if (((uint)local_190 & 0xff) != 4) goto LAB_0176264c;
            if (local_18c == (uint *****)0x0) {
              bVar51 = false;
              pppppuVar44 = (uint *****)0x0;
              if (*(char *)((int)param_1 + 0xf7) != '\0') {
                pppppuVar44 = (uint *****)FUN_01427b74(2);
              }
              FUN_0172f038(pppppuVar26);
              *pppppuVar26 = (uint ****)0x4;
              param_1[0x11] = (uint ****)0x0;
              *(undefined1 *)((int)param_1 + 0xf7) = 2;
              goto LAB_01762668;
            }
          }
          pppppuVar44 = (uint *****)FUN_01427b74(3);
          break;
        }
        local_2f0 = (uint *****)*pppppuVar24;
        local_2ec = (uint *****)param_1[0x5f];
        local_2e8 = (uint *****)param_1[0x60];
        local_2e4 = (uint *****)param_1[0x61];
        local_2e0[0] = cVar2;
        pppppuVar30 = pppppuVar13;
        if ((int)ppppuVar28 - 1U < 2) {
          uVar53 = FUN_014232b8(&local_2f0,param_2);
          iVar32 = (int)(uVar53 >> 0x20);
          if ((uVar53 & 1) != 0) {
            local_238 = local_2f0;
            local_234 = local_2ec;
            local_230 = local_2e8;
            local_22c = local_2e4;
            local_228 = (uint *****)local_2e0;
            if (*(char *)(param_1 + 0x62) != '\x03') {
              FUN_01820460(pppppuVar24);
            }
            *pppppuVar24 = (uint ****)local_2f0;
            param_1[0x5f] = (uint ****)local_2ec;
            param_1[0x60] = (uint ****)local_2e8;
            param_1[0x61] = (uint ****)local_2e4;
            param_1[0x62] = (uint ****)local_2e0;
            goto LAB_01762684;
          }
          if (iVar32 == 0) {
            FUN_0175f48c(&local_190,param_1,param_2);
            pppppuVar40 = pppppuStack_158;
            pppppuVar47 = local_184;
            pppppuVar44 = local_188;
            if (((uint)local_190 & 7) == 4) {
              pppppuVar30 = (uint *****)FUN_01427b74(8);
              local_234 = pppppuVar47;
              local_238 = pppppuVar44;
              FUN_01427bf4(pppppuVar30,&local_238);
              FUN_01423388(local_2e8,(uint)(byte)local_2e0[0],pppppuVar30);
            }
            else if (local_190 != (uint *****)&DAT_00000005) {
              if (local_190 == (uint *****)&DAT_00000006) {
                local_238 = local_2f0;
                local_234 = local_2ec;
                local_230 = local_2e8;
                local_22c = local_2e4;
                local_228 = (uint *****)local_2e0;
                if (*(char *)(param_1 + 0x62) != '\x03') {
                  FUN_01820460(pppppuVar24);
                }
                *pppppuVar24 = (uint ****)local_2f0;
                param_1[0x5f] = (uint ****)local_2ec;
                param_1[0x60] = (uint ****)local_2e8;
                param_1[0x61] = (uint ****)local_2e4;
                param_1[0x62] = (uint ****)local_2e0;
                goto LAB_01762684;
              }
              if (local_190 == (uint *****)&DAT_00000003 && local_18c == (uint *****)0x0) {
                FUN_01423668(&local_f8,&local_2f0,&local_188);
                pppppuVar30 = local_f0;
                if (local_f8 == (uint *****)0x0) {
                  local_238 = local_2f0;
                  local_234 = local_2ec;
                  local_230 = local_2e8;
                  local_22c = local_2e4;
                  local_228 = (uint *****)local_2e0;
                  if (*(char *)(param_1 + 0x62) != '\x03') {
                    FUN_01820460(pppppuVar24);
                  }
                  *pppppuVar24 = (uint ****)local_2f0;
                  param_1[0x5f] = (uint ****)local_2ec;
                  param_1[0x60] = (uint ****)local_2e8;
                  param_1[0x61] = (uint ****)local_2e4;
                  param_1[0x62] = (uint ****)local_2e0;
                  pppppuVar30 = local_2e4;
                  goto LAB_017612dc;
                }
                local_238 = local_f8;
                local_234 = local_f4;
                local_230 = local_f0;
                local_22c = local_ec;
                if ((int)*pppppuVar26 - 1U < 2) {
                  FUN_0172f038(pppppuVar26);
                  *pppppuVar26 = (uint ****)0x4;
                  param_1[0x11] = (uint ****)0x0;
                  *(undefined1 *)((int)param_1 + 0xf7) = 2;
                }
                (*(code *)local_238[4])(&local_22c,local_234,local_230);
              }
              else {
                local_3d8 = local_188;
                local_3d4 = local_184;
                local_3d0 = local_180;
                pppppuStack_3cc = pppppuStack_17c;
                local_3c8 = local_178;
                pppppuStack_3c4 = local_174;
                pppppuStack_3c0 = local_170;
                pppppuStack_3bc = local_16c;
                pppppuStack_3b8 = local_168;
                local_3b4 = local_164;
                pppppuStack_3b0 = pppppuStack_160;
                pppppuStack_3ac = pppppuStack_15c;
                pppppuStack_3a8 = pppppuStack_158;
                ppppuStack_3a4 = ppppuStack_154;
                local_3dc = local_18c;
                local_3e0 = local_190;
                FUN_01423720(&local_238,&local_2f0,&local_3e0);
                pppppuVar47 = local_234;
                pppppuVar44 = local_238;
                if (local_238 == (uint *****)&SUB_00000004 && local_234 == (uint *****)0x0) {
                  local_f8 = local_2f0;
                  local_f4 = local_2ec;
                  local_f0 = local_2e8;
                  local_ec = local_2e4;
                  local_e8 = (uint *****)local_2e0;
                  if (*(char *)(param_1 + 0x62) != '\x03') {
                    FUN_01820460(pppppuVar24);
                  }
                  *pppppuVar24 = (uint ****)local_2f0;
                  param_1[0x5f] = (uint ****)local_2ec;
                  param_1[0x60] = (uint ****)local_2e8;
                  param_1[0x61] = (uint ****)local_2e4;
                  param_1[0x62] = (uint ****)local_2e0;
                  pppppuVar30 = local_2e4;
                  goto LAB_017612dc;
                }
                pppppuVar30 = pppppuVar40;
                if ((int)*pppppuVar26 - 1U < 2) {
                  FUN_0172f038(pppppuVar26);
                  *pppppuVar26 = (uint ****)0x4;
                  param_1[0x11] = (uint ****)0x0;
                  *(undefined1 *)((int)param_1 + 0xf7) = 2;
                  pppppuVar30 = pppppuVar26;
                }
                if (pppppuVar44 != (uint *****)&DAT_00000003 || pppppuVar47 != (uint *****)0x0) {
                  FUN_0142e6dc(&local_238);
                }
              }
            }
          }
          else {
            if (*pppppuVar26 == (uint ****)0x1 && param_1[0x11] == (uint ****)0x0) {
              ppppuVar28 = param_1[0x12];
              iVar29 = 1;
              if ((uint ****)0x1 < ppppuVar28) {
                iVar29 = (int)ppppuVar28 - 2;
              }
              if ((iVar29 == 0) || (iVar29 != 1)) {
                local_440 = param_1[0x19];
                ppppuVar50 = *pppppuVar17;
                local_450 = *pppppuVar18;
                local_454 = param_1[0x17];
                local_45c = param_1[0x13];
                local_460 = param_1[0x14];
                local_464 = param_1[0x15];
                local_190 = (uint *****)param_1[0x1a];
                local_18c = (uint *****)param_1[0x1b];
                local_188 = (uint *****)param_1[0x1c];
                local_184 = (uint *****)param_1[0x1d];
                local_f8 = (uint *****)CONCAT13(local_f8._3_1_,*(undefined3 *)((int)param_1 + 0x7d))
                ;
                uVar3 = *(undefined1 *)(param_1 + 0x1f);
                local_468 = param_1[0x1e];
              }
              else {
                ppppuVar50 = *pppppuVar17;
                local_440 = param_1[0x19];
                local_450 = *pppppuVar18;
                local_454 = param_1[0x17];
                uVar3 = *(undefined1 *)(param_1 + 0x1f);
                if (param_1[0x1a] == (uint ****)0x0) {
                  local_238 = (uint *****)0x0;
                }
                else {
                  FUN_012841fc(&local_238,param_1[0x1a],param_1[0x1b]);
                }
                local_45c = param_1[0x13];
                local_460 = param_1[0x14];
                local_464 = param_1[0x15];
                local_468 = param_1[0x1e];
                local_190 = local_238;
                local_18c = local_234;
                local_188 = local_230;
                local_184 = local_22c;
              }
              FUN_0172f038(pppppuVar26);
              *pppppuVar26 = (uint ****)0x2;
              param_1[0x11] = (uint ****)0x0;
              *pppppuVar18 = local_450;
              param_1[0x17] = local_454;
              *pppppuVar17 = ppppuVar50;
              param_1[0x19] = local_440;
              param_1[0x12] = ppppuVar28;
              param_1[0x13] = local_45c;
              param_1[0x14] = local_460;
              param_1[0x15] = local_464;
              param_1[0x1a] = (uint ****)local_190;
              param_1[0x1b] = (uint ****)local_18c;
              param_1[0x1c] = (uint ****)local_188;
              param_1[0x1d] = (uint ****)local_184;
              *(undefined1 *)(param_1 + 0x1f) = uVar3;
              param_1[0x1e] = local_468;
              *(undefined2 *)((int)param_1 + 0x7d) = (undefined2)local_f8;
              *(undefined1 *)((int)param_1 + 0x7f) = local_f8._2_1_;
              pppppuVar30 = param_1;
            }
            FUN_0175f48c(&local_238,param_1,param_2);
            FUN_00a605d0(&local_238);
            if (*pppppuVar26 != (uint ****)0x0 && *pppppuVar26 != (uint ****)0x3) {
              FUN_0172f038(pppppuVar26);
              *pppppuVar26 = (uint ****)0x4;
              param_1[0x11] = (uint ****)0x0;
              *(undefined1 *)((int)param_1 + 0xf7) = 2;
            }
            FUN_01a69838(iVar32);
          }
        }
        FUN_01820460(&local_2f0);
LAB_01761890:
        goto LAB_017612dc;
      }
      if ((*pppppuVar23 == (uint ****)0x2) ||
         (iVar32 = FUN_009d52c4(pppppuVar23,*param_2), iVar32 == 0)) {
        *(undefined1 *)(param_1 + 100) = 1;
        FUN_0172f038(pppppuVar26);
        *pppppuVar26 = (uint ****)0x4;
        param_1[0x11] = (uint ****)0x0;
        *(undefined1 *)((int)param_1 + 0xf7) = 2;
        if (param_1[0x24] < (uint ****)0x3) {
          FUN_014216c0(pppppuVar25);
        }
        *(undefined1 *)((int)param_1 + 0xf7) = 2;
        param_1[0x24] = (uint ****)0x6;
        pppppuVar30 = param_1;
        goto LAB_01761890;
      }
      if ((*(char *)(param_1 + 0x3c) == '\0') &&
         (ppppuVar28 = param_1[0x2c], ppppuVar28 != (uint ****)&DAT_3b9aca00)) {
        ppppuVar50 = param_1[0x2a];
        ppppuVar49 = param_1[0x2b];
        FUN_01421a04(&local_238,param_1[0x30],param_1[0x31]);
        uVar33 = (int)local_238 + (int)ppppuVar50;
        puVar37 = (undefined1 *)
                  ((int)local_234 + (uint)CARRY4((uint)local_238,(uint)ppppuVar50) + (int)ppppuVar49
                  );
        if ((int)ppppuVar49 < 0 !=
            (int)(((uint)local_234 ^ (uint)puVar37) & ~((uint)local_234 ^ (uint)ppppuVar49)) < 0) {
LAB_01763d18:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
        }
        puVar42 = (undefined1 *)((int)ppppuVar28 + (int)local_230);
        if (&DAT_3b9aca00 <= puVar42) {
          bVar51 = 0xfffffffe < uVar33;
          uVar33 = uVar33 + 1;
          if ((int)(((uint)puVar37 ^ (uint)(puVar37 + bVar51)) & ~(uint)puVar37) < 0)
          goto LAB_01763d18;
          puVar42 = puVar42 + -1000000000;
          puVar37 = puVar37 + bVar51;
        }
        ppppuVar28 = param_1[0x30];
        *(undefined1 *)(param_1 + 0x3c) = 1;
        if (param_1[0x2e] == (uint ****)0x0) {
          if (ppppuVar28 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00477c39,0x31,&DAT_01cf474c,puVar37);
          }
          uVar54 = (*(code *)param_1[0x31][4])
                             ((int)ppppuVar28 + ((int)param_1[0x31][2] - 1U & 0xfffffff8) + 8,
                              ppppuVar28,uVar33,puVar37,puVar42);
          if (param_1[0x2e] != (uint ****)0x0) {
            FUN_01139b38(param_1[0x2e],param_1[0x2f]);
          }
          *(undefined8 *)(param_1 + 0x2e) = uVar54;
        }
        else {
          if (ppppuVar28 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_00477c39,0x31,&DAT_01cf476c,puVar37);
          }
          (*(code *)param_1[0x31][6])
                    ((int)ppppuVar28 + ((int)param_1[0x31][2] - 1U & 0xfffffff8) + 8,param_1 + 0x2e,
                     uVar33,puVar37,puVar42);
        }
      }
      pppppuVar47 = (uint *****)param_1[0x21];
      uVar3 = *(undefined1 *)((int)param_1 + 0xf2);
      uVar4 = *(undefined1 *)(param_1 + 0x3d);
      pppppuStack_48 = *(uint ******)((int)param_1 + 0xe9);
      pppppuVar44 = (uint *****)param_1[0x20];
      pppppuStack_44._0_3_ = (undefined3)((uint)param_1[0x3b] >> 8);
      do {
        uStack_2f8 = SUB43(pppppuStack_44,0);
        pppppuStack_2fc = pppppuStack_48;
        local_310 = pppppuVar44;
        local_30c = pppppuVar47;
        local_308 = param_1;
        local_304 = pppppuVar21;
        local_300 = pppppuVar20;
        local_2f5 = uVar3;
        local_2f4 = uVar4;
        if ((param_1[0x53] != (uint ****)0x0) &&
           ((param_1[0x40] == (uint ****)0x0 ||
            (iVar32 = FUN_01417e0c(*pppppuVar19,param_1[0x53],param_1[0x41]), iVar32 != 0)))) {
          FUN_01417fb8(&local_238,pppppuVar19,&local_310);
          pppppuVar31 = local_230;
          pppppuVar30 = local_234;
          pppppuVar40 = local_238;
          pppppuVar45 = (uint *****)((uint)local_230 & 0xff);
          if (!(local_238 == (uint *****)&SUB_00000004 && local_234 == (uint *****)0x0)) {
            FUN_01bed4e2(&local_2f0,&local_22c,0x4c);
            if (pppppuVar40 == (uint *****)&DAT_00000003 && pppppuVar30 == (uint *****)0x0)
            goto LAB_01761b0c;
            FUN_01bed4e2(&local_360,&local_2f0,0x4c);
            *pppppuVar22 = (uint ****)0x0;
            local_484 = pppppuVar31;
            goto LAB_01761bf4;
          }
          uVar39 = 0;
          goto LAB_01761da0;
        }
LAB_01761b0c:
        iVar32 = 8;
        if (*(char *)(param_1 + 0x4c) != '\0') {
          iVar32 = 4;
        }
        pppppuVar40 = *(uint ******)((int)param_1 + iVar32 + 0x130);
        pppppuVar31 = (uint *****)param_1[0x53];
        if (pppppuVar40 <= pppppuVar31) {
          local_484 = (uint *****)FUN_01427b74(0,10);
          goto LAB_01761db8;
        }
        bVar51 = pppppuVar31 != (uint *****)0x0;
        if (bVar51) {
          pppppuVar40 = param_1;
        }
        pppppuVar30 = (uint *****)0x0;
        if (bVar51) {
          pppppuVar40[0x41] = (uint ****)pppppuVar31;
        }
        *pppppuVar22 = (uint ****)(uint)bVar51;
        FUN_01725b48(&local_310,pppppuVar22,param_2);
        if ((char)local_310 == '\x05') {
          pppppuVar40 = (uint *****)&SUB_00000004;
LAB_01761bf4:
          if (((uint)pppppuVar40 & 7) == 3) goto LAB_01761db8;
          if (pppppuVar40 != (uint *****)&SUB_00000004) {
            local_f0 = local_484;
            local_f8 = pppppuVar40;
            local_f4 = pppppuVar30;
            FUN_01bed4e2(&local_ec,&local_360,0x4c);
            *(undefined1 *)(param_1 + 0x3c) = 0;
            if (param_1[0x2e] != (uint ****)0x0) {
              FUN_01139b38(param_1[0x2e],param_1[0x2f]);
            }
            ppppuVar28 = param_1[0x32];
            *(undefined1 *)(param_1 + 0x3d) = 0;
            param_1[0x2e] = (uint ****)0x0;
            if (ppppuVar28 != (uint ****)0x0) {
              DataMemoryBarrier(0xb);
              do {
                pppuVar43 = *ppppuVar28;
                bVar51 = (bool)hasExclusiveAccess(ppppuVar28);
              } while (!bVar51);
              *ppppuVar28 = (uint ***)((int)pppuVar43 + -1);
              if (pppuVar43 == (uint ***)0x1) {
                DataMemoryBarrier(0xb);
                FUN_018531c0(param_1[0x32],param_1[0x33]);
              }
            }
            bVar5 = local_a6;
            local_538 = local_b0;
            param_1[0x32] = (uint ****)0x0;
            if (*(char *)((int)param_1 + 0xf7) != '\x02') {
              *(undefined1 *)((int)param_1 + 0xf7) = 1;
            }
            local_53c = local_ac;
            if (local_a7 == '\0') {
              *(undefined1 *)((int)param_1 + 0xf7) = 2;
            }
            *(byte *)(param_1 + 0x3e) = uStack_b4._2_1_;
            if (local_b0 == (uint *****)0x0 && local_ac == (uint *****)0x0) {
              FUN_0172f038(pppppuVar26);
              *pppppuVar26 = (uint ****)0x3;
              param_1[0x11] = (uint ****)0x0;
              FUN_0187246c(param_1);
              FUN_0175f2ec(param_1,param_2);
            }
            else if ((local_a8 == '\x01') && (1 < uStack_b4._2_1_)) {
              if (local_b0 == (uint *****)0xfffffffe && local_ac == (uint *****)&DAT_ffffffff) {
                local_554 = (uint *****)0x0;
                ppppuVar28 = param_1[0x21];
                local_450 = param_1[0x20];
                FUN_01bed93e(&local_238,0,0x14);
                local_50c = (uint)ppppuVar28 >> 8;
                local_3ec = (uint)ppppuVar28 & 0xff;
              }
              else if (((uint)local_b0 & (uint)local_ac) == 0xffffffff) {
                local_3ec = 0;
                local_450 = (uint ****)0x4;
              }
              else {
                local_450 = (uint ****)0x2;
                local_554 = local_b0;
                local_548 = local_53c;
              }
              local_2f0 = local_238;
              local_2ec = local_234;
              local_2e8 = local_230;
              local_2e4 = local_22c;
              local_2e0 = (undefined1  [4])local_228;
              FUN_0172f038(pppppuVar26);
              *pppppuVar26 = (uint ****)0x1;
              param_1[0x11] = (uint ****)0x0;
              param_1[0x14] = (uint ****)local_554;
              param_1[0x15] = (uint ****)local_548;
              param_1[0x12] = local_450;
              param_1[0x13] = (uint ****)(local_3ec | local_50c << 8);
              *pppppuVar18 = (uint ****)local_2f0;
              param_1[0x17] = (uint ****)local_2ec;
              param_1[0x18] = (uint ****)local_2e8;
              param_1[0x19] = (uint ****)local_2e4;
              param_1[0x1a] = (uint ****)local_2e0;
              *(undefined1 *)(param_1 + 0x1f) = 0;
              param_1[0x1e] = (uint ****)0x0;
            }
            else {
              if (local_b0 == (uint *****)0xfffffffe && local_ac == (uint *****)&DAT_ffffffff) {
                local_550 = (uint *****)0x0;
                ppppuVar28 = param_1[0x21];
                local_3e8 = (uint *****)param_1[0x20];
                FUN_01bed93e(&local_238,0,0x14);
                local_510 = (uint)ppppuVar28 >> 8;
                pppppuVar48 = (uint *****)((uint)ppppuVar28 & 0xff);
              }
              else if (((uint)local_b0 & (uint)local_ac) == 0xffffffff) {
                pppppuVar48 = (uint *****)0x0;
                local_3e8 = (uint *****)0x4;
              }
              else {
                local_3e8 = (uint *****)0x2;
                local_550 = local_b0;
                local_54c = local_53c;
              }
              local_2f0 = local_238;
              local_2ec = local_234;
              local_2e8 = local_230;
              local_2e4 = local_22c;
              local_2e0 = (undefined1  [4])local_228;
              FUN_0172f038(pppppuVar26);
              *pppppuVar26 = (uint ****)0x2;
              param_1[0x11] = (uint ****)0x0;
              param_1[0x14] = (uint ****)local_550;
              param_1[0x15] = (uint ****)local_54c;
              param_1[0x12] = (uint ****)local_3e8;
              param_1[0x13] = (uint ****)((uint)pppppuVar48 | local_510 << 8);
              *pppppuVar18 = (uint ****)local_2f0;
              param_1[0x17] = (uint ****)local_2ec;
              param_1[0x18] = (uint ****)local_2e8;
              param_1[0x19] = (uint ****)local_2e4;
              param_1[0x1a] = (uint ****)local_2e0;
              *(undefined1 *)(param_1 + 0x1f) = 0;
              param_1[0x1e] = (uint ****)0x0;
            }
            local_238 = (uint *****)0x0;
            local_234 = (uint *****)0x43;
            local_230 = (uint *****)0x0;
            local_22c = (uint *****)0x0;
            iVar32 = FUN_0160ab20(&local_f8,&local_238);
            bVar51 = false;
            if ((iVar32 != 0) && (*(int *)(iVar32 + 8) == 8)) {
              iVar32 = thunk_FUN_01bed842(*(undefined4 *)(iVar32 + 4),&DAT_0056fb90,8);
              bVar51 = iVar32 == 0;
            }
            *(bool *)((int)param_1 + 0xf6) = bVar51;
            local_3a0 = local_ec;
            local_39c = local_e8;
            pppppuStack_398 = local_e4;
            pppppuStack_394 = local_e0;
            pppppuStack_390 = pppppuStack_dc;
            local_38c = local_d8;
            pppppuStack_388 = pppppuStack_d4;
            pppppuStack_384 = local_d0;
            pppppuStack_380 = pppppuStack_cc;
            pppppuStack_37c = pppppuStack_c8;
            local_378 = local_c4;
            pppppuStack_374 = pppppuStack_c0;
            ppppuStack_370 = ppppuStack_bc;
            pppppuStack_36c = local_b8;
            pppppuStack_368 = uStack_b4;
            local_4a4 = local_484;
            local_3e8 = pppppuVar48;
            goto LAB_0176221c;
          }
          pppppuVar30 = (uint *****)0x0;
          if (((*(char *)(param_1 + 0x3c) == '\0') ||
              (ppppuVar28 = param_1[0x2e], ppppuVar28 == (uint ****)0x0)) ||
             (iVar32 = (*(code *)param_1[0x2f][3])(ppppuVar28,param_2), iVar32 != 0)) {
            pppppuVar40 = (uint *****)&DAT_00000005;
            goto LAB_0176221c;
          }
          *(undefined1 *)(param_1 + 0x3c) = 0;
          local_4a4 = (uint *****)FUN_01427b74(7);
          goto LAB_01761f64;
        }
        if (((uint)local_310 & 0xff) != 4) {
          local_234 = local_30c;
          local_238 = local_310;
          local_484 = (uint *****)FUN_01427eb0(&local_238);
          pppppuVar40 = (uint *****)&DAT_00000003;
          goto LAB_01761bf4;
        }
      } while (local_30c != (uint *****)0x0);
      uVar39 = 2;
      pppppuVar45 = local_310;
LAB_01761da0:
      local_484 = (uint *****)FUN_01427b74(uVar39,pppppuVar45);
LAB_01761db8:
      cVar2 = *(char *)((int)param_1 + 0xf7);
      FUN_0172f038(pppppuVar26);
      pppppuVar44 = (uint *****)param_1[0x53];
      *pppppuVar26 = (uint ****)0x4;
      param_1[0x11] = (uint ****)0x0;
      *(undefined1 *)((int)param_1 + 0xf7) = 2;
      if (pppppuVar44 != (uint *****)0x0) {
        pppppuVar30 = (uint *****)0x0;
        do {
          if (*(char *)((int)*pppppuVar19 + (int)pppppuVar30) != '\r' &&
              *(char *)((int)*pppppuVar19 + (int)pppppuVar30) != '\n') {
            local_310 = pppppuVar30;
            if (pppppuVar44 < pppppuVar30) {
              local_22c = (uint *****)&LAB_01a6a304;
              local_234 = (uint *****)&LAB_01a6a304;
              local_238 = (uint *****)&local_310;
              local_2f0 = pppppuVar44;
              local_230 = (uint *****)&local_2f0;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005ac267,&local_238,&DAT_01d2bbe0);
            }
            goto LAB_01761e2c;
          }
          pppppuVar30 = (uint *****)((int)pppppuVar30 + 1);
        } while (pppppuVar44 != pppppuVar30);
        pppppuVar30 = pppppuVar44;
LAB_01761e2c:
        FUN_01283ef4(pppppuVar19,pppppuVar30);
      }
      ppppuVar28 = (uint ****)(uint)*(byte *)(local_484 + 2);
      if (ppppuVar28 == (uint ****)0x0) {
LAB_01761e5c:
        if (param_1[0x24] != (uint ****)0x3) {
          local_4a4 = local_484;
          pppppuVar40 = (uint *****)&DAT_00000003;
          goto LAB_01761efc;
        }
        if ((param_1[0x53] < (uint ****)0x18) ||
           (iVar32 = thunk_FUN_01bed842(*pppppuVar19,"P",0x18), iVar32 != 0)) {
          local_4a4 = local_484;
        }
        else {
          local_4a4 = (uint *****)FUN_01427b74(0,6);
          FUN_01a69838(local_484);
        }
LAB_01761f64:
        pppppuVar30 = (uint *****)0x0;
        pppppuVar40 = (uint *****)&DAT_00000003;
      }
      else {
        bVar51 = cVar2 == '\0';
        if (bVar51) {
          ppppuVar28 = param_1[0x53];
        }
        if (!bVar51 || ppppuVar28 != (uint ****)0x0) goto LAB_01761e5c;
        if (*pppppuVar25 < (uint ****)0x3) {
          FUN_014216c0(pppppuVar25);
        }
        *(undefined1 *)((int)param_1 + 0xf7) = 2;
        param_1[0x24] = (uint ****)0x6;
        FUN_01a69838(local_484);
        pppppuVar40 = (uint *****)&SUB_00000004;
LAB_01761efc:
        pppppuVar30 = (uint *****)0x0;
      }
LAB_0176221c:
      if (pppppuVar40 == (uint *****)&DAT_00000005 && pppppuVar30 == (uint *****)0x0)
      goto LAB_01762684;
      pppppuVar48 = local_3e8;
      if (((uint)pppppuVar40 & 7) == 3) {
        local_234 = (uint *****)0x0;
        local_238 = (uint *****)&DAT_00000003;
        local_230 = local_4a4;
        pppppuVar44 = (uint *****)FUN_0175b8e0(pppppuVar23,&local_238);
        if (pppppuVar44 != (uint *****)0x0) break;
LAB_01762280:
        *(undefined1 *)(param_1 + 100) = 1;
        FUN_0172f038(pppppuVar26);
        *pppppuVar26 = (uint ****)0x4;
        param_1[0x11] = (uint ****)0x0;
        *(undefined1 *)((int)param_1 + 0xf7) = 2;
        if (param_1[0x24] < (uint ****)0x3) {
          FUN_014216c0(pppppuVar25);
        }
        *(undefined1 *)((int)param_1 + 0xf7) = 2;
        param_1[0x24] = (uint ****)0x6;
        pppppuVar30 = local_3e8;
        goto LAB_017612dc;
      }
      if (pppppuVar40 == (uint *****)&SUB_00000004) {
        if (*pppppuVar25 == (uint ****)0x6) goto LAB_01762280;
        goto LAB_017612dc;
      }
      local_230 = local_4a4;
      local_22c = local_3a0;
      local_228 = local_39c;
      local_224 = pppppuStack_398;
      local_220 = pppppuStack_394;
      local_21c = pppppuStack_390;
      local_218 = local_38c;
      local_214 = pppppuStack_388;
      local_210 = pppppuStack_384;
      local_20c = pppppuStack_380;
      local_208 = pppppuStack_37c;
      local_204 = local_378;
      local_200 = pppppuStack_374;
      ppppuStack_1fc = ppppuStack_370;
      local_1f8 = pppppuStack_36c;
      pppppuStack_1f4 = pppppuStack_368;
      local_238 = pppppuVar40;
      local_234 = pppppuVar30;
      if (local_538 == (uint *****)0x0 && local_53c == (uint *****)0x0) {
        local_f8 = (uint *****)((uint)local_f8 & 0xffffff00);
      }
      else {
        FUN_01423948(&local_f8);
        local_360 = local_f8;
        local_35c = local_f4;
        pppppuStack_358 = local_f0;
        pppppuStack_354 = local_ec;
        local_350 = local_e8;
        local_2f0 = local_e0;
        local_2ec = pppppuStack_dc;
        local_2e8 = local_d8;
        local_2e4 = pppppuStack_d4;
        local_2e0 = (undefined1  [4])local_d0;
        pppppuStack_2dc = pppppuStack_cc;
        pppppuStack_2d8 = pppppuStack_c8;
        local_2d4 = local_c4;
        if (*(char *)(param_1 + 0x62) != '\x03') {
          FUN_01820460(pppppuVar24);
        }
        *pppppuVar24 = (uint ****)local_360;
        param_1[0x5f] = (uint ****)local_35c;
        param_1[0x60] = (uint ****)pppppuStack_358;
        param_1[0x61] = (uint ****)pppppuStack_354;
        param_1[0x62] = (uint ****)local_350;
        local_f8 = local_2f0;
        local_f4 = local_2ec;
        local_f0 = local_2e8;
        local_ec = local_2e4;
        local_e8 = (uint *****)local_2e0;
        local_e4 = pppppuStack_2dc;
        local_e0 = pppppuStack_2d8;
        pppppuStack_dc = local_2d4;
      }
      if ((bVar5 & 1) != 0) {
        uVar39 = FUN_01421728(param_1);
        uVar54 = FUN_017071d4(&local_1f8,uVar39);
        piVar41 = (int *)((ulonglong)uVar54 >> 0x20);
        if ((int)uVar54 != 0 && piVar41 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar32 = *piVar41;
            bVar51 = (bool)hasExclusiveAccess(piVar41);
          } while (!bVar51);
          *piVar41 = iVar32 + -1;
          if (iVar32 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01421350(piVar41);
          }
        }
      }
      FUN_01bed4e2(&local_190,&local_238,0x48);
      pppppuVar30 = local_e0;
      local_148 = local_f8;
      pppppuStack_144 = local_f4;
      pppppuStack_140 = local_f0;
      pppppuStack_13c = local_ec;
      local_138 = local_e8;
      pppppuStack_134 = local_e4;
      pppppuStack_130 = local_e0;
      pppppuStack_12c = pppppuStack_dc;
      pppppuVar44 = (uint *****)FUN_0175b8e0(pppppuVar23,&local_190);
    } while (pppppuVar44 == (uint *****)0x0);
    bVar51 = false;
LAB_01762668:
    if (bVar51) {
LAB_01762680:
    }
    else if (pppppuVar44 != (uint *****)0x0) break;
LAB_01762684:
    cVar2 = *(char *)(param_1 + 100);
    while (cVar2 == '\0') {
      ppppuVar28 = param_1[99];
      pppuVar43 = *ppppuVar28;
      if (((pppuVar43 == (uint ***)0x0) &&
          (*pppppuVar26 != (uint ****)0x4 || param_1[0x11] != (uint ****)0x0)) &&
         (*pppppuVar25 == (uint ****)0x3)) {
        FUN_0170f924(&local_238,pppppuVar16);
        iVar32 = FUN_01857c8c(&local_238);
        if ((iVar32 != 0) || (*pppppuVar23 != (uint ****)0x2)) goto LAB_01762700;
        iVar32 = *param_2;
        FUN_01744158(&local_238,param_1[0x5b],param_1[0x5c],iVar32);
        if (((uint)local_238 & 7) == 3) {
          *(undefined1 *)(param_1 + 0x5d) = 1;
LAB_01763c74:
          *(undefined1 *)(param_1 + 100) = 1;
          FUN_0172f038(pppppuVar26);
          *pppppuVar26 = (uint ****)0x4;
          param_1[0x11] = (uint ****)0x0;
          *(undefined1 *)((int)param_1 + 0xf7) = 2;
          if (param_1[0x24] < (uint ****)0x3) {
            FUN_014216c0(pppppuVar25);
          }
          *(undefined1 *)((int)param_1 + 0xf7) = 2;
          param_1[0x24] = (uint ****)0x6;
          break;
        }
        if (local_238 == (uint *****)&SUB_00000004) break;
        FUN_01bed4e2(&local_190,&local_238,0x98);
        local_3a0 = local_1a0;
        local_39c = pppppuStack_19c;
        pppppuStack_398 = pppppuStack_198;
        iVar32 = FUN_009d52c4(&local_1a0,iVar32);
        if (iVar32 == 0) {
          FUN_01707a90(&local_3a0);
          FUN_0175b7d8(&local_190);
          goto LAB_01763c74;
        }
        local_3e0 = local_1b0;
        local_3dc = pppppuStack_1ac;
        local_3d8 = pppppuStack_1a8;
        local_3d4 = pppppuStack_1a4;
        local_360 = local_1f8;
        local_35c = pppppuStack_1f4;
        pppppuStack_358 = pppppuStack_1f0;
        pppppuStack_354 = pppppuStack_1ec;
        local_350 = pppppuStack_1e8;
        local_34c = local_1e4;
        local_348 = pppppuStack_1e0;
        local_344 = pppppuStack_1dc;
        local_340 = pppppuStack_1d8;
        local_f8 = local_238;
        local_f4 = local_234;
        local_f0 = local_230;
        local_ec = local_22c;
        local_e8 = local_228;
        local_e4 = local_224;
        local_e0 = local_220;
        pppppuStack_dc = local_21c;
        local_d8 = local_218;
        pppppuStack_d4 = local_214;
        local_d0 = local_210;
        pppppuStack_cc = local_20c;
        pppppuStack_c8 = local_208;
        local_c4 = local_204;
        pppppuStack_c0 = local_200;
        ppppuStack_bc = ppppuStack_1fc;
        local_74 = local_10c;
        local_b8 = local_1f8;
        uStack_b4 = pppppuStack_1f4;
        local_b0 = pppppuStack_1f0;
        local_ac = pppppuStack_1ec;
        local_a8 = (char)pppppuStack_1e8;
        local_a7 = (char)((uint)pppppuStack_1e8 >> 8);
        local_a6 = (byte)((uint)pppppuStack_1e8 >> 0x10);
        local_a4 = local_1e4;
        pppppuStack_a0 = pppppuStack_1e0;
        pppppuStack_9c = pppppuStack_1dc;
        pppppuStack_98 = pppppuStack_1d8;
        uStack_94 = uStack_1d4;
        local_90 = uStack_1d0;
        uStack_8c = local_1cc;
        uStack_88 = uStack_1c8;
        uStack_84 = uStack_1c4;
        uStack_80 = uStack_1c0;
        uStack_7c = uStack_1bc;
        local_78 = local_110;
        if (*pppppuVar23 != (uint ****)0x2) {
          FUN_01707a90(pppppuVar23);
        }
        pppppuVar48 = local_f0;
        pppppuVar30 = local_f4;
        pppppuVar44 = local_f8;
        *pppppuVar23 = (uint ****)local_1a0;
        param_1[0x59] = (uint ****)pppppuStack_19c;
        param_1[0x5a] = (uint ****)pppppuStack_198;
        FUN_01bed4e2(&local_2f0,&local_ec,0x7c);
        pppppuStack_48 = local_1b0;
        pppppuStack_44 = pppppuStack_1ac;
        local_40 = pppppuStack_1a8;
        pppppuStack_3c = pppppuStack_1a4;
        if (pppppuVar44 == (uint *****)&DAT_00000003 && pppppuVar30 == (uint *****)0x0)
        goto LAB_01763c74;
        if (pppppuVar44 == (uint *****)&SUB_00000004 && pppppuVar30 == (uint *****)0x0) break;
        FUN_01bed4e2(&local_184,&local_2f0,0x7c);
        local_310 = pppppuStack_48;
        local_30c = pppppuStack_44;
        local_308 = local_40;
        local_304 = pppppuStack_3c;
        local_190 = pppppuVar44;
        local_18c = pppppuVar30;
        local_188 = pppppuVar48;
        if (pppppuStack_48 == (uint *****)0x0) {
          iVar32 = (*(code *)local_40[4])(pppppuStack_44);
          if (iVar32 != 0) goto LAB_01763450;
          if (local_310 != (uint *****)0x0) goto LAB_017634d8;
          (*(code *)local_308[5])(&local_238,local_30c);
          if (((uint)local_238 & 1) != 0) goto LAB_01763500;
          pppppuVar44 = (uint *****)&DAT_00000001;
LAB_0176352c:
          local_f8 = local_310;
          local_f4 = local_30c;
          local_f0 = local_308;
          local_ec = local_304;
          local_238 = local_310;
          local_234 = local_30c;
          local_230 = local_308;
          local_22c = local_304;
          ppppuVar28 = param_1[99];
          if (*ppppuVar28 != (uint ***)0x0) {
            FUN_0182e3a0(ppppuVar28 + 1);
          }
          *ppppuVar28 = (uint ***)0x1;
          bVar51 = false;
          ppppuVar28[1] = (uint ***)local_238;
          ppppuVar28[2] = (uint ***)local_234;
          ppppuVar28[3] = (uint ***)local_230;
          ppppuVar28[4] = (uint ***)local_22c;
        }
        else {
          if (local_40 != (uint *****)0x0) {
LAB_017634d8:
            local_230 = local_308;
            local_22c = (uint *****)0x0;
            local_228 = local_308;
            local_224 = (uint *****)0x0;
LAB_01763500:
            if (local_228 == local_230 && local_224 == local_22c) {
              local_540 = local_224;
              local_544 = local_228;
            }
            pppppuVar44 = (uint *****)(uint)(local_228 != local_230 || local_224 != local_22c);
            goto LAB_0176352c;
          }
LAB_01763450:
          ppppuVar28 = param_1[99];
          if (*ppppuVar28 != (uint ***)0x0) {
            FUN_0182e3a0(ppppuVar28 + 1);
          }
          bVar51 = true;
          *ppppuVar28 = (uint ***)0x0;
          pppppuVar44 = (uint *****)0x2;
        }
        FUN_01bed4e2(&local_238,&local_190,0x88);
        cVar2 = *(char *)((int)param_1 + 0xf7);
        if (cVar2 != '\x02') {
          *(undefined1 *)((int)param_1 + 0xf7) = 1;
        }
        if (*(char *)(param_1 + 0x3e) == '\x02') {
          if (cVar2 == '\x02') {
            local_3e0 = (uint *****)0x0;
            local_3dc = (uint *****)&DAT_00000014;
            local_3d8 = (uint *****)0x0;
            local_3d4 = (uint *****)0x0;
            iVar32 = 0;
            do {
              if (((byte)(&DAT_005319a4)[-iVar32] != 9) &&
                 (0x5e < (byte)(&DAT_005319a4)[-iVar32] - 0x20)) goto LAB_01763de8;
              bVar52 = iVar32 != -4;
              iVar32 = iVar32 + -1;
            } while (bVar52);
            local_e8 = (uint *****)((uint)local_e8 & 0xffffff00);
            local_ec = (uint *****)0x0;
            local_f0 = (uint *****)0x5;
            local_f4 = (uint *****)&DAT_005319a4;
            local_f8 = (uint *****)&PTR_FUN_01d1a0bc;
            FUN_0141d310(&local_360,&local_238,&local_3e0,&local_f8);
            if ((char)local_350 != '\x02') {
              (*(code *)local_360[4])(&pppppuStack_354,local_35c,pppppuStack_358);
            }
          }
        }
        else if (*(char *)(param_1 + 0x3e) == '\x01') {
          local_f8 = (uint *****)0x0;
          local_f4 = (uint *****)&DAT_00000014;
          local_f0 = (uint *****)0x0;
          local_ec = (uint *****)0x0;
          iVar32 = FUN_0160ab20(&local_190,&local_f8);
          if ((iVar32 == 0) ||
             (iVar32 = FUN_01429a28(*(undefined4 *)(iVar32 + 4),*(undefined4 *)(iVar32 + 8),"k",10),
             iVar32 == 0)) {
            if (local_1b4 == '\x02') {
              if (*(char *)((int)param_1 + 0xf7) != '\x02') {
                local_3e0 = (uint *****)0x0;
                local_3dc = (uint *****)&DAT_00000014;
                local_3d8 = (uint *****)0x0;
                local_3d4 = (uint *****)0x0;
                iVar32 = 0;
                do {
                  if (((byte)"k"[-iVar32] != 9) && (0x5e < (byte)"k"[-iVar32] - 0x20)) {
LAB_01763de8:
                    local_3d4 = (uint *****)0x0;
                    local_3d8 = (uint *****)0x0;
                    local_3dc = (uint *****)0x14;
                    local_3e0 = (uint *****)0x0;
                    /* WARNING: Subroutine does not return */
                    FUN_012fb12c(0,0,&DAT_01d2e4bc);
                  }
                  bVar52 = iVar32 != -9;
                  iVar32 = iVar32 + -1;
                } while (bVar52);
                local_e8 = (uint *****)((uint)local_e8 & 0xffffff00);
                local_ec = (uint *****)0x0;
                local_f0 = (uint *****)0xa;
                local_f4 = (uint *****)0x51cc51;
                local_f8 = (uint *****)&PTR_FUN_01d1a0bc;
                FUN_0141d310(&local_360,&local_238,&local_3e0,&local_f8);
                if ((char)local_350 != '\x02') {
                  (*(code *)local_360[4])(&pppppuStack_354,local_35c,pppppuStack_358);
                }
              }
            }
            else if (local_1b4 == '\x01') {
              *(undefined1 *)((int)param_1 + 0xf7) = 2;
            }
          }
          local_1b4 = '\x01';
        }
        local_f0 = local_544;
        local_f4 = (uint *****)0x0;
        local_e0 = (uint *****)
                   CONCAT31(CONCAT21(CONCAT11(local_e0._3_1_,*(undefined1 *)((int)param_1 + 0xf1)),
                                     *(undefined1 *)((int)param_1 + 0xf3)),
                            *(char *)((int)param_1 + 0xf7) != '\x02');
        local_f8 = pppppuVar44;
        local_ec = local_540;
        local_e8 = (uint *****)&local_238;
        local_e4 = pppppuVar21;
        FUN_01419564(&local_3e0,&local_f8,pppppuVar15);
        pppppuVar44 = local_3dc;
        if (local_3e0 == (uint *****)&DAT_00000003) {
          if (param_1[0x39] != (uint ****)0x0) {
            FUN_01a69838();
          }
          param_1[0x39] = (uint ****)pppppuVar44;
          if (param_1[0x24] < (uint ****)0x3) {
            FUN_0116c8d0(pppppuVar25);
          }
          *pppppuVar25 = (uint ****)0x6;
          FUN_0175b8ac(&local_1f8);
          pppppuVar44 = (uint *****)&DAT_00000003;
          FUN_0142e6dc(&local_238);
        }
        else {
          local_360 = local_3e0;
          local_35c = local_3dc;
          pppppuStack_358 = local_3d8;
          pppppuStack_354 = local_3d4;
          local_350 = local_3d0;
          local_34c = pppppuStack_3cc;
          local_f8 = local_238;
          local_f4 = local_234;
          local_f0 = local_230;
          local_ec = local_22c;
          local_e8 = local_228;
          local_e4 = local_224;
          local_e0 = local_220;
          pppppuStack_dc = local_21c;
          local_d8 = local_218;
          pppppuStack_d4 = local_214;
          local_d0 = local_210;
          pppppuStack_cc = local_20c;
          pppppuStack_c8 = local_208;
          local_c4 = local_204;
          pppppuStack_c0 = local_200;
          ppppuStack_bc = ppppuStack_1fc;
          if (*param_1 != (uint ****)0x3 || param_1[1] != (uint ****)0x0) {
            FUN_0142e6dc(param_1);
          }
          ppppuVar28 = ppppuStack_bc;
          ppppuVar50 = (uint ****)0x0;
          *param_1 = (uint ****)local_f8;
          param_1[1] = (uint ****)local_f4;
          param_1[2] = (uint ****)local_f0;
          param_1[3] = (uint ****)local_ec;
          param_1[4] = (uint ****)local_e8;
          param_1[5] = (uint ****)local_e4;
          param_1[6] = (uint ****)local_e0;
          param_1[7] = (uint ****)pppppuStack_dc;
          param_1[8] = (uint ****)local_d8;
          param_1[9] = (uint ****)pppppuStack_d4;
          param_1[10] = (uint ****)local_d0;
          param_1[0xb] = (uint ****)pppppuStack_cc;
          param_1[0xc] = (uint ****)pppppuStack_c8;
          param_1[0xd] = (uint ****)local_c4;
          param_1[0xe] = (uint ****)pppppuStack_c0;
          param_1[0xf] = ppppuStack_bc;
          if (local_1b8 != 0) {
            uVar54 = FUN_0178e3fc(local_1b8,&DAT_00568f18);
            if ((int)uVar54 != 0) {
              uVar54 = (**(code **)((int)((ulonglong)uVar54 >> 0x20) + 0x1c))();
              iVar32 = (int)((ulonglong)uVar54 >> 0x20);
              puVar38 = (uint *)uVar54;
              (**(code **)(iVar32 + 0xc))(&local_f8,puVar38);
              ppppuVar28 = (uint ****)0x771eb0d0;
              if ((local_f8 == (uint *****)0xa187f816 && local_f0 == (uint *****)0xd008cba1) &&
                  (local_f4 == (uint *****)0x771eb0d0 && local_ec == (uint *****)0xcf6d2a75)) {
                ppppuVar50 = (uint ****)*puVar38;
                ppppuVar28 = (uint ****)puVar38[1];
                thunk_FUN_01be4678(puVar38);
              }
              else {
                FUN_01443048(puVar38,iVar32);
              }
            }
          }
          ppppuVar49 = *pppppuVar20;
          if (ppppuVar49 != (uint ****)0x0) {
            DataMemoryBarrier(0xb);
            do {
              pppuVar43 = *ppppuVar49;
              bVar52 = (bool)hasExclusiveAccess(ppppuVar49);
            } while (!bVar52);
            *ppppuVar49 = (uint ***)((int)pppuVar43 + -1);
            if (pppuVar43 == (uint ***)0x1) {
              DataMemoryBarrier(0xb);
              FUN_018531c0(param_1[0x32],param_1[0x33]);
            }
          }
          pppppuVar44 = local_360;
          param_1[0x32] = ppppuVar50;
          param_1[0x33] = ppppuVar28;
          local_3a0 = (uint *****)*puVar11;
          local_39c = (uint *****)puVar11[1];
          pppppuStack_398 = (uint *****)puVar11[2];
          pppppuStack_394 = (uint *****)puVar11[3];
          pppppuStack_390 = (uint *****)puVar11[4];
          FUN_0175b8ac(&local_1f8);
        }
        FUN_0178e884(local_1b8);
        if (pppppuVar44 != (uint *****)&DAT_00000003) {
          *pppppuVar10 = (uint ****)local_3a0;
          pppppuVar10[1] = (uint ****)local_39c;
          pppppuVar10[2] = (uint ****)pppppuStack_398;
          pppppuVar10[3] = (uint ****)pppppuStack_394;
          pppppuVar10[4] = (uint ****)pppppuStack_390;
          pppppuVar30 = pppppuVar10;
          pppppuVar48 = (uint *****)&local_3a0;
          if (pppppuVar44 == (uint *****)&DAT_00000001) {
            pppppuVar30 = local_f0;
            pppppuVar48 = local_ec;
          }
          local_f8 = pppppuVar44;
          if (pppppuVar44 == (uint *****)&DAT_00000001 &&
              (pppppuVar30 == (uint *****)0x0 && pppppuVar48 == (uint *****)0x0)) {
            ppppuVar28 = (uint ****)0x5;
            if ((char)local_e8 != '\0') {
              ppppuVar28 = (uint ****)0x6;
            }
            if (*pppppuVar25 < (uint ****)0x3) {
              FUN_0116c8d0(pppppuVar25);
            }
            *pppppuVar25 = ppppuVar28;
            FUN_0116c8d0(&local_f8);
          }
          else {
            if (*pppppuVar25 < (uint ****)0x3) {
              FUN_0116c8d0(pppppuVar25);
            }
            *pppppuVar25 = (uint ****)pppppuVar44;
            param_1[0x25] = (uint ****)local_3a0;
            param_1[0x26] = (uint ****)local_39c;
            param_1[0x27] = (uint ****)pppppuStack_398;
            param_1[0x28] = (uint ****)pppppuStack_394;
            param_1[0x29] = (uint ****)pppppuStack_390;
          }
        }
        if (bVar51) {
          FUN_0182e3a0(&local_310);
        }
      }
      else {
LAB_01762700:
        if (*(char *)(param_1 + 0x56) == '\0') {
          if ((*(char *)(param_1 + 0x4b) != '\x01') || (param_1[0x49] < (uint ****)0x10)) {
            ppppuVar49 = param_1[0x44];
            ppppuVar50 = param_1[0x45];
            FUN_0170f924(&local_238,pppppuVar16);
            iVar32 = FUN_01857c8c(&local_238);
            if ((uint ****)((int)ppppuVar49 + (iVar32 - (int)ppppuVar50)) < param_1[0x4a])
            goto LAB_01762774;
          }
          uVar53 = FUN_01764558(param_1,param_2);
          pppppuVar44 = (uint *****)(uVar53 >> 0x20);
          if ((uVar53 & 1) != 0) break;
          if (pppppuVar44 != (uint *****)0x0) goto LAB_01763d34;
        }
        else {
LAB_01762774:
          if (pppuVar43 == (uint ***)0x0) {
            if ((uint ****)0x2 < *pppppuVar25) break;
            pppppuVar44 = (uint *****)FUN_01760ef0(param_1);
            if (pppppuVar44 != (uint *****)0x0) goto LAB_01763d34;
          }
          else {
            ppppuVar50 = ppppuVar28 + 1;
            if (*pppppuVar25 < (uint ****)0x3) {
              FUN_0174ac1c(&local_238,ppppuVar50,param_2);
              if (local_238 == (uint *****)&DAT_00000006 && local_234 == (uint *****)0x0) break;
              local_270 = local_22c;
              pppppuStack_26c = local_228;
              pppppuStack_268 = local_224;
              pppppuStack_264 = local_220;
              local_260 = local_21c;
              pppppuStack_25c = local_218;
              pppppuStack_258 = local_214;
              pppppuStack_254 = local_210;
              local_250 = local_20c;
              pppppuStack_24c = local_208;
              pppppuStack_248 = local_204;
              pppppuStack_244 = local_200;
              ppppuStack_240 = ppppuStack_1fc;
              if (local_238 == (uint *****)&DAT_00000005 && local_234 == (uint *****)0x0) {
                pppppuVar44 = (uint *****)FUN_01760ef0(param_1);
                if (pppppuVar44 != (uint *****)0x0) {
LAB_01763cd8:
                  if (*ppppuVar28 != (uint ***)0x0) {
                    FUN_0182e3a0(ppppuVar50);
                  }
                  uVar39 = 0;
                  *ppppuVar28 = (uint ***)0x0;
                  goto LAB_01763d38;
                }
              }
              else {
                if (((uint)local_238 & 7) == 3) {
                  local_3e0 = local_230;
                  *puVar12 = local_22c;
                  puVar12[1] = local_228;
                  puVar12[2] = local_224;
                  if (*ppppuVar50 == (uint ***)0x0) {
                    iVar32 = (*(code *)ppppuVar28[3][4])(ppppuVar28[2]);
                    if (iVar32 != 0) goto LAB_0176289c;
                  }
                  else if (ppppuVar28[3] == (uint ***)0x0) {
LAB_0176289c:
                    if (local_3d8 == (uint *****)0x0) {
                      pppppuVar44 = (uint *****)FUN_01760ef0(param_1);
                      if (pppppuVar44 != (uint *****)0x0) {
                        (*(code *)local_3e0[4])(&local_3d4,local_3dc,local_3d8);
                        goto LAB_01763cd8;
                      }
                      (*(code *)local_3e0[4])(&local_3d4,local_3dc,local_3d8);
                      goto LAB_01763984;
                    }
                    local_360 = local_3e0;
                    local_35c = local_3dc;
                    pppppuStack_358 = local_3d8;
                    pppppuStack_354 = local_3d4;
                    ppppuVar49 = *pppppuVar25;
                    if ((uint ****)0x2 < ppppuVar49) {
                      local_234 = (uint *****)FUN_01421b00;
                      local_238 = pppppuVar25;
                    /* WARNING: Subroutine does not return */
                      FUN_012fb100(&DAT_0058914c,&local_238,&DAT_01d20a18);
                    }
                    local_2f0 = local_3e0;
                    local_2ec = local_3dc;
                    local_2e8 = local_3d8;
                    local_2e4 = local_3d4;
                    if (ppppuVar49 == (uint ****)0x0) {
                      FUN_01428c44(&local_f8,local_3d8);
                      local_238 = local_2f0;
                      local_234 = local_2ec;
                      local_230 = local_2e8;
                      local_22c = local_2e4;
                      local_228 = local_f8;
                      local_224 = local_f4;
                      local_220 = local_f0;
                      local_190 = local_2f0;
                      local_18c = local_2ec;
                      local_188 = local_2e8;
                      local_184 = local_2e4;
                      local_180 = local_f8;
                      pppppuStack_17c = local_f4;
                      local_178 = local_f0;
                      local_170 = (uint *****)&DAT_00000007;
                      local_174 = (uint *****)0x50c87d;
                      if (*(char *)(param_1 + 0x4b) == '\0') {
                        uVar33 = ((uint)local_f0 >> 0x18) - ((uint)local_f0 >> 0x10 & 0xff) & 0xff;
                        puVar37 = (undefined1 *)(uVar33 + (int)local_2e8);
                        if (CARRY4(uVar33,(uint)local_2e8)) {
                          puVar37 = (undefined1 *)0xffffffff;
                        }
                        puVar42 = puVar37 + 7;
                        if ((undefined1 *)0xfffffff8 < puVar37) {
                          puVar42 = (undefined1 *)0xffffffff;
                        }
                        FUN_01424824(pppppuVar15,puVar42);
                        while( true ) {
                          uVar54 = FUN_01876730(&local_190);
                          iVar32 = (int)((ulonglong)uVar54 >> 0x20);
                          if (iVar32 == 0) break;
                          FUN_01ac6cbc(pppppuVar15,(int)uVar54,iVar32);
                          FUN_0177763c(&local_190,iVar32);
                        }
                        (*(code *)local_190[4])(&local_184,local_18c,local_188);
                      }
                      else {
                        local_234 = local_2f0;
                        local_230 = local_2ec;
                        local_22c = local_2e8;
                        local_228 = local_2e4;
                        local_224 = local_f8;
                        local_220 = local_f4;
                        local_21c = local_f0;
                        local_218 = (uint *****)0x50c87d;
                        local_214 = (uint *****)&DAT_00000007;
                        local_238 = (uint *****)0x2;
                        FUN_01885284(pppppuVar16,&local_238);
                      }
LAB_0176394c:
                      ppppuVar49 = (uint ****)0x6;
                      if (*(char *)(param_1 + 0x28) == '\0') {
                        ppppuVar49 = (uint ****)0x5;
                      }
                    }
                    else {
                      if (ppppuVar49 == (uint ****)0x1) {
                        pppppuVar44 = (uint *****)*pppppuVar14;
                        ppppuVar49 = param_1[0x27];
                        uVar33 = (uint)(ppppuVar49 == (uint ****)0x0 &&
                                       (uint ****)(uint)(local_3d8 <= pppppuVar44) <= ppppuVar49) -
                                 (uint)((uint)(pppppuVar44 <= local_3d8) <= (uint)-(int)ppppuVar49);
                        if (uVar33 == 0) {
                          local_238 = local_3e0;
                          local_234 = local_3dc;
                          local_230 = local_3d8;
                          local_22c = local_3d4;
                          FUN_01876850(pppppuVar15,&local_238);
                        }
                        else {
                          if ((uVar33 & 0xff) != 1) {
                            local_238 = local_3e0;
                            local_234 = local_3dc;
                            local_230 = local_3d8;
                            local_22c = local_3d4;
                            FUN_01876850(pppppuVar15,&local_238);
                            goto LAB_017634c4;
                          }
                          local_f8 = local_3e0;
                          local_f4 = local_3dc;
                          local_f0 = local_3d8;
                          local_ec = local_3d4;
                          local_e8 = pppppuVar44;
                          if (*(char *)(param_1 + 0x4b) == '\0') {
                            if (local_3d8 <= pppppuVar44) {
                              pppppuVar44 = local_3d8;
                            }
                            FUN_01424824(pppppuVar15,pppppuVar44);
                            while( true ) {
                              pppppuVar44 = local_e8;
                              if (local_f0 <= local_e8) {
                                pppppuVar44 = local_f0;
                              }
                              if (pppppuVar44 == (uint *****)0x0) break;
                              FUN_01ac6cbc(pppppuVar15,local_f4,pppppuVar44);
                              FUN_0176e7f8(&local_f8,pppppuVar44);
                            }
                            (*(code *)local_f8[4])(&local_ec,local_f4);
                          }
                          else {
                            local_234 = local_3e0;
                            local_230 = local_3dc;
                            local_22c = local_3d8;
                            local_228 = local_3d4;
                            local_238 = (uint *****)&DAT_00000001;
                            local_224 = pppppuVar44;
                            FUN_01885284(pppppuVar16,&local_238);
                          }
                        }
                        goto LAB_0176394c;
                      }
                      local_238 = local_3e0;
                      local_234 = local_3dc;
                      local_230 = local_3d8;
                      local_22c = local_3d4;
                      FUN_01876850(pppppuVar15,&local_238);
LAB_017634c4:
                      ppppuVar49 = (uint ****)0x6;
                    }
                    if (*pppppuVar25 < (uint ****)0x3) {
                      FUN_0116c8d0(pppppuVar25);
                    }
                    *pppppuVar25 = ppppuVar49;
                    goto LAB_01763984;
                  }
                  if (local_3d8 == (uint *****)0x0) {
                    (*(code *)local_3e0[4])(&local_3d4,local_3dc,0);
                    goto LAB_01762870;
                  }
                  local_2f0 = local_3e0;
                  local_2ec = local_3dc;
                  local_2e8 = local_3d8;
                  local_2e4 = local_3d4;
                  ppppuVar28 = *pppppuVar25;
                  if ((uint ****)0x2 < ppppuVar28) {
                    local_234 = (uint *****)FUN_01421b00;
                    local_238 = pppppuVar25;
                    /* WARNING: Subroutine does not return */
                    FUN_012fb100(&DAT_0058914c,&local_238,&DAT_01d209e8);
                  }
                  local_f8 = local_3e0;
                  local_f4 = local_3dc;
                  local_f0 = local_3d8;
                  local_ec = local_3d4;
                  if (ppppuVar28 == (uint ****)0x0) {
                    FUN_01428c44(&local_360,local_3d8);
                    local_3a0 = local_35c;
                    local_39c = pppppuStack_358;
                    local_238 = (uint *****)0x2;
                    local_534 = local_360;
                  }
                  else {
                    if (ppppuVar28 == (uint ****)0x1) {
                      pppppuVar44 = (uint *****)*pppppuVar14;
                      ppppuVar28 = param_1[0x27];
                      if (ppppuVar28 == (uint ****)0x0 &&
                          (uint ****)(uint)(local_3d8 <= pppppuVar44) <= ppppuVar28) {
                        *pppppuVar14 = (uint ****)0x0;
                        param_1[0x27] = (uint ****)0x0;
                        local_238 = (uint *****)&DAT_00000001;
                        local_534 = pppppuVar44;
                        goto LAB_01763308;
                      }
                      *pppppuVar14 = (uint ****)((int)pppppuVar44 - (int)local_3d8);
                      param_1[0x27] = (uint ****)((int)ppppuVar28 - (uint)(pppppuVar44 < local_3d8))
                      ;
                    }
                    local_238 = (uint *****)0x0;
                  }
LAB_01763308:
                  local_234 = local_f8;
                  local_230 = local_f4;
                  local_22c = local_f0;
                  local_228 = local_ec;
                  local_220 = local_3a0;
                  local_21c = local_39c;
                  local_214 = (uint *****)0x2;
                  local_218 = (uint *****)&DAT_00531047;
                  local_224 = local_534;
                  local_190 = local_f8;
                  local_18c = local_f4;
                  local_188 = local_f0;
                  local_184 = local_ec;
                  FUN_01725c78(pppppuVar22,&local_238);
                  pppppuVar44 = pppppuVar14;
                  ppppuVar28 = extraout_r1;
                  if (*pppppuVar25 == (uint ****)0x1) {
                    pppppuVar44 = (uint *****)*pppppuVar14;
                    ppppuVar28 = param_1[0x27];
                  }
                  if (*pppppuVar25 == (uint ****)0x1 &&
                      (pppppuVar44 == (uint *****)0x0 && ppppuVar28 == (uint ****)0x0)) {
                    ppppuVar28 = (uint ****)0x5;
                    if (*(char *)(param_1 + 0x28) != '\0') {
                      ppppuVar28 = (uint ****)0x6;
                    }
                    FUN_0116c8d0(pppppuVar25);
                    *pppppuVar25 = ppppuVar28;
                  }
                  goto LAB_01762870;
                }
                if (local_238 == (uint *****)&SUB_00000004) {
                  pppppuVar44 = (uint *****)FUN_01710964();
                  goto LAB_01763cd8;
                }
                if (local_238 == (uint *****)&DAT_00000003 && local_234 == (uint *****)0x0) {
                  local_234 = (uint *****)0x0;
                  local_238 = (uint *****)0x3;
                  FUN_018233f4();
                    /* WARNING: Does not return */
                  pcVar1 = (code *)software_udf(0xfdee,0x1763ec8);
                  (*pcVar1)();
                }
                local_188 = local_230;
                local_190 = local_238;
                local_18c = local_234;
                local_184 = local_22c;
                local_180 = local_228;
                pppppuStack_17c = local_224;
                local_178 = local_220;
                local_174 = local_21c;
                local_170 = local_218;
                local_16c = local_214;
                local_168 = local_210;
                local_164 = local_20c;
                pppppuStack_160 = local_208;
                pppppuStack_15c = local_204;
                pppppuStack_158 = local_200;
                ppppuStack_154 = ppppuStack_1fc;
                if ((uint ****)0x2 < *pppppuVar25) {
                  local_234 = (uint *****)FUN_01421b00;
                  local_238 = pppppuVar25;
                    /* WARNING: Subroutine does not return */
                  FUN_012fb100(&DAT_0059883b,&local_238,&DAT_01d20a08);
                }
                if ((*pppppuVar25 == (uint ****)0x0) && (param_1[0x25] != (uint ****)0x80000000)) {
                  cVar2 = *(char *)((int)param_1 + 0xf3);
                  FUN_01428600(&local_3e0,param_1[0x26],param_1[0x27]);
                  pppppuVar48 = local_168;
                  pppppuVar30 = local_16c;
                  pppppuVar44 = local_170;
                  local_6c = 0;
                  local_234 = (uint *****)0x0;
                  local_238 = (uint *****)0x0;
                  local_200 = (uint *****)((uint)local_200 & 0xffff0000);
                  local_204 = (uint *****)0x0;
                  local_20c = (uint *****)0x0;
                  local_210 = (uint *****)0x0;
                  local_218 = (uint *****)0x0;
                  local_21c = (uint *****)0x0;
                  local_220 = (uint *****)0x2;
                  local_208 = (uint *****)&SUB_00000004;
                  local_214 = (uint *****)&SUB_00000004;
                  *puVar9 = local_250;
                  puVar9[1] = pppppuStack_24c;
                  puVar9[2] = pppppuStack_248;
                  if (local_174 != (uint *****)0x0) {
                    thunk_FUN_01be4678(local_178);
                  }
                  pppppuVar8 = pppppuStack_3c4;
                  pppppuVar7 = local_3c8;
                  pppppuVar6 = pppppuStack_3cc;
                  pppppuVar45 = local_3d0;
                  pppppuVar31 = local_3d4;
                  pppppuVar40 = local_3dc;
                  pppppuVar47 = local_3e0;
                  local_360 = (uint *****)0x0;
                  local_340 = pppppuVar30 + (int)pppppuVar48 * 0xd;
                  local_35c = local_58;
                  pppppuStack_358 = pppppuStack_54;
                  pppppuStack_354 = pppppuStack_50;
                  local_350 = pppppuStack_4c;
                  local_344 = pppppuVar44;
                  local_348 = pppppuVar30;
                  local_34c = pppppuVar30;
LAB_01762b20:
                  FUN_006ced10(&local_f8,&local_360);
                  if (local_f8 != (uint *****)0x2) {
                    pppppuStack_48 = local_e4;
                    pppppuStack_44 = local_e0;
                    local_40 = pppppuStack_dc;
                    pppppuStack_3c = local_d8;
                    pppppuStack_38 = pppppuStack_d4;
                    if (((uint)local_f8 & 1) == 0) {
                      if (local_6c == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0130739c("current header name",0x13,&DAT_01d1e4d0);
                      }
                    }
                    else {
                      pppppuVar44 = local_f8;
                      if (local_6c != 0) {
                        pppppuVar44 = local_68;
                      }
                      if (local_6c != 0 && pppppuVar44 != (uint *****)0x0) {
                        (*(code *)pppppuVar44[4])(&pppppuStack_5c,local_64,local_60);
                      }
                      local_6c = 1;
                      local_68 = local_f4;
                      local_64 = local_f0;
                      local_60 = local_ec;
                      pppppuStack_5c = local_e8;
                    }
                    uVar54 = FUN_00f80570(&local_68);
                    ppppuVar49 = (uint ****)((ulonglong)uVar54 >> 0x20);
                    if (pppppuVar31 != (uint *****)0x0) {
                      uVar34 = FUN_019306a8(pppppuVar45,pppppuVar6,pppppuVar7,pppppuVar8,uVar54);
                      uVar33 = uVar34 >> 0x19;
                      iVar32 = 0;
                      while( true ) {
                        uVar34 = (uint)pppppuVar40 & uVar34;
                        uVar46 = *(uint *)((int)pppppuVar47 + uVar34);
                        uVar35 = uVar46 ^ uVar33 * 0x1010101;
                        uVar35 = ~uVar35 & 0x80808080 & uVar35 + 0xfefefeff;
                        while (uVar35 != 0) {
                          uVar36 = uVar34 + ((uint)LZCOUNT(uVar35 << 0x18 |
                                                           (uVar35 >> 8 & 0xff) << 0x10 |
                                                           (uVar35 >> 0x10 & 0xff) << 8 |
                                                           uVar35 >> 0x18) >> 3) & (uint)pppppuVar40
                          ;
                          uVar35 = uVar35 - 1 & uVar35;
                          if ((ppppuVar49 == pppppuVar47[uVar36 * -3 + -1]) &&
                             (iVar29 = thunk_FUN_01bed842((int)uVar54,pppppuVar47[uVar36 * -3 + -2],
                                                          ppppuVar49), iVar29 == 0)) {
                            if (local_68 == (uint *****)0x0) {
                              uVar33 = ((uint)local_64 & 0xff) - 0x10;
                              if (((uVar33 < 0x20) && ((1 << (uVar33 & 0xff) & 0x80402543U) != 0))
                                 || ((uVar33 = ((uint)local_64 & 0xff) - 0x41, uVar33 < 5 &&
                                     (uVar33 != 1)))) goto LAB_01762d04;
                            }
                            local_3a0 = pppppuStack_48;
                            local_39c = pppppuStack_44;
                            pppppuStack_398 = local_40;
                            pppppuStack_394 = pppppuStack_3c;
                            pppppuStack_390 = pppppuStack_38;
                            FUN_0182e46c(&local_310,&local_238,&local_68);
                            if ((char)local_300 != '\x02') {
                              (*(code *)local_310[4])(&local_304,local_30c,local_308);
                            }
                            goto LAB_01762b20;
                          }
                        }
                        if ((uVar46 & 0x80808080 & uVar46 << 1) != 0) break;
                        iVar32 = iVar32 + 4;
                        uVar34 = uVar34 + iVar32;
                      }
                    }
LAB_01762d04:
                    (*(code *)pppppuStack_48[4])(&pppppuStack_3c,pppppuStack_44,local_40);
                    goto LAB_01762b20;
                  }
                  FUN_00713cb8(&local_360);
                  local_2c = 0;
                  local_34 = 0;
                  local_30 = 1;
                  if (cVar2 == '\0') {
                    FUN_01417d58(&local_238,&local_34);
                  }
                  else {
                    FUN_01417f04(&local_238,&local_34);
                  }
                  if (local_2c == 0) {
                    FUN_019bb7e0(local_34,local_30);
                    FUN_017793c0(&local_238);
                    pppppuVar44 = (uint *****)0x0;
                    if (local_6c != 0) {
                      pppppuVar44 = local_68;
                    }
                    if (local_6c != 0 && pppppuVar44 != (uint *****)0x0) {
                      (*(code *)pppppuVar44[4])(&pppppuStack_5c,local_64,local_60);
                    }
                    FUN_0141fb8c(&local_3e0);
                  }
                  else {
                    FUN_01283524(&local_f8,&local_34);
                    local_360 = local_f8;
                    local_35c = local_f4;
                    pppppuStack_358 = local_f0;
                    pppppuStack_354 = local_ec;
                    FUN_017793c0(&local_238);
                    pppppuVar44 = (uint *****)0x0;
                    if (local_6c != 0) {
                      pppppuVar44 = local_68;
                    }
                    if (local_6c != 0 && pppppuVar44 != (uint *****)0x0) {
                      (*(code *)pppppuVar44[4])(&pppppuStack_5c,local_64,local_60);
                    }
                    FUN_0141fb8c(&local_3e0);
                    local_2e8 = (uint *****)&DAT_00000003;
                    local_2ec = (uint *****)0x50c884;
                    local_2f0 = (uint *****)&SUB_00000004;
                    local_2e4 = local_360;
                    local_2e0 = (undefined1  [4])local_35c;
                    pppppuStack_2dc = pppppuStack_358;
                    pppppuStack_2d8 = pppppuStack_354;
                    local_2d0 = 2;
                    local_2d4 = (uint *****)&DAT_00531047;
                    FUN_01725c78(pppppuVar22,&local_2f0);
                    ppppuVar49 = (uint ****)0x5;
                    if (*(char *)(param_1 + 0x28) != '\0') {
                      ppppuVar49 = (uint ****)0x6;
                    }
                    if (param_1[0x24] == (uint ****)0x2) {
                      ppppuVar49 = (uint ****)0x6;
                    }
                    if (param_1[0x24] < (uint ****)0x3) {
                      FUN_0116c8d0(pppppuVar25);
                    }
                    *pppppuVar25 = ppppuVar49;
                  }
                }
                else {
                  FUN_017793c0(&local_190);
                }
              }
LAB_01763984:
              if (*ppppuVar28 != (uint ***)0x0) {
                FUN_0182e3a0(ppppuVar50);
              }
            }
            else {
              FUN_0182e3a0(ppppuVar50);
            }
            *ppppuVar28 = (uint ***)0x0;
          }
        }
      }
LAB_01762870:
      cVar2 = *(char *)(param_1 + 100);
    }
    uVar53 = FUN_01764558(param_1,param_2);
    pppppuVar44 = (uint *****)(uVar53 >> 0x20);
    if (((uVar53 & 1) == 0) && (pppppuVar44 != (uint *****)0x0)) break;
    pppppuVar44 = (uint *****)0x0;
    cVar2 = *(char *)((int)param_1 + 0xf5);
    iVar27 = iVar27 + 1;
    *(undefined1 *)((int)param_1 + 0xf5) = 0;
  } while (cVar2 != '\0');
LAB_01763d34:
  uVar39 = 0;
LAB_01763d38:
  return CONCAT44(pppppuVar44,uVar39);
}

