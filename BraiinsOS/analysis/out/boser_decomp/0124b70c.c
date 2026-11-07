// FUN_0124b70c @ 0124b70c size=3280 calls_out=29 calls_in=1
// strings: model | default_frequency | vendor_name | default_voltage | perf_variant | hashboards

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0124b70c(undefined4 *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  char **ppcVar8;
  uint uVar9;
  char **ppcVar10;
  char **ppcVar11;
  uint uVar12;
  char **ppcVar13;
  char **ppcVar14;
  char **unaff_r9;
  char **ppcVar15;
  char **ppcVar16;
  char **ppcVar17;
  undefined1 extraout_r12;
  undefined1 extraout_r12_00;
  undefined1 uVar18;
  undefined1 extraout_r12_01;
  char **extraout_r12_02;
  char **extraout_r12_03;
  char **extraout_r12_04;
  char **extraout_r12_05;
  char **extraout_r12_06;
  char **extraout_r12_07;
  char **extraout_r12_08;
  char **extraout_r12_09;
  char **extraout_r12_10;
  char **extraout_r12_11;
  char **extraout_r12_12;
  char **extraout_r12_13;
  char **extraout_r12_14;
  char **extraout_r12_15;
  char **ppcVar19;
  char **extraout_r12_16;
  char **extraout_r12_17;
  char **extraout_r12_18;
  char **extraout_r12_19;
  byte bVar20;
  ulonglong uVar21;
  char **local_204;
  char **local_200;
  uint local_1fc;
  char **local_1f4;
  char **local_1f0;
  char **local_1e0;
  char **local_1dc;
  char **local_1d8;
  char **local_1d4;
  char **local_1d0;
  char **local_1c8;
  char **local_1c4;
  undefined1 auStack_1c0 [88];
  char **local_168;
  char **ppcStack_164;
  char **ppcStack_160;
  char **ppcStack_15c;
  char **ppcStack_158;
  char **local_154;
  char **ppcStack_150;
  char **ppcStack_14c;
  char **ppcStack_148;
  char **ppcStack_144;
  char **ppcStack_140;
  undefined4 local_138;
  char **local_134;
  char **local_130;
  char **ppcStack_12c;
  char **ppcStack_128;
  char **ppcStack_124;
  char **ppcStack_120;
  char **ppcStack_11c;
  char **local_118;
  char **ppcStack_114;
  char **ppcStack_110;
  char **ppcStack_10c;
  char **ppcStack_108;
  char **ppcStack_104;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 auStack_ec [20];
  char **local_d8;
  char **local_d0;
  char **local_cc;
  char **local_c8;
  char **local_c4;
  char **ppcStack_c0;
  char **local_bc;
  char **ppcStack_b8;
  char **ppcStack_b4;
  char **local_b0;
  char **ppcStack_ac;
  char **ppcStack_a8;
  char **ppcStack_a4;
  char **ppcStack_a0;
  char **ppcStack_9c;
  char **local_90;
  char **local_8c;
  char **local_88;
  char **local_84;
  char **local_80;
  char **local_7c;
  char **local_78;
  byte local_74;
  undefined1 local_73;
  char *local_70;
  undefined1 local_6c;
  char **local_68;
  char **ppcStack_64;
  char **ppcStack_60;
  char **ppcStack_5c;
  char **ppcStack_58;
  char **local_54;
  char **ppcStack_50;
  char **ppcStack_4c;
  char **ppcStack_48;
  char **ppcStack_44;
  char **ppcStack_40;
  char *local_38;
  undefined4 local_34;
  
  uVar9 = *(uint *)(param_2 + 0x14);
  if (uVar9 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar12 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar9);
      if ((0x17 < uVar12 - 9) || ((1 << (uVar12 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar12 == 0x5b) {
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar9 + 1;
            local_34 = CONCAT31(local_34._1_3_,1);
            bVar20 = 0x8c;
            local_38 = param_2;
            FUN_01965170(&local_138,&local_38);
            uVar18 = extraout_r12;
            if ((char)local_138 == '\x01') {
LAB_0124bbbc:
              ppcVar13 = (char **)0x0;
              ppcVar10 = (char **)&DAT_00000005;
              ppcVar11 = local_134;
            }
            else if (local_138._1_1_ == '\x01') {
              bVar20 = 0xb0;
              FUN_0124c5c8(&local_138,local_38);
              uVar18 = extraout_r12_00;
              if ((char)local_138 == '\x01') goto LAB_0124bbbc;
              bVar20 = local_138._1_1_;
              uVar18 = local_138._2_1_;
              FUN_01643378(&local_138,&local_38);
              ppcVar15 = local_134;
              ppcVar17 = local_138;
              if (local_138 == (char **)&DAT_80000001) {
                ppcVar11 = local_134;
              }
              else {
                if (local_138 != (char **)&DAT_80000000) {
                  local_1c4 = local_130;
                  FUN_01224fc0(&local_138,&local_38);
                  if (local_138 == (char **)0x2 && local_134 == (char **)0x0) {
                    ppcVar11 = local_130;
                  }
                  else {
                    if (((uint)local_138 & 1) == 0) {
                      uVar6 = 2;
                    }
                    else {
                      FUN_01225100(&local_138,&local_38);
                      ppcVar14 = local_134;
                      ppcVar11 = local_134;
                      if (local_138 == (char **)0x2) goto LAB_0124c1a4;
                      if (((uint)local_138 & 1) == 0) {
                        uVar6 = 3;
                      }
                      else {
                        unaff_r9 = (char **)&local_138;
                        FUN_01224cd4(unaff_r9,&local_38);
                        ppcVar11 = local_130;
                        ppcVar13 = local_134;
                        ppcVar10 = local_138;
                        if (local_138 == (char **)&DAT_00000006 && local_134 == (char **)0x0)
                        goto LAB_0124c1a4;
                        local_1d4 = ppcVar14;
                        local_1d0 = ppcVar15;
                        local_1c8 = ppcVar17;
                        local_d0 = ppcStack_12c;
                        local_cc = ppcStack_128;
                        local_c8 = ppcStack_124;
                        local_c4 = ppcStack_120;
                        ppcStack_c0 = ppcStack_11c;
                        local_bc = local_118;
                        ppcStack_b8 = ppcStack_114;
                        ppcStack_b4 = ppcStack_110;
                        local_b0 = ppcStack_10c;
                        ppcStack_ac = ppcStack_108;
                        ppcStack_a8 = ppcStack_104;
                        if (local_138 == (char **)&DAT_00000005 && local_134 == (char **)0x0) {
                          uVar6 = 4;
                        }
                        else {
                          FUN_01224f44(&local_138,&local_38);
                          if (local_138 == (char **)&DAT_80000001) {
                            ppcVar11 = local_134;
                            goto LAB_0124c1a4;
                          }
                          if (local_138 != (char **)&DAT_80000000) {
                            local_1d8 = local_134;
                            local_1dc = local_130;
                            local_168 = local_d0;
                            ppcStack_164 = local_cc;
                            ppcStack_160 = local_c8;
                            ppcStack_15c = local_c4;
                            ppcStack_158 = ppcStack_c0;
                            local_154 = local_bc;
                            ppcStack_150 = ppcStack_b8;
                            ppcStack_14c = ppcStack_b4;
                            ppcStack_148 = local_b0;
                            ppcStack_144 = ppcStack_ac;
                            ppcStack_140 = ppcStack_a8;
                            unaff_r9 = local_138;
                            goto LAB_0124bbc8;
                          }
                          uVar6 = 5;
                        }
                      }
                    }
                    local_1c8 = ppcVar17;
                    local_1d0 = ppcVar15;
                    ppcVar11 = (char **)FUN_014b5c7c(uVar6,&DAT_01c2498c,&DAT_01d064b8);
                  }
LAB_0124c1a4:
                  FUN_019bb7e0(ppcVar17,ppcVar15);
                  ppcVar13 = (char **)0x0;
                  ppcVar10 = (char **)&DAT_00000005;
                  goto LAB_0124bbc8;
                }
                ppcVar11 = (char **)FUN_014b5c7c(1,&DAT_01c2498c,&DAT_01d064b8);
              }
              ppcVar13 = (char **)0x0;
              ppcVar10 = (char **)&DAT_00000005;
            }
            else {
              ppcVar13 = (char **)0x0;
              ppcVar11 = (char **)FUN_014b5c7c(0,&DAT_01c2498c,&DAT_01d064b8);
              ppcVar10 = (char **)&DAT_00000005;
              bVar20 = 2;
              uVar18 = extraout_r12_01;
            }
LAB_0124bbc8:
            param_2[0x24] = param_2[0x24] + '\x01';
            local_c4 = local_168;
            ppcStack_c0 = ppcStack_164;
            local_bc = ppcStack_160;
            ppcStack_b8 = ppcStack_15c;
            ppcStack_b4 = ppcStack_158;
            local_b0 = local_154;
            ppcStack_ac = ppcStack_150;
            ppcStack_a8 = ppcStack_14c;
            ppcStack_a4 = ppcStack_148;
            ppcStack_a0 = ppcStack_144;
            ppcStack_9c = ppcStack_140;
            local_7c = local_1dc;
            local_80 = local_1d8;
            local_78 = local_1d4;
            local_88 = local_1c4;
            local_8c = local_1d0;
            local_90 = local_1c8;
            local_d0 = ppcVar10;
            local_cc = ppcVar13;
            local_c8 = ppcVar11;
            local_84 = unaff_r9;
            local_74 = bVar20;
            local_73 = uVar18;
            ppcVar10 = (char **)FUN_01964fb0(param_2);
            goto LAB_0124c084;
          }
        }
        else {
          if (uVar12 != 0x7b) {
            local_130 = (char **)FUN_019659c8(param_2,&local_138,&DAT_01c24adc);
            goto LAB_0124c2f0;
          }
          cVar1 = param_2[0x24];
          param_2[0x24] = cVar1 + -1;
          if ((char)(cVar1 + -1) != '\0') {
            *(uint *)(param_2 + 0x14) = uVar9 + 1;
            ppcVar17 = (char **)&local_138;
            local_6c = 1;
            local_1d0 = (char **)0x2;
            ppcVar10 = (char **)&DAT_00000005;
            ppcVar13 = (char **)&DAT_80000000;
            local_d0 = (char **)0x80000000;
            local_1c8 = (char **)0x0;
            local_1d4._0_1_ = 0;
            bVar2 = false;
            bVar4 = false;
            bVar3 = false;
            ppcVar11 = (char **)&DAT_80000000;
            local_70 = param_2;
            goto LAB_0124b810;
          }
        }
        local_138 = (char **)0x18;
        uVar6 = FUN_01964674(param_2,&local_138);
        goto LAB_0124c2fc;
      }
      uVar9 = uVar9 + 1;
      *(uint *)(param_2 + 0x14) = uVar9;
    } while (*(uint *)(param_2 + 0x10) != uVar9);
  }
  local_138 = (char **)0x5;
  uVar6 = FUN_01964674(param_2,&local_138);
  *param_1 = 5;
  param_1[1] = 0;
  param_1[2] = uVar6;
  return;
