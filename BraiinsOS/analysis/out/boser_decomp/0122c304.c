// FUN_0122c304 @ 0122c304 size=5864 calls_out=29 calls_in=1
// strings: min_frequency | max_frequency | voltage_range | hashchain_address | default_fan_speed | min_fan_rpm

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0122c304(undefined4 *param_1,int param_2)

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
  undefined4 *puVar14;
  undefined4 *puVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined2 *puVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  byte bVar24;
  byte bVar25;
  char cVar26;
  char cVar27;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  ulonglong uVar28;
  undefined4 *local_1f8;
  uint local_1c0;
  undefined4 *local_1bc;
  undefined4 *local_1b4;
  undefined4 *local_1b0;
  undefined4 *local_1ac;
  undefined4 *local_1a8;
  undefined4 *local_1a4;
  undefined4 *local_1a0;
  undefined4 *local_19c;
  undefined4 *local_198;
  undefined4 *local_194;
  undefined4 *local_190;
  undefined4 *local_18c;
  uint local_188;
  undefined4 *local_184;
  undefined4 *local_180;
  undefined4 *local_178;
  char *local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined2 local_144;
  undefined1 local_142 [2];
  char *local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined2 local_114;
  undefined1 local_112;
  char *local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int local_b4;
  undefined1 local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  char *local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_78;
  undefined4 *local_74;
  char local_70;
  undefined2 uStack_6f;
  undefined1 uStack_6d;
  char *pcStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined2 local_3c;
  undefined1 local_3a;
  
  uVar22 = *(uint *)(param_2 + 0x14);
  if (uVar22 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar23 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar22);
      if ((0x17 < uVar23 - 9) || ((1 << (uVar23 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar23 == 0x5b) {
          cVar16 = *(char *)(param_2 + 0x24) + -1;
          *(char *)(param_2 + 0x24) = cVar16;
          if (cVar16 != '\0') {
            *(uint *)(param_2 + 0x14) = uVar22 + 1;
            local_b0 = 1;
            local_b4 = param_2;
            FUN_01965170(&local_78,&local_b4);
            if ((char)local_78 == '\x01') {
              puVar19 = local_74;
LAB_0122cb40:
              cVar16 = '\x03';
LAB_0122cb60:
              local_1f8 = puVar19;
              cVar26 = '\0';
              local_1bc = (undefined4 *)0x2;
              cVar27 = '\0';
              bVar25 = 0;
              local_178 = (undefined4 *)0x0;
              bVar24 = 0;
            }
            else {
              if (local_78._1_1_ != '\x01') {
                local_3a = local_e0._2_1_;
                local_3c = (undefined2)local_e0;
                puVar19 = (undefined4 *)FUN_014b5c7c(0,&DAT_01c249cc,&DAT_01d064b8);
                cVar16 = '\x02';
                goto LAB_0122cb60;
              }
              FUN_0124950c(&local_78,local_b4);
              cVar16 = local_70;
              if (local_70 == '\x02') {
                puVar19 = local_78;
                goto LAB_0122cb40;
              }
              local_18c = local_78;
              local_184 = local_74;
              local_3c = uStack_6f;
              local_3a = uStack_6d;
              FUN_01225100(&local_78,&local_b4);
              puVar14 = local_74;
              puVar19 = local_74;
              if (local_78 == (undefined4 *)0x2) goto LAB_0122cb60;
              if (((uint)local_78 & 1) == 0) {
                uVar21 = 1;
LAB_0122d424:
                puVar19 = (undefined4 *)FUN_014b5c7c(uVar21,&DAT_01c249cc,&DAT_01d064b8);
                goto LAB_0122cb60;
              }
              FUN_01225100(&local_78,&local_b4);
              local_190 = local_74;
              puVar19 = local_74;
              if (local_78 == (undefined4 *)0x2) goto LAB_0122cb60;
              if (((uint)local_78 & 1) == 0) {
                uVar21 = 2;
                goto LAB_0122d424;
              }
              FUN_01965170(&local_78,&local_b4);
              puVar19 = local_74;
              if ((char)local_78 == '\x01') goto LAB_0122cb60;
              if (local_78._1_1_ != '\x01') {
                uVar21 = 3;
                goto LAB_0122d424;
              }
              FUN_012499ec(&local_78,local_b4);
              puVar19 = local_74;
              if (local_78 == (undefined4 *)&DAT_00000001) goto LAB_0122cb60;
              unaff_d9 = CONCAT44(pcStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,local_70)));
              unaff_d8 = CONCAT44(uStack_64,local_68);
              FUN_01225398(&local_78,&local_b4);
              puVar19 = local_74;
              if ((char)local_78 != '\0') goto LAB_0122cb60;
              cVar26 = local_78._1_1_;
              if (local_78._1_1_ == '\x04') {
                uVar21 = 4;
                goto LAB_0122d424;
              }
              FUN_01225414(&local_78,&local_b4);
              local_1bc = local_78;
              local_1f8 = (undefined4 *)CONCAT13(uStack_6d,CONCAT21(uStack_6f,local_70));
              puVar19 = local_1f8;
              if (local_78 == (undefined4 *)&DAT_00000003 && local_74 == (undefined4 *)0x0)
              goto LAB_0122cb60;
              local_e0 = pcStack_6c;
              local_dc = local_68;
              uStack_d8 = uStack_64;
              uStack_d4 = uStack_60;
              uStack_d0 = uStack_5c;
              local_cc = local_58;
              uStack_c8 = uStack_54;
              uStack_c4 = uStack_50;
              uStack_c0 = uStack_4c;
              uStack_bc = uStack_48;
              uStack_b8 = uStack_44;
              local_178 = local_74;
              if (local_78 == (undefined4 *)0x2 && local_74 == (undefined4 *)0x0) {
                uVar21 = 5;
                goto LAB_0122d424;
              }
              FUN_01224e64(&local_78,&local_b4);
              local_194 = local_74;
              puVar19 = local_74;
              if (local_78 == (undefined4 *)0x2) goto LAB_0122cb60;
              if (((uint)local_78 & 1) == 0) {
                uVar21 = 6;
                goto LAB_0122d424;
              }
              FUN_01224e64(&local_78,&local_b4);
              local_1a8 = local_74;
              puVar19 = local_74;
              if (local_78 == (undefined4 *)0x2) goto LAB_0122cb60;
              if (((uint)local_78 & 1) == 0) {
                uVar21 = 7;
                goto LAB_0122d424;
              }
              FUN_01224e64(&local_78,&local_b4);
              local_198 = local_74;
              puVar19 = local_74;
              if (local_78 == (undefined4 *)0x2) goto LAB_0122cb60;
              if (((uint)local_78 & 1) == 0) {
                uVar21 = 8;
                goto LAB_0122d424;
              }
              FUN_01224e64(&local_78,&local_b4);
              local_1ac = local_74;
              puVar19 = local_74;
              if (local_78 == (undefined4 *)0x2) goto LAB_0122cb60;
              if (((uint)local_78 & 1) == 0) {
                uVar21 = 9;
LAB_0122da6c:
                puVar19 = (undefined4 *)FUN_014b5c7c(uVar21,&DAT_01c249cc,&DAT_01d064b8);
                goto LAB_0122cb60;
              }
              FUN_01224e64(&local_78,&local_b4);
              local_19c = local_74;
              puVar19 = local_74;
              if (local_78 == (undefined4 *)0x2) goto LAB_0122cb60;
              if (((uint)local_78 & 1) == 0) {
                uVar21 = 10;
                goto LAB_0122da6c;
              }
              FUN_01224e64(&local_78,&local_b4);
              local_1b0 = local_74;
              puVar19 = local_74;
              if (local_78 == (undefined4 *)0x2) goto LAB_0122cb60;
              if (((uint)local_78 & 1) == 0) {
                uVar21 = 0xb;
                goto LAB_0122da6c;
              }
              FUN_01643468(&local_78,&local_b4);
              puVar19 = local_74;
              if ((char)local_78 != '\0') goto LAB_0122cb60;
              bVar25 = local_78._1_1_;
              if (local_78._1_1_ == 2) {
                uVar21 = 0xc;
                goto LAB_0122da6c;
              }
              FUN_01224de8(&local_78,&local_b4);
              puVar19 = local_74;
              if ((char)local_78 != '\0') goto LAB_0122cb60;
              cVar27 = local_78._1_1_;
              if (local_78._1_1_ == '\x03') {
                uVar21 = 0xd;
                goto LAB_0122da6c;
              }
              FUN_01224e64(&local_78,&local_b4);
              local_1a0 = local_74;
              puVar19 = local_74;
              if (local_78 == (undefined4 *)0x2) goto LAB_0122cb60;
              if (((uint)local_78 & 1) == 0) {
                uVar21 = 0xe;
                goto LAB_0122da6c;
              }
              FUN_01224e64(&local_78,&local_b4);
              local_1b4 = local_74;
              puVar19 = local_74;
              if (local_78 == (undefined4 *)0x2) goto LAB_0122cb60;
              if (((uint)local_78 & 1) == 0) {
                uVar21 = 0xf;
                goto LAB_0122da6c;
              }
              FUN_01643468(&local_78,&local_b4);
              puVar19 = local_74;
              if ((char)local_78 != '\0') goto LAB_0122cb60;
              if (local_78._1_1_ == 2) {
                uVar21 = 0x10;
                goto LAB_0122da6c;
              }
              local_142[0] = local_3a;
              local_144 = local_3c;
              local_140 = local_e0;
              uStack_13c = local_dc;
              uStack_138 = uStack_d8;
              uStack_134 = uStack_d4;
              uStack_130 = uStack_d0;
              local_12c = local_cc;
              uStack_128 = uStack_c8;
              uStack_124 = uStack_c4;
              uStack_120 = uStack_c0;
              uStack_11c = uStack_bc;
              uStack_118 = uStack_b8;
              local_1a4 = puVar14;
              bVar24 = local_78._1_1_;
            }
            *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
            puVar19 = (undefined4 *)FUN_01964fb0(param_2);
            if (local_1bc == (undefined4 *)0x2 && local_178 == (undefined4 *)0x0) goto LAB_0122cfb4;
            if (puVar19 != (undefined4 *)0x0) goto LAB_0122cfc0;
            local_170 = local_140;
            uStack_16c = uStack_13c;
            uStack_168 = uStack_138;
            uStack_164 = uStack_134;
            uStack_160 = uStack_130;
            puVar20 = &local_144;
            local_fc = local_12c;
            uStack_f8 = uStack_128;
            uStack_f4 = uStack_124;
            uStack_f0 = uStack_120;
            uStack_ec = uStack_11c;
            uStack_e8 = uStack_118;
            local_180 = local_1f8;
            goto LAB_0122cee4;
          }
        }
        else {
          if (uVar23 != 0x7b) {
            puVar19 = (undefined4 *)FUN_019659c8(param_2,&local_78,&DAT_01c24a9c);
            goto LAB_0122cfc0;
          }
          cVar16 = *(char *)(param_2 + 0x24) + -1;
          *(char *)(param_2 + 0x24) = cVar16;
          if (cVar16 != '\0') {
            *(uint *)(param_2 + 0x14) = uVar22 + 1;
            local_b0 = 1;
            local_188 = 3;
            uVar22 = 4;
            bVar13 = false;
            bVar11 = false;
            local_1c0 = 2;
            bVar3 = false;
            bVar9 = false;
            bVar5 = false;
            bVar7 = false;
            bVar6 = false;
            bVar10 = false;
            local_1bc = (undefined4 *)0x2;
            local_178 = (undefined4 *)0x0;
            bVar4 = false;
            bVar12 = false;
            bVar8 = false;
            local_b4 = param_2;
            bVar24 = 2;
            cVar16 = '\x02';
            goto LAB_0122c434;
          }
        }
        local_78 = (undefined4 *)0x18;
        goto LAB_0122c368;
      }
      uVar22 = uVar22 + 1;
      *(uint *)(param_2 + 0x14) = uVar22;
    } while (*(uint *)(param_2 + 0x10) != uVar22);
  }
  local_78 = (undefined4 *)0x5;
