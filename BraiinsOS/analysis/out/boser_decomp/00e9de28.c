// FUN_00e9de28 @ 00e9de28 size=5004 calls_out=51 calls_in=1
// strings: netmask | gateway | incorrect hostname format (IETF RFC 1123) | protocol or hostname must be specified | static | BUG: request parameters cell was already initialized.

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e9de28(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 ****ppppuVar3;
  undefined4 ******ppppppuVar4;
  undefined1 uVar5;
  char cVar6;
  int *piVar7;
  undefined4 *******pppppppuVar8;
  int iVar9;
  undefined *puVar10;
  undefined4 *******extraout_r1;
  undefined4 *******extraout_r1_00;
  undefined4 *******extraout_r1_01;
  undefined4 *******pppppppuVar11;
  undefined4 *******pppppppuVar12;
  undefined4 *******pppppppuVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 *******pppppppuVar17;
  undefined4 *******pppppppuVar18;
  undefined4 *******in_r12;
  undefined4 *******extraout_r12;
  undefined4 *******extraout_r12_00;
  undefined4 *******extraout_r12_01;
  undefined4 *******extraout_r12_02;
  undefined4 *******extraout_r12_03;
  bool bVar19;
  undefined8 uVar20;
  undefined4 *******local_3b4;
  undefined4 *******local_3a8;
  undefined4 *******local_3a4;
  undefined4 *******local_3a0;
  undefined4 *******local_39c;
  undefined4 *******local_394;
  undefined4 *******local_390;
  undefined4 *******local_388;
  undefined4 *******local_380;
  undefined4 *******local_37c;
  undefined4 *******local_378;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 *******local_338;
  undefined4 *******pppppppuStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 *******local_2d0;
  undefined4 *******local_2cc;
  undefined4 *******local_2c8;
  undefined4 *******local_288;
  undefined4 *******pppppppuStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 local_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 local_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 *******local_240;
  undefined4 *******local_23c;
  undefined4 *******local_238;
  undefined4 local_234;
  undefined4 *******local_230;
  undefined4 *******local_22c;
  undefined4 *******local_228;
  undefined4 *******local_224;
  undefined4 *******local_220;
  undefined4 *******local_21c;
  undefined4 *******local_218;
  undefined4 *******local_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 *******local_1c0;
  undefined4 *******pppppppuStack_1bc;
  undefined4 *******pppppppuStack_1b8;
  undefined4 *******pppppppuStack_1b4;
  undefined4 *******pppppppuStack_1b0;
  undefined4 *******local_1a8;
  undefined4 *******local_1a4;
  undefined4 *******local_1a0;
  undefined4 *******local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 *******local_160;
  undefined4 *******local_15c;
  undefined4 *******local_158;
  undefined4 *******pppppppuStack_154;
  undefined4 *******pppppppuStack_150;
  undefined4 *******local_14c;
  undefined4 *******local_148;
  undefined4 *******pppppppuStack_144;
  undefined4 *******pppppppuStack_140;
  undefined4 *******local_118;
  undefined4 *******local_114;
  undefined4 *******local_110;
  undefined4 *******local_10c;
  undefined4 *******local_108;
  undefined4 *******local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int iStack_f0;
  int iStack_ec;
  undefined4 *******local_e8;
  undefined4 *******local_e4;
  undefined4 *******local_e0;
  undefined4 *******local_dc;
  undefined4 *******local_d8;
  undefined4 *******local_d4;
  undefined4 *******local_d0;
  undefined4 *******pppppppuStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_a0 [12];
  int local_94;
  char local_80 [4];
  undefined4 *******local_7c;
  int local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 *******local_58;
  undefined4 *******local_54;
  undefined4 *******local_50;
  undefined4 *******local_4c;
  char local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  int local_44;
  undefined4 local_40;
  int iStack_3c;
  undefined4 *******pppppppuStack_38;
  char local_2d;
  undefined4 ******local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x19c)) {
  case 0:
    *(undefined2 *)(param_2 + 0x19d) = 0x100;
    uVar16 = *(undefined4 *)(param_2 + 0x198);
    FUN_01bed4e2(param_2 + 0x80,param_2,0x80);
    piVar7 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0xfc));
    if (piVar7 != (int *)0x0) {
      local_d8 = (undefined4 *******)&DAT_80000000;
      local_dc = (undefined4 *******)0x0;
      local_e4 = (undefined4 *******)0x0;
      local_e8 = (undefined4 *******)0x0;
      pppppppuVar8 = (undefined4 *******)FUN_01272340(&local_e8,&DAT_00570b90,8,param_2 + 0xc0);
      if (pppppppuVar8 == (undefined4 *******)0x0) {
        if (local_e8 == (undefined4 *******)&DAT_00000001) {
          local_240 = (undefined4 *******)&DAT_0000000a;
          pppppppuVar8 = (undefined4 *******)FUN_01966fbc(&local_240,0,0);
          goto LAB_00e9df8c;
        }
        pppppppuVar8 = (undefined4 *******)FUN_007025b0(&local_e8,&DAT_00570770,8);
        pppppppuVar12 = local_d4;
        pppppppuVar17 = local_d8;
        if (pppppppuVar8 != (undefined4 *******)0x0) goto LAB_00e9df8c;
        if (local_e8 == (undefined4 *******)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
        }
        bVar19 = local_d8 == (undefined4 *******)&DAT_80000000;
        local_d8 = (undefined4 *******)&DAT_80000000;
        if (bVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
        }
        local_2c8 = local_d0;
        local_2cc = local_d4;
        local_378 = pppppppuVar17;
        local_2d0 = pppppppuVar17;
        if (*(int *)(param_2 + 0xcc) == -0x80000000) {
          FUN_00a45368(local_80,0x70636864);
LAB_00e9ed24:
          if (local_80[0] == '\x06') {
            FUN_019bb7e0(pppppppuVar17,pppppppuVar12);
            pppppppuVar8 = local_7c;
            goto LAB_00e9df8c;
          }
        }
        else {
          if (*(int *)(param_2 + 0xcc) != -0x7fffffff) {
            FUN_00a44f88(local_80,"static");
            goto LAB_00e9ed24;
          }
          local_80[0] = '\0';
        }
        FUN_0196b484(&local_240,(uint)&local_e8 | 4,&local_2d0,local_80);
        if ((char)local_240 != '\x06') {
          FUN_00db4764(&local_240);
        }
        local_240 = local_e8;
        local_23c = local_e4;
        local_238 = local_e0;
        local_234 = local_dc;
        local_230 = local_d8;
        local_22c = local_d4;
        local_228 = local_d0;
        local_224 = pppppppuStack_cc;
        FUN_0196ac88(&local_160,&local_240);
        uVar5 = local_160._0_1_;
        uVar14 = (uint)local_160 & 0xff;
        if (uVar14 != 6) {
          FUN_01bed4e2((uint)&local_1a8 | 1,(uint)&local_160 | 1,0x17);
          local_1a8 = (undefined4 *******)CONCAT31(local_1a8._1_3_,uVar5);
          if (uVar14 == 5) {
            local_22c = (undefined4 *******)0x0;
            local_228 = local_1a4;
            local_220 = local_19c;
            if (local_1a4 == (undefined4 *******)0x0) {
              local_220 = local_1a4;
            }
            local_238 = local_1a4;
            local_240 = local_1a4;
            if (local_1a4 != (undefined4 *******)0x0) {
              local_240 = (undefined4 *******)&DAT_00000001;
            }
            local_224 = local_1a0;
            local_234 = local_1a0;
            local_23c = (undefined4 *******)0x0;
            local_230 = local_240;
            FUN_00fea674(auStack_a0,&local_240);
            if (local_94 != 0) {
              FUN_0067b1ac(&local_240,auStack_a0);
              pppppppuVar12 = local_238;
              pppppppuVar17 = local_23c;
              pppppppuVar8 = local_240;
              cVar6 = (char)local_234;
              local_48 = (char)((uint)local_234 >> 8);
              uStack_47 = (undefined1)((uint)local_234 >> 0x10);
              uStack_46 = local_234._3_1_;
              FUN_00e0febc(&local_1a8);
              if (cVar6 != '\x02') {
                local_234 = (undefined4 *******)
                            CONCAT31(CONCAT12(uStack_46,CONCAT11(uStack_47,local_48)),cVar6);
                DataMemoryBarrier(0xb);
                local_240 = pppppppuVar8;
                local_23c = pppppppuVar17;
                local_238 = pppppppuVar12;
                if (*(int *)(*piVar7 + 0x18) != 0) {
                  FUN_00b065ec(*piVar7 + 8,&local_240);
                }
                if (((uint)local_234 & 0xff) != 2) {
                  local_e8 = local_240;
                  local_e4 = local_23c;
                  local_e0 = local_238;
                  local_dc = local_234;
                  FUN_019cf348();
                  if ((DAT_01d50f88 < 5) &&
                     (((DAT_01d4c488 - 1 < 2 ||
                       ((DAT_01d4c488 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4c480), cVar6 != '\0')))
                       ) && (iVar9 = FUN_01aaa278(DAT_01d4c480), iVar9 != 0)))) {
                    local_158 = (undefined4 *******)(DAT_01d4c480 + 7);
                    if ((undefined4 *******)DAT_01d4c480[8] == (undefined4 *******)0x0) {
LAB_00e9f1ec:
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                    }
                    local_e4 = &local_1a8;
                    local_238 = (undefined4 *******)DAT_01d4c480[9];
                    local_234 = (undefined4 *******)DAT_01d4c480[10];
                    local_e8 = &local_240;
                    local_160 = &local_e8;
                    local_230 = (undefined4 *******)0x0;
                    local_15c = (undefined4 *******)&DAT_00000001;
                    local_e0 = (undefined4 *******)&DAT_01d2ea4c;
                    local_1a4 = (undefined4 *******)&DAT_0000006b;
                    local_1a8 = (undefined4 *******)0x3fe987;
                    local_240 = (undefined4 *******)*local_158;
                    local_23c = (undefined4 *******)DAT_01d4c480[8];
                    FUN_00e0ff40(&local_160);
                  }
                  else {
                    ppppuVar3 = DAT_01d4c480;
                    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                      local_378 = (undefined4 *******)DAT_01d4c480;
                      local_2cc = (undefined4 *******)DAT_01d4c480[5];
                      local_2c8 = (undefined4 *******)DAT_01d4c480[6];
                      local_2d0 = (undefined4 *******)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      puVar15 = DAT_01d4edc8;
                      pcVar2 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar15 = &DAT_01cfc5e0;
                        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar9 = (*(code *)puVar15[3])(pcVar2,&local_2d0);
                      if (iVar9 != 0) {
                        local_1a0 = (undefined4 *******)(DAT_01d4c480 + 7);
                        if ((undefined4 *******)DAT_01d4c480[8] == (undefined4 *******)0x0)
                        goto LAB_00e9f1ec;
                        local_15c = &local_118;
                        local_238 = (undefined4 *******)DAT_01d4c480[9];
                        local_234 = (undefined4 *******)DAT_01d4c480[10];
                        local_160 = &local_240;
                        local_1a8 = &local_160;
                        local_1a4 = (undefined4 *******)&DAT_00000001;
                        local_114 = (undefined4 *******)&DAT_0000006b;
                        local_230 = (undefined4 *******)0x0;
                        local_158 = (undefined4 *******)&DAT_01d2ea4c;
                        local_118 = (undefined4 *******)0x3fe987;
                        local_e8 = local_2d0;
                        local_e4 = local_2cc;
                        local_e0 = local_2c8;
                        local_240 = (undefined4 *******)*local_1a0;
                        local_23c = (undefined4 *******)DAT_01d4c480[8];
                        FUN_01aaa328(ppppuVar3,pcVar2,puVar15[4],&local_e8,&local_1a8);
                      }
                    }
                  }
                }
              }
              goto LAB_00e9dfa8;
            }
            FUN_0165a1f4(auStack_a0);
          }
          FUN_00e0febc(&local_1a8);
          goto LAB_00e9dfa8;
        }
        pppppppuVar8 = local_15c;
      }
      else {
LAB_00e9df8c:
        local_160 = (undefined4 *******)CONCAT31(local_160._1_3_,6);
        local_15c = pppppppuVar8;
        FUN_01276d58(&local_e8);
      }
      FUN_00e0fe5c(pppppppuVar8);
    }