LAB_0124b810:
  do {
    uVar18 = 0x20;
    FUN_01965d20(ppcVar17,&local_70);
    ppcVar15 = unaff_r9;
    ppcVar19 = extraout_r12_02;
    ppcVar14 = ppcVar13;
    if ((char)local_138 == '\x01') {
LAB_0124bc48:
      ppcVar8 = local_134;
      ppcVar16 = ppcVar15;
      goto LAB_0124bf34;
    }
    if (local_138._1_1_ != '\x01') {
      local_c8 = local_1f4;
      local_cc = local_1f0;
      ppcVar17 = local_1d0;
      local_d0 = ppcVar11;
      if (local_1d0 == (char **)0x2) {
        local_1fc._0_1_ = 0xb8;
        FUN_0124c710(&local_138);
        if ((char)local_138 != '\0') {
          local_200 = local_134;
          ppcVar19 = extraout_r12_13;
          goto LAB_0124bcc8;
        }
        ppcVar17 = (char **)((uint)local_138 >> 8 & 0xff);
        local_1fc._0_1_ = (undefined1)((uint)local_138 >> 0x10);
      }
      if (ppcVar13 == (char **)&DAT_80000000) {
        local_134 = (char **)&LAB_018a13b8;
        local_138 = &local_38;
        local_34 = 0xb;
        local_38 = "vendor_name";
        local_1fc._0_1_ = 0x14;
        local_200 = (char **)FUN_019676ac(&DAT_0057cd64,&local_138);
        bVar2 = true;
        ppcVar14 = (char **)&DAT_80000000;
        ppcVar19 = extraout_r12_15;
        goto LAB_0124bfcc;
      }
      if (bVar3) {
        if (bVar4) {
          if (ppcVar10 == (char **)&DAT_00000005 && local_1c8 == (char **)0x0) {
            local_134 = (char **)&DAT_0132b6a0;
            local_138 = &local_38;
            local_34 = 0xc;
            local_38 = "perf_variant";
            local_200 = (char **)FUN_019676ac(&DAT_0057cd64,&local_138);
          }
          else {
            if (ppcVar11 != (char **)&DAT_80000000) {
              local_168 = local_68;
              ppcStack_164 = ppcStack_64;
              ppcStack_160 = ppcStack_60;
              ppcStack_15c = ppcStack_5c;
              ppcStack_158 = ppcStack_58;
              local_154 = local_54;
              ppcStack_150 = ppcStack_50;
              ppcStack_14c = ppcStack_4c;
              ppcStack_148 = ppcStack_48;
              ppcStack_144 = ppcStack_44;
              ppcStack_140 = ppcStack_40;
              local_1d4._0_1_ = (byte)ppcVar17 & 1;
              local_1d0 = unaff_r9;
              goto LAB_0124c00c;
            }
            local_134 = (char **)&DAT_0132b6a0;
            local_138 = &local_38;
            local_34 = 10;
            local_38 = "hashboards";
            local_200 = (char **)FUN_019676ac(&DAT_0057cd64,&local_138);
          }
        }
        else {
          local_134 = (char **)&DAT_0132b6a0;
          local_138 = &local_38;
          local_34 = 0x11;
          local_38 = "default_frequency";
          local_200 = (char **)FUN_019676ac(&DAT_0057cd64,&local_138);
        }
      }
      else {
        local_134 = (char **)&DAT_0132b6a0;
        local_138 = &local_38;
        local_34 = 0xf;
        local_38 = "default_voltage";
        local_200 = (char **)FUN_019676ac(&DAT_0057cd64,&local_138);
      }
      local_1fc._0_1_ = 200;
      FUN_019bb7e0(ppcVar13,local_1e0);
      bVar2 = false;
      ppcVar19 = extraout_r12_16;
      goto LAB_0124bfcc;
    }
    iVar7 = *(int *)(local_70 + 0x14);
    local_70[8] = '\0';
    local_70[9] = '\0';
    local_70[10] = '\0';
    local_70[0xb] = '\0';
    *(int *)(local_70 + 0x14) = iVar7 + 1;
    uVar18 = 0x5c;
    FUN_019686b4(ppcVar17,local_70 + 0xc);
    ppcVar15 = local_130;
    ppcVar8 = local_134;
    ppcVar16 = unaff_r9;
    ppcVar19 = extraout_r12_03;
    if (local_138 == (char **)0x2) goto LAB_0124bf34;
    ppcVar16 = ppcVar15;
    switch(local_130) {
    case (char **)0x5:
      iVar7 = thunk_FUN_01bed842(local_134,"model",5);
      pcVar5 = local_70;
      if (iVar7 != 0) goto switchD_0124b888_caseD_6;
      if (local_1d0 != (char **)0x2) {
        local_34 = 5;
        local_38 = "model";
        goto LAB_0124c350;
      }
      uVar18 = 0xfc;
      ppcVar8 = (char **)FUN_01965c98(local_70);
      if (ppcVar8 == (char **)0x0) {
        uVar18 = 0x14;
        FUN_0124c5c8(ppcVar17,pcVar5);
        ppcVar15 = unaff_r9;
        ppcVar19 = extraout_r12_05;
        if ((char)local_138 == '\0') {
          local_1d0 = (char **)((uint)local_138 >> 8 & 0xff);
          local_1fc = (uint)local_138 >> 0x10 & 0xff;
          break;
        }
      }
      else {
        ppcVar19 = extraout_r12_04;
        local_134 = ppcVar8;
      }
      local_200 = local_134;
      goto LAB_0124bf50;
    default:
      goto switchD_0124b888_caseD_6;
    case (char **)0xa:
      goto switchD_0124b888_caseD_a;
    case (char **)0xb:
      iVar7 = thunk_FUN_01bed842(local_134,"vendor_name",0xb);
      if (iVar7 != 0) goto switchD_0124b888_caseD_6;
      if (ppcVar13 != (char **)&DAT_80000000) {
        local_34 = 0xb;
        local_38 = "vendor_name";
        goto LAB_0124c350;
      }
      FUN_0164322c(ppcVar17,local_70);
      if (local_138 == (char **)&DAT_80000000) {
        bVar2 = true;
        local_c8 = local_1f4;
        local_cc = local_1f0;
        ppcVar14 = (char **)&DAT_80000000;
        local_200 = local_134;
        ppcVar19 = extraout_r12_07;
        local_1fc._0_1_ = 0xb8;
        local_d0 = ppcVar11;
        goto LAB_0124bfd0;
      }
      local_1e0 = local_134;
      ppcVar13 = local_138;
      unaff_r9 = local_130;
      break;
    case (char **)0xc:
      iVar7 = thunk_FUN_01bed842(local_134,"perf_variant",0xc);
      pcVar5 = local_70;
      if (iVar7 != 0) goto switchD_0124b888_caseD_6;
      if (ppcVar10 != (char **)&DAT_00000005 || local_1c8 != (char **)0x0) {
        local_34 = 0xc;
        local_38 = "perf_variant";
        goto LAB_0124c350;
      }
      uVar18 = 0x7c;
      ppcVar8 = (char **)FUN_01965c98(local_70);
      ppcVar19 = extraout_r12_09;
      if (ppcVar8 != (char **)0x0) goto LAB_0124bf34;
      uVar18 = 0x98;
      FUN_0124c770(ppcVar17,pcVar5);
      if (local_138 == (char **)&DAT_00000005 && local_134 == (char **)0x0) {
        ppcVar8 = local_130;
        ppcVar16 = unaff_r9;
        ppcVar19 = extraout_r12_10;
        goto LAB_0124bf34;
      }
      local_1c8 = local_134;
      local_204 = local_130;
      local_68 = ppcStack_12c;
      ppcStack_64 = ppcStack_128;
      ppcStack_60 = ppcStack_124;
      ppcStack_5c = ppcStack_120;
      ppcStack_58 = ppcStack_11c;
      local_54 = local_118;
      ppcStack_50 = ppcStack_114;
      ppcStack_4c = ppcStack_110;
      ppcStack_48 = ppcStack_10c;
      ppcStack_44 = ppcStack_108;
      ppcStack_40 = ppcStack_104;
      ppcVar10 = local_138;
      break;
    case (char **)0xf:
      iVar7 = thunk_FUN_01bed842(local_134,"default_voltage",0xf);
      if (iVar7 != 0) goto switchD_0124b888_caseD_6;
      if (bVar2) {
        local_34 = 0xf;
        local_38 = "default_voltage";
        goto LAB_0124c350;
      }
      uVar18 = 0x14;
      FUN_01224bf0(ppcVar17,local_70);
      ppcVar19 = extraout_r12_08;
      if (local_138 != (char **)0x0) goto LAB_0124bc48;
      bVar2 = true;
      bVar3 = true;
      break;
    case (char **)0x11:
      iVar7 = thunk_FUN_01bed842(local_134,"default_frequency",0x11);
      if (iVar7 != 0) goto switchD_0124b888_caseD_6;
      if ((byte)local_1d4 != 0) {
        local_34 = 0x11;
        local_38 = "default_frequency";
        goto LAB_0124c350;
      }
      uVar18 = 100;
      uVar21 = FUN_01224b04(local_70);
      local_200 = (char **)(uVar21 >> 0x20);
      if ((uVar21 & 1) != 0) {
        ppcVar19 = extraout_r12_06;
        goto LAB_0124bf50;
      }
      local_1d4._0_1_ = 1;
      bVar4 = true;
    }
  } while( true );