LAB_0122c368:
  local_180 = (undefined4 *)FUN_01964674(param_2,&local_78);
  goto LAB_0122cfc8;
LAB_0122c434:
  FUN_01965d20(&local_78,&local_b4);
  puVar19 = local_74;
  puVar14 = local_78;
  puVar15 = local_74;
  if ((char)local_78 == '\x01') goto LAB_0122ce8c;
  if (local_78._1_1_ != '\x01') {
    if (cVar16 == '\x02') {
      FUN_012494ac(&local_78);
      puVar19 = local_78;
      puVar14 = local_78;
      puVar15 = local_74;
      if (local_70 == '\x02') goto LAB_0122ce8c;
      local_3c = uStack_6f;
      local_3a = uStack_6d;
      local_18c = local_78;
      puVar19 = local_74;
      cVar16 = local_70;
    }
    else {
      local_3a = local_aa;
      local_3c = local_ac;
      puVar19 = local_184;
    }
    if (bVar8) {
      if (bVar12) {
        if (bVar4) {
          if (uVar22 == 4) {
            local_dc = 0x19;
            local_74 = (undefined4 *)&DAT_0132b6a0;
            local_e0 = "default_temp_control_mode";
          }
          else if (local_1bc == (undefined4 *)0x2 && local_178 == (undefined4 *)0x0) {
            local_dc = 0x13;
            local_74 = (undefined4 *)&DAT_0132b6a0;
            local_e0 = "default_temperature";
          }
          else if (bVar10) {
            if (bVar6) {
              if (bVar7) {
                if (bVar5) {
                  if (bVar9) {
                    if (bVar3) {
                      if (local_1c0 == 2) {
                        local_dc = 0x16;
                        local_74 = (undefined4 *)&LAB_018a13b8;
                        local_e0 = "shared_voltage_control";
                      }
                      else if (local_188 == 3) {
                        local_dc = 0xe;
                        local_74 = (undefined4 *)&DAT_0132b6a0;
                        local_e0 = "pause_fan_mode";
                      }
                      else if (bVar11) {
                        if (bVar13) {
                          if (bVar24 != 2) {
                            bVar24 = bVar24 & 1;
                            local_112 = local_3a;
                            local_114 = local_3c;
                            local_110 = local_a8;
                            uStack_10c = uStack_a4;
                            uStack_108 = uStack_a0;
                            uStack_104 = uStack_9c;
                            uStack_100 = uStack_98;
                            local_fc = local_94;
                            uStack_f8 = uStack_90;
                            uStack_f4 = uStack_8c;
                            uStack_f0 = uStack_88;
                            uStack_ec = uStack_84;
                            uStack_e8 = uStack_80;
                            bVar25 = (byte)local_1c0 & 1;
                            local_184 = puVar19;
                            goto LAB_0122ce90;
                          }
                          local_dc = 0xe;
                          local_74 = (undefined4 *)&LAB_018a13b8;
                          local_e0 = "is_nopic_model";
                        }
                        else {
                          local_dc = 0x18;
                          local_74 = (undefined4 *)&DAT_0132b6a0;
                          local_e0 = "start_cooldown_fan_speed";
                        }
                      }
                      else {
                        local_dc = 0x18;
                        local_74 = (undefined4 *)&DAT_0132b6a0;
                        local_e0 = "pause_cooldown_fan_speed";
                      }
                    }
                    else {
                      local_dc = 8;
                      local_74 = (undefined4 *)&DAT_0132b6a0;
                      local_e0 = &DAT_005708f0;
                    }
                  }
                  else {
                    local_dc = 8;
                    local_74 = (undefined4 *)&DAT_0132b6a0;
                    local_e0 = "fans_mindevtmpfsOutdated<locked>Response@m\x01";
                  }
                }
                else {
                  local_dc = 0x11;
                  local_74 = (undefined4 *)&DAT_0132b6a0;
                  local_e0 = "default_fan_speed";
                }
              }
              else {
                local_dc = 0x10;
                local_74 = (undefined4 *)&DAT_0132b6a0;
                local_e0 = &DAT_0056a878;
              }
            }
            else {
              local_dc = 0xb;
              local_74 = (undefined4 *)&DAT_0132b6a0;
              local_e0 = "rpm_epsilon";
            }
          }
          else {
            local_dc = 0xb;
            local_74 = (undefined4 *)&DAT_0132b6a0;
            local_e0 = "min_fan_rpm";
          }
        }
        else {
          local_dc = 0xd;
          local_74 = (undefined4 *)&DAT_0132b6a0;
          local_e0 = "voltage_range";
        }
      }
      else {
        local_dc = 0xd;
        local_74 = (undefined4 *)&DAT_0132b6a0;
        local_e0 = "max_frequency";
      }
    }
    else {
      local_dc = 0xd;
      local_74 = (undefined4 *)&DAT_0132b6a0;
      local_e0 = "min_frequency";
    }
    local_78 = &local_e0;
    puVar19 = (undefined4 *)FUN_019676ac(&DAT_0057cd64,&local_78);
    puVar14 = local_78;
    puVar15 = local_74;
    goto LAB_0122ce8c;
  }
  *(undefined4 *)(local_b4 + 8) = 0;
  *(int *)(local_b4 + 0x14) = *(int *)(local_b4 + 0x14) + 1;
  FUN_019686b4(&local_78,local_b4 + 0xc);
  puVar19 = local_74;
  puVar14 = local_78;
  puVar15 = local_74;
  if (local_78 == (undefined4 *)0x2) goto LAB_0122ce8c;
  switch(CONCAT13(uStack_6d,CONCAT21(uStack_6f,local_70))) {
  case 8:
    iVar18 = thunk_FUN_01bed842(local_74,&DAT_005702f8,8);
    if (iVar18 == 0) {
      if (!bVar9) {
        uVar28 = FUN_01224b8c(local_b4);
        local_19c = (undefined4 *)(uVar28 >> 0x20);
        puVar19 = local_19c;
        puVar14 = local_78;
        puVar15 = local_74;
        if ((uVar28 & 1) != 0) goto LAB_0122ce8c;
        bVar9 = true;
        goto LAB_0122c434;
      }
      local_dc = 8;
      local_e0 = "fans_mindevtmpfsOutdated<locked>Response@m\x01";
    }
    else {
      iVar18 = thunk_FUN_01bed842(puVar19,&DAT_005708f0,8);
      if (iVar18 != 0) goto switchD_0122c4a4_caseD_9;
      if (!bVar3) {
        uVar28 = FUN_01224b8c(local_b4);
        local_1b0 = (undefined4 *)(uVar28 >> 0x20);
        puVar19 = local_1b0;
        puVar14 = local_78;
        puVar15 = local_74;
        if ((uVar28 & 1) != 0) goto LAB_0122ce8c;
        bVar3 = true;
        goto LAB_0122c434;
      }
      local_dc = 8;
      local_e0 = &DAT_005708f0;
    }
    break;
  default:
    goto switchD_0122c4a4_caseD_9;
  case 0xb:
    iVar18 = thunk_FUN_01bed842(local_74,"min_fan_rpm",0xb);
    if (iVar18 == 0) {
      if (!bVar10) {
        uVar28 = FUN_01224b8c(local_b4);
        local_194 = (undefined4 *)(uVar28 >> 0x20);
        puVar19 = local_194;
        puVar14 = local_78;
        puVar15 = local_74;
        if ((uVar28 & 1) != 0) goto LAB_0122ce8c;
        bVar10 = true;
        goto LAB_0122c434;
      }
      local_dc = 0xb;
      local_e0 = "min_fan_rpm";
    }
    else {
      iVar18 = thunk_FUN_01bed842(puVar19,"rpm_epsilon",0xb);
      if (iVar18 != 0) goto switchD_0122c4a4_caseD_9;
      if (!bVar6) {
        uVar28 = FUN_01224b8c(local_b4);
        local_1a8 = (undefined4 *)(uVar28 >> 0x20);
        puVar19 = local_1a8;
        puVar14 = local_78;
        puVar15 = local_74;
        if ((uVar28 & 1) != 0) goto LAB_0122ce8c;
        bVar6 = true;
        goto LAB_0122c434;
      }
      local_dc = 0xb;
      local_e0 = "rpm_epsilon";
    }
    break;
  case 0xd:
    iVar18 = thunk_FUN_01bed842(local_74,"min_frequency",0xd);
    if (iVar18 == 0) {
      if (!bVar8) {
        uVar28 = FUN_01224b04(local_b4);
        local_1a4 = (undefined4 *)(uVar28 >> 0x20);
        puVar19 = local_1a4;
        puVar14 = local_78;
        puVar15 = local_74;
        if ((uVar28 & 1) != 0) goto LAB_0122ce8c;
        bVar8 = true;
        goto LAB_0122c434;
      }
      local_dc = 0xd;
      local_e0 = "min_frequency";
    }
    else {
      iVar18 = thunk_FUN_01bed842(puVar19,"max_frequency",0xd);
      if (iVar18 == 0) {
        if (!bVar12) {
          uVar28 = FUN_01224b04(local_b4);
          local_190 = (undefined4 *)(uVar28 >> 0x20);
          puVar19 = local_190;
          puVar14 = local_78;
          puVar15 = local_74;
          if ((uVar28 & 1) != 0) goto LAB_0122ce8c;
          bVar12 = true;
          goto LAB_0122c434;
        }
        local_dc = 0xd;
        local_e0 = "max_frequency";
      }
      else {
        iVar17 = thunk_FUN_01bed842(puVar19,"voltage_range",0xd);
        iVar18 = local_b4;
        if (iVar17 != 0) goto switchD_0122c4a4_caseD_9;
        if (!bVar4) {
          puVar19 = (undefined4 *)FUN_01965c98(local_b4);
          puVar14 = local_78;
          puVar15 = puVar19;
          if ((puVar19 != (undefined4 *)0x0) ||
             (FUN_012499ec(&local_78,iVar18), puVar19 = local_74, puVar14 = local_78,
             puVar15 = local_74, local_78 != (undefined4 *)0x0)) goto LAB_0122ce8c;
          unaff_d9 = CONCAT44(pcStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,local_70)));
          unaff_d8 = CONCAT44(uStack_64,local_68);
          bVar4 = true;
          goto LAB_0122c434;
        }
        local_dc = 0xd;
        local_e0 = "voltage_range";
      }
    }
    break;
  case 0xe:
    iVar17 = thunk_FUN_01bed842(local_74,"pause_fan_mode",0xe);
    iVar18 = local_b4;
    if (iVar17 == 0) {
      if (local_188 == 3) {
        puVar19 = (undefined4 *)FUN_01965c98(local_b4);
        puVar14 = local_78;
        puVar15 = puVar19;
        if (puVar19 != (undefined4 *)0x0) goto LAB_0122ce8c;
        FUN_0123158c(&local_78,iVar18);
        puVar19 = local_74;
        puVar14 = local_78;
        puVar15 = local_74;
        if ((char)local_78 != '\0') goto LAB_0122ce8c;
        local_188 = (uint)local_78 >> 8 & 0xff;
        goto LAB_0122c434;
      }
      local_dc = 0xe;
      local_e0 = "pause_fan_mode";
    }
    else {
      iVar18 = thunk_FUN_01bed842(puVar19,"is_nopic_model",0xe);
      if (iVar18 != 0) goto switchD_0122c4a4_caseD_9;
      if (bVar24 == 2) {
        FUN_016432a4(&local_78,local_b4);
        puVar19 = local_74;
        puVar14 = local_78;
        puVar15 = local_74;
        if ((char)local_78 != '\0') goto LAB_0122ce8c;
        bVar24 = local_78._1_1_;
        goto LAB_0122c434;
      }
      local_dc = 0xe;
      local_e0 = "is_nopic_model";
    }
    break;
  case 0x10:
    iVar18 = thunk_FUN_01bed842(local_74,&DAT_0056a878,0x10);
    if (iVar18 != 0) goto switchD_0122c4a4_caseD_9;
    if (!bVar7) {
      uVar28 = FUN_01224b8c(local_b4);
      local_198 = (undefined4 *)(uVar28 >> 0x20);
      puVar19 = local_198;
      puVar14 = local_78;
      puVar15 = local_74;
      if ((uVar28 & 1) != 0) goto LAB_0122ce8c;
      bVar7 = true;
      goto LAB_0122c434;
    }
    local_dc = 0x10;
    local_e0 = &DAT_0056a878;
    break;
  case 0x11:
    iVar17 = thunk_FUN_01bed842(local_74,"hashchain_address",0x11);
    iVar18 = local_b4;
    if (iVar17 == 0) {
      if (cVar16 == '\x02') {
        puVar19 = (undefined4 *)FUN_01965c98(local_b4);
        puVar14 = puVar19;
        puVar15 = local_74;
        if ((puVar19 != (undefined4 *)0x0) ||
           (FUN_0124950c(&local_78,iVar18), puVar19 = local_78, puVar14 = local_78,
           puVar15 = local_74, local_70 == '\x02')) goto LAB_0122ce8c;
        local_184 = local_74;
        local_ac = uStack_6f;
        local_aa = uStack_6d;
        local_18c = local_78;
        cVar16 = local_70;
        goto LAB_0122c434;
      }
      local_dc = 0x11;
      local_e0 = "hashchain_address";
    }
    else {
      iVar18 = thunk_FUN_01bed842(puVar19,"default_fan_speed",0x11);
      if (iVar18 != 0) goto switchD_0122c4a4_caseD_9;
      if (!bVar5) {
        uVar28 = FUN_01224b8c(local_b4);
        local_1ac = (undefined4 *)(uVar28 >> 0x20);
        puVar19 = local_1ac;
        puVar14 = local_78;
        puVar15 = local_74;
        if ((uVar28 & 1) != 0) goto LAB_0122ce8c;
        bVar5 = true;
        goto LAB_0122c434;
      }
      local_dc = 0x11;
      local_e0 = "default_fan_speed";
    }
    break;
  case 0x13:
    iVar17 = thunk_FUN_01bed842(local_74,"default_temperature",0x13);
    iVar18 = local_b4;
    if (iVar17 != 0) goto switchD_0122c4a4_caseD_9;
    if (local_1bc == (undefined4 *)0x2 && local_178 == (undefined4 *)0x0) {
      puVar19 = (undefined4 *)FUN_01965c98(local_b4);
      if (puVar19 != (undefined4 *)0x0) {
        local_70 = (char)puVar19;
        uStack_6f = (undefined2)((uint)puVar19 >> 8);
        uStack_6d = (undefined1)((uint)puVar19 >> 0x18);
        puVar14 = local_78;
        puVar15 = local_74;
        goto LAB_0122ce8c;
      }
      FUN_0122dcd8(&local_78,iVar18);
      local_1f8 = (undefined4 *)CONCAT13(uStack_6d,CONCAT21(uStack_6f,local_70));
      puVar19 = local_1f8;
      puVar14 = local_78;
      puVar15 = local_74;
      if (local_78 == (undefined4 *)0x2 && local_74 == (undefined4 *)0x0) goto LAB_0122ce8c;
      local_178 = local_74;
      local_1bc = local_78;
      local_a8 = pcStack_6c;
      uStack_a4 = local_68;
      uStack_a0 = uStack_64;
      uStack_9c = uStack_60;
      uStack_98 = uStack_5c;
      local_94 = local_58;
      uStack_90 = uStack_54;
      uStack_8c = uStack_50;
      uStack_88 = uStack_4c;
      uStack_84 = uStack_48;
      uStack_80 = uStack_44;
      goto LAB_0122c434;
    }
    local_dc = 0x13;
    local_e0 = "default_temperature";
    break;
  case 0x16:
    iVar18 = thunk_FUN_01bed842(local_74,"shared_voltage_control",0x16);
    if (iVar18 != 0) goto switchD_0122c4a4_caseD_9;
    if (local_1c0 == 2) {
      FUN_016432a4(&local_78,local_b4);
      puVar19 = local_74;
      puVar14 = local_78;
      puVar15 = local_74;
      if ((char)local_78 != '\0') goto LAB_0122ce8c;
      local_1c0 = (uint)local_78 >> 8 & 0xff;
      goto LAB_0122c434;
    }
    local_dc = 0x16;
    local_e0 = "shared_voltage_control";
    break;
  case 0x18:
    iVar18 = thunk_FUN_01bed842(local_74,"pause_cooldown_fan_speed",0x18);
    if (iVar18 == 0) {
      if (!bVar11) {
        uVar28 = FUN_01224b8c(local_b4);
        local_1a0 = (undefined4 *)(uVar28 >> 0x20);
        puVar19 = local_1a0;
        puVar14 = local_78;
        puVar15 = local_74;
        if ((uVar28 & 1) != 0) goto LAB_0122ce8c;
        bVar11 = true;
        goto LAB_0122c434;
      }
      local_dc = 0x18;
      local_e0 = "pause_cooldown_fan_speed";
    }
    else {
      iVar18 = thunk_FUN_01bed842(puVar19,"start_cooldown_fan_speed",0x18);
      if (iVar18 != 0) goto switchD_0122c4a4_caseD_9;
      if (!bVar13) {
        uVar28 = FUN_01224b8c(local_b4);
        local_1b4 = (undefined4 *)(uVar28 >> 0x20);
        puVar19 = local_1b4;
        puVar14 = local_78;
        puVar15 = local_74;
        if ((uVar28 & 1) != 0) goto LAB_0122ce8c;
        bVar13 = true;
        goto LAB_0122c434;
      }
      local_dc = 0x18;
      local_e0 = "start_cooldown_fan_speed";
    }
    break;
  case 0x19:
    iVar17 = thunk_FUN_01bed842(local_74,"default_temp_control_mode",0x19);
    iVar18 = local_b4;
    if (iVar17 != 0) goto switchD_0122c4a4_caseD_9;
    if (uVar22 == 4) {
      puVar19 = (undefined4 *)FUN_01965c98(local_b4);
      puVar14 = local_78;
      puVar15 = puVar19;
      if (puVar19 != (undefined4 *)0x0) goto LAB_0122ce8c;
      FUN_01229da0(&local_78,iVar18);
      puVar19 = local_74;
      puVar14 = local_78;
      puVar15 = local_74;
      if ((char)local_78 != '\0') goto LAB_0122ce8c;
      uVar22 = (uint)local_78 >> 8 & 0xff;
      goto LAB_0122c434;
    }
    local_dc = 0x19;
    local_e0 = "default_temp_control_mode";
  }
  local_74 = (undefined4 *)&DAT_0132b6a0;
  local_78 = &local_e0;
  puVar19 = (undefined4 *)FUN_019676ac(&DAT_005ab34f,&local_78);
  puVar14 = local_78;
  puVar15 = local_74;
  goto LAB_0122ce8c;