LAB_00e9dfa8:
    *(undefined1 *)(param_2 + 0x19e) = 0;
    FUN_01bed4e2(&local_240,param_2 + 0x80,0x80);
    local_e8 = *(undefined4 ********)(param_2 + 0xc0);
    local_e4 = *(undefined4 ********)(param_2 + 0xc4);
    local_e0 = *(undefined4 ********)(param_2 + 200);
    local_dc = *(undefined4 ********)(param_2 + 0xcc);
    local_d8 = *(undefined4 ********)(param_2 + 0xd0);
    local_d4 = *(undefined4 ********)(param_2 + 0xd4);
    local_d0 = *(undefined4 ********)(param_2 + 0xd8);
    pppppppuStack_cc = *(undefined4 ********)(param_2 + 0xdc);
    uStack_c8 = *(undefined4 *)(param_2 + 0xe0);
    uStack_c4 = *(undefined4 *)(param_2 + 0xe4);
    local_c0 = *(undefined4 *)(param_2 + 0xe8);
    uStack_bc = *(undefined4 *)(param_2 + 0xec);
    uStack_b8 = *(undefined4 *)(param_2 + 0xf0);
    uStack_b4 = *(undefined4 *)(param_2 + 0xf4);
    uStack_b0 = *(undefined4 *)(param_2 + 0xf8);
    FUN_0142e6dc(&local_240);
    FUN_0178e884(local_1c4);
    *(undefined4 ********)(param_2 + 0x100) = local_e8;
    *(undefined4 ********)(param_2 + 0x104) = local_e4;
    *(undefined4 ********)(param_2 + 0x108) = local_e0;
    *(undefined4 ********)(param_2 + 0x10c) = local_dc;
    *(undefined4 ********)(param_2 + 0x110) = local_d8;
    *(undefined4 ********)(param_2 + 0x114) = local_d4;
    *(undefined4 ********)(param_2 + 0x118) = local_d0;
    *(undefined4 ********)(param_2 + 0x11c) = pppppppuStack_cc;
    *(undefined4 *)(param_2 + 0x120) = uStack_c8;
    *(undefined4 *)(param_2 + 0x124) = uStack_c4;
    *(undefined4 *)(param_2 + 0x128) = local_c0;
    *(undefined4 *)(param_2 + 300) = uStack_bc;
    *(undefined4 *)(param_2 + 0x130) = uStack_b8;
    *(undefined4 *)(param_2 + 0x134) = uStack_b4;
    *(undefined4 *)(param_2 + 0x138) = uStack_b0;
    *(undefined1 *)(param_2 + 0x180) = 0;
    *(undefined4 *)(param_2 + 0x13c) = uVar16;
    in_r12 = extraout_r12;
