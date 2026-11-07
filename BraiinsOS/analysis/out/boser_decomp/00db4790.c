// FUN_00db4790 @ 00db4790 size=2740 calls_out=25 calls_in=1
// strings: user-- | user--

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00db4790(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *extraout_r3;
  char *extraout_r3_00;
  char *extraout_r3_01;
  char *extraout_r3_02;
  char *extraout_r3_03;
  char *extraout_r3_04;
  char *extraout_r3_05;
  char *extraout_r3_06;
  char *extraout_r3_07;
  char *extraout_r3_08;
  char *extraout_r3_09;
  char *extraout_r3_10;
  char *extraout_r3_11;
  char *extraout_r3_12;
  char *extraout_r3_13;
  char *extraout_r3_14;
  char *extraout_r3_15;
  char *extraout_r3_16;
  char *pcVar7;
  char *pcVar8;
  char *extraout_r3_17;
  undefined4 uVar9;
  byte bVar10;
  int iVar11;
  char *pcVar12;
  char *unaff_r7;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *unaff_r10;
  char *unaff_r11;
  char *extraout_r12;
  char *extraout_r12_00;
  char *extraout_r12_01;
  char *extraout_r12_02;
  char *extraout_r12_03;
  char *extraout_r12_04;
  char *extraout_r12_05;
  char *extraout_r12_06;
  char *extraout_r12_07;
  char *extraout_r12_08;
  char *extraout_r12_09;
  char *extraout_r12_10;
  char *extraout_r12_11;
  char *extraout_r12_12;
  char *extraout_r12_13;
  char *extraout_r12_14;
  char *extraout_r12_15;
  char *extraout_r12_16;
  char *extraout_r12_17;
  char *pcVar16;
  char *local_310;
  char *local_30c;
  char *local_308;
  char *local_304;
  char *local_2f4;
  char *local_2f0;
  char *local_2e0;
  char *local_2dc;
  char *local_2d8;
  char *local_2d4;
  char *local_2d0;
  char *local_2cc;
  char *local_2b4;
  int local_2b0;
  undefined1 local_2ac;
  char *local_2a8;
  char *local_2a4;
  char *local_2a0;
  undefined1 auStack_298 [88];
  char *local_240;
  char *local_23c;
  undefined1 auStack_238 [88];
  undefined1 auStack_1e0 [88];
  undefined4 local_188;
  char *local_184;
  char *local_180;
  char *local_17c;
  char *local_178;
  char *local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  char *pcStack_144;
  char *local_128 [2];
  undefined4 local_120;
  char *local_11c;
  char *local_118;
  char *pcStack_114;
  char *local_110;
  char *local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  char *pcStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  char *pcStack_dc;
  char *local_d8;
  char *local_d4;
  char *local_d0;
  char *local_cc;
  char *local_c8;
  char *local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  char *pcStack_94;
  int local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  char *pcStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  char *pcStack_2c;
  undefined1 uStack_25;
  
  FUN_012c3960();
  if ((char)local_120 == '\x01') goto LAB_00db47bc;
  if (local_120._1_1_ == '\x01') {
    if (local_120._2_1_ != '[') {
      pcVar15 = (char *)FUN_012c4a28(param_2,&uStack_25,&DAT_01c1cb18);
      goto LAB_00db5148;
    }
    cVar3 = *(char *)(param_2 + 0x40) + -1;
    *(char *)(param_2 + 0x40) = cVar3;
    if (cVar3 != '\0') {
      FUN_012c6160(param_2 + 0xc);
      local_2ac = 1;
      local_2a0 = (char *)0x0;
      local_2a8 = (char *)0x0;
      local_2a4 = &SUB_00000004;
      local_2b0 = param_2;
LAB_00db4870:
      FUN_012c54a0(&local_188,&local_2b0);
      iVar1 = local_2b0;
      if ((char)local_188 != '\x01') {
        if (local_188._1_1_ == '\x01') {
          FUN_012c3960(&local_120,local_2b0);
          if ((char)local_120 != '\x01') {
            if (local_120._1_1_ == '\x01') {
              if (local_120._2_1_ == '[') {
                cVar3 = *(char *)(iVar1 + 0x40) + -1;
                *(char *)(iVar1 + 0x40) = cVar3;
                if (cVar3 != '\0') {
                  FUN_012c6160(iVar1 + 0xc);
                  local_90 = iVar1;
                  local_8c = 1;
                  pcVar15 = (char *)0xdb4aec;
                  FUN_012c54a0(&local_188,&local_90);
                  if ((char)local_188 == '\x01') {
                    pcVar12 = extraout_r3_08;
                    pcVar16 = local_184;
                    pcVar5 = extraout_r12_08;
LAB_00db4e8c:
                    pcVar14 = unaff_r7;
                    pcVar7 = pcVar12;
                    unaff_r10 = (char *)0x2;
                    pcVar8 = pcVar16;
                    pcVar12 = unaff_r11;
                    local_cc = pcVar15;
                  }
                  else {
                    if (local_188._1_1_ != '\x01') {
                      pcVar15 = "";
                      pcVar16 = (char *)FUN_012cc2c0(0,&DAT_01c1af0c,&DAT_01d064b8);
                      pcVar12 = extraout_r3_10;
                      pcVar5 = extraout_r12_10;
                      goto LAB_00db4e8c;
                    }
                    pcVar15 = (char *)0xdb4b18;
                    FUN_010166a0(&local_188,local_90);
                    pcVar13 = pcStack_144;
                    pcVar7 = local_174;
                    pcVar14 = local_178;
                    pcVar4 = local_17c;
                    pcVar8 = local_184;
                    unaff_r10 = local_188;
                    pcVar12 = extraout_r3_09;
                    pcVar16 = local_184;
                    pcVar5 = extraout_r12_09;
                    if (local_188 == (char *)0x2) goto LAB_00db4e8c;
                    local_2f4 = local_178;
                    local_2f0 = local_174;
                    local_304 = local_180;
                    local_120 = (char *)local_170;
                    local_11c = (char *)uStack_16c;
                    local_118 = (char *)uStack_168;
                    pcStack_114 = (char *)uStack_164;
                    local_110 = (char *)uStack_160;
                    local_10c = (char *)uStack_15c;
                    local_108 = local_158;
                    uStack_104 = uStack_154;
                    uStack_100 = uStack_150;
                    uStack_fc = uStack_14c;
                    uStack_f8 = uStack_148;
                    pcStack_f4 = pcStack_144;
                    FUN_012c55e0(&local_188,&local_90);
                    pcVar5 = local_180;
                    pcVar12 = local_184;
                    pcVar15 = local_188;
                    pcVar16 = local_184;
                    if (local_188 == &DAT_80000001) {
LAB_00db4e80:
                      pcVar15 = (char *)0xdb4e8c;
                      FUN_019bb7e0(pcVar14,pcVar7);
                      pcVar12 = extraout_r3_16;
                      unaff_r7 = pcVar13;
                      unaff_r11 = pcVar4;
                      pcVar5 = extraout_r12_16;
                      goto LAB_00db4e8c;
                    }
                    if (local_188 == &DAT_80000000) {
                      pcVar16 = (char *)FUN_012cc2c0(1,&DAT_01c1af0c,&DAT_01d064b8);
                      goto LAB_00db4e80;
                    }
                    local_310 = local_180;
                    FUN_012c54a0(&local_188,&local_90);
                    if ((char)local_188 == '\x01') {
LAB_00db4d90:
                      pcVar16 = local_184;
LAB_00db4e74:
                      FUN_019bb7e0(pcVar15,pcVar12);
                      pcVar13 = pcVar12;
                      goto LAB_00db4e80;
                    }
                    if (local_188._1_1_ != '\x01') {
                      pcVar16 = (char *)FUN_012cc2c0(2,&DAT_01c1af0c,&DAT_01d064b8);
                      goto LAB_00db4e74;
                    }
                    FUN_00fe861c(&local_188,local_90);
                    if (local_188 == &DAT_80000001) goto LAB_00db4d90;
                    local_2e0 = local_184;
                    local_2d4 = pcVar15;
                    local_2b4 = pcVar12;
                    local_c0 = local_120;
                    uStack_bc = local_11c;
                    uStack_b8 = local_118;
                    uStack_b4 = pcStack_114;
                    uStack_b0 = local_110;
                    uStack_ac = local_10c;
                    local_a8 = local_108;
                    uStack_a4 = uStack_104;
                    uStack_a0 = uStack_100;
                    uStack_9c = uStack_fc;
                    uStack_98 = uStack_f8;
                    pcStack_94 = pcStack_f4;
                    pcVar12 = local_180;
                    local_cc = local_188;
                    local_2dc = pcVar4;
                    local_2d8 = local_304;
                  }
                  *(char *)(iVar1 + 0x40) = *(char *)(iVar1 + 0x40) + '\x01';
                  local_118 = local_2d8;
                  pcStack_114 = local_2dc;
                  local_108 = local_c0;
                  uStack_104 = uStack_bc;
                  uStack_100 = uStack_b8;
                  uStack_fc = uStack_b4;
                  uStack_f8 = uStack_b0;
                  pcStack_f4 = (char *)uStack_ac;
                  local_f0 = local_a8;
                  uStack_ec = uStack_a4;
                  uStack_e8 = uStack_a0;
                  uStack_e4 = uStack_9c;
                  uStack_e0 = uStack_98;
                  pcStack_dc = pcStack_94;
                  local_c8 = local_2e0;
                  local_d4 = local_2b4;
                  local_d8 = local_2d4;
                  local_120 = unaff_r10;
                  local_11c = pcVar8;
                  local_110 = pcVar14;
                  local_10c = pcVar7;
                  local_d0 = pcVar5;
                  local_c4 = pcVar12;
                  pcVar5 = (char *)FUN_012c4e3c(iVar1);
                  FUN_01bed4e2(&local_188,&local_120,0x60);
                  pcVar15 = local_184;
                  local_128[0] = pcVar5;
                  if (local_188 != (char *)0x2) goto LAB_00db4f48;
                  unaff_r7 = (char *)0x2;
                  if (pcVar5 != (char *)0x0) {
                    FUN_00f80260(local_128);
                  }
                  goto LAB_00db4f78;
                }
                local_188 = &DAT_00000018;
                local_11c = (char *)FUN_01966fbc(&local_188,*(undefined4 *)(iVar1 + 0x30),
                                                 *(undefined4 *)(iVar1 + 0x34));
              }
              else {
                if (local_120._2_1_ != '{') {
                  pcVar15 = (char *)FUN_012c4a28(iVar1,&uStack_25,&DAT_01c1cf58);
                  goto LAB_00db51a0;
                }
                cVar3 = *(char *)(iVar1 + 0x40) + -1;
                *(char *)(iVar1 + 0x40) = cVar3;
                if (cVar3 != '\0') {
                  FUN_012c6160(iVar1 + 0xc);
                  pcVar12 = &DAT_80000000;
                  local_8c = 1;
                  local_2b4 = (char *)0x2;
                  pcVar15 = &DAT_80000001;
                  local_90 = iVar1;
LAB_00db4904:
LAB_00db4908:
                  do {
                    while( true ) {
                      pcVar16 = (char *)0xdb4914;
                      FUN_012c4f64(&local_188,&local_90);
                      iVar2 = local_90;
                      pcVar5 = pcVar12;
                      if ((char)local_188 == '\x01') {
                        pcVar8 = extraout_r3;
                        pcVar4 = local_184;
                        pcVar14 = extraout_r12;
                        goto LAB_00db4c00;
                      }
                      if (local_188._1_1_ == '\0') {
                        if (local_2b4 == (char *)0x2) {
                          local_11c = &DAT_00000003;
                          local_120 = "url";
                          local_184 = (char *)&DAT_0132b6a0;
                          local_188 = (char *)&local_120;
                          pcVar16 = "";
                          pcVar4 = (char *)FUN_019676ac(&DAT_0057cd64,&local_188);
                          pcVar8 = extraout_r3_11;
                          pcVar14 = extraout_r12_11;
                          goto LAB_00db4bf4;
                        }
                        if (pcVar12 == &DAT_80000000) {
                          local_11c = &SUB_00000004;
                          local_120 = "user--";
                          local_184 = &LAB_018a13b8;
                          local_188 = (char *)&local_120;
                          pcVar4 = (char *)FUN_019676ac(&DAT_0057cd64,&local_188);
                          pcVar16 = "";
                          FUN_019bb7e0(local_2e0,local_2f0);
                          bVar10 = 0;
                          pcVar8 = extraout_r3_15;
                          pcVar14 = extraout_r12_15;
                          goto LAB_00db4c04;
                        }
                        if (pcVar15 == &DAT_80000001) {
                          pcVar15 = &DAT_80000000;
                        }
                        local_58 = local_88;
                        uStack_54 = uStack_84;
                        uStack_50 = uStack_80;
                        uStack_4c = uStack_7c;
                        uStack_48 = uStack_78;
                        uStack_44 = uStack_74;
                        local_40 = local_70;
                        uStack_3c = uStack_6c;
                        uStack_38 = uStack_68;
                        uStack_34 = uStack_64;
                        uStack_30 = uStack_60;
                        pcStack_2c = pcStack_5c;
                        local_2cc = local_308;
                        local_2d0 = local_30c;
                        pcVar8 = local_2e0;
                        pcVar4 = local_310;
                        pcVar7 = local_2b4;
                        pcVar5 = local_2f0;
                        pcVar14 = local_304;
                        pcVar16 = local_2f4;
                        local_2d4 = unaff_r11;
                        goto LAB_00db4c58;
                      }
                      iVar11 = local_90 + 0xc;
                      FUN_012c6160(iVar11);
                      *(undefined4 *)(iVar2 + 8) = 0;
                      pcVar16 = (char *)0xdb4954;
                      FUN_012c6380(&local_188,iVar11,iVar2);
                      pcVar8 = extraout_r3_00;
                      pcVar4 = local_184;
                      pcVar14 = extraout_r12_00;
                      if (local_188 == (char *)0x2) goto LAB_00db4c00;
                      pcVar16 = (char *)0xdb4974;
                      FUN_00ea4858(&local_120,local_184,local_180);
                      if ((char)local_120 == '\x01') {
                        pcVar8 = extraout_r3_01;
                        pcVar4 = local_11c;
                        pcVar14 = extraout_r12_01;
                        goto LAB_00db4c00;
                      }
                      if (local_120._1_1_ != '\x03') break;
                      pcVar16 = "";
                      pcVar4 = (char *)FUN_012c50c0(iVar2);
                      pcVar8 = extraout_r3_02;
                      pcVar14 = extraout_r12_02;
                      if (pcVar4 != (char *)0x0) goto LAB_00db4c00;
                    }
                    if (local_120._1_1_ == '\0') goto LAB_00db4a30;
                    if (local_120._1_1_ != '\x01') {
                      if (pcVar15 != &DAT_80000001) {
                        local_11c = &DAT_00000008;
                        local_120 = &DAT_00571120;
                        goto LAB_00db5040;
                      }
                      pcVar16 = "";
                      pcVar4 = (char *)FUN_012c4d2c(iVar2);
                      pcVar8 = extraout_r3_04;
                      pcVar14 = extraout_r12_04;
                      if (pcVar4 == (char *)0x0) {
                        pcVar16 = (char *)0xdb4a14;
                        FUN_00fe861c(&local_188,iVar2);
                        pcVar8 = extraout_r3_05;
                        pcVar4 = local_184;
                        pcVar15 = local_188;
                        pcVar14 = extraout_r12_05;
                        if (local_188 != &DAT_80000001) {
                          local_2f4 = local_184;
                          unaff_r10 = local_180;
                          goto LAB_00db4908;
                        }
                      }
                      bVar10 = 1;
                      goto LAB_00db4c1c;
                    }
                    if (pcVar12 != &DAT_80000000) {
                      local_11c = &SUB_00000004;
                      local_120 = "user--";
                      goto LAB_00db5040;
                    }
                    pcVar16 = (char *)0xdb49c8;
                    FUN_012c5464(&local_188,iVar2);
                    if (local_188 == &DAT_80000000) {
                      bVar10 = 1;
                      pcVar5 = &DAT_80000000;
                      pcVar8 = extraout_r3_03;
                      pcVar4 = local_184;
                      pcVar14 = extraout_r12_03;
                      goto LAB_00db4c08;
                    }
                    local_304 = local_180;
                    pcVar12 = local_188;
                    unaff_r11 = local_184;
                  } while( true );
                }
                local_188 = &DAT_00000018;
                local_11c = (char *)FUN_01966fbc(&local_188,*(undefined4 *)(iVar1 + 0x30),
                                                 *(undefined4 *)(iVar1 + 0x34));
              }
            }
            else {
              local_188 = &DAT_00000005;
              local_11c = (char *)FUN_01966fbc(&local_188,*(undefined4 *)(iVar1 + 0x30),
                                               *(undefined4 *)(iVar1 + 0x34));
            }
          }
          goto LAB_00db50b4;
        }
        local_120 = local_2a8;
        local_11c = local_2a4;
        local_118 = local_2a0;
        goto LAB_00db50c8;
      }
      local_11c = local_184;
      goto LAB_00db50b4;
    }
    uVar6 = *(undefined4 *)(param_2 + 0x30);
    uVar9 = *(undefined4 *)(param_2 + 0x34);
    local_188 = (char *)0x18;
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 0x30);
    uVar9 = *(undefined4 *)(param_2 + 0x34);
    local_188 = (char *)0x5;
  }
  local_11c = (char *)FUN_01966fbc(&local_188,uVar6,uVar9);
  goto LAB_00db47bc;
