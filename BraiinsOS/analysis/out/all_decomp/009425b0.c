// FUN_009425b0 @ 009425b0 size=4948 calls_out=25 calls_in=1
// strings: tuner_modes | default_power_step | default_tuner_mode | default_dps_power_limit_watt | min_power_target | min_hashrate_target

/* WARNING: Removing unreachable block (ram,0x009431fc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009425b0(undefined4 *param_1,undefined4 *******param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 *******pppppppuVar6;
  bool bVar7;
  undefined4 ******ppppppuVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *******pppppppuVar11;
  undefined4 ******ppppppuVar12;
  undefined4 *******pppppppuVar13;
  undefined4 *******pppppppuVar14;
  undefined4 ******ppppppuVar15;
  undefined4 ******ppppppuVar16;
  uint uVar17;
  undefined4 *******pppppppuVar18;
  undefined4 *******pppppppuVar19;
  undefined4 *******unaff_r8;
  byte bVar20;
  undefined4 *******extraout_r12;
  undefined4 *******extraout_r12_00;
  undefined4 *******extraout_r12_01;
  undefined4 *******extraout_r12_02;
  undefined4 *******extraout_r12_03;
  undefined4 *******extraout_r12_04;
  undefined4 *******extraout_r12_05;
  undefined4 *******extraout_r12_06;
  undefined4 *******extraout_r12_07;
  undefined4 *******extraout_r12_08;
  undefined4 *******extraout_r12_09;
  undefined4 *******extraout_r12_10;
  undefined4 *******extraout_r12_11;
  undefined4 *******pppppppuVar21;
  undefined4 *******extraout_r12_12;
  undefined4 *******extraout_r12_13;
  undefined4 *******extraout_r12_14;
  undefined4 *******extraout_r12_15;
  undefined4 *******extraout_r12_16;
  undefined4 *******extraout_r12_17;
  undefined4 *******extraout_r12_18;
  undefined4 *******pppppppuVar22;
  undefined4 *******pppppppuVar23;
  undefined4 *******pppppppuVar24;
  ulonglong uVar25;
  undefined4 *******local_250;
  undefined4 *******local_24c;
  undefined4 *******local_248;
  undefined4 *******local_244;
  undefined4 *******local_240;
  undefined4 *******local_23c;
  uint local_238;
  undefined4 *******local_220;
  undefined4 *******local_21c;
  undefined4 *******local_218;
  undefined4 *******local_214;
  undefined4 *******local_210;
  undefined4 *******local_20c;
  undefined4 *******local_208;
  undefined1 auStack_1f0 [88];
  undefined4 *******local_198;
  undefined4 *******local_194;
  undefined4 local_190;
  undefined4 *******local_188;
  undefined4 *******local_184;
  undefined4 local_180;
  undefined4 *******local_178;
  undefined4 *******local_174;
  undefined4 local_170;
  undefined4 *******local_168;
  undefined4 *******local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 *******local_158;
  undefined4 *******local_154;
  undefined4 local_150;
  undefined4 local_100;
  undefined4 *******local_fc;
  undefined4 *******local_f8;
  undefined4 *******pppppppuStack_f4;
  undefined4 *******local_f0;
  undefined4 local_ec;
  undefined4 *******local_e8;
  undefined4 *******local_e4;
  undefined4 *******local_e0;
  undefined4 *******local_dc;
  undefined4 *******local_d8;
  undefined4 local_d4;
  undefined4 *******local_d0;
  undefined4 *******local_cc;
  undefined4 *******local_c8;
  undefined4 *******local_c4;
  undefined4 *******pppppppuStack_c0;
  undefined4 uStack_bc;
  undefined4 *******local_a0;
  undefined4 *******local_9c;
  undefined4 *******local_98;
  undefined4 *******local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 *******local_88;
  undefined1 local_84;
  undefined4 *******local_80;
  undefined4 *******local_7c;
  undefined4 local_78;
  undefined4 *******local_70;
  undefined4 *******local_6c;
  undefined4 local_68;
  undefined4 *******local_60;
  undefined4 *******local_5c;
  undefined4 local_58;
  undefined4 *******local_50;
  undefined4 *******local_4c;
  undefined4 local_48;
  undefined1 uStack_41;
  
  ppppppuVar8 = param_2[4];
  ppppppuVar15 = param_2[5];
  if (ppppppuVar15 < ppppppuVar8) {
    do {
      uVar17 = *(byte *)((int)param_2[3] + (int)ppppppuVar15) - 9;
      if ((0x17 < uVar17) || ((1 << (uVar17 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)((int)param_2[3] + (int)ppppppuVar15) != 0x6e) goto LAB_00942620;
        ppppppuVar16 = (undefined4 ******)((int)ppppppuVar15 + 1);
        param_2[5] = ppppppuVar16;
        ppppppuVar12 = ppppppuVar8;
        if (ppppppuVar8 < ppppppuVar16) {
          ppppppuVar12 = ppppppuVar16;
        }
        if (ppppppuVar16 < ppppppuVar8) {
          ppppppuVar8 = param_2[3];
          cVar1 = *(char *)((int)ppppppuVar8 + (int)ppppppuVar16);
          ppppppuVar16 = (undefined4 ******)((int)ppppppuVar15 + 2);
          param_2[5] = ppppppuVar16;
          if (cVar1 == 'u') {
            if (ppppppuVar16 == ppppppuVar12) goto LAB_0094308c;
            cVar1 = *(char *)((int)ppppppuVar8 + (int)ppppppuVar16);
            ppppppuVar16 = (undefined4 ******)((int)ppppppuVar15 + 3);
            param_2[5] = ppppppuVar16;
            if (cVar1 == 'l') {
              if (ppppppuVar16 == ppppppuVar12) goto LAB_0094308c;
              cVar1 = *(char *)((int)ppppppuVar8 + (int)ppppppuVar16);
              param_2[5] = ppppppuVar15 + 1;
              if (cVar1 == 'l') {
                *param_1 = 5;
                param_1[1] = 0;
                return;
              }
            }
          }
          local_100 = (undefined4 *******)0x9;
        }
        else {
LAB_0094308c:
          local_100 = (undefined4 *******)0x5;
        }
        uVar9 = FUN_005b8c9c(param_2,&local_100);
        goto LAB_00942674;
      }
      ppppppuVar15 = (undefined4 ******)((int)ppppppuVar15 + 1);
      param_2[5] = ppppppuVar15;
    } while (ppppppuVar8 != ppppppuVar15);
  }
  else {
LAB_00942620:
    if (ppppppuVar15 < ppppppuVar8) {
      do {
        uVar17 = (uint)*(byte *)((int)param_2[3] + (int)ppppppuVar15);
        if ((0x17 < uVar17 - 9) || ((1 << (uVar17 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar17 == 0x5b) {
            cVar1 = *(char *)(param_2 + 9);
            *(char *)(param_2 + 9) = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              param_2[5] = (undefined4 ******)((int)ppppppuVar15 + 1);
              local_84 = 1;
              pppppppuVar23 = (undefined4 *******)0x942cbc;
              local_88 = param_2;
              FUN_005e5d80(&local_100,&local_88);
              pppppppuVar13 = (undefined4 *******)&DAT_00000001;
              pppppppuVar22 = (undefined4 *******)&DAT_0000005b;
              pppppppuVar11 = (undefined4 *******)&DAT_00000052;
              if ((char)local_100 == '\x01') {
                local_244 = extraout_r12;
LAB_00942cd0:
                pppppppuVar19 = (undefined4 *******)&DAT_00000005;
                pppppppuVar18 = (undefined4 *******)0x0;
                local_24c = local_fc;
              }
              else {
                if (local_100._1_1_ != '\x01') {
                  pppppppuVar23 = (undefined4 *******)0x943140;
                  local_fc = (undefined4 *******)FUN_00f2c2f0(0,&DAT_01867400,&DAT_018ab990);
                  local_244 = extraout_r12_08;
                  goto LAB_00942cd0;
                }
                pppppppuVar23 = (undefined4 *******)0x942d6c;
                uVar25 = FUN_008fa5b8(local_88);
                pppppppuVar14 = (undefined4 *******)(uVar25 >> 0x20);
                local_244 = extraout_r12_00;
                if ((uVar25 & 1) == 0) {
                  pppppppuVar23 = (undefined4 *******)0x942d84;
                  FUN_005e5d80(&local_100,&local_88);
                  local_244 = extraout_r12_01;
                  if ((char)local_100 == '\x01') goto LAB_00942e50;
                  if (local_100._1_1_ != '\x01') {
                    uVar9 = 1;
LAB_009433b0:
                    pppppppuVar23 = (undefined4 *******)0x9433b4;
                    pppppppuVar14 =
                         (undefined4 *******)FUN_00f2c2f0(uVar9,&DAT_01867400,&DAT_018ab990);
                    local_244 = extraout_r12_09;
                    goto LAB_00942e54;
                  }
                  pppppppuVar23 = (undefined4 *******)0x942da8;
                  FUN_008fab2c(&local_100,local_88);
                  local_244 = extraout_r12_02;
                  if (local_100 == (undefined4 *******)&DAT_00000001) {
LAB_00942e50:
                    pppppppuVar14 = local_fc;
                    goto LAB_00942e54;
                  }
                  pppppppuVar23 = (undefined4 *******)0x942dc4;
                  FUN_005e5d80(&local_100,&local_88);
                  local_244 = extraout_r12_03;
                  if ((char)local_100 == '\x01') goto LAB_00942e50;
                  if (local_100._1_1_ != '\x01') {
                    uVar9 = 2;
                    goto LAB_009433b0;
                  }
                  pppppppuVar23 = (undefined4 *******)0x942de8;
                  FUN_008fab2c(&local_100,local_88);
                  local_244 = extraout_r12_04;
                  if (local_100 == (undefined4 *******)&DAT_00000001) goto LAB_00942e50;
                  pppppppuVar23 = (undefined4 *******)0x942e04;
                  FUN_005e5d80(&local_100,&local_88);
                  local_244 = extraout_r12_05;
                  if ((char)local_100 == '\x01') goto LAB_00942e50;
                  if (local_100._1_1_ != '\x01') {
                    uVar9 = 3;
                    goto LAB_009433b0;
                  }
                  pppppppuVar23 = (undefined4 *******)0x942e28;
                  FUN_008fab2c(&local_100,local_88);
                  local_244 = extraout_r12_06;
                  if (local_100 == (undefined4 *******)&DAT_00000001) goto LAB_00942e50;
                  pppppppuVar23 = (undefined4 *******)0x942e44;
                  FUN_005e5d80(&local_100,&local_88);
                  local_244 = extraout_r12_07;
                  if ((char)local_100 == '\x01') goto LAB_00942e50;
                  if (local_100._1_1_ != '\x01') {
                    uVar9 = 4;
                    goto LAB_009433b0;
                  }
                  pppppppuVar23 = (undefined4 *******)0x9434e4;
                  FUN_00947348(&local_100,local_88);
                  local_24c = local_f8;
                  pppppppuVar18 = local_fc;
                  pppppppuVar19 = local_100;
                  pppppppuVar22 = pppppppuVar18;
                  if (local_100 == (undefined4 *******)&DAT_00000005 &&
                      local_fc == (undefined4 *******)0x0) {
                    local_24c = (undefined4 *******)&DAT_00000052;
                    local_244 = extraout_r12_10;
LAB_00943508:
                    pppppppuVar11 = local_24c;
                    pppppppuVar13 = pppppppuVar19;
                    pppppppuVar19 = (undefined4 *******)&DAT_00000005;
                    pppppppuVar18 = (undefined4 *******)0x0;
                    local_24c = local_f8;
                  }
                  else {
                    local_80 = pppppppuStack_f4;
                    local_7c = local_f0;
                    local_78 = local_ec;
                    pppppppuVar24 = (undefined4 *******)0x943598;
                    FUN_005e5d80(&local_100,&local_88);
                    if ((char)local_100 == '\x01') {
                      pppppppuVar21 = extraout_r12_11;
LAB_009435a8:
                      local_f8 = local_fc;
                      local_244 = pppppppuVar21;
                      pppppppuVar23 = pppppppuVar24;
                    }
                    else {
                      if (local_100._1_1_ != '\x01') {
                        pppppppuVar23 = (undefined4 *******)0x943858;
                        local_f8 = (undefined4 *******)FUN_00f2c2f0(5,&DAT_01867400,&DAT_018ab990);
                        local_244 = extraout_r12_16;
                        goto LAB_00943508;
                      }
                      FUN_00947348(&local_100,local_88);
                      pppppppuVar23 = local_f8;
                      pppppppuVar22 = local_fc;
                      pppppppuVar13 = local_100;
                      if (local_100 == (undefined4 *******)&DAT_00000005 &&
                          local_fc == (undefined4 *******)0x0) {
                        pppppppuVar22 = pppppppuVar18;
                        local_244 = extraout_r12_12;
                      }
                      else {
                        local_168 = pppppppuStack_f4;
                        local_164 = local_f0;
                        local_160 = local_ec;
                        FUN_008fbb54(&local_100,&local_88);
                        pppppppuVar11 = local_fc;
                        local_20c = local_f8;
                        local_210 = local_100;
                        if (local_100 != (undefined4 *******)&DAT_00000006 ||
                            local_fc != (undefined4 *******)0x0) {
                          local_158 = pppppppuStack_f4;
                          local_154 = local_f0;
                          local_150 = local_ec;
                          if (local_100 == (undefined4 *******)&DAT_00000005 &&
                              local_fc == (undefined4 *******)0x0) {
                            uVar9 = 6;
LAB_00943928:
                            pppppppuVar24 = (undefined4 *******)0x94392c;
                            local_fc = (undefined4 *******)
                                       FUN_00f2c2f0(uVar9,&DAT_01867400,&DAT_018ab990);
                            pppppppuVar21 = extraout_r12_17;
                            goto LAB_009435a8;
                          }
                          FUN_008fbbf0(&local_100,&local_88);
                          local_244 = local_fc;
                          pppppppuVar6 = local_100;
                          local_208 = local_100;
                          if (local_100 == (undefined4 *******)0x80000001) {
                            local_f8 = local_fc;
                            pppppppuVar23 = (undefined4 *******)0x9437cc;
                            goto LAB_0094368c;
                          }
                          if (local_100 == (undefined4 *******)&DAT_80000000) {
                            uVar9 = 7;
                            goto LAB_00943928;
                          }
                          local_214 = local_f8;
                          pppppppuVar24 = (undefined4 *******)0x943814;
                          FUN_008fbc6c(&local_100,&local_88);
                          pppppppuVar21 = extraout_r12_14;
                          if ((char)local_100 != '\x01') {
                            local_218._0_1_ = (undefined1)((uint)local_100 >> 8);
                            if (((uint)local_100 >> 8 & 0xff) != 2) {
                              local_170 = local_78;
                              local_178 = local_80;
                              local_174 = local_7c;
                              local_184 = local_164;
                              local_180 = local_160;
                              local_188 = local_168;
                              local_198 = local_158;
                              local_194 = local_154;
                              local_190 = local_150;
                              local_21c = pppppppuVar14;
                              goto LAB_00942e5c;
                            }
                            pppppppuVar24 = (undefined4 *******)0x943950;
                            local_fc = (undefined4 *******)
                                       FUN_00f2c2f0(8,&DAT_01867400,&DAT_018ab990);
                            pppppppuVar21 = extraout_r12_18;
                          }
                          if (pppppppuVar6 != (undefined4 *******)0x0) {
                            pppppppuVar24 = (undefined4 *******)0x943838;
                            thunk_FUN_016d3fb4(local_244);
                            pppppppuVar21 = extraout_r12_15;
                          }
                          goto LAB_009435a8;
                        }
                        local_244 = extraout_r12_13;
                        pppppppuVar23 = (undefined4 *******)0x9436bc;
                      }
                    }
LAB_0094368c:
                    pppppppuVar18 = (undefined4 *******)0x0;
                    pppppppuVar11 = local_24c;
                    pppppppuVar13 = pppppppuVar19;
                    pppppppuVar19 = (undefined4 *******)&DAT_00000005;
                    local_24c = local_f8;
                  }
                }
                else {
LAB_00942e54:
                  pppppppuVar19 = (undefined4 *******)&DAT_00000005;
                  pppppppuVar18 = (undefined4 *******)0x0;
                  local_24c = pppppppuVar14;
                }
              }
LAB_00942e5c:
              *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
              local_d0 = local_210;
              local_f0 = local_174;
              local_ec = local_170;
              pppppppuStack_f4 = local_178;
              local_c8 = local_20c;
              local_dc = local_188;
              local_d8 = local_184;
              local_d4 = local_180;
              local_c4 = local_198;
              pppppppuStack_c0 = local_194;
              uStack_bc = local_190;
              local_90 = CONCAT31(local_90._1_3_,local_218._0_1_);
              local_94 = local_21c;
              local_98 = local_214;
              local_a0 = local_208;
              local_100 = pppppppuVar19;
              local_fc = pppppppuVar18;
              local_f8 = local_24c;
              local_e8 = pppppppuVar13;
              local_e4 = pppppppuVar22;
              local_e0 = pppppppuVar23;
              local_cc = pppppppuVar11;
              local_9c = local_244;
              pppppppuVar13 = (undefined4 *******)FUN_008fad50(param_2);
              FUN_016dd1aa(&local_158,&pppppppuStack_f4,0x54);
              local_168 = local_98;
              local_164 = local_94;
              local_160 = local_90;
              uStack_15c = uStack_8c;
              if (pppppppuVar19 == (undefined4 *******)&DAT_00000005 &&
                  pppppppuVar18 == (undefined4 *******)0x0) {
                if (pppppppuVar13 != (undefined4 *******)0x0) {
                  FUN_005c3974(pppppppuVar13);
                  thunk_FUN_016d3fb4(pppppppuVar13);
                }
                goto LAB_009435c8;
              }
              if (pppppppuVar13 != (undefined4 *******)0x0) goto joined_r0x00942f84;
              FUN_016dd1aa(auStack_1f0,&local_158,0x54);
              goto LAB_00943364;
            }
          }
          else {
            if (uVar17 != 0x7b) {
              local_24c = (undefined4 *******)FUN_005b8238(param_2,&uStack_41,&DAT_01867538);
              goto LAB_009435c8;
            }
            cVar1 = *(char *)(param_2 + 9);
            *(char *)(param_2 + 9) = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              param_2[5] = (undefined4 ******)((int)ppppppuVar15 + 1);
              local_164 = (undefined4 *******)CONCAT31(local_164._1_3_,1);
              local_214 = (undefined4 *******)&DAT_00000005;
              local_238 = 2;
              local_208 = (undefined4 *******)&DAT_80000000;
              pppppppuVar18 = (undefined4 *******)0x0;
              local_218 = (undefined4 *******)0x0;
              local_21c = (undefined4 *******)&DAT_00000005;
              local_220 = (undefined4 *******)0x0;
              local_20c = (undefined4 *******)&DAT_00000005;
              bVar3 = false;
              bVar2 = false;
              bVar4 = false;
              bVar7 = false;
              local_168 = param_2;
              goto LAB_00942730;
            }
          }
          local_100 = (undefined4 *******)0x18;
          goto LAB_00942664;
        }
        ppppppuVar15 = (undefined4 ******)((int)ppppppuVar15 + 1);
        param_2[5] = ppppppuVar15;
      } while (ppppppuVar8 != ppppppuVar15);
    }
  }
  local_100 = (undefined4 *******)0x5;
LAB_00942664:
  uVar9 = FUN_008f9984(param_2,&local_100);
  goto LAB_00942674;
LAB_00942730:
  pppppppuVar13 = unaff_r8;
LAB_00942734:
  pppppppuVar22 = (undefined4 *******)0x942744;
  FUN_008fa450(&local_100,&local_168);
  unaff_r8 = local_168;
  if ((char)local_100 == '\x01') goto LAB_00942fe4;
  if (local_100._1_1_ != '\x01') {
    unaff_r8 = pppppppuVar13;
    if (!bVar7) {
      local_fc = (undefined4 *******)&DAT_0157d360;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_0000001c;
      local_158 = (undefined4 *******)0x35b4aa;
      pppppppuVar22 = (undefined4 *******)0x9430e0;
      pppppppuVar11 = (undefined4 *******)FUN_00f56780(&DAT_0057a25d,&local_100);
      goto LAB_009431c4;
    }
    if (!bVar4) {
      local_fc = (undefined4 *******)&DAT_0157d360;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_00000010;
      local_158 = (undefined4 *******)0x565090;
      pppppppuVar22 = (undefined4 *******)0x943120;
      pppppppuVar11 = (undefined4 *******)FUN_00f56780(&DAT_0057a25d,&local_100);
      goto LAB_009431c4;
    }
    if (!bVar2) {
      local_fc = (undefined4 *******)&DAT_0157d360;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_00000010;
      local_158 = (undefined4 *******)&DAT_005643b0;
      pppppppuVar22 = (undefined4 *******)0x943184;
      pppppppuVar11 = (undefined4 *******)FUN_00f56780(&DAT_0057a25d,&local_100);
      goto LAB_009431c4;
    }
    if (!bVar3) {
      local_fc = (undefined4 *******)&DAT_0157d360;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_00000012;
      local_158 = (undefined4 *******)0x35b4c6;
      pppppppuVar22 = (undefined4 *******)0x9431c4;
      pppppppuVar11 = (undefined4 *******)FUN_00f56780(&DAT_0057a25d,&local_100);
      goto LAB_009431c4;
    }
    if (local_20c == (undefined4 *******)&DAT_00000005 && pppppppuVar18 == (undefined4 *******)0x0)
    {
      local_fc = (undefined4 *******)&DAT_0157d360;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_00000013;
      local_158 = (undefined4 *******)0x35afba;
      pppppppuVar22 = (undefined4 *******)0x943068;
      pppppppuVar11 = (undefined4 *******)FUN_00f56780(&DAT_0057a25d,&local_100);
      goto LAB_009431c4;
    }
    if (local_21c == (undefined4 *******)&DAT_00000005 && local_220 == (undefined4 *******)0x0) {
      local_fc = (undefined4 *******)&DAT_0157d360;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_00000013;
      local_158 = (undefined4 *******)0x35b4d8;
      pppppppuVar22 = (undefined4 *******)0x94340c;
      pppppppuVar11 = (undefined4 *******)FUN_00f56780(&DAT_0057a25d,&local_100);
      goto LAB_009431c4;
    }
    if (local_214 == (undefined4 *******)&DAT_00000005 && local_218 == (undefined4 *******)0x0) {
      local_fc = (undefined4 *******)&DAT_0157d360;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_00000015;
      local_158 = (undefined4 *******)0x35b4eb;
      pppppppuVar22 = (undefined4 *******)0x943460;
      pppppppuVar11 = (undefined4 *******)FUN_00f56780(&DAT_0057a25d,&local_100);
      goto LAB_009431c4;
    }
    if (local_208 != (undefined4 *******)&DAT_80000000) {
      if (local_238 != 2) {
        local_7c = local_6c;
        local_178 = local_60;
        local_80 = local_70;
        bVar20 = (byte)local_238 & 1;
        local_78 = local_68;
        local_174 = local_5c;
        local_170 = local_58;
        local_188 = local_50;
        local_184 = local_4c;
        local_180 = local_48;
        goto LAB_00943208;
      }
      local_fc = (undefined4 *******)&DAT_0157d360;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_00000012;
      local_158 = (undefined4 *******)0x35b50b;
      pppppppuVar11 = (undefined4 *******)0x943560;
      local_24c = (undefined4 *******)FUN_00f56780(&DAT_0057a25d,&local_100);
      local_250 = pppppppuVar13;
      local_248 = local_208;
      if (local_208 != (undefined4 *******)0x0) goto LAB_009431e8;
      goto LAB_009431f4;
    }
    local_fc = (undefined4 *******)&DAT_0157d360;
    local_100 = &local_158;
    local_154 = (undefined4 *******)&DAT_0000000b;
    local_158 = (undefined4 *******)0x35b500;
    pppppppuVar11 = (undefined4 *******)0x9434c4;
    pppppppuVar22 = (undefined4 *******)FUN_00f56780(&DAT_0057a25d,&local_100);
LAB_0094338c:
    local_250 = unaff_r8;
    local_248 = (undefined4 *******)&DAT_80000000;
    local_24c = pppppppuVar22;
    goto LAB_009431f4;
  }
  local_168[2] = (undefined4 ******)0x0;
  local_168[5] = (undefined4 ******)((int)local_168[5] + 1);
  pppppppuVar22 = (undefined4 *******)0x942788;
  FUN_0157e384(&local_100,local_168 + 3,local_168);
  pppppppuVar23 = local_f8;
  pppppppuVar11 = local_fc;
  if (local_100 == (undefined4 *******)&SUB_00000002) goto LAB_009431c8;
  pppppppuVar13 = unaff_r8;
  switch(local_f8) {
  case (undefined4 *******)0xb:
    iVar10 = thunk_FUN_016dd50a(local_fc,"tuner_modes",0xb);
    if (iVar10 == 0) {
      if (local_208 != (undefined4 *******)&DAT_80000000) {
        local_158 = (undefined4 *******)0x35b500;
        goto LAB_00943750;
      }
      pppppppuVar11 = (undefined4 *******)0x94282c;
      pppppppuVar22 = (undefined4 *******)FUN_01114eb4(unaff_r8);
      if (pppppppuVar22 != (undefined4 *******)0x0) goto LAB_0094338c;
      pppppppuVar11 = (undefined4 *******)0x942848;
      FUN_00950250(&local_100,unaff_r8);
      local_244 = local_fc;
      if (local_100 != (undefined4 *******)&DAT_80000000) {
        local_23c = local_f8;
        local_208 = local_100;
        goto LAB_00942734;
      }
      pppppppuVar22 = local_fc;
      goto LAB_0094338c;
    }
    break;
  case (undefined4 *******)0x10:
    iVar10 = thunk_FUN_016dd50a(local_fc,"min_power_target",0x10);
    if (iVar10 == 0) {
      if (bVar4) {
        local_158 = (undefined4 *******)0x565090;
        goto LAB_00943750;
      }
      pppppppuVar22 = (undefined4 *******)0x942b10;
      pppppppuVar11 = (undefined4 *******)FUN_01114eb4(unaff_r8);
      if (pppppppuVar11 != (undefined4 *******)0x0) goto LAB_009431c8;
      pppppppuVar22 = (undefined4 *******)0x942b30;
      FUN_008fab2c(&local_100,unaff_r8);
      if (local_100 == (undefined4 *******)&DAT_00000001) goto LAB_00942fe4;
      bVar4 = true;
      goto LAB_00942734;
    }
    iVar10 = thunk_FUN_016dd50a(pppppppuVar11,&DAT_005643b0,0x10);
    if (iVar10 != 0) break;
    if (bVar2) {
      local_158 = (undefined4 *******)&DAT_005643b0;
      goto LAB_00943750;
    }
    pppppppuVar22 = (undefined4 *******)0x942964;
    pppppppuVar11 = (undefined4 *******)FUN_01114eb4(unaff_r8);
    if (pppppppuVar11 != (undefined4 *******)0x0) goto LAB_009431c8;
    pppppppuVar22 = (undefined4 *******)0x942984;
    FUN_008fab2c(&local_100,unaff_r8);
    if (local_100 != (undefined4 *******)&DAT_00000001) {
      bVar2 = true;
      goto LAB_00942734;
    }
    goto LAB_00942fe4;
  case (undefined4 *******)0x12:
    iVar10 = thunk_FUN_016dd50a(local_fc,"default_power_step",0x12);
    if (iVar10 == 0) {
      if (bVar3) {
        local_158 = (undefined4 *******)0x35b4c6;
        goto LAB_00943750;
      }
      pppppppuVar22 = (undefined4 *******)0x942abc;
      pppppppuVar11 = (undefined4 *******)FUN_01114eb4(unaff_r8);
      if (pppppppuVar11 != (undefined4 *******)0x0) goto LAB_009431c8;
      pppppppuVar22 = (undefined4 *******)0x942adc;
      FUN_008fab2c(&local_100,unaff_r8);
      if (local_100 != (undefined4 *******)&DAT_00000001) {
        bVar3 = true;
        goto LAB_00942734;
      }
    }
    else {
      iVar10 = thunk_FUN_016dd50a(pppppppuVar11,"default_tuner_mode",0x12);
      if (iVar10 != 0) break;
      if (local_238 != 2) {
        local_158 = (undefined4 *******)0x35b50b;
        goto LAB_00943750;
      }
      pppppppuVar22 = (undefined4 *******)0x9428bc;
      pppppppuVar11 = (undefined4 *******)FUN_01114eb4(unaff_r8);
      if (pppppppuVar11 != (undefined4 *******)0x0) goto LAB_009431c8;
      pppppppuVar22 = (undefined4 *******)0x9428dc;
      FUN_00916498(&local_100,unaff_r8);
      if ((char)local_100 != '\x01') {
        local_238 = (uint)local_100 >> 8 & 0xff;
        goto LAB_00942734;
      }
    }
LAB_00942fe4:
    unaff_r8 = pppppppuVar13;
    pppppppuVar11 = local_fc;
    goto LAB_009431c8;
  case (undefined4 *******)0x13:
    iVar10 = thunk_FUN_016dd50a(local_fc,"min_hashrate_target",0x13);
    if (iVar10 == 0) {
      if (local_20c != (undefined4 *******)&DAT_00000005 || pppppppuVar18 != (undefined4 *******)0x0
         ) {
        local_158 = (undefined4 *******)0x35afba;
        goto LAB_00943750;
      }
      pppppppuVar22 = (undefined4 *******)0x942b68;
      pppppppuVar11 = (undefined4 *******)FUN_01114eb4(unaff_r8);
      if (pppppppuVar11 != (undefined4 *******)0x0) goto LAB_009431c8;
      pppppppuVar22 = (undefined4 *******)0x942b88;
      FUN_00947348(&local_100,unaff_r8);
      local_20c = local_100;
      pppppppuVar11 = local_f8;
      if (local_100 == (undefined4 *******)&DAT_00000005 && local_fc == (undefined4 *******)0x0)
      goto LAB_009431c8;
      local_24c = local_f8;
      local_70 = pppppppuStack_f4;
      local_6c = local_f0;
      local_68 = local_ec;
      pppppppuVar18 = local_fc;
      goto LAB_00942734;
    }
    iVar10 = thunk_FUN_016dd50a(pppppppuVar11,"max_hashrate_target",0x13);
    if (iVar10 == 0) {
      if (local_21c != (undefined4 *******)&DAT_00000005 || local_220 != (undefined4 *******)0x0) {
        local_158 = (undefined4 *******)0x35b4d8;
        goto LAB_00943750;
      }
      pppppppuVar22 = (undefined4 *******)0x9429f8;
      pppppppuVar11 = (undefined4 *******)FUN_01114eb4(unaff_r8);
      if (pppppppuVar11 != (undefined4 *******)0x0) goto LAB_009431c8;
      pppppppuVar22 = (undefined4 *******)0x942a14;
      FUN_00947348(&local_100,unaff_r8);
      pppppppuVar11 = local_f8;
      if (local_100 == (undefined4 *******)&DAT_00000005 && local_fc == (undefined4 *******)0x0)
      goto LAB_009431c8;
      local_250 = local_f8;
      local_21c = local_100;
      local_60 = pppppppuStack_f4;
      local_5c = local_f0;
      local_58 = local_ec;
      local_220 = local_fc;
      goto LAB_00942734;
    }
    break;
  case (undefined4 *******)0x15:
    iVar10 = thunk_FUN_016dd50a(local_fc,"default_hashrate_step",0x15);
    if (iVar10 != 0) break;
    if (local_214 == (undefined4 *******)&DAT_00000005 && local_218 == (undefined4 *******)0x0) {
      pppppppuVar22 = (undefined4 *******)0x942bdc;
      pppppppuVar11 = (undefined4 *******)FUN_01114eb4(unaff_r8);
      if (pppppppuVar11 == (undefined4 *******)0x0) {
        pppppppuVar22 = (undefined4 *******)0x942bf8;
        FUN_00947348(&local_100,unaff_r8);
        pppppppuVar11 = local_f8;
        if (local_100 != (undefined4 *******)&DAT_00000005 || local_fc != (undefined4 *******)0x0)
        goto code_r0x00942c0c;
      }
      goto LAB_009431c8;
    }
    local_158 = (undefined4 *******)0x35b4eb;
    goto LAB_00943750;
  case (undefined4 *******)0x1c:
    iVar10 = thunk_FUN_016dd50a(local_fc,"default_dps_power_limit_watt",0x1c);
    if (iVar10 == 0) goto LAB_00942c34;
  }
  pppppppuVar22 = (undefined4 *******)0x942a78;
  pppppppuVar11 = (undefined4 *******)FUN_01114eb4(unaff_r8);
  if (pppppppuVar11 != (undefined4 *******)0x0) goto LAB_009431c8;
  pppppppuVar22 = (undefined4 *******)0x942a94;
  pppppppuVar11 = (undefined4 *******)FUN_008f9ac0(unaff_r8);
  if (pppppppuVar11 != (undefined4 *******)0x0) goto LAB_009431c8;
  goto LAB_00942734;
LAB_00942c34:
  if (bVar7) {
    local_158 = (undefined4 *******)0x35b4aa;
LAB_00943750:
    local_154 = pppppppuVar23;
    local_fc = (undefined4 *******)&DAT_0157d360;
    local_100 = &local_158;
    pppppppuVar22 = (undefined4 *******)0x943780;
    pppppppuVar11 = (undefined4 *******)FUN_00f56780(&DAT_00582dbd,&local_100);
LAB_009431c4:
    goto LAB_009431c8;
  }
  pppppppuVar22 = (undefined4 *******)0x942c4c;
  iVar10 = FUN_01114eb4(unaff_r8);
  if (iVar10 == 0) {
    pppppppuVar22 = (undefined4 *******)0x942c74;
    uVar25 = FUN_008fa5b8(unaff_r8);
  }
  else {
    uVar25 = CONCAT44(iVar10,1);
  }
  local_248 = (undefined4 *******)(uVar25 >> 0x20);
  if ((uVar25 & 1) != 0) goto LAB_0094337c;
  bVar7 = true;
  goto LAB_00942730;
code_r0x00942c0c:
  local_240 = local_f8;
  local_214 = local_100;
  local_50 = pppppppuStack_f4;
  local_4c = local_f0;
  local_48 = local_ec;
  local_218 = local_fc;
  goto LAB_00942734;
LAB_0094337c:
  pppppppuVar11 = local_248;
LAB_009431c8:
  local_24c = pppppppuVar11;
  local_250 = unaff_r8;
  local_20c = (undefined4 *******)&DAT_00000005;
  pppppppuVar13 = local_250;
  if (((uint)local_208 & 0x7fffffff) == 0) {
    bVar20 = 0;
    pppppppuVar18 = (undefined4 *******)0x0;
    local_248 = local_208;
    local_244 = pppppppuVar22;
  }
  else {
LAB_009431e8:
    pppppppuVar11 = (undefined4 *******)0x9431f0;
    thunk_FUN_016d3fb4(local_244);
    local_250 = pppppppuVar13;
    local_248 = local_208;
LAB_009431f4:
    local_20c = (undefined4 *******)&DAT_00000005;
    pppppppuVar18 = (undefined4 *******)0x0;
    bVar20 = 0;
    local_244 = pppppppuVar11;
  }
LAB_00943208:
  *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
  local_e8 = local_21c;
  local_e4 = local_220;
  pppppppuStack_f4 = local_80;
  local_d0 = local_214;
  local_cc = local_218;
  local_d4 = local_170;
  local_f0 = local_7c;
  local_dc = local_178;
  local_c8 = local_240;
  local_98 = local_23c;
  local_100 = local_20c;
  local_ec = local_78;
  local_d8 = local_174;
  local_90 = CONCAT31(local_90._1_3_,bVar20);
  local_c4 = local_188;
  pppppppuStack_c0 = local_184;
  uStack_bc = local_180;
  local_fc = pppppppuVar18;
  local_f8 = local_24c;
  local_e0 = local_250;
  local_a0 = local_208;
  local_9c = local_244;
  local_94 = local_248;
  pppppppuVar13 = (undefined4 *******)FUN_008fb5ec(param_2);
  FUN_016dd1aa(&local_158,&pppppppuStack_f4,0x54);
  local_168 = local_98;
  local_164 = local_94;
  local_160 = local_90;
  uStack_15c = uStack_8c;
  if (local_20c == (undefined4 *******)&DAT_00000005 && pppppppuVar18 == (undefined4 *******)0x0) {
    if (pppppppuVar13 != (undefined4 *******)0x0) {
      FUN_005c3974(pppppppuVar13);
      thunk_FUN_016d3fb4(pppppppuVar13);
    }
  }
  else if (pppppppuVar13 == (undefined4 *******)0x0) {
    FUN_016dd1aa(auStack_1f0,&local_158,0x54);
    pppppppuVar19 = local_20c;
LAB_00943364:
    uVar5 = uStack_15c;
    uVar9 = local_160;
    pppppppuVar22 = local_164;
    pppppppuVar13 = local_168;
    if (pppppppuVar19 != (undefined4 *******)&DAT_00000005 ||
        pppppppuVar18 != (undefined4 *******)0x0) {
      FUN_016dd1aa(param_1 + 3,auStack_1f0,0x54);
      param_1[0x18] = local_208;
      param_1[0x19] = local_244;
      param_1[0x1a] = pppppppuVar13;
      param_1[0x1b] = pppppppuVar22;
      param_1[0x1c] = uVar9;
      param_1[0x1d] = uVar5;
      *param_1 = pppppppuVar19;
      param_1[1] = pppppppuVar18;
      param_1[2] = local_24c;
      return;
    }
  }
  else {
joined_r0x00942f84:
    local_24c = pppppppuVar13;
    local_98 = local_168;
    local_94 = local_164;
    local_90 = local_160;
    if (local_208 != (undefined4 *******)0x0) {
      thunk_FUN_016d3fb4(local_244);
    }
  }
LAB_009435c8:
  uVar9 = FUN_00e959bc(local_24c,param_2);
LAB_00942674:
  *param_1 = 6;
  param_1[1] = 0;
  param_1[2] = uVar9;
  return;
}

