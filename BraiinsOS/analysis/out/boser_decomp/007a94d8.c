// FUN_007a94d8 @ 007a94d8 size=3400 calls_out=39 calls_in=1
// strings: Should have switched to stored and unencrypted beforehand | Should have switched to stored and unencrypted beforehand

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007a94d8(undefined8 *param_1,uint *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  uint ***pppuVar8;
  uint ***pppuVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  char *pcVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint **ppuVar19;
  uint uVar20;
  int iVar21;
  int extraout_r2;
  undefined *puVar22;
  int extraout_r3;
  undefined2 uVar23;
  uint ***pppuVar24;
  uint **ppuVar25;
  uint **ppuVar26;
  undefined1 uVar27;
  uint ***pppuVar28;
  uint uVar29;
  uint *puVar30;
  undefined1 *puVar31;
  uint ***pppuVar32;
  uint uVar33;
  uint uVar34;
  uint ***pppuVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  bool bVar38;
  ulonglong uVar39;
  undefined8 uVar40;
  undefined8 local_11c0;
  uint ***local_11b8;
  undefined4 local_11b0;
  undefined4 uStack_11ac;
  undefined4 uStack_11a8;
  undefined1 auStack_11a4 [12];
  uint ***local_1198;
  undefined8 local_1194;
  undefined4 local_1188;
  undefined4 local_1184;
  undefined4 local_1180;
  undefined4 uStack_117c;
  undefined4 uStack_1178;
  undefined4 local_1174;
  undefined4 local_1170;
  undefined4 local_116c;
  undefined4 local_1168;
  undefined4 local_1164;
  undefined4 local_1158;
  undefined1 local_1154;
  uint **local_1150;
  uint **local_114c;
  uint local_1148;
  undefined4 local_1140;
  undefined4 uStack_113c;
  uint local_1138;
  undefined1 *local_1134;
  byte local_10a6;
  byte local_10a3;
  uint ***local_10a0;
  uint ***local_109c;
  uint ***local_1098;
  undefined4 uStack_1094;
  undefined4 uStack_1090;
  undefined4 uStack_108c;
  undefined2 local_1088;
  uint ***local_1080;
  uint ***pppuStack_107c;
  uint ***pppuStack_1078;
  undefined4 uStack_1074;
  undefined4 uStack_1070;
  undefined4 uStack_106c;
  undefined2 local_1068;
  uint ***local_1060;
  undefined8 local_105c;
  uint ***local_1054;
  undefined4 local_1050;
  undefined4 local_104c;
  undefined4 local_1040;
  undefined4 local_103c;
  undefined8 local_1038;
  int local_1030;
  int local_102c;
  undefined8 local_1028;
  undefined4 local_1020;
  undefined4 local_101c;
  undefined4 local_1018;
  undefined4 local_1014;
  undefined8 local_1010;
  undefined4 uStack_1008;
  uint **local_1000;
  uint **local_ffc;
  undefined4 local_ff8;
  undefined4 local_ff4;
  undefined4 local_fe8;
  undefined4 local_fe0;
  undefined4 local_fdc;
  undefined4 local_fd8;
  undefined4 local_fd4;
  undefined4 local_fd0;
  undefined2 local_fcc;
  undefined2 local_fca;
  undefined4 local_fc8;
  uint local_fc4;
  undefined2 local_fc0;
  undefined2 local_fbe;
  undefined2 local_fbc;
  undefined2 local_fba;
  byte local_fb8;
  undefined1 local_fb7;
  undefined1 local_fb6;
  byte local_fb5;
  undefined1 local_fb4;
  undefined1 local_fb3;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_40 [8];
  uint **local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  FUN_007acb9c(param_4);
  uVar23 = *(undefined2 *)(param_4 + 10);
  pppuVar28 = (uint ***)*param_4;
  pppuVar35 = (uint ***)param_4[1];
  uVar2 = *(undefined2 *)((int)param_4 + 0x2a);
  pppuVar24 = (uint ***)param_4[2];
  pppuVar32 = (uint ***)param_4[3];
  FUN_007b0660(&local_1060,uVar2,*param_2,param_2[1],uVar23,uVar2,pppuVar28,pppuVar35,pppuVar24,
               pppuVar32);
  pppuVar9 = local_105c._4_4_;
  pppuVar8 = (uint ***)local_105c;
  if (local_1060 != (uint ***)0x80000007) {
    *(uint ****)param_1 = local_1060;
    *(uint ****)((int)param_1 + 4) = (uint ***)local_105c;
    *(uint ****)(param_1 + 1) = local_105c._4_4_;
    return;
  }
  uVar16 = param_4[4];
  uVar17 = param_4[5];
  uVar18 = param_4[6];
  local_11b0 = param_4[7];
  uStack_11ac = param_4[8];
  uStack_11a8 = param_4[9];
  bVar10 = *(byte *)((int)param_4 + 0x32);
  bVar1 = *(byte *)((int)param_4 + 0x33);
  uVar3 = *(undefined2 *)((int)param_4 + 0x2e);
  uVar4 = *(undefined2 *)(param_4 + 0xb);
  uVar5 = *(ushort *)(param_4 + 0xc);
  uVar29 = (uint)uVar5;
  FUN_007aa418(&local_1060,param_2);
  if (local_1060 != (uint ***)0x80000007) {
    pppuVar24 = local_105c._4_4_;
    pppuVar28 = local_1060;
    pppuVar32 = (uint ***)local_105c;
LAB_007a962c:
    uVar40 = CONCAT44(pppuVar32,pppuVar28);
    goto LAB_007a9ef0;
  }
  bVar38 = *param_2 == 3 && param_2[1] == 0;
  if (*param_2 == 3 && param_2[1] == 0) {
    bVar38 = param_2[2] == 0;
  }
  if (bVar38) {
    local_105c._0_4_ = (uint ***)(param_2 + 4);
  }
  else {
    FUN_01af9864(&local_1060,"Should have switched to stored and unencrypted beforehand",0x39);
    if (((char)local_1060 != '\x04') && (((uint)local_1060 & 0xff) != 4)) {
      pppuVar24 = (uint ***)local_105c;
      pppuVar28 = (uint ***)&DAT_80000001;
      pppuVar32 = local_1060;
      goto LAB_007a962c;
    }
  }
  ppuVar19 = ((uint ***)local_105c)[2];
  ppuVar25 = ((uint ***)local_105c)[3];
  local_1194._4_4_ = 0;
  local_1194._0_4_ = &DAT_00000001;
  local_1198 = (uint ***)0x0;
  uVar40 = 1;
  if ((bVar10 & 1) != 0) {
    uStack_117c = 0xffffffff;
    uStack_1178 = 1;
    local_1180 = 0xffffffff;
    local_1174 = 0;
    local_1170 = 0xffffffff;
    local_116c = 0xffffffff;
    local_1168 = 0;
    local_1164 = 0;
    local_1184 = 0;
    local_1158 = 0x100001;
    local_1188 = 1;
    local_1154 = 1;
    local_105c = FUN_01afa214(&local_1188);
    local_1198 = (uint ***)((ulonglong)local_105c >> 0x20);
    local_1060 = local_1198;
    local_1194 = local_105c;
    FUN_019bb7e0(0,1);
    uVar40 = local_1194;
  }
  local_1148 = 0;
  local_1150 = (uint **)0x0;
  local_1054 = (uint ***)0x0;
  uVar36 = *(undefined4 *)(param_3 + 4);
  uVar37 = *(undefined4 *)(param_3 + 8);
  local_1060 = &local_1150;
  local_114c = (uint **)&DAT_00000001;
  local_105c._4_4_ = (uint ***)0x60000020;
  local_105c._0_4_ = (uint ***)&DAT_01c09730;
  local_1194 = uVar40;
  iVar11 = FUN_012fb940(&local_1060,uVar36,uVar37);
  uVar20 = local_1148;
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_10a0,&DAT_01c09748,&DAT_01d30334);
  }
  FUN_019bb7e0(local_1150,local_114c);
  uVar34 = local_1194._4_4_;
  uVar33 = (int)ppuVar19 + 0x1eU + uVar20;
  puVar31 = (undefined1 *)
            ((int)ppuVar25 +
            (uint)CARRY4((int)ppuVar19 + 0x1eU,uVar20) + (uint)((uint **)0xffffffe1 < ppuVar19));
  ppuVar26 = ppuVar25;
  if (1 < uVar29) {
    FUN_01bf0ff0(uVar33 + local_1194._4_4_,puVar31 + CARRY4(uVar33,local_1194._4_4_),uVar29,0);
    if (extraout_r2 == 0 && extraout_r3 == 0) goto LAB_007a980c;
    uVar20 = -extraout_r2;
    do {
      uVar20 = uVar29 + uVar20;
    } while (uVar20 < 6);
    if (uVar20 + uVar34 >> 0x10 != 0) goto LAB_007a980c;
    FUN_018a7af8(&local_1150,uVar20 - 4);
    ppuVar26 = local_114c;
    if (local_1148 == 0) {
      uVar37 = 0;
      uVar36 = 0;
      puVar22 = &DAT_01c096a0;
LAB_007aa228:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar37,uVar36,puVar22);
    }
    *(char *)local_114c = (char)uVar5;
    if (local_1148 == 1) {
      uVar37 = 1;
      puVar22 = &DAT_01c096b0;
      uVar36 = 1;
      goto LAB_007aa228;
    }
    *(char *)((int)local_114c + 1) = (char)(uVar5 >> 8);
    FUN_01af96fc(&local_1060,&local_1198,local_114c);
    if (local_1060 == (uint ***)0x80000007) {
      FUN_019bb7e0(local_1150,ppuVar26);
      uVar34 = local_1194._4_4_;
      goto LAB_007a980c;
    }
    local_11c0._0_4_ = local_1060;
    local_11c0._4_4_ = (uint ***)local_105c;
    local_11b8 = local_105c._4_4_;
    FUN_019bb7e0(local_1150,ppuVar26);
    goto LAB_007a9e7c;
  }
