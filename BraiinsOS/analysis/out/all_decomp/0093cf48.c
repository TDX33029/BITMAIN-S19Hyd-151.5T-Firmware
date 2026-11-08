// FUN_0093cf48 @ 0093cf48 size=4000 calls_out=23 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0093cf48(undefined4 *param_1,uint *param_2)

{
  bool bVar1;
  uint **ppuVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint **ppuVar10;
  uint uVar11;
  uint *unaff_r8;
  uint *puVar12;
  undefined1 uVar13;
  uint *extraout_r12;
  uint *extraout_r12_00;
  uint *extraout_r12_01;
  uint *extraout_r12_02;
  uint *extraout_r12_03;
  uint *extraout_r12_04;
  uint *extraout_r12_05;
  uint *extraout_r12_06;
  uint *extraout_r12_07;
  uint *extraout_r12_08;
  uint *extraout_r12_09;
  uint *extraout_r12_10;
  uint *extraout_r12_11;
  uint *extraout_r12_12;
  uint *extraout_r12_13;
  uint *extraout_r12_14;
  uint *extraout_r12_15;
  uint *extraout_r12_16;
  uint *extraout_r12_17;
  uint *puVar14;
  uint *extraout_r12_18;
  uint *extraout_r12_19;
  uint *extraout_r12_20;
  uint *extraout_r12_21;
  uint *extraout_r12_22;
  uint *extraout_r12_23;
  uint *extraout_r12_24;
  uint *extraout_r12_25;
  uint *extraout_r12_26;
  uint *extraout_r12_27;
  uint *extraout_r12_28;
  uint *extraout_r12_29;
  uint *extraout_r12_30;
  uint *extraout_r12_31;
  uint *extraout_r12_32;
  uint *extraout_r12_33;
  uint *extraout_r12_34;
  uint *extraout_r12_35;
  uint *extraout_r12_36;
  uint *extraout_r12_37;
  uint *extraout_r12_38;
  uint *extraout_r12_39;
  uint *extraout_r12_40;
  uint *extraout_r12_41;
  uint *puVar15;
  uint in_fpscr;
  double unaff_d8;
  double in_d16;
  double dVar16;
  ulonglong uVar17;
  uint *local_1d4;
  uint local_1cc;
  uint *local_1c4;
  uint **local_1c0;
  uint local_1bc;
  uint *local_1b8;
  uint *local_1b4;
  uint *local_1ac;
  uint *local_1a8;
  uint **local_1a4;
  uint **local_1a0;
  uint *local_19c;
  uint *local_198;
  uint *local_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  uint local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f0;
  uint *local_ec;
  uint *local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  uint **local_b0;
  uint *local_ac;
  uint *local_a8;
  uint **local_a4;
  uint *local_a0;
  uint *local_9c;
  uint *local_98;
  undefined4 local_94;
  uint *local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int local_58;
  uint *local_54;
  int local_4c;
  uint *local_48;
  uint *local_40;
  uint *local_3c;
  
  uVar9 = param_2[5];
  if (uVar9 < param_2[4]) {
    do {
      uVar11 = (uint)*(byte *)(param_2[3] + uVar9);
      if ((0x17 < uVar11 - 9) || ((1 << (uVar11 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar11 == 0x5b) {
          cVar3 = (char)param_2[9] + -1;
          *(char *)(param_2 + 9) = cVar3;
          if (cVar3 != '\0') {
            param_2[5] = uVar9 + 1;
            local_3c = (uint *)CONCAT31(local_3c._1_3_,1);
            ppuVar10 = (uint **)0x93d448;
            local_40 = param_2;
            FUN_005e5d80(&local_f0,&local_40);
            puVar6 = extraout_r12_13;
            if ((char)local_f0 == '\x01') {
LAB_0093d488:
              local_1c4 = (uint *)0x0;
              local_1c0 = (uint **)&DAT_00000005;
              local_1ac = local_ec;
            }
            else {
              if (local_f0._1_1_ != '\x01') {
                ppuVar10 = (uint **)0x93d894;
                local_ec = (uint *)FUN_00f2c2f0(0,&DAT_018673c8,&DAT_018ab990);
                puVar6 = extraout_r12_22;
                goto LAB_0093d488;
              }
              ppuVar10 = (uint **)0x93d474;
              FUN_008fb41c(&local_58,local_40);
              if (local_58 == -0x80000000) {
                local_ec = local_54;
                puVar6 = extraout_r12_14;
                goto LAB_0093d488;
              }
              FUN_0093a464(&local_f0,&local_58);
              if ((char)local_f0 == '\x01') {
                ppuVar10 = (uint **)0x93d948;
                local_ec = (uint *)FUN_00954ac4(local_ec);
                puVar6 = extraout_r12_27;
                goto LAB_0093d488;
              }
              puVar8 = (uint *)((uint)local_f0 >> 8 & 0xff);
              uVar13 = (undefined1)((uint)local_f0 >> 0x10);
              ppuVar10 = (uint **)0x93d600;
              FUN_005e5d80(&local_f0,&local_40);
              puVar6 = extraout_r12_15;
              if ((char)local_f0 == '\x01') goto LAB_0093d488;
              if (local_f0._1_1_ != '\x01') {
                ppuVar10 = (uint **)0x93da58;
                local_ec = (uint *)FUN_00f2c2f0(1,&DAT_018673c8,&DAT_018ab990);
                puVar6 = extraout_r12_33;
                goto LAB_0093d488;
              }
              ppuVar10 = (uint **)0x93d624;
              FUN_008fb41c(&local_f0,local_40);
              puVar7 = local_e8;
              puVar15 = local_ec;
              ppuVar2 = local_f0;
              puVar6 = extraout_r12_16;
              if (local_f0 == (uint **)&DAT_80000000) goto LAB_0093d488;
              ppuVar10 = (uint **)0x93d64c;
              FUN_005e5d80(&local_f0,&local_40);
              puVar6 = extraout_r12_17;
              local_1a8 = puVar8;
              local_1bc._0_1_ = uVar13;
              if ((char)local_f0 == '\x01') {
LAB_0093d658:
                local_1a0 = (uint **)local_ec;
LAB_0093deac:
                local_1c4 = (uint *)0x0;
                local_1c0 = (uint **)&DAT_00000005;
                if (ppuVar2 != (uint **)0x0) {
                  ppuVar10 = (uint **)0x93decc;
                  thunk_FUN_016d3fb4(puVar15);
                  puVar6 = extraout_r12_41;
                }
                local_1ac = (uint *)local_1a0;
              }
              else {
                uVar4 = 2;
                if (local_f0._1_1_ != '\x01') {
LAB_0093de94:
                  ppuVar10 = (uint **)0x93dea8;
                  local_1a0 = (uint **)FUN_00f2c2f0(uVar4,&DAT_018673c8,&DAT_018ab990);
                  puVar6 = extraout_r12_40;
                  goto LAB_0093deac;
                }
                ppuVar10 = (uint **)0x93d8cc;
                uVar17 = FUN_008faf0c(local_40);
                puVar8 = (uint *)(uVar17 >> 0x20);
                if ((uVar17 & 1) != 0) {
                  local_1a0 = (uint **)puVar8;
                  puVar6 = extraout_r12_24;
                  goto LAB_0093deac;
                }
                ppuVar10 = (uint **)0x93d9a4;
                FUN_005e5d80(&local_f0,&local_40);
                puVar6 = extraout_r12_29;
                if ((char)local_f0 == '\x01') goto LAB_0093d658;
                uVar4 = 3;
                if (local_f0._1_1_ != '\x01') goto LAB_0093de94;
                ppuVar10 = (uint **)0x93d9c8;
                uVar17 = FUN_008faf0c(local_40);
                local_1a0 = (uint **)(uVar17 >> 0x20);
                puVar6 = extraout_r12_30;
                if ((uVar17 & 1) != 0) goto LAB_0093deac;
                ppuVar10 = (uint **)0x93d9e0;
                FUN_005e5d80(&local_f0,&local_40);
                puVar6 = extraout_r12_31;
                if ((char)local_f0 == '\x01') goto LAB_0093d658;
                uVar4 = 4;
                if (local_f0._1_1_ != '\x01') goto LAB_0093de94;
                ppuVar10 = (uint **)0x93da0c;
                FUN_0093e13c(&local_f0,local_40);
                local_1ac = local_e8;
                local_1c4 = local_ec;
                local_1c0 = local_f0;
                local_1a4 = ppuVar2;
                local_19c = puVar8;
                if (local_f0 == (uint **)&DAT_00000005 && local_ec == (uint *)0x0) {
                  local_ec = extraout_r12_32;
LAB_0093de4c:
                  local_1a0 = (uint **)local_e8;
                  puVar6 = local_ec;
                  goto LAB_0093deac;
                }
                ppuVar10 = (uint **)0x93de3c;
                FUN_005e5d80(&local_f0,&local_40);
                if ((char)local_f0 == '\x01') {
                  local_e8 = local_ec;
                  local_ec = extraout_r12_39;
                  goto LAB_0093de4c;
                }
                uVar4 = 5;
                if (local_f0._1_1_ != '\x01') goto LAB_0093de94;
                ppuVar10 = (uint **)0x93de7c;
                FUN_0094eddc(&local_f0,local_40);
                if (local_f0 == (uint **)&DAT_80000000) {
                  local_e8 = local_ec;
                  goto LAB_0093de4c;
                }
                local_1b4 = local_e8;
                in_d16 = (double)VectorUnsignedToFloat(puVar8,(byte)(in_fpscr >> 0x16) & 3);
                local_158 = local_e4;
                uStack_154 = uStack_e0;
                uStack_150 = uStack_dc;
                uStack_14c = uStack_d8;
                uStack_148 = local_d4;
                local_144 = local_d0;
                uStack_140 = uStack_cc;
                uStack_13c = uStack_c8;
                uStack_138 = local_c4;
                uStack_134 = uStack_c0;
                uStack_130 = uStack_bc;
                in_d16 = in_d16 / 1000.0;
                local_19c = puVar15;
                local_1b8 = puVar7;
                puVar6 = local_ec;
                ppuVar10 = local_f0;
              }
            }
            *(char *)(param_2 + 9) = (char)param_2[9] + '\x01';
            local_e4 = local_158;
            uStack_e0 = uStack_154;
            uStack_dc = uStack_150;
            uStack_d8 = uStack_14c;
            local_d4 = uStack_148;
            local_d0 = local_144;
            uStack_cc = uStack_140;
            uStack_c8 = uStack_13c;
            local_c4 = uStack_138;
            uStack_c0 = uStack_134;
            uStack_bc = uStack_130;
            local_94 = (uint *)CONCAT31(CONCAT21(local_94._2_2_,(byte)local_1bc),(char)local_1a8);
            local_98 = (uint *)local_1a0;
            local_9c = local_1b4;
            local_a8 = local_1b8;
            local_ac = local_19c;
            local_b0 = local_1a4;
            local_f0 = local_1c0;
            local_ec = local_1c4;
            local_e8 = local_1ac;
            local_b8 = in_d16;
            local_a4 = ppuVar10;
            local_a0 = puVar6;
            puVar8 = (uint *)FUN_008fad50(param_2);
            uStack_fc = (undefined4)local_b8;
            uStack_f8 = local_b8._4_4_;
            local_40 = local_98;
            local_3c = local_94;
            local_1a0 = ppuVar10;
            local_1a8 = puVar6;
            if (!(local_1c0 != (uint **)&DAT_00000005 || local_1c4 != (uint *)0x0)) {
              local_1b8 = local_1c4;
              if (puVar8 == (uint *)0x0) goto LAB_0093dd08;
              FUN_005c3974();
              goto LAB_0093dce0;
            }
            if (puVar8 == (uint *)0x0) goto LAB_0093dd38;
            local_1b8 = local_1c4;
            if (local_1a4 != (uint **)0x0) goto LAB_0093d598;
            goto LAB_0093d5a0;
          }
        }
        else {
          if (uVar11 != 0x7b) {
            local_1ac = (uint *)FUN_005b8238(param_2,&local_f0,&DAT_01867518);
            goto LAB_0093dde4;
          }
          cVar3 = (char)param_2[9] + -1;
          *(char *)(param_2 + 9) = cVar3;
          if (cVar3 != '\0') {
            param_2[5] = uVar9 + 1;
            local_8c = 1;
            local_1c0 = (uint **)&DAT_00000005;
            local_1bc = 2;
            local_1a0 = (uint **)&DAT_80000000;
            local_1a4 = (uint **)&DAT_80000000;
            local_1c4 = (uint *)0x0;
            local_1b4 = (uint *)0x0;
            bVar1 = false;
            puVar6 = (uint *)&DAT_00000001;
            local_90 = param_2;
            goto LAB_0093d058;
          }
        }
        local_f0 = (uint **)0x18;
        uVar4 = FUN_008f9984(param_2,&local_f0);
        goto LAB_0093ddec;
      }
      uVar9 = uVar9 + 1;
      param_2[5] = uVar9;
    } while (param_2[4] != uVar9);
  }
  local_f0 = (uint **)0x5;
  uVar4 = FUN_008f9984(param_2,&local_f0);
  *param_1 = 5;
  param_1[1] = 0;
  param_1[2] = uVar4;
  return;
LAB_0093d058:
  do {
    puVar15 = (uint *)0x93d068;
    FUN_008fa450(&local_f0,&local_90);
    puVar8 = local_90;
    ppuVar10 = local_1a4;
    if ((char)local_f0 == '\x01') {
      puVar7 = local_ec;
      puVar14 = extraout_r12;
      goto LAB_0093d664;
    }
    if (local_f0._1_1_ != '\x01') {
      if (local_1bc == 2) {
        puVar15 = (uint *)0x93d6b4;
        FUN_0093e0dc(&local_f0);
        if ((char)local_f0 == '\x01') {
          puVar7 = local_ec;
          puVar14 = extraout_r12_18;
          goto LAB_0093db9c;
        }
        local_1bc._0_1_ = (byte)((uint)local_f0 >> 8);
        local_1cc._0_1_ = (undefined1)((uint)local_f0 >> 0x10);
      }
      if (local_1a4 == (uint **)&DAT_80000000) {
        local_ec = &DAT_0157d360;
        local_f0 = &local_40;
        local_3c = (uint *)&DAT_0000000b;
        local_40 = (uint *)&DAT_0035b83a;
        puVar15 = (uint *)0x93d7a0;
        puVar7 = (uint *)FUN_00f56780(&DAT_0057a25d,&local_f0);
        bVar1 = true;
        ppuVar10 = (uint **)0x0;
        puVar14 = extraout_r12_19;
        goto LAB_0093dba4;
      }
      if (bVar1) {
        if (local_1b4 == (uint *)0x0) {
          local_ec = &DAT_0157d360;
          local_f0 = &local_40;
          local_3c = (uint *)&DAT_00000011;
          local_40 = (uint *)&DAT_0035b854;
          puVar15 = (uint *)0x93d918;
          puVar7 = (uint *)FUN_00f56780(&DAT_0057a25d,&local_f0);
          puVar14 = extraout_r12_25;
        }
        else if (local_1c0 == (uint **)&DAT_00000005 && local_1c4 == (uint *)0x0) {
          local_ec = &DAT_0157d360;
          local_f0 = &local_40;
          local_3c = (uint *)&DAT_0000000c;
          local_40 = (uint *)&DAT_0035b865;
          puVar15 = (uint *)0x93d814;
          puVar7 = (uint *)FUN_00f56780(&DAT_0057a25d,&local_f0);
          puVar14 = extraout_r12_20;
        }
        else {
          if (local_1a0 != (uint **)&DAT_80000000) {
            local_158 = local_88;
            uStack_154 = uStack_84;
            uStack_150 = uStack_80;
            uStack_14c = uStack_7c;
            uStack_148 = uStack_78;
            local_144 = local_74;
            uStack_140 = uStack_70;
            uStack_13c = uStack_6c;
            uStack_138 = uStack_68;
            uStack_134 = uStack_64;
            uStack_130 = uStack_60;
            local_1bc._0_1_ = (byte)local_1bc & 1;
            puVar15 = local_1b8;
            local_1b4 = puVar6;
            goto LAB_0093dbf0;
          }
          local_ec = &DAT_0157d360;
          local_f0 = &local_40;
          local_3c = (uint *)&DAT_0000000a;
          local_40 = (uint *)&DAT_0035b871;
          puVar15 = (uint *)0x93d994;
          puVar7 = (uint *)FUN_00f56780(&DAT_0057a25d,&local_f0);
          puVar14 = extraout_r12_28;
        }
      }
      else {
        local_ec = &DAT_0157d360;
        local_f0 = &local_40;
        local_3c = (uint *)&DAT_0000000f;
        local_40 = (uint *)0x35b845;
        puVar15 = (uint *)0x93d850;
        puVar7 = (uint *)FUN_00f56780(&DAT_0057a25d,&local_f0);
        puVar14 = extraout_r12_21;
      }
      bVar1 = false;
      if (local_1a4 == (uint **)0x0) {
        ppuVar10 = (uint **)0x0;
      }
      else {
        puVar15 = (uint *)0x93d934;
        thunk_FUN_016d3fb4(unaff_r8);
        puVar14 = extraout_r12_26;
      }
      goto LAB_0093dba4;
    }
    local_90[2] = 0;
    local_90[5] = local_90[5] + 1;
    puVar15 = (uint *)0x93d0a8;
    FUN_0157e384(&local_f0,local_90 + 3,local_90);
    puVar14 = local_e8;
    puVar7 = local_ec;
    if (local_f0 == (uint **)&SUB_00000002) {
      puVar14 = extraout_r12_00;
      goto LAB_0093db9c;
    }
    puVar12 = local_e8;
    switch(local_e8) {
    case (uint *)0x5:
      goto switchD_0093d0d4_caseD_5;
    case (uint *)0x6:
    case (uint *)0x7:
    case (uint *)0x8:
    case (uint *)0x9:
    case (uint *)0xd:
    case (uint *)0xe:
    case (uint *)0x10:
      goto switchD_0093d0d4_caseD_6;
    case (uint *)0xa:
      puVar12 = (uint *)&DAT_0000000a;
      iVar5 = thunk_FUN_016dd50a(local_ec,&DAT_0035b871,10);
      if (iVar5 != 0) goto switchD_0093d0d4_caseD_6;
      if (local_1a0 != (uint **)&DAT_80000000) {
        local_40 = (uint *)&DAT_0035b871;
        goto LAB_0093db20;
      }
      puVar15 = (uint *)0x93d3cc;
      puVar6 = (uint *)FUN_01114eb4(puVar8);
      puVar14 = extraout_r12_11;
      if (puVar6 == (uint *)0x0) {
        puVar15 = (uint *)0x93d3e4;
        FUN_0094eddc(&local_f0,puVar8);
        puVar6 = local_ec;
        puVar14 = extraout_r12_12;
        if (local_f0 != (uint **)&DAT_80000000) {
          local_1a8 = local_ec;
          local_1a0 = local_f0;
          puVar6 = local_e8;
          goto LAB_0093d058;
        }
      }
      bVar1 = true;
      local_1ac = puVar6;
      goto LAB_0093dbd0;
    case (uint *)0xb:
      puVar12 = (uint *)&DAT_0000000b;
      iVar5 = thunk_FUN_016dd50a(local_ec,&DAT_0035b83a,0xb);
      if (iVar5 != 0) goto switchD_0093d0d4_caseD_6;
      if (local_1a4 != (uint **)&DAT_80000000) {
        local_40 = (uint *)&DAT_0035b83a;
        goto LAB_0093db20;
      }
      puVar15 = (uint *)0x93d2cc;
      puVar7 = (uint *)FUN_01114eb4(puVar8);
      puVar14 = extraout_r12_07;
      if (puVar7 == (uint *)0x0) {
        puVar15 = (uint *)0x93d2e4;
        FUN_008fb41c(&local_f0,puVar8);
        puVar7 = local_ec;
        puVar14 = extraout_r12_08;
        if (local_f0 != (uint **)&DAT_80000000) {
          local_1b8 = local_e8;
          local_1a4 = local_f0;
          unaff_r8 = local_ec;
          goto LAB_0093d058;
        }
      }
      bVar1 = true;
      ppuVar10 = (uint **)0x0;
      goto LAB_0093dba8;
    case (uint *)0xc:
      puVar12 = (uint *)&DAT_0000000c;
      iVar5 = thunk_FUN_016dd50a(local_ec,&DAT_0035b865,0xc);
      if (iVar5 != 0) goto switchD_0093d0d4_caseD_6;
      if (local_1c0 != (uint **)&DAT_00000005 || local_1c4 != (uint *)0x0) {
        local_40 = (uint *)&DAT_0035b865;
        goto LAB_0093db20;
      }
      puVar15 = (uint *)0x93d14c;
      puVar7 = (uint *)FUN_01114eb4(puVar8);
      puVar14 = extraout_r12_01;
      if (puVar7 != (uint *)0x0) goto LAB_0093d664;
      puVar15 = (uint *)0x93d164;
      FUN_0093e13c(&local_f0,puVar8);
      local_1c0 = local_f0;
      local_1c4 = local_ec;
      puVar7 = local_e8;
      puVar14 = extraout_r12_02;
      if (local_f0 == (uint **)&DAT_00000005 && local_ec == (uint *)0x0) goto LAB_0093d664;
      local_1ac = local_e8;
      local_88 = local_e4;
      uStack_84 = uStack_e0;
      uStack_80 = uStack_dc;
      uStack_7c = uStack_d8;
      uStack_78 = local_d4;
      local_74 = local_d0;
      uStack_70 = uStack_cc;
      uStack_6c = uStack_c8;
      uStack_68 = local_c4;
      uStack_64 = uStack_c0;
      uStack_60 = uStack_bc;
      break;
    case (uint *)0xf:
      puVar12 = (uint *)&DAT_0000000f;
      iVar5 = thunk_FUN_016dd50a(local_ec,0x35b845,0xf);
      if (iVar5 != 0) goto switchD_0093d0d4_caseD_6;
      if (bVar1) {
        local_40 = (uint *)0x35b845;
        goto LAB_0093db20;
      }
      puVar15 = (uint *)0x93d240;
      puVar7 = (uint *)FUN_01114eb4(puVar8);
      puVar14 = extraout_r12_04;
      if (puVar7 != (uint *)0x0) goto LAB_0093d664;
      puVar15 = (uint *)0x93d254;
      uVar17 = FUN_008faf0c(puVar8);
      puVar7 = (uint *)(uVar17 >> 0x20);
      puVar14 = extraout_r12_05;
      if ((uVar17 & 1) != 0) goto LAB_0093d664;
      bVar1 = true;
      dVar16 = (double)VectorUnsignedToFloat(puVar7,(byte)(in_fpscr >> 0x16) & 3);
      unaff_d8 = dVar16 / 1000.0;
      break;
    case (uint *)0x11:
      puVar12 = (uint *)&DAT_00000011;
      iVar5 = thunk_FUN_016dd50a(local_ec,&DAT_0035b854,0x11);
      if (iVar5 != 0) goto switchD_0093d0d4_caseD_6;
      if (local_1b4 != (uint *)0x0) {
        local_40 = (uint *)&DAT_0035b854;
        goto LAB_0093db20;
      }
      puVar15 = (uint *)0x93d1ec;
      local_1d4 = (uint *)FUN_01114eb4(puVar8);
      puVar14 = extraout_r12_03;
      if (local_1d4 != (uint *)0x0) {
LAB_0093d854:
        bVar1 = true;
        puVar7 = local_1d4;
        goto LAB_0093dba8;
      }
      puVar15 = (uint *)0x93d280;
      uVar17 = FUN_008faf0c(puVar8);
      local_1d4 = (uint *)(uVar17 >> 0x20);
      puVar14 = extraout_r12_06;
      if ((uVar17 & 1) != 0) goto LAB_0093d854;
      local_1b4 = (uint *)&DAT_00000001;
      break;
    default:
      goto switchD_0093d0d4_caseD_6;
    }
  } while( true );
switchD_0093d0d4_caseD_5:
  puVar12 = (uint *)&DAT_00000005;
  iVar5 = thunk_FUN_016dd50a(local_ec,&DAT_0035b835,5);
  if (iVar5 == 0) {
    if (local_1bc == 2) {
      puVar15 = (uint *)0x93d344;
      puVar7 = (uint *)FUN_01114eb4(puVar8);
      puVar14 = extraout_r12_09;
      if (puVar7 == (uint *)0x0) {
        puVar15 = (uint *)0x93d35c;
        FUN_008fb41c(&local_4c,puVar8);
        if (local_4c == -0x80000000) {
          puVar7 = local_48;
          puVar14 = extraout_r12_10;
        }
        else {
          FUN_0093a464(&local_f0,&local_4c);
          if ((char)local_f0 != '\x01') {
            local_1bc = (uint)local_f0 >> 8 & 0xff;
            local_1cc = (uint)local_f0 >> 0x10 & 0xff;
            goto LAB_0093d058;
          }
          puVar15 = (uint *)0x93d8ac;
          puVar7 = (uint *)FUN_00954ac4(local_ec);
          puVar14 = extraout_r12_23;
        }
      }
LAB_0093d664:
      bVar1 = true;
      goto LAB_0093dba8;
    }
    local_40 = (uint *)&DAT_0035b835;
LAB_0093db20:
    local_ec = &DAT_0157d360;
    local_f0 = &local_40;
    local_3c = puVar14;
    puVar15 = (uint *)0x93db64;
    puVar7 = (uint *)FUN_00f56780(&DAT_00582dbd,&local_f0);
    puVar14 = extraout_r12_34;
  }
  else {
switchD_0093d0d4_caseD_6:
    puVar15 = (uint *)0x93db98;
    puVar7 = (uint *)FUN_00953cf8(puVar7,puVar12,&DAT_0187d188,6);
    puVar14 = extraout_r12_35;
  }
LAB_0093db9c:
  bVar1 = true;
LAB_0093dba4:
LAB_0093dba8:
  local_1ac = puVar7;
  if (local_1a0 != (uint **)&DAT_80000000) {
    puVar15 = (uint *)0x93dbc0;
    FUN_009539c8(local_1a8,puVar6);
    puVar14 = extraout_r12_36;
    if (local_1a0 != (uint **)0x0) {
      puVar15 = (uint *)0x93dbd0;
      thunk_FUN_016d3fb4(local_1a8);
      puVar14 = extraout_r12_37;
    }
  }
LAB_0093dbd0:
  local_1c4 = (uint *)0x0;
  local_1c0 = (uint **)&DAT_00000005;
  local_1a8 = puVar14;
  if (bVar1 && ((uint)ppuVar10 & 0x7fffffff) != 0) {
    puVar15 = (uint *)0x93dbec;
    thunk_FUN_016d3fb4(unaff_r8);
    local_1a8 = extraout_r12_38;
  }
LAB_0093dbf0:
  *(char *)(param_2 + 9) = (char)param_2[9] + '\x01';
  local_e4 = local_158;
  uStack_e0 = uStack_154;
  uStack_dc = uStack_150;
  uStack_d8 = uStack_14c;
  local_d4 = uStack_148;
  local_d0 = local_144;
  uStack_cc = uStack_140;
  uStack_c8 = uStack_13c;
  local_c4 = uStack_138;
  uStack_c0 = uStack_134;
  uStack_bc = uStack_130;
  local_94 = (uint *)CONCAT31(CONCAT21(local_94._2_2_,(undefined1)local_1cc),(byte)local_1bc);
  local_98 = local_1d4;
  local_9c = local_1b4;
  local_a4 = local_1a0;
  local_b0 = local_1a4;
  local_f0 = local_1c0;
  local_ec = local_1c4;
  local_e8 = local_1ac;
  local_b8 = unaff_d8;
  local_ac = unaff_r8;
  local_a8 = puVar15;
  local_a0 = local_1a8;
  puVar8 = (uint *)FUN_008fb5ec(param_2);
  local_1b8 = &local_c4;
  uStack_fc = (undefined4)local_b8;
  uStack_f8 = local_b8._4_4_;
  local_40 = local_98;
  local_3c = local_94;
  local_19c = unaff_r8;
  if (local_1c0 == (uint **)&DAT_00000005 && local_1c4 == (uint *)0x0) {
    if (puVar8 == (uint *)0x0) {
LAB_0093dd08:
      local_1c4 = (uint *)0x0;
      local_1c0 = (uint **)&DAT_00000005;
      local_40 = local_98;
      local_3c = local_94;
      goto LAB_0093dd54;
    }
    FUN_005c3974(puVar8);
    local_1c4 = local_1b8;
LAB_0093dce0:
    thunk_FUN_016d3fb4(puVar8);
    local_1b8 = local_1c4;
  }
  else {
    if (puVar8 == (uint *)0x0) {
      local_1b8 = puVar15;
LAB_0093dd38:
      local_194 = local_94;
      local_198 = local_98;
      local_190 = local_e4;
      uStack_18c = uStack_e0;
      uStack_188 = uStack_dc;
      uStack_184 = uStack_d8;
      local_180 = local_d4;
      uStack_17c = local_d0;
      uStack_178 = uStack_cc;
      uStack_174 = uStack_c8;
      local_170 = local_c4;
      uStack_16c = uStack_c0;
      uStack_168 = uStack_bc;
      uStack_164 = uStack_fc;
      uStack_160 = uStack_f8;
      local_40 = local_98;
      local_3c = local_94;
      goto LAB_0093dd54;
    }
    local_1c4 = local_1b8;
    if (local_1a4 != (uint **)0x0) {
LAB_0093d598:
      local_40 = local_98;
      local_3c = local_94;
      thunk_FUN_016d3fb4(local_19c);
      local_1b8 = local_1c4;
    }
LAB_0093d5a0:
    FUN_009539c8(local_1a8,local_1b4);
    if (local_1a0 != (uint **)0x0) {
      thunk_FUN_016d3fb4(local_1a8);
    }
    local_1ac = puVar8;
  }
  local_1c4 = (uint *)0x0;
  local_1c0 = (uint **)&DAT_00000005;
LAB_0093dd54:
  if (local_1c0 != (uint **)&DAT_00000005 || local_1c4 != (uint *)0x0) {
    param_1[3] = local_190;
    param_1[4] = uStack_18c;
    param_1[5] = uStack_188;
    param_1[6] = uStack_184;
    param_1[7] = local_180;
    param_1[8] = uStack_17c;
    param_1[9] = uStack_178;
    param_1[10] = uStack_174;
    param_1[0xb] = local_170;
    param_1[0xc] = uStack_16c;
    param_1[0xd] = uStack_168;
    param_1[0xe] = uStack_164;
    param_1[0xf] = uStack_160;
    param_1[2] = local_1ac;
    param_1[0x11] = local_19c;
    param_1[0x12] = local_1b8;
    param_1[0x13] = local_1a0;
    param_1[0x14] = local_1a8;
    *param_1 = local_1c0;
    param_1[1] = local_1c4;
    param_1[0x10] = local_1a4;
    param_1[0x15] = local_1b4;
    param_1[0x16] = local_198;
    param_1[0x17] = local_194;
    return;
  }
LAB_0093dde4:
  uVar4 = FUN_00e959bc(local_1ac,param_2);
LAB_0093ddec:
  *param_1 = 5;
  param_1[1] = 0;
  param_1[2] = uVar4;
  return;
}

