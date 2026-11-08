// FUN_0163d274 @ 0163d274 size=9296 calls_out=43 calls_in=1
// strings: IFLA_STATS64 | MapBuffer | invalid IFLA_PHYS_PORT_NAME value | invalid IFLA_IFNAME value | invalid IFLA_QDISC value | IFLA_STATS

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0163d274(undefined4 *******param_1,undefined4 *param_2,char param_3,undefined1 param_4)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *******pppppppuVar6;
  undefined1 *puVar7;
  uint extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  undefined4 extraout_r1_07;
  undefined4 extraout_r1_08;
  undefined4 extraout_r1_09;
  undefined1 *puVar8;
  undefined4 extraout_r1_10;
  undefined4 extraout_r1_11;
  undefined4 extraout_r1_12;
  undefined4 extraout_r1_13;
  undefined4 extraout_r1_14;
  undefined4 extraout_r1_15;
  undefined4 extraout_r1_16;
  undefined4 extraout_r1_17;
  undefined4 extraout_r1_18;
  undefined4 extraout_r1_19;
  undefined4 extraout_r1_20;
  undefined4 extraout_r1_21;
  undefined4 extraout_r1_22;
  undefined4 extraout_r1_23;
  undefined4 extraout_r1_24;
  undefined4 extraout_r1_25;
  undefined4 extraout_r1_26;
  undefined4 extraout_r1_27;
  undefined4 extraout_r1_28;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 *******pppppppuVar11;
  undefined1 uVar12;
  undefined4 *******pppppppuVar13;
  undefined4 *******pppppppuVar14;
  undefined4 *******pppppppuVar15;
  undefined4 *******pppppppuVar16;
  int iVar17;
  undefined1 auVar18 [8];
  undefined8 uVar19;
  ulonglong uVar20;
  undefined4 *******local_284;
  char local_27a;
  undefined1 local_279;
  ulonglong local_278;
  undefined4 *******local_270;
  undefined4 *******local_26c;
  undefined4 *******local_268;
  undefined8 local_264;
  undefined4 local_25c;
  undefined4 *******local_258;
  undefined4 *******pppppppuStack_254;
  undefined4 *******pppppppuStack_250;
  undefined4 *******local_248;
  undefined4 *******pppppppuStack_244;
  undefined4 *******pppppppuStack_240;
  undefined4 *******local_238;
  undefined4 *******pppppppuStack_234;
  undefined4 *******pppppppuStack_230;
  undefined4 *******local_228;
  undefined4 *******local_224;
  undefined4 *******local_220;
  undefined4 *******local_21c;
  undefined4 *******local_218;
  undefined4 *******local_214;
  undefined4 *******pppppppuStack_210;
  undefined4 *******pppppppuStack_20c;
  undefined4 *******pppppppuStack_208;
  undefined4 uStack_204;
  undefined4 *******local_158;
  undefined4 *******local_154;
  undefined4 *******local_150;
  undefined4 *******local_14c;
  undefined4 *******pppppppuStack_148;
  undefined8 *local_144;
  code *pcStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  uint local_134;
  undefined4 *******local_88;
  undefined4 *******local_84;
  undefined4 *******local_80;
  undefined4 *******local_7c;
  undefined8 *local_78;
  code *local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 *******pppppppuStack_60;
  ushort local_5a;
  undefined8 local_58;
  undefined4 *******local_50;
  undefined1 local_48 [8];
  undefined4 *******local_40;
  undefined1 local_38 [8];
  undefined4 *******local_30;
  
  pppppppuVar13 = (undefined4 *******)*param_2;
  pppppppuVar16 = (undefined4 *******)param_2[1];
  local_27a = param_3;
  local_279 = param_4;
  auVar18 = (undefined1  [8])FUN_01623bf0(pppppppuVar13,pppppppuVar16);
  pppppppuVar11 = (undefined4 *******)((ulonglong)auVar18 >> 0x20);
  uVar10 = SUB84(auVar18,0);
  local_278 = (ulonglong)auVar18;
  uVar1 = FUN_01623bc0(pppppppuVar13,pppppppuVar16);
  uVar3 = (uint)uVar1;
  if (0x36 < uVar3 - 1) {
switchD_0163d2d8_caseD_8:
    local_38._0_2_ = uVar1;
    FUN_01623ae4(&local_158,pppppppuVar13,pppppppuVar16);
    local_84 = (undefined4 *******)FUN_012fcf18;
    local_88 = (undefined4 *******)local_38;
    FUN_01a8da38(&local_228,&DAT_005a8e62,&local_88);
    local_88 = local_228;
    local_84 = local_224;
    local_80 = local_220;
    uVar20 = FUN_0160f810(&local_228,&local_158,&local_88);
    pppppppuVar11 = local_220;
    pppppppuVar16 = local_21c;
    pppppppuVar13 = local_224;
    if (local_228 != (undefined4 *******)&DAT_80000000) {
      uVar12 = 0x35;
      pppppppuVar14 = local_228;
      pppppppuVar13 = local_21c;
      pppppppuVar16 = local_224;
      goto LAB_0163f1c0;
    }
LAB_0163f31c:
    param_1[1] = pppppppuVar13;
    param_1[2] = pppppppuVar11;
    param_1[3] = pppppppuVar16;
    goto LAB_0163f194;
  }
  uVar20 = CONCAT44((&switchD_0163d2d8::switchdataD_0163d2dc)[uVar3 - 1],uVar3);
  unique0x10001dcb = (ulonglong)auVar18;
  switch(uVar3) {
  case 1:
    uVar20 = FUN_0163fb24(&local_158,uVar10,pppppppuVar11);
    uVar12 = 0x12;
    goto LAB_0163f1b8;
  case 2:
    pppppppuVar14 = (undefined4 *******)0x0;
    if ((longlong)auVar18 < 0) {
LAB_0163db3c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(pppppppuVar14,pppppppuVar11);
    }
    if (pppppppuVar11 == (undefined4 *******)0x0) {
      pppppppuVar16 = (undefined4 *******)&DAT_00000001;
    }
    else {
      pppppppuVar14 = (undefined4 *******)&DAT_00000001;
      pppppppuVar16 = (undefined4 *******)FUN_01298504(pppppppuVar11,1);
      if (pppppppuVar16 == (undefined4 *******)0x0) goto LAB_0163db3c;
      pppppppuVar14 = pppppppuVar11;
    }
    uVar20 = FUN_01bed4e2(pppppppuVar16,uVar10,pppppppuVar11);
    uVar12 = 0x13;
    goto LAB_0163f1c0;
  case 3:
    FUN_0160ef98(&local_158,uVar10,pppppppuVar11);
    uVar20 = CONCAT44(local_158,local_158);
    if (((uint)local_158 & 1) == 0) {
      local_228 = local_158;
      local_224 = local_154;
      local_220 = local_150;
      local_21c = local_14c;
      if (((uint)local_158 & 1) == 0) {
        uVar12 = 0x15;
        pppppppuVar14 = local_154;
        pppppppuVar11 = local_14c;
        pppppppuVar16 = local_150;
        goto LAB_0163f1c0;
      }
    }
    else {
      puVar4 = (undefined4 *)((uint)&local_158 | 4);
      local_88 = (undefined4 *******)*puVar4;
      local_84 = (undefined4 *******)puVar4[1];
      local_80 = (undefined4 *******)puVar4[2];
      pcVar9 = "invalid IFLA_IFNAME value";
      uVar3 = (uint)&local_228 | 4;
      uVar10 = 0x19;
LAB_0163f174:
      FUN_016403ac(uVar3,&local_88,pcVar9,uVar10);
    }
    goto LAB_0163f184;
  case 4:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_MTU value",0x16);
      uVar10 = extraout_r1_16;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) {
LAB_0163f020:
      param_1[1] = local_88;
      param_1[2] = local_84;
      param_1[3] = local_80;
      *(undefined1 *)param_1 = 0x36;
      return;
    }
    uVar12 = 0x1c;
    break;
  case 5:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_LINK value",0x17);
      uVar10 = extraout_r1_17;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x1d;
    break;
  case 6:
    FUN_0160ef98(&local_158,uVar10,pppppppuVar11);
    uVar20 = CONCAT44(local_158,local_158);
    if (((uint)local_158 & 1) != 0) {
      puVar4 = (undefined4 *)((uint)&local_158 | 4);
      local_88 = (undefined4 *******)*puVar4;
      local_84 = (undefined4 *******)puVar4[1];
      local_80 = (undefined4 *******)puVar4[2];
      pcVar9 = "invalid IFLA_QDISC value";
      uVar3 = (uint)&local_228 | 4;
      uVar10 = 0x18;
      goto LAB_0163f174;
    }
    local_228 = local_158;
    local_224 = local_154;
    local_220 = local_150;
    local_21c = local_14c;
    if (((uint)local_158 & 1) == 0) {
      uVar12 = 0x16;
      pppppppuVar14 = local_154;
      pppppppuVar11 = local_14c;
      pppppppuVar16 = local_150;
      goto LAB_0163f1c0;
    }
    goto LAB_0163f184;
  case 7:
    FUN_0161d058(local_48,uVar10,pppppppuVar11,0x60,"IFLA_STATS",10);
    pppppppuVar13 = (undefined4 *******)local_48._4_4_;
    FUN_0163370c(&local_158,local_48._4_4_,local_40);
    local_38._4_4_ = &LAB_0141634c;
    local_38._0_4_ = &local_278;
    FUN_01a8da38(&local_88,&DAT_00577da4,local_38);
    local_38._0_4_ = local_88;
    local_38._4_4_ = local_84;
    local_30 = local_80;
    FUN_0160f6ac(&local_228,&local_158,local_38);
    pppppppuVar11 = local_21c;
    pppppppuVar16 = local_220;
    pppppppuVar14 = local_224;
    if (local_228 != (undefined4 *******)0x0) {
      *(undefined1 *)param_1 = 0x36;
      param_1[1] = local_224;
      param_1[2] = local_220;
      param_1[3] = local_21c;
LAB_0163dc00:
      FUN_0134bd64(local_48._0_4_,pppppppuVar13);
      return;
    }
    FUN_01bed4e2(&local_158,&local_214,0x50);
    uVar20 = FUN_0134bd64(local_48._0_4_,pppppppuVar13);
    uVar12 = 0x2f;
    pppppppuVar13 = local_218;
    goto LAB_0163f1c0;
  default:
    goto switchD_0163d2d8_caseD_8;
  case 10:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_MASTER value",0x19);
      uVar10 = extraout_r1_12;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x1e;
    break;
  case 0xc:
    if (param_3 == '\b') {
      FUN_016238f4(&local_88,uVar10,pppppppuVar11);
      if (local_88 != (undefined4 *******)&DAT_80000000) {
        pppppppuVar11 = local_88;
        pppppppuVar16 = local_84;
        pppppppuVar14 = local_80;
        goto LAB_0163f734;
      }
      FUN_0160f9d4(&local_158,uVar10,pppppppuVar11);
      local_38._4_4_ = &LAB_0141634c;
      local_38._0_4_ = &local_278;
      FUN_01a8da38(&local_88,&DAT_005afbde,local_38);
      local_38._0_4_ = local_88;
      local_38._4_4_ = local_84;
      local_30 = local_80;
      FUN_0160f5cc(&local_228,&local_158,local_38);
      uVar20 = CONCAT44(extraout_r1_26,local_228);
      if (local_228 == (undefined4 *******)&DAT_00000001) {
        param_1[1] = local_224;
        param_1[2] = local_220;
        param_1[3] = local_21c;
        *(undefined1 *)param_1 = 0x36;
        return;
      }
      uVar12 = 0xd;
      pppppppuVar14 = local_224;
      pppppppuVar11 = local_21c;
      pppppppuVar16 = local_220;
      goto LAB_0163f1c0;
    }
    if (param_3 == '\v') {
      FUN_016238f4(&local_88,uVar10,pppppppuVar11);
      if (local_88 != (undefined4 *******)&DAT_80000000) {
        unique0x10001d1b = CONCAT44(local_80,local_84);
      }
      local_48._0_4_ = &local_58;
      local_38._0_4_ = local_88;
      pppppppuVar13 = (undefined4 *******)&LAB_0141634c;
      local_48._4_4_ = &LAB_0141634c;
      local_58 = (ulonglong)auVar18;
      FUN_00664898(&local_88,&DAT_005afbde,local_48);
      FUN_0160f56c(local_48,local_38,&local_88);
      pppppppuVar11 = (undefined4 *******)local_48._0_4_;
      pppppppuVar16 = (undefined4 *******)local_48._4_4_;
      pppppppuVar14 = local_40;
      if ((undefined1 *)local_48._0_4_ != &DAT_80000000) goto LAB_0163f734;
      FUN_0161eee0(&local_158);
      local_38._4_4_ = &LAB_0141634c;
      local_38._0_4_ = local_48;
      local_48 = auVar18;
      FUN_00664898(&local_88,&DAT_005afbde,local_38);
      FUN_0160f5cc(&local_228,&local_158,&local_88);
      uVar20 = CONCAT44(extraout_r1_28,local_228);
      if (local_228 != (undefined4 *******)&DAT_00000001) {
        uVar12 = 0xe;
        pppppppuVar14 = local_224;
        pppppppuVar11 = local_21c;
        pppppppuVar16 = local_220;
        goto LAB_0163f1c0;
      }
      goto LAB_0163f184;
    }
    FUN_01623ae4(&local_228,pppppppuVar13,pppppppuVar16);
    local_154 = (undefined4 *******)&LAB_0163fcb8;
    local_158 = (undefined4 *******)&local_27a;
    local_14c = (undefined4 *******)&LAB_0141634c;
    local_150 = (undefined4 *******)&local_278;
    FUN_01a8da38(&local_88,&DAT_005798f8,&local_158);
    local_38._0_4_ = local_88;
    local_38._4_4_ = local_84;
    local_30 = local_80;
    uVar20 = FUN_0160f810(&local_158,&local_228);
    pppppppuVar11 = local_150;
    pppppppuVar16 = local_14c;
    pppppppuVar13 = local_154;
    if (local_158 != (undefined4 *******)&DAT_80000000) {
      uVar12 = 0xf;
      pppppppuVar14 = local_158;
      pppppppuVar13 = local_14c;
      pppppppuVar16 = local_154;
      goto LAB_0163f1c0;
    }
    goto LAB_0163f31c;
  case 0xd:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_TXQLEN value",0x19);
      uVar10 = extraout_r1_18;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x1f;
    break;
  case 0xe:
    if ((ulonglong)auVar18 < 0x2000000000) {
      local_74 = FUN_012fd02c;
      local_7c = (undefined4 *******)FUN_012fd02c;
      local_80 = (undefined4 *******)&local_58;
      local_88 = (undefined4 *******)local_48;
      local_84 = (undefined4 *******)&LAB_018a13b8;
      local_58._0_4_ = (undefined4 *******)0x20;
      local_48._0_4_ = "MapBuffer";
      local_78 = &local_68;
      local_48._4_4_ = 9;
      local_68._0_4_ = pppppppuVar11;
      FUN_00664898(local_38,&DAT_005ab249,&local_88);
      if ((undefined1 *)local_38._0_4_ == &DAT_80000000) goto LAB_0163d72c;
      unique0x10000b23 = CONCAT44(local_30,local_38._4_4_);
    }
    else {
LAB_0163d72c:
      local_38._0_4_ = &DAT_80000000;
      unique0x10001cf3 = (ulonglong)auVar18;
    }
    local_38._4_4_ = &LAB_0141634c;
    local_48._0_4_ = local_38._0_4_;
    local_38._0_4_ = &local_58;
    local_58 = (ulonglong)auVar18;
    FUN_00664898(&local_88,&DAT_00591cef,local_38);
    FUN_0160f56c(local_38,local_48,&local_88);
    pppppppuVar11 = (undefined4 *******)local_38._0_4_;
    pppppppuVar16 = (undefined4 *******)local_38._4_4_;
    pppppppuVar14 = local_30;
    if ((undefined1 *)local_38._0_4_ != &DAT_80000000) {
LAB_0163f734:
      param_1[1] = pppppppuVar11;
      param_1[2] = pppppppuVar16;
      param_1[3] = pppppppuVar14;
      *(undefined1 *)param_1 = 0x36;
      return;
    }
    FUN_0164210c(&local_158);
    local_38._4_4_ = &LAB_0141634c;
    local_38._0_4_ = local_48;
    local_48 = auVar18;
    FUN_00664898(&local_88,&DAT_00591cef,local_38);
    pppppppuVar14 = &local_158;
    FUN_0160f798(&local_228,pppppppuVar14,&local_88);
    if (local_228 == (undefined4 *******)&DAT_00000001) {
      param_1[1] = local_224;
      param_1[2] = local_220;
      param_1[3] = local_21c;
      *(undefined1 *)param_1 = 0x36;
      return;
    }
    uVar20 = CONCAT44(local_214,&local_214);
    local_158 = local_214;
    local_154 = pppppppuStack_210;
    local_150 = pppppppuStack_20c;
    local_14c = pppppppuStack_208;
    pppppppuStack_148 = (undefined4 *******)uStack_204;
    uVar12 = 0x31;
    pppppppuVar11 = local_21c;
    pppppppuVar13 = local_218;
    pppppppuVar16 = local_220;
    goto LAB_0163f548;
  case 0x10:
    FUN_0160f290(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_OPERSTATE value",0x1c);
    }
    puVar7 = (undefined1 *)((uint)local_84 & 0xff);
    if (local_88 != (undefined4 *******)&DAT_80000000) {
LAB_0163ea0c:
      param_1[3] = local_80;
      *(uint *)((int)param_1 + 9) = CONCAT13(local_80._0_1_,local_84._1_3_);
      *(undefined1 *)(param_1 + 2) = local_84._0_1_;
      param_1[1] = local_88;
LAB_0163edb8:
      *(undefined1 *)param_1 = 0x36;
      return;
    }
    puVar8 = puVar7;
    if (&DAT_00000006 < puVar7) {
      puVar8 = &DAT_00000007;
    }
    uVar12 = 0x2e;
    goto LAB_0163ea08;
  case 0x11:
    FUN_0160f290(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_LINKMODE value",0x1b);
    }
    puVar7 = (undefined1 *)((uint)local_84 & 0xff);
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163ea0c;
    puVar8 = puVar7;
    if ((undefined1 *)0x2 < puVar7) {
      puVar8 = &DAT_00000003;
    }
    uVar12 = 0x19;