LAB_00db4a30:
  if (local_2b4 != (char *)0x2) {
    local_11c = &DAT_00000003;
    local_120 = "url";
LAB_00db5040:
    local_184 = (char *)&DAT_0132b6a0;
    local_188 = (char *)&local_120;
    pcVar16 = (char *)0xdb5070;
    pcVar4 = (char *)FUN_019676ac(&DAT_005ab34f,&local_188);
    pcVar8 = extraout_r3_17;
    pcVar14 = extraout_r12_17;
LAB_00db4bf4:
LAB_00db4c00:
    bVar10 = 1;
    goto LAB_00db4c04;
  }
  pcVar16 = "";
  pcVar4 = (char *)FUN_012c4d2c(iVar2);
  pcVar8 = extraout_r3_06;
  pcVar14 = extraout_r12_06;
  if (pcVar4 != (char *)0x0) goto LAB_00db4fec;
  pcVar16 = (char *)0xdb4a5c;
  FUN_010166a0(&local_188,iVar2);
  local_2b4 = local_188;
  pcVar8 = extraout_r3_07;
  pcVar4 = local_184;
  pcVar14 = extraout_r12_07;
  if (local_188 == (char *)0x2) goto LAB_00db4fec;
  local_2e0 = local_178;
  local_2f0 = local_174;
  local_310 = local_184;
  local_308 = local_180;
  local_30c = local_17c;
  local_88 = local_170;
  uStack_84 = uStack_16c;
  uStack_80 = uStack_168;
  uStack_7c = uStack_164;
  uStack_78 = uStack_160;
  uStack_74 = uStack_15c;
  local_70 = local_158;
  uStack_6c = uStack_154;
  uStack_68 = uStack_150;
  uStack_64 = uStack_14c;
  uStack_60 = uStack_148;
  pcStack_5c = pcStack_144;
  goto LAB_00db4904;