LAB_007a980c:
  uVar7 = (undefined1 *)local_1194;
  local_105c._0_4_ = (uint ***)&DAT_01c097e0;
  local_1060 = &local_38;
  local_38 = (uint **)0x0;
  local_30 = 0;
  uVar29 = uVar17;
  if ((uVar16 & 1) == 0) {
    uVar29 = 0x81a4;
  }
  local_1054 = (uint ***)0x0;
  local_34 = 1;
  local_105c._4_4_ = (uint ***)0x60000020;
  iVar11 = FUN_012fb940(&local_1060,uVar36,uVar37);
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_10a0,&DAT_01c097f8,&DAT_01d30334);
  }
  local_10a0 = (uint ***)local_38;
  local_109c = (uint ***)local_34;
  local_1098 = (uint ***)local_30;
  uVar39 = FUN_016571c0();
  iVar11 = (int)(uVar39 >> 0x20);
  puVar12 = (uint *)uVar39;
  if (iVar11 == 0) {
    iVar13 = 1;
  }
  else {
    iVar13 = FUN_01298504(iVar11,1);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(1,iVar11);
    }
  }
  FUN_01bed4e2(iVar13,puVar12,iVar11);
  pcVar14 = (char *)~uVar29;
  bVar38 = ((uint)pcVar14 & 0xa000) != 0;
  if (bVar38) {
    ppuVar26 = (uint **)(uint)bVar1;
  }
  uVar29 = uVar29 << 0x10;
  if (bVar38 && ppuVar26 != (uint **)&DAT_00000014) {
    if (ppuVar26 == (uint **)0x0) {
      bVar38 = iVar11 == 0;
      if (!bVar38) {
        pcVar14 = (char *)((int)puVar12 + iVar11 + -1);
        bVar38 = pcVar14 == (char *)0x0;
      }
      if ((!bVar38) && (*pcVar14 == '\\' || *pcVar14 == '/')) {
        uVar29 = uVar29 | 0x10;
      }
      ppuVar26 = (uint **)0x0;
      uVar29 = uVar29 | uVar16 & (uVar17 & 0x124) == 0;
    }
  }
  else {
    ppuVar26 = (uint **)&DAT_00000003;
  }
  if (uVar39 < 0x400000000) {
    iVar21 = iVar11;
    do {
      if (iVar21 == 0) {
        uVar27 = 0;
        goto LAB_007a99f8;
      }
      iVar6 = iVar21 + -1;
      iVar21 = iVar21 + -1;
    } while ((uint)(int)*(char *)((int)puVar12 + iVar6) < 0x80000000);
    uVar27 = 1;
  }
  else {
    uVar27 = 1;
    if ((*puVar12 & 0x80808080) == 0) {
      uVar16 = ((int)puVar12 + 3U & 0xfffffffc) - (int)puVar12;
      if (uVar16 == 0) {
        uVar16 = 4;
      }
      for (; uVar16 < iVar11 - 4U; uVar16 = uVar16 + 4) {
        if ((*(uint *)((int)puVar12 + uVar16) & 0x80808080) != 0) goto LAB_007a99f8;
      }
      uVar27 = 0;
      if ((*(uint *)((int)puVar12 + (iVar11 - 4U)) & 0x80808080) != 0) {
        uVar27 = 1;
      }
    }
  }