LAB_0163ea08:
    uVar20 = CONCAT44(puVar8,puVar7);
    pppppppuVar14 = &local_228;
    goto LAB_0163f1c0;
  case 0x12:
    local_58 = FUN_01623bf0(pppppppuVar13,pppppppuVar16);
    FUN_01624310(local_38,&local_58);
    if ((undefined1 *)local_38._0_4_ == &DAT_80000000) {
      local_48._0_4_ = local_38._0_4_;
      local_48._4_4_ = local_38._4_4_;
      local_40 = local_30;
    }
    else {
      local_88 = (undefined4 *******)local_38._0_4_;
      local_84 = (undefined4 *******)local_38._4_4_;
      local_80 = local_30;
      FUN_016403ac(local_48,&local_88,"invalid IFLA_LINKINFO value",0x1b);
    }
    if ((undefined1 *)local_48._0_4_ != &DAT_80000000) {
      param_1[1] = (undefined4 ******)local_48._0_4_;
      param_1[2] = (undefined4 ******)local_48._4_4_;
LAB_0163f628:
      param_1[3] = local_40;
      goto LAB_0163f834;
    }
    local_68._0_4_ = (undefined4 *******)local_48._4_4_;
    FUN_0161b11c(&local_158,&local_68);
    uVar20 = CONCAT44(local_158,local_158);
    if (((uint)local_158 & 1) == 0) {
      local_228 = local_158;
      local_224 = local_154;
      local_220 = local_150;
      local_21c = local_14c;
      if (((uint)local_158 & 1) == 0) {
        uVar12 = 0xc;
        pppppppuVar14 = local_154;
        pppppppuVar11 = local_14c;
        pppppppuVar13 = param_1;
        pppppppuVar16 = local_150;
        goto LAB_0163f1c0;
      }
    }
    else {
      puVar4 = (undefined4 *)((uint)&local_158 | 4);
      local_88 = (undefined4 *******)*puVar4;
      local_84 = (undefined4 *******)puVar4[1];
      local_80 = (undefined4 *******)puVar4[2];
      pcVar9 = "invalid IFLA_LINKINFO value";
      uVar3 = (uint)&local_228 | 4;
      uVar10 = 0x1b;
LAB_0163ed08:
      FUN_016403ac(uVar3,&local_88,pcVar9,uVar10);
    }