LAB_00db4fec:
  bVar10 = 1;
  local_2b4 = (char *)0x2;
LAB_00db4c04:
LAB_00db4c08:
  if (-0x7fffffff < (int)pcVar15) {
    pcVar16 = (char *)0xdb4c1c;
    FUN_019bb7e0(pcVar15,local_2f4);
    pcVar8 = extraout_r3_12;
    pcVar14 = extraout_r12_12;
  }
LAB_00db4c1c:
  if (pcVar5 != &DAT_80000000) {
    pcVar16 = "d";
    FUN_019bb7e0(pcVar5,unaff_r11);
    pcVar8 = extraout_r3_13;
    pcVar14 = extraout_r12_13;
  }
  pcVar7 = (char *)0x2;
  if ((bool)(bVar10 & local_2b4 != (char *)0x2)) {
    FUN_019bb7e0(local_2e0,local_2f0);
    pcVar8 = extraout_r3_14;
    pcVar14 = extraout_r12_14;
    pcVar16 = "@";
  }
LAB_00db4c58:
  *(char *)(iVar1 + 0x40) = *(char *)(iVar1 + 0x40) + '\x01';
  local_118 = local_2cc;
  pcStack_114 = local_2d0;
  local_108 = local_58;
  uStack_104 = uStack_54;
  uStack_100 = uStack_50;
  uStack_fc = uStack_4c;
  uStack_f8 = uStack_48;
  pcStack_f4 = (char *)uStack_44;
  local_f0 = local_40;
  uStack_ec = uStack_3c;
  uStack_e8 = uStack_38;
  uStack_e4 = uStack_34;
  uStack_e0 = uStack_30;
  pcStack_dc = pcStack_2c;
  local_d4 = local_2d4;
  local_120 = pcVar7;
  local_11c = pcVar4;
  local_110 = pcVar8;
  local_10c = pcVar5;
  local_d8 = pcVar12;
  local_d0 = pcVar14;
  local_cc = pcVar15;
  local_c8 = pcVar16;
  local_c4 = unaff_r10;
  pcVar5 = (char *)FUN_012c4db0(iVar1);
  FUN_01bed4e2(&local_188,&local_120,0x60);
  pcVar15 = local_184;
  local_128[0] = pcVar5;
  if (local_188 == (char *)0x2) {
    unaff_r7 = (char *)0x2;
    if (pcVar5 != (char *)0x0) {
      FUN_00f80260(local_128);
    }
  }
  else {
LAB_00db4f48:
    pcVar5 = local_128[0];
    pcVar15 = local_184;
    unaff_r7 = local_188;
    if (local_128[0] == (char *)0x0) {
      FUN_01bed4e2(auStack_1e0,&local_180,0x58);
    }
    else {
      FUN_0094ad9c(&local_188);
      unaff_r7 = (char *)0x2;
      pcVar15 = pcVar5;
    }
  }