LAB_007a99f8:
  uVar40 = FUN_016bc0ec(uVar7,uVar34);
  local_1098 = (uint ***)0x0;
  local_109c = (uint ***)&DAT_00000001;
  local_10a0 = (uint ***)0x0;
  local_1028 = FUN_016571c0(&local_10a0);
  local_fb3 = 0x2d;
  local_fc0 = 1;
  local_fba = 0;
  local_ff8 = 0;
  local_ff4 = 0;
  local_104c = 0;
  local_1050 = 0;
  local_fe0 = 0;
  local_fdc = 0;
  local_1040 = 0;
  local_103c = 0;
  uStack_1008 = 0;
  local_fe8 = 3;
  local_fb4 = SUB41(ppuVar26,0);
  local_fd4 = 8;
  local_fb6 = 0;
  bVar1 = (byte)uVar18;
  local_fc8 = 0;
  local_1020 = 0;
  local_101c = 0;
  local_1018 = 0;
  local_1014 = 0;
  local_fd0 = 0;
  local_fd8 = 0;
  local_1060 = pppuVar28;
  local_105c._0_4_ = pppuVar35;
  local_105c._4_4_ = pppuVar24;
  local_1054 = pppuVar32;
  local_1030 = iVar13;
  local_102c = iVar11;
  local_1000 = ppuVar19;
  local_ffc = ppuVar25;
  local_fcc = uVar23;
  local_fca = uVar2;
  local_fc4 = uVar29;
  local_fbe = uVar4;
  local_fbc = uVar3;
  local_fb8 = bVar1;
  local_fb7 = uVar27;
  local_fb5 = bVar10;
  local_1010 = uVar40;
  local_1038 = uVar39;
  local_fb3 = FUN_01af7f20(&local_1060);
  FUN_01bed4e2(&local_1150,&local_1060,0xb0);
  local_10a6 = (~*(byte *)((int)param_2 + 0x10b3) | bVar1) & 1;
  bVar10 = FUN_01af7f20(&local_1150);
  local_1140 = 1;
  uStack_113c = 0;
  if (local_10a3 < bVar10) {
    local_10a3 = bVar10;
  }
  local_1138 = uVar33;
  local_1134 = puVar31;
  FUN_01bed4e2(&local_1060,&local_1150,0xb0);
  FUN_007aa6e0(&local_10a0,param_2,&local_1060);
  pppuVar24 = local_109c;
  uVar37 = local_1194._4_4_;
  uVar36 = (undefined1 *)local_1194;
  if (local_10a0 == (uint ***)0x80000007) {
    *(undefined1 *)(param_2 + 0x42c) = 1;
    FUN_01af8134(&local_1060,(undefined1 *)local_1194,local_1194._4_4_);
    if (local_1060 != (uint ***)0x80000007) {
LAB_007a9e68:
      local_11b8 = local_105c._4_4_;
      local_11c0._4_4_ = (uint ***)local_105c;
      pppuVar24 = local_1060;
      goto LAB_007a9e78;
    }
    puVar12 = param_2 + 0x414;
    iVar11 = FUN_007adc04(puVar12,pppuVar24,&DAT_01c096c0);
    FUN_01af7d74(&local_1060,iVar11);
    if ((char)local_1060 != '\0') {
      uVar16 = (uint)&local_10a0 | 3;
      FUN_01bed4e2(uVar16,&local_105c,0xc);
      FUN_01bed4e2(&local_11c0,uVar16,0xc);
      goto LAB_007a9e7c;
    }
    FUN_01bed4e2(&local_10a0,(uint)&local_1060 | 1,0x1a);
    local_1080 = local_10a0;
    pppuStack_107c = local_109c;
    pppuStack_1078 = local_1098;
    uStack_1074 = uStack_1094;
    uStack_1070 = uStack_1090;
    uStack_106c = uStack_108c;
    local_1068 = local_1088;
    uVar16 = *param_2 ^ 3 | param_2[1];
    bVar38 = uVar16 == 0;
    if (bVar38) {
      uVar16 = param_2[2];
    }
    if (bVar38 && uVar16 == 0) {
      local_105c._0_4_ = (uint ***)(param_2 + 4);
    }
    else {
      FUN_01af9864(&local_1060,"Should have switched to stored and unencrypted beforehand",0x39);
      if (((char)local_1060 != '\x04') && (((uint)local_1060 & 0xff) != 4)) {
        local_11c0._4_4_ = local_1060;
        pppuVar24 = (uint ***)&DAT_80000001;
        local_11b8 = (uint ***)local_105c;
        goto LAB_007a9e78;
      }
    }
    pppuVar28 = (uint ***)local_105c;
    FUN_007af304(&local_1060,&local_1080,(uint ***)local_105c);
    if (local_1060 != (uint ***)0x80000007) goto LAB_007a9e68;
    FUN_007b01f0(&local_1060,pppuVar28,*(undefined4 *)(iVar11 + 0x30),*(undefined4 *)(iVar11 + 0x34)
                );
    if (((char)local_1060 != '\x04') && (((uint)local_1060 & 0xff) != 4)) {
      local_11c0 = CONCAT44(local_1060,&DAT_80000001);
      local_11b8 = (uint ***)local_105c;
      goto LAB_007a9e7c;
    }
    if (uVar34 != 0) {
      FUN_007b01f0(&local_1060,pppuVar28,uVar36,uVar37);
      if (((char)local_1060 != '\x04') && (((uint)local_1060 & 0xff) != 4)) {
        local_11c0 = CONCAT44(local_1060,&DAT_80000001);
        local_11b8 = (uint ***)local_105c;
        goto LAB_007a9e7c;
      }
      local_1060 = local_1198;
      local_105c = local_1194;
      FUN_016571c0(&local_1060);
      uVar40 = FUN_0070153c();
      piVar15 = *(int **)(iVar11 + 0x50);
      if (piVar15 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar13 = *piVar15;
          bVar38 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar38);
        *piVar15 = iVar13 + -1;
        if (iVar13 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(*(undefined4 *)(iVar11 + 0x50),*(undefined4 *)(iVar11 + 0x54));
        }
      }
      *(undefined8 *)(iVar11 + 0x50) = uVar40;
    }
    local_11c0._0_4_ = (uint ***)0x80000007;
    FUN_007aa3ac(&local_1060,param_2,&local_11c0);
    if (local_1060 == (uint ***)0x80000007) {
      FUN_007b0620(&local_1060,param_2);
      if (((char)local_1060 != '\x04') && (((uint)local_1060 & 0xff) != 4)) {
        local_11b8 = (uint ***)local_105c;
        pppuVar24 = (uint ***)&DAT_80000001;
        pppuVar28 = local_1060;
        goto LAB_007a9f58;
      }
      ppuVar19 = ((uint ***)local_105c)[3];
      puVar30 = param_2 + 0x426;
      *puVar30 = (uint)((uint ***)local_105c)[2];
      param_2[0x427] = (uint)ppuVar19;
      if ((uVar18 & 1) == 0) {
LAB_007aa0dc:
        iVar11 = FUN_007adc04(puVar12,pppuVar24,&DAT_01c09700);
        DataMemoryBarrier(0xb);
        if (*(int *)(iVar11 + 0x78) != 0) {
          FUN_007aebd8(iVar11 + 0x70,puVar30);
        }
        param_2[0x428] = 0;
        param_2[0x429] = 0;
        param_2[0x422] = 0;
        param_2[0x423] = 0;
        param_2[0x424] = 0;
      }
      else {
        FUN_007aad80(&local_1060,param_2);
        pppuVar32 = local_1054;
        uVar40 = local_105c;
        pppuVar28 = local_1060;
        uVar16 = (uint)local_105c._4_4_;
        if (local_1060 == (uint ***)0x0) {
          local_11b8 = local_1054;
          local_11c0 = local_105c;
        }
        else {
          iVar11 = FUN_007adc04(puVar12,pppuVar24,&DAT_01c096d0);
          uVar23 = 0;
          local_1060 = pppuVar28;
          local_1054 = pppuVar32;
          local_105c = uVar40;
          FUN_01bed93e(&local_1050,0,0x1000);
          local_50 = local_11b0;
          uStack_4c = uStack_11ac;
          uStack_48 = uStack_11a8;
          local_38 = (uint **)0x0;
          local_34 = 0;
          local_30 = 0;
          local_109c = (uint ***)&DAT_0000000b;
          *puVar30 = uVar16;
          param_2[0x427] = (uint)pppuVar32;
          local_1098 = (uint ***)((uint)local_1098 & 0xffffff00);
          local_10a0 = (uint ***)&DAT_0000000a;
          uVar40 = FUN_007aaeac(&local_38,&local_10a0);
          iVar13 = (int)((ulonglong)uVar40 >> 0x20);
          if ((*(ushort *)(iVar11 + 0xa0) & 1) != 0) {
            uVar23 = *(undefined2 *)(iVar11 + 0xa4);
          }
          if (iVar13 != 2) {
                    /* WARNING: Subroutine does not return */
            FUN_013070f0(iVar13,2,&DAT_01c096f0);
          }
          *(undefined2 *)uVar40 = uVar23;
          FUN_007af724(auStack_40,&local_1060,&local_38);
          FUN_007aaef8(&local_10a0,param_2,auStack_40);
          if (local_10a0 == (uint ***)0x80000007) {
            FUN_007a93e4(param_2);
            *param_2 = 3;
            param_2[1] = 0;
            FUN_01bed4e2(param_2 + 2,&local_1060,0x1020);
            goto LAB_007aa0dc;
          }
          local_11c0._0_4_ = local_10a0;
          local_11c0._4_4_ = local_109c;
          local_11b8 = local_1098;
          FUN_01139b38(local_1060,(uint ***)local_105c);
          local_11c0 = CONCAT44(local_11c0._4_4_,(uint ***)local_11c0);
        }
      }
    }
    else {
      local_11b8 = local_105c._4_4_;
      pppuVar24 = local_1060;
      pppuVar28 = (uint ***)local_105c;
LAB_007a9f58:
      local_11c0 = CONCAT44(pppuVar28,pppuVar24);
    }
    if (uVar34 == 0) goto LAB_007a9e7c;
  }
  else {
    local_11b8 = local_1098;
    local_11c0._4_4_ = local_109c;
    pppuVar24 = local_10a0;
LAB_007a9e78:
    local_11c0 = CONCAT44(local_11c0._4_4_,pppuVar24);
LAB_007a9e7c:
    FUN_019bb7e0(local_1198,(undefined1 *)local_1194);
  }
  if ((uint ***)local_11c0 == (uint ***)0x80000007) {
    FUN_007b08b8(auStack_11a4,param_2,pppuVar8,pppuVar9);
    FUN_007aa3ac(&local_1060,param_2,auStack_11a4);
    if (local_1060 == (uint ***)0x80000007) {
      *(undefined4 *)param_1 = 0x80000007;
      *(undefined1 *)((int)param_2 + 0x10b1) = 0;
      return;
    }
    *(uint ****)param_1 = local_1060;
    *(undefined8 *)((int)param_1 + 4) = local_105c;
    return;
  }
  pppuVar24 = local_11b8;
  uVar40 = local_11c0;
LAB_007a9ef0:
  *param_1 = uVar40;
  *(uint ****)(param_1 + 1) = pppuVar24;
  FUN_01443048(pppuVar8,pppuVar9);
  return;
}

