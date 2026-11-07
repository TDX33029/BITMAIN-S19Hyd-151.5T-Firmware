// FUN_0162f0bc @ 0162f0bc size=6100 calls_out=21 calls_in=1
// strings: NeighbourTableConfigBuffer | NeighbourTableStatsBuffer | invalid NDTA_THRESH2 value | invalid NDTA_THRESH3 value | invalid NDTA_THRESH1 value | invalid NDTA_PARMS attribute

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0162f0bc(undefined4 *param_1,int *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [8];
  undefined1 auVar4 [8];
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  undefined4 **ppuVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 ***pppuVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined *puVar26;
  undefined4 *puVar27;
  int iVar28;
  int *piVar29;
  undefined4 uVar30;
  undefined8 *puVar31;
  int iVar32;
  undefined4 **unaff_r8;
  int iVar33;
  undefined4 *puVar34;
  int iVar35;
  undefined4 **unaff_r10;
  int iVar36;
  int iVar37;
  ulonglong uVar38;
  undefined8 uVar39;
  int local_25c;
  int local_250;
  int local_24c;
  int local_248;
  int local_240;
  int local_23c;
  undefined4 local_238;
  int local_234;
  undefined4 local_230;
  undefined4 *local_22c;
  undefined1 auStack_228 [80];
  undefined4 local_1d8;
  undefined4 *local_1d4;
  undefined4 **local_1d0;
  undefined4 **local_1cc;
  undefined4 **local_1c8;
  undefined1 auStack_1c4 [76];
  undefined8 local_178;
  int local_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined8 local_120;
  undefined4 **local_118;
  undefined4 **local_114;
  undefined4 **local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined4 *local_c8;
  int iStack_c4;
  char *local_c0;
  undefined4 *local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined4 **local_98;
  undefined4 **local_94;
  undefined8 *local_90;
  code *local_8c;
  undefined4 **local_88;
  int local_84;
  undefined4 **local_80;
  undefined4 *puStack_7c;
  undefined4 **ppuStack_78;
  undefined4 uStack_74;
  undefined4 *local_70;
  undefined4 uStack_6c;
  undefined4 **ppuStack_68;
  undefined1 local_60 [8];
  undefined4 **local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 **local_40;
  undefined8 local_38;
  undefined4 **ppuStack_30;
  
  local_248 = 0;
  local_250 = 0;
  uVar24 = param_2[1];
  local_24c = 8;
  if (uVar24 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(4,uVar24,uVar24,&DAT_01d06158);
  }
  local_23c = uVar24 - 4;
  local_240 = *param_2 + 4;
  puVar6 = (undefined4 *)((uint)&local_120 | 4);
  puVar7 = (undefined4 *)((uint)&local_b0 | 4);
  local_238 = 0;
  do {
    FUN_0162385c(&local_234,&local_240);
    puVar27 = local_22c;
    uVar30 = local_230;
    uVar2 = CONCAT44(local_98,local_a0._4_4_);
    uVar38 = CONCAT44(local_58,local_60._4_4_);
    if (local_234 == -0x7fffffff) {
      param_1[1] = local_250;
      param_1[2] = local_24c;
      param_1[3] = local_248;
      *param_1 = 0;
      return;
    }
    if (local_234 != -0x80000000) {
      param_1[1] = local_234;
      param_1[2] = local_230;
      *param_1 = 1;
      param_1[3] = local_22c;
      goto LAB_016307cc;
    }
    uVar38 = FUN_01623bf0(local_230,local_22c);
    uVar25 = (undefined4)(uVar38 >> 0x20);
    uVar23 = (undefined4)uVar38;
    local_178 = uVar38;
    uVar5 = FUN_01623bc0(uVar30,puVar27);
    local_48._0_4_ = (undefined8 *)uVar25;
    switch(uVar5) {
    case 1:
      FUN_0160ef98(&local_120,uVar23,uVar25);
      if (((ulonglong)local_120 & 1) == 0) {
        local_98 = local_118;
        local_94 = local_114;
        auVar3 = local_120;
        auVar4 = local_60;
        if (((ulonglong)local_120 & 1) == 0) {
          uVar30 = 1;
          pppuVar22 = &local_98;
          puVar27 = local_120._4_4_;
          local_a0 = local_120;
          auVar3 = local_60;
LAB_01630640:
          ppuVar8 = pppuVar22[1];
          unaff_r8 = *pppuVar22;
          break;
        }
      }
      else {
        local_60._0_4_ = *puVar6;
        local_60._4_4_ = puVar6[1];
        local_58 = (undefined4 **)puVar6[2];
        FUN_016403ac((uint)local_a0 | 4,local_60,"invalid NDTA_NAME value",0x17);
        auVar4 = (undefined1  [8])CONCAT44(local_60._4_4_,local_60._0_4_);
        auVar3 = local_a0;
      }
      goto LAB_01630760;
    case 2:
      FUN_0160f300(local_a0,uVar23,uVar25);
      if ((undefined1 *)local_a0._0_4_ == &DAT_80000000) {
        local_58 = local_98;
        auVar4 = local_a0;
        auVar3 = local_a0;
      }
      else {
        local_118 = local_98;
        local_120 = local_a0;
        FUN_016403ac(local_60,&local_120,"invalid NDTA_THRESH1 value",0x1a);
        auVar4 = local_a0;
        auVar3 = local_60;
      }
      local_60._0_4_ = SUB84(auVar3,0);
      if ((undefined1 *)local_60._0_4_ == &DAT_80000000) {
        uVar30 = 2;
        local_a0 = auVar4;
        goto LAB_0162f644;
      }
LAB_016306f4:
      local_60._4_4_ = SUB84((ulonglong)auVar3 >> 0x20,0);
      local_60._0_4_ = SUB84(auVar3,0);
      local_a0._4_4_ = SUB84((ulonglong)auVar4 >> 0x20,0);
      local_a0._0_4_ = SUB84(auVar4,0);
      auVar3 = (undefined1  [8])CONCAT44(local_60._0_4_,local_a0._0_4_);
      uVar2 = CONCAT44(local_98,local_a0._4_4_);
      uVar1 = unique0x100005fe;
      goto LAB_016307c0;
    case 3:
      FUN_0160f300(local_a0,uVar23,uVar25);
      if ((undefined1 *)local_a0._0_4_ == &DAT_80000000) {
        local_58 = local_98;
        auVar4 = local_a0;
        auVar3 = local_a0;
      }
      else {
        local_118 = local_98;
        local_120 = local_a0;
        FUN_016403ac(local_60,&local_120,"invalid NDTA_THRESH2 value",0x1a);
        auVar4 = local_a0;
        auVar3 = local_60;
      }
      local_60._0_4_ = SUB84(auVar3,0);
      if ((undefined1 *)local_60._0_4_ != &DAT_80000000) goto LAB_016306f4;
      uVar30 = 3;
      local_a0 = auVar4;
      goto LAB_0162f644;
    case 4:
      FUN_0160f300(local_a0,uVar23,uVar25);
      if ((undefined1 *)local_a0._0_4_ == &DAT_80000000) {
        local_58 = local_98;
        auVar3 = local_a0;
      }
      else {
        local_118 = local_98;
        local_120 = local_a0;
        FUN_016403ac(local_60,&local_120,"invalid NDTA_THRESH3 value",0x1a);
        auVar3 = local_60;
      }
      local_60._0_4_ = SUB84(auVar3,0);
      auVar4 = local_a0;
      if ((undefined1 *)local_60._0_4_ != &DAT_80000000) goto LAB_016306f4;
      uVar30 = 4;
LAB_0162f644:
      local_60._4_4_ = SUB84((ulonglong)auVar3 >> 0x20,0);
      ppuVar8 = (undefined4 **)0x0;
      puVar27 = (undefined4 *)local_60._4_4_;
      break;
    case 5:
      if (uVar38 < 0x2000000000) {
        local_38._0_4_ = (undefined4 *)&DAT_00000020;
        local_bc = (undefined4 *)&DAT_0000001a;
        local_90 = &local_48;
        local_c0 = "NeighbourTableConfigBuffer";
        local_8c = FUN_012fd02c;
        local_94 = (undefined4 **)FUN_012fd02c;
        local_98 = (undefined4 **)&local_38;
        local_a0._4_4_ = &LAB_018a13b8;
        local_a0._0_4_ = &local_c0;
        FUN_00664898(local_60,&DAT_005ab249,local_a0);
        uVar1 = CONCAT44(local_58,local_60._4_4_);
        puVar31 = (undefined8 *)local_60._0_4_;
        if ((undefined1 *)local_60._0_4_ == &DAT_80000000) goto LAB_0162f348;
      }
      else {
LAB_0162f348:
        puVar31 = (undefined8 *)&DAT_80000000;
        uVar1 = uVar38;
      }
      local_60._4_4_ = &LAB_0141634c;
      local_60._0_4_ = &local_178;
      FUN_00664898(local_a0,&DAT_005b9136,local_60);
      if (puVar31 == (undefined8 *)&DAT_80000000) {
        local_b0._0_4_ = (char **)&DAT_80000000;
        local_b0._4_4_ = (code *)(int)uVar1;
        FUN_0134bd64();
        uVar38 = CONCAT44(local_58,local_60._4_4_);
      }
      else {
        local_60._0_4_ = puVar31;
        unique0x10002456 = uVar1;
        FUN_01640430(&local_b0,local_60,local_a0);
        auVar3 = (undefined1  [8])CONCAT44((char **)local_b0,local_a0._0_4_);
        uVar2 = CONCAT44(local_98,local_a0._4_4_);
        uVar1 = CONCAT44((undefined4 **)local_a8,local_b0._4_4_);
        uVar38 = stack0xffffffa4;
        if ((char **)local_b0 != (char **)&DAT_80000000) goto LAB_016307c0;
      }
      local_58 = (undefined4 **)(uVar38 >> 0x20);
      uVar30 = (undefined4)(uVar1 >> 0x20);
      piVar29 = (int *)uVar1;
      puVar26 = &DAT_01d06308;
      if (uVar1 < 0x200000000) {
        uVar25 = 2;
        uVar23 = 0;
LAB_01630938:
        unique0x100024c6 = uVar38;
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar23,uVar25,uVar30,puVar26);
      }
      if (uVar1 < 0x400000000) {
        uVar25 = 4;
        uVar23 = 2;
        goto LAB_01630938;
      }
      if (uVar1 < 0x800000000) {
        uVar25 = 8;
        uVar23 = 4;
        goto LAB_01630938;
      }
      if (uVar1 < 0xc00000000) {
        uVar25 = 0xc;
        uVar23 = 8;
        goto LAB_01630938;
      }
      if (uVar1 < 0x1000000000) {
        uVar25 = 0x10;
        uVar23 = 0xc;
        goto LAB_01630938;
      }
      if (uVar1 < 0x1400000000) {
        uVar25 = 0x14;
        uVar23 = 0x10;
        goto LAB_01630938;
      }
      if (uVar1 < 0x1800000000) {
        uVar25 = 0x18;
        uVar23 = 0x14;
        goto LAB_01630938;
      }
      if (uVar1 < 0x1c00000000) {
        uVar25 = 0x1c;
        uVar23 = 0x18;
        goto LAB_01630938;
      }
      if (uVar1 < 0x2000000000) {
        uVar25 = 0x20;
        uVar23 = 0x1c;
        goto LAB_01630938;
      }
      ppuVar8 = (undefined4 **)piVar29[2];
      iVar10 = *piVar29;
      puVar27 = (undefined4 *)piVar29[1];
      ppuVar9 = (undefined4 **)piVar29[3];
      unaff_r10 = (undefined4 **)piVar29[4];
      iVar12 = piVar29[5];
      iVar13 = piVar29[6];
      iVar11 = piVar29[7];
      local_60._4_4_ = &LAB_0141634c;
      local_60._0_4_ = &local_178;
      FUN_00664898(local_a0,&DAT_005b9136,local_60);
      local_120._0_4_ = (undefined8 *)0x0;
      local_120._4_4_ = puVar27;
      local_118 = ppuVar8;
      local_114 = ppuVar9;
      local_110 = unaff_r10;
      local_10c = iVar12;
      local_108 = iVar13;
      local_104 = iVar11;
      local_100 = iVar10;
      FUN_0134bd64(local_a0._0_4_,local_a0._4_4_);
      auVar3 = (undefined1  [8])CONCAT44(local_60._4_4_,local_60._0_4_);
      local_170 = local_10c;
      iStack_16c = local_108;
      iStack_168 = local_104;
      iStack_164 = local_100;
      uVar30 = 5;
      ppuVar8 = local_114;
      unaff_r8 = local_118;
      break;
    case 6:
      FUN_016238f4(&local_120,uVar23,uVar25);
      unique0x1000247e = uVar38;
      if ((undefined8 *)local_120 != (undefined8 *)&DAT_80000000) {
        unique0x10002476 = CONCAT44(local_118,local_120._4_4_);
      }
      local_60._0_4_ = &local_38;
      local_a0._0_4_ = (undefined8 *)local_120;
      local_60._4_4_ = &LAB_0141634c;
      local_38 = uVar38;
      FUN_00664898(&local_120,&DAT_00586e36,local_60);
      FUN_0160f56c(local_60,local_a0,&local_120);
      auVar3 = (undefined1  [8])CONCAT44(local_60._0_4_,local_a0._0_4_);
      if ((undefined1 *)local_60._0_4_ == &DAT_80000000) {
        iVar10 = 8;
        puStack_7c = (undefined4 *)local_60._4_4_;
        ppuStack_78 = local_58;
        uStack_74 = 0;
        local_80 = (undefined4 **)0x0;
        local_84 = 8;
        local_88 = (undefined4 **)0x0;
        local_25c = 8;
        while( true ) {
          unaff_r10 = local_80;
          FUN_0162385c(&local_70,&puStack_7c);
          puVar27 = local_70;
          if (local_70 == (undefined4 *)&DAT_80000001) break;
          if (local_70 == (undefined4 *)&DAT_80000000) {
            local_a0._0_4_ = local_70;
            uVar2 = CONCAT44(ppuStack_68,uStack_6c);
          }
          else {
            local_120._0_4_ = (undefined8 *)local_70;
            local_120._4_4_ = (undefined4 *)uStack_6c;
            local_118 = ppuStack_68;
            FUN_016403ac(local_a0,&local_120,"invalid NDTA_PARMS attribute",0x1c);
            uVar2 = stack0xffffff64;
          }
          local_98 = (undefined4 **)(uVar2 >> 0x20);
          ppuVar8 = local_98;
          local_a0._4_4_ = SUB84(uVar2,0);
          uVar30 = local_a0._4_4_;
          if ((undefined1 *)local_a0._0_4_ != &DAT_80000000) {
            local_b0._4_4_ = (code *)local_a0._0_4_;
            local_a8 = uVar2;
            goto LAB_016305c0;
          }
          uVar39 = FUN_01623bf0(local_a0._4_4_,local_98);
          stack0xffffff64 = uVar2;
          uVar25 = (undefined4)((ulonglong)uVar39 >> 0x20);
          uVar23 = (undefined4)uVar39;
          local_50 = uVar39;
          uVar5 = FUN_01623bc0(uVar30,ppuVar8);
          switch(uVar5) {
          case 1:
            FUN_0160f300(&local_38,uVar23,uVar25);
            local_a0._4_4_ = &LAB_0141634c;
            local_a0._0_4_ = &local_50;
            FUN_00664898(&local_120,&DAT_005bd037,local_a0);
            local_98 = local_118;
            local_a0 = local_120;
            FUN_0160f56c(&local_48,&local_38,local_a0);
            uVar2 = local_48;
            auVar3 = local_a0;
            if ((undefined8 *)local_48 == (undefined8 *)&DAT_80000000) {
              puVar34 = (undefined4 *)&DAT_80000000;
              unique0x100025c6 = CONCAT44(local_98,local_a0._4_4_);
              uVar1 = CONCAT44(&local_120,local_48._4_4_);
              break;
            }
LAB_01630574:
            local_a0._4_4_ = SUB84((ulonglong)auVar3 >> 0x20,0);
            local_a0._0_4_ = SUB84(auVar3,0);
            ppuVar8 = local_40;
            local_48 = uVar2;
            goto LAB_01630580;
          case 2:
            FUN_0160f300(&local_38,uVar23,uVar25);
            local_a0._4_4_ = &LAB_0141634c;
            local_a0._0_4_ = &local_50;
            FUN_00664898(&local_120,&DAT_005ae872,local_a0);
            local_98 = local_118;
            local_a0 = local_120;
            FUN_0160f56c(&local_48,&local_38,local_a0);
            uVar2 = local_48;
            auVar3 = local_a0;
            if ((undefined8 *)local_48 != (undefined8 *)&DAT_80000000) goto LAB_01630574;
            puVar34 = (undefined4 *)&DAT_80000001;
            unique0x100025be = CONCAT44(local_98,local_a0._4_4_);
            uVar1 = CONCAT44(&local_120,local_48._4_4_);
            break;
          case 3:
            FUN_0160f460(&local_120,uVar23,uVar25);
            local_48._4_4_ = &LAB_0141634c;
            local_48._0_4_ = &local_50;
            FUN_00664898(&local_38,&DAT_005a2706,&local_48);
            ppuVar8 = ppuStack_30;
            local_40 = ppuStack_30;
            local_48 = local_38;
            FUN_0160f964(local_a0,&local_120,&local_48);
            if ((undefined1 *)local_a0._0_4_ == &DAT_00000001) goto LAB_01630550;
            puVar34 = (undefined4 *)0x80000002;
            uVar2 = stack0xffffff64;
LAB_0162fff4:
            local_98 = (undefined4 **)(uVar2 >> 0x20);
            uVar1 = CONCAT44(local_98,ppuVar8);
            ppuVar8 = local_94;
            unique0x1000257e = uVar2;
            break;
          case 4:
            FUN_0160f460(&local_120,uVar23,uVar25);
            local_48._4_4_ = &LAB_0141634c;
            local_48._0_4_ = &local_50;
            FUN_00664898(&local_38,&DAT_0058c2ad,&local_48);
            ppuVar8 = ppuStack_30;
            local_40 = ppuStack_30;
            local_48 = local_38;
            FUN_0160f964(local_a0,&local_120,&local_48);
            if ((undefined1 *)local_a0._0_4_ != &DAT_00000001) {
              puVar34 = (undefined4 *)0x80000003;
              uVar2 = stack0xffffff64;
              goto LAB_0162fff4;
            }
            goto LAB_01630550;
          case 5:
            FUN_0160f460(&local_120,uVar23,uVar25);
            local_48._4_4_ = &LAB_0141634c;
            local_48._0_4_ = &local_50;
            FUN_00664898(&local_38,&DAT_00577789,&local_48);
            ppuVar8 = ppuStack_30;
            local_40 = ppuStack_30;
            local_48 = local_38;
            FUN_0160f964(local_a0,&local_120,&local_48);
            if ((undefined1 *)local_a0._0_4_ != &DAT_00000001) {
              puVar34 = (undefined4 *)&DAT_80000004;
              uVar2 = stack0xffffff64;
              goto LAB_0162fff4;
            }
            goto LAB_01630550;
          case 6:
            FUN_0160f460(&local_120,uVar23,uVar25);
            local_48._4_4_ = &LAB_0141634c;
            local_48._0_4_ = &local_50;
            FUN_00664898(&local_38,&DAT_00572253,&local_48);
            ppuVar8 = ppuStack_30;
            local_40 = ppuStack_30;
            local_48 = local_38;
            FUN_0160f964(local_a0,&local_120,&local_48);
            if ((undefined1 *)local_a0._0_4_ != &DAT_00000001) {
              puVar34 = (undefined4 *)&DAT_80000005;
              uVar2 = stack0xffffff64;
              goto LAB_0162fff4;
            }
            goto LAB_01630550;
          case 7:
            FUN_0160f460(&local_120,uVar23,uVar25);
            local_48._4_4_ = &LAB_0141634c;
            local_48._0_4_ = &local_50;
            FUN_00664898(&local_38,&DAT_00599fae,&local_48);
            ppuVar8 = ppuStack_30;
            local_40 = ppuStack_30;
            local_48 = local_38;
            FUN_0160f964(local_a0,&local_120,&local_48);
            if ((undefined1 *)local_a0._0_4_ != &DAT_00000001) {
              puVar34 = (undefined4 *)0x80000006;
              uVar2 = stack0xffffff64;
              goto LAB_0162fff4;
            }
            goto LAB_01630550;
          case 8:
            FUN_0160f300(&local_38,uVar23,uVar25);
            local_a0._4_4_ = &LAB_0141634c;
            local_a0._0_4_ = &local_50;
            FUN_00664898(&local_120,&DAT_00598e2a,local_a0);
            local_98 = local_118;
            local_a0 = local_120;
            FUN_0160f56c(&local_48,&local_38,local_a0);
            uVar2 = local_48;
            auVar3 = local_a0;
            if ((undefined8 *)local_48 != (undefined8 *)&DAT_80000000) goto LAB_01630574;
            puVar34 = (undefined4 *)0x80000007;
            unique0x100025b6 = CONCAT44(local_98,local_a0._4_4_);
            uVar1 = CONCAT44(&local_120,local_48._4_4_);
            break;
          case 9:
            FUN_0160f300(&local_38,uVar23,uVar25);
            local_a0._4_4_ = &LAB_0141634c;
            local_a0._0_4_ = &local_50;
            FUN_00664898(&local_120,&DAT_0057fea2,local_a0);
            local_98 = local_118;
            local_a0 = local_120;
            FUN_0160f56c(&local_48,&local_38,local_a0);
            uVar2 = local_48;
            auVar3 = local_a0;
            if ((undefined8 *)local_48 != (undefined8 *)&DAT_80000000) goto LAB_01630574;
            puVar34 = (undefined4 *)&DAT_80000008;
            unique0x100025ae = CONCAT44(local_98,local_a0._4_4_);
            uVar1 = CONCAT44(&local_120,local_48._4_4_);
            break;
          case 10:
            FUN_0160f300(&local_38,uVar23,uVar25);
            local_a0._4_4_ = &LAB_0141634c;
            local_a0._0_4_ = &local_50;
            FUN_00664898(&local_120,&DAT_005a89b3,local_a0);
            local_98 = local_118;
            local_a0 = local_120;
            FUN_0160f56c(&local_48,&local_38,local_a0);
            uVar2 = local_48;
            auVar3 = local_a0;
            if ((undefined8 *)local_48 != (undefined8 *)&DAT_80000000) goto LAB_01630574;
            puVar34 = (undefined4 *)&DAT_80000009;
            unique0x100025a6 = CONCAT44(local_98,local_a0._4_4_);
            uVar1 = CONCAT44(&local_120,local_48._4_4_);
            break;
          case 0xb:
            FUN_0160f300(&local_38,uVar23,uVar25);
            local_a0._4_4_ = &LAB_0141634c;
            local_a0._0_4_ = &local_50;
            FUN_00664898(&local_120,&DAT_005aa1b0,local_a0);
            local_98 = local_118;
            local_a0 = local_120;
            FUN_0160f56c(&local_48,&local_38,local_a0);
            uVar2 = local_48;
            auVar3 = local_a0;
            if ((undefined8 *)local_48 != (undefined8 *)&DAT_80000000) goto LAB_01630574;
            puVar34 = (undefined4 *)0x8000000a;
            unique0x1000259e = CONCAT44(local_98,local_a0._4_4_);
            uVar1 = CONCAT44(&local_120,local_48._4_4_);
            break;
          case 0xc:
            FUN_0160f460(&local_120,uVar23,uVar25);
            local_48._4_4_ = &LAB_0141634c;
            local_48._0_4_ = &local_50;
            FUN_00664898(&local_38,&DAT_005792b7,&local_48);
            ppuVar8 = ppuStack_30;
            local_40 = ppuStack_30;
            local_48 = local_38;
            FUN_0160f964(local_a0,&local_120,&local_48);
            if ((undefined1 *)local_a0._0_4_ != &DAT_00000001) {
              puVar34 = (undefined4 *)0x8000000b;
              uVar2 = stack0xffffff64;
              goto LAB_0162fff4;
            }
            goto LAB_01630550;
          case 0xd:
            FUN_0160f460(&local_120,uVar23,uVar25);
            local_48._4_4_ = &LAB_0141634c;
            local_48._0_4_ = &local_50;
            FUN_00664898(&local_38,&DAT_0057e383,&local_48);
            ppuVar8 = ppuStack_30;
            local_40 = ppuStack_30;
            local_48 = local_38;
            FUN_0160f964(local_a0,&local_120,&local_48);
            if ((undefined1 *)local_a0._0_4_ != &DAT_00000001) {
              puVar34 = (undefined4 *)&DAT_8000000c;
              uVar2 = stack0xffffff64;
              goto LAB_0162fff4;
            }
            goto LAB_01630550;
          case 0xe:
            FUN_0160f300(&local_38,uVar23,uVar25);
            local_a0._4_4_ = &LAB_0141634c;
            local_a0._0_4_ = &local_50;
            FUN_00664898(&local_120,&DAT_005939c0,local_a0);
            local_98 = local_118;
            local_a0 = local_120;
            FUN_0160f56c(&local_48,&local_38,local_a0);
            uVar2 = local_48;
            auVar3 = local_a0;
            if ((undefined8 *)local_48 != (undefined8 *)&DAT_80000000) goto LAB_01630574;
            puVar34 = (undefined4 *)0x8000000d;
            unique0x10002596 = CONCAT44(local_98,local_a0._4_4_);
            uVar1 = CONCAT44(&local_120,local_48._4_4_);
            break;
          case 0xf:
            FUN_0160f460(&local_120,uVar23,uVar25);
            local_48._4_4_ = &LAB_0141634c;
            local_48._0_4_ = &local_50;
            FUN_00664898(&local_38,&DAT_00595bba,&local_48);
            ppuVar8 = ppuStack_30;
            local_40 = ppuStack_30;
            local_48 = local_38;
            FUN_0160f964(local_a0,&local_120,&local_48);
            if ((undefined1 *)local_a0._0_4_ != &DAT_00000001) {
              puVar34 = (undefined4 *)0x8000000e;
              uVar2 = stack0xffffff64;
              goto LAB_0162fff4;
            }
            goto LAB_01630550;
          case 0x10:
            FUN_0160f300(&local_38,uVar23,uVar25);
            local_a0._4_4_ = &LAB_0141634c;
            local_a0._0_4_ = &local_50;
            FUN_00664898(&local_120,&DAT_005b926f,local_a0);
            local_98 = local_118;
            local_a0 = local_120;
            FUN_0160f56c(&local_48,&local_38,local_a0);
            uVar2 = local_48;
            auVar3 = local_a0;
            if ((undefined8 *)local_48 != (undefined8 *)&DAT_80000000) goto LAB_01630574;
            puVar34 = (undefined4 *)0x8000000f;
            unique0x1000258e = CONCAT44(local_98,local_a0._4_4_);
            uVar1 = CONCAT44(&local_120,local_48._4_4_);
            break;
          case 0x11:
            FUN_0160f300(&local_38,uVar23,uVar25);
            local_a0._4_4_ = &LAB_0141634c;
            local_a0._0_4_ = &local_50;
            FUN_00664898(&local_120,&DAT_005aa1b0,local_a0);
            local_98 = local_118;
            local_a0 = local_120;
            FUN_0160f56c(&local_48,&local_38,local_a0);
            uVar2 = local_48;
            auVar3 = local_a0;
            if ((undefined8 *)local_48 != (undefined8 *)&DAT_80000000) goto LAB_01630574;
            puVar34 = (undefined4 *)&DAT_80000010;
            unique0x10002586 = CONCAT44(local_98,local_a0._4_4_);
            uVar1 = CONCAT44(&local_120,local_48._4_4_);
            break;
          default:
            FUN_01623ae4(&local_120,uVar30,ppuVar8);
            local_48._4_4_ = &LAB_0141634c;
            local_48._0_4_ = &local_50;
            FUN_00664898(&local_38,&DAT_005930dd,&local_48);
            local_40 = ppuStack_30;
            local_48 = local_38;
            FUN_0160f810(local_a0,&local_120,&local_48);
            ppuVar8 = local_94;
            puVar34 = (undefined4 *)local_a0._0_4_;
            uVar2 = stack0xffffff64;
            uVar1 = stack0xffffff64;
            if ((undefined1 *)local_a0._0_4_ == &DAT_80000000) goto LAB_01630580;
            break;
          case 0x13:
            FUN_0160f460(&local_120,uVar23,uVar25);
            local_48._4_4_ = &LAB_0141634c;
            local_48._0_4_ = &local_50;
            FUN_00664898(&local_38,&DAT_0058e9a3,&local_48);
            ppuVar8 = ppuStack_30;
            local_40 = ppuStack_30;
            local_48 = local_38;
            FUN_0160f964(local_a0,&local_120,&local_48);
            if ((undefined1 *)local_a0._0_4_ != &DAT_00000001) {
              puVar34 = (undefined4 *)0x80000011;
              uVar2 = stack0xffffff64;
              goto LAB_0162fff4;
            }
LAB_01630550:
            ppuVar8 = local_94;
            uVar2 = unique0x100008b6;
LAB_01630580:
            local_118 = ppuVar8;
            local_120 = (undefined1  [8])uVar2;
            FUN_016403ac((uint)local_60 | 4,&local_120,"invalid NDTA_PARMS attribute",0x1c);
            local_b0._4_4_ = (code *)local_60._4_4_;
            uVar2 = stack0xffffff64;
            local_a8 = CONCAT44(uStack_54,local_58);
LAB_016305c0:
            local_b0._0_4_ = (char **)&DAT_00000001;
            unique0x100024ee = uVar2;
            FUN_0162a3b0(&local_88);
            goto LAB_016305d4;
          }
          if (unaff_r10 == local_88) {
            FUN_015f5b78(&local_88);
            local_25c = local_84;
          }
          puVar27 = (undefined4 *)(local_25c + (int)unaff_r10 * 0x10);
          *puVar27 = puVar34;
          local_80 = (undefined4 **)((int)unaff_r10 + 1);
          puVar27[1] = (int)uVar1;
          puVar27 = (undefined4 *)(local_25c + iVar10);
          *puVar27 = (int)(uVar1 >> 0x20);
          iVar10 = iVar10 + 0x10;
          puVar27[1] = ppuVar8;
        }
        *puVar7 = local_88;
        puVar7[1] = local_84;
        puVar7[2] = local_80;
        local_b0._0_4_ = (char **)0x0;
LAB_016305d4:
        local_120._4_4_ = (undefined4 *)&LAB_0141634c;
        local_120._0_4_ = (undefined8 *)local_a0;
        local_a0 = (undefined1  [8])uVar38;
        FUN_00664898(local_60,&DAT_00586e36,&local_120);
        if (puVar27 == (undefined4 *)&DAT_80000001) {
          local_c0 = (char *)(char **)local_b0;
          local_bc = (undefined4 *)local_b0._4_4_;
          local_b8 = local_a8;
          FUN_0134bd64(local_60._0_4_,local_60._4_4_);
          auVar3 = local_a0;
          if (((uint)local_c0 & 1) == 0) {
            uVar30 = 0;
            pppuVar22 = (undefined4 ***)&local_b8;
            puVar27 = local_bc;
            auVar3 = (undefined1  [8])CONCAT44(local_60._4_4_,local_60._0_4_);
            goto LAB_01630640;
          }
        }
        else {
          local_a0._0_4_ = *puVar7;
          local_a0._4_4_ = puVar7[1];
          local_98 = (undefined4 **)puVar7[2];
          local_120._0_4_ = (undefined8 *)local_60._0_4_;
          local_120._4_4_ = (undefined4 *)local_60._4_4_;
          local_118 = local_58;
          FUN_01640430((uint)&local_c0 | 4,local_a0);
          auVar3 = (undefined1  [8])CONCAT44(local_a0._4_4_,local_a0._0_4_);
        }
        local_a0._4_4_ = SUB84((ulonglong)auVar3 >> 0x20,0);
        local_a0._0_4_ = SUB84(auVar3,0);
        auVar3 = (undefined1  [8])CONCAT44(local_bc,local_a0._0_4_);
        uVar2 = CONCAT44(local_98,local_a0._4_4_);
        uVar1 = local_b8;
      }
      else {
        uVar2 = stack0xffffff64;
        uVar1 = unique0x100005f6;
      }
      goto LAB_016307c0;
    case 7:
      if (uVar38 < 0x5800000000) {
        local_38._0_4_ = (undefined4 *)&DAT_00000058;
        local_bc = (undefined4 *)&DAT_00000019;
        local_90 = &local_48;
        local_c0 = "NeighbourTableStatsBuffer";
        local_8c = FUN_012fd02c;
        local_94 = (undefined4 **)FUN_012fd02c;
        local_98 = (undefined4 **)&local_38;
        local_a0._4_4_ = &LAB_018a13b8;
        local_a0._0_4_ = &local_c0;
        FUN_00664898(local_60,&DAT_005ab249,local_a0);
        uVar1 = CONCAT44(local_58,local_60._4_4_);
        puVar31 = (undefined8 *)local_60._0_4_;
        if ((undefined1 *)local_60._0_4_ == &DAT_80000000) goto LAB_0162f4ec;
      }
      else {
LAB_0162f4ec:
        puVar31 = (undefined8 *)&DAT_80000000;
        uVar1 = uVar38;
      }
      local_60._4_4_ = &LAB_0141634c;
      local_60._0_4_ = &local_178;
      FUN_00664898(local_a0,&DAT_005a47ca,local_60);
      if (puVar31 == (undefined8 *)&DAT_80000000) {
        local_b0._0_4_ = (char **)&DAT_80000000;
        local_b0._4_4_ = (code *)(int)uVar1;
        FUN_0134bd64();
        uVar38 = CONCAT44(local_58,local_60._4_4_);
      }
      else {
        local_60._0_4_ = puVar31;
        unique0x10002506 = uVar1;
        FUN_01640430(&local_b0,local_60,local_a0);
        auVar3 = (undefined1  [8])CONCAT44((char **)local_b0,local_a0._0_4_);
        uVar1 = CONCAT44((undefined4 **)local_a8,local_b0._4_4_);
        uVar2 = CONCAT44(local_98,local_a0._4_4_);
        uVar38 = stack0xffffffa4;
        if ((char **)local_b0 != (char **)&DAT_80000000) goto LAB_016307c0;
      }
      local_58 = (undefined4 **)(uVar38 >> 0x20);
      uVar30 = (undefined4)(uVar1 >> 0x20);
      piVar29 = (int *)uVar1;
      if (uVar1 < 0x800000000) {
        uVar25 = 8;
        uVar23 = 0;
        puVar26 = &DAT_01d05fa0;
        goto LAB_01630938;
      }
      if (uVar1 < 0x1000000000) {
        uVar25 = 0x10;
        uVar23 = 8;
        puVar26 = &DAT_01d05fa0;
        goto LAB_01630938;
      }
      if (uVar1 < 0x1800000000) {
        uVar25 = 0x18;
        uVar23 = 0x10;
        puVar26 = &DAT_01d05fa0;
        goto LAB_01630938;
      }
      if (uVar1 < 0x2000000000) {
        uVar25 = 0x20;
        uVar23 = 0x18;
        puVar26 = &DAT_01d05fa0;
        goto LAB_01630938;
      }
      if (uVar1 < 0x2800000000) {
        uVar25 = 0x28;
        uVar23 = 0x20;
        puVar26 = &DAT_01d05fa0;
        goto LAB_01630938;
      }
      if (uVar1 < 0x3000000000) {
        uVar25 = 0x30;
        uVar23 = 0x28;
        puVar26 = &DAT_01d05fa0;
        goto LAB_01630938;
      }
      if (uVar1 < 0x3800000000) {
        uVar25 = 0x38;
        uVar23 = 0x30;
        puVar26 = &DAT_01d05fa0;
        goto LAB_01630938;
      }
      if (uVar1 < 0x4000000000) {
        uVar25 = 0x40;
        uVar23 = 0x38;
        puVar26 = &DAT_01d05fa0;
        goto LAB_01630938;
      }
      if (uVar1 < 0x4800000000) {
        uVar25 = 0x48;
        uVar23 = 0x40;
        puVar26 = &DAT_01d05fa0;
        goto LAB_01630938;
      }
      if (uVar1 < 0x5000000000) {
        uVar25 = 0x50;
        uVar23 = 0x48;
        puVar26 = &DAT_01d05fa0;
        goto LAB_01630938;
      }
      if (uVar1 < 0x5800000000) {
        uVar25 = 0x58;
        uVar23 = 0x50;
        puVar26 = &DAT_01d05fa0;
        goto LAB_01630938;
      }
      ppuVar8 = (undefined4 **)*piVar29;
      ppuVar9 = (undefined4 **)piVar29[1];
      unaff_r10 = (undefined4 **)piVar29[2];
      iVar10 = piVar29[3];
      iVar11 = piVar29[4];
      iVar12 = piVar29[5];
      iVar13 = piVar29[6];
      iVar14 = piVar29[7];
      iVar15 = piVar29[8];
      iVar16 = piVar29[9];
      iVar17 = piVar29[10];
      iVar18 = piVar29[0xb];
      iVar19 = piVar29[0xc];
      iVar20 = piVar29[0xd];
      iVar21 = piVar29[0xe];
      iVar37 = piVar29[0xf];
      iVar36 = piVar29[0x10];
      iVar35 = piVar29[0x11];
      iVar33 = piVar29[0x12];
      iVar32 = piVar29[0x13];
      puVar27 = (undefined4 *)piVar29[0x14];
      iVar28 = piVar29[0x15];
      local_60._4_4_ = &LAB_0141634c;
      local_60._0_4_ = &local_178;
      FUN_00664898(local_a0,&DAT_005a47ca,local_60);
      local_120._0_4_ = (undefined8 *)0x0;
      local_118 = ppuVar8;
      local_114 = ppuVar9;
      local_110 = unaff_r10;
      local_10c = iVar10;
      local_108 = iVar11;
      local_104 = iVar12;
      local_100 = iVar13;
      iStack_fc = iVar14;
      local_f8 = iVar15;
      iStack_f4 = iVar16;
      local_f0 = iVar17;
      iStack_ec = iVar18;
      local_e8 = iVar19;
      iStack_e4 = iVar20;
      local_e0 = iVar21;
      iStack_dc = iVar37;
      local_d8 = iVar36;
      local_d4 = iVar35;
      local_d0 = iVar33;
      local_cc = iVar32;
      local_c8 = puVar27;
      iStack_c4 = iVar28;
      FUN_0134bd64(local_a0._0_4_,local_a0._4_4_);
      ppuVar8 = local_114;
      unaff_r8 = local_118;
      FUN_01bed4e2(&local_170,&local_10c,0x4c);
      auVar3 = (undefined1  [8])CONCAT44(local_60._4_4_,local_60._0_4_);
      uVar30 = 6;
      break;
    case 8:
      FUN_0160f460(&local_120,uVar23,uVar25);
      if ((undefined8 *)local_120 == (undefined8 *)&DAT_00000001) {
        local_60._0_4_ = *puVar6;
        local_60._4_4_ = puVar6[1];
        local_58 = (undefined4 **)puVar6[2];
        FUN_016403ac((uint)local_a0 | 4,local_60,"invalid NDTA_GC_INTERVAL value",0x1e);
        auVar4 = (undefined1  [8])CONCAT44(local_60._4_4_,local_60._0_4_);
        auVar3 = local_a0;
      }
      else {
        local_98 = local_118;
        local_94 = local_114;
        auVar3 = local_120;
        auVar4 = local_60;
        if ((undefined8 *)local_120 == (undefined8 *)0x0) {
          uVar30 = 7;
          pppuVar22 = &local_98;
          local_a0 = local_120;
          auVar3 = local_60;
          goto LAB_0162f57c;
        }
      }
LAB_01630760:
      local_60._4_4_ = SUB84((ulonglong)auVar4 >> 0x20,0);
      local_60._0_4_ = SUB84(auVar4,0);
      local_a0._4_4_ = SUB84((ulonglong)auVar3 >> 0x20,0);
      uVar2 = CONCAT44(local_98,local_a0._4_4_);
      uVar1 = CONCAT44(local_94,local_98);
LAB_016307c0:
      local_a0._0_4_ = SUB84(auVar3,0);
      *param_1 = 1;
      param_1[1] = (int)((ulonglong)auVar3 >> 0x20);
      *(ulonglong *)(param_1 + 2) = uVar1;
      uVar38 = unique0x100005ce;
LAB_016307cc:
      unique0x1000246e = uVar38;
      unique0x100024be = uVar2;
      FUN_01630bcc(&local_250);
      return;
    default:
      local_c0 = (char *)CONCAT22(local_c0._2_2_,uVar5);
      FUN_01623ae4(&local_120,uVar30,puVar27);
      local_b0._4_4_ = FUN_012fcf18;
      local_b0._0_4_ = &local_c0;
      FUN_00664898(local_60,&DAT_005a8e62,&local_b0);
      local_a8._0_4_ = local_58;
      local_b0 = local_60;
      FUN_0160f810(local_a0,&local_120,&local_b0);
      if ((undefined1 *)local_a0._0_4_ == &DAT_80000000) {
        unique0x1000245e = CONCAT44(local_58,local_60._4_4_);
        uVar2 = CONCAT44(local_98,local_a0._4_4_);
        auVar3 = local_a0;
        uVar1 = CONCAT44(local_94,local_98);
        goto LAB_016307c0;
      }
      uVar30 = 8;
      pppuVar22 = (undefined4 ***)(local_a0 + 4);
      puVar27 = (undefined4 *)local_a0._0_4_;
      unaff_r10 = local_94;
      auVar3 = local_60;
LAB_0162f57c:
      ppuVar8 = pppuVar22[1];
      unaff_r8 = *pppuVar22;
    }
    local_60 = auVar3;
    FUN_01bed4e2(auStack_228,&local_170,0x4c);
    local_1c8 = unaff_r10;
    FUN_01bed4e2(auStack_1c4,auStack_228,0x4c);
    iVar10 = local_248;
    local_1d8 = uVar30;
    local_1d4 = puVar27;
    local_1d0 = unaff_r8;
    local_1cc = ppuVar8;
    if (local_248 == local_250) {
      FUN_0161d724(&local_250);
    }
    FUN_01bed4e2(local_24c + iVar10 * 0x60,&local_1d8,0x60);
    local_248 = iVar10 + 1;
  } while( true );
}