LAB_00e9e048:
    *(undefined4 *)(param_2 + 0x140) = uVar16;
    *(undefined4 *)(param_2 + 0x181) = 0x100;
    *(undefined4 *)(param_2 + 0x144) = *(undefined4 *)(param_2 + 0x100);
    *(undefined4 *)(param_2 + 0x148) = *(undefined4 *)(param_2 + 0x104);
    *(undefined4 *)(param_2 + 0x14c) = *(undefined4 *)(param_2 + 0x108);
    *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(param_2 + 0x10c);
    *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)(param_2 + 0x110);
    pppppppuVar8 = (undefined4 *******)(param_2 + 0x128);
    *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_2 + 0x114);
    *(undefined4 *)(param_2 + 0x15c) = *(undefined4 *)(param_2 + 0x118);
    *(undefined4 *)(param_2 + 0x160) = *(undefined4 *)(param_2 + 0x11c);
    *(undefined4 *)(param_2 + 0x164) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)(param_2 + 0x168) = *(undefined4 *)(param_2 + 0x124);
    local_39c = *(undefined4 ********)(param_2 + 0x138);
    *(undefined4 *******)(param_2 + 0x16c) = *pppppppuVar8;
    *(undefined4 *)(param_2 + 0x170) = *(undefined4 *)(param_2 + 300);
    *(undefined4 *)(param_2 + 0x174) = *(undefined4 *)(param_2 + 0x130);
    *(undefined4 *)(param_2 + 0x178) = *(undefined4 *)(param_2 + 0x134);
    *(undefined4 ********)(param_2 + 0x17c) = local_39c;
    pppppppuVar17 = *(undefined4 ********)(param_2 + 0x150);
    if (pppppppuVar17 == (undefined4 *******)&DAT_80000001) {
      local_3a0 = (undefined4 *******)&DAT_80000001;
LAB_00e9e0a0:
      pppppppuVar18 = (undefined4 *******)0x0;
LAB_00e9e0a4:
      pppppppuVar11 = (undefined4 *******)0x0;
      *(undefined1 *)(param_2 + 0x181) = 1;
      uVar16 = *(undefined4 *)(param_2 + 0x148);
      pppppppuVar13 = *(undefined4 ********)(param_2 + 0x144);
      *(undefined1 *)(param_2 + 0x182) = 0;
      pppppppuVar17 = (undefined4 *******)&DAT_80000000;
      if (pppppppuVar13 == (undefined4 *******)&DAT_80000000) {
LAB_00e9e0f4:
        local_37c = local_39c;
LAB_00e9e0f8:
        *(undefined1 *)(param_2 + 0x184) = 0;
        *(undefined1 *)(param_2 + 0x181) = 0;
        pppppppuVar12 = local_378;
        if (local_3a0 != (undefined4 *******)&DAT_80000001) {
          if (pppppppuVar17 == (undefined4 *******)&DAT_80000000) {
            pppppppuVar17 = (undefined4 *******)&DAT_80000000;
            pppppppuVar8 = local_3b4;
            pppppppuVar13 = local_3a0;
            local_37c = local_378;
            pppppppuVar11 = pppppppuVar18;
            pppppppuVar18 = local_3a8;
            pppppppuVar12 = local_3a4;
          }
          else {
            pppppppuVar8 = local_3a4;
            pppppppuVar13 = local_37c;
            local_37c = pppppppuVar11;
            pppppppuVar11 = local_3a0;
            if (pppppppuVar17 == (undefined4 *******)0x80000002) goto LAB_00e9e400;
          }
LAB_00e9e448:
          local_238 = pppppppuVar17;
          local_234 = pppppppuVar13;
          local_230 = local_37c;
          local_22c = pppppppuVar11;
          local_228 = pppppppuVar12;
          local_224 = pppppppuVar18;
          local_220 = pppppppuVar8;
          local_21c = local_3a8;
          local_218 = local_3b4;
LAB_00e9e468:
          local_e8 = local_220;
          local_e4 = local_21c;
          local_e0 = local_218;
          local_148 = local_220;
          pppppppuStack_144 = local_21c;
          pppppppuStack_140 = local_218;
          *(undefined1 *)(param_2 + 0x183) = 1;
          local_15c = local_234;
          local_158 = local_230;
          iVar9 = **(int **)(param_2 + 0x140);
          *(undefined1 *)(param_2 + 0x183) = 0;
          local_160 = local_238;
          pppppppuStack_154 = local_22c;
          pppppppuStack_150 = local_228;
          local_14c = local_224;
          uVar16 = FUN_00b7bbe0(iVar9 + 8);
          *(undefined4 *)(param_2 + 0x188) = uVar16;
          puVar10 = &DAT_01c13650;
          *(undefined **)(param_2 + 0x18c) = &DAT_01c13650;
          goto LAB_00e9e4e4;
        }
        if (pppppppuVar17 != (undefined4 *******)&DAT_80000000) {
          local_3b4 = (undefined4 *******)0x0;
          pppppppuVar13 = pppppppuVar17;
          pppppppuVar17 = (undefined4 *******)&DAT_80000001;
          pppppppuVar18 = in_r12;
          goto LAB_00e9e448;
        }
LAB_00e9e400:
        FUN_01a71aac(&local_240,3,"protocol or hostname must be specified",0x26);
        local_39c = local_240;
        if (local_240 == (undefined4 *******)&DAT_00000003 && local_23c == (undefined4 *******)0x0)
        goto LAB_00e9e468;
        local_394 = local_230;
        local_380 = local_22c;
        local_388 = local_228;
        local_390 = local_224;
        local_e8 = local_220;
        local_e4 = local_21c;
        local_e0 = local_218;
        local_19c = local_214;
        uStack_198 = uStack_210;
        uStack_194 = uStack_20c;
        uStack_190 = local_208;
        uStack_18c = uStack_204;
        local_188 = local_200;
        uStack_184 = uStack_1fc;
        uStack_180 = uStack_1f8;
        uStack_17c = local_1f4;
        uStack_178 = uStack_1f0;
        local_174 = local_1ec;
        uStack_170 = uStack_1e8;
        uStack_16c = local_1e4;
        uStack_168 = uStack_1e0;
        uStack_164 = uStack_1dc;
        local_1a8 = local_220;
        local_1a4 = local_21c;
        local_1a0 = local_218;
        pppppppuVar12 = local_23c;
        local_37c = local_234;
        pppppppuVar17 = local_238;
LAB_00e9e7a4:
        *(undefined1 *)(param_2 + 0x183) = 0;
      }
      else {
        pppppppuVar11 = *(undefined4 ********)(param_2 + 0x14c);
        local_39c = *(undefined4 ********)(param_2 + 0x148);
        uVar20 = FUN_0140c1dc(local_39c,pppppppuVar11);
        pppppppuVar8 = (undefined4 *******)((ulonglong)uVar20 >> 0x20);
        pppppppuVar17 = pppppppuVar13;
        in_r12 = extraout_r12_00;
        if ((int)uVar20 != 0) goto LAB_00e9e0f4;
        FUN_01a71aac(&local_240,3,"incorrect hostname format (IETF RFC 1123)",0x29);
        pppppppuVar11 = local_230;
        local_37c = local_234;
        pppppppuVar17 = local_238;
        pppppppuVar12 = local_23c;
        local_39c = local_240;
        local_394 = local_230;
        local_390 = local_224;
        local_388 = local_228;
        local_380 = local_22c;
        FUN_01bed4e2(&local_e8,&local_220,0x48);
        FUN_019bb7e0(pppppppuVar13,uVar16);
        pppppppuVar8 = extraout_r1;
        in_r12 = extraout_r12_01;
        if (((uint)local_39c & 7) == 4) {
          pppppppuVar11 = (undefined4 *******)0x0;
          pppppppuVar17 = (undefined4 *******)&DAT_80000000;
          local_39c = local_37c;
          goto LAB_00e9e0f4;
        }
        if (local_39c == (undefined4 *******)&DAT_00000003) goto LAB_00e9e0f8;
        FUN_01bed4e2(&local_160,&local_e8,0x48);
        if (local_39c == (undefined4 *******)&DAT_00000003 &&
            pppppppuVar12 == (undefined4 *******)0x0) {
          pppppppuVar8 = extraout_r1_00;
          in_r12 = extraout_r12_02;
          goto LAB_00e9e0f8;
        }
        FUN_01bed4e2(&local_1a8,&local_160,0x48);
      }
      *(undefined1 *)(param_2 + 0x184) = 0;
      if ((*(char *)(param_2 + 0x181) == '\x01') && (-0x7fffffff < (int)local_3a0)) {
        FUN_0134aee0(local_3a0,local_378,1,4);
      }
      local_3a4 = pppppppuVar17;
    }
    else {
      if (pppppppuVar17 == (undefined4 *******)&DAT_80000000) {
        local_3a0 = (undefined4 *******)&DAT_80000000;
        goto LAB_00e9e0a0;
      }
      pppppppuVar11 = *(undefined4 ********)(param_2 + 0x110);
      local_110 = *(undefined4 ********)(param_2 + 0x114);
      local_10c = *(undefined4 ********)(param_2 + 0x118);
      local_108 = *(undefined4 ********)(param_2 + 0x11c);
      local_104 = *(undefined4 ********)(param_2 + 0x120);
      local_100 = *(undefined4 *)(param_2 + 0x124);
      local_fc = *(undefined4 *)(param_2 + 0x128);
      local_f8 = *(undefined4 *)(param_2 + 300);
      local_f4 = *(undefined4 *)(param_2 + 0x130);
      iStack_f0 = *(int *)(param_2 + 0x134);
      iStack_ec = *(int *)(param_2 + 0x138);
      local_118 = pppppppuVar17;
      local_114 = pppppppuVar11;
      FUN_00a214b0(&local_240,&DAT_004cfb47,7,pppppppuVar11,local_110);
      pppppppuVar8 = local_108;
      pppppppuVar12 = local_23c;
      local_39c = local_240;
      local_3a4 = local_238;
      if (local_240 == (undefined4 *******)&DAT_00000003 && local_23c == (undefined4 *******)0x0) {
        FUN_00a214b0(&local_240,"netmask",7,local_108,local_104);
        uVar16 = local_fc;
        if (local_240 != (undefined4 *******)&DAT_00000003 || local_23c != (undefined4 *******)0x0)
        {
LAB_00e9e91c:
          local_390 = local_224;
          local_388 = local_228;
          local_380 = local_22c;
          local_394 = local_230;
          local_37c = local_234;
          local_3a4 = local_238;
          pppppppuVar12 = local_23c;
          local_39c = local_240;
          FUN_01bed4e2(&local_160,&local_220,0x48);
          bVar19 = true;
LAB_00e9e930:
          goto LAB_00e9e934;
        }
        local_3a8 = local_238;
        FUN_00a214b0(&local_240,"gateway",7,local_fc,local_f8);
        if (local_240 != (undefined4 *******)&DAT_00000003 || local_23c != (undefined4 *******)0x0)
        goto LAB_00e9e91c;
        local_23c = (undefined4 *******)0x0;
        local_240 = (undefined4 *******)&DAT_00000003;
        local_58 = &local_240;
        local_5c = iStack_f0 + iStack_ec * 0xc;
        local_3b4 = local_238;
        local_60 = local_f4;
        local_64 = iStack_f0;
        local_68 = iStack_f0;
        FUN_0116c0c0(&local_48,&local_68);
        if (local_48 == '\0') {
          FUN_01323e8c(&local_68);
          local_3a0 = (undefined4 *******)0x0;
          local_378 = (undefined4 *******)&DAT_00000001;
          pppppppuVar18 = (undefined4 *******)0x0;
        }
        else {
          uVar1 = CONCAT11(uStack_46,uStack_47);
          local_378 = (undefined4 *******)FUN_01298504(0x10,1);
          if (local_378 == (undefined4 *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,0x10);
          }
          *local_378 = (undefined4 ******)CONCAT13((undefined1)local_44,CONCAT12(uStack_45,uVar1));
          local_54 = (undefined4 *******)&SUB_00000004;
          local_4c = (undefined4 *******)&DAT_00000001;
          local_48 = (char)local_68;
          uStack_47 = (undefined1)((uint)local_68 >> 8);
          uStack_46 = (undefined1)((uint)local_68 >> 0x10);
          uStack_45 = (undefined1)((uint)local_68 >> 0x18);
          local_44 = local_64;
          local_40 = local_60;
          iStack_3c = local_5c;
          pppppppuStack_38 = local_58;
          local_50 = local_378;
          while( true ) {
            pppppppuVar18 = local_4c;
            FUN_0116c0c0(&local_2d,&local_48);
            ppppppuVar4 = local_2c;
            if (local_2d != '\x01') break;
            if (pppppppuVar18 == local_54) {
              FUN_016092cc(&local_54,pppppppuVar18,1,1,4);
              local_378 = local_50;
            }
            local_378[(int)pppppppuVar18] = ppppppuVar4;
            local_4c = (undefined4 *******)((int)pppppppuVar18 + 1);
          }
          FUN_01323e8c(&local_48);
          local_3a0 = local_54;
        }
        pppppppuVar12 = local_23c;
        local_39c = local_240;
        if (local_240 != (undefined4 *******)&DAT_00000003 || local_23c != (undefined4 *******)0x0)
        {
          local_3a4 = local_238;
          local_37c = local_234;
          local_394 = local_230;
          local_380 = local_22c;
          local_390 = local_224;
          local_388 = local_228;
          FUN_01bed4e2(&local_e8,&local_220,0x48);
          FUN_0134aee0(local_3a0,local_378,1,4);
          FUN_01bed4e2(&local_160,&local_e8,0x48);
          bVar19 = false;
          goto LAB_00e9e930;
        }
        FUN_019bb7e0(pppppppuVar17,pppppppuVar11);
        FUN_019bb7e0(local_10c,pppppppuVar8);
        FUN_019bb7e0(local_100,uVar16);
        pppppppuVar8 = extraout_r1_01;
        in_r12 = extraout_r12_03;
        goto LAB_00e9e0a4;
      }
      local_37c = local_234;
      local_394 = local_230;
      local_380 = local_22c;
      local_388 = local_228;
      local_390 = local_224;
      FUN_01bed4e2(&local_160,&local_220,0x48);
      bVar19 = true;
      pppppppuVar8 = local_108;
LAB_00e9e934:
      FUN_019bb7e0(pppppppuVar17,pppppppuVar11);
      FUN_019bb7e0(local_10c,pppppppuVar8);
      FUN_019bb7e0(local_100,local_fc);
      if (bVar19) {
        FUN_006a41c0(&local_f4);
      }
      FUN_01bed4e2(&local_1a8,&local_160,0x48);
    }
    *(undefined1 *)(param_2 + 0x181) = 0;
    bVar19 = *(char *)(param_2 + 0x182) != '\0';
    iVar9 = 0;
    if (bVar19) {
      iVar9 = *(int *)(param_2 + 0x144);
    }
    if (bVar19 && iVar9 != -0x80000000) {
      FUN_019bb7e0(iVar9,*(undefined4 *)(param_2 + 0x148));
    }
    *(undefined1 *)(param_2 + 0x182) = 0;
    FUN_01bed4e2(&local_2d0,&local_1a8,0x48);
    *(undefined1 *)(param_2 + 0x180) = 1;
    if (local_39c != (undefined4 *******)&SUB_00000004 || pppppppuVar12 != (undefined4 *******)0x0)
    {
LAB_00e9e9e4:
      FUN_01bed4e2(&local_288,&local_2d0,0x48);
      FUN_00e9f5a8(param_2 + 0x100);
      if (local_39c == (undefined4 *******)&DAT_00000003 && pppppppuVar12 == (undefined4 *******)0x0
         ) {
        local_d0 = local_288;
        pppppppuStack_cc = pppppppuStack_284;
        uStack_c8 = uStack_280;
        uStack_c4 = uStack_27c;
        local_c0 = local_278;
        uStack_bc = uStack_274;
        uStack_b8 = uStack_270;
        uStack_b4 = uStack_26c;
        uStack_b0 = uStack_268;
        local_e0 = local_394;
        local_e4 = local_37c;
        local_d4 = local_390;
        local_d8 = local_388;
        local_dc = local_380;
        local_e8 = local_3a4;
        FUN_00d91d08(&local_240);
        local_380 = local_224;
        local_388 = local_220;
        local_37c = local_22c;
        local_338 = local_218;
        pppppppuStack_334 = local_214;
        uStack_330 = uStack_210;
        uStack_32c = uStack_20c;
        local_328 = local_208;
        uStack_324 = uStack_204;
        uStack_320 = local_200;
        uStack_31c = uStack_1fc;
        uStack_318 = uStack_1f8;
        local_360 = local_1f4;
        uStack_35c = uStack_1f0;
        uStack_358 = local_1ec;
        uStack_354 = uStack_1e8;
        local_350 = local_1e4;
        uStack_34c = uStack_1e0;
        uStack_348 = uStack_1dc;
        uStack_344 = uStack_1d8;
        uStack_340 = uStack_1d4;
        local_370 = local_1d0;
        uStack_36c = uStack_1cc;
        uStack_368 = uStack_1c8;
        uStack_364 = local_1c4;
        *(undefined1 *)(param_2 + 0x19e) = 0;
        pppppppuVar12 = local_234;
        pppppppuVar8 = local_240;
        pppppppuVar17 = local_23c;
      }
      else {
        pppppppuVar17 = (undefined4 *******)0x0;
        local_360 = local_264;
        uStack_35c = uStack_260;
        uStack_358 = uStack_25c;
        uStack_354 = uStack_258;
        local_350 = local_254;
        uStack_34c = uStack_250;
        uStack_348 = uStack_24c;
        uStack_344 = uStack_248;
        uStack_340 = uStack_244;
        local_338 = local_288;
        pppppppuStack_334 = pppppppuStack_284;
        uStack_330 = uStack_280;
        uStack_32c = uStack_27c;
        local_328 = local_278;
        uStack_324 = uStack_274;
        uStack_320 = uStack_270;
        uStack_31c = uStack_26c;
        uStack_318 = uStack_268;
        pppppppuVar8 = (undefined4 *******)&DAT_00000003;
        *(undefined1 *)(param_2 + 0x19e) = 0;
        if (*(char *)(param_2 + 0x19d) == '\x01') {
          FUN_00e9f614(param_2);
          local_21c = local_390;
          local_228 = local_394;
          local_230 = local_3a4;
          local_238 = local_39c;
        }
        else {
          local_21c = local_390;
          local_228 = local_394;
          local_230 = local_3a4;
          local_238 = local_39c;
        }
      }
      *param_1 = pppppppuVar8;
      param_1[1] = pppppppuVar17;
      param_1[7] = local_380;
      param_1[8] = local_388;
      param_1[9] = local_21c;
      param_1[4] = local_230;
      param_1[2] = local_238;
      param_1[5] = local_37c;
      param_1[3] = pppppppuVar12;
      param_1[6] = local_228;
      param_1[10] = local_338;
      param_1[0xb] = pppppppuStack_334;
      param_1[0xc] = uStack_330;
      param_1[0xd] = uStack_32c;
      param_1[0xe] = local_328;
      param_1[0xf] = uStack_324;
      param_1[0x10] = uStack_320;
      param_1[0x11] = uStack_31c;
      param_1[0x12] = uStack_318;
      param_1[0x13] = local_360;
      param_1[0x14] = uStack_35c;
      param_1[0x15] = uStack_358;
      param_1[0x16] = uStack_354;
      param_1[0x17] = local_350;
      param_1[0x18] = uStack_34c;
      param_1[0x19] = uStack_348;
      param_1[0x1a] = uStack_344;
      param_1[0x1b] = uStack_340;
      param_1[0x1c] = local_370;
      param_1[0x1d] = uStack_36c;
      param_1[0x1e] = uStack_368;
      param_1[0x1f] = uStack_364;
      uVar5 = 1;
      goto LAB_00e9ec0c;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17e0c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17e0c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x180)) {
    case 0:
      uVar16 = *(undefined4 *)(param_2 + 0x13c);
      goto LAB_00e9e048;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c181cc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c181cc);
    case 3:
      uVar16 = *(undefined4 *)(param_2 + 0x188);
      puVar10 = *(undefined **)(param_2 + 0x18c);