switchD_0124b888_caseD_a:
  iVar7 = thunk_FUN_01bed842(local_134,"hashboards",10);
  pcVar5 = local_70;
  if (iVar7 == 0) {
    if (ppcVar11 == (char **)&DAT_80000000) {
      ppcVar8 = (char **)FUN_01965c98(local_70);
      ppcVar19 = extraout_r12_11;
      uVar18 = 0x18;
      if (ppcVar8 != (char **)0x0) {
LAB_0124bd34:
        local_1fc._0_1_ = uVar18;
        bVar2 = true;
        local_c8 = local_1f4;
        local_cc = local_1f0;
        local_204 = ppcVar8;
        local_1f4 = ppcVar15;
        local_1f0 = ppcVar17;
        local_d0 = ppcVar11;
LAB_0124bfe0:
        ppcVar10 = (char **)&DAT_00000005;
        local_1c8 = (char **)0x0;
        local_200 = ppcVar19;
        if (bVar2 && ppcVar14 != (char **)&DAT_80000000) {
          local_1fc._0_1_ = 4;
          FUN_019bb7e0(ppcVar14,local_1e0);
          local_200 = extraout_r12_18;
        }
LAB_0124c00c:
        param_2[0x24] = param_2[0x24] + '\x01';
        local_cc = local_1c8;
        local_c4 = local_168;
        ppcStack_c0 = ppcStack_164;
        local_bc = ppcStack_160;
        ppcStack_b8 = ppcStack_15c;
        ppcStack_b4 = ppcStack_158;
        local_b0 = local_154;
        ppcStack_ac = ppcStack_150;
        ppcStack_a8 = ppcStack_14c;
        ppcStack_a4 = ppcStack_148;
        ppcStack_a0 = ppcStack_144;
        ppcStack_9c = ppcStack_140;
        local_74 = (byte)local_1d4;
        local_88 = local_1d0;
        local_8c = local_1e0;
        local_d0 = ppcVar10;
        local_c8 = local_204;
        local_90 = ppcVar13;
        local_84 = ppcVar11;
        local_80 = local_1f0;
        local_7c = local_1f4;
        local_78 = local_200;
        local_73 = (undefined1)local_1fc;
        ppcVar10 = (char **)FUN_019650c4(param_2);
LAB_0124c084:
        FUN_01bed4e2(&local_138,&local_d0,0x60);
        ppcVar11 = local_134;
        ppcVar13 = local_138;
        local_d8 = ppcVar10;
        if (local_138 == (char **)&DAT_00000005 && local_134 == (char **)0x0) {
          ppcVar11 = (char **)0x0;
          ppcVar13 = (char **)&DAT_00000005;
          if (ppcVar10 != (char **)0x0) {
            FUN_01225578(ppcVar10);
          }
        }
        else if (ppcVar10 == (char **)0x0) {
          FUN_01bed4e2(auStack_1c0,&ppcStack_12c,0x54);
        }
        else {
          FUN_019bb7e0(local_f8,local_f4);
          FUN_00b8a16c(auStack_ec);
          ppcVar11 = (char **)0x0;
          ppcVar13 = (char **)&DAT_00000005;
          local_130 = ppcVar10;
        }
        if (ppcVar13 == (char **)&DAT_00000005 && ppcVar11 == (char **)0x0) {
LAB_0124c2f0:
          uVar6 = FUN_01966f00(local_130,param_2);
LAB_0124c2fc:
          *param_1 = 5;
          param_1[1] = 0;
          param_1[2] = uVar6;
        }
        else {
          FUN_01bed4e2(param_1 + 3,auStack_1c0,0x54);
          *param_1 = ppcVar13;
          param_1[1] = ppcVar11;
          param_1[2] = local_130;
        }
        return;
      }
      FUN_01251c04(ppcVar17,pcVar5);
      ppcVar8 = local_134;
      ppcVar15 = unaff_r9;
      ppcVar19 = extraout_r12_12;
      uVar18 = 0x34;
      if (local_138 == (char **)&DAT_80000000) goto LAB_0124bd34;
      local_1f0 = local_134;
      local_1f4 = local_130;
      ppcVar11 = local_138;
      goto LAB_0124b810;
    }
    local_34 = 10;
    local_38 = "hashboards";
LAB_0124c350:
    local_138 = &local_38;
    local_c8 = local_1f4;
    local_cc = local_1f0;
    local_134 = (char **)&DAT_0132b6a0;
    local_1fc._0_1_ = 0x94;
    local_d0 = ppcVar11;
    local_200 = (char **)FUN_019676ac(&DAT_005ab34f,&local_138);
    ppcVar19 = extraout_r12_19;
LAB_0124bcc8:
    bVar2 = true;
LAB_0124bfcc:
  }
  else {
switchD_0124b888_caseD_6:
    uVar18 = 0x2c;
    ppcVar8 = (char **)FUN_0124a068(ppcVar8,ppcVar15,&DAT_01c24e20,6);
    ppcVar19 = extraout_r12_14;
LAB_0124bf34:
    local_200 = ppcVar8;
    ppcVar15 = ppcVar16;
LAB_0124bf50:
    local_c8 = local_1f4;
    local_cc = local_1f0;
    bVar2 = true;
    local_1fc._0_1_ = uVar18;
    local_d0 = ppcVar11;
  }
LAB_0124bfd0:
  local_204 = local_200;
  local_1f4 = ppcVar15;
  local_1f0 = ppcVar17;
  if (ppcVar11 != (char **)&DAT_80000000) {
    local_1fc._0_1_ = 0xe0;
    FUN_00b8a16c(&local_d0);
    ppcVar19 = extraout_r12_17;
  }
  goto LAB_0124bfe0;
}