switchD_0122c4a4_caseD_9:
  iVar18 = local_b4;
  puVar19 = (undefined4 *)FUN_01965c98(local_b4);
  puVar14 = local_78;
  puVar15 = local_74;
  if ((puVar19 != (undefined4 *)0x0) ||
     (puVar19 = (undefined4 *)FUN_01965eac(iVar18), puVar14 = local_78, puVar15 = local_74,
     puVar19 != (undefined4 *)0x0)) goto LAB_0122ce8c;
  goto LAB_0122c434;
LAB_0122ce8c:
  local_74 = puVar15;
  local_78 = puVar14;
  local_1f8 = puVar19;
  cVar16 = '\0';
  bVar25 = 0;
  bVar24 = 0;
  local_1bc = (undefined4 *)0x2;
  local_178 = (undefined4 *)0x0;
LAB_0122ce90:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  puVar19 = (undefined4 *)FUN_019650c4(param_2);
  if (local_1bc == (undefined4 *)0x2 && local_178 == (undefined4 *)0x0) {
LAB_0122cfb4:
    if (puVar19 != (undefined4 *)0x0) {
      FUN_01225578();
    }
    puVar19 = local_1f8;
  }
  else if (puVar19 == (undefined4 *)0x0) {
    cVar27 = (char)local_188;
    cVar26 = (char)uVar22;
    local_170 = local_110;
    uStack_16c = uStack_10c;
    uStack_168 = uStack_108;
    uStack_164 = uStack_104;
    uStack_160 = uStack_100;
    puVar20 = &local_114;
    local_180 = local_1f8;
LAB_0122cee4:
    uVar1 = *(undefined1 *)(puVar20 + 1);
    uVar2 = *puVar20;
    param_1[3] = local_170;
    param_1[4] = uStack_16c;
    param_1[5] = uStack_168;
    param_1[6] = uStack_164;
    param_1[7] = uStack_160;
    param_1[8] = local_fc;
    param_1[9] = uStack_f8;
    param_1[10] = uStack_f4;
    param_1[0xb] = uStack_f0;
    param_1[0xc] = uStack_ec;
    param_1[0xd] = uStack_e8;
    param_1[0x15] = local_1a4;
    param_1[0x16] = local_190;
    param_1[0x17] = local_194;
    param_1[0x12] = local_18c;
    param_1[0x13] = local_184;
    param_1[0x18] = local_1a8;
    *(char *)(param_1 + 0x14) = cVar16;
    param_1[0x19] = local_198;
    param_1[0x1d] = local_1a0;
    param_1[0x1e] = local_1b4;
    param_1[0x1a] = local_1ac;
    param_1[0x1b] = local_19c;
    *(undefined1 *)((int)param_1 + 0x53) = uVar1;
    param_1[1] = local_178;
    *(undefined8 *)(param_1 + 0xe) = unaff_d9;
    *(undefined8 *)(param_1 + 0x10) = unaff_d8;
    *(char *)((int)param_1 + 0x7f) = cVar26;
    *(char *)((int)param_1 + 0x7e) = cVar27;
    *(byte *)((int)param_1 + 0x7d) = bVar24;
    *(byte *)(param_1 + 0x1f) = bVar25;
    param_1[0x1c] = local_1b0;
    *(undefined2 *)((int)param_1 + 0x51) = uVar2;
    *param_1 = local_1bc;
    goto LAB_0122cfd8;
  }
LAB_0122cfc0:
  local_180 = (undefined4 *)FUN_01966f00(puVar19,param_2);
LAB_0122cfc8:
  *param_1 = 2;
  param_1[1] = 0;
LAB_0122cfd8:
  param_1[2] = local_180;
  return;
}