LAB_0163f828:
    param_1[1] = local_224;
    param_1[2] = local_220;
    goto LAB_0163f830;
  case 0x13:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_NET_NS_PID value",0x1d);
      uVar10 = extraout_r1_14;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x20;
    break;
  case 0x14:
    FUN_0160ef98(&local_158,uVar10,pppppppuVar11);
    uVar20 = CONCAT44(local_158,local_158);
    if (((uint)local_158 & 1) != 0) {
      puVar4 = (undefined4 *)((uint)&local_158 | 4);
      local_88 = (undefined4 *******)*puVar4;
      local_84 = (undefined4 *******)puVar4[1];
      local_80 = (undefined4 *******)puVar4[2];
      pcVar9 = "invalid IFLA_IFALIAS value";
      uVar3 = (uint)&local_228 | 4;
      uVar10 = 0x1a;
      goto LAB_0163f174;
    }
    local_228 = local_158;
    local_224 = local_154;
    local_220 = local_150;
    local_21c = local_14c;
    if (((uint)local_158 & 1) == 0) {
      uVar12 = 0x17;
      pppppppuVar14 = local_154;
      pppppppuVar11 = local_14c;
      pppppppuVar16 = local_150;
      goto LAB_0163f1c0;
    }
    goto LAB_0163f184;
  case 0x15:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_NUM_VF value",0x19);
      uVar10 = extraout_r1_19;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x21;
    break;
  case 0x16:
    uVar12 = 0;
    if (pppppppuVar11 == (undefined4 *******)0x0) {
      pppppppuVar16 = (undefined4 *******)&SUB_00000004;
      pppppppuVar11 = (undefined4 *******)0x0;
      pppppppuVar14 = (undefined4 *******)0x0;
      goto LAB_0163f1c0;
    }
    FUN_016238f4(&local_88,uVar10,pppppppuVar11);
    if (local_88 != (undefined4 *******)&DAT_80000000) {
      unique0x10001d3b = CONCAT44(local_80,local_84);
    }
    pppppppuVar13 = (undefined4 *******)local_38._4_4_;
    local_48._0_4_ = &local_58;
    local_38._0_4_ = local_88;
    local_48._4_4_ = &LAB_0141634c;
    local_58 = (ulonglong)auVar18;
    FUN_00664898(&local_88,&DAT_005a41f0,local_48);
    FUN_0160f56c(local_48,local_38,&local_88);
    pppppppuVar11 = (undefined4 *******)local_48._0_4_;
    pppppppuVar16 = (undefined4 *******)local_48._4_4_;
    pppppppuVar14 = local_40;
    if ((undefined1 *)local_48._0_4_ != &DAT_80000000) goto LAB_0163f734;
    FUN_01640770(&local_158);
    local_38._4_4_ = &LAB_0141634c;
    local_38._0_4_ = local_48;
    local_48 = auVar18;
    FUN_00664898(&local_88,&DAT_005a41f0,local_38);
    FUN_0160f5cc(&local_228,&local_158,&local_88);
    uVar20 = CONCAT44(extraout_r1_27,local_228);
    pppppppuVar14 = local_224;
    pppppppuVar11 = local_21c;
    pppppppuVar16 = local_220;
    if (local_228 != (undefined4 *******)&DAT_00000001) goto LAB_0163f1c0;
    param_1[1] = local_224;
    param_1[2] = local_220;
    param_1[3] = local_21c;
    goto LAB_0163edb8;
  case 0x17:
    FUN_0161d058(local_48,uVar10,pppppppuVar11,200,"IFLA_STATS64",0xc);
    FUN_016290c8(&local_158,local_48._4_4_,local_40);
    local_38._4_4_ = &LAB_0065eeb8;
    local_38._0_4_ = local_48;
    FUN_01a8da38(&local_88,&DAT_005a02f9,local_38);
    local_38._0_4_ = local_88;
    local_38._4_4_ = local_84;
    local_30 = local_80;
    pppppppuVar14 = &local_228;
    FUN_0160f8f0(pppppppuVar14,&local_158,local_38);
    pppppppuVar11 = local_21c;
    pppppppuVar16 = local_220;
    if (local_228 != (undefined4 *******)0x0) {
      param_1[1] = local_224;
      param_1[2] = local_220;
      param_1[3] = local_21c;
      *(undefined1 *)param_1 = 0x36;
      pppppppuVar13 = (undefined4 *******)local_48._4_4_;
      goto LAB_0163dc00;
    }
    FUN_01bed4e2(&local_158,&local_214,0xbc);
    uVar20 = FUN_0134bd64(local_48._0_4_,local_48._4_4_);
    uVar12 = 0x30;
    pppppppuVar13 = local_218;
