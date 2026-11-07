// FUN_0122e668 @ 0122e668 size=3992 calls_out=16 calls_in=1
// strings: max_fan_speed | min_fan_speed | pause | speed | min_fan_rpm | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0122e668(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint unaff_r4;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined1 uVar23;
  char *pcVar24;
  bool bVar25;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint *local_10c;
  uint *local_108;
  uint local_104;
  uint *local_100;
  int local_fc;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint *local_e8;
  uint *local_e4;
  uint local_e0;
  uint *local_dc;
  int local_d8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint local_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_98 [12];
  uint local_68;
  char *local_64;
  char *local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 uStack_25;
  
  local_114 = *param_2;
  uVar10 = 0x15;
  if ((int)local_114 < 0) {
    uVar10 = local_114 ^ 0x80000000;
  }
  if (uVar10 != 0x14) {
    if (uVar10 != 0x15) {
      FUN_012223f8(param_1 + 1,param_2,&uStack_25,&DAT_01c24684);
      *param_1 = 2;
      return;
    }
    local_d8 = 0;
    local_f8 = 0x80000015;
    puVar13 = (undefined4 *)((uint)local_98 | 4);
    puVar14 = (undefined4 *)((uint)&local_f8 | 4);
    local_e8 = (uint *)param_2[1];
    puVar15 = (uint *)((uint)&local_68 | 4);
    local_dc = local_e8 + param_2[2] * 8;
    local_12c = 3;
    local_124 = 2;
    local_120 = 2;
    local_128 = 2;
    local_11c = 2;
    local_118 = 2;
    local_e4 = local_e8;
    local_e0 = local_114;
LAB_0122e724:
    puVar1 = local_e4;
    bVar25 = local_e4 == local_dc;
    if (!bVar25) {
      unaff_r4 = *local_e4;
      local_e4 = local_e4 + 8;
    }
    if (bVar25 || unaff_r4 == 0x80000015) goto switchD_0122ecd4_caseD_7;
    local_d8 = local_d8 + 1;
    uVar10 = puVar1[2];
    uVar20 = puVar1[3];
    *puVar15 = puVar1[1];
    puVar15[1] = uVar10;
    puVar15[2] = uVar20;
    local_58 = puVar1[4];
    local_54 = puVar1[5];
    local_50 = puVar1[6];
    local_4c = puVar1[7];
    local_68 = unaff_r4;
    if (local_f8 != 0x80000015) {
      FUN_012222e0(&local_f8);
    }
    pcVar7 = local_60;
    pcVar24 = local_64;
    local_f8 = local_58;
    uStack_f4 = local_54;
    uStack_f0 = local_50;
    uStack_ec = local_4c;
    uVar10 = 0x15;
    if ((int)unaff_r4 < 0) {
      uVar10 = unaff_r4 ^ 0x80000000;
    }
    switch(uVar10) {
    case 1:
      local_58 = 2;
      uVar23 = SUB41(local_64,0);
      if (5 < ((uint)local_64 & 0xff)) {
        uVar23 = 6;
      }
      local_54 = CONCAT31(local_54._1_3_,uVar23);
      break;
    default:
      FUN_012223f8(&local_58,&local_68,&uStack_25,&DAT_01c246a4);
      goto LAB_0122ecbc;
    case 4:
      pcVar24 = local_60;
      if (local_5c != 0 || local_5c < (&DAT_00000005 < local_60)) {
        pcVar24 = &DAT_00000006;
      }
      uVar23 = SUB41(pcVar24,0);
      goto LAB_0122eca8;
    case 0xc:
      FUN_01231f84(&local_58,local_60);
      FUN_019bb7e0(pcVar24,pcVar7);
      goto LAB_0122ecbc;
    case 0xd:
      FUN_01231f84(&local_58,local_64,local_60);
      break;
    case 0xe:
      switch(local_5c) {
      case 5:
        cVar9 = *local_60;
        if (cVar9 != 'p') {
          bVar25 = cVar9 == 's';
          if (bVar25) {
            cVar9 = local_60[1];
          }
          if (bVar25 && cVar9 == 'p') {
            cVar9 = local_60[2];
            bVar25 = cVar9 == 'e';
            if (bVar25) {
              cVar9 = local_60[3];
            }
            if (bVar25 && cVar9 == 'e') {
              cVar9 = local_60[4];
              uVar23 = 0;
LAB_0122e924:
              if (cVar9 == 'd') goto LAB_0122eeb4;
            }
          }
          break;
        }
        if (local_60[1] != 'a') break;
        cVar9 = local_60[2];
        bVar25 = cVar9 != 'u';
        if (!bVar25) {
          cVar9 = local_60[3];
        }
        if ((bVar25 || cVar9 != 's') || (uVar23 = 5, local_60[4] != 'e')) break;
        goto LAB_0122eeb4;
      case 8:
        if (*local_60 == 'm') {
          cVar9 = local_60[1];
          bVar25 = cVar9 == 'i';
          if (bVar25) {
            cVar9 = local_60[2];
          }
          if (bVar25 && cVar9 == 'n') {
            cVar9 = local_60[3];
            bVar25 = cVar9 == '_';
            if (bVar25) {
              cVar9 = local_60[4];
            }
            if (bVar25 && cVar9 == 'f') {
              cVar9 = local_60[5];
              bVar25 = cVar9 == 'a';
              if (bVar25) {
                cVar9 = local_60[6];
              }
              if ((bVar25 && cVar9 == 'n') && (uVar23 = 1, local_60[7] == 's')) goto LAB_0122eeb4;
            }
          }
        }
        break;
      case 0xb:
        cVar9 = *local_60;
        bVar25 = cVar9 == 'm';
        if (bVar25) {
          cVar9 = local_60[1];
        }
        if (bVar25 && cVar9 == 'i') {
          cVar9 = local_60[2];
          bVar25 = cVar9 == 'n';
          if (bVar25) {
            cVar9 = local_60[3];
          }
          if (bVar25 && cVar9 == '_') {
            cVar9 = local_60[4];
            bVar25 = cVar9 == 'f';
            if (bVar25) {
              cVar9 = local_60[5];
            }
            if (bVar25 && cVar9 == 'a') {
              cVar9 = local_60[6];
              bVar25 = cVar9 == 'n';
              if (bVar25) {
                cVar9 = local_60[7];
              }
              if (bVar25 && cVar9 == '_') {
                cVar9 = local_60[8];
                bVar25 = cVar9 == 'r';
                if (bVar25) {
                  cVar9 = local_60[9];
                }
                if (bVar25 && cVar9 == 'p') {
                  uVar23 = 2;
                  if (local_60[10] != 'm') {
                    uVar23 = 6;
                  }
                  goto LAB_0122eeb4;
                }
              }
            }
          }
        }
        break;
      case 0xd:
        if (*local_60 == 'm') {
          if (local_60[1] == 'a') {
            cVar9 = local_60[2];
            bVar25 = cVar9 == 'x';
            if (bVar25) {
              cVar9 = local_60[3];
            }
            if (bVar25 && cVar9 == '_') {
              cVar9 = local_60[4];
              bVar25 = cVar9 == 'f';
              if (bVar25) {
                cVar9 = local_60[5];
              }
              if (bVar25 && cVar9 == 'a') {
                cVar9 = local_60[6];
                bVar25 = cVar9 == 'n';
                if (bVar25) {
                  cVar9 = local_60[7];
                }
                if (bVar25 && cVar9 == '_') {
                  cVar9 = local_60[8];
                  bVar25 = cVar9 == 's';
                  if (bVar25) {
                    cVar9 = local_60[9];
                  }
                  if (bVar25 && cVar9 == 'p') {
                    cVar9 = local_60[10];
                    bVar25 = cVar9 == 'e';
                    if (bVar25) {
                      cVar9 = local_60[0xb];
                    }
                    if (bVar25 && cVar9 == 'e') {
                      cVar9 = local_60[0xc];
                      uVar23 = 4;
                      goto LAB_0122e924;
                    }
                  }
                }
              }
            }
          }
          else if (local_60[1] == 'i') {
            cVar9 = local_60[2];
            bVar25 = cVar9 == 'n';
            if (bVar25) {
              cVar9 = local_60[3];
            }
            if (bVar25 && cVar9 == '_') {
              cVar9 = local_60[4];
              bVar25 = cVar9 == 'f';
              if (bVar25) {
                cVar9 = local_60[5];
              }
              if (bVar25 && cVar9 == 'a') {
                cVar9 = local_60[6];
                bVar25 = cVar9 == 'n';
                if (bVar25) {
                  cVar9 = local_60[7];
                }
                if (bVar25 && cVar9 == '_') {
                  cVar9 = local_60[8];
                  bVar25 = cVar9 == 's';
                  if (bVar25) {
                    cVar9 = local_60[9];
                  }
                  if (bVar25 && cVar9 == 'p') {
                    cVar9 = local_60[10];
                    bVar25 = cVar9 == 'e';
                    if (bVar25) {
                      cVar9 = local_60[0xb];
                    }
                    if (bVar25 && cVar9 == 'e') {
                      cVar9 = local_60[0xc];
                      uVar23 = 3;
                      goto LAB_0122e924;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar23 = 6;
LAB_0122eeb4:
      local_54 = CONCAT31(local_54._1_3_,uVar23);
      local_58 = 2;
      FUN_019bb7e0(local_64,local_60);
      goto LAB_0122eccc;
    case 0xf:
      switch(local_60) {
      case (char *)0x5:
        cVar9 = *local_64;
        if (cVar9 == 'p') {
          if (local_64[1] == 'a') {
            cVar9 = local_64[2];
            bVar25 = cVar9 == 'u';
            if (bVar25) {
              cVar9 = local_64[3];
            }
            if ((bVar25 && cVar9 == 's') && (uVar23 = 5, local_64[4] == 'e')) goto LAB_0122eca8;
          }
        }
        else {
          bVar25 = cVar9 == 's';
          if (bVar25) {
            cVar9 = local_64[1];
          }
          if (bVar25 && cVar9 == 'p') {
            cVar9 = local_64[2];
            bVar25 = cVar9 == 'e';
            if (bVar25) {
              cVar9 = local_64[3];
            }
            if (bVar25 && cVar9 == 'e') {
              cVar9 = local_64[4];
              uVar23 = 0;
LAB_0122e8a4:
              if (cVar9 == 'd') goto LAB_0122eca8;
            }
          }
        }
        break;
      case (char *)0x8:
        if (*local_64 == 'm') {
          cVar9 = local_64[1];
          bVar25 = cVar9 == 'i';
          if (bVar25) {
            cVar9 = local_64[2];
          }
          if (bVar25 && cVar9 == 'n') {
            cVar9 = local_64[3];
            bVar25 = cVar9 == '_';
            if (bVar25) {
              cVar9 = local_64[4];
            }
            if (bVar25 && cVar9 == 'f') {
              cVar9 = local_64[5];
              bVar25 = cVar9 == 'a';
              if (bVar25) {
                cVar9 = local_64[6];
              }
              if ((bVar25 && cVar9 == 'n') && (uVar23 = 1, local_64[7] == 's')) goto LAB_0122eca8;
            }
          }
        }
        break;
      case (char *)0xb:
        cVar9 = *local_64;
        bVar25 = cVar9 == 'm';
        if (bVar25) {
          cVar9 = local_64[1];
        }
        if (bVar25 && cVar9 == 'i') {
          cVar9 = local_64[2];
          bVar25 = cVar9 == 'n';
          if (bVar25) {
            cVar9 = local_64[3];
          }
          if (bVar25 && cVar9 == '_') {
            cVar9 = local_64[4];
            bVar25 = cVar9 == 'f';
            if (bVar25) {
              cVar9 = local_64[5];
            }
            if (bVar25 && cVar9 == 'a') {
              cVar9 = local_64[6];
              bVar25 = cVar9 == 'n';
              if (bVar25) {
                cVar9 = local_64[7];
              }
              if (bVar25 && cVar9 == '_') {
                cVar9 = local_64[8];
                bVar25 = cVar9 == 'r';
                if (bVar25) {
                  cVar9 = local_64[9];
                }
                if (bVar25 && cVar9 == 'p') {
                  uVar23 = 2;
                  if (local_64[10] != 'm') {
                    uVar23 = 6;
                  }
                  goto LAB_0122eca8;
                }
              }
            }
          }
        }
        break;
      case (char *)0xd:
        if (*local_64 == 'm') {
          if (local_64[1] == 'a') {
            cVar9 = local_64[2];
            bVar25 = cVar9 == 'x';
            if (bVar25) {
              cVar9 = local_64[3];
            }
            if (bVar25 && cVar9 == '_') {
              cVar9 = local_64[4];
              bVar25 = cVar9 == 'f';
              if (bVar25) {
                cVar9 = local_64[5];
              }
              if (bVar25 && cVar9 == 'a') {
                cVar9 = local_64[6];
                bVar25 = cVar9 == 'n';
                if (bVar25) {
                  cVar9 = local_64[7];
                }
                if (bVar25 && cVar9 == '_') {
                  cVar9 = local_64[8];
                  bVar25 = cVar9 == 's';
                  if (bVar25) {
                    cVar9 = local_64[9];
                  }
                  if (bVar25 && cVar9 == 'p') {
                    cVar9 = local_64[10];
                    bVar25 = cVar9 == 'e';
                    if (bVar25) {
                      cVar9 = local_64[0xb];
                    }
                    if (bVar25 && cVar9 == 'e') {
                      cVar9 = local_64[0xc];
                      uVar23 = 4;
                      goto LAB_0122e8a4;
                    }
                  }
                }
              }
            }
          }
          else if (local_64[1] == 'i') {
            cVar9 = local_64[2];
            bVar25 = cVar9 == 'n';
            if (bVar25) {
              cVar9 = local_64[3];
            }
            if (bVar25 && cVar9 == '_') {
              cVar9 = local_64[4];
              bVar25 = cVar9 == 'f';
              if (bVar25) {
                cVar9 = local_64[5];
              }
              if (bVar25 && cVar9 == 'a') {
                cVar9 = local_64[6];
                bVar25 = cVar9 == 'n';
                if (bVar25) {
                  cVar9 = local_64[7];
                }
                if (bVar25 && cVar9 == '_') {
                  cVar9 = local_64[8];
                  bVar25 = cVar9 == 's';
                  if (bVar25) {
                    cVar9 = local_64[9];
                  }
                  if (bVar25 && cVar9 == 'p') {
                    cVar9 = local_64[10];
                    bVar25 = cVar9 == 'e';
                    if (bVar25) {
                      cVar9 = local_64[0xb];
                    }
                    if (bVar25 && cVar9 == 'e') {
                      cVar9 = local_64[0xc];
                      uVar23 = 3;
                      goto LAB_0122e8a4;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar23 = 6;
LAB_0122eca8:
      local_54 = CONCAT31(local_54._1_3_,uVar23);
      local_58 = 2;
    }
    FUN_012222e0(&local_68);
LAB_0122ecbc:
    uVar10 = local_58;
    bVar8 = (byte)local_54;
    if (local_58 != 2) {
      FUN_01bed4e2(local_98,(int)&local_54 + 1,0x2b);
      FUN_01bed4e2((int)param_1 + 9,local_98,0x2b);
      *(byte *)(param_1 + 2) = bVar8;
      *param_1 = 2;
      param_1[1] = uVar10;
      goto LAB_0122f560;
    }
LAB_0122eccc:
    uVar10 = local_f8;
    unaff_r4 = (uint)(byte)local_54;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((byte)local_54) {
    case 0:
      if (local_118 == 2) {
        FUN_01222dcc(&local_58,&local_f8);
        local_118 = local_54;
        if (local_58 != 2) {
          param_1[4] = local_4c;
          param_1[5] = local_48;
          param_1[6] = uStack_44;
          param_1[7] = local_40;
          param_1[8] = local_3c;
          param_1[9] = local_38;
          param_1[10] = uStack_34;
          param_1[0xb] = uStack_30;
          param_1[0xc] = uStack_2c;
          param_1[1] = local_58;
          *param_1 = 2;
LAB_0122f520:
          param_1[2] = local_54;
          param_1[3] = local_50;
          goto LAB_0122f560;
        }
        local_15c = local_50;
        unaff_r4 = local_50;
        goto LAB_0122e724;
      }
      FUN_0123c090(&local_58,"speed",5);
      break;
    case 1:
      if (local_11c == 2) {
        FUN_01222dcc(&local_58,&local_f8);
        local_11c = local_54;
        local_14c = local_50;
        if (local_58 != 2) {
          param_1[4] = local_4c;
          param_1[5] = local_48;
          param_1[6] = uStack_44;
          param_1[7] = local_40;
          param_1[8] = local_3c;
          param_1[9] = local_38;
          param_1[10] = uStack_34;
          param_1[0xb] = uStack_30;
          param_1[0xc] = uStack_2c;
          param_1[1] = local_58;
          param_1[2] = local_54;
LAB_0122f4e8:
          *param_1 = 2;
          param_1[3] = local_50;
          goto LAB_0122f560;
        }
        goto LAB_0122e724;
      }
      FUN_0123c090(&local_58,&DAT_00570be0,8);
      break;
    case 2:
      if (local_128 == 2) {
        FUN_01222dcc(&local_58,&local_f8);
        local_148 = local_50;
        if (local_58 != 2) {
          param_1[4] = local_4c;
          param_1[5] = local_48;
          param_1[6] = uStack_44;
          param_1[7] = local_40;
          param_1[8] = local_3c;
          param_1[9] = local_38;
          param_1[10] = uStack_34;
          param_1[0xb] = uStack_30;
          param_1[0xc] = uStack_2c;
          param_1[1] = local_58;
          param_1[2] = local_54;
          goto LAB_0122f4e8;
        }
        local_128 = local_54;
        unaff_r4 = local_54;
        goto LAB_0122e724;
      }
      FUN_0123c090(&local_58,"min_fan_rpm",0xb);
      break;
    case 3:
      if (local_120 == 2) {
        FUN_01222dcc(&local_58,&local_f8);
        local_120 = local_54;
        local_144 = local_50;
        if (local_58 != 2) {
          param_1[4] = local_4c;
          param_1[5] = local_48;
          param_1[6] = uStack_44;
          param_1[7] = local_40;
          param_1[8] = local_3c;
          param_1[9] = local_38;
          param_1[10] = uStack_34;
          param_1[0xb] = uStack_30;
          param_1[0xc] = uStack_2c;
          param_1[1] = local_58;
          param_1[2] = local_54;
          goto LAB_0122f4e8;
        }
        goto LAB_0122e724;
      }
      FUN_0123c090(&local_58,"min_fan_speed",0xd);
      break;
    case 4:
      if (local_124 == 2) {
        FUN_01222dcc(&local_58,&local_f8);
        local_124 = local_54;
        if (local_58 != 2) {
          param_1[4] = local_4c;
          param_1[5] = local_48;
          param_1[6] = uStack_44;
          param_1[7] = local_40;
          param_1[8] = local_3c;
          param_1[9] = local_38;
          param_1[10] = uStack_34;
          param_1[0xb] = uStack_30;
          param_1[0xc] = uStack_2c;
          param_1[1] = local_58;
          *param_1 = 2;
          goto LAB_0122f520;
        }
        local_158 = local_50;
        goto LAB_0122e724;
      }
      FUN_0123c090(&local_58,"max_fan_speed",0xd);
      break;
    case 5:
      if (local_12c == 3) {
        local_f8 = 0x80000015;
        if (uVar10 == 0x80000015) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                       ,0x2c,&DAT_01cfa02c);
        }
        uVar12 = puVar14[1];
        uVar21 = puVar14[2];
        *puVar13 = *puVar14;
        puVar13[1] = uVar12;
        puVar13[2] = uVar21;
        local_98[0] = uVar10;
        FUN_0123e4c8(&local_58,local_98);
        local_150 = local_50;
        local_154 = local_4c;
        if (local_58 != 2) {
          param_1[5] = local_48;
          param_1[6] = uStack_44;
          param_1[7] = local_40;
          param_1[8] = local_3c;
          param_1[9] = local_38;
          param_1[10] = uStack_34;
          param_1[0xb] = uStack_30;
          param_1[0xc] = uStack_2c;
          param_1[1] = local_58;
          param_1[2] = local_54;
          param_1[3] = local_50;
          param_1[4] = local_4c;
          *param_1 = 2;
          goto LAB_0122f560;
        }
        local_12c = local_54;
        unaff_r4 = local_54;
        goto LAB_0122e724;
      }
      FUN_0123c090(&local_58,"pause",5);
      break;
    case 6:
      goto switchD_0122ecd4_caseD_6;
    case 7:
switchD_0122ecd4_caseD_7:
      if (local_12c == 3) {
        local_12c = 2;
      }
      param_1[10] = local_12c;
      param_1[0xb] = local_150;
      param_1[0xc] = local_154;
      uVar10 = 0;
      if (local_124 != 2) {
        uVar10 = local_124;
      }
      uVar20 = 0;
      if (local_120 != 2) {
        uVar20 = local_120;
      }
      param_1[6] = uVar20;
      uVar20 = 0;
      if (local_128 != 2) {
        uVar20 = local_128;
      }
      param_1[7] = local_144;
      param_1[8] = uVar10;
      uVar10 = 0;
      if (local_11c != 2) {
        uVar10 = local_11c;
      }
      param_1[9] = local_158;
      uVar16 = 0;
      if (local_118 != 2) {
        uVar16 = local_118;
      }
      param_1[2] = uVar10;
      param_1[4] = uVar20;
      *param_1 = uVar16;
      param_1[1] = local_15c;
      param_1[3] = local_14c;
      param_1[5] = local_148;
      local_d0 = *param_1;
      local_cc = param_1[1];
      local_c8 = param_1[2];
      local_c4 = param_1[3];
      local_c0 = param_1[4];
      uStack_bc = param_1[5];
      uStack_b8 = param_1[6];
      local_b4 = param_1[7];
      local_b0 = param_1[8];
      uStack_ac = param_1[9];
      uStack_a8 = param_1[10];
      uStack_a4 = param_1[0xb];
      uStack_a0 = param_1[0xc];
      puVar15 = &local_58;
      FUN_01222c98(puVar15,&local_f8);
      if (local_58 != 2) goto LAB_0122f380;
      *param_1 = local_d0;
      param_1[1] = local_cc;
      param_1[2] = local_c8;
      param_1[3] = local_c4;
      param_1[4] = local_c0;
      param_1[5] = uStack_bc;
      param_1[6] = uStack_b8;
      param_1[7] = local_b4;
      param_1[8] = local_b0;
      param_1[9] = uStack_ac;
      param_1[10] = uStack_a8;
      param_1[0xb] = uStack_a4;
      param_1[0xc] = uStack_a0;
      goto LAB_0122f398;
    }
    param_1[1] = local_58;
    param_1[2] = local_54;
    param_1[3] = local_50;
    param_1[4] = local_4c;
    param_1[5] = local_48;
    param_1[6] = uStack_44;
    param_1[7] = local_40;
    param_1[8] = local_3c;
    param_1[9] = local_38;
    param_1[10] = uStack_34;
    param_1[0xb] = uStack_30;
    param_1[0xc] = uStack_2c;
    *param_1 = 2;
    goto LAB_0122f560;
  }
  local_104 = param_2[1];
  local_10c = (uint *)param_2[2];
  local_100 = local_10c + param_2[3] * 4;
  local_fc = 0;
  local_108 = local_10c;
  FUN_01223428(&local_d0,&local_10c);
  uVar20 = local_c8;
  uVar10 = local_cc;
  if (local_d0 == 2) {
    if (local_cc == 2) {
      uVar12 = 0;
    }
    else {
      FUN_01223428(&local_d0,&local_10c);
      uVar17 = local_c8;
      uVar16 = local_cc;
      if (local_d0 != 2) {
        param_1[4] = local_c4;
        param_1[5] = local_c0;
        param_1[6] = uStack_bc;
        param_1[7] = uStack_b8;
        param_1[8] = local_b4;
        param_1[9] = local_b0;
        param_1[10] = uStack_ac;
        param_1[0xb] = uStack_a8;
        param_1[0xc] = uStack_a4;
        param_1[1] = local_d0;
        param_1[2] = local_cc;
        param_1[3] = local_c8;
        goto LAB_0122f26c;
      }
      if (local_cc == 2) {
        uVar12 = 1;
      }
      else {
        FUN_01223428(&local_d0,&local_10c);
        uVar4 = local_c8;
        uVar18 = local_cc;
        if (local_d0 != 2) {
LAB_0122f250:
          param_1[4] = local_c4;
          param_1[5] = local_c0;
          param_1[6] = uStack_bc;
          param_1[7] = uStack_b8;
          param_1[8] = local_b4;
          param_1[9] = local_b0;
          param_1[10] = uStack_ac;
          param_1[0xb] = uStack_a8;
          param_1[0xc] = uStack_a4;
          param_1[1] = local_d0;
          param_1[2] = local_cc;
          param_1[3] = local_c8;
          goto LAB_0122f26c;
        }
        if (local_cc == 2) {
          uVar12 = 2;
        }
        else {
          FUN_01223428(&local_d0,&local_10c);
          uVar5 = local_c8;
          uVar2 = local_cc;
          if (local_d0 != 2) goto LAB_0122f250;
          if (local_cc == 2) {
            uVar12 = 3;
          }
          else {
            FUN_01223428(&local_d0,&local_10c);
            uVar6 = local_c8;
            uVar3 = local_cc;
            if (local_d0 != 2) goto LAB_0122f250;
            if (local_cc == 2) {
              uVar12 = 4;
            }
            else {
              puVar15 = local_108;
              if (local_108 != local_100) {
                uVar11 = *local_108;
                puVar15 = local_108 + 4;
                if (uVar11 != 0x80000015) {
                  uVar19 = local_108[2];
                  uVar22 = local_108[3];
                  puVar15 = (uint *)((uint)local_98 | 4);
                  *puVar15 = local_108[1];
                  puVar15[1] = uVar19;
                  puVar15[2] = uVar22;
                  local_fc = local_fc + 1;
                  local_108 = local_108 + 4;
                  local_98[0] = uVar11;
                  FUN_0123e4c8(&local_d0);
                  if (local_d0 != 2) {
                    local_58 = local_c0;
                    local_54 = uStack_bc;
                    local_50 = uStack_b8;
                    local_4c = local_b4;
                    local_48 = local_b0;
                    uStack_44 = uStack_ac;
                    local_40 = uStack_a8;
                    local_3c = uStack_a4;
                    param_1[5] = local_c0;
                    param_1[6] = uStack_bc;
                    param_1[7] = uStack_b8;
                    param_1[8] = local_b4;
                    param_1[9] = local_b0;
                    param_1[10] = uStack_ac;
                    param_1[0xb] = uStack_a8;
                    param_1[0xc] = uStack_a4;
                    param_1[1] = local_d0;
                    param_1[2] = local_cc;
                    param_1[3] = local_c8;
                    param_1[4] = local_c4;
                    goto LAB_0122f26c;
                  }
                  puVar15 = local_108;
                  if (local_cc != 3) {
                    param_1[6] = uVar2;
                    param_1[7] = uVar5;
                    param_1[4] = uVar18;
                    param_1[8] = uVar3;
                    param_1[1] = uVar20;
                    param_1[0xb] = local_c8;
                    param_1[10] = local_cc;
                    param_1[2] = uVar16;
                    param_1[3] = uVar17;
                    param_1[5] = uVar4;
                    param_1[9] = uVar6;
                    *param_1 = uVar10;
                    param_1[0xc] = local_c4;
                    puVar15 = &local_d0;
                    FUN_01222e2c(puVar15,&local_10c);
                    if (local_d0 != 2) {
LAB_0122f380:
                      uVar10 = puVar15[1];
                      uVar20 = puVar15[2];
                      uVar16 = puVar15[3];
                      uVar17 = puVar15[4];
                      uVar18 = puVar15[5];
                      param_1[1] = *puVar15;
                      param_1[2] = uVar10;
                      param_1[3] = uVar20;
                      param_1[4] = uVar16;
                      param_1[5] = uVar17;
                      param_1[6] = uVar18;
                      uVar10 = puVar15[7];
                      uVar20 = puVar15[8];
                      uVar16 = puVar15[9];
                      uVar17 = puVar15[10];
                      uVar18 = puVar15[0xb];
                      param_1[7] = puVar15[6];
                      param_1[8] = uVar10;
                      param_1[9] = uVar20;
                      param_1[10] = uVar16;
                      param_1[0xb] = uVar17;
                      param_1[0xc] = uVar18;
                      *param_1 = 2;
                    }
                    goto LAB_0122f398;
                  }
                }
              }
              local_108 = puVar15;
              uVar12 = 5;
            }
          }
        }
      }
    }
    FUN_0123c028(param_1 + 1,uVar12,&DAT_01c248ec,&DAT_01d064b8);
  }
  else {
    param_1[4] = local_c4;
    param_1[5] = local_c0;
    param_1[6] = uStack_bc;
    param_1[7] = uStack_b8;
    param_1[8] = local_b4;
    param_1[9] = local_b0;
    param_1[10] = uStack_ac;
    param_1[0xb] = uStack_a8;
    param_1[0xc] = uStack_a4;
    param_1[1] = local_d0;
    param_1[2] = local_cc;
    param_1[3] = local_c8;
  }
LAB_0122f26c:
  *param_1 = 2;
  FUN_01264ff4(&local_10c);
LAB_0122f398:
  if ((local_114 < 0x80000000) || ((undefined1 *)(local_114 & 0xfffffffe) == &DAT_80000014)) {
    return;
  }
  FUN_012222e0(param_2);
  return;
switchD_0122ecd4_caseD_6:
  FUN_012230dc(&local_58,&local_f8);
  if (local_58 != 2) goto LAB_0122f40c;
  goto LAB_0122e724;
LAB_0122f40c:
  param_1[2] = local_54;
  param_1[3] = local_50;
  param_1[4] = local_4c;
  param_1[5] = local_48;
  param_1[6] = uStack_44;
  param_1[7] = local_40;
  param_1[8] = local_3c;
  param_1[9] = local_38;
  param_1[10] = uStack_34;
  param_1[0xb] = uStack_30;
  param_1[0xc] = uStack_2c;
  *param_1 = 2;
  param_1[1] = local_58;
LAB_0122f560:
  FUN_01222c4c(&local_f8);
  local_114 = *param_2;
  goto LAB_0122f398;
}