LAB_00e9e4e4:
      (**(code **)(puVar10 + 0xc))(&local_240,uVar16,param_3);
      pppppppuVar8 = local_240;
      if (local_240 != (undefined4 *******)0x80000017) {
        local_1c0 = local_23c;
        pppppppuStack_1bc = local_238;
        pppppppuStack_1b8 = local_234;
        pppppppuStack_1b4 = local_230;
        pppppppuStack_1b0 = local_22c;
        FUN_01139b38(*(undefined4 *)(param_2 + 0x188),*(undefined4 *)(param_2 + 0x18c));
        if (pppppppuVar8 != (undefined4 *******)&DAT_80000016) {
          local_118 = pppppppuVar8;
          local_114 = local_1c0;
          local_110 = pppppppuStack_1bc;
          local_10c = pppppppuStack_1b8;
          local_108 = pppppppuStack_1b4;
          local_104 = pppppppuStack_1b0;
          local_240 = (undefined4 *******)&local_48;
          local_40 = 0;
          local_48 = '\0';
          uStack_47 = 0;
          uStack_46 = 0;
          uStack_45 = 0;
          local_234 = (undefined4 *******)0x0;
          local_44 = 1;
          local_238 = (undefined4 *******)0x60000020;
          local_23c = (undefined4 *******)&DAT_01c18084;
          iVar9 = FUN_0121efc4(&local_118,&local_240);
          if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,&local_68,&DAT_01c180dc,&DAT_01d30334);
          }
          local_68 = CONCAT13(uStack_45,CONCAT12(uStack_46,CONCAT11(uStack_47,local_48)));
          local_64 = local_44;
          local_60 = local_40;
          FUN_01a70fd4(&local_240,0xd);
          FUN_00b719dc(&local_118);
          local_388 = local_228;
          local_394 = local_230;
          local_37c = local_234;
          pppppppuVar17 = local_238;
          pppppppuVar12 = local_23c;
          local_39c = local_240;
          local_380 = local_22c;
          local_390 = local_224;
          FUN_01bed4e2(&local_e8,&local_220,0x48);
          if (local_39c != (undefined4 *******)&DAT_00000003 ||
              pppppppuVar12 != (undefined4 *******)0x0) {
            FUN_01bed4e2(&local_1a8,&local_e8,0x48);
            goto LAB_00e9e7a4;
          }
        }
        *(undefined1 *)(param_2 + 0x194) = 0;
        *(undefined4 *)(param_2 + 0x188) = *(undefined4 *)(param_2 + 0x140);
        goto LAB_00e9e610;
      }
      uVar5 = 3;
      break;
    case 4:
LAB_00e9e610:
      FUN_00e9d780(&local_240,param_2 + 0x188,param_3);
      local_3a4 = local_238;
      pppppppuVar12 = local_23c;
      local_39c = local_240;
      if (local_240 != (undefined4 *******)&SUB_00000004 || local_23c != (undefined4 *******)0x0) {
        local_37c = local_234;
        local_394 = local_230;
        local_380 = local_22c;
        local_390 = local_224;
        local_388 = local_228;
        FUN_01bed4e2(&local_1a8,&local_220,0x48);
        if (*(char *)(param_2 + 0x194) == '\x03') {
          FUN_01139b38(*(undefined4 *)(param_2 + 0x18c),*(undefined4 *)(param_2 + 400));
        }
        *(undefined2 *)(param_2 + 0x181) = 0;
        *(undefined1 *)(param_2 + 0x183) = 0;
        *(undefined1 *)(param_2 + 0x184) = 0;
        FUN_01bed4e2(&local_2d0,&local_1a8,0x48);
        *(undefined1 *)(param_2 + 0x180) = 1;
        goto LAB_00e9e9e4;
      }
      uVar5 = 4;
    }
    *(undefined1 *)(param_2 + 0x180) = uVar5;
  }
  *param_1 = 4;
  param_1[1] = 0;
  uVar5 = 3;
LAB_00e9ec0c:
  *(undefined1 *)(param_2 + 0x19c) = uVar5;
  return;
}