LAB_0163f548:
    goto LAB_0163f1c0;
  case 0x18:
    FUN_016238f4(&local_88,uVar10,pppppppuVar11);
    if (local_88 != (undefined4 *******)&DAT_80000000) {
      unique0x10001cfb = CONCAT44(local_80,local_84);
    }
    local_48._0_4_ = &local_58;
    local_38._0_4_ = local_88;
    pppppppuVar13 = (undefined4 *******)&LAB_0141634c;
    local_48._4_4_ = &LAB_0141634c;
    local_58 = (ulonglong)auVar18;
    FUN_00664898(&local_88,&DAT_00582ea5,local_48);
    FUN_0160f56c(local_48,local_38,&local_88);
    pppppppuVar11 = (undefined4 *******)local_48._0_4_;
    pppppppuVar16 = (undefined4 *******)local_48._4_4_;
    pppppppuVar14 = local_40;
    if ((undefined1 *)local_48._0_4_ != &DAT_80000000) goto LAB_0163f734;
    FUN_01633ea4(&local_158);
    local_38._4_4_ = &LAB_0141634c;
    local_38._0_4_ = local_48;
    local_48 = auVar18;
    FUN_00664898(&local_88,&DAT_00582ea5,local_38);
    FUN_0160f5cc(&local_228,&local_158,&local_88);
    uVar20 = CONCAT44(extraout_r1_10,local_228);
    if (local_228 != (undefined4 *******)&DAT_00000001) {
      uVar12 = 1;
      pppppppuVar14 = local_224;
      pppppppuVar11 = local_21c;
      pppppppuVar16 = local_220;
      goto LAB_0163f1c0;
    }
    goto LAB_0163f184;
  case 0x19:
    FUN_016238f4(&local_88,uVar10,pppppppuVar11);
    if (local_88 != (undefined4 *******)&DAT_80000000) {
      unique0x10001d5b = CONCAT44(local_80,local_84);
    }
    local_48._0_4_ = &local_58;
    local_38._0_4_ = local_88;
    pppppppuVar13 = (undefined4 *******)&LAB_0141634c;
    local_48._4_4_ = &LAB_0141634c;
    local_58 = (ulonglong)auVar18;
    FUN_00664898(&local_88,&DAT_005a561b,local_48);
    FUN_0160f56c(local_48,local_38,&local_88);
    pppppppuVar11 = (undefined4 *******)local_48._0_4_;
    pppppppuVar16 = (undefined4 *******)local_48._4_4_;
    pppppppuVar14 = local_40;
    if ((undefined1 *)local_48._0_4_ != &DAT_80000000) goto LAB_0163f734;
    FUN_01633be4(&local_158);
    local_38._4_4_ = &LAB_0141634c;
    local_38._0_4_ = local_48;
    local_48 = auVar18;
    FUN_00664898(&local_88,&DAT_005a561b,local_38);
    FUN_0160f5cc(&local_228,&local_158,&local_88);
    uVar20 = CONCAT44(extraout_r1_21,local_228);
    if (local_228 != (undefined4 *******)&DAT_00000001) {
      uVar12 = 2;
      pppppppuVar14 = local_224;
      pppppppuVar11 = local_21c;
      pppppppuVar16 = local_220;
      goto LAB_0163f1c0;
    }
    goto LAB_0163f184;
  case 0x1a:
    if (param_3 == '\0') {
      local_38 = (undefined1  [8])FUN_01623bf0(pppppppuVar13,pppppppuVar16);
      FUN_0161def0(&local_158,local_38);
      uVar20 = CONCAT44(local_158,local_158);
      if (((uint)local_158 & 1) != 0) {
        puVar4 = (undefined4 *)((uint)&local_158 | 4);
        local_88 = (undefined4 *******)*puVar4;
        local_84 = (undefined4 *******)puVar4[1];
        local_80 = (undefined4 *******)puVar4[2];
        pcVar9 = "invalid IFLA_AF_SPEC value for AF_UNSPEC";
        uVar3 = (uint)&local_228 | 4;
        uVar10 = 0x28;
        goto LAB_0163f174;
      }
      local_228 = local_158;
      local_224 = local_154;
      local_220 = local_150;
      local_21c = local_14c;
      if (((uint)local_158 & 1) == 0) {
        uVar12 = 0x32;
        pppppppuVar14 = local_154;
        pppppppuVar11 = local_14c;
        pppppppuVar16 = local_150;
        goto LAB_0163f1c0;
      }
      goto LAB_0163f184;
    }
    if (param_3 == '\b') {
      local_58 = FUN_01623bf0(pppppppuVar13,pppppppuVar16);
      FUN_01624310(local_38,&local_58);
      if ((undefined1 *)local_38._0_4_ == &DAT_80000000) {
        local_48._0_4_ = local_38._0_4_;
        local_48._4_4_ = local_38._4_4_;
        local_40 = local_30;
      }
      else {
        local_88 = (undefined4 *******)local_38._0_4_;
        local_84 = (undefined4 *******)local_38._4_4_;
        local_80 = local_30;
        FUN_016403ac(local_48,&local_88,"invalid IFLA_AF_SPEC value for AF_BRIDGE",0x28);
      }
      if ((undefined1 *)local_48._0_4_ == &DAT_80000000) {
        FUN_016325d4(&local_158);
        uVar20 = CONCAT44(local_158,local_158);
        if (((uint)local_158 & 1) != 0) {
          puVar4 = (undefined4 *)((uint)&local_158 | 4);
          local_88 = (undefined4 *******)*puVar4;
          local_84 = (undefined4 *******)puVar4[1];
          local_80 = (undefined4 *******)puVar4[2];
          pcVar9 = "invalid IFLA_AF_SPEC value for AF_BRIDGE";
          uVar3 = (uint)&local_228 | 4;
          uVar10 = 0x28;
          goto LAB_0163ed08;
        }
        local_228 = local_158;
        local_224 = local_154;
        local_220 = local_150;
        local_21c = local_14c;
        if (((uint)local_158 & 1) == 0) {
          uVar12 = 0x33;
          pppppppuVar14 = local_154;
          pppppppuVar11 = local_14c;
          pppppppuVar13 = param_1;
          pppppppuVar16 = local_150;
          goto LAB_0163f1c0;
        }
        goto LAB_0163f828;
      }
      param_1[1] = (undefined4 ******)local_48._0_4_;
      param_1[2] = (undefined4 ******)local_48._4_4_;
      goto LAB_0163f628;
    }
    uVar20 = FUN_0163fb24(&local_158,uVar10,pppppppuVar11);
    uVar12 = 0x34;
    goto LAB_0163f1b8;
  case 0x1b:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_GROUP value",0x18);
      uVar10 = extraout_r1_09;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x22;
    break;
  case 0x1c:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_NET_NS_FD value",0x1c);
      uVar10 = extraout_r1_07;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x23;
    break;
  case 0x1d:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_EXT_MASK value",0x1b);
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) {
      pppppppuVar11 = local_88;
      pppppppuVar16 = local_84;
      pppppppuVar14 = local_80;
      goto LAB_0163f734;
    }
    uVar20 = FUN_01623664(local_38);
    uVar12 = 0x24;
    pppppppuVar14 = (undefined4 *******)local_38._0_4_;
    pppppppuVar11 = local_30;
    pppppppuVar16 = (undefined4 *******)local_38._4_4_;
    goto LAB_0163f1c0;
  case 0x1e:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_PROMISCUITY value",0x1e);
      uVar10 = extraout_r1_06;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x25;
    break;
  case 0x1f:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,&DAT_0056c8e8,0x20);
      uVar10 = extraout_r1_23;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x26;
    break;
  case 0x20:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,&DAT_0056c568,0x20);
      uVar10 = extraout_r1_22;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x27;
    break;
  case 0x21:
    FUN_0160f290(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_CARRIER value",0x1a);
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) {
LAB_0163eda0:
      param_1[3] = local_80;
      *(uint *)((int)param_1 + 9) = CONCAT13(local_80._0_1_,local_84._1_3_);
      *(undefined1 *)(param_1 + 2) = local_84._0_1_;
      param_1[1] = local_88;
      goto LAB_0163edb8;
    }
    uVar12 = 0x1a;
    goto LAB_0163ed9c;
  case 0x22:
    FUN_01bed93e(&local_88,0,0x20);
    FUN_01bed4e2(&local_88,uVar10,(uint)pppppppuVar11 & 0x1f);
    local_154 = local_88;
    local_150 = local_84;
    local_14c = local_80;
    pppppppuStack_148 = local_7c;
    local_144 = local_78;
    pcStack_140 = local_74;
    uStack_13c = uStack_70;
    uStack_138 = uStack_6c;
    local_38._0_4_ = &local_278;
    local_158 = (undefined4 *******)0x0;
    local_38._4_4_ = &LAB_0141634c;
    local_134 = (uint)pppppppuVar11 & 0x1f;
    FUN_01a8da38(&local_88,&DAT_0057cd8c,local_38);
    local_38._0_4_ = local_88;
    local_38._4_4_ = local_84;
    local_30 = local_80;
    FUN_0160f720(&local_228,&local_158,local_38);
    if (local_228 != (undefined4 *******)&DAT_00000001) {
      uVar20 = CONCAT44(local_214,&local_214);
      local_158 = local_214;
      local_154 = pppppppuStack_210;
      local_150 = pppppppuStack_20c;
      local_14c = pppppppuStack_208;
      pppppppuStack_148 = (undefined4 *******)uStack_204;
      uVar12 = 3;
      pppppppuVar14 = local_224;
      pppppppuVar11 = local_21c;
      pppppppuVar13 = local_218;
      pppppppuVar16 = local_220;
      goto LAB_0163f1c0;
    }
    goto LAB_0163f184;
  case 0x23:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_CARRIER_CHANGES value",0x22);
      uVar10 = extraout_r1_15;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x28;
    break;
  case 0x24:
    FUN_01bed93e(&local_88,0,0x20);
    FUN_01bed4e2(&local_88,uVar10,(uint)pppppppuVar11 & 0x1f);
    local_154 = local_88;
    local_150 = local_84;
    local_14c = local_80;
    pppppppuStack_148 = local_7c;
    local_144 = local_78;
    pcStack_140 = local_74;
    uStack_13c = uStack_70;
    uStack_138 = uStack_6c;
    local_38._0_4_ = &local_278;
    local_158 = (undefined4 *******)0x0;
    local_38._4_4_ = &LAB_0141634c;
    local_134 = (uint)pppppppuVar11 & 0x1f;
    FUN_01a8da38(&local_88,&DAT_005a5842,local_38);
    local_38._0_4_ = local_88;
    local_38._4_4_ = local_84;
    local_30 = local_80;
    FUN_0160f720(&local_228,&local_158,local_38);
    if (local_228 != (undefined4 *******)&DAT_00000001) {
      uVar20 = CONCAT44(local_214,&local_214);
      local_158 = local_214;
      local_154 = pppppppuStack_210;
      local_150 = pppppppuStack_20c;
      local_14c = pppppppuStack_208;
      pppppppuStack_148 = (undefined4 *******)uStack_204;
      uVar12 = 4;
      pppppppuVar14 = local_224;
      pppppppuVar11 = local_21c;
      pppppppuVar13 = local_218;
      pppppppuVar16 = local_220;
      goto LAB_0163f1c0;
    }
    goto LAB_0163f184;
  case 0x25:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_LINK_NETNSID value",0x1f);
      uVar10 = extraout_r1_25;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x2d;
    break;
  case 0x26:
    FUN_0160ef98(&local_158,uVar10,pppppppuVar11);
    uVar20 = CONCAT44(local_158,local_158);
    if (((uint)local_158 & 1) != 0) {
      puVar4 = (undefined4 *)((uint)&local_158 | 4);
      local_88 = (undefined4 *******)*puVar4;
      local_84 = (undefined4 *******)puVar4[1];
      local_80 = (undefined4 *******)puVar4[2];
      pcVar9 = "invalid IFLA_PHYS_PORT_NAME value";
      uVar3 = (uint)&local_228 | 4;
      uVar10 = 0x21;
      goto LAB_0163f174;
    }
    local_228 = local_158;
    local_224 = local_154;
    local_220 = local_150;
    local_21c = local_14c;
    if (((uint)local_158 & 1) == 0) {
      uVar12 = 0x18;
      pppppppuVar14 = local_154;
      pppppppuVar11 = local_14c;
      pppppppuVar16 = local_150;
      goto LAB_0163f1c0;
    }
