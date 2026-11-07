// FUN_00909dac @ 00909dac size=4916 calls_out=13 calls_in=1
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements | speed | min_fan_rpm | min_fan_speed | max_fan_speed | pause

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00909dac(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 uVar19;
  uint *puVar20;
  undefined1 uVar21;
  char *pcVar22;
  uint *puVar23;
  int iVar24;
  uint uVar25;
  undefined4 uVar26;
  uint unaff_r4;
  uint uVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  uint unaff_r8;
  int iVar30;
  uint unaff_r11;
  uint in_r12;
  uint *unaff_lr;
  uint *puVar31;
  bool bVar32;
  uint *local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_124;
  uint local_120;
  uint *local_11c;
  uint *local_118;
  uint *local_114;
  uint *local_110;
  uint *local_f0;
  uint *local_ec;
  uint *local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint *local_d8;
  uint *local_d4;
  uint local_d0;
  uint *local_cc;
  int local_c8;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint local_88;
  char *local_84;
  char *local_80;
  int local_7c;
  uint *local_68;
  undefined4 local_64;
  uint local_60;
  uint *local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint *local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar27 = *param_2;
  uVar13 = 0x15;
  if ((int)uVar27 < 0) {
    uVar13 = uVar27 ^ 0x80000000;
  }
  if (uVar13 != 0x14) {
    if (uVar13 != 0x15) {
      FUN_008f73e8(&local_c0,param_2,&local_38,&DAT_018670b8);
      param_1[1] = local_c0;
      param_1[2] = local_bc;
      param_1[3] = local_b8;
      param_1[4] = local_b4;
      param_1[5] = local_b0;
      param_1[6] = uStack_ac;
      param_1[7] = local_a8;
      param_1[8] = local_a4;
      param_1[9] = local_a0;
      param_1[10] = uStack_9c;
      param_1[0xb] = uStack_98;
      param_1[0xc] = uStack_94;
      *param_1 = 2;
      return;
    }
    local_d8 = (uint *)param_2[1];
    iVar24 = 0;
    local_e8 = (uint *)0x80000015;
    puVar16 = local_d8 + param_2[2] * 8;
    local_c8 = 0;
    local_d4 = local_d8;
    local_d0 = uVar27;
    local_cc = puVar16;
    if (param_2[2] == 0) {
      local_110 = (uint *)0x3;
      local_11c = (uint *)&SUB_00000002;
      local_f0 = (uint *)&SUB_00000002;
      puVar31 = (uint *)&SUB_00000002;
      local_118 = (uint *)&SUB_00000002;
      local_114 = (uint *)&SUB_00000002;
      local_13c = unaff_r4;
      local_134 = unaff_r8;
      local_138 = unaff_r11;
      local_140 = in_r12;
      local_144 = unaff_lr;
    }
    else {
      puVar28 = (undefined4 *)((uint)&local_68 | 4);
      puVar14 = (undefined4 *)((uint)&local_e8 | 4);
      puVar15 = (uint *)((uint)&local_88 | 4);
      local_114 = (uint *)&SUB_00000002;
      local_118 = (uint *)&SUB_00000002;
      local_110 = (uint *)0x3;
      puVar31 = (uint *)&SUB_00000002;
      local_f0 = (uint *)&SUB_00000002;
      local_11c = (uint *)&SUB_00000002;
      puVar29 = (undefined4 *)((uint)&local_38 | 4);
      iVar11 = 1;
      puVar20 = local_d8;
      do {
        iVar30 = iVar11;
        pcVar10 = local_80;
        pcVar22 = local_84;
        puVar17 = puVar20 + 8;
        uVar13 = *puVar20;
        if (uVar13 == 0x80000015) goto LAB_0090aabc;
        uVar18 = puVar20[2];
        uVar25 = puVar20[3];
        local_e8 = (uint *)puVar20[4];
        local_e4 = puVar20[5];
        local_e0 = puVar20[6];
        local_dc = puVar20[7];
        *puVar15 = puVar20[1];
        puVar15[1] = uVar18;
        puVar15[2] = uVar25;
        uVar18 = 0x15;
        if ((int)uVar13 < 0) {
          uVar18 = uVar13 ^ 0x80000000;
        }
        local_88 = uVar13;
        switch(uVar18) {
        case 1:
          local_68 = (uint *)&SUB_00000002;
          uVar21 = SUB41(local_84,0);
          if (5 < ((uint)local_84 & 0xff)) {
            uVar21 = 6;
          }
          local_64 = (uint *)CONCAT31(local_64._1_3_,uVar21);
          break;
        default:
          FUN_008f73e8(&local_68,&local_88,&local_38,&DAT_01867128);
          goto LAB_0090a438;
        case 4:
          pcVar22 = local_80;
          if (&DAT_00000005 < local_80) {
            pcVar22 = &DAT_00000006;
          }
          uVar21 = SUB41(pcVar22,0);
          if (local_7c != 0) {
            uVar21 = 6;
          }
          goto LAB_0090a420;
        case 0xc:
          FUN_0090f638(&local_68,local_80,local_7c);
          if (pcVar22 == (char *)0x0) goto LAB_0090a438;
LAB_0090a73c:
          thunk_FUN_016d3fb4(pcVar10);
          uVar13 = (uint)local_64 & 0xff;
          uVar21 = (undefined1)local_64;
          if (local_68 == (uint *)&SUB_00000002) goto LAB_0090a448;
          goto LAB_0090ac1c;
        case 0xd:
          FUN_0090f638(&local_68);
          break;
        case 0xe:
          switch(local_7c) {
          case 5:
            cVar12 = *local_80;
            if (cVar12 != 'p') {
              bVar32 = cVar12 == 's';
              if (bVar32) {
                cVar12 = local_80[1];
              }
              if (bVar32 && cVar12 == 'p') {
                cVar12 = local_80[2];
                bVar32 = cVar12 == 'e';
                if (bVar32) {
                  cVar12 = local_80[3];
                }
                if (bVar32 && cVar12 == 'e') {
                  cVar12 = local_80[4];
                  uVar13 = 0;
LAB_0090a084:
                  if (cVar12 == 'd') goto LAB_0090a728;
                }
              }
              break;
            }
            if (local_80[1] != 'a') break;
            cVar12 = local_80[2];
            bVar32 = cVar12 != 'u';
            if (!bVar32) {
              cVar12 = local_80[3];
            }
            if ((bVar32 || cVar12 != 's') || (uVar13 = 5, local_80[4] != 'e')) break;
            goto LAB_0090a728;
          case 8:
            if (*local_80 == 'm') {
              cVar12 = local_80[1];
              bVar32 = cVar12 == 'i';
              if (bVar32) {
                cVar12 = local_80[2];
              }
              if (bVar32 && cVar12 == 'n') {
                cVar12 = local_80[3];
                bVar32 = cVar12 == '_';
                if (bVar32) {
                  cVar12 = local_80[4];
                }
                if (bVar32 && cVar12 == 'f') {
                  cVar12 = local_80[5];
                  bVar32 = cVar12 == 'a';
                  if (bVar32) {
                    cVar12 = local_80[6];
                  }
                  if ((bVar32 && cVar12 == 'n') && (uVar13 = 1, local_80[7] == 's'))
                  goto LAB_0090a728;
                }
              }
            }
            break;
          case 0xb:
            cVar12 = *local_80;
            bVar32 = cVar12 == 'm';
            if (bVar32) {
              cVar12 = local_80[1];
            }
            if (bVar32 && cVar12 == 'i') {
              cVar12 = local_80[2];
              bVar32 = cVar12 == 'n';
              if (bVar32) {
                cVar12 = local_80[3];
              }
              if (bVar32 && cVar12 == '_') {
                cVar12 = local_80[4];
                bVar32 = cVar12 == 'f';
                if (bVar32) {
                  cVar12 = local_80[5];
                }
                if (bVar32 && cVar12 == 'a') {
                  cVar12 = local_80[6];
                  bVar32 = cVar12 == 'n';
                  if (bVar32) {
                    cVar12 = local_80[7];
                  }
                  if (bVar32 && cVar12 == '_') {
                    cVar12 = local_80[8];
                    bVar32 = cVar12 == 'r';
                    if (bVar32) {
                      cVar12 = local_80[9];
                    }
                    if (bVar32 && cVar12 == 'p') {
                      uVar13 = 2;
                      if (local_80[10] != 'm') {
                        uVar13 = 6;
                      }
                      goto LAB_0090a728;
                    }
                  }
                }
              }
            }
            break;
          case 0xd:
            if (*local_80 == 'm') {
              if (local_80[1] == 'a') {
                cVar12 = local_80[2];
                bVar32 = cVar12 == 'x';
                if (bVar32) {
                  cVar12 = local_80[3];
                }
                if (bVar32 && cVar12 == '_') {
                  cVar12 = local_80[4];
                  bVar32 = cVar12 == 'f';
                  if (bVar32) {
                    cVar12 = local_80[5];
                  }
                  if (bVar32 && cVar12 == 'a') {
                    cVar12 = local_80[6];
                    bVar32 = cVar12 == 'n';
                    if (bVar32) {
                      cVar12 = local_80[7];
                    }
                    if (bVar32 && cVar12 == '_') {
                      cVar12 = local_80[8];
                      bVar32 = cVar12 == 's';
                      if (bVar32) {
                        cVar12 = local_80[9];
                      }
                      if (bVar32 && cVar12 == 'p') {
                        cVar12 = local_80[10];
                        bVar32 = cVar12 == 'e';
                        if (bVar32) {
                          cVar12 = local_80[0xb];
                        }
                        if (bVar32 && cVar12 == 'e') {
                          cVar12 = local_80[0xc];
                          uVar13 = 4;
                          goto LAB_0090a084;
                        }
                      }
                    }
                  }
                }
              }
              else if (local_80[1] == 'i') {
                cVar12 = local_80[2];
                bVar32 = cVar12 == 'n';
                if (bVar32) {
                  cVar12 = local_80[3];
                }
                if (bVar32 && cVar12 == '_') {
                  cVar12 = local_80[4];
                  bVar32 = cVar12 == 'f';
                  if (bVar32) {
                    cVar12 = local_80[5];
                  }
                  if (bVar32 && cVar12 == 'a') {
                    cVar12 = local_80[6];
                    bVar32 = cVar12 == 'n';
                    if (bVar32) {
                      cVar12 = local_80[7];
                    }
                    if (bVar32 && cVar12 == '_') {
                      cVar12 = local_80[8];
                      bVar32 = cVar12 == 's';
                      if (bVar32) {
                        cVar12 = local_80[9];
                      }
                      if (bVar32 && cVar12 == 'p') {
                        cVar12 = local_80[10];
                        bVar32 = cVar12 == 'e';
                        if (bVar32) {
                          cVar12 = local_80[0xb];
                        }
                        if (bVar32 && cVar12 == 'e') {
                          cVar12 = local_80[0xc];
                          uVar13 = 3;
                          goto LAB_0090a084;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar13 = 6;
LAB_0090a728:
          local_68 = (uint *)&SUB_00000002;
          local_64 = (uint *)CONCAT31(local_64._1_3_,(char)uVar13);
          if (local_84 != (char *)0x0) goto LAB_0090a73c;
          goto LAB_0090a448;
        case 0xf:
          switch(local_80) {
          case (char *)0x5:
            cVar12 = *local_84;
            if (cVar12 == 'p') {
              if (local_84[1] == 'a') {
                cVar12 = local_84[2];
                bVar32 = cVar12 == 'u';
                if (bVar32) {
                  cVar12 = local_84[3];
                }
                if ((bVar32 && cVar12 == 's') && (uVar21 = 5, local_84[4] == 'e'))
                goto LAB_0090a420;
              }
            }
            else {
              bVar32 = cVar12 == 's';
              if (bVar32) {
                cVar12 = local_84[1];
              }
              if (bVar32 && cVar12 == 'p') {
                cVar12 = local_84[2];
                bVar32 = cVar12 == 'e';
                if (bVar32) {
                  cVar12 = local_84[3];
                }
                if (bVar32 && cVar12 == 'e') {
                  cVar12 = local_84[4];
                  uVar21 = 0;
LAB_00909ff4:
                  if (cVar12 == 'd') goto LAB_0090a420;
                }
              }
            }
            break;
          case (char *)0x8:
            if (*local_84 == 'm') {
              cVar12 = local_84[1];
              bVar32 = cVar12 == 'i';
              if (bVar32) {
                cVar12 = local_84[2];
              }
              if (bVar32 && cVar12 == 'n') {
                cVar12 = local_84[3];
                bVar32 = cVar12 == '_';
                if (bVar32) {
                  cVar12 = local_84[4];
                }
                if (bVar32 && cVar12 == 'f') {
                  cVar12 = local_84[5];
                  bVar32 = cVar12 == 'a';
                  if (bVar32) {
                    cVar12 = local_84[6];
                  }
                  if ((bVar32 && cVar12 == 'n') && (uVar21 = 1, local_84[7] == 's'))
                  goto LAB_0090a420;
                }
              }
            }
            break;
          case (char *)0xb:
            cVar12 = *local_84;
            bVar32 = cVar12 == 'm';
            if (bVar32) {
              cVar12 = local_84[1];
            }
            if (bVar32 && cVar12 == 'i') {
              cVar12 = local_84[2];
              bVar32 = cVar12 == 'n';
              if (bVar32) {
                cVar12 = local_84[3];
              }
              if (bVar32 && cVar12 == '_') {
                cVar12 = local_84[4];
                bVar32 = cVar12 == 'f';
                if (bVar32) {
                  cVar12 = local_84[5];
                }
                if (bVar32 && cVar12 == 'a') {
                  cVar12 = local_84[6];
                  bVar32 = cVar12 == 'n';
                  if (bVar32) {
                    cVar12 = local_84[7];
                  }
                  if (bVar32 && cVar12 == '_') {
                    cVar12 = local_84[8];
                    bVar32 = cVar12 == 'r';
                    if (bVar32) {
                      cVar12 = local_84[9];
                    }
                    if (bVar32 && cVar12 == 'p') {
                      uVar21 = 2;
                      if (local_84[10] != 'm') {
                        uVar21 = 6;
                      }
                      goto LAB_0090a420;
                    }
                  }
                }
              }
            }
            break;
          case (char *)0xd:
            if (*local_84 == 'm') {
              if (local_84[1] == 'a') {
                cVar12 = local_84[2];
                bVar32 = cVar12 == 'x';
                if (bVar32) {
                  cVar12 = local_84[3];
                }
                if (bVar32 && cVar12 == '_') {
                  cVar12 = local_84[4];
                  bVar32 = cVar12 == 'f';
                  if (bVar32) {
                    cVar12 = local_84[5];
                  }
                  if (bVar32 && cVar12 == 'a') {
                    cVar12 = local_84[6];
                    bVar32 = cVar12 == 'n';
                    if (bVar32) {
                      cVar12 = local_84[7];
                    }
                    if (bVar32 && cVar12 == '_') {
                      cVar12 = local_84[8];
                      bVar32 = cVar12 == 's';
                      if (bVar32) {
                        cVar12 = local_84[9];
                      }
                      if (bVar32 && cVar12 == 'p') {
                        cVar12 = local_84[10];
                        bVar32 = cVar12 == 'e';
                        if (bVar32) {
                          cVar12 = local_84[0xb];
                        }
                        if (bVar32 && cVar12 == 'e') {
                          cVar12 = local_84[0xc];
                          uVar21 = 4;
                          goto LAB_00909ff4;
                        }
                      }
                    }
                  }
                }
              }
              else if (local_84[1] == 'i') {
                cVar12 = local_84[2];
                bVar32 = cVar12 == 'n';
                if (bVar32) {
                  cVar12 = local_84[3];
                }
                if (bVar32 && cVar12 == '_') {
                  cVar12 = local_84[4];
                  bVar32 = cVar12 == 'f';
                  if (bVar32) {
                    cVar12 = local_84[5];
                  }
                  if (bVar32 && cVar12 == 'a') {
                    cVar12 = local_84[6];
                    bVar32 = cVar12 == 'n';
                    if (bVar32) {
                      cVar12 = local_84[7];
                    }
                    if (bVar32 && cVar12 == '_') {
                      cVar12 = local_84[8];
                      bVar32 = cVar12 == 's';
                      if (bVar32) {
                        cVar12 = local_84[9];
                      }
                      if (bVar32 && cVar12 == 'p') {
                        cVar12 = local_84[10];
                        bVar32 = cVar12 == 'e';
                        if (bVar32) {
                          cVar12 = local_84[0xb];
                        }
                        if (bVar32 && cVar12 == 'e') {
                          cVar12 = local_84[0xc];
                          uVar21 = 3;
                          goto LAB_00909ff4;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar21 = 6;
LAB_0090a420:
          local_68 = (uint *)&SUB_00000002;
          local_64 = (uint *)CONCAT31(local_64._1_3_,uVar21);
        }
        FUN_008f7448(&local_88);
LAB_0090a438:
        uVar13 = (uint)local_64 & 0xff;
        uVar21 = (undefined1)local_64;
        if (local_68 != (uint *)&SUB_00000002) {
LAB_0090ac1c:
          puVar16 = local_68;
          local_d4 = puVar17;
          local_c8 = iVar30;
          FUN_016dd1aa((int)param_1 + 9,(int)&local_64 + 1,0x2b);
          *(undefined1 *)(param_1 + 2) = uVar21;
          *param_1 = 2;
          param_1[1] = (uint)puVar16;
LAB_0090ade4:
          FUN_00927214(&local_d8);
          if (local_e8 != (uint *)0x80000015) {
            FUN_008f7448(&local_e8);
          }
          if (uVar27 < 0x80000000) {
            return;
          }
          goto LAB_0090ae0c;
        }
LAB_0090a448:
        puVar23 = local_e8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar13) {
        case 0:
          if (local_114 != (uint *)&SUB_00000002) {
            local_d4 = puVar17;
            local_c8 = iVar30;
            FUN_009244cc(&local_68,"speed",5);
LAB_0090af84:
            param_1[1] = (uint)local_68;
            param_1[2] = (uint)local_64;
            param_1[3] = local_60;
            param_1[4] = (uint)local_5c;
            param_1[5] = local_58;
            param_1[6] = uStack_54;
            param_1[7] = local_50;
            param_1[8] = local_4c;
            param_1[9] = local_48;
            param_1[10] = uStack_44;
            param_1[0xb] = uStack_40;
            param_1[0xc] = uStack_3c;
            *param_1 = 2;
            goto LAB_0090ade4;
          }
          local_e8 = (uint *)0x80000015;
          if (puVar23 == (uint *)0x80000015) goto LAB_0090ae50;
          local_38 = puVar23;
          uVar19 = puVar14[1];
          uVar26 = puVar14[2];
          *puVar29 = *puVar14;
          puVar29[1] = uVar19;
          puVar29[2] = uVar26;
          FUN_0094170c(&local_68,&local_38);
          local_114 = local_64;
          if (local_68 != (uint *)&SUB_00000002) {
            param_1[4] = (uint)local_5c;
            param_1[5] = local_58;
            param_1[6] = uStack_54;
            param_1[7] = local_50;
            param_1[8] = local_4c;
            param_1[9] = local_48;
            param_1[10] = uStack_44;
            param_1[0xb] = uStack_40;
            param_1[0xc] = uStack_3c;
            param_1[1] = (uint)local_68;
            *param_1 = 2;
            param_1[2] = (uint)local_64;
            param_1[3] = local_60;
            local_d4 = puVar17;
            local_c8 = iVar30;
            goto LAB_0090ade4;
          }
          local_124 = local_60;
          break;
        case 1:
          if (local_118 != (uint *)&SUB_00000002) {
            local_d4 = puVar17;
            local_c8 = iVar30;
            FUN_009244cc(&local_68,&DAT_0056a608,8);
            goto LAB_0090af84;
          }
          local_e8 = (uint *)0x80000015;
          if (puVar23 == (uint *)0x80000015) goto LAB_0090ae50;
          local_38 = puVar23;
          uVar19 = puVar14[1];
          uVar26 = puVar14[2];
          *puVar29 = *puVar14;
          puVar29[1] = uVar19;
          puVar29[2] = uVar26;
          FUN_0094170c(&local_68,&local_38);
          local_118 = local_64;
          local_13c = local_60;
          if (local_68 != (uint *)&SUB_00000002) {
            param_1[4] = (uint)local_5c;
            param_1[5] = local_58;
            param_1[6] = uStack_54;
            param_1[7] = local_50;
            param_1[8] = local_4c;
            param_1[9] = local_48;
            param_1[10] = uStack_44;
            param_1[0xb] = uStack_40;
            param_1[0xc] = uStack_3c;
            param_1[1] = (uint)local_68;
            param_1[2] = (uint)local_64;
            *param_1 = 2;
LAB_0090ade0:
            param_1[3] = local_60;
            local_d4 = puVar17;
            local_c8 = iVar30;
            goto LAB_0090ade4;
          }
          break;
        case 2:
          if (puVar31 != (uint *)&SUB_00000002) {
            local_d4 = puVar17;
            local_c8 = iVar30;
            FUN_009244cc(&local_68,"min_fan_rpm",0xb);
            goto LAB_0090af84;
          }
          local_e8 = (uint *)0x80000015;
          if (puVar23 == (uint *)0x80000015) goto LAB_0090ae50;
          local_38 = puVar23;
          uVar19 = puVar14[1];
          uVar26 = puVar14[2];
          *puVar29 = *puVar14;
          puVar29[1] = uVar19;
          puVar29[2] = uVar26;
          FUN_0094170c(&local_68,&local_38);
          local_138 = local_60;
          puVar31 = local_64;
          if (local_68 != (uint *)&SUB_00000002) {
            param_1[4] = (uint)local_5c;
            param_1[5] = local_58;
            param_1[6] = uStack_54;
            param_1[7] = local_50;
            param_1[8] = local_4c;
            param_1[9] = local_48;
            param_1[10] = uStack_44;
            param_1[0xb] = uStack_40;
            param_1[0xc] = uStack_3c;
            param_1[1] = (uint)local_68;
            param_1[2] = (uint)local_64;
            *param_1 = 2;
            goto LAB_0090ade0;
          }
          goto LAB_0090a6e8;
        case 3:
          if (local_f0 != (uint *)&SUB_00000002) {
            local_d4 = puVar17;
            local_c8 = iVar30;
            FUN_009244cc(&local_68,"min_fan_speed",0xd);
            goto LAB_0090af84;
          }
          local_e8 = (uint *)0x80000015;
          if (puVar23 == (uint *)0x80000015) goto LAB_0090ae50;
          local_38 = puVar23;
          uVar19 = puVar14[1];
          uVar26 = puVar14[2];
          *puVar29 = *puVar14;
          puVar29[1] = uVar19;
          puVar29[2] = uVar26;
          FUN_0094170c(&local_68,&local_38);
          local_f0 = local_64;
          local_134 = local_60;
          if (local_68 != (uint *)&SUB_00000002) {
            param_1[4] = (uint)local_5c;
            param_1[5] = local_58;
            param_1[6] = uStack_54;
            param_1[7] = local_50;
            param_1[8] = local_4c;
            param_1[9] = local_48;
            param_1[10] = uStack_44;
            param_1[0xb] = uStack_40;
            param_1[0xc] = uStack_3c;
            param_1[1] = (uint)local_68;
            param_1[2] = (uint)local_64;
            *param_1 = 2;
            goto LAB_0090ade0;
          }
          break;
        case 4:
          if (local_11c != (uint *)&SUB_00000002) {
            local_d4 = puVar17;
            local_c8 = iVar30;
            FUN_009244cc(&local_68,"max_fan_speed",0xd);
            goto LAB_0090af84;
          }
          local_e8 = (uint *)0x80000015;
          if (puVar23 == (uint *)0x80000015) goto LAB_0090ae50;
          local_38 = puVar23;
          uVar19 = puVar14[1];
          uVar26 = puVar14[2];
          *puVar29 = *puVar14;
          puVar29[1] = uVar19;
          puVar29[2] = uVar26;
          FUN_0094170c(&local_68,&local_38);
          local_11c = local_64;
          local_120 = local_60;
          if (local_68 != (uint *)&SUB_00000002) {
            param_1[4] = (uint)local_5c;
            param_1[5] = local_58;
            param_1[6] = uStack_54;
            param_1[7] = local_50;
            param_1[8] = local_4c;
            param_1[9] = local_48;
            param_1[10] = uStack_44;
            param_1[0xb] = uStack_40;
            param_1[0xc] = uStack_3c;
            param_1[1] = (uint)local_68;
            param_1[2] = (uint)local_64;
            *param_1 = 2;
            goto LAB_0090ade0;
          }
          break;
        case 5:
          if (local_110 != (uint *)0x3) {
            local_d4 = puVar17;
            local_c8 = iVar30;
            FUN_009244cc(&local_68,"pause",5);
            goto LAB_0090af84;
          }
          local_e8 = (uint *)0x80000015;
          if (puVar23 == (uint *)0x80000015) goto LAB_0090ae50;
          local_38 = puVar23;
          uVar19 = puVar14[1];
          uVar26 = puVar14[2];
          *puVar29 = *puVar14;
          puVar29[1] = uVar19;
          puVar29[2] = uVar26;
          FUN_0093f984(&local_68,&local_38);
          local_140 = local_60;
          local_144 = local_5c;
          local_110 = local_64;
          if (local_68 != (uint *)&SUB_00000002) {
            param_1[5] = local_58;
            param_1[6] = uStack_54;
            param_1[7] = local_50;
            param_1[8] = local_4c;
            param_1[9] = local_48;
            param_1[10] = uStack_44;
            param_1[0xb] = uStack_40;
            param_1[0xc] = uStack_3c;
            param_1[3] = local_60;
            param_1[4] = (uint)local_5c;
            *param_1 = 2;
            param_1[1] = (uint)local_68;
            param_1[2] = (uint)local_64;
            local_d4 = puVar17;
            local_c8 = iVar30;
            goto LAB_0090ade4;
          }
          break;
        case 6:
          local_e8 = (uint *)0x80000015;
          if (puVar23 == (uint *)0x80000015) {
LAB_0090ae50:
            local_e8 = (uint *)0x80000015;
            local_d4 = puVar17;
            local_c8 = iVar30;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements"
                         ,0x2c,&DAT_01887244);
          }
          local_68 = puVar23;
          uVar19 = puVar14[1];
          uVar26 = puVar14[2];
          *puVar28 = *puVar14;
          puVar28[1] = uVar19;
          puVar28[2] = uVar26;
          FUN_008f7448(&local_68);
        }
LAB_0090a6e8:
        puVar23 = puVar20 + 8;
        iVar24 = iVar24 + 1;
        iVar11 = iVar30 + 1;
        puVar20 = puVar17;
      } while (puVar23 != puVar16);
      iVar24 = iVar30;
LAB_0090aabc:
      local_d4 = puVar17;
      local_c8 = iVar24;
    }
    param_1[0xb] = local_140;
    if (local_110 == (uint *)0x3) {
      local_110 = (uint *)&SUB_00000002;
    }
    param_1[0xc] = (uint)local_144;
    param_1[10] = (uint)local_110;
    puVar16 = (uint *)0x0;
    if (local_11c != (uint *)&SUB_00000002) {
      puVar16 = local_11c;
    }
    puVar20 = (uint *)0x0;
    if (local_f0 != (uint *)&SUB_00000002) {
      puVar20 = local_f0;
    }
    puVar15 = (uint *)0x0;
    if (puVar31 != (uint *)&SUB_00000002) {
      puVar15 = puVar31;
    }
    param_1[8] = (uint)puVar16;
    puVar16 = (uint *)0x0;
    if (local_118 != (uint *)&SUB_00000002) {
      puVar16 = local_118;
    }
    param_1[9] = local_120;
    puVar31 = (uint *)0x0;
    if (local_114 != (uint *)&SUB_00000002) {
      puVar31 = local_114;
    }
    param_1[7] = local_134;
    *param_1 = (uint)puVar31;
    param_1[6] = (uint)puVar20;
    param_1[1] = local_124;
    param_1[2] = (uint)puVar16;
    param_1[3] = local_13c;
    param_1[4] = (uint)puVar15;
    param_1[5] = local_138;
    local_c0 = *param_1;
    local_bc = param_1[1];
    local_b8 = param_1[2];
    local_b4 = param_1[3];
    local_b0 = param_1[4];
    uStack_ac = param_1[5];
    local_a8 = param_1[6];
    local_a4 = param_1[7];
    local_a0 = param_1[8];
    uStack_9c = param_1[9];
    uStack_98 = param_1[10];
    uStack_94 = param_1[0xb];
    uStack_90 = param_1[0xc];
    FUN_008f78f0(&local_68,&local_e8);
    if (local_68 == (uint *)&SUB_00000002) {
      *param_1 = local_c0;
      param_1[1] = local_bc;
      param_1[2] = local_b8;
      param_1[3] = local_b4;
      param_1[4] = local_b0;
      param_1[5] = uStack_ac;
      param_1[6] = local_a8;
      param_1[7] = local_a4;
      param_1[8] = local_a0;
      param_1[9] = uStack_9c;
      param_1[10] = uStack_98;
      param_1[0xb] = uStack_94;
      param_1[0xc] = uStack_90;
    }
    else {
      param_1[1] = (uint)local_68;
      param_1[2] = (uint)local_64;
      param_1[3] = local_60;
      param_1[4] = (uint)local_5c;
      param_1[5] = local_58;
      param_1[6] = uStack_54;
      param_1[7] = local_50;
      param_1[8] = local_4c;
      param_1[9] = local_48;
      param_1[10] = uStack_44;
      param_1[0xb] = uStack_40;
      param_1[0xc] = uStack_3c;
      *param_1 = 2;
    }
    goto joined_r0x0090aa94;
  }
  uVar18 = param_2[3];
  uVar13 = param_2[1];
  puVar31 = (uint *)param_2[2];
  uVar19 = 0;
  puVar16 = puVar31 + uVar18 * 4;
  local_58 = 0;
  local_68 = puVar31;
  local_60 = uVar13;
  local_5c = puVar16;
  if (uVar18 == 0) {
    local_ec = puVar31;
    local_64 = puVar31;
LAB_0090aa2c:
    FUN_00f3cf48(param_1 + 1,uVar19,&DAT_01867330,&DAT_018ab990);
LAB_0090aa48:
    *param_1 = 2;
  }
  else {
    local_ec = puVar31 + 4;
    local_64 = local_ec;
    if ((uint *)*puVar31 == (uint *)0x80000015) goto LAB_0090aa2c;
    local_34 = puVar31[1];
    uStack_30 = puVar31[2];
    uStack_2c = puVar31[3];
    local_58 = 1;
    local_64 = local_ec;
    local_38 = (uint *)*puVar31;
    FUN_0094170c(&local_c0,&local_38);
    uVar5 = local_b8;
    uVar25 = local_bc;
    if (local_c0 != 2) {
      param_1[4] = local_b4;
      param_1[5] = local_b0;
      param_1[6] = uStack_ac;
      param_1[7] = local_a8;
      param_1[8] = local_a4;
      param_1[9] = local_a0;
      param_1[10] = uStack_9c;
      param_1[0xb] = uStack_98;
      param_1[0xc] = uStack_94;
      param_1[1] = local_c0;
      param_1[2] = local_bc;
      param_1[3] = local_b8;
      goto LAB_0090aa48;
    }
    uVar19 = 1;
    if (uVar18 == 1) goto LAB_0090aa2c;
    local_ec = puVar31 + 8;
    local_64 = local_ec;
    if ((uint *)puVar31[4] == (uint *)0x80000015) goto LAB_0090aa2c;
    local_34 = puVar31[5];
    uStack_30 = puVar31[6];
    uStack_2c = puVar31[7];
    local_58 = 2;
    local_64 = local_ec;
    local_38 = (uint *)puVar31[4];
    FUN_0094170c(&local_c0,&local_38);
    uVar6 = local_b8;
    uVar1 = local_bc;
    if (local_c0 != 2) {
LAB_0090ae24:
      param_1[4] = local_b4;
      param_1[5] = local_b0;
      param_1[6] = uStack_ac;
      param_1[7] = local_a8;
      param_1[8] = local_a4;
      param_1[9] = local_a0;
      param_1[10] = uStack_9c;
      param_1[0xb] = uStack_98;
      param_1[0xc] = uStack_94;
      param_1[1] = local_c0;
      param_1[2] = local_bc;
      param_1[3] = local_b8;
      goto LAB_0090aa48;
    }
    uVar19 = 2;
    if (uVar18 == 2) goto LAB_0090aa2c;
    local_ec = puVar31 + 0xc;
    local_64 = local_ec;
    if ((uint *)puVar31[8] == (uint *)0x80000015) goto LAB_0090aa2c;
    local_34 = puVar31[9];
    uStack_30 = puVar31[10];
    uStack_2c = puVar31[0xb];
    local_58 = 3;
    local_64 = local_ec;
    local_38 = (uint *)puVar31[8];
    FUN_0094170c(&local_c0,&local_38);
    uVar7 = local_b8;
    uVar2 = local_bc;
    if (local_c0 != 2) goto LAB_0090ae24;
    uVar19 = 3;
    if (uVar18 == 3) goto LAB_0090aa2c;
    local_ec = puVar31 + 0x10;
    local_64 = local_ec;
    if ((uint *)puVar31[0xc] == (uint *)0x80000015) goto LAB_0090aa2c;
    local_34 = puVar31[0xd];
    uStack_30 = puVar31[0xe];
    uStack_2c = puVar31[0xf];
    local_58 = 4;
    local_64 = local_ec;
    local_38 = (uint *)puVar31[0xc];
    FUN_0094170c(&local_c0,&local_38);
    uVar8 = local_b8;
    uVar3 = local_bc;
    if (local_c0 != 2) goto LAB_0090ae24;
    uVar19 = 4;
    if (uVar18 == 4) goto LAB_0090aa2c;
    local_ec = puVar31 + 0x14;
    if ((uint *)puVar31[0x10] == (uint *)0x80000015) {
      uVar19 = 4;
      local_64 = local_ec;
      goto LAB_0090aa2c;
    }
    local_58 = 5;
    local_34 = puVar31[0x11];
    uStack_30 = puVar31[0x12];
    uStack_2c = puVar31[0x13];
    local_64 = local_ec;
    local_38 = (uint *)puVar31[0x10];
    FUN_0094170c(&local_c0,&local_38);
    uVar9 = local_b8;
    uVar4 = local_bc;
    if (local_c0 != 2) {
      param_1[4] = local_b4;
      param_1[5] = local_b0;
      param_1[6] = uStack_ac;
      param_1[7] = local_a8;
      param_1[8] = local_a4;
      param_1[9] = local_a0;
      param_1[10] = uStack_9c;
      param_1[0xb] = uStack_98;
      param_1[0xc] = uStack_94;
      param_1[1] = local_c0;
      param_1[2] = local_bc;
      param_1[3] = local_b8;
      goto LAB_0090aa48;
    }
    if (uVar18 == 5) {
LAB_0090b008:
      uVar19 = 5;
      goto LAB_0090aa2c;
    }
    local_ec = puVar31 + 0x18;
    local_64 = local_ec;
    if ((uint *)puVar31[0x14] == (uint *)0x80000015) goto LAB_0090b008;
    local_58 = 6;
    local_34 = puVar31[0x15];
    uStack_30 = puVar31[0x16];
    uStack_2c = puVar31[0x17];
    local_38 = (uint *)puVar31[0x14];
    FUN_0093f984(&local_c0,&local_38);
    if (local_c0 != 2) {
      param_1[5] = local_b0;
      param_1[6] = uStack_ac;
      param_1[7] = local_a8;
      param_1[8] = local_a4;
      param_1[9] = local_a0;
      param_1[10] = uStack_9c;
      param_1[0xb] = uStack_98;
      param_1[0xc] = uStack_94;
      param_1[1] = local_c0;
      param_1[2] = local_bc;
      param_1[3] = local_b8;
      param_1[4] = local_b4;
      goto LAB_0090aa48;
    }
    if (local_bc == 3) goto LAB_0090b008;
    param_1[2] = uVar1;
    param_1[3] = uVar6;
    param_1[4] = uVar2;
    param_1[5] = uVar7;
    param_1[6] = uVar3;
    param_1[1] = uVar5;
    param_1[7] = uVar8;
    param_1[0xb] = local_b8;
    param_1[10] = local_bc;
    param_1[8] = uVar4;
    param_1[9] = uVar9;
    *param_1 = uVar25;
    param_1[0xc] = local_b4;
    if (uVar25 != 2) {
      FUN_00927184(&local_68);
      if (uVar18 != 6) {
        local_38 = (uint *)&DAT_00000006;
        FUN_00f3cf48(&local_c0,(uVar18 * 0x10 - 0x60 >> 4) + 6,&local_38,&DAT_01887234);
        if (local_c0 != 2) {
          param_1[1] = local_c0;
          param_1[2] = local_bc;
          param_1[3] = local_b8;
          param_1[4] = local_b4;
          param_1[5] = local_b0;
          param_1[6] = uStack_ac;
          param_1[7] = local_a8;
          param_1[8] = local_a4;
          param_1[9] = local_a0;
          param_1[10] = uStack_9c;
          param_1[0xb] = uStack_98;
          param_1[0xc] = uStack_94;
          *param_1 = 2;
        }
      }
      goto joined_r0x0090aa94;
    }
  }
  iVar24 = ((uint)((int)puVar16 - (int)local_ec) >> 4) + 1;
  while (iVar24 = iVar24 + -1, iVar24 != 0) {
    FUN_008f7448(local_ec);
    local_ec = local_ec + 4;
  }
  if (uVar13 != 0) {
    thunk_FUN_016d3fb4(puVar31);
  }
joined_r0x0090aa94:
  if ((int)uVar27 < 0) {
LAB_0090ae0c:
    if ((uVar27 & 0xfffffffe) != 0x80000014) {
      FUN_008f7448(param_2);
    }
  }
  return;
}