LAB_00db4f78:
  if (unaff_r7 != (char *)0x2) {
    FUN_01bed4e2(auStack_298,auStack_1e0,0x58);
    local_240 = unaff_r7;
    local_23c = pcVar15;
    FUN_01bed4e2(auStack_238,auStack_298,0x58);
    pcVar15 = local_2a0;
    if (local_2a0 == local_2a8) {
      FUN_00f9d62c(&local_2a8);
    }
    FUN_01bed4e2(local_2a4 + (int)pcVar15 * 0x60,&local_240,0x60);
    local_2a0 = pcVar15 + 1;
    unaff_r11 = pcVar12;
    goto LAB_00db4870;
  }
LAB_00db51a0:
  local_11c = (char *)FUN_012c6694(pcVar15,*(undefined4 *)(iVar1 + 0x30),
                                   *(undefined4 *)(iVar1 + 0x34));
LAB_00db50b4:
  local_120 = &DAT_80000000;
  FUN_00f86514(&local_2a8);
LAB_00db50c8:
  *(char *)(param_2 + 0x40) = *(char *)(param_2 + 0x40) + '\x01';
  pcVar5 = (char *)FUN_012c4e3c(param_2);
  pcVar15 = local_11c;
  local_188 = local_120;
  local_184 = local_11c;
  local_180 = local_118;
  local_17c = pcVar5;
  if (local_120 == &DAT_80000000) {
    if (pcVar5 != (char *)0x0) {
      FUN_00f80260(&local_17c);
    }
  }
  else {
    if (pcVar5 == (char *)0x0) {
      *param_1 = local_120;
      param_1[1] = local_11c;
      param_1[2] = local_118;
      return;
    }
    FUN_00f86514(&local_188);
    pcVar15 = pcVar5;
  }
LAB_00db5148:
  local_11c = (char *)FUN_012c6694(pcVar15,*(undefined4 *)(param_2 + 0x30),
                                   *(undefined4 *)(param_2 + 0x34));
LAB_00db47bc:
  *param_1 = 0x80000000;
  param_1[1] = local_11c;
  return;
}

