// function @ 00907600  size=5848  volt_strings=9
// strings: min_frequency | max_frequency | voltage_range | hashchain_address | default_fan_speed | min_fan_rpm | rpm_epsilonnum_chips_on_chainnum_chips_per_voltage_domainaddress_gaphashchain_counthashboard_eeprom_sizechip_descriptorbackend_difficultypid_descriptor | default_temperature | shared_voltage_control | pause_fan_mode | is_nopic_model | default_temp_control_mode | pause_cooldown_fan_speed | start_cooldown_fan_speedhas_sale_ratehashrate_limit | min_frequency | max_frequency | voltage_range | default_temp_control_mode

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00907600(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined4 uVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  undefined4 uVar25;
  char *pcVar26;
  char *pcVar27;
  undefined4 uVar28;
  char *pcVar29;
  char *pcVar30;
  char cVar31;
  undefined4 uVar32;
  int iVar33;
  char *pcVar34;
  undefined *puVar35;
  uint uVar36;
  char *pcVar37;
  uint uVar38;
  char cVar39;
  undefined1 uVar40;
  undefined4 *puVar41;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  ulonglong uVar42;
  char *local_19c;
  uint local_190;
  char *local_168;
  char *local_164;
  char *local_160;
  char *local_15c;
  char *local_158;
  char *local_154;
  char *local_150;
  char *local_14c;
  char *local_148;
  char *local_144;
  char *local_140;
  uint local_13c;
  uint local_138;
  char *local_134;
  char *local_130;
  uint local_12c;
  byte local_128;
  char *local_120;
  undefined2 local_ec;
  undefined1 local_ea [2];
  undefined4 local_e8;
  undefined1 local_e4;
  undefined4 local_e0;
  char *local_dc;
  undefined4 uStack_d8;
  char *pcStack_d4;
  char *pcStack_d0;
  undefined4 local_cc;
  char *pcStack_c8;
  char *pcStack_c4;
  undefined4 uStack_c0;
  char *pcStack_bc;
  char *pcStack_b8;
  int local_b0;
  char *pcStack_ac;
  undefined2 local_a4;
  undefined1 local_a2;
  char *local_a0;
  char *pcStack_9c;
  undefined4 uStack_98;
  char *pcStack_94;
  char *pcStack_90;
  undefined4 local_8c;
  char *pcStack_88;
  char *pcStack_84;
  undefined4 uStack_80;
  char *pcStack_7c;
  char *pcStack_78;
  undefined4 local_70;
  char *local_6c;
  char local_68;
  undefined2 uStack_67;
  undefined1 uStack_65;
  char *pcStack_64;
  char *local_60;
  undefined4 uStack_5c;
  char *pcStack_58;
  char *pcStack_54;
  undefined4 local_50;
  char *pcStack_4c;
  char *pcStack_48;
  undefined4 uStack_44;
  char *pcStack_40;
  char *pcStack_3c;
  
  uVar36 = *(uint *)(param_2 + 0x14);
  if (uVar36 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar38 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar36);
      if ((0x17 < uVar38 - 9) || ((1 << (uVar38 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar38 == 0x5b) {
          cVar31 = *(char *)(param_2 + 0x24) + -1;
          *(char *)(param_2 + 0x24) = cVar31;
          if (cVar31 != '\0') {
            *(uint *)(param_2 + 0x14) = uVar36 + 1;
            local_e4 = 1;
            local_e8 = param_2;
            FUN_005e5d80(&local_70,&local_e8);
            local_130 = local_6c;
            if ((char)local_70 == '\x01') {
LAB_00907fb8:
              local_120 = &SUB_00000002;
              uVar40 = 0;
              cVar39 = '\0';
              local_12c._0_1_ = 0;
              cVar31 = '\0';
              local_128 = 0;
              pcVar37 = (char *)0x0;
            }
            else {
              if (local_70._1_1_ != '\x01') {
                local_130 = (char *)FUN_00f2c2f0(0,&DAT_01867408,&DAT_018ab990);
                goto LAB_00907fb8;
              }
              FUN_0094a3cc(&local_70,local_e8);
              cVar31 = local_68;
              pcVar34 = local_70;
              local_130 = local_70;
              if (local_68 == '\x02') goto LAB_00907fb8;
              local_a4 = uStack_67;
              local_a2 = uStack_65;
              local_134 = local_6c;
              FUN_005e5d80(&local_70,&local_e8);
              local_130 = local_6c;
              if ((char)local_70 == '\x01') goto LAB_00907fb8;
              if (local_70._1_1_ != '\x01') {
                local_130 = (char *)FUN_00f2c2f0(1,&DAT_01867408,&DAT_018ab990);
                goto LAB_00907fb8;
              }
              uVar42 = FUN_008faf0c(local_e8);
              local_140 = (char *)(uVar42 >> 0x20);
              local_130 = local_140;
              if ((uVar42 & 1) == 0) {
                FUN_005e5d80(&local_70,&local_e8);
                local_130 = local_6c;
                if ((char)local_70 != '\x01') {
                  if (local_70._1_1_ == '\x01') {
                    uVar42 = FUN_008faf0c(local_e8);
                    local_130 = (char *)(uVar42 >> 0x20);
                    local_158 = local_130;
                    if ((uVar42 & 1) != 0) goto LAB_00908068;
                    FUN_005e5d80(&local_70,&local_e8);
                    local_130 = local_6c;
                    if ((char)local_70 != '\x01') {
                      if (local_70._1_1_ != '\x01') {
                        uVar32 = 3;
                        goto LAB_009089fc;
                      }
                      FUN_0092fed0(&local_70,local_e8);
                      local_130 = local_6c;
                      if (local_70 != &DAT_00000001) {
                        local_b0 = CONCAT13(uStack_65,CONCAT21(uStack_67,local_68));
                        pcStack_ac = pcStack_64;
                        unaff_d8 = CONCAT44(uStack_5c,local_60);
                        unaff_d9 = CONCAT44(pcStack_64,local_b0);
                        FUN_005e5d80(&local_70,&local_e8);
                        local_130 = local_6c;
                        if ((char)local_70 != '\x01') {
                          if (local_70._1_1_ != '\x01') {
                            uVar32 = 4;
                            goto LAB_009089fc;
                          }
                          FUN_00904718(&local_70,local_e8);
                          local_130 = local_6c;
                          if ((char)local_70 != '\x01') {
                            uVar40 = local_70._1_1_;
                            FUN_005e5d80(&local_70,&local_e8);
                            local_130 = local_6c;
                            if ((char)local_70 != '\x01') {
                              local_120 = &SUB_00000002;
                              if (local_70._1_1_ != '\x01') {
                                uVar32 = 5;
                                goto LAB_009089fc;
                              }
                              FUN_00909378(&local_70,local_e8);
                              pcVar37 = local_6c;
                              pcVar15 = local_70;
                              local_130 = (char *)CONCAT13(uStack_65,CONCAT21(uStack_67,local_68));
                              if (local_70 != &SUB_00000002 || local_6c != (char *)0x0) {
                                local_e0 = pcStack_64;
                                local_dc = local_60;
                                uStack_d8 = uStack_5c;
                                pcStack_d4 = pcStack_58;
                                pcStack_d0 = pcStack_54;
                                local_cc = local_50;
                                pcStack_c8 = pcStack_4c;
                                pcStack_c4 = pcStack_48;
                                uStack_c0 = uStack_44;
                                pcStack_bc = pcStack_40;
                                pcStack_b8 = pcStack_3c;
                                FUN_008fb704(&local_70,&local_e8);
                                if (local_70 == &SUB_00000002) {
LAB_00908530:
                                  local_130 = local_6c;
                                }
                                else {
                                  if (((uint)local_70 & 1) == 0) {
                                    uVar32 = 6;
                                  }
                                  else {
                                    local_144 = local_6c;
                                    FUN_008fb704(&local_70,&local_e8);
                                    if (local_70 == &SUB_00000002) goto LAB_00908530;
                                    if (((uint)local_70 & 1) == 0) {
                                      uVar32 = 7;
                                    }
                                    else {
                                      local_15c = local_6c;
                                      FUN_008fb704(&local_70,&local_e8);
                                      if (local_70 == &SUB_00000002) goto LAB_00908530;
                                      if (((uint)local_70 & 1) == 0) {
                                        uVar32 = 8;
                                      }
                                      else {
                                        local_148 = local_6c;
                                        FUN_008fb704(&local_70,&local_e8);
                                        if (local_70 == &SUB_00000002) goto LAB_00908530;
                                        if (((uint)local_70 & 1) == 0) {
                                          uVar32 = 9;
                                        }
                                        else {
                                          local_160 = local_6c;
                                          FUN_008fb704(&local_70,&local_e8);
                                          if (local_70 == &SUB_00000002) goto LAB_00908530;
                                          if (((uint)local_70 & 1) == 0) {
                                            uVar32 = 10;
                                          }
                                          else {
                                            local_14c = local_6c;
                                            FUN_008fb704(&local_70,&local_e8);
                                            if (local_70 == &SUB_00000002) goto LAB_00908530;
                                            if (((uint)local_70 & 1) == 0) {
                                              uVar32 = 0xb;
                                            }
                                            else {
                                              local_164 = local_6c;
                                              FUN_008fb778(&local_70,&local_e8);
                                              if ((char)local_70 != '\0') goto LAB_00908530;
                                              local_128 = (byte)((uint)local_70 >> 8);
                                              if (((uint)local_70 >> 8 & 0xff) == 2) {
                                                uVar32 = 0xc;
                                              }
                                              else {
                                                FUN_008fb800(&local_70,&local_e8);
                                                if ((char)local_70 != '\0') goto LAB_00908530;
                                                cVar39 = local_70._1_1_;
                                                if (local_70._1_1_ == '\x03') {
                                                  uVar32 = 0xd;
                                                }
                                                else {
                                                  FUN_008fb888(&local_70,&local_e8);
                                                  if (local_70 == &SUB_00000002) goto LAB_00908530;
                                                  if (((uint)local_70 & 1) == 0) {
                                                    uVar32 = 0xe;
                                                  }
                                                  else {
                                                    local_150 = local_6c;
                                                    FUN_008fb888(&local_70,&local_e8);
                                                    if (local_70 == &SUB_00000002)
                                                    goto LAB_00908530;
                                                    if (((uint)local_70 & 1) == 0) {
                                                      uVar32 = 0xf;
                                                    }
                                                    else {
                                                      local_168 = local_6c;
                                                      FUN_008fb778(&local_70,&local_e8);
                                                      if ((char)local_70 != '\0') goto LAB_00908530;
                                                      local_12c._0_1_ = (byte)((uint)local_70 >> 8);
                                                      if (((uint)local_70 >> 8 & 0xff) != 2) {
                                                        local_ea[0] = local_a2;
                                                        local_ec = local_a4;
                                                        local_70 = local_e0;
                                                        local_6c = local_dc;
                                                        local_68 = (char)uStack_d8;
                                                        uStack_67 = (undefined2)
                                                                    ((uint)uStack_d8 >> 8);
                                                        uStack_65 = (undefined1)
                                                                    ((uint)uStack_d8 >> 0x18);
                                                        pcStack_64 = pcStack_d4;
                                                        local_60 = pcStack_d0;
                                                        uStack_5c = local_cc;
                                                        pcStack_58 = pcStack_c8;
                                                        pcStack_54 = pcStack_c4;
                                                        local_50 = uStack_c0;
                                                        pcStack_4c = pcStack_bc;
                                                        pcStack_48 = pcStack_b8;
                                                        local_120 = pcVar15;
                                                        local_154 = pcVar34;
                                                        goto LAB_00907fd0;
                                                      }
                                                      uVar32 = 0x10;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  local_130 = (char *)FUN_00f2c2f0(uVar32,&DAT_01867408,
                                                                   &DAT_018ab990);
                                }
                                local_12c._0_1_ = 0;
                                uVar40 = 0;
                                local_128 = 0;
                                cVar39 = '\0';
                                cVar31 = '\0';
                                pcVar37 = (char *)0x0;
                                goto LAB_00907fd0;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar32 = 2;
LAB_009089fc:
                    local_130 = (char *)FUN_00f2c2f0(uVar32,&DAT_01867408,&DAT_018ab990);
                  }
                }
                goto LAB_00907fb8;
              }
LAB_00908068:
              uVar40 = 0;
              local_120 = &SUB_00000002;
              local_12c._0_1_ = 0;
              cVar39 = '\0';
              local_128 = 0;
              cVar31 = '\0';
              pcVar37 = (char *)0x0;
            }
LAB_00907fd0:
            *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
            pcVar34 = (char *)FUN_008fad50(param_2);
            if (local_120 != &SUB_00000002 || pcVar37 != (char *)0x0) {
              if (pcVar34 != (char *)0x0) goto LAB_009089b0;
              puVar41 = (undefined4 *)&local_ec;
              goto LAB_00908890;
            }
            if (pcVar34 == (char *)0x0) {
              pcVar34 = local_130;
            }
            else {
              FUN_005c3974();
              thunk_FUN_016d3fb4(pcVar34);
              pcVar34 = local_130;
            }
            goto LAB_009089b0;
          }
        }
        else {
          if (uVar38 != 0x7b) {
            pcVar34 = (char *)FUN_005b8238(param_2,&local_70,&DAT_018674c8);
            goto LAB_009089b0;
          }
          cVar31 = *(char *)(param_2 + 0x24) + -1;
          *(char *)(param_2 + 0x24) = cVar31;
          if (cVar31 != '\0') {
            *(uint *)(param_2 + 0x14) = uVar36 + 1;
            pcStack_ac = (char *)CONCAT31(pcStack_ac._1_3_,1);
            local_190 = 2;
            local_138 = 4;
            local_13c = 3;
            bVar13 = false;
            bVar11 = false;
            local_12c = 2;
            bVar3 = false;
            bVar9 = false;
            bVar5 = false;
            bVar7 = false;
            bVar6 = false;
            bVar10 = false;
            local_120 = &SUB_00000002;
            bVar4 = false;
            bVar12 = false;
            bVar8 = false;
            pcVar37 = (char *)0x0;
            local_b0 = param_2;
            cVar31 = '\x02';
            goto LAB_00907774;
          }
        }
        local_70 = (char *)0x18;
        goto LAB_00907668;
      }
      uVar36 = uVar36 + 1;
      *(uint *)(param_2 + 0x14) = uVar36;
    } while (*(uint *)(param_2 + 0x10) != uVar36);
  }
  local_70 = (char *)0x5;
LAB_00907668:
  uVar32 = FUN_008f9984(param_2,&local_70);
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = uVar32;
  return;
LAB_00907774:
  FUN_008fa450(&local_70,&local_b0);
  iVar14 = local_b0;
  if ((char)local_70 == '\x01') {
LAB_00908010:
    pcVar34 = local_6c;
    goto LAB_00908838;
  }
  if (local_70._1_1_ == '\x01') {
    *(undefined4 *)(local_b0 + 8) = 0;
    *(int *)(local_b0 + 0x14) = *(int *)(local_b0 + 0x14) + 1;
    FUN_0157e384(&local_70,local_b0 + 0xc,local_b0);
    pcVar34 = local_6c;
    if (local_70 == &SUB_00000002) goto LAB_00908838;
    switch(CONCAT13(uStack_65,CONCAT21(uStack_67,local_68))) {
    case 8:
      iVar33 = thunk_FUN_016dd50a(local_6c,&DAT_00569f18,8);
      if (iVar33 == 0) {
        if (!bVar9) {
          pcVar34 = (char *)FUN_01114eb4(iVar14);
          if (pcVar34 != (char *)0x0) goto LAB_009081d8;
          uVar42 = FUN_008fa5b8(iVar14);
          pcVar34 = (char *)(uVar42 >> 0x20);
          if ((uVar42 & 1) == 0) {
            bVar9 = true;
            local_14c = pcVar34;
            goto LAB_00907774;
          }
          goto LAB_009081d8;
        }
        puVar35 = &DAT_00582dbd;
LAB_009086f0:
        local_dc = &DAT_00000008;
        local_e0 = "fans_minpsu_tempResponseNO_PROXY@m\x01";
      }
      else {
        iVar33 = thunk_FUN_016dd50a(pcVar34,&DAT_0056a390,8);
        if (iVar33 != 0) goto switchD_009077e8_caseD_9;
        if (!bVar3) {
          iVar33 = FUN_01114eb4(iVar14);
          if (iVar33 == 0) {
            uVar42 = FUN_008fa5b8(iVar14);
          }
          else {
            uVar42 = CONCAT44(iVar33,1);
          }
          pcVar34 = (char *)(uVar42 >> 0x20);
          if ((uVar42 & 1) != 0) goto LAB_009081d8;
          bVar3 = true;
          local_164 = pcVar34;
          goto LAB_00907774;
        }
        puVar35 = &DAT_00582dbd;
LAB_00908734:
        local_dc = &DAT_00000008;
        local_e0 = &DAT_0056a390;
      }
      break;
    default:
      goto switchD_009077e8_caseD_9;
    case 0xb:
      iVar33 = thunk_FUN_016dd50a(local_6c,"min_fan_rpm",0xb);
      if (iVar33 == 0) {
        if (!bVar10) {
          pcVar34 = (char *)FUN_01114eb4(iVar14);
          if (pcVar34 != (char *)0x0) goto LAB_009081d8;
          uVar42 = FUN_008fa5b8(iVar14);
          pcVar34 = (char *)(uVar42 >> 0x20);
          if ((uVar42 & 1) == 0) {
            bVar10 = true;
            local_144 = pcVar34;
            goto LAB_00907774;
          }
          goto LAB_009081d8;
        }
        puVar35 = &DAT_00582dbd;
LAB_00908660:
        local_dc = &DAT_0000000b;
        local_e0 = "min_fan_rpm";
      }
      else {
        iVar33 = thunk_FUN_016dd50a(pcVar34,
                                    "rpm_epsilonnum_chips_on_chainnum_chips_per_voltage_domainaddress_gaphashchain_counthashboard_eeprom_sizechip_descriptorbackend_difficultypid_descriptor"
                                    ,0xb);
        if (iVar33 != 0) goto switchD_009077e8_caseD_9;
        if (!bVar6) {
          iVar33 = FUN_01114eb4(iVar14);
          if (iVar33 == 0) {
            uVar42 = FUN_008fa5b8(iVar14);
          }
          else {
            uVar42 = CONCAT44(iVar33,1);
          }
          pcVar34 = (char *)(uVar42 >> 0x20);
          if ((uVar42 & 1) != 0) goto LAB_009081d8;
          bVar6 = true;
          local_15c = pcVar34;
          goto LAB_00907774;
        }
        puVar35 = &DAT_00582dbd;
LAB_00908684:
        local_dc = &DAT_0000000b;
        local_e0 = 
        "rpm_epsilonnum_chips_on_chainnum_chips_per_voltage_domainaddress_gaphashchain_counthashboard_eeprom_sizechip_descriptorbackend_difficultypid_descriptor"
        ;
      }
      break;
    case 0xd:
      iVar33 = thunk_FUN_016dd50a(local_6c,"min_frequency",0xd);
      if (iVar33 == 0) {
        if (bVar8) {
          puVar35 = &DAT_00582dbd;
          goto LAB_009085ac;
        }
        pcVar34 = (char *)FUN_01114eb4(iVar14);
        if (pcVar34 == (char *)0x0) {
          uVar42 = FUN_008faf0c(iVar14);
          pcVar34 = (char *)(uVar42 >> 0x20);
          if ((uVar42 & 1) == 0) {
            bVar8 = true;
            local_140 = pcVar34;
            goto LAB_00907774;
          }
        }
      }
      else {
        iVar33 = thunk_FUN_016dd50a(pcVar34,"max_frequency",0xd);
        if (iVar33 != 0) {
          iVar33 = thunk_FUN_016dd50a(pcVar34,"voltage_range",0xd);
          if (iVar33 != 0) goto switchD_009077e8_caseD_9;
          if (bVar4) {
            puVar35 = &DAT_00582dbd;
            goto LAB_009085f4;
          }
          pcVar34 = (char *)FUN_01114eb4(iVar14);
          if (pcVar34 != (char *)0x0) goto LAB_0090882c;
          FUN_0092fed0(&local_70,iVar14);
          if (local_70 == &DAT_00000001) goto LAB_00908010;
          unaff_d9 = CONCAT44(pcStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68)));
          unaff_d8 = CONCAT44(uStack_5c,local_60);
          bVar4 = true;
          goto LAB_00907774;
        }
        if (bVar12) {
          puVar35 = &DAT_00582dbd;
          goto LAB_009085d0;
        }
        iVar33 = FUN_01114eb4(iVar14);
        if (iVar33 == 0) {
          uVar42 = FUN_008faf0c(iVar14);
        }
        else {
          uVar42 = CONCAT44(iVar33,1);
        }
        pcVar34 = (char *)(uVar42 >> 0x20);
        if ((uVar42 & 1) == 0) {
          bVar12 = true;
          local_158 = pcVar34;
          goto LAB_00907774;
        }
      }
LAB_009081d8:
      goto LAB_00908838;
    case 0xe:
      iVar33 = thunk_FUN_016dd50a(local_6c,"pause_fan_mode",0xe);
      if (iVar33 != 0) {
        iVar33 = thunk_FUN_016dd50a(pcVar34,"is_nopic_model",0xe);
        if (iVar33 != 0) goto switchD_009077e8_caseD_9;
        if (local_190 != 2) {
          puVar35 = &DAT_00582dbd;
LAB_00908804:
          local_dc = &DAT_0000000e;
          local_e0 = "is_nopic_model";
          break;
        }
        pcVar34 = (char *)FUN_01114eb4(iVar14);
        if (pcVar34 != (char *)0x0) goto LAB_0090882c;
        FUN_009245c0(&local_70,iVar14);
        if ((char)local_70 == '\x01') goto LAB_00908010;
        local_190 = (uint)local_70 >> 8 & 0xff;
        goto LAB_00907774;
      }
      if (local_13c != 3) {
        puVar35 = &DAT_00582dbd;
LAB_0090877c:
        local_dc = &DAT_0000000e;
        local_e0 = "pause_fan_mode";
        break;
      }
      pcVar34 = (char *)FUN_01114eb4(iVar14);
      if (pcVar34 == (char *)0x0) {
        FUN_0090e60c(&local_70,iVar14);
        if ((char)local_70 == '\x01') goto LAB_00908010;
        local_13c = (uint)local_70 >> 8 & 0xff;
        goto LAB_00907774;
      }
      goto LAB_0090882c;
    case 0x10:
      iVar33 = thunk_FUN_016dd50a(local_6c,&DAT_00565580,0x10);
      if (iVar33 != 0) goto switchD_009077e8_caseD_9;
      if (!bVar7) {
        pcVar34 = (char *)FUN_01114eb4(iVar14);
        if (pcVar34 != (char *)0x0) goto LAB_009081d8;
        uVar42 = FUN_008fa5b8(iVar14);
        pcVar34 = (char *)(uVar42 >> 0x20);
        if ((uVar42 & 1) == 0) {
          bVar7 = true;
          local_148 = pcVar34;
          goto LAB_00907774;
        }
        goto LAB_009081d8;
      }
      puVar35 = &DAT_00582dbd;
LAB_009086a8:
      local_dc = &DAT_00000010;
      local_e0 = &DAT_00565580;
      break;
    case 0x11:
      iVar33 = thunk_FUN_016dd50a(local_6c,"hashchain_address",0x11);
      if (iVar33 == 0) {
        if (cVar31 == '\x02') {
          pcVar34 = (char *)FUN_01114eb4(iVar14);
          if (pcVar34 != (char *)0x0) goto LAB_0090882c;
          FUN_0094a3cc(&local_70,iVar14);
          pcVar34 = local_70;
          if (local_68 == '\x02') goto LAB_00908838;
          local_154 = local_70;
          local_a4 = uStack_67;
          local_a2 = uStack_65;
          local_134 = local_6c;
          cVar31 = local_68;
          goto LAB_00907774;
        }
        local_dc = &DAT_00000011;
        puVar35 = &DAT_00582dbd;
        local_e0 = "hashchain_address";
      }
      else {
        iVar33 = thunk_FUN_016dd50a(pcVar34,"default_fan_speed",0x11);
        if (iVar33 != 0) goto switchD_009077e8_caseD_9;
        if (!bVar5) {
          iVar33 = FUN_01114eb4(iVar14);
          if (iVar33 == 0) {
            uVar42 = FUN_008fa5b8(iVar14);
          }
          else {
            uVar42 = CONCAT44(iVar33,1);
          }
          pcVar34 = (char *)(uVar42 >> 0x20);
          if ((uVar42 & 1) != 0) goto LAB_009081d8;
          bVar5 = true;
          local_160 = pcVar34;
          goto LAB_00907774;
        }
        puVar35 = &DAT_00582dbd;
LAB_009086cc:
        local_dc = &DAT_00000011;
        local_e0 = "default_fan_speed";
      }
      break;
    case 0x13:
      iVar33 = thunk_FUN_016dd50a(local_6c,"default_temperature",0x13);
      if (iVar33 != 0) goto switchD_009077e8_caseD_9;
      if (local_120 == &SUB_00000002 && pcVar37 == (char *)0x0) {
        pcVar34 = (char *)FUN_01114eb4(iVar14);
        if (pcVar34 != (char *)0x0) goto LAB_0090882c;
        FUN_00909378(&local_70,iVar14);
        local_19c = (char *)CONCAT13(uStack_65,CONCAT21(uStack_67,local_68));
        local_120 = local_70;
        pcVar34 = local_19c;
        if (local_70 == &SUB_00000002 && local_6c == (char *)0x0) goto LAB_00908838;
        local_a0 = pcStack_64;
        pcStack_9c = local_60;
        uStack_98 = uStack_5c;
        pcStack_94 = pcStack_58;
        pcStack_90 = pcStack_54;
        local_8c = local_50;
        pcStack_88 = pcStack_4c;
        pcStack_84 = pcStack_48;
        uStack_80 = uStack_44;
        pcStack_7c = pcStack_40;
        pcStack_78 = pcStack_3c;
        pcVar37 = local_6c;
        goto LAB_00907774;
      }
      puVar35 = &DAT_00582dbd;
LAB_0090863c:
      local_dc = &DAT_00000013;
      local_e0 = "default_temperature";
      break;
    case 0x16:
      iVar33 = thunk_FUN_016dd50a(local_6c,"shared_voltage_control",0x16);
      if (iVar33 != 0) goto switchD_009077e8_caseD_9;
      if (local_12c == 2) {
        pcVar34 = (char *)FUN_01114eb4(iVar14);
        if (pcVar34 != (char *)0x0) goto LAB_0090882c;
        FUN_009245c0(&local_70,iVar14);
        if ((char)local_70 == '\x01') goto LAB_00908010;
        local_12c = (uint)local_70 >> 8 & 0xff;
        goto LAB_00907774;
      }
      puVar35 = &DAT_00582dbd;
LAB_00908758:
      local_dc = &DAT_00000016;
      local_e0 = "shared_voltage_control";
      break;
    case 0x18:
      iVar33 = thunk_FUN_016dd50a(local_6c,"pause_cooldown_fan_speed",0x18);
      if (iVar33 == 0) {
        if (!bVar11) {
          pcVar34 = (char *)FUN_01114eb4(iVar14);
          if (pcVar34 != (char *)0x0) goto LAB_009081d8;
          uVar42 = FUN_008fa5b8(iVar14);
          pcVar34 = (char *)(uVar42 >> 0x20);
          if ((uVar42 & 1) == 0) {
            bVar11 = true;
            local_150 = pcVar34;
            goto LAB_00907774;
          }
          goto LAB_009081d8;
        }
        puVar35 = &DAT_00582dbd;
LAB_009087a0:
        local_dc = &DAT_00000018;
        local_e0 = "pause_cooldown_fan_speed";
      }
      else {
        iVar33 = thunk_FUN_016dd50a(pcVar34,"start_cooldown_fan_speedhas_sale_ratehashrate_limit",
                                    0x18);
        if (iVar33 != 0) goto switchD_009077e8_caseD_9;
        if (!bVar13) {
          iVar33 = FUN_01114eb4(iVar14);
          if (iVar33 == 0) {
            uVar42 = FUN_008fa5b8(iVar14);
          }
          else {
            uVar42 = CONCAT44(iVar33,1);
          }
          pcVar34 = (char *)(uVar42 >> 0x20);
          if ((uVar42 & 1) != 0) goto LAB_009081d8;
          bVar13 = true;
          local_168 = pcVar34;
          goto LAB_00907774;
        }
        puVar35 = &DAT_00582dbd;
LAB_009087c4:
        local_dc = &DAT_00000018;
        local_e0 = "start_cooldown_fan_speedhas_sale_ratehashrate_limit";
      }
      break;
    case 0x19:
      iVar33 = thunk_FUN_016dd50a(local_6c,"default_temp_control_mode",0x19);
      if (iVar33 != 0) goto switchD_009077e8_caseD_9;
      if (local_138 == 4) {
        pcVar34 = (char *)FUN_01114eb4(iVar14);
        if (pcVar34 != (char *)0x0) goto LAB_0090882c;
        FUN_00904718(&local_70,iVar14);
        if ((char)local_70 == '\x01') goto LAB_00908010;
        local_138 = (uint)local_70 >> 8 & 0xff;
        goto LAB_00907774;
      }
      puVar35 = &DAT_00582dbd;
LAB_00908618:
      local_dc = &DAT_00000019;
      local_e0 = "default_temp_control_mode";
    }
  }
  else {
    if (cVar31 == '\x02') {
      FUN_0094a36c(&local_70);
      pcVar34 = local_70;
      if (local_68 == '\x02') goto LAB_00908838;
      local_e8 = CONCAT22(CONCAT11(local_e8._3_1_,uStack_65),uStack_67);
      local_154 = local_70;
      iVar14 = local_e8;
      local_70 = local_a0;
      pcVar22 = pcStack_9c;
      pcVar23 = pcStack_94;
      pcVar24 = pcStack_90;
      uVar25 = local_8c;
      pcVar26 = pcStack_88;
      pcVar27 = pcStack_84;
      uVar28 = uStack_80;
      pcVar29 = pcStack_7c;
      pcVar30 = pcStack_78;
      pcVar34 = local_6c;
      cVar31 = local_68;
      pcVar15 = pcStack_64;
      pcVar16 = local_60;
      uVar32 = uStack_5c;
      pcVar17 = pcStack_58;
      pcVar18 = pcStack_54;
      uVar19 = local_50;
      pcVar20 = pcStack_4c;
      pcVar21 = pcStack_48;
    }
    else {
      local_e8 = CONCAT22(CONCAT11(local_e8._3_1_,local_a2),local_a4);
      iVar14 = local_e8;
      local_70 = local_a0;
      pcVar22 = pcStack_9c;
      pcVar23 = pcStack_94;
      pcVar24 = pcStack_90;
      uVar25 = local_8c;
      pcVar26 = pcStack_88;
      pcVar27 = pcStack_84;
      uVar28 = uStack_80;
      pcVar29 = pcStack_7c;
      pcVar30 = pcStack_78;
      pcVar34 = local_134;
      pcVar15 = pcStack_64;
      pcVar16 = local_60;
      uVar32 = uStack_5c;
      pcVar17 = pcStack_58;
      pcVar18 = pcStack_54;
      uVar19 = local_50;
      pcVar20 = pcStack_4c;
      pcVar21 = pcStack_48;
    }
    pcStack_48 = pcVar30;
    pcStack_4c = pcVar29;
    local_50 = uVar28;
    pcStack_54 = pcVar27;
    pcStack_58 = pcVar26;
    uStack_5c = uVar25;
    local_60 = pcVar24;
    pcStack_64 = pcVar23;
    local_6c = pcVar22;
    local_e8 = iVar14;
    if (bVar8) {
      if (!bVar12) {
        puVar35 = &DAT_0057a25d;
        pcStack_64 = pcVar15;
        local_60 = pcVar16;
        uStack_5c = uVar32;
        pcStack_58 = pcVar17;
        pcStack_54 = pcVar18;
        local_50 = uVar19;
        pcStack_4c = pcVar20;
        pcStack_48 = pcVar21;
LAB_009085d0:
        local_dc = &DAT_0000000d;
        local_e0 = "max_frequency";
        goto LAB_00908814;
      }
      if (bVar4) {
        if (local_138 == 4) {
          puVar35 = &DAT_0057a25d;
          pcStack_64 = pcVar15;
          local_60 = pcVar16;
          uStack_5c = uVar32;
          pcStack_58 = pcVar17;
          pcStack_54 = pcVar18;
          local_50 = uVar19;
          pcStack_4c = pcVar20;
          pcStack_48 = pcVar21;
          goto LAB_00908618;
        }
        if (local_120 == &SUB_00000002 && pcVar37 == (char *)0x0) {
          puVar35 = &DAT_0057a25d;
          pcStack_64 = pcVar15;
          local_60 = pcVar16;
          uStack_5c = uVar32;
          pcStack_58 = pcVar17;
          pcStack_54 = pcVar18;
          local_50 = uVar19;
          pcStack_4c = pcVar20;
          pcStack_48 = pcVar21;
          goto LAB_0090863c;
        }
        if (!bVar10) {
          puVar35 = &DAT_0057a25d;
          pcStack_64 = pcVar15;
          local_60 = pcVar16;
          uStack_5c = uVar32;
          pcStack_58 = pcVar17;
          pcStack_54 = pcVar18;
          local_50 = uVar19;
          pcStack_4c = pcVar20;
          pcStack_48 = pcVar21;
          goto LAB_00908660;
        }
        if (!bVar6) {
          puVar35 = &DAT_0057a25d;
          pcStack_64 = pcVar15;
          local_60 = pcVar16;
          uStack_5c = uVar32;
          pcStack_58 = pcVar17;
          pcStack_54 = pcVar18;
          local_50 = uVar19;
          pcStack_4c = pcVar20;
          pcStack_48 = pcVar21;
          goto LAB_00908684;
        }
        if (!bVar7) {
          puVar35 = &DAT_0057a25d;
          pcStack_64 = pcVar15;
          local_60 = pcVar16;
          uStack_5c = uVar32;
          pcStack_58 = pcVar17;
          pcStack_54 = pcVar18;
          local_50 = uVar19;
          pcStack_4c = pcVar20;
          pcStack_48 = pcVar21;
          goto LAB_009086a8;
        }
        if (!bVar5) {
          puVar35 = &DAT_0057a25d;
          pcStack_64 = pcVar15;
          local_60 = pcVar16;
          uStack_5c = uVar32;
          pcStack_58 = pcVar17;
          pcStack_54 = pcVar18;
          local_50 = uVar19;
          pcStack_4c = pcVar20;
          pcStack_48 = pcVar21;
          goto LAB_009086cc;
        }
        if (!bVar9) {
          puVar35 = &DAT_0057a25d;
          pcStack_64 = pcVar15;
          local_60 = pcVar16;
          uStack_5c = uVar32;
          pcStack_58 = pcVar17;
          pcStack_54 = pcVar18;
          local_50 = uVar19;
          pcStack_4c = pcVar20;
          pcStack_48 = pcVar21;
          goto LAB_009086f0;
        }
        if (!bVar3) {
          puVar35 = &DAT_0057a25d;
          pcStack_64 = pcVar15;
          local_60 = pcVar16;
          uStack_5c = uVar32;
          pcStack_58 = pcVar17;
          pcStack_54 = pcVar18;
          local_50 = uVar19;
          pcStack_4c = pcVar20;
          pcStack_48 = pcVar21;
          goto LAB_00908734;
        }
        if (local_12c == 2) {
          puVar35 = &DAT_0057a25d;
          pcStack_64 = pcVar15;
          local_60 = pcVar16;
          uStack_5c = uVar32;
          pcStack_58 = pcVar17;
          pcStack_54 = pcVar18;
          local_50 = uVar19;
          pcStack_4c = pcVar20;
          pcStack_48 = pcVar21;
          goto LAB_00908758;
        }
        if (local_13c == 3) {
          puVar35 = &DAT_0057a25d;
          pcStack_64 = pcVar15;
          local_60 = pcVar16;
          uStack_5c = uVar32;
          pcStack_58 = pcVar17;
          pcStack_54 = pcVar18;
          local_50 = uVar19;
          pcStack_4c = pcVar20;
          pcStack_48 = pcVar21;
          goto LAB_0090877c;
        }
        if (!bVar11) {
          puVar35 = &DAT_0057a25d;
          pcStack_64 = pcVar15;
          local_60 = pcVar16;
          uStack_5c = uVar32;
          pcStack_58 = pcVar17;
          pcStack_54 = pcVar18;
          local_50 = uVar19;
          pcStack_4c = pcVar20;
          pcStack_48 = pcVar21;
          goto LAB_009087a0;
        }
        if (!bVar13) {
          puVar35 = &DAT_0057a25d;
          pcStack_64 = pcVar15;
          local_60 = pcVar16;
          uStack_5c = uVar32;
          pcStack_58 = pcVar17;
          pcStack_54 = pcVar18;
          local_50 = uVar19;
          pcStack_4c = pcVar20;
          pcStack_48 = pcVar21;
          goto LAB_009087c4;
        }
        if (local_190 == 2) {
          puVar35 = &DAT_0057a25d;
          pcStack_64 = pcVar15;
          local_60 = pcVar16;
          uStack_5c = uVar32;
          pcStack_58 = pcVar17;
          pcStack_54 = pcVar18;
          local_50 = uVar19;
          pcStack_4c = pcVar20;
          pcStack_48 = pcVar21;
          goto LAB_00908804;
        }
        local_e8._2_1_ = (undefined1)((uint)iVar14 >> 0x10);
        local_e8._0_2_ = (undefined2)iVar14;
        local_e0._3_1_ = (undefined1)((uint)local_e0 >> 0x18);
        local_e0 = (char *)CONCAT22(CONCAT11(local_e0._3_1_,local_e8._2_1_),(undefined2)local_e8);
        local_68 = (char)uStack_98;
        uStack_67 = (undefined2)((uint)uStack_98 >> 8);
        uStack_65 = (undefined1)((uint)uStack_98 >> 0x18);
        local_128 = (byte)local_12c & 1;
        local_134 = pcVar34;
        local_12c._0_1_ = (byte)local_190 & 1;
        goto LAB_00908844;
      }
      puVar35 = &DAT_0057a25d;
      pcStack_64 = pcVar15;
      local_60 = pcVar16;
      uStack_5c = uVar32;
      pcStack_58 = pcVar17;
      pcStack_54 = pcVar18;
      local_50 = uVar19;
      pcStack_4c = pcVar20;
      pcStack_48 = pcVar21;
LAB_009085f4:
      local_dc = &DAT_0000000d;
      local_e0 = "voltage_range";
    }
    else {
      puVar35 = &DAT_0057a25d;
      pcStack_64 = pcVar15;
      local_60 = pcVar16;
      uStack_5c = uVar32;
      pcStack_58 = pcVar17;
      pcStack_54 = pcVar18;
      local_50 = uVar19;
      pcStack_4c = pcVar20;
      pcStack_48 = pcVar21;
LAB_009085ac:
      local_dc = &DAT_0000000d;
      local_e0 = "min_frequency";
    }
  }
LAB_00908814:
  local_6c = (char *)&DAT_0157d360;
  local_70 = (char *)&local_e0;
  pcVar34 = (char *)FUN_00f56780(puVar35,&local_70);
LAB_0090882c:
  goto LAB_00908838;
switchD_009077e8_caseD_9:
  pcVar34 = (char *)FUN_01114eb4(iVar14);
  if ((pcVar34 != (char *)0x0) || (pcVar34 = (char *)FUN_008f9ac0(iVar14), pcVar34 != (char *)0x0))
  {
LAB_00908838:
    local_19c = pcVar34;
    pcVar37 = (char *)0x0;
    local_120 = &SUB_00000002;
    cVar31 = '\0';
    local_128 = 0;
    local_12c._0_1_ = 0;
LAB_00908844:
    *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
    pcVar34 = (char *)FUN_008fb5ec(param_2);
    if (local_120 == &SUB_00000002 && pcVar37 == (char *)0x0) {
      if (pcVar34 != (char *)0x0) {
        FUN_005c3974();
        thunk_FUN_016d3fb4(pcVar34);
      }
      pcVar34 = local_19c;
    }
    else if (pcVar34 == (char *)0x0) {
      cVar39 = (char)local_13c;
      puVar41 = &local_e0;
      uVar40 = (undefined1)local_138;
      local_130 = local_19c;
LAB_00908890:
      uVar1 = *(undefined1 *)((int)puVar41 + 2);
      uVar2 = *(undefined2 *)puVar41;
      param_1[3] = local_70;
      param_1[4] = local_6c;
      param_1[5] = CONCAT13(uStack_65,CONCAT21(uStack_67,local_68));
      param_1[6] = pcStack_64;
      param_1[7] = local_60;
      param_1[8] = uStack_5c;
      param_1[9] = pcStack_58;
      param_1[10] = pcStack_54;
      param_1[0xb] = local_50;
      param_1[0xc] = pcStack_4c;
      param_1[0xd] = pcStack_48;
      *param_1 = local_120;
      *(byte *)((int)param_1 + 0x7d) = (byte)local_12c;
      *(byte *)(param_1 + 0x1f) = local_128;
      param_1[0x1d] = local_150;
      param_1[0x15] = local_140;
      param_1[0x16] = local_158;
      param_1[0x17] = local_144;
      param_1[0x18] = local_15c;
      param_1[0x19] = local_148;
      param_1[0x1a] = local_160;
      param_1[0x1e] = local_168;
      param_1[0x1b] = local_14c;
      param_1[0x12] = local_154;
      param_1[0x1c] = local_164;
      param_1[0x13] = local_134;
      param_1[1] = pcVar37;
      *(undefined1 *)((int)param_1 + 0x7f) = uVar40;
      *(char *)((int)param_1 + 0x7e) = cVar39;
      *(char *)(param_1 + 0x14) = cVar31;
      *(undefined8 *)(param_1 + 0xe) = unaff_d9;
      *(undefined8 *)(param_1 + 0x10) = unaff_d8;
      param_1[2] = local_130;
      *(undefined1 *)((int)param_1 + 0x53) = uVar1;
      *(undefined2 *)((int)param_1 + 0x51) = uVar2;
      return;
    }
LAB_009089b0:
    uVar32 = FUN_00e959bc(pcVar34,param_2);
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = uVar32;
    return;
  }
  goto LAB_00907774;
}