LAB_0163f184:
    param_1[1] = local_224;
    param_1[2] = local_220;
    param_1[3] = local_21c;
LAB_0163f194:
    *(undefined1 *)param_1 = 0x36;
    return;
  case 0x27:
    FUN_0160f290(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_PROTO_DOWN value",0x1d);
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163eda0;
    uVar12 = 0x1b;
LAB_0163ed9c:
    uVar20 = (ulonglong)CONCAT14(local_84._0_1_,local_88);
    pppppppuVar14 = &local_228;
    goto LAB_0163f1c0;
  case 0x28:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_GSO_MAX_SEGS value",0x1f);
      uVar10 = extraout_r1_24;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x29;
    break;
  case 0x29:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_GSO_MAX_SIZE value",0x1f);
      uVar10 = extraout_r1_04;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x2a;
    break;
  case 0x2b:
    FUN_016238f4(&local_158,uVar10,pppppppuVar11);
    if (local_158 == (undefined4 *******)&DAT_80000000) {
LAB_0163ecc0:
      FUN_0161d7e4(&local_158,SUB84(auVar18,0),(int)((ulonglong)auVar18 >> 0x20));
      uVar20 = CONCAT44(local_158,local_158);
      if (((uint)local_158 & 1) != 0) {
        puVar4 = (undefined4 *)((uint)&local_158 | 4);
        local_88 = (undefined4 *******)*puVar4;
        local_84 = (undefined4 *******)puVar4[1];
        local_80 = (undefined4 *******)puVar4[2];
        pcVar9 = 
        "invalid IFLA_XDP valueUnspecLocalIpxAppletalkNetromBridgeAtmpvcX25Inet6DecnetNetbeuiRouteNetlinkPacketAshEconetAtmsvcRdsSnaPppoxWanpipeLlcIbCanBluetoothRxrpcPhonetIeee802154AlgNfcVsockKcmQipcrtrSmcXdp"
        ;
        uVar3 = (uint)&local_228 | 4;
        uVar10 = 0x16;
        goto LAB_0163ed08;
      }
      local_228 = local_158;
      local_224 = local_154;
      local_220 = local_150;
      local_21c = local_14c;
      if (((uint)local_158 & 1) == 0) {
        uVar12 = 5;
        pppppppuVar14 = local_154;
        pppppppuVar11 = local_14c;
        pppppppuVar13 = param_1;
        pppppppuVar16 = local_150;
        goto LAB_0163f1c0;
      }
      goto LAB_0163f828;
    }
    FUN_016403ac(&local_228,&local_158,
                 "invalid IFLA_XDP valueUnspecLocalIpxAppletalkNetromBridgeAtmpvcX25Inet6DecnetNetbeuiRouteNetlinkPacketAshEconetAtmsvcRdsSnaPppoxWanpipeLlcIbCanBluetoothRxrpcPhonetIeee802154AlgNfcVsockKcmQipcrtrSmcXdp"
                 ,0x16);
    auVar18 = (undefined1  [8])CONCAT44(local_220,local_224);
    if (local_228 == (undefined4 *******)&DAT_80000000) goto LAB_0163ecc0;
    param_1[1] = local_228;
    param_1[2] = local_224;
    local_21c = local_220;
LAB_0163f830:
    param_1[3] = local_21c;
LAB_0163f834:
    *(undefined1 *)param_1 = 0x36;
    return;
  case 0x2c:
    FUN_0161f9e8(&local_88,uVar10,pppppppuVar11);
    local_224 = (undefined4 *******)&LAB_0141634c;
    local_228 = (undefined4 *******)&local_278;
    pppppppuVar11 = &local_158;
    FUN_01a8da38(pppppppuVar11,&DAT_0059fb42,&local_228);
    local_228 = local_158;
    local_224 = local_154;
    local_220 = local_150;
    FUN_0160f56c(&local_158,&local_88,&local_228);
    if (local_158 == (undefined4 *******)&DAT_80000000) {
      uVar12 = 6;
      uVar20 = (ulonglong)extraout_r1 << 0x20;
      pppppppuVar14 = local_154;
      pppppppuVar16 = local_150;
      goto LAB_0163f1c0;
    }
    param_1[1] = local_158;
    param_1[2] = local_154;
    param_1[3] = local_150;
    goto LAB_0163f194;
  case 0x2d:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_NEW_NETNSID value",0x1e);
      uVar10 = extraout_r1_03;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 7;
    break;
  case 0x2e:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_IF_NETNSID value",0x1d);
      uVar10 = extraout_r1_08;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 8;
    break;
  case 0x2f:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_CARRIER_UP_COUNT value",0x23);
      uVar10 = extraout_r1_11;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 9;
    break;
  case 0x30:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_CARRIER_DOWN_COUNT value",0x25);
      uVar10 = extraout_r1_20;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 10;
    break;
  case 0x31:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_NEW_IFINDEX value",0x1e);
      uVar10 = extraout_r1_02;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0xb;
    break;
  case 0x32:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_MIN_MTU value",0x1a);
      uVar10 = extraout_r1_05;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x2b;
    break;
  case 0x33:
    FUN_0160f300(&local_228,uVar10,pppppppuVar11);
    if (local_228 == (undefined4 *******)&DAT_80000000) {
      local_88 = local_228;
      local_84 = local_224;
      local_80 = local_220;
      uVar10 = 0;
    }
    else {
      local_158 = local_228;
      local_154 = local_224;
      local_150 = local_220;
      FUN_016403ac(&local_88,&local_158,"invalid IFLA_MAX_MTU value",0x1a);
      uVar10 = extraout_r1_13;
    }
    if (local_88 != (undefined4 *******)&DAT_80000000) goto LAB_0163f020;
    uVar12 = 0x2c;
    break;
  case 0x34:
    local_26c = (undefined4 *******)&SUB_00000004;
    local_284 = (undefined4 *******)&SUB_00000004;
    puVar4 = (undefined4 *)((uint)&local_228 | 4);
    puVar5 = (undefined4 *)((uint)&local_158 | 4);
    local_268 = (undefined4 *******)0x0;
    local_270 = (undefined4 *******)0x0;
    local_25c = 0;
    while( true ) {
      pppppppuVar11 = local_268;
      local_264 = (ulonglong)auVar18;
      FUN_0162385c(&local_258,&local_264);
      if (local_258 == (undefined4 *******)&DAT_80000001) break;
      if (local_258 == (undefined4 *******)&DAT_80000000) {
        local_228 = local_258;
        local_224 = pppppppuStack_254;
        local_220 = pppppppuStack_250;
      }
      else {
        local_158 = local_258;
        local_154 = pppppppuStack_254;
        local_150 = pppppppuStack_250;
        FUN_016403ac(&local_228,&local_158,"invalid IFLA_PROP_LIST value",0x1c);
      }
      pppppppuVar13 = local_220;
      pppppppuVar16 = local_224;
      if (local_228 != (undefined4 *******)&DAT_80000000) {
        param_1[1] = local_228;
        param_1[2] = local_224;
        local_7c = local_220;
        goto LAB_0163f7ec;
      }
      uVar19 = FUN_01623bf0(local_224,local_220);
      uVar1 = FUN_01623bc0(pppppppuVar16,pppppppuVar13);
      if (uVar1 == 0x35) {
        FUN_0160ef98(&local_158,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
        if (((uint)local_158 & 1) == 0) {
          local_228 = local_158;
          local_224 = local_154;
          local_220 = local_150;
          local_21c = local_14c;
          local_48._0_4_ = *puVar4;
          local_48._4_4_ = puVar4[1];
          local_40 = (undefined4 *******)puVar4[2];
          if (((uint)local_158 & 1) == 0) {
            pppppppuVar16 = (undefined4 *******)local_48._0_4_;
            pppppppuVar13 = (undefined4 *******)local_48._4_4_;
            pppppppuVar14 = local_40;
            pppppppuVar15 = (undefined4 *******)&DAT_80000000;
            goto LAB_0163e1ac;
          }
        }
        else {
          local_38._0_4_ = *puVar5;
          local_38._4_4_ = puVar5[1];
          local_30 = (undefined4 *******)puVar5[2];
          FUN_016403ac(puVar4,local_38,"invalid IFLA_ALT_IFNAME value",0x1d);
          local_48._0_4_ = *puVar4;
          local_48._4_4_ = puVar4[1];
          local_40 = (undefined4 *******)puVar4[2];
        }
        local_248 = (undefined4 *******)local_48._0_4_;
        pppppppuStack_244 = (undefined4 *******)local_48._4_4_;
        pppppppuStack_240 = local_40;
LAB_0163f7bc:
        local_158 = local_248;
        local_154 = pppppppuStack_244;
        local_150 = pppppppuStack_240;
        FUN_016403ac(&local_84,&local_158,"invalid IFLA_PROP_LIST value",0x1c);
        param_1[1] = local_84;
        param_1[2] = local_80;
LAB_0163f7ec:
        param_1[3] = local_7c;
        *(undefined1 *)param_1 = 0x36;
        FUN_016311d8(&local_270);
        return;
      }
      local_5a = uVar1;
      FUN_01623ae4(&local_158,pppppppuVar16,pppppppuVar13);
      local_48._4_4_ = FUN_012fcf18;
      local_48._0_4_ = &local_5a;
      FUN_00664898(local_38,&DAT_005b65d8,local_48);
      local_48._0_4_ = local_38._0_4_;
      local_48._4_4_ = local_38._4_4_;
      local_40 = local_30;
      FUN_0160f810(&local_228,&local_158,local_48);
      local_248 = local_224;
      pppppppuStack_244 = local_220;
      pppppppuStack_240 = local_21c;
      local_58._0_4_ = local_248;
      local_58._4_4_ = pppppppuStack_244;
      local_50 = pppppppuStack_240;
      if (local_228 == (undefined4 *******)&DAT_80000000) goto LAB_0163f7bc;
      pppppppuVar16 = local_224;
      pppppppuVar13 = local_220;
      pppppppuVar14 = local_21c;
      pppppppuVar15 = local_228;
LAB_0163e1ac:
      local_248 = pppppppuVar16;
      pppppppuStack_244 = pppppppuVar13;
      pppppppuStack_240 = pppppppuVar14;
      local_84 = pppppppuVar16;
      local_80 = pppppppuVar13;
      local_7c = pppppppuVar14;
      local_68._0_4_ = pppppppuVar16;
      local_68._4_4_ = pppppppuVar13;
      pppppppuStack_60 = pppppppuVar14;
      auVar18 = (undefined1  [8])local_264;
      if (pppppppuVar11 == local_270) {
        FUN_018fa978(&local_270);
        local_284 = local_26c;
        auVar18 = (undefined1  [8])local_264;
      }
      pppppppuVar6 = local_284 + (int)pppppppuVar11 * 4;
      *pppppppuVar6 = pppppppuVar15;
      local_268 = (undefined4 *******)((int)pppppppuVar11 + 1);
      pppppppuVar6[1] = pppppppuVar16;
      pppppppuVar6[2] = pppppppuVar13;
      pppppppuVar6[3] = pppppppuVar14;
    }
    uVar12 = 0x10;
    uVar10 = extraout_r1_01;
    pppppppuVar14 = local_270;
    pppppppuVar13 = param_1;
    pppppppuVar16 = local_26c;
    goto LAB_0163f40c;
  case 0x36:
    uVar20 = FUN_0163fb24(&local_158,uVar10,pppppppuVar11);
    uVar12 = 0x14;
LAB_0163f1b8:
    pppppppuVar14 = local_158;
    pppppppuVar11 = local_150;
    pppppppuVar16 = local_154;
    goto LAB_0163f1c0;
  case 0x37:
    local_284 = (undefined4 *******)&SUB_00000004;
    iVar17 = 8;
    local_50 = (undefined4 *******)0x0;
    local_58._4_4_ = (undefined4 *******)&SUB_00000004;
    local_58._0_4_ = (undefined4 *******)0x0;
    local_40 = (undefined4 *******)0x0;
    while( true ) {
      pppppppuVar11 = local_50;
      local_48 = auVar18;
      FUN_0162385c(&local_238,local_48);
      if (local_238 == (undefined4 *******)&DAT_80000001) break;
      if (local_238 == (undefined4 *******)&DAT_80000000) {
        local_228 = local_238;
        local_224 = pppppppuStack_234;
        local_220 = pppppppuStack_230;
      }
      else {
        local_158 = local_238;
        local_154 = pppppppuStack_234;
        local_150 = pppppppuStack_230;
        FUN_016403ac(&local_228,&local_158,"invalid IFLA_PROTO_DOWN_REASON value",0x24);
      }
      pppppppuVar13 = local_220;
      pppppppuVar16 = local_224;
      if (local_228 != (undefined4 *******)&DAT_80000000) {
        param_1[1] = local_228;
        param_1[2] = local_224;
        param_1[3] = local_220;
        goto LAB_0163f568;
      }
      uVar19 = FUN_01623bf0(local_224,local_220);
      uVar10 = (undefined4)((ulonglong)uVar19 >> 0x20);
      local_68 = uVar19;
      sVar2 = FUN_01623bc0(pppppppuVar16,pppppppuVar13);
      if (sVar2 == 2) {
        FUN_0160f300(&local_88,(int)uVar19,uVar10);
        local_224 = (undefined4 *******)&LAB_0141634c;
        local_228 = (undefined4 *******)&local_68;
        FUN_00664898(&local_158,&DAT_005a9bc1,&local_228);
        local_228 = local_158;
        local_224 = local_154;
        local_220 = local_150;
        FUN_0160f56c(local_38,&local_88,&local_228);
        if ((undefined1 *)local_38._0_4_ != &DAT_80000000) {
LAB_0163f54c:
          local_7c = local_30;
          local_80 = (undefined4 *******)local_38._4_4_;
          local_84 = (undefined4 *******)local_38._0_4_;
LAB_0163f558:
          param_1[1] = local_84;
          param_1[2] = local_80;
          param_1[3] = local_7c;
LAB_0163f568:
          *(undefined1 *)param_1 = 0x36;
          FUN_0161a99c(&local_58);
          return;
        }
        pppppppuVar14 = (undefined4 *******)&DAT_80000000;
        pppppppuVar15 = (undefined4 *******)local_38._4_4_;
      }
      else if (sVar2 == 1) {
        FUN_0160f300(&local_88,(int)uVar19,uVar10);
        local_224 = (undefined4 *******)&LAB_0141634c;
        local_228 = (undefined4 *******)&local_68;
        FUN_00664898(&local_158,&DAT_005a9bc1,&local_228);
        local_228 = local_158;
        local_224 = local_154;
        local_220 = local_150;
        FUN_0160f56c(local_38,&local_88,&local_228);
        if ((undefined1 *)local_38._0_4_ != &DAT_80000000) goto LAB_0163f54c;
        pppppppuVar14 = (undefined4 *******)&DAT_80000001;
        pppppppuVar15 = (undefined4 *******)local_38._4_4_;
      }
      else {
        local_248 = (undefined4 *******)CONCAT22(local_248._2_2_,sVar2);
        FUN_01623ae4(&local_228,pppppppuVar16,pppppppuVar13);
        local_14c = (undefined4 *******)&LAB_0141634c;
        local_150 = (undefined4 *******)&local_68;
        local_154 = (undefined4 *******)FUN_012fcf18;
        local_158 = &local_248;
        FUN_00664898(local_38,&DAT_00585264,&local_158);
        local_158 = (undefined4 *******)local_38._0_4_;
        local_154 = (undefined4 *******)local_38._4_4_;
        local_150 = local_30;
        FUN_0160f810(&local_88,&local_228,&local_158);
        pppppppuVar16 = local_7c;
        pppppppuVar13 = local_80;
        pppppppuVar14 = local_88;
        pppppppuVar15 = local_84;
        if (local_88 == (undefined4 *******)&DAT_80000000) goto LAB_0163f558;
      }
      auVar18 = local_48;
      if (pppppppuVar11 == (undefined4 *******)local_58) {
        FUN_018fa978(&local_58);
        local_284 = local_58._4_4_;
        auVar18 = local_48;
      }
      local_284[(int)pppppppuVar11 * 4] = pppppppuVar14;
      local_50 = (undefined4 *******)((int)pppppppuVar11 + 1);
      (local_284 + (int)pppppppuVar11 * 4)[1] = pppppppuVar15;
      puVar4 = (undefined4 *)((int)local_284 + iVar17);
      *puVar4 = pppppppuVar13;
      iVar17 = iVar17 + 0x10;
      puVar4[1] = pppppppuVar16;
    }
    uVar12 = 0x11;
    uVar10 = extraout_r1_00;
    pppppppuVar14 = (undefined4 *******)local_58;
    pppppppuVar13 = &local_228;
    pppppppuVar16 = local_58._4_4_;
LAB_0163f40c:
    uVar20 = CONCAT44(uVar10,&DAT_80000001);
    goto LAB_0163f1c0;
  }
  uVar20 = CONCAT44(uVar10,local_88);
  pppppppuVar14 = local_84;
LAB_0163f1c0:
  param_1[1] = pppppppuVar14;
  param_1[2] = pppppppuVar16;
  *(char *)((int)param_1 + 2) = (char)uVar20;
  *(char *)((int)param_1 + 1) = (char)(uVar20 >> 0x20);
  param_1[3] = pppppppuVar11;
  param_1[4] = pppppppuVar13;
  *(undefined1 *)param_1 = uVar12;
  FUN_01bed4e2(param_1 + 5,&local_158,0xbc);
  return;
}

