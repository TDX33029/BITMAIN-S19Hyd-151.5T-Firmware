// FUN_0123ed48 @ 0123ed48 size=4572 calls_out=26 calls_in=1
// strings: tuner_modes | default_dps_power_limit_watt | default_hashrate_step | default_power_step | default_tuner_mode | min_hashrate_target

/* WARNING: Removing unreachable block (ram,0x0123f924) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0123ed48(undefined4 *param_1,undefined4 ******param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *******pppppppuVar5;
  undefined4 *******pppppppuVar6;
  int iVar7;
  undefined4 *******pppppppuVar8;
  undefined4 *******pppppppuVar9;
  undefined4 uVar10;
  undefined4 *****pppppuVar11;
  undefined4 *****pppppuVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined4 *******pppppppuVar15;
  undefined4 *******pppppppuVar16;
  undefined4 *******unaff_r11;
  undefined4 *******extraout_r12;
  undefined4 *******extraout_r12_00;
  undefined4 *******extraout_r12_01;
  undefined4 *******extraout_r12_02;
  undefined4 *******pppppppuVar17;
  undefined4 *******extraout_r12_03;
  undefined4 *******extraout_r12_04;
  undefined4 *******extraout_r12_05;
  undefined4 *******extraout_r12_06;
  undefined4 *******extraout_r12_07;
  undefined4 *******extraout_r12_08;
  undefined4 *******extraout_r12_09;
  undefined4 *******extraout_r12_10;
  byte bVar18;
  undefined4 *******pppppppuVar19;
  undefined4 *******pppppppuVar20;
  ulonglong uVar21;
  undefined4 *******local_260;
  undefined4 *******local_25c;
  undefined4 *******local_248;
  undefined4 *******local_244;
  uint local_240;
  undefined4 *******local_22c;
  undefined1 local_228;
  undefined4 *******local_224;
  undefined4 *******local_220;
  undefined4 *******local_21c;
  undefined4 *******local_218;
  undefined4 *******local_214;
  undefined4 *******local_210;
  undefined4 *******local_204;
  undefined4 *******local_200;
  undefined4 *******pppppppuStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 auStack_1f0 [88];
  undefined4 *******local_198;
  undefined4 *******pppppppuStack_194;
  undefined4 uStack_190;
  undefined4 *******local_188;
  undefined4 *******pppppppuStack_184;
  undefined4 uStack_180;
  undefined4 *******local_178;
  undefined4 *******pppppppuStack_174;
  undefined4 uStack_170;
  undefined4 *******local_168;
  undefined4 *******local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 *******local_158;
  undefined4 *******local_154;
  undefined4 uStack_150;
  undefined4 local_100;
  undefined4 *******local_fc;
  undefined4 *******local_f8;
  undefined4 *******pppppppuStack_f4;
  undefined4 *******pppppppuStack_f0;
  undefined4 uStack_ec;
  undefined4 *******local_e8;
  undefined4 *******pppppppuStack_e4;
  undefined4 *******local_e0;
  undefined4 *******local_dc;
  undefined4 *******pppppppuStack_d8;
  undefined4 uStack_d4;
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
  undefined4 ******local_88;
  undefined1 local_84;
  undefined4 *******local_80;
  undefined4 *******pppppppuStack_7c;
  undefined4 uStack_78;
  undefined4 *******local_70;
  undefined4 *******pppppppuStack_6c;
  undefined4 uStack_68;
  undefined4 *******local_60;
  undefined4 *******pppppppuStack_5c;
  undefined4 uStack_58;
  undefined4 *******local_50;
  undefined4 *******pppppppuStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_41;
  
  pppppuVar11 = param_2[4];
  pppppuVar12 = param_2[5];
  if (pppppuVar12 < pppppuVar11) {
    do {
      uVar14 = *(byte *)((int)param_2[3] + (int)pppppuVar12) - 9;
      if ((0x17 < uVar14) || ((1 << (uVar14 & 0xff) & 0x800013U) == 0)) {
        if (*(byte *)((int)param_2[3] + (int)pppppuVar12) != 0x6e) goto LAB_0123edb8;
        param_2[5] = (undefined4 *****)((int)pppppuVar12 + 1);
        iVar7 = FUN_01964c70(param_2,"ull",3);
        if (iVar7 == 0) {
          *param_1 = 5;
          param_1[1] = 0;
          return;
        }
        goto LAB_0123f3d0;
      }
      pppppuVar12 = (undefined4 *****)((int)pppppuVar12 + 1);
      param_2[5] = pppppuVar12;
    } while (pppppuVar11 != pppppuVar12);
  }
  else {
LAB_0123edb8:
    if (pppppuVar12 < pppppuVar11) {
      do {
        uVar14 = (uint)*(byte *)((int)param_2[3] + (int)pppppuVar12);
        if ((0x17 < uVar14 - 9) || ((1 << (uVar14 - 9 & 0xff) & 0x800013U) == 0)) {
          if (uVar14 == 0x5b) {
            cVar1 = *(char *)(param_2 + 9);
            *(char *)(param_2 + 9) = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              param_2[5] = (undefined4 *****)((int)pppppuVar12 + 1);
              local_84 = 1;
              local_88 = param_2;
              FUN_01224e64(&local_100,&local_88);
              pppppppuVar9 = local_fc;
              pppppppuVar16 = (undefined4 *******)0x0;
              pppppppuVar15 = (undefined4 *******)&DAT_00000005;
              if (local_100 == (undefined4 *******)0x2) {
                pppppppuVar9 = unaff_r11;
                pppppppuVar8 = extraout_r12;
                pppppppuVar19 = (undefined4 *******)0x123f38c;
LAB_0123f3a8:
                pppppppuVar15 = (undefined4 *******)&DAT_00000005;
                local_210 = local_fc;
                unaff_r11 = pppppppuVar9;
              }
              else if (((uint)local_100 & 1) == 0) {
                uVar10 = 0;
LAB_0123fe84:
                pppppppuVar15 = (undefined4 *******)&DAT_00000005;
                pppppppuVar19 = (undefined4 *******)0x123fe88;
                local_210 = (undefined4 *******)FUN_014b5c7c(uVar10,&DAT_01c249c4,&DAT_01d064b8);
                pppppppuVar8 = extraout_r12_07;
              }
              else {
                pppppppuVar19 = (undefined4 *******)0x123f3fc;
                FUN_01225168(&local_100,&local_88);
                pppppppuVar8 = extraout_r12_00;
                if (local_100 != (undefined4 *******)0x2 || local_fc != (undefined4 *******)0x0) {
                  if (((uint)local_100 & 1) == 0) {
                    uVar10 = 1;
                    goto LAB_0123fe84;
                  }
                  pppppppuVar19 = (undefined4 *******)0x123f428;
                  FUN_01225168(&local_100,&local_88);
                  pppppppuVar8 = extraout_r12_01;
                  if (local_100 != (undefined4 *******)0x2 || local_fc != (undefined4 *******)0x0) {
                    if (((uint)local_100 & 1) == 0) {
                      uVar10 = 2;
                      goto LAB_0123fe84;
                    }
                    pppppppuVar19 = (undefined4 *******)0x123f454;
                    FUN_01225168(&local_100,&local_88);
                    pppppppuVar8 = extraout_r12_02;
                    if (local_100 != (undefined4 *******)0x2 || local_fc != (undefined4 *******)0x0)
                    {
                      if (((uint)local_100 & 1) == 0) {
                        pppppppuVar19 = (undefined4 *******)0x123fea8;
                        local_210 = (undefined4 *******)FUN_014b5c7c(3,&DAT_01c249c4,&DAT_01d064b8);
                        pppppppuVar15 = (undefined4 *******)&DAT_00000005;
                        pppppppuVar8 = extraout_r12_08;
                      }
                      else {
                        pppppppuVar20 = (undefined4 *******)0x123f6b4;
                        FUN_01225304(&local_100,&local_88);
                        local_210 = local_f8;
                        pppppppuVar5 = local_fc;
                        pppppppuVar15 = local_100;
                        pppppppuVar6 = unaff_r11;
                        pppppppuVar17 = local_fc;
                        if (local_100 == (undefined4 *******)&DAT_00000006 &&
                            local_fc == (undefined4 *******)0x0) {
LAB_0123f6cc:
                          pppppppuVar9 = pppppppuVar6;
                          local_fc = local_f8;
                          pppppppuVar8 = pppppppuVar17;
                          pppppppuVar19 = pppppppuVar20;
                          goto LAB_0123f3a8;
                        }
                        local_204 = local_f8;
                        uVar13 = SUB41(&local_80,0);
                        local_80 = pppppppuStack_f4;
                        pppppppuStack_7c = pppppppuStack_f0;
                        uStack_78 = uStack_ec;
                        local_214 = local_fc;
                        if (local_100 == (undefined4 *******)&DAT_00000005 &&
                            local_fc == (undefined4 *******)0x0) {
                          uVar10 = 4;
LAB_0123fec8:
                          local_210 = (undefined4 *******)
                                      FUN_014b5c7c(uVar10,&DAT_01c249c4,&DAT_01d064b8);
                          pppppppuVar8 = extraout_r12_09;
                          pppppppuVar19 = (undefined4 *******)0x123fecc;
                        }
                        else {
                          FUN_01225304(&local_100,&local_88);
                          pppppppuVar19 = local_f8;
                          pppppppuVar8 = local_fc;
                          unaff_r11 = local_100;
                          if (local_100 == (undefined4 *******)&DAT_00000006 &&
                              local_fc == (undefined4 *******)0x0) {
                            local_fc = local_f8;
                            pppppppuVar8 = extraout_r12_03;
                            goto LAB_0123f3a8;
                          }
                          local_22c = &local_168;
                          local_168 = pppppppuStack_f4;
                          local_164 = pppppppuStack_f0;
                          uStack_160 = uStack_ec;
                          local_228 = uVar13;
                          if (local_100 == (undefined4 *******)&DAT_00000005 &&
                              local_fc == (undefined4 *******)0x0) {
                            uVar10 = 5;
                            unaff_r11 = pppppppuVar9;
                            goto LAB_0123fe84;
                          }
                          pppppppuVar20 = (undefined4 *******)0x123f80c;
                          FUN_01225304(&local_100,&local_88);
                          local_218 = local_f8;
                          pppppppuVar6 = pppppppuVar9;
                          pppppppuVar17 = extraout_r12_04;
                          if (local_100 == (undefined4 *******)&DAT_00000006 &&
                              local_fc == (undefined4 *******)0x0) goto LAB_0123f6cc;
                          local_158 = pppppppuStack_f4;
                          local_154 = pppppppuStack_f0;
                          uStack_150 = uStack_ec;
                          local_21c = local_100;
                          local_220 = local_fc;
                          if (local_100 == (undefined4 *******)&DAT_00000005 &&
                              local_fc == (undefined4 *******)0x0) {
                            uVar10 = 6;
                            goto LAB_0123fec8;
                          }
                          FUN_01224ecc(&local_100,&local_88);
                          pppppppuVar17 = local_fc;
                          pppppppuVar6 = local_100;
                          if (local_100 == (undefined4 *******)&DAT_80000001) {
                            local_210 = local_fc;
                            pppppppuVar8 = extraout_r12_05;
                            pppppppuVar19 = (undefined4 *******)0x123f8d0;
                          }
                          else if (local_100 == (undefined4 *******)&DAT_80000000) {
                            pppppppuVar19 = (undefined4 *******)0x123ff24;
                            local_210 = (undefined4 *******)
                                        FUN_014b5c7c(7,&DAT_01c249c4,&DAT_01d064b8);
                            pppppppuVar8 = extraout_r12_10;
                          }
                          else {
                            local_224 = local_f8;
                            FUN_01224c58(&local_100,&local_88);
                            if ((char)local_100 == '\x01') {
                            }
                            else {
                              local_228 = (undefined1)((uint)local_100 >> 8);
                              if (((uint)local_100 >> 8 & 0xff) != 2) {
                                local_178 = local_80;
                                pppppppuStack_174 = pppppppuStack_7c;
                                uStack_170 = uStack_78;
                                local_188 = local_168;
                                pppppppuStack_184 = local_164;
                                uStack_180 = uStack_160;
                                local_198 = local_158;
                                pppppppuStack_194 = local_154;
                                uStack_190 = uStack_150;
                                local_22c = pppppppuVar9;
                                local_204 = pppppppuVar17;
                                local_214 = pppppppuVar6;
                                pppppppuVar16 = pppppppuVar5;
                                goto LAB_0123f46c;
                              }
                              local_fc = (undefined4 *******)
                                         FUN_014b5c7c(8,&DAT_01c249c4,&DAT_01d064b8);
                            }
                            FUN_019bb7e0(pppppppuVar6,pppppppuVar17);
                            local_210 = local_fc;
                            pppppppuVar8 = extraout_r12_06;
                            pppppppuVar19 = (undefined4 *******)0x123fb80;
                            local_228 = uVar13;
                          }
                        }
                        pppppppuVar15 = (undefined4 *******)&DAT_00000005;
                        unaff_r11 = pppppppuVar9;
                      }
                      goto LAB_0123f46c;
                    }
                  }
                }
                local_210 = local_f8;
              }
LAB_0123f46c:
              *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
              pppppppuStack_f4 = local_178;
              pppppppuStack_f0 = pppppppuStack_174;
              uStack_ec = uStack_170;
              local_dc = local_188;
              pppppppuStack_d8 = pppppppuStack_184;
              uStack_d4 = uStack_180;
              local_d0 = local_21c;
              local_cc = local_220;
              local_c8 = local_218;
              local_c4 = local_198;
              pppppppuStack_c0 = pppppppuStack_194;
              uStack_bc = uStack_190;
              local_90 = CONCAT31(local_90._1_3_,local_228);
              local_94 = local_22c;
              local_98 = local_224;
              local_9c = local_204;
              local_a0 = local_214;
              local_100 = pppppppuVar15;
              local_fc = pppppppuVar16;
              local_f8 = local_210;
              local_e0 = pppppppuVar19;
              local_e8 = unaff_r11;
              pppppppuStack_e4 = pppppppuVar8;
              pppppppuVar9 = (undefined4 *******)FUN_01964fb0(param_2);
              FUN_01bed4e2(&local_158,&pppppppuStack_f4,0x54);
              local_168 = local_98;
              local_164 = local_94;
              uStack_160 = local_90;
              uStack_15c = uStack_8c;
              if (!(pppppppuVar15 != (undefined4 *******)&DAT_00000005 ||
                   pppppppuVar16 != (undefined4 *******)0x0)) {
                if (pppppppuVar9 != (undefined4 *******)0x0) goto LAB_0123fa38;
                goto LAB_0123fa3c;
              }
              if (pppppppuVar9 != (undefined4 *******)0x0) {
                FUN_019bb7e0(local_214,local_204);
                pppppppuVar16 = (undefined4 *******)0x0;
                pppppppuVar15 = (undefined4 *******)&DAT_00000005;
                goto LAB_0123fa98;
              }
              FUN_01bed4e2(auStack_1f0,&local_158,0x54);
              goto LAB_0123fa90;
            }
          }
          else {
            if (uVar14 != 0x7b) {
              pppppppuVar9 = (undefined4 *******)FUN_019659c8(param_2,&uStack_41,&DAT_01c24afc);
              goto LAB_0123fd20;
            }
            cVar1 = *(char *)(param_2 + 9);
            *(char *)(param_2 + 9) = cVar1 + -1;
            if ((char)(cVar1 + -1) != '\0') {
              param_2[5] = (undefined4 *****)((int)pppppuVar12 + 1);
              local_164 = (undefined4 *******)CONCAT31(local_164._1_3_,1);
              local_218 = (undefined4 *******)&DAT_00000005;
              local_240 = 2;
              local_21c = (undefined4 *******)0x0;
              local_220 = (undefined4 *******)&DAT_00000005;
              local_224 = (undefined4 *******)0x0;
              bVar4 = false;
              bVar3 = false;
              local_204 = (undefined4 *******)0x0;
              bVar2 = false;
              pppppppuVar9 = (undefined4 *******)0x7b;
              pppppppuVar15 = (undefined4 *******)&DAT_00000005;
              local_214 = (undefined4 *******)&DAT_80000000;
              pppppppuVar16 = (undefined4 *******)0x0;
              local_168 = (undefined4 *******)param_2;
              goto LAB_0123eec8;
            }
          }
          local_100 = (undefined4 *******)0x18;
          goto LAB_0123edfc;
        }
        pppppuVar12 = (undefined4 *****)((int)pppppuVar12 + 1);
        param_2[5] = pppppuVar12;
      } while (pppppuVar11 != pppppuVar12);
    }
  }
  local_100 = (undefined4 *******)0x5;
LAB_0123edfc:
  iVar7 = FUN_01964674(param_2,&local_100);
  goto LAB_0123f3d0;
LAB_0123eec8:
  FUN_01965d20(&local_100,&local_168);
  if ((char)local_100 == '\x01') goto LAB_0123f8ec;
  if (local_100._1_1_ != '\x01') {
    if (!bVar2) {
      local_fc = (undefined4 *******)&DAT_0132b6a0;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_0000001c;
      local_158 = (undefined4 *******)0x403422;
      local_210 = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_100);
      goto LAB_0123f8f4;
    }
    if (local_204 == (undefined4 *******)0x0) {
      local_fc = (undefined4 *******)&DAT_0132b6a0;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_00000010;
      local_158 = (undefined4 *******)&DAT_00569e48;
      local_210 = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_100);
      goto LAB_0123f8f4;
    }
    if (!bVar3) {
      local_fc = (undefined4 *******)&DAT_0132b6a0;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_00000010;
      local_158 = (undefined4 *******)&DAT_00568468;
      local_210 = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_100);
      goto LAB_0123f8f4;
    }
    if (!bVar4) {
      local_fc = (undefined4 *******)&DAT_0132b6a0;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_00000012;
      local_158 = (undefined4 *******)0x40343e;
      local_210 = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_100);
      goto LAB_0123f8f4;
    }
    if (pppppppuVar15 == (undefined4 *******)&DAT_00000005 &&
        pppppppuVar16 == (undefined4 *******)0x0) {
      local_fc = (undefined4 *******)&DAT_0132b6a0;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_00000013;
      local_158 = (undefined4 *******)0x49f5a6;
      local_210 = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_100);
      goto LAB_0123f8f4;
    }
    if (local_220 == (undefined4 *******)&DAT_00000005 && local_224 == (undefined4 *******)0x0) {
      local_fc = (undefined4 *******)&DAT_0132b6a0;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_00000013;
      local_158 = (undefined4 *******)0x403450;
      local_210 = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_100);
      goto LAB_0123f8f4;
    }
    if (local_218 == (undefined4 *******)&DAT_00000005 && local_21c == (undefined4 *******)0x0) {
      local_fc = (undefined4 *******)&DAT_0132b6a0;
      local_100 = &local_158;
      local_154 = (undefined4 *******)&DAT_00000015;
      local_158 = (undefined4 *******)0x403463;
      local_210 = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_100);
      goto LAB_0123f8f4;
    }
    if (local_214 != (undefined4 *******)&DAT_80000000) {
      if (local_240 == 2) {
        local_fc = (undefined4 *******)&DAT_0132b6a0;
        local_100 = &local_158;
        local_154 = (undefined4 *******)&DAT_00000012;
        local_158 = (undefined4 *******)0x403483;
        local_25c = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_100);
        FUN_019bb7e0(local_214,pppppppuVar9);
        local_260 = (undefined4 *******)0x2;
        local_210 = pppppppuVar9;
        goto LAB_0123f92c;
      }
      bVar18 = (byte)local_240 & 1;
      local_80 = local_70;
      pppppppuStack_7c = pppppppuStack_6c;
      uStack_78 = uStack_68;
      local_178 = local_60;
      pppppppuStack_174 = pppppppuStack_5c;
      uStack_170 = uStack_58;
      local_188 = local_50;
      pppppppuStack_184 = pppppppuStack_4c;
      uStack_180 = uStack_48;
      local_204 = pppppppuVar9;
      goto LAB_0123f934;
    }
    local_fc = (undefined4 *******)&DAT_0132b6a0;
    local_100 = &local_158;
    local_154 = (undefined4 *******)&DAT_0000000b;
    local_158 = (undefined4 *******)0x403478;
    pppppppuVar8 = (undefined4 *******)FUN_019676ac(&DAT_0057cd64,&local_100);
LAB_0123f87c:
    local_260 = pppppppuVar9;
    local_25c = pppppppuVar8;
    local_210 = (undefined4 *******)&local_100;
    goto LAB_0123f92c;
  }
  local_168[2] = (undefined4 ******)0x0;
  local_168[5] = (undefined4 ******)((int)local_168[5] + 1);
  FUN_019686b4(&local_100,local_168 + 3);
  pppppppuVar8 = local_fc;
  if (local_100 == (undefined4 *******)0x2) {
    local_210 = local_fc;
    goto LAB_0123f8f4;
  }
  switch(local_f8) {
  case (undefined4 *******)0xb:
    iVar7 = thunk_FUN_01bed842(local_fc,"tuner_modes",0xb);
    pppppppuVar19 = local_168;
    if (iVar7 != 0) goto switchD_0123ef40_caseD_c;
    if (local_214 == (undefined4 *******)&DAT_80000000) {
      pppppppuVar8 = (undefined4 *******)FUN_01965c98(local_168);
      if (pppppppuVar8 != (undefined4 *******)0x0) goto LAB_0123f87c;
      FUN_0124f9c4(&local_100,pppppppuVar19);
      if (local_100 == (undefined4 *******)&DAT_80000000) {
        local_260 = local_fc;
        local_25c = local_fc;
        local_210 = (undefined4 *******)&local_100;
        goto LAB_0123f92c;
      }
      local_248 = local_f8;
      pppppppuVar9 = local_fc;
      local_214 = local_100;
      goto LAB_0123eec8;
    }
    local_154 = (undefined4 *******)&DAT_0000000b;
    local_158 = (undefined4 *******)0x403478;
    break;
  case (undefined4 *******)0xc:
  case (undefined4 *******)0xd:
  case (undefined4 *******)0xe:
  case (undefined4 *******)0xf:
  case (undefined4 *******)0x11:
  case (undefined4 *******)0x14:
switchD_0123ef40_caseD_c:
    pppppppuVar19 = local_168;
    pppppppuVar8 = (undefined4 *******)FUN_01965c98(local_168);
    if (pppppppuVar8 == (undefined4 *******)0x0) goto code_r0x0123f200;
    goto LAB_0123f8f0;
  case (undefined4 *******)0x10:
    iVar7 = thunk_FUN_01bed842(local_fc,&DAT_00569e48,0x10);
    if (iVar7 == 0) {
      if (local_204 == (undefined4 *******)0x0) {
        FUN_01224b2c(&local_100,local_168);
        if (local_100 == (undefined4 *******)0x0) {
          local_204 = (undefined4 *******)&DAT_00000001;
          goto LAB_0123eec8;
        }
LAB_0123f8ec:
        pppppppuVar8 = local_fc;
        goto LAB_0123f8f0;
      }
      local_154 = (undefined4 *******)&DAT_00000010;
      local_158 = (undefined4 *******)&DAT_00569e48;
    }
    else {
      iVar7 = thunk_FUN_01bed842(pppppppuVar8,&DAT_00568468,0x10);
      if (iVar7 != 0) goto switchD_0123ef40_caseD_c;
      if (!bVar3) {
        FUN_01224b2c(&local_100,local_168);
        if (local_100 != (undefined4 *******)0x0) goto LAB_0123f8ec;
        bVar3 = true;
        goto LAB_0123eec8;
      }
      local_154 = (undefined4 *******)&DAT_00000010;
      local_158 = (undefined4 *******)&DAT_00568468;
    }
    break;
  case (undefined4 *******)0x12:
    iVar7 = thunk_FUN_01bed842(local_fc,"default_power_step",0x12);
    if (iVar7 == 0) {
      if (!bVar4) {
        FUN_01224b2c(&local_100,local_168);
        if (local_100 != (undefined4 *******)0x0) goto LAB_0123f8ec;
        bVar4 = true;
        goto LAB_0123eec8;
      }
      local_154 = (undefined4 *******)&DAT_00000012;
      local_158 = (undefined4 *******)0x40343e;
    }
    else {
      iVar7 = thunk_FUN_01bed842(pppppppuVar8,"default_tuner_mode",0x12);
      pppppppuVar8 = local_168;
      if (iVar7 != 0) goto switchD_0123ef40_caseD_c;
      if (local_240 == 2) {
        pppppppuVar19 = (undefined4 *******)FUN_01965c98(local_168);
        if (pppppppuVar19 == (undefined4 *******)0x0) {
          FUN_012359ac(&local_100,pppppppuVar8);
          if ((char)local_100 != '\0') goto LAB_0123f8ec;
          local_240 = (uint)local_100 >> 8 & 0xff;
          goto LAB_0123eec8;
        }
        local_fc = pppppppuVar19;
        goto LAB_0123f8ec;
      }
      local_154 = (undefined4 *******)&DAT_00000012;
      local_158 = (undefined4 *******)0x403483;
    }
    break;
  case (undefined4 *******)0x13:
    iVar7 = thunk_FUN_01bed842(local_fc,"min_hashrate_target",0x13);
    if (iVar7 == 0) {
      if (pppppppuVar15 == (undefined4 *******)&DAT_00000005 &&
          pppppppuVar16 == (undefined4 *******)0x0) {
        FUN_01224ac0(&local_100,local_168);
        if (local_100 == (undefined4 *******)&DAT_00000005 && local_fc == (undefined4 *******)0x0) {
          local_210 = local_f8;
          goto LAB_0123f8f4;
        }
        local_25c = local_f8;
        local_70 = pppppppuStack_f4;
        pppppppuStack_6c = pppppppuStack_f0;
        uStack_68 = uStack_ec;
        pppppppuVar15 = local_100;
        pppppppuVar16 = local_fc;
        goto LAB_0123eec8;
      }
      local_154 = (undefined4 *******)&DAT_00000013;
      local_158 = (undefined4 *******)0x49f5a6;
    }
    else {
      iVar7 = thunk_FUN_01bed842(pppppppuVar8,"max_hashrate_target",0x13);
      if (iVar7 != 0) goto switchD_0123ef40_caseD_c;
      if (local_220 == (undefined4 *******)&DAT_00000005 && local_224 == (undefined4 *******)0x0) {
        FUN_01224ac0(&local_100,local_168);
        if (local_100 == (undefined4 *******)&DAT_00000005 && local_fc == (undefined4 *******)0x0)
        goto LAB_0123f7c4;
        local_260 = local_f8;
        local_60 = pppppppuStack_f4;
        pppppppuStack_5c = pppppppuStack_f0;
        uStack_58 = uStack_ec;
        local_220 = local_100;
        local_224 = local_fc;
        goto LAB_0123eec8;
      }
      local_154 = (undefined4 *******)&DAT_00000013;
      local_158 = (undefined4 *******)0x403450;
    }
    break;
  case (undefined4 *******)0x15:
    iVar7 = thunk_FUN_01bed842(local_fc,"default_hashrate_step",0x15);
    if (iVar7 != 0) goto switchD_0123ef40_caseD_c;
    if (local_218 == (undefined4 *******)&DAT_00000005 && local_21c == (undefined4 *******)0x0) {
      FUN_01224ac0(&local_100,local_168);
      if (local_100 == (undefined4 *******)&DAT_00000005 && local_fc == (undefined4 *******)0x0) {
LAB_0123f7c4:
        local_210 = local_f8;
        goto LAB_0123f8f4;
      }
      local_244 = local_f8;
      local_50 = pppppppuStack_f4;
      pppppppuStack_4c = pppppppuStack_f0;
      uStack_48 = uStack_ec;
      local_218 = local_100;
      local_21c = local_fc;
      goto LAB_0123eec8;
    }
    local_154 = (undefined4 *******)&DAT_00000015;
    local_158 = (undefined4 *******)0x403463;
    break;
  default:
    if ((local_f8 != (undefined4 *******)&DAT_0000001c) ||
       (iVar7 = thunk_FUN_01bed842(local_fc,"default_dps_power_limit_watt",0x1c), iVar7 != 0))
    goto switchD_0123ef40_caseD_c;
    if (!bVar2) {
      uVar21 = FUN_01224b8c(local_168);
      local_210 = (undefined4 *******)(uVar21 >> 0x20);
      if ((uVar21 & 1) != 0) goto LAB_0123f8f4;
      bVar2 = true;
      goto LAB_0123eec8;
    }
    local_154 = (undefined4 *******)&DAT_0000001c;
    local_158 = (undefined4 *******)0x403422;
  }
  local_100 = &local_158;
  local_fc = (undefined4 *******)&DAT_0132b6a0;
  local_210 = (undefined4 *******)FUN_019676ac(&DAT_005ab34f,&local_100);
  goto LAB_0123f8f4;
code_r0x0123f200:
  pppppppuVar8 = (undefined4 *******)FUN_01965eac(pppppppuVar19);
  if (pppppppuVar8 != (undefined4 *******)0x0) goto LAB_0123f8f0;
  goto LAB_0123eec8;
LAB_0123f8f0:
  local_210 = pppppppuVar8;
LAB_0123f8f4:
  if (local_214 != (undefined4 *******)&DAT_80000000) {
    FUN_019bb7e0(local_214,pppppppuVar9);
  }
  local_260 = pppppppuVar9;
  local_25c = local_210;
LAB_0123f92c:
  bVar18 = 0;
  pppppppuVar15 = (undefined4 *******)&DAT_00000005;
  pppppppuVar16 = (undefined4 *******)0x0;
LAB_0123f934:
  *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
  pppppppuStack_f4 = local_80;
  pppppppuStack_f0 = pppppppuStack_7c;
  uStack_ec = uStack_78;
  local_e8 = local_220;
  pppppppuStack_e4 = local_224;
  local_dc = local_178;
  pppppppuStack_d8 = pppppppuStack_174;
  uStack_d4 = uStack_170;
  local_d0 = local_218;
  local_cc = local_21c;
  local_c8 = local_244;
  local_c4 = local_188;
  pppppppuStack_c0 = pppppppuStack_184;
  uStack_bc = uStack_180;
  local_98 = local_248;
  local_90 = CONCAT31(local_90._1_3_,bVar18);
  local_9c = local_204;
  local_100 = pppppppuVar15;
  local_fc = pppppppuVar16;
  local_f8 = local_25c;
  local_e0 = local_260;
  local_a0 = local_214;
  local_94 = local_210;
  pppppppuVar9 = (undefined4 *******)FUN_019650c4(param_2);
  FUN_01bed4e2(&local_158,&pppppppuStack_f4,0x54);
  local_168 = local_98;
  local_164 = local_94;
  uStack_160 = local_90;
  uStack_15c = uStack_8c;
  local_210 = local_25c;
  if (pppppppuVar15 == (undefined4 *******)&DAT_00000005 && pppppppuVar16 == (undefined4 *******)0x0
     ) {
    if (pppppppuVar9 != (undefined4 *******)0x0) {
LAB_0123fa38:
      local_168 = local_98;
      local_164 = local_94;
      uStack_160 = local_90;
      uStack_15c = uStack_8c;
      FUN_01225578(pppppppuVar9);
    }
LAB_0123fa3c:
    pppppppuVar16 = (undefined4 *******)0x0;
    pppppppuVar15 = (undefined4 *******)&DAT_00000005;
LAB_0123fa94:
    pppppppuVar9 = local_210;
  }
  else {
    if (pppppppuVar9 == (undefined4 *******)0x0) {
      FUN_01bed4e2(auStack_1f0,&local_158,0x54);
LAB_0123fa90:
      local_200 = local_168;
      pppppppuStack_1fc = local_164;
      uStack_1f8 = uStack_160;
      uStack_1f4 = uStack_15c;
      goto LAB_0123fa94;
    }
    FUN_019bb7e0(local_214,local_204);
    pppppppuVar16 = (undefined4 *******)0x0;
    pppppppuVar15 = (undefined4 *******)&DAT_00000005;
  }
LAB_0123fa98:
  if (!(pppppppuVar15 == (undefined4 *******)&DAT_00000005 &&
       pppppppuVar16 == (undefined4 *******)0x0)) {
    FUN_01bed4e2(param_1 + 3,auStack_1f0,0x54);
    param_1[0x1a] = local_200;
    param_1[0x1b] = pppppppuStack_1fc;
    param_1[0x1c] = uStack_1f8;
    param_1[0x1d] = uStack_1f4;
    param_1[0x18] = local_214;
    param_1[0x19] = local_204;
    *param_1 = pppppppuVar15;
    param_1[1] = pppppppuVar16;
    param_1[2] = pppppppuVar9;
    goto LAB_0123fadc;
  }
LAB_0123fd20:
  iVar7 = FUN_01966f00(pppppppuVar9,param_2);
LAB_0123f3d0:
  *param_1 = 6;
  param_1[1] = 0;
  param_1[2] = iVar7;
LAB_0123fadc:
  return;
}

