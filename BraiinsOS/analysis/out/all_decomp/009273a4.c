// FUN_009273a4 @ 009273a4 size=5108 calls_out=26 calls_in=2
// strings: table header | complete parsers should not report `ErrMode::Incomplete(_)` | a Display implementation returned an error unexpectedly

/* WARNING: Removing unreachable block (ram,0x00927700) */
/* WARNING: Removing unreachable block (ram,0x00928254) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009273a4(undefined4 *param_1,byte ****param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  byte *****pppppbVar6;
  undefined *puVar7;
  byte *****pppppbVar8;
  byte *****pppppbVar9;
  byte ****ppppbVar10;
  byte *****pppppbVar11;
  int iVar12;
  byte *****pppppbVar13;
  byte *****pppppbVar14;
  byte *****pppppbVar15;
  undefined3 *puVar16;
  byte *****pppppbVar17;
  byte *****pppppbVar18;
  byte *****pppppbVar19;
  int iVar20;
  byte *****pppppbVar21;
  byte *****pppppbVar22;
  byte *****pppppbVar23;
  byte *****pppppbVar24;
  byte *****extraout_r12;
  byte *****extraout_r12_00;
  byte *****extraout_r12_01;
  byte *****extraout_r12_02;
  byte *****extraout_r12_03;
  byte *****extraout_r12_04;
  byte *****extraout_r12_05;
  byte *****extraout_r12_06;
  byte *****extraout_r12_07;
  byte *****extraout_r12_08;
  byte *****extraout_r12_09;
  byte *****extraout_r12_10;
  byte *****extraout_r12_11;
  byte *****extraout_r12_12;
  byte *****extraout_r12_13;
  byte *****extraout_r12_14;
  undefined1 *local_4fc;
  byte *****local_4b8;
  byte *****pppppbStack_4b4;
  byte *****pppppbStack_4b0;
  byte *****pppppbStack_4ac;
  byte *****pppppbStack_4a8;
  int local_4a0 [2];
  undefined1 auStack_498 [192];
  uint local_3d8;
  int local_3d4;
  int local_3d0;
  byte ****local_3b8;
  int local_3b4;
  byte *****local_3b0;
  byte *****local_3ac;
  undefined4 local_3a8;
  byte *****local_3a0;
  byte *****pppppbStack_39c;
  byte *****local_398;
  byte *****pppppbStack_394;
  byte *****pppppbStack_390;
  undefined1 auStack_388 [96];
  undefined1 auStack_328 [108];
  int local_2bc;
  int local_2b8;
  int local_2b4;
  byte *****local_2a8;
  byte *****local_2a4;
  byte *****local_2a0;
  byte *****local_29c;
  byte *****local_298;
  byte *****local_294;
  byte *****local_290;
  byte *****local_28c;
  byte *****local_288;
  byte *****local_284;
  byte *****local_280;
  byte *****pppppbStack_27c;
  byte *****local_238;
  byte *****local_234;
  byte *****local_230;
  byte *****local_22c;
  byte *****local_228;
  byte *****local_224;
  int local_220;
  byte ****local_21c;
  int local_218;
  undefined4 local_214;
  int local_210;
  int local_1e0;
  undefined1 auStack_1dc [108];
  byte ****local_170;
  byte ****ppppbStack_16c;
  byte ****ppppbStack_168;
  byte ****ppppbStack_164;
  byte ****ppppbStack_160;
  byte ****ppppbStack_15c;
  byte *****local_158;
  undefined4 local_154;
  byte *****local_150;
  byte *****local_14c;
  byte *****local_148;
  byte *****local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 *local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  byte *****local_90;
  byte *****local_8c;
  byte ****local_88;
  byte ****ppppbStack_84;
  byte ****ppppbStack_80;
  byte ****ppppbStack_7c;
  byte ****ppppbStack_78;
  byte ****ppppbStack_74;
  byte ****local_70;
  byte ****ppppbStack_6c;
  byte ****ppppbStack_68;
  byte ****ppppbStack_64;
  byte ****ppppbStack_60;
  byte ****ppppbStack_5c;
  byte *****local_58;
  byte *****local_54;
  byte *****local_50;
  byte *****local_4c;
  byte *****pppppbStack_48;
  byte *****local_40;
  byte *****local_3c;
  byte *****local_38;
  byte *****local_34;
  byte *****local_30;
  byte *****local_2c;
  byte *****local_28;
  
  local_4fc = auStack_498;
  FUN_0167e830();
  pppppbVar23 = (byte *****)&local_58;
  local_4a0[0] = 0;
  local_3a8 = 0;
  if (((((param_3 == 0) || (*(char *)param_2 != -0x11)) || (param_3 == 1)) ||
      ((*(char *)((int)param_2 + 1) != -0x45 || (param_3 == 2)))) ||
     (*(char *)((int)param_2 + 2) != -0x41)) {
    iVar20 = param_3;
    ppppbVar10 = param_2;
  }
  else {
    iVar20 = param_3 + -3;
    ppppbVar10 = (byte ****)((int)param_2 + 3);
  }
  puVar4 = (undefined2 *)((uint)pppppbVar23 | 1);
  puVar16 = (undefined3 *)((uint)&local_238 | 5);
  iVar12 = 0;
  if (iVar20 != 0) {
    do {
      if (*(char *)((int)ppppbVar10 + iVar12) != ' ' && *(char *)((int)ppppbVar10 + iVar12) != '\t')
      goto LAB_00927490;
      iVar12 = iVar12 + 1;
    } while (iVar20 != iVar12);
    iVar12 = iVar20;
  }
LAB_00927490:
  local_3ac = (byte *****)(iVar20 - iVar12);
  if ((local_3d8 & 1) == 0) {
    local_3d4 = (int)ppppbVar10 - (int)param_2;
  }
  puVar5 = (undefined4 *)((uint)&local_2a8 | 4);
  local_3d0 = ((int)ppppbVar10 + iVar12) - (int)param_2;
  local_3b8 = param_2;
  local_3b4 = param_3;
  local_3b0 = (byte *****)((int)ppppbVar10 + iVar12);
  do {
    pppppbVar9 = local_3ac;
    pppppbVar13 = local_3b0;
    ppppbVar10 = local_3b8;
    local_3d8 = 1;
    if (local_3ac == (byte *****)0x0) {
      local_2a4 = (byte *****)0x0;
LAB_0092841c:
      local_3d8 = 1;
LAB_009284c0:
      FUN_016dd1aa(auStack_388,local_4fc,0xe0);
      FUN_0167d080(&local_290,auStack_388);
      if (local_290 == (byte *****)0x80000003) {
        FUN_016dd1aa((uint)&local_238 | 4,auStack_388,0x60);
        FUN_016dd1aa((uint)&local_158 | 4,&local_238,100);
        FUN_00910ca4(auStack_328);
        iVar20 = local_2b8;
        for (; local_2b4 != 0; local_2b4 = local_2b4 + -1) {
          FUN_01666b88(iVar20);
          iVar20 = iVar20 + 0x48;
        }
        if (local_2bc != 0) {
          thunk_FUN_016d3fb4(local_2b8);
        }
        param_1[0xd] = local_124;
        param_1[0xe] = uStack_120;
        param_1[0xf] = uStack_11c;
        param_1[0x10] = uStack_118;
        param_1[0x11] = uStack_114;
        param_1[0x12] = local_110;
        param_1[0x13] = uStack_10c;
        param_1[0x14] = uStack_108;
        param_1[0x15] = uStack_104;
        param_1[0x16] = local_100;
        param_1[0x17] = local_fc;
        param_1[0x18] = uStack_f8;
        param_1[0x19] = uStack_f4;
        param_1[0x1a] = uStack_f0;
        param_1[0x1b] = uStack_ec;
        param_1[1] = local_154;
        param_1[2] = local_150;
        param_1[3] = local_14c;
        param_1[4] = local_148;
        param_1[5] = local_144;
        param_1[6] = local_140;
        param_1[7] = local_13c;
        param_1[8] = local_138;
        param_1[9] = local_134;
        param_1[0x1c] = param_2;
        param_1[0x1d] = param_3;
        param_1[10] = local_130;
        param_1[0xb] = local_12c;
        param_1[0xc] = local_128;
        *param_1 = 2;
        return;
      }
      puVar5 = (undefined4 *)((uint)&local_158 | 4);
      *puVar5 = local_290;
      puVar5[1] = local_28c;
      puVar5[2] = local_288;
      puVar5[3] = local_284;
      puVar5[4] = local_280;
      puVar5[5] = pppppbStack_27c;
      FUN_009289ec(auStack_388);
      local_238 = (byte *****)*puVar5;
      local_234 = (byte *****)puVar5[1];
      local_230 = (byte *****)puVar5[2];
      local_22c = (byte *****)puVar5[3];
      local_228 = (byte *****)puVar5[4];
      local_224 = (byte *****)puVar5[5];
      local_28c = (byte *****)&DAT_01868210;
      local_290 = (byte *****)&local_2a8;
      local_2a0 = (byte *****)0x0;
      local_2a8 = (byte *****)0x0;
      local_284 = (byte *****)0x0;
      local_2a4 = (byte *****)&DAT_00000001;
      local_288 = (byte *****)&DAT_60000020;
      iVar20 = FUN_0168f3bc(&local_238,&local_290);
      if (iVar20 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_58,
                     &DAT_01868228,&DAT_018af130);
      }
      local_398 = local_2a8;
      pppppbStack_394 = local_2a4;
      pppppbStack_390 = local_2a0;
      FUN_00953a78(&local_238);
      local_13c = 4;
      local_138 = 0;
      local_134 = 0x80000000;
      local_140 = 0;
      pppppbVar23 = (byte *****)0x0;
      local_4b8 = local_3a0;
      pppppbStack_4b4 = pppppbStack_39c;
      pppppbStack_4b0 = local_398;
      pppppbStack_4ac = pppppbStack_394;
      pppppbStack_4a8 = pppppbStack_390;
      local_12c = 0x9286e0;
      goto LAB_00928324;
    }
    bVar1 = *(byte *)local_3b0;
    pppppbVar8 = (byte *****)((int)local_3ac + -1);
    if (bVar1 < 0x23) {
      if (bVar1 == 10 || bVar1 == 0xd) {
        if (*(byte *)local_3b0 == 10) {
          pppppbVar13 = (byte *****)((int)local_3b0 + 1);
LAB_009276e0:
          local_3ac = pppppbVar8;
          local_3b0 = pppppbVar13;
          if (local_4a0[0] != 0) {
            puVar7 = &DAT_0187f188;
            goto LAB_00928728;
          }
          local_3d0 = (int)local_3b0 - (int)local_3b8;
          local_3d8 = 1;
          goto LAB_009281a8;
        }
        if ((*(byte *)local_3b0 == 0xd) && (pppppbVar8 != (byte *****)0x0)) {
          pppppbVar13 = (byte *****)((int)local_3b0 + 2);
          pppppbVar8 = (byte *****)((int)local_3ac + -2);
          if (*(byte *)((int)local_3b0 + 1) == 10) goto LAB_009276e0;
        }
        if (local_3ac == (byte *****)0x0) goto LAB_0092841c;
        break;
      }
LAB_00927614:
      FUN_01687358(&local_238,&local_3b8);
      iVar20 = local_1e0;
      if (local_1e0 != 4) {
        FUN_016dd1aa(&local_290,&local_238,0x58);
        FUN_016dd1aa(&local_fc,auStack_1dc,0x6c);
        FUN_016dd1aa(&local_158,&local_290,0x58);
        local_100 = iVar20;
        FUN_016dd1aa(&local_238,&local_148,0xb8);
        if (local_4a0[0] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb715c(&DAT_0187f198);
        }
        local_4a0[0] = -1;
        FUN_0167ea40(&local_170,local_4fc,&local_158,&local_148);
        local_4a0[0] = local_4a0[0] + 1;
        pppppbVar23 = extraout_r12_01;
        if (local_170 == (byte ****)0x80000003) goto LAB_009281a8;
        local_14c = (byte *****)0x0;
        local_150 = (byte *****)0x0;
        local_158 = (byte *****)0x0;
        local_154 = (byte *****)&DAT_00000004;
        local_3b0 = pppppbVar13;
        local_3ac = pppppbVar9;
        pppppbVar23 = (byte *****)thunk_FUN_016d4a50(0x18);
        if (pppppbVar23 == (byte *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x18);
        }
        *pppppbVar23 = local_170;
        pppppbVar23[1] = ppppbStack_16c;
        pppppbVar23[2] = ppppbStack_168;
        pppppbVar23[3] = ppppbStack_164;
        pppppbVar23[4] = ppppbStack_160;
        pppppbVar23[5] = ppppbStack_15c;
        local_148 = (byte *****)&DAT_018680a4;
        *puVar5 = local_158;
        puVar5[1] = local_154;
        puVar5[2] = local_150;
        puVar5[3] = pppppbVar23;
        puVar5[4] = &DAT_018680a4;
        local_14c = pppppbVar23;
        goto LAB_00928490;
      }
      pppppbVar13 = (byte *****)&local_290;
      local_290 = local_238;
      local_28c = local_234;
      local_288 = local_230;
      local_284 = local_22c;
      local_280 = local_228;
      pppppbStack_27c = local_224;
      pppppbVar23 = pppppbVar13;
LAB_0092818c:
      local_2a8 = (byte *****)*pppppbVar13;
      local_2a4 = (byte *****)pppppbVar13[1];
      local_2a0 = (byte *****)pppppbVar13[2];
      local_29c = (byte *****)pppppbVar13[3];
      local_298 = (byte *****)pppppbVar13[4];
      local_294 = (byte *****)pppppbVar13[5];
      pppppbVar13 = local_2a8;
      if (local_2a8 != (byte *****)0x3) goto LAB_009283d4;
    }
    else {
      if (bVar1 == 0x23) {
        FUN_0166eebc(&local_158,&local_3b8);
        if (local_158 == (byte *****)0x3) {
          local_230 = (byte *****)&DAT_00000001;
          local_22c = (byte *****)0x0;
          local_234 = (byte *****)&DAT_00000001;
          local_238 = (byte *****)&DAT_0041950e;
          FUN_0167b99c(&local_158,&local_238,&local_3b8);
          if (local_158 == (byte *****)0x3) {
            if (local_4a0[0] != 0) {
              puVar7 = &DAT_0187f178;
              goto LAB_00928728;
            }
            local_3d0 = (int)local_3b0 - (int)local_3b8;
            if ((local_3d8 & 1) == 0) {
              local_3d4 = (int)pppppbVar13 - (int)ppppbVar10;
            }
            local_3d8 = 1;
            pppppbVar23 = extraout_r12;
            goto LAB_009281a8;
          }
        }
        pppppbVar13 = local_158;
        local_2a4 = local_154;
        local_2a0 = local_150;
        local_29c = local_14c;
        local_298 = local_148;
        local_294 = local_144;
        local_58 = local_14c;
        local_54 = local_148;
        local_50 = local_144;
LAB_009283d4:
        if ((pppppbVar13 != (byte *****)&DAT_00000001) && (pppppbVar13 == (byte *****)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("complete parsers should not report `ErrMode::Incomplete(_)`",0x3b,
                       &DAT_0187ea00);
        }
LAB_00928490:
        pppppbVar13 = local_2a0;
        pppppbVar9 = local_29c;
        pppppbVar8 = local_2a4;
        pppppbVar17 = local_298;
        pppppbVar23 = local_294;
        if (local_2a4 == (byte *****)&DAT_80000000) goto LAB_009284c0;
        goto LAB_00928288;
      }
      if (bVar1 != 0x5b) goto LAB_00927614;
      local_90 = local_3b0;
      local_8c = local_3ac;
      if (local_3ac == (byte *****)&DAT_00000001) {
        local_298 = (byte *****)0x0;
        local_29c = (byte *****)0x0;
        local_2a0 = (byte *****)&DAT_00000004;
        local_2a4 = (byte *****)0x0;
        local_2a8 = (byte *****)&DAT_00000001;
LAB_0092814c:
        pppppbVar13 = (byte *****)&local_158;
        local_22c = &local_3b8;
        local_228 = (byte *****)&local_90;
        local_230 = (byte *****)&DAT_0000000c;
        local_234 = (byte *****)0x35c068;
        local_238 = (byte *****)0x3;
        FUN_00953084(pppppbVar13,&local_2a8,&local_238);
        pppppbVar23 = extraout_r12_14;
        goto LAB_0092818c;
      }
      pppppbVar17 = (byte *****)((int)local_3b0 - (int)local_3b8);
      if (*(byte *)local_3b0 == 0x5b) {
        ppppbVar10 = (byte ****)(uint)*(byte *)((int)local_3b0 + 1);
      }
      if (*(byte *)local_3b0 == 0x5b && ppppbVar10 == (byte ****)&DAT_0000005b) {
        pppppbVar8 = (byte *****)&SUB_00000002;
        if (local_3ac < &SUB_00000002) {
          pppppbVar8 = local_3ac;
        }
        pppppbVar14 = (byte *****)0x0;
        do {
          if (*(byte *)((int)pppppbVar14 + 0x4144e6) != *(byte *)((int)local_3b0 + (int)pppppbVar14)
             ) {
            if (pppppbVar14 < pppppbVar8) {
              pppppbVar8 = (byte *****)&DAT_00000001;
              local_2a0 = (byte *****)&DAT_00000004;
              pppppbVar11 = (byte *****)0x0;
              pppppbVar14 = (byte *****)0x0;
              local_29c = (byte *****)0x0;
              local_2a4 = (byte *****)0x0;
              goto LAB_009280a8;
            }
            break;
          }
          pppppbVar14 = (byte *****)((int)pppppbVar14 + 1);
        } while (pppppbVar8 != pppppbVar14);
        local_3b0 = (byte *****)((int)local_3b0 + 2);
        local_3ac = (byte *****)((int)local_3ac + -2);
        FUN_01671830(&local_158,&local_3b8);
        pppppbVar15 = local_14c;
        pppppbVar6 = local_150;
        pppppbVar21 = local_154;
        if (local_158 == (byte *****)0x3) {
          local_38 = local_14c;
          local_3c = local_150;
          local_40 = local_154;
          local_30 = local_3ac;
          local_34 = local_3b0;
          local_28 = local_3ac;
          local_2c = local_3b0;
          if ((((local_3ac == (byte *****)0x0) || (*(byte *)local_3b0 != 0x5d)) ||
              (local_3ac == (byte *****)&DAT_00000001)) || (*(byte *)((int)local_3b0 + 1) != 0x5d))
          {
            local_230 = (byte *****)0x4;
            local_238 = (byte *****)0x2;
            local_280 = (byte *****)&local_2c;
            local_284 = &local_3b8;
            local_228 = (byte *****)0x0;
            local_22c = (byte *****)0x0;
            local_234 = (byte *****)0x0;
            local_28c = (byte *****)&DAT_0000002e;
            local_290 = (byte *****)0x0;
            FUN_00953084(&local_158,&local_238,&local_290);
            local_238 = local_158;
            local_234 = local_154;
            local_230 = local_150;
            local_22c = local_14c;
            local_228 = local_148;
            local_224 = local_144;
            if (local_158 == (byte *****)0x3) goto LAB_00927a7c;
            local_280 = (byte *****)&local_34;
            local_284 = &local_3b8;
            local_288 = (byte *****)&SUB_00000002;
            local_290 = (byte *****)&DAT_00000001;
            local_28c = (byte *****)&DAT_004144e8;
            FUN_00953084(&local_158,&local_238,&local_290);
            pppppbVar11 = local_144;
            pppppbVar14 = local_148;
            pppppbVar19 = local_14c;
            pppppbVar24 = local_150;
            pppppbVar22 = local_154;
            pppppbVar8 = local_158;
            local_238 = local_158;
            local_234 = local_154;
            local_230 = local_150;
            local_22c = local_14c;
            local_228 = local_148;
            local_224 = local_144;
            if (local_158 == (byte *****)0x3) goto LAB_00927a7c;
            FUN_00953468(pppppbVar6,pppppbVar15);
            pppppbVar23 = extraout_r12_05;
LAB_00928090:
            if (pppppbVar21 != (byte *****)0x0) {
              thunk_FUN_016d3fb4(pppppbVar6);
              pppppbVar23 = extraout_r12_11;
            }
            local_2a0 = pppppbVar24;
            local_29c = pppppbVar19;
            local_2a4 = pppppbVar22;
          }
          else {
            local_3ac = (byte *****)((int)local_3ac + -2);
            local_3b0 = (byte *****)((int)local_3b0 + 2);
LAB_00927a7c:
            pppppbVar18 = (byte *****)((int)local_3b0 - (int)local_3b8);
            local_50 = pppppbVar15;
            local_54 = pppppbVar6;
            local_58 = pppppbVar21;
            local_28 = local_3ac;
            local_2c = local_3b0;
            local_3c = local_3ac;
            local_40 = local_3b0;
            local_4c = pppppbVar17;
            pppppbStack_48 = pppppbVar18;
            FUN_0166eac4(&local_238,&local_3b8);
            pppppbVar23 = extraout_r12_03;
            if (local_238 != (byte *****)0x3) {
              if (local_238 == (byte *****)&DAT_00000001) {
                local_238 = (byte *****)&SUB_00000002;
              }
              local_280 = (byte *****)&local_40;
              local_284 = &local_3b8;
              local_28c = (byte *****)&DAT_0000000a;
              local_290 = (byte *****)0x0;
              pppppbVar23 = (byte *****)&local_238;
              FUN_00953084(&local_158,pppppbVar23,&local_290);
              local_238 = local_158;
              local_234 = local_154;
              local_230 = local_150;
              local_22c = local_14c;
              local_228 = local_148;
              local_224 = local_144;
              if (local_158 != (byte *****)0x3) {
                local_280 = (byte *****)&local_2c;
                local_284 = &local_3b8;
                local_28c = (byte *****)&DAT_00000023;
                local_290 = (byte *****)0x0;
                pppppbVar23 = (byte *****)&local_238;
                FUN_00953084(&local_158,pppppbVar23,&local_290);
                pppppbVar11 = local_144;
                pppppbVar14 = local_148;
                pppppbVar19 = local_14c;
                pppppbVar24 = local_150;
                pppppbVar22 = local_154;
                pppppbVar8 = local_158;
                local_238 = local_158;
                local_234 = local_154;
                local_230 = local_150;
                local_22c = local_14c;
                local_228 = local_148;
                local_224 = local_144;
                if (local_158 != (byte *****)0x3) {
                  FUN_00953468(pppppbVar6,pppppbVar15);
                  pppppbVar23 = extraout_r12_10;
                  goto LAB_00928090;
                }
              }
            }
            pppppbVar14 = local_230;
            pppppbVar8 = local_234;
            if (pppppbVar21 != (byte *****)&DAT_80000000) {
              local_230 = pppppbVar15;
              local_234 = pppppbVar6;
              local_238 = pppppbVar21;
              if (local_4a0[0] != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb715c(&DAT_0187f158);
              }
              local_150 = pppppbVar15;
              local_4a0[0] = -1;
              local_154 = pppppbVar6;
              local_158 = pppppbVar21;
              FUN_0167e4c0(&local_70,local_4fc,&local_158,pppppbVar8,pppppbVar14,pppppbVar17,
                           pppppbVar18);
              pppppbVar8 = (byte *****)0x3;
              local_4a0[0] = local_4a0[0] + 1;
              pppppbVar23 = extraout_r12_04;
              if (local_70 != (byte ****)0x80000003) {
                local_14c = (byte *****)0x0;
                local_150 = (byte *****)0x0;
                local_158 = (byte *****)0x0;
                local_154 = (byte *****)&DAT_00000004;
                local_3b0 = pppppbVar13;
                local_3ac = pppppbVar9;
                pppppbVar23 = (byte *****)thunk_FUN_016d4a50(0x18);
                if (pppppbVar23 == (byte *****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(4,0x18);
                }
                *pppppbVar23 = local_70;
                pppppbVar23[1] = ppppbStack_6c;
                pppppbVar23[2] = ppppbStack_68;
                pppppbVar23[3] = ppppbStack_64;
                pppppbVar23[4] = ppppbStack_60;
                pppppbVar23[5] = ppppbStack_5c;
                local_14c = pppppbVar23;
                goto LAB_00927ff8;
              }
              goto LAB_009280c4;
            }
            local_2a0 = pppppbVar17;
            pppppbVar14 = local_234;
            pppppbVar11 = local_230;
            local_29c = pppppbVar18;
            local_2a4 = pppppbVar15;
            pppppbVar8 = pppppbVar6;
          }
        }
        else {
          pppppbVar8 = local_158;
          if (local_158 == (byte *****)&DAT_00000001) {
            pppppbVar8 = (byte *****)&SUB_00000002;
          }
          local_2a0 = local_150;
          pppppbVar14 = local_148;
          pppppbVar11 = local_144;
          local_29c = local_14c;
          local_2a4 = local_154;
          pppppbVar23 = extraout_r12_02;
        }
LAB_009280a8:
        local_298 = pppppbVar14;
        local_294 = pppppbVar11;
LAB_009280c4:
        local_2a8 = pppppbVar8;
        if (pppppbVar8 != (byte *****)0x3) goto LAB_0092814c;
        local_2a8 = (byte *****)0x3;
      }
      else {
        if (*(byte *)local_3b0 == 0x5b) {
          local_3b0 = (byte *****)((int)local_3b0 + 1);
          local_3ac = pppppbVar8;
          FUN_01671830(&local_158,&local_3b8);
          pppppbVar24 = local_14c;
          pppppbVar22 = local_150;
          if (local_158 == (byte *****)0x3) {
            *(undefined1 *)((undefined2 *)((uint)&local_40 | 1) + 1) = local_154._3_1_;
            *(undefined2 *)((uint)&local_40 | 1) = local_154._1_2_;
            local_40 = (byte *****)CONCAT31(local_40._1_3_,(undefined1)local_154);
            local_38 = local_14c;
            local_3c = local_150;
            local_30 = local_3ac;
            local_34 = local_3b0;
            local_28 = local_3ac;
            local_2c = local_3b0;
            if ((local_3ac == (byte *****)0x0) || (*(byte *)local_3b0 != 0x5d)) {
              local_230 = (byte *****)0x4;
              local_238 = (byte *****)0x2;
              local_280 = (byte *****)&local_2c;
              local_284 = &local_3b8;
              local_228 = (byte *****)0x0;
              local_22c = (byte *****)0x0;
              local_234 = (byte *****)0x0;
              local_28c = (byte *****)&DAT_0000002e;
              local_290 = (byte *****)0x0;
              FUN_00953084(&local_158,&local_238,&local_290);
              local_238 = local_158;
              local_234 = local_154;
              local_230 = local_150;
              local_22c = local_14c;
              local_228 = local_148;
              local_224 = local_144;
              if (local_158 != (byte *****)0x3) {
                local_288 = (byte *****)&DAT_00000001;
                local_280 = (byte *****)&local_34;
                local_284 = &local_3b8;
                local_290 = (byte *****)&DAT_00000001;
                local_28c = (byte *****)&DAT_00418ec5;
                FUN_00953084(&local_158,&local_238,&local_290);
                pppppbVar14 = local_40;
                pppppbVar21 = local_14c;
                pppppbVar11 = local_150;
                pppppbVar8 = local_158;
                local_238 = local_158;
                local_234 = local_154;
                pppppbVar23 = local_234;
                local_230 = local_150;
                local_22c = local_14c;
                local_228 = local_148;
                local_224 = local_144;
                if (local_158 != (byte *****)0x3) {
                  local_234._0_1_ = SUB41(local_154,0);
                  uVar2 = local_234._0_1_;
                  uVar3 = *puVar16;
                  pppppbVar6 = *(byte ******)((int)puVar16 + 0xb);
                  pppppbVar15 = *(byte ******)((int)puVar16 + 0xf);
                  local_234 = pppppbVar23;
                  FUN_00953468(pppppbVar22,pppppbVar24);
                  pppppbVar23 = extraout_r12_08;
                  if (pppppbVar14 != (byte *****)0x0) {
                    thunk_FUN_016d3fb4(pppppbVar22);
                    pppppbVar23 = extraout_r12_09;
                  }
                  goto LAB_00927cb0;
                }
              }
            }
            else {
              local_3ac = (byte *****)((int)local_3ac + -1);
              local_3b0 = (byte *****)((int)local_3b0 + 1);
            }
            *(char *)(puVar4 + 1) = (char)((uint)local_40 >> 0x18);
            *puVar4 = (short)((uint)local_40 >> 8);
            pppppbVar19 = (byte *****)((int)local_3b0 - (int)local_3b8);
            *(byte ******)((int)puVar4 + 0xb) = pppppbVar17;
            *(byte ******)((int)puVar4 + 0xf) = pppppbVar19;
            local_58 = (byte *****)CONCAT31(local_58._1_3_,(char)local_40);
            local_50 = pppppbVar24;
            local_28 = local_3ac;
            local_2c = local_3b0;
            local_3c = local_3ac;
            local_40 = local_3b0;
            local_54 = pppppbVar22;
            FUN_0166eac4(&local_238,&local_3b8);
            pppppbVar23 = extraout_r12_06;
            if (local_238 != (byte *****)0x3) {
              if (local_238 == (byte *****)&DAT_00000001) {
                local_238 = (byte *****)&SUB_00000002;
              }
              local_280 = (byte *****)&local_40;
              local_284 = &local_3b8;
              local_28c = (byte *****)&DAT_0000000a;
              local_290 = (byte *****)0x0;
              pppppbVar23 = (byte *****)&local_238;
              FUN_00953084(&local_158,pppppbVar23,&local_290);
              local_238 = local_158;
              local_234 = local_154;
              local_230 = local_150;
              local_22c = local_14c;
              local_228 = local_148;
              local_224 = local_144;
              if (local_158 != (byte *****)0x3) {
                local_280 = (byte *****)&local_2c;
                local_284 = &local_3b8;
                local_28c = (byte *****)&DAT_00000023;
                local_290 = (byte *****)0x0;
                pppppbVar23 = (byte *****)&local_238;
                FUN_00953084(&local_158,pppppbVar23,&local_290);
                pppppbVar15 = local_144;
                pppppbVar6 = local_148;
                pppppbVar21 = local_14c;
                pppppbVar11 = local_150;
                pppppbVar14 = local_154;
                pppppbVar8 = local_158;
                local_238 = local_158;
                local_234 = local_154;
                local_230 = local_150;
                local_22c = local_14c;
                local_228 = local_148;
                local_224 = local_144;
                if (local_158 != (byte *****)0x3) {
                  FUN_00953468(pppppbVar22,pppppbVar24);
                  pppppbVar23 = extraout_r12_12;
                  if (local_58 != (byte *****)0x0) {
                    thunk_FUN_016d3fb4(pppppbVar22);
                    pppppbVar23 = extraout_r12_13;
                  }
                  goto LAB_00928120;
                }
              }
            }
            pppppbVar14 = local_230;
            pppppbVar8 = local_234;
            if (local_58 != (byte *****)&DAT_80000000) {
              local_230 = pppppbVar24;
              local_234 = pppppbVar22;
              local_238 = local_58;
              if (local_4a0[0] != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb715c(&DAT_0187f168);
              }
              local_150 = pppppbVar24;
              local_4a0[0] = -1;
              local_154 = pppppbVar22;
              local_158 = local_58;
              FUN_0167dd60(&local_88,local_4fc,&local_158,pppppbVar8,pppppbVar14,pppppbVar17,
                           pppppbVar19);
              pppppbVar8 = (byte *****)0x3;
              local_4a0[0] = local_4a0[0] + 1;
              pppppbVar23 = extraout_r12_07;
              if (local_88 != (byte ****)0x80000003) {
                local_14c = (byte *****)0x0;
                local_150 = (byte *****)0x0;
                local_158 = (byte *****)0x0;
                local_154 = (byte *****)&DAT_00000004;
                local_3b0 = pppppbVar13;
                local_3ac = pppppbVar9;
                pppppbVar23 = (byte *****)thunk_FUN_016d4a50(0x18);
                if (pppppbVar23 == (byte *****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(4,0x18);
                }
                *pppppbVar23 = local_88;
                pppppbVar23[1] = ppppbStack_84;
                pppppbVar23[2] = ppppbStack_80;
                pppppbVar23[3] = ppppbStack_7c;
                pppppbVar23[4] = ppppbStack_78;
                pppppbVar23[5] = ppppbStack_74;
                local_14c = pppppbVar23;
LAB_00927ff8:
                local_148 = (byte *****)&DAT_018680a4;
                pppppbVar8 = (byte *****)&DAT_00000001;
                *puVar5 = local_158;
                puVar5[1] = local_154;
                puVar5[2] = local_150;
                puVar5[3] = local_14c;
                puVar5[4] = &DAT_018680a4;
                pppppbVar23 = local_14c;
              }
              goto LAB_009280c4;
            }
            pppppbVar11 = pppppbVar17;
            pppppbVar6 = local_234;
            pppppbVar14 = pppppbVar24;
            pppppbVar15 = local_230;
            pppppbVar21 = pppppbVar19;
            pppppbVar8 = pppppbVar22;
          }
          else {
            pppppbVar8 = local_158;
            if (local_158 == (byte *****)&DAT_00000001) {
              pppppbVar8 = (byte *****)&SUB_00000002;
            }
            pppppbVar11 = local_150;
            pppppbVar6 = local_148;
            pppppbVar15 = local_144;
            pppppbVar21 = local_14c;
            pppppbVar23 = extraout_r12_00;
            uVar2 = (undefined1)local_154;
            uVar3 = local_154._1_3_;
LAB_00927cb0:
            pppppbVar14 = (byte *****)CONCAT31(uVar3,uVar2);
          }
        }
        else {
          pppppbVar8 = (byte *****)&DAT_00000001;
          pppppbVar11 = (byte *****)&DAT_00000004;
          pppppbVar15 = (byte *****)0x0;
          pppppbVar6 = (byte *****)0x0;
          pppppbVar21 = (byte *****)0x0;
          pppppbVar14 = (byte *****)0x0;
        }
LAB_00928120:
        local_2a8 = pppppbVar8;
        local_2a4 = pppppbVar14;
        local_2a0 = pppppbVar11;
        local_29c = pppppbVar21;
        local_298 = pppppbVar6;
        local_294 = pppppbVar15;
        if (pppppbVar8 != (byte *****)0x3) goto LAB_0092814c;
      }
    }
LAB_009281a8:
    pppppbVar13 = (byte *****)0x0;
    if (local_3ac != (byte *****)0x0) {
      do {
        if (*(byte *)((int)local_3b0 + (int)pppppbVar13) != 0x20 &&
            *(byte *)((int)local_3b0 + (int)pppppbVar13) != 9) goto LAB_009281e0;
        pppppbVar13 = (byte *****)((int)pppppbVar13 + 1);
      } while (local_3ac != pppppbVar13);
      pppppbVar13 = local_3ac;
    }
LAB_009281e0:
    local_3ac = (byte *****)((int)local_3ac - (int)pppppbVar13);
    pppppbVar13 = (byte *****)((int)local_3b0 + (int)pppppbVar13);
    if (local_4a0[0] != 0) {
      puVar7 = &DAT_0187f1a8;
      local_3b0 = pppppbVar13;
LAB_00928728:
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(puVar7);
    }
    local_3d0 = (int)pppppbVar13 - (int)local_3b8;
    if ((local_3d8 & 1) == 0) {
      local_3d4 = (int)local_3b0 - (int)local_3b8;
    }
    local_3b0 = pppppbVar13;
  } while (local_3ac != pppppbVar9);
  local_3d8 = 1;
  pppppbVar13 = (byte *****)&DAT_00000004;
  pppppbVar9 = (byte *****)0x0;
  pppppbVar8 = (byte *****)0x0;
  pppppbVar17 = (byte *****)0x0;
LAB_00928288:
  local_210 = (int)local_3b0 - (int)param_2;
  local_280 = (byte *****)0x0;
  local_290 = (byte *****)param_2;
  local_28c = (byte *****)param_3;
  local_288 = (byte *****)param_2;
  local_284 = (byte *****)param_3;
  local_238 = pppppbVar8;
  local_234 = pppppbVar13;
  local_230 = pppppbVar9;
  local_22c = pppppbVar17;
  local_228 = pppppbVar23;
  local_224 = (byte *****)local_3b8;
  local_220 = local_3b4;
  local_21c = param_2;
  local_218 = param_3;
  local_214 = local_3a8;
  FUN_0168db40(&local_158,&local_238,&local_290);
  pppppbVar23 = local_158;
  local_4b8 = local_154;
  pppppbStack_4b4 = local_150;
  pppppbStack_4b0 = local_14c;
  pppppbStack_4ac = local_148;
  pppppbStack_4a8 = local_144;
  local_4fc = local_130;
  FUN_00953b2c(local_4a0);
LAB_00928324:
  param_1[1] = pppppbVar23;
  param_1[2] = local_4b8;
  param_1[3] = pppppbStack_4b4;
  param_1[4] = pppppbStack_4b0;
  param_1[5] = pppppbStack_4ac;
  param_1[6] = pppppbStack_4a8;
  param_1[0xb] = local_4fc;
  param_1[7] = local_140;
  param_1[8] = local_13c;
  param_1[9] = local_138;
  param_1[10] = local_134;
  param_1[0xc] = local_12c;
  *param_1 = 4;
  return;
}

