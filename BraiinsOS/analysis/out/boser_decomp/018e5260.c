// FUN_018e5260 @ 018e5260 size=3332 calls_out=18 calls_in=1
// strings: HpkeKem | EchVersion | EchVersion | EchVersion

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018e5260(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [8];
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  char *pcVar18;
  ushort extraout_r1;
  char *pcVar19;
  uint *puVar20;
  int iVar21;
  ushort uVar22;
  char *pcVar23;
  uint uVar24;
  char *pcVar25;
  undefined1 uVar26;
  undefined2 uVar27;
  char *pcVar28;
  uint unaff_r10;
  char cVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined4 local_210;
  undefined4 local_20c;
  char *local_208;
  uint local_204;
  ushort local_200;
  char *local_1fc;
  uint local_1f4;
  char *local_1f0;
  int local_1d4;
  uint local_1d0;
  uint local_1cc;
  char *local_1c4;
  uint local_1b8;
  uint local_1b4;
  char *local_1b0;
  undefined1 local_1ac;
  undefined4 local_1a8;
  ushort local_1a0;
  ushort local_19c;
  uint local_198;
  int local_184;
  undefined4 local_174;
  char *local_170;
  char *local_16c;
  uint local_168;
  undefined8 local_164;
  uint local_15c;
  int local_158;
  int local_154;
  int local_150;
  uint local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  char *local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  char *local_128;
  undefined4 local_124;
  char *local_120;
  char *pcStack_11c;
  undefined4 local_118;
  char *local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint local_108;
  int local_104;
  uint local_100;
  uint local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 uStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  char *local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  char *local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  char local_a4;
  undefined1 local_a3;
  ushort local_a2;
  char *local_a0;
  char *pcStack_9c;
  char local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined2 local_94;
  ushort uStack_92;
  char *local_90;
  char *local_8c;
  char *local_88;
  char *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  uint local_6c;
  char *local_68;
  char *local_64;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [8];
  uint local_30;
  
  uVar32 = CONCAT44(local_1f0,local_1f4);
  FUN_01930f74(&local_98,&DAT_0056a6b8,param_2);
  pcVar18 = local_40;
  pcVar19 = local_44;
  if (local_98 == '\x18') {
    uVar30 = FUN_0192fac8(param_2,CONCAT22(uStack_92,local_94));
    local_40 = pcVar18;
    local_44 = pcVar19;
    uVar22 = local_40._2_2_;
    uVar15 = local_44._2_2_;
    if ((int)uVar30 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 0xb;
    }
    else {
      local_15c = 0;
      local_150 = 0;
      local_154 = 4;
      local_158 = 0;
      if ((int)((ulonglong)uVar30 >> 0x20) != 0) {
        uVar5 = CONCAT44(local_16c,local_1a8);
        uVar7 = CONCAT44(local_20c,local_210);
        do {
          local_40._2_2_ = uVar22;
          local_44._2_2_ = uVar15;
          uVar22 = local_40._2_2_;
          uVar15 = local_44._2_2_;
          local_1f0 = (char *)((ulonglong)uVar32 >> 0x20);
          local_1f4 = (uint)uVar32;
          uVar34 = CONCAT44(local_1b0,local_1b8);
          local_16c = (char *)((ulonglong)uVar5 >> 0x20);
          uVar26 = SUB41(&local_a2,0);
          pcVar19 = local_44;
          local_44._2_2_ = uVar15;
          pcVar18 = local_40;
          local_40._2_2_ = uVar22;
          local_164 = uVar30;
          uVar31 = FUN_0192fac8(&local_164,2);
          pcVar18 = local_40;
          pcVar19 = local_44;
          uVar30 = CONCAT44(local_30,local_38._4_4_);
          if (((ushort *)uVar31 == (ushort *)0x0) || ((int)((ulonglong)uVar31 >> 0x20) != 2)) {
            local_94 = 10;
            uStack_92 = 0;
            cVar29 = '\f';
            local_98 = -0x2a;
            uStack_97 = 0x33;
            uStack_96 = 0x52;
            uStack_95 = 0;
            pcVar25 = (char *)0xa;
            local_16c = "EchVersion";
            goto LAB_018e5d68;
          }
          uVar2 = *(ushort *)uVar31;
          uVar15 = local_44._2_2_;
          local_44 = pcVar19;
          uVar22 = local_40._2_2_;
          local_40 = pcVar18;
          pcVar19 = local_44;
          local_44._2_2_ = uVar15;
          pcVar18 = local_40;
          local_40._2_2_ = uVar22;
          uVar30 = FUN_0192fac8(&local_164,2);
          pcVar18 = local_40;
          pcVar19 = local_44;
          if (((ushort *)uVar30 == (ushort *)0x0) || ((int)((ulonglong)uVar30 >> 0x20) != 2)) {
            pcVar25 = (char *)0x3;
            local_16c = "u16";
            local_19c = local_1a0;
            auVar6 = local_38;
LAB_018e5c64:
            local_40 = pcVar18;
            local_44 = pcVar19;
            uVar22 = local_40._2_2_;
            uVar15 = local_44._2_2_;
            local_38._4_4_ = SUB84((ulonglong)auVar6 >> 0x20,0);
            local_38._0_4_ = SUB84(auVar6,0);
            uVar30 = CONCAT44(local_30,local_38._4_4_);
            cVar29 = '\f';
            pcVar19 = local_44;
            pcVar18 = local_40;
            local_44._2_2_ = uVar15;
            local_40._2_2_ = uVar22;
            goto LAB_018e5d68;
          }
          uVar22 = *(ushort *)uVar30;
          local_1a0 = uVar22 << 8 | uVar22 >> 8;
          uVar15 = local_44._2_2_;
          local_44 = pcVar19;
          uVar22 = local_40._2_2_;
          local_40 = pcVar18;
          pcVar19 = local_44;
          local_44._2_2_ = uVar15;
          pcVar18 = local_40;
          local_40._2_2_ = uVar22;
          uVar31 = FUN_0192fac8(&local_164);
          pcVar18 = local_40;
          pcVar19 = local_44;
          uVar30 = CONCAT44(local_30,local_38._4_4_);
          if ((int)uVar31 == 0) {
            cVar29 = '\v';
            pcVar25 = (char *)0x0;
            local_19c = (ushort)((ulonglong)uVar5 >> 0x10);
            uVar26 = (undefined1)((ulonglong)uVar5 >> 8);
            goto LAB_018e5d68;
          }
          uStack_e4 = 0;
          local_44 = pcVar19;
          local_40 = pcVar18;
          local_ec = uVar31;
          if (uVar2 == 0xdfe) {
            uVar15 = local_44._2_2_;
            uVar22 = local_40._2_2_;
            pcVar19 = local_44;
            local_44._2_2_ = uVar15;
            pcVar18 = local_40;
            local_40._2_2_ = uVar22;
            uVar32 = FUN_0192fac8(&local_ec,1);
            uVar22 = local_40._2_2_;
            uVar15 = local_44._2_2_;
            uVar24 = 0xc;
            local_44._2_2_ = uVar15;
            local_40._2_2_ = uVar22;
            if (((byte *)uVar32 == (byte *)0x0) || ((int)((ulonglong)uVar32 >> 0x20) != 1)) {
              pcVar25 = (char *)0x2;
              pcVar18 = &DAT_005239af;
              pcVar19 = local_44;
              pcVar12 = local_40;
              auVar6 = local_38;
LAB_018e5bf0:
              local_40 = pcVar12;
              local_44 = pcVar19;
              uVar3 = local_40._2_2_;
              uVar15 = local_44._2_2_;
              local_16c = (char *)(((uint)pcVar18 & 0xffff) + ((uint)pcVar18 & 0xffff0000));
              pcVar18 = (char *)(unaff_r10 << 0x10 | ((uint)local_1c4 & 0xff) << 8 | uVar24);
            }
            else {
              bVar1 = *(byte *)uVar32;
              local_1c4 = (char *)(uint)bVar1;
              pcVar19 = local_44;
              pcVar18 = local_40;
              uVar32 = FUN_0192fac8(&local_ec,2);
              uVar22 = local_40._2_2_;
              uVar15 = local_44._2_2_;
              local_44._2_2_ = uVar15;
              local_40._2_2_ = uVar22;
              if (((ushort *)uVar32 == (ushort *)0x0) || ((int)((ulonglong)uVar32 >> 0x20) != 2)) {
                pcVar25 = (char *)0x7;
                pcVar18 = "HpkeKem";
                local_1c4 = (char *)0xdfe;
                unaff_r10 = local_198;
                pcVar19 = local_44;
                pcVar12 = local_40;
                auVar6 = local_38;
                goto LAB_018e5bf0;
              }
              uVar22 = *(ushort *)uVar32;
              uVar22 = uVar22 << 8 | uVar22 >> 8;
              local_198 = 5;
              if (uVar22 < 0x12) {
                if (uVar22 == 0x10) {
                  local_198 = 0;
                }
                else if (uVar22 == 0x11) {
                  local_198 = 1;
                }
              }
              else if (uVar22 == 0x12) {
                local_198 = 2;
              }
              else if (uVar22 == 0x20) {
                local_198 = 3;
              }
              else if (uVar22 == 0x21) {
                local_198 = 4;
              }
              pcVar19 = local_44;
              pcVar18 = local_40;
              FUN_01935ea0(&local_48,&local_ec);
              pcVar12 = local_3c;
              uVar3 = local_40._2_2_;
              pcVar18 = local_40;
              uVar15 = local_44._2_2_;
              pcVar19 = local_44;
              local_170 = local_3c;
              local_44._2_2_ = uVar15;
              local_40._2_2_ = uVar3;
              if (local_48 == (char *)0x1) {
                local_1c4 = (char *)((uint)pcVar19 >> 8);
                uVar24 = (uint)pcVar19 & 0xff;
                pcVar25 = local_3c;
                unaff_r10 = (uint)pcVar19 >> 0x10;
                pcVar12 = pcVar18;
                auVar6 = local_38;
                goto LAB_018e5bf0;
              }
              local_44 = pcVar19;
              local_40 = pcVar18;
              FUN_01930f74(&local_48,&DAT_01d23300,&local_ec);
              pcVar25 = local_40;
              pcVar28 = local_44;
              uVar24 = (uint)local_48 & 0xff;
              if (uVar24 != 0x18) {
                unaff_r10 = (uint)local_48 >> 0x10;
                local_1c4 = (char *)((uint)local_48 >> 8 & 0xff);
                local_1f0 = pcVar28;
                pcVar11 = pcVar25;
LAB_018e5be0:
                local_40 = pcVar11;
                local_44 = pcVar28;
                uVar22 = local_40._2_2_;
                uVar15 = local_44._2_2_;
                pcVar12 = local_44;
                local_44._2_2_ = uVar15;
                pcVar28 = local_40;
                local_40._2_2_ = uVar22;
                FUN_0134bd64(pcVar19,pcVar18);
                pcVar12 = local_40;
                pcVar19 = local_44;
                pcVar18 = local_1f0;
                auVar6 = local_38;
                goto LAB_018e5bf0;
              }
              uVar15 = local_44._2_2_;
              local_44 = pcVar28;
              uVar3 = local_40._2_2_;
              local_40 = pcVar25;
              pcVar25 = local_44;
              local_44._2_2_ = uVar15;
              pcVar11 = local_40;
              local_40._2_2_ = uVar3;
              uVar32 = FUN_0192fac8(&local_ec,pcVar28);
              pcVar11 = local_40;
              pcVar28 = local_44;
              if ((int)uVar32 == 0) {
                uVar24 = 0xb;
                pcVar25 = (char *)0x0;
                unaff_r10 = local_1f4 >> 0x10;
                local_1c4 = (char *)(local_1f4 >> 8);
                goto LAB_018e5be0;
              }
              local_30 = 0;
              local_40._2_2_ = 0;
              local_44 = (char *)0x2;
              local_44._2_2_ = 0;
              local_48 = (char *)0x0;
              pcVar25 = (char *)0x0;
              uVar15 = local_44._2_2_;
              auVar6 = (undefined1  [8])uVar32;
              if ((int)((ulonglong)uVar32 >> 0x20) != 0) {
                pcVar28 = (char *)0x2;
                iVar21 = 0;
                do {
                  local_44._2_2_ = uVar15;
                  local_40 = pcVar25;
                  uVar3 = local_40._2_2_;
                  pcVar25 = local_40;
                  uVar15 = local_44._2_2_;
                  pcVar11 = local_44;
                  local_44._2_2_ = uVar15;
                  local_40._2_2_ = uVar3;
                  local_38 = auVar6;
                  uVar30 = FUN_0192fac8(local_38,2);
                  pcVar13 = local_40;
                  pcVar11 = local_44;
                  if (((ushort *)uVar30 == (ushort *)0x0) || ((int)((ulonglong)uVar30 >> 0x20) != 2)
                     ) {
                    pcVar25 = (char *)0x7;
                    local_1c4 = "HpkeKdf";
LAB_018e5bbc:
                    local_40 = pcVar13;
                    local_44 = pcVar11;
                    uVar22 = local_40._2_2_;
                    uVar15 = local_44._2_2_;
                    pcVar12 = local_44;
                    local_44._2_2_ = uVar15;
                    pcVar11 = local_40;
                    local_40._2_2_ = uVar22;
                    FUN_0134aee0(local_48,pcVar28,2,8);
                    pcVar11 = local_40;
                    pcVar28 = local_44;
                    local_1f0 = (char *)(((uint)local_1c4 & 0xffff) + ((uint)local_1c4 & 0xffff0000)
                                        );
                    uVar24 = 0xc;
                    goto LAB_018e5be0;
                  }
                  uVar3 = *(ushort *)uVar30;
                  uVar24 = (uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10;
                  unaff_r10 = (uVar24 >> 0x10) - 1 & 0xffff;
                  if (2 < unaff_r10) {
                    unaff_r10 = 3;
                  }
                  uVar15 = local_44._2_2_;
                  local_44 = pcVar11;
                  uVar3 = local_40._2_2_;
                  local_40 = pcVar13;
                  pcVar11 = local_44;
                  local_44._2_2_ = uVar15;
                  pcVar13 = local_40;
                  local_40._2_2_ = uVar3;
                  uVar30 = FUN_0192fac8(local_38,2);
                  uVar3 = local_40._2_2_;
                  uVar15 = local_44._2_2_;
                  local_44._2_2_ = uVar15;
                  local_40._2_2_ = uVar3;
                  if (((ushort *)uVar30 == (ushort *)0x0) || ((int)((ulonglong)uVar30 >> 0x20) != 2)
                     ) {
                    pcVar25 = (char *)0x8;
                    local_1c4 = "HpkeAead/coolingFirmwareaudio/xmusername\x0f";
                    unaff_r10 = local_168;
                    pcVar11 = local_44;
                    pcVar13 = local_40;
                    goto LAB_018e5bbc;
                  }
                  uVar3 = *(ushort *)uVar30;
                  local_168 = 4;
                  uVar4 = (uint)uVar3 << 0x18 | (uint)(uVar3 >> 8) << 0x10;
                  uVar17 = (uVar4 >> 0x10) + 1 & 0xffff;
                  if (uVar17 < 5) {
                    local_168 = (uint)*(ushort *)(&DAT_00538950 + uVar17 * 2);
                  }
                  auVar6 = local_38;
                  if (pcVar25 == local_48) {
                    pcVar28 = local_44;
                    pcVar11 = local_40;
                    FUN_018fa9d8(&local_48);
                    uVar15 = local_44._2_2_;
                    pcVar28 = local_44;
                    local_44 = pcVar28;
                    auVar6 = local_38;
                  }
                  local_44._2_2_ = uVar15;
                  uVar15 = local_44._2_2_;
                  local_38._4_4_ = SUB84((ulonglong)auVar6 >> 0x20,0);
                  pcVar25 = pcVar25 + 1;
                  puVar20 = (uint *)(pcVar28 + iVar21);
                  *puVar20 = unaff_r10 | uVar24;
                  iVar21 = iVar21 + 8;
                  puVar20[1] = local_168 | uVar4;
                  local_40._2_2_ = (ushort)((uint)pcVar25 >> 0x10);
                } while (local_30 < (uint)local_38._4_4_);
              }
              local_44._2_2_ = uVar15;
              local_40 = pcVar25;
              uVar3 = local_40._2_2_;
              uVar15 = local_44._2_2_;
              pcVar11 = local_44;
              pcVar28 = local_48;
              if (pcVar19 != (char *)0x80000000) {
                local_7c = CONCAT31(local_7c._1_3_,bVar1);
                local_80 = CONCAT22(uVar22,(short)local_198);
                local_90 = pcVar12;
                local_94 = SUB42(pcVar18,0);
                uStack_92 = (ushort)((uint)pcVar18 >> 0x10);
                local_98 = (char)pcVar19;
                uStack_97 = (undefined1)((uint)pcVar19 >> 8);
                uStack_96 = (undefined1)((uint)pcVar19 >> 0x10);
                uStack_95 = (undefined1)((uint)pcVar19 >> 0x18);
                local_8c = local_48;
                local_88 = local_44;
                local_84 = local_40;
                pcVar25 = local_44;
                local_44._2_2_ = uVar15;
                pcVar13 = local_40;
                local_40._2_2_ = uVar3;
                local_38 = auVar6;
                uVar30 = FUN_0192fac8(&local_ec,1);
                uVar22 = local_40._2_2_;
                uVar15 = local_44._2_2_;
                local_44._2_2_ = uVar15;
                local_40._2_2_ = uVar22;
                if (((undefined1 *)uVar30 != (undefined1 *)0x0) &&
                   ((int)((ulonglong)uVar30 >> 0x20) == 1)) {
                  local_1ac = *(undefined1 *)uVar30;
                  pcVar25 = local_44;
                  pcVar13 = local_40;
                  FUN_01935b68(&local_48,&local_ec);
                  pcVar25 = local_3c;
                  uVar22 = local_40._2_2_;
                  pcVar8 = local_40;
                  uVar15 = local_44._2_2_;
                  pcVar13 = local_44;
                  local_44 = pcVar13;
                  local_40 = pcVar8;
                  local_44._2_2_ = uVar15;
                  local_40._2_2_ = uVar22;
                  if (local_48 != (char *)0x0) {
                    pcVar12 = local_44;
                    FUN_0134bd64(pcVar19,pcVar18);
                    uVar22 = local_40._2_2_;
                    uVar15 = local_44._2_2_;
                    pcVar19 = local_44;
                    local_44._2_2_ = uVar15;
                    pcVar18 = local_40;
                    local_40._2_2_ = uVar22;
                    FUN_0134aee0(pcVar28,pcVar11,2,8);
                    uVar22 = local_40._2_2_;
                    uVar15 = local_44._2_2_;
                    uVar30 = CONCAT44(local_30,local_38._4_4_);
                    local_19c = (ushort)((uint)pcVar13 >> 0x10);
                    uVar26 = (undefined1)((uint)pcVar13 >> 8);
                    cVar29 = (char)pcVar13;
                    local_16c = pcVar8;
                    pcVar19 = local_44;
                    pcVar18 = local_40;
                    local_44._2_2_ = uVar15;
                    local_40._2_2_ = uVar22;
                    goto LAB_018e5d68;
                  }
                  iVar21 = FUN_01938820(pcVar8,local_3c);
                  uVar22 = local_40._2_2_;
                  uVar15 = local_44._2_2_;
                  local_44._2_2_ = uVar15;
                  local_40._2_2_ = uVar22;
                  if (iVar21 == 0) {
                    pcVar18 = local_44;
                    pcVar11 = local_40;
                    FUN_012fbd94(&local_48,pcVar8,pcVar25);
                    uVar22 = local_40._2_2_;
                    uVar15 = local_44._2_2_;
                    pcVar18 = local_44;
                    local_44 = pcVar18;
                    local_44._2_2_ = uVar15;
                    local_40._2_2_ = uVar22;
                    if (local_48 == (char *)0x1) {
                      local_38._0_4_ = CONCAT24(uVar15,pcVar18);
                      local_38._4_4_ = CONCAT24(uVar22,local_40);
                      pcVar19 = local_44;
                      pcVar18 = local_40;
                    /* WARNING: Subroutine does not return */
                      FUN_013073dc(&DAT_00533467,0x2b,local_38,&DAT_01d25b00,&DAT_01d25ab8);
                    }
                    *(undefined1 *)((undefined2 *)((uint)&local_6c | 1) + 1) = 0x80;
                    *(undefined2 *)((uint)&local_6c | 1) = 0;
                    local_64 = local_40;
                    local_68 = pcVar18;
                    local_6c = local_6c & 0xffffff00;
                    pcVar25 = local_40;
                    FUN_01938d70(&local_78,&local_6c);
                    pcVar11 = local_40;
                    pcVar25 = local_44;
                    uVar15 = local_44._2_2_;
                    local_44 = pcVar25;
                    uVar22 = local_40._2_2_;
                    local_40 = pcVar11;
                    pcVar25 = local_44;
                    local_44._2_2_ = uVar15;
                    pcVar11 = local_40;
                    local_40._2_2_ = uVar22;
                    FUN_01930f74(&local_48,&DAT_0056a6b8,&local_ec);
                    local_1fc = local_40;
                    local_16c = local_44;
                    uVar30 = CONCAT44(local_30,local_38._4_4_);
                    if ((char)local_48 == '\x18') {
                      uVar15 = local_44._2_2_;
                      local_44 = local_16c;
                      uVar22 = local_40._2_2_;
                      local_40 = local_1fc;
                      pcVar25 = local_44;
                      local_44._2_2_ = uVar15;
                      pcVar11 = local_40;
                      local_40._2_2_ = uVar22;
                      uVar33 = FUN_0192fac8(&local_ec,local_16c);
                      pcVar11 = local_40;
                      pcVar25 = local_44;
                      uVar30 = CONCAT44(local_30,local_38._4_4_);
                      if ((int)uVar33 != 0) {
                        local_58 = 0;
                        local_4c = 0;
                        local_50 = 4;
                        local_54 = 0;
                        if ((int)((ulonglong)uVar33 >> 0x20) == 0) {
                          uVar34 = CONCAT44(local_1b0,local_1b8);
                          local_60._0_4_ = (int)uVar33;
                        }
                        else {
                          iVar21 = 8;
                          local_184 = 4;
                          uVar5 = uVar33;
                          do {
                            local_40 = pcVar11;
                            local_44 = pcVar25;
                            uVar22 = local_40._2_2_;
                            uVar15 = local_44._2_2_;
                            uVar24 = local_4c;
                            local_1b0 = (char *)((ulonglong)uVar34 >> 0x20);
                            local_1b8 = (uint)uVar34;
                            pcVar25 = local_44;
                            local_44._2_2_ = uVar15;
                            pcVar11 = local_40;
                            local_40._2_2_ = uVar22;
                            local_60 = uVar5;
                            unique0x10001353 = uVar30;
                            FUN_0190d660(&local_48,&local_60);
                            pcVar11 = local_40;
                            pcVar25 = local_44;
                            uVar15 = local_48._2_2_;
                            local_44._0_2_ = SUB42(pcVar25,0);
                            uVar27 = (undefined2)local_44;
                            if ((char)local_48 != '\x18') {
                              local_1fc = (char *)(ZEXT44(pcVar11) | (uint)local_40._2_2_ << 0x10);
                              local_1b0 = (char *)((uint)pcVar25 & 0xffff |
                                                  CONCAT42(pcVar11,local_44._2_2_) << 0x10);
                              pcVar23 = local_48;
LAB_018e5cf8:
                              local_40 = pcVar11;
                              local_44 = pcVar25;
                              uVar22 = local_40._2_2_;
                              uVar15 = local_44._2_2_;
                              pcVar25 = local_44;
                              pcVar11 = local_40;
                              local_44._2_2_ = uVar15;
                              local_40._2_2_ = uVar22;
LAB_018e5cfc:
                              local_40 = pcVar11;
                              local_44 = pcVar25;
                              uVar22 = local_40._2_2_;
                              uVar15 = local_44._2_2_;
                              uVar7 = CONCAT44(local_1b0,pcVar23);
                              pcVar25 = local_44;
                              local_44._2_2_ = uVar15;
                              pcVar12 = local_40;
                              local_40._2_2_ = uVar22;
                              FUN_01703ca8(&local_54);
                              pcVar11 = local_40;
                              pcVar25 = local_44;
                              cVar29 = (char)pcVar23;
                              uVar30 = stack0xffffffcc;
                              goto LAB_018e5d0c;
                            }
                            uVar14 = local_44._2_2_;
                            local_44 = pcVar25;
                            uVar22 = local_40._2_2_;
                            local_40 = pcVar11;
                            pcVar25 = local_44;
                            local_44._2_2_ = uVar14;
                            pcVar11 = local_40;
                            local_40._2_2_ = uVar22;
                            uVar30 = FUN_0192fac8(&local_60,2);
                            uVar22 = local_40._2_2_;
                            uVar14 = local_44._2_2_;
                            if (((ushort *)uVar30 == (ushort *)0x0) ||
                               ((int)((ulonglong)uVar30 >> 0x20) != 2)) {
                              local_1fc = (char *)0x3;
                              local_1b0 = "u16";
                              pcVar23 = (char *)(local_1b4 << 0x10 | 0xc);
                              pcVar25 = local_44;
                              pcVar11 = local_40;
                              local_44._2_2_ = uVar14;
                              local_40._2_2_ = uVar22;
                              goto LAB_018e5cf8;
                            }
                            uVar3 = *(ushort *)uVar30;
                            local_1b4 = (uVar3 & 0xff) << 8 | (uint)(uVar3 >> 8);
                            pcVar25 = local_44;
                            local_44._2_2_ = uVar14;
                            pcVar11 = local_40;
                            local_40._2_2_ = uVar22;
                            uVar34 = FUN_0192fac8(&local_60);
                            pcVar11 = local_40;
                            pcVar25 = local_44;
                            if ((int)uVar34 == 0) {
                              local_1fc = (char *)0x0;
                              pcVar23 = (char *)(local_1b8 & 0xffffff00 | 0xb);
                              goto LAB_018e5cfc;
                            }
                            local_38._0_4_ = 0x80000000;
                            uVar14 = local_44._2_2_;
                            local_44 = pcVar25;
                            uVar22 = local_40._2_2_;
                            local_40 = pcVar11;
                            pcVar25 = local_44;
                            local_44._2_2_ = uVar14;
                            pcVar11 = local_40;
                            local_40._2_2_ = uVar22;
                            unique0x1000129b = uVar34;
                            FUN_01935918(&local_48,local_38);
                            pcVar11 = local_40;
                            pcVar23 = local_44;
                            pcVar25 = local_48;
                            local_3c = (char *)CONCAT22(uVar27,uVar15);
                            pcVar9 = local_3c;
                            local_1b0 = (char *)CONCAT24(local_40._2_2_,pcVar11);
                            if (local_48 == (char *)0x80000001) {
                              local_1fc = local_3c;
                              pcVar25 = pcVar23;
                              goto LAB_018e5cf8;
                            }
                            pcVar10 = pcVar23;
                            uVar5 = local_60;
                            uVar30 = stack0xffffffcc;
                            if (uVar24 == local_54) {
                              uVar15 = local_44._2_2_;
                              local_44 = pcVar23;
                              uVar22 = local_40._2_2_;
                              local_40 = pcVar11;
                              pcVar11 = local_44;
                              local_44._2_2_ = uVar15;
                              pcVar10 = local_40;
                              local_40._2_2_ = uVar22;
                              FUN_018fa978(&local_54);
                              pcVar11 = local_40;
                              pcVar10 = local_44;
                              local_184 = local_50;
                              uVar5 = local_60;
                              uVar30 = stack0xffffffcc;
                            }
                            local_40 = pcVar11;
                            local_44 = pcVar10;
                            uVar22 = local_40._2_2_;
                            uVar15 = local_44._2_2_;
                            local_30 = (uint)((ulonglong)uVar30 >> 0x20);
                            local_38._4_4_ = SUB84(uVar30,0);
                            local_60._4_4_ = (uint)((ulonglong)uVar5 >> 0x20);
                            local_60._0_4_ = (int)uVar5;
                            puVar16 = (undefined4 *)(local_184 + uVar24 * 0x10);
                            *puVar16 = pcVar25;
                            local_4c = uVar24 + 1;
                            puVar16[1] = pcVar23;
                            puVar20 = (uint *)(local_184 + iVar21);
                            *puVar20 = (uint)local_1b0;
                            iVar21 = iVar21 + 0x10;
                            puVar20[1] = (uint)pcVar9;
                            pcVar25 = local_44;
                            pcVar11 = local_40;
                            local_44._2_2_ = uVar15;
                            local_40._2_2_ = uVar22;
                          } while (local_58 < local_60._4_4_);
                        }
                        local_40 = pcVar11;
                        local_44 = pcVar25;
                        uVar22 = local_40._2_2_;
                        uVar14 = local_44._2_2_;
                        local_1cc = local_54;
                        local_19c = uStack_92;
                        uVar15 = local_94;
                        local_174 = (undefined4)((ulonglong)uVar34 >> 0x20);
                        local_1b8 = (uint)uVar34;
                        uVar24 = CONCAT22(uStack_92,local_94);
                        local_1d4 = local_50;
                        local_1d0 = local_4c;
                        uVar27 = local_88._0_2_;
                        local_184._0_2_ = (ushort)((uint)local_88 >> 0x10);
                        local_b0 = local_84;
                        uStack_ac = local_80;
                        uStack_a8 = local_7c;
                        local_c0 = local_78;
                        uStack_bc = local_74;
                        uStack_b8 = uStack_70;
                        pcVar25 = local_44;
                        pcVar11 = local_40;
                        if (local_6c != 0x80000000) {
                          local_44._2_2_ = uVar14;
                          local_40._2_2_ = uVar22;
                          FUN_0134bd64(local_6c,pcVar18);
                          pcVar11 = local_40;
                          pcVar25 = local_44;
                          uVar14 = local_44._2_2_;
                          uVar22 = local_40._2_2_;
                        }
                        local_40._2_2_ = uVar22;
                        local_44._2_2_ = uVar14;
                        local_40 = pcVar11;
                        local_44 = pcVar25;
                        uVar22 = local_40._2_2_;
                        uVar14 = local_44._2_2_;
                        local_204 = uVar24 >> 8;
                        uVar26 = (undefined1)((ushort)uVar15 >> 8);
                        cVar29 = (char)uVar15;
                        pcVar18 = local_44;
                        local_44._2_2_ = uVar14;
                        pcVar25 = local_40;
                        local_40._2_2_ = uVar22;
                        FUN_0134bd64(pcVar13,pcVar8);
                        pcVar25 = local_40;
                        pcVar18 = local_44;
                        if (pcVar19 != (char *)0x80000000) {
                          local_d0 = local_b0;
                          uStack_cc = uStack_ac;
                          uStack_c8 = uStack_a8;
                          local_e0 = local_c0;
                          uStack_dc = uStack_bc;
                          uStack_d8 = uStack_b8;
                          local_208 = pcVar12;
                          local_1b0 = (char *)local_174;
                          local_1fc = pcVar28;
                          local_200 = local_19c;
                          goto LAB_018e5434;
                        }
                        local_16c = pcVar12;
                        auVar6 = local_38;
                        goto LAB_018e5dac;
                      }
                      local_1fc = (char *)0x0;
                      cVar29 = '\v';
LAB_018e5d0c:
                      local_40 = pcVar11;
                      local_44 = pcVar25;
                      uVar22 = local_40._2_2_;
                      uVar15 = local_44._2_2_;
                      local_16c = (char *)((ulonglong)uVar7 >> 0x20);
                      local_204 = (uint)uVar7 >> 8;
                      pcVar25 = local_44;
                      pcVar12 = local_40;
                      local_44._2_2_ = uVar15;
                      local_40._2_2_ = uVar22;
                    }
                    else {
                      local_204 = (uint)*(uint3 *)((uint)&local_48 | 1);
                      cVar29 = (char)local_48;
                      pcVar25 = local_16c;
                      pcVar12 = local_1fc;
                    }
                    local_40 = pcVar12;
                    local_44 = pcVar25;
                    uVar22 = local_40._2_2_;
                    uVar15 = local_44._2_2_;
                    pcVar25 = local_44;
                    pcVar12 = local_40;
                    unique0x100012ab = uVar30;
                    if (local_78 != 0x80000000) {
                      local_44._2_2_ = uVar15;
                      local_40._2_2_ = uVar22;
                      FUN_0134bd64(local_78,local_74);
                      pcVar12 = local_40;
                      pcVar25 = local_44;
                      uVar15 = local_44._2_2_;
                      uVar22 = local_40._2_2_;
                    }
                    local_40._2_2_ = uVar22;
                    local_44._2_2_ = uVar15;
                    local_40 = pcVar12;
                    local_44 = pcVar25;
                    uVar22 = local_40._2_2_;
                    uVar15 = local_44._2_2_;
                    pcVar25 = local_44;
                    local_44._2_2_ = uVar15;
                    pcVar12 = local_40;
                    local_40._2_2_ = uVar22;
                    FUN_0134bd64(pcVar19,CONCAT22(uStack_92,local_94));
                    pcVar25 = local_40;
                    pcVar19 = local_44;
                    uVar15 = local_44._2_2_;
                    local_44 = pcVar19;
                    uVar22 = local_40._2_2_;
                    local_40 = pcVar25;
                    pcVar19 = local_44;
                    local_44._2_2_ = uVar15;
                    pcVar25 = local_40;
                    local_40._2_2_ = uVar22;
                    FUN_0134aee0(pcVar28,local_88,2,8);
                    pcVar25 = local_40;
                    pcVar19 = local_44;
                    if (local_6c != 0x80000000) {
                      uVar15 = local_44._2_2_;
                      local_44 = pcVar19;
                      uVar22 = local_40._2_2_;
                      local_40 = pcVar25;
                      pcVar19 = local_44;
                      local_44._2_2_ = uVar15;
                      pcVar25 = local_40;
                      local_40._2_2_ = uVar22;
                      FUN_0134bd64(local_6c,pcVar18);
                      pcVar25 = local_40;
                      pcVar19 = local_44;
                    }
                    local_40 = pcVar25;
                    local_44 = pcVar19;
                    uVar22 = local_40._2_2_;
                    uVar15 = local_44._2_2_;
                    local_19c = (ushort)(local_204 >> 8);
                  }
                  else {
                    pcVar25 = local_44;
                    pcVar12 = local_40;
                    FUN_0134bd64(pcVar19,pcVar18);
                    uVar22 = local_40._2_2_;
                    uVar15 = local_44._2_2_;
                    pcVar19 = local_44;
                    local_44._2_2_ = uVar15;
                    pcVar18 = local_40;
                    local_40._2_2_ = uVar22;
                    FUN_0134aee0(pcVar28,pcVar11,2,8);
                    uVar22 = local_40._2_2_;
                    uVar15 = local_44._2_2_;
                    cVar29 = '\t';
                    local_16c = local_208;
                    local_19c = local_200;
                  }
                  local_40._2_2_ = uVar22;
                  local_44._2_2_ = uVar15;
                  uVar22 = local_40._2_2_;
                  uVar15 = local_44._2_2_;
                  uVar26 = (undefined1)local_204;
                  pcVar19 = local_44;
                  local_44._2_2_ = uVar15;
                  pcVar18 = local_40;
                  local_40._2_2_ = uVar22;
                  FUN_0134bd64(pcVar13,pcVar8);
                  pcVar18 = local_40;
                  pcVar19 = local_44;
                  pcVar25 = local_1fc;
                  uVar30 = stack0xffffffcc;
                  goto LAB_018e5d68;
                }
                pcVar25 = local_44;
                pcVar12 = local_40;
                FUN_0134bd64(pcVar19,pcVar18);
                pcVar18 = local_40;
                pcVar19 = local_44;
                pcVar25 = (char *)0x2;
                uVar15 = local_44._2_2_;
                local_44 = pcVar19;
                uVar22 = local_40._2_2_;
                local_40 = pcVar18;
                pcVar19 = local_44;
                local_44._2_2_ = uVar15;
                pcVar18 = local_40;
                local_40._2_2_ = uVar22;
                FUN_0134aee0(pcVar28,pcVar11,2,8);
                pcVar18 = local_40;
                pcVar19 = local_44;
                local_16c = &DAT_005239af;
                uVar26 = local_1ac;
                local_19c = extraout_r1;
                auVar6 = local_38;
                goto LAB_018e5c64;
              }
              local_16c = pcVar12;
              pcVar25 = local_48;
            }
            local_40._2_2_ = uVar3;
            local_44._2_2_ = uVar15;
            uVar22 = local_40._2_2_;
            uVar15 = local_44._2_2_;
            local_38._4_4_ = SUB84((ulonglong)auVar6 >> 0x20,0);
            local_38._0_4_ = SUB84(auVar6,0);
            uVar30 = CONCAT44(local_30,local_38._4_4_);
            local_19c = (ushort)((uint)pcVar18 >> 0x10);
            uVar26 = (undefined1)((uint)pcVar18 >> 8);
            cVar29 = (char)pcVar18;
            pcVar19 = local_44;
            pcVar18 = local_40;
            local_44._2_2_ = uVar15;
            local_40._2_2_ = uVar22;
LAB_018e5d68:
            local_40 = pcVar18;
            local_44 = pcVar19;
            uVar22 = local_40._2_2_;
            uVar15 = local_44._2_2_;
            param_1[2] = local_16c;
            *param_1 = 1;
            param_1[3] = pcVar25;
            *(ushort *)((int)param_1 + 6) = local_19c;
            *(undefined1 *)((int)param_1 + 5) = uVar26;
            *(char *)(param_1 + 1) = cVar29;
            pcVar19 = local_44;
            local_44._2_2_ = uVar15;
            pcVar18 = local_40;
            local_40._2_2_ = uVar22;
            unique0x100012c3 = uVar30;
            FUN_018e3a84(&local_158);
            return;
          }
          uVar15 = local_44._2_2_;
          uVar22 = local_40._2_2_;
          pcVar19 = local_44;
          local_44._2_2_ = uVar15;
          pcVar18 = local_40;
          local_40._2_2_ = uVar22;
          FUN_0193a93c(&local_a4,(int)uVar31);
          pcVar25 = local_40;
          pcVar18 = local_44;
          local_184._0_2_ = uVar2 << 8 | uVar2 >> 8;
          pcVar19 = (char *)0x80000000;
          uVar27 = 1;
          local_170 = local_a0;
          pcVar28 = pcStack_9c;
          cVar29 = local_a4;
          uVar26 = local_a3;
          local_19c = local_a2;
          uVar33 = uVar7;
LAB_018e5434:
          local_40 = pcVar25;
          local_44 = pcVar18;
          uVar22 = local_40._2_2_;
          uVar15 = local_44._2_2_;
          iVar21 = local_150;
          local_138 = local_d0;
          uStack_134 = uStack_cc;
          uStack_130 = uStack_c8;
          local_148 = local_e0;
          uStack_144 = uStack_dc;
          uStack_140 = uStack_d8;
          if (pcVar19 == (char *)0x80000001) {
            local_16c = local_170;
            pcVar18 = local_44;
            pcVar25 = local_40;
            local_44._2_2_ = uVar15;
            local_40._2_2_ = uVar22;
            auVar6 = local_38;
LAB_018e5dac:
            local_40 = pcVar25;
            local_44 = pcVar18;
            uVar22 = local_40._2_2_;
            uVar15 = local_44._2_2_;
            local_38._4_4_ = SUB84((ulonglong)auVar6 >> 0x20,0);
            local_38._0_4_ = SUB84(auVar6,0);
            pcVar25 = pcVar28;
            pcVar19 = local_44;
            pcVar18 = local_40;
            local_44._2_2_ = uVar15;
            local_40._2_2_ = uVar22;
            uVar30 = CONCAT44(local_30,local_38._4_4_);
            goto LAB_018e5d68;
          }
          local_118 = CONCAT22((ushort)local_184,uVar27);
          local_114 = local_d0;
          uStack_110 = uStack_cc;
          uStack_10c = uStack_c8;
          local_100 = local_1d0;
          local_104 = local_1d4;
          local_108 = local_1cc;
          local_fc = local_e0;
          uStack_f8 = uStack_dc;
          uStack_f4 = uStack_d8;
          local_f0 = CONCAT31(local_f0._1_3_,local_1ac);
          local_120 = local_170;
          local_124 = CONCAT31(CONCAT21(local_19c,uVar26),cVar29);
          local_128 = pcVar19;
          pcStack_11c = pcVar28;
          pcVar19 = local_44;
          pcVar18 = local_40;
          uVar30 = local_164;
          if (local_150 == local_158) {
            local_44._2_2_ = uVar15;
            local_40._2_2_ = uVar22;
            FUN_018faa34(&local_158);
            pcVar18 = local_40;
            pcVar19 = local_44;
            uVar15 = local_44._2_2_;
            uVar22 = local_40._2_2_;
            uVar30 = local_164;
          }
          local_40._2_2_ = uVar22;
          local_44._2_2_ = uVar15;
          local_40 = pcVar18;
          local_44 = pcVar19;
          uVar22 = local_40._2_2_;
          uVar15 = local_44._2_2_;
          local_164._4_4_ = (uint)((ulonglong)uVar30 >> 0x20);
          puVar16 = (undefined4 *)(local_154 + iVar21 * 0x3c);
          *puVar16 = local_128;
          puVar16[1] = local_124;
          puVar16[2] = local_120;
          puVar16[3] = pcStack_11c;
          puVar16[4] = local_118;
          puVar16[5] = local_114;
          puVar16[6] = uStack_110;
          puVar16[7] = uStack_10c;
          puVar16[8] = local_108;
          puVar16[9] = local_104;
          puVar16[10] = local_100;
          puVar16[0xb] = local_fc;
          puVar16[0xc] = uStack_f8;
          puVar16[0xd] = uStack_f4;
          puVar16[0xe] = local_f0;
          local_150 = iVar21 + 1;
          local_19c = (ushort)(uVar2 != 0xdfe);
          uVar5 = uVar31;
          uVar7 = uVar33;
        } while (local_15c < local_164._4_4_);
      }
      param_1[1] = local_158;
      param_1[2] = local_154;
      param_1[3] = local_150;
      *param_1 = 0;
    }
  }
  else {
    *(char *)(param_1 + 1) = local_98;
    *(undefined1 *)((int)param_1 + 7) = uStack_95;
    *(ushort *)((int)param_1 + 5) = CONCAT11(uStack_96,uStack_97);
    param_1[2] = CONCAT22(uStack_92,local_94);
    param_1[3] = local_90;
    *param_1 = 1;
  }
  return;
}

