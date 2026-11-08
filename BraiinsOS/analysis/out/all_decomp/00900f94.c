// FUN_00900f94 @ 00900f94 size=4868 calls_out=17 calls_in=2
// strings: hash_chain_global | hash_chain | temp_control | fan_control

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00900f94(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  char **ppcVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  char *pcVar19;
  int iVar20;
  char **ppcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  int iVar27;
  char *pcVar28;
  char *pcVar29;
  undefined1 uVar30;
  bool bVar31;
  bool bVar32;
  undefined4 local_230;
  undefined4 local_22c;
  char *local_214;
  char *local_210;
  char *local_20c;
  char *local_208;
  char *pcStack_204;
  char *pcStack_200;
  char *pcStack_1fc;
  int local_1f8;
  int local_1f4;
  undefined *local_1f0;
  undefined4 local_1ec;
  char *local_1e8 [4];
  int local_1d8;
  int local_1d4;
  int local_1d0;
  char *local_1c8;
  char *pcStack_1c4;
  char *pcStack_1c0;
  char *pcStack_1bc;
  char *pcStack_1b8;
  char *pcStack_1b4;
  char *local_1b0;
  char *pcStack_1ac;
  char *pcStack_1a8;
  char *pcStack_1a4;
  char *pcStack_1a0;
  char *pcStack_19c;
  char *local_198;
  char *pcStack_190;
  char *local_18c;
  char *local_188;
  char *local_184;
  char *local_180;
  char *local_17c;
  char *local_178;
  char *pcStack_174;
  char *local_170;
  char *local_16c;
  char *local_168;
  char *pcStack_164;
  char *pcStack_160;
  char *pcStack_15c;
  char *pcStack_158;
  char *pcStack_154;
  char *local_150;
  char *pcStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  char *local_140;
  char *pcStack_13c;
  char *pcStack_138;
  char *pcStack_134;
  char *pcStack_130;
  char *local_12c;
  char *local_128;
  char *pcStack_124;
  char *pcStack_120;
  char *pcStack_11c;
  char *local_118;
  char *pcStack_114;
  char *local_110;
  char *pcStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  char *local_100;
  char *pcStack_fc;
  char *pcStack_f8;
  char *pcStack_f4;
  char *pcStack_f0;
  char *pcStack_ec;
  char *local_e8;
  char *pcStack_e4;
  char *pcStack_e0;
  char *pcStack_dc;
  char *pcStack_d8;
  char *pcStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  char *local_c0;
  char *pcStack_bc;
  char *pcStack_b8;
  char *pcStack_b4;
  char *pcStack_b0;
  char *pcStack_ac;
  char *local_a8;
  char *pcStack_a4;
  char *pcStack_a0;
  char *pcStack_9c;
  char *pcStack_98;
  char *pcStack_94;
  char *local_90;
  undefined4 *local_8c;
  char *local_80;
  undefined4 local_7c;
  char *local_78;
  char *local_74;
  char *local_70;
  char *local_6c;
  char *local_68;
  char *local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *pcStack_54;
  char *pcStack_50;
  char *pcStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar27 = param_2 + param_3 * 0x20;
  local_1ec = 5;
  local_208 = (char *)0x80000015;
  pcVar26 = &SUB_00000002;
  local_1f0 = &DAT_01867910;
  local_1e8[0] = &SUB_00000002;
  local_1d8 = -0x7fffffff;
  local_1f4 = iVar27;
  if (param_3 != 0) {
    piVar10 = (int *)((uint)&local_80 | 4);
    piVar11 = (int *)((uint)&local_c0 | 4);
    puVar12 = (undefined4 *)((uint)local_1e8 | 4);
    ppcVar13 = (char **)((uint)&local_188 | 4);
    pcVar22 = &DAT_00000004;
    ppcVar21 = &local_180;
    pcVar28 = (char *)0x0;
    piVar14 = (int *)((uint)&local_90 | 4);
    piVar15 = (int *)((uint)&local_208 | 4);
    local_210 = (char *)0x3;
    local_214 = (char *)0x0;
    local_20c = (char *)0x3;
LAB_0090109c:
    iVar18 = param_2;
    while( true ) {
      param_2 = iVar18 + 0x20;
      local_1f8 = param_2;
      FUN_01578f04(&local_188,iVar18,&DAT_01867910,5);
      if (local_188 != (char *)0x80000015) break;
      iVar18 = param_2;
      if (param_2 == iVar27) goto LAB_00901d64;
    }
    if (local_208 != (char *)0x80000015) {
      FUN_008f7448(&local_208);
    }
    pcVar19 = local_180;
    pcVar26 = local_184;
    local_208 = local_178;
    pcStack_204 = pcStack_174;
    pcStack_200 = local_170;
    pcStack_1fc = local_16c;
    uVar16 = 0x15;
    if ((int)local_188 < 0) {
      uVar16 = (uint)local_188 ^ 0x80000000;
    }
    switch(uVar16) {
    case 1:
      local_80 = &SUB_00000002;
      uVar30 = SUB41(local_184,0);
      if (4 < ((uint)local_184 & 0xff)) {
        uVar30 = 5;
      }
      local_7c = (char *)CONCAT31(local_7c._1_3_,uVar30);
      break;
    default:
      FUN_008f73e8(&local_80,&local_188,&local_c0,&DAT_01867158);
      goto LAB_009015fc;
    case 4:
      pcVar26 = local_180;
      if (local_17c != (char *)0x0 || local_17c < (char *)(uint)(&DAT_00000004 < local_180)) {
        pcVar26 = &DAT_00000005;
      }
      uVar30 = SUB41(pcVar26,0);
      goto LAB_009015e4;
    case 0xc:
      FUN_0090fb58(&local_80,local_180);
      if (pcVar26 != (char *)0x0) {
        thunk_FUN_016d3fb4(pcVar19);
      }
      goto LAB_009015fc;
    case 0xd:
      FUN_0090fb58(&local_80,local_184,local_180);
      break;
    case 0xe:
      switch(local_17c) {
      case (char *)0x5:
        cVar1 = *local_180;
        bVar31 = cVar1 != 'g';
        if (!bVar31) {
          cVar1 = local_180[1];
        }
        if (bVar31 || cVar1 != 'r') break;
        cVar1 = local_180[2];
        bVar31 = cVar1 != 'o';
        if (!bVar31) {
          cVar1 = local_180[3];
        }
        if (bVar31 || cVar1 != 'u') break;
        uVar30 = 4;
        if (local_180[4] != 'p') {
          uVar30 = 5;
        }
        goto LAB_00901a70;
      case (char *)0xa:
        if (*local_180 == 'h') {
          cVar1 = local_180[1];
          bVar31 = cVar1 == 'a';
          if (bVar31) {
            cVar1 = local_180[2];
          }
          if (bVar31 && cVar1 == 's') {
            cVar1 = local_180[3];
            bVar31 = cVar1 == 'h';
            if (bVar31) {
              cVar1 = local_180[4];
            }
            if (bVar31 && cVar1 == '_') {
              cVar1 = local_180[5];
              bVar31 = cVar1 == 'c';
              if (bVar31) {
                cVar1 = local_180[6];
              }
              if (bVar31 && cVar1 == 'h') {
                cVar1 = local_180[7];
                bVar31 = cVar1 == 'a';
                if (bVar31) {
                  cVar1 = local_180[8];
                }
                if ((bVar31 && cVar1 == 'i') && (uVar30 = 1, local_180[9] == 'n'))
                goto LAB_00901a70;
              }
            }
          }
        }
        break;
      case (char *)0xb:
        cVar1 = *local_180;
        bVar31 = cVar1 == 'f';
        if (bVar31) {
          cVar1 = local_180[1];
        }
        if (bVar31 && cVar1 == 'a') {
          cVar1 = local_180[2];
          bVar31 = cVar1 == 'n';
          if (bVar31) {
            cVar1 = local_180[3];
          }
          if (bVar31 && cVar1 == '_') {
            cVar1 = local_180[4];
            bVar31 = cVar1 == 'c';
            if (bVar31) {
              cVar1 = local_180[5];
            }
            if (bVar31 && cVar1 == 'o') {
              cVar1 = local_180[6];
              bVar31 = cVar1 == 'n';
              if (bVar31) {
                cVar1 = local_180[7];
              }
              if (bVar31 && cVar1 == 't') {
                cVar1 = local_180[8];
                bVar31 = cVar1 == 'r';
                if (bVar31) {
                  cVar1 = local_180[9];
                }
                if (bVar31 && cVar1 == 'o') {
                  cVar1 = local_180[10];
                  uVar30 = 3;
joined_r0x00901d3c:
                  if (cVar1 == 'l') goto LAB_00901a70;
                }
              }
            }
          }
        }
        break;
      case (char *)0xc:
        if (*local_180 == 't') {
          cVar1 = local_180[1];
          bVar31 = cVar1 == 'e';
          if (bVar31) {
            cVar1 = local_180[2];
          }
          if (bVar31 && cVar1 == 'm') {
            cVar1 = local_180[3];
            bVar31 = cVar1 == 'p';
            if (bVar31) {
              cVar1 = local_180[4];
            }
            if (bVar31 && cVar1 == '_') {
              cVar1 = local_180[5];
              bVar31 = cVar1 == 'c';
              if (bVar31) {
                cVar1 = local_180[6];
              }
              if (bVar31 && cVar1 == 'o') {
                cVar1 = local_180[7];
                bVar31 = cVar1 == 'n';
                if (bVar31) {
                  cVar1 = local_180[8];
                }
                if (bVar31 && cVar1 == 't') {
                  cVar1 = local_180[9];
                  bVar31 = cVar1 == 'r';
                  if (bVar31) {
                    cVar1 = local_180[10];
                  }
                  if (bVar31 && cVar1 == 'o') {
                    cVar1 = local_180[0xb];
                    uVar30 = 2;
                    goto joined_r0x00901d3c;
                  }
                }
              }
            }
          }
        }
        break;
      case (char *)0x11:
        cVar1 = *local_180;
        bVar31 = cVar1 == 'h';
        if (bVar31) {
          cVar1 = local_180[1];
        }
        bVar32 = bVar31 && cVar1 == 'a';
        if (bVar31 && cVar1 == 'a') {
          bVar32 = local_180[2] == 's';
        }
        if ((bVar32) && (local_180[3] == 'h')) {
          cVar1 = local_180[4];
          bVar31 = cVar1 == '_';
          if (bVar31) {
            cVar1 = local_180[5];
          }
          if (bVar31 && cVar1 == 'c') {
            cVar1 = local_180[6];
            bVar31 = cVar1 == 'h';
            if (bVar31) {
              cVar1 = local_180[7];
            }
            if (bVar31 && cVar1 == 'a') {
              cVar1 = local_180[8];
              bVar31 = cVar1 == 'i';
              if (bVar31) {
                cVar1 = local_180[9];
              }
              if (bVar31 && cVar1 == 'n') {
                cVar1 = local_180[10];
                bVar31 = cVar1 == '_';
                if (bVar31) {
                  cVar1 = local_180[0xb];
                }
                if (bVar31 && cVar1 == 'g') {
                  cVar1 = local_180[0xc];
                  bVar31 = cVar1 == 'l';
                  if (bVar31) {
                    cVar1 = local_180[0xd];
                  }
                  if (bVar31 && cVar1 == 'o') {
                    cVar1 = local_180[0xe];
                    bVar31 = cVar1 == 'b';
                    if (bVar31) {
                      cVar1 = local_180[0xf];
                    }
                    if (bVar31 && cVar1 == 'a') {
                      cVar1 = local_180[0x10];
                      uVar30 = 0;
                      goto joined_r0x00901d3c;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar30 = 5;
LAB_00901a70:
      local_80 = &SUB_00000002;
      local_7c = (char *)CONCAT31(local_7c._1_3_,uVar30);
      if (local_184 != (char *)0x0) {
        thunk_FUN_016d3fb4(local_180);
      }
      goto LAB_0090160c;
    case 0xf:
      switch(local_180) {
      case (char *)0x5:
        cVar1 = *local_184;
        bVar31 = cVar1 == 'g';
        if (bVar31) {
          cVar1 = local_184[1];
        }
        if (bVar31 && cVar1 == 'r') {
          cVar1 = local_184[2];
          bVar31 = cVar1 == 'o';
          if (bVar31) {
            cVar1 = local_184[3];
          }
          if (bVar31 && cVar1 == 'u') {
            uVar30 = 4;
            if (local_184[4] != 'p') {
              uVar30 = 5;
            }
            goto LAB_009015e4;
          }
        }
        break;
      case (char *)0xa:
        if (*local_184 == 'h') {
          cVar1 = local_184[1];
          bVar31 = cVar1 == 'a';
          if (bVar31) {
            cVar1 = local_184[2];
          }
          if (bVar31 && cVar1 == 's') {
            cVar1 = local_184[3];
            bVar31 = cVar1 == 'h';
            if (bVar31) {
              cVar1 = local_184[4];
            }
            if (bVar31 && cVar1 == '_') {
              cVar1 = local_184[5];
              bVar31 = cVar1 == 'c';
              if (bVar31) {
                cVar1 = local_184[6];
              }
              if (bVar31 && cVar1 == 'h') {
                cVar1 = local_184[7];
                bVar31 = cVar1 == 'a';
                if (bVar31) {
                  cVar1 = local_184[8];
                }
                if ((bVar31 && cVar1 == 'i') && (uVar30 = 1, local_184[9] == 'n'))
                goto LAB_009015e4;
              }
            }
          }
        }
        break;
      case (char *)0xb:
        cVar1 = *local_184;
        bVar31 = cVar1 == 'f';
        if (bVar31) {
          cVar1 = local_184[1];
        }
        if (bVar31 && cVar1 == 'a') {
          cVar1 = local_184[2];
          bVar31 = cVar1 == 'n';
          if (bVar31) {
            cVar1 = local_184[3];
          }
          if (bVar31 && cVar1 == '_') {
            cVar1 = local_184[4];
            bVar31 = cVar1 == 'c';
            if (bVar31) {
              cVar1 = local_184[5];
            }
            if (bVar31 && cVar1 == 'o') {
              cVar1 = local_184[6];
              bVar31 = cVar1 == 'n';
              if (bVar31) {
                cVar1 = local_184[7];
              }
              if (bVar31 && cVar1 == 't') {
                cVar1 = local_184[8];
                bVar31 = cVar1 == 'r';
                if (bVar31) {
                  cVar1 = local_184[9];
                }
                if (bVar31 && cVar1 == 'o') {
                  cVar1 = local_184[10];
                  uVar30 = 3;
joined_r0x00901ca4:
                  if (cVar1 == 'l') goto LAB_009015e4;
                }
              }
            }
          }
        }
        break;
      case (char *)0xc:
        if (*local_184 == 't') {
          cVar1 = local_184[1];
          bVar31 = cVar1 == 'e';
          if (bVar31) {
            cVar1 = local_184[2];
          }
          if (bVar31 && cVar1 == 'm') {
            cVar1 = local_184[3];
            bVar31 = cVar1 == 'p';
            if (bVar31) {
              cVar1 = local_184[4];
            }
            if (bVar31 && cVar1 == '_') {
              cVar1 = local_184[5];
              bVar31 = cVar1 == 'c';
              if (bVar31) {
                cVar1 = local_184[6];
              }
              if (bVar31 && cVar1 == 'o') {
                cVar1 = local_184[7];
                bVar31 = cVar1 == 'n';
                if (bVar31) {
                  cVar1 = local_184[8];
                }
                if (bVar31 && cVar1 == 't') {
                  cVar1 = local_184[9];
                  bVar31 = cVar1 == 'r';
                  if (bVar31) {
                    cVar1 = local_184[10];
                  }
                  if (bVar31 && cVar1 == 'o') {
                    cVar1 = local_184[0xb];
                    uVar30 = 2;
                    goto joined_r0x00901ca4;
                  }
                }
              }
            }
          }
        }
        break;
      case (char *)0x11:
        cVar1 = *local_184;
        bVar31 = cVar1 == 'h';
        if (bVar31) {
          cVar1 = local_184[1];
        }
        bVar32 = bVar31 && cVar1 == 'a';
        if (bVar31 && cVar1 == 'a') {
          bVar32 = local_184[2] == 's';
        }
        if ((bVar32) && (local_184[3] == 'h')) {
          cVar1 = local_184[4];
          bVar31 = cVar1 == '_';
          if (bVar31) {
            cVar1 = local_184[5];
          }
          if (bVar31 && cVar1 == 'c') {
            cVar1 = local_184[6];
            bVar31 = cVar1 == 'h';
            if (bVar31) {
              cVar1 = local_184[7];
            }
            if (bVar31 && cVar1 == 'a') {
              cVar1 = local_184[8];
              bVar31 = cVar1 == 'i';
              if (bVar31) {
                cVar1 = local_184[9];
              }
              if (bVar31 && cVar1 == 'n') {
                cVar1 = local_184[10];
                bVar31 = cVar1 == '_';
                if (bVar31) {
                  cVar1 = local_184[0xb];
                }
                if (bVar31 && cVar1 == 'g') {
                  cVar1 = local_184[0xc];
                  bVar31 = cVar1 == 'l';
                  if (bVar31) {
                    cVar1 = local_184[0xd];
                  }
                  if (bVar31 && cVar1 == 'o') {
                    cVar1 = local_184[0xe];
                    bVar31 = cVar1 == 'b';
                    if (bVar31) {
                      cVar1 = local_184[0xf];
                    }
                    if (bVar31 && cVar1 == 'a') {
                      cVar1 = local_184[0x10];
                      uVar30 = 0;
                      goto joined_r0x00901ca4;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar30 = 5;
LAB_009015e4:
      local_7c = (char *)CONCAT31(local_7c._1_3_,uVar30);
      local_80 = &SUB_00000002;
    }
    FUN_008f7448(&local_188);
LAB_009015fc:
    pcVar26 = local_80;
    uVar30 = (undefined1)local_7c;
    if (local_80 != &SUB_00000002) {
      FUN_016dd1aa((int)param_1 + 0xd,(int)&local_7c + 1,0x2b);
      *(undefined1 *)(param_1 + 3) = uVar30;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = pcVar26;
      goto LAB_00902254;
    }
LAB_0090160c:
    puVar17 = local_8c;
    pcVar26 = local_208;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((undefined1)local_7c) {
    case 0:
      if (!(pcVar22 == &DAT_00000004 && pcVar28 == (char *)0x0)) {
        FUN_009244cc(&local_80,"hash_chain_global",0x11);
LAB_00902338:
        param_1[2] = local_80;
        param_1[3] = local_7c;
        param_1[4] = local_78;
        param_1[5] = local_74;
        param_1[6] = local_70;
        param_1[7] = local_6c;
        pcVar26 = local_68;
        pcVar22 = local_64;
        pcVar28 = local_60;
        pcVar19 = local_5c;
        pcVar29 = local_58;
        pcVar25 = pcStack_54;
        goto LAB_00902244;
      }
      local_208 = (char *)0x80000015;
      if (pcVar26 == (char *)0x80000015) {
        FUN_00926fa4(&local_78,&DAT_00565810,0x10);
      }
      else {
        local_c0 = pcVar26;
        iVar18 = piVar15[1];
        iVar20 = piVar15[2];
        *piVar11 = *piVar15;
        piVar11[1] = iVar18;
        piVar11[2] = iVar20;
        FUN_00940af4(&local_80,&local_c0);
        pcVar22 = local_80;
        pcVar28 = local_7c;
        local_230 = uStack_44;
        local_22c = local_48;
        pcVar26 = local_1e8[0];
        iVar18 = local_1d8;
        iVar20 = local_1d4;
        iVar2 = local_1d0;
        local_1c8 = local_78;
        pcStack_1c4 = local_74;
        pcStack_1c0 = local_70;
        pcStack_1bc = local_6c;
        pcStack_1b8 = local_68;
        pcStack_1b4 = local_64;
        local_1b0 = local_60;
        pcStack_1ac = local_5c;
        pcStack_1a8 = local_58;
        pcStack_1a4 = pcStack_54;
        pcStack_1a0 = pcStack_50;
        pcStack_19c = pcStack_4c;
        local_188 = local_78;
        local_184 = local_74;
        local_180 = local_70;
        local_17c = local_6c;
        local_178 = local_68;
        pcStack_174 = local_64;
        local_170 = local_60;
        local_16c = local_5c;
        local_168 = local_58;
        pcStack_164 = pcStack_54;
        pcStack_160 = pcStack_50;
        pcStack_15c = pcStack_4c;
        pcVar19 = local_140;
        pcVar29 = pcStack_13c;
        pcVar25 = pcStack_138;
        pcVar24 = pcStack_134;
        pcVar23 = pcStack_130;
        pcVar3 = local_12c;
        pcVar4 = local_128;
        pcVar5 = pcStack_124;
        pcVar6 = pcStack_120;
        pcVar7 = pcStack_11c;
        pcVar8 = local_118;
        pcVar9 = pcStack_114;
        if (local_80 != &DAT_00000004 || local_7c != (char *)0x0) goto joined_r0x009018f4;
      }
      local_188 = local_78;
      local_184 = local_74;
      local_180 = local_70;
      local_17c = local_6c;
      local_178 = local_68;
      pcStack_174 = local_64;
      local_170 = local_60;
      local_16c = local_5c;
      local_168 = local_58;
      pcStack_164 = pcStack_54;
      pcStack_160 = pcStack_50;
      pcStack_15c = pcStack_4c;
      param_1[2] = local_78;
      param_1[3] = local_74;
      param_1[4] = local_70;
      param_1[5] = local_6c;
      param_1[6] = local_68;
      param_1[7] = local_64;
      param_1[8] = local_60;
      param_1[9] = local_5c;
      param_1[10] = local_58;
      param_1[0xb] = pcStack_54;
      param_1[0xc] = pcStack_50;
      param_1[0xd] = pcStack_4c;
      *param_1 = 3;
      param_1[1] = 0;
      break;
    case 1:
      if (local_1e8[0] != &SUB_00000002) {
        FUN_009244cc(&local_80,"hash_chain",10);
        goto LAB_00902338;
      }
      local_208 = (char *)0x80000015;
      if (pcVar26 == (char *)0x80000015) {
        local_70 = (char *)thunk_FUN_016d4a50(0x10);
        if (local_70 == (char *)0x0) goto LAB_00902350;
        builtin_strncpy(local_70,"value is missing",0x10);
        local_74 = &DAT_00000010;
        local_5c = &DAT_80000000;
        local_80 = (char *)0x0;
        local_60 = (char *)0x0;
        local_64 = &DAT_00000004;
        local_68 = (char *)0x0;
        local_6c = &DAT_00000010;
      }
      else {
        local_188 = pcVar26;
        pcVar26 = (char *)piVar15[1];
        pcVar19 = (char *)piVar15[2];
        *ppcVar13 = (char *)*piVar15;
        ppcVar13[1] = pcVar26;
        ppcVar13[2] = pcVar19;
        FUN_00940c70(&local_80,&local_188);
        pcVar26 = local_7c;
        iVar18 = local_1d8;
        iVar20 = local_1d4;
        iVar2 = local_1d0;
        local_198 = local_7c;
        pcStack_190 = local_74;
        local_18c = local_70;
        pcVar19 = local_140;
        pcVar29 = pcStack_13c;
        pcVar25 = pcStack_138;
        pcVar24 = pcStack_134;
        pcVar23 = pcStack_130;
        pcVar3 = local_12c;
        pcVar4 = local_128;
        pcVar5 = pcStack_124;
        pcVar6 = pcStack_120;
        pcVar7 = pcStack_11c;
        pcVar8 = local_118;
        pcVar9 = pcStack_114;
        if (local_80 == &SUB_00000002) goto joined_r0x009018f4;
      }
      param_1[7] = local_6c;
      param_1[8] = local_68;
      param_1[9] = local_64;
      param_1[10] = local_60;
      param_1[0xb] = local_5c;
      param_1[0xc] = local_58;
      param_1[0xd] = pcStack_54;
      param_1[1] = 0;
      *param_1 = 3;
      param_1[2] = local_80;
      param_1[3] = local_7c;
      param_1[4] = local_78;
      param_1[5] = local_74;
      param_1[6] = local_70;
      local_198 = local_7c;
      pcStack_190 = local_74;
      local_18c = local_70;
      break;
    case 2:
      if (local_210 != (char *)0x3 || local_214 != (char *)0x0) {
        FUN_009244cc(&local_80,"temp_control",0xc);
        goto LAB_00902338;
      }
      local_208 = (char *)0x80000015;
      if (pcVar26 == (char *)0x80000015) {
        FUN_00926fa4(ppcVar21,&DAT_00565810,0x10);
        goto LAB_0090221c;
      }
      local_90 = pcVar26;
      iVar18 = piVar15[1];
      iVar20 = piVar15[2];
      *piVar14 = *piVar15;
      piVar14[1] = iVar18;
      piVar14[2] = iVar20;
      uVar16 = 0x15;
      if ((int)pcVar26 < 0) {
        uVar16 = (uint)pcVar26 ^ 0x80000000;
      }
      if (uVar16 == 0x10) {
LAB_009017b4:
        local_184 = (char *)0x0;
        local_188 = &SUB_00000002;
joined_r0x00901ab4:
        if (pcVar26 != (char *)0x80000011) {
          FUN_008f7448(&local_90);
        }
      }
      else {
        if (uVar16 == 0x11) {
          local_38 = *local_8c;
          local_34 = local_8c[1];
          local_30 = local_8c[2];
          uStack_2c = local_8c[3];
          FUN_0090bcd8(&local_80,&local_38);
          if (local_80 == &SUB_00000002 && local_7c == (char *)0x0) {
            local_180 = local_78;
            local_17c = local_74;
            local_178 = local_70;
            pcStack_174 = local_6c;
            local_170 = local_68;
            local_16c = local_64;
            local_168 = local_60;
            pcStack_164 = local_5c;
            pcStack_160 = local_58;
            pcStack_15c = pcStack_54;
            pcStack_158 = pcStack_50;
            pcStack_154 = pcStack_4c;
            local_184 = (char *)0x0;
            local_188 = (char *)0x3;
          }
          else {
            FUN_016dd1aa(&local_188,&local_80,0x48);
          }
          thunk_FUN_016d3fb4(puVar17);
          goto joined_r0x00901ab4;
        }
        if (uVar16 == 0x12) goto LAB_009017b4;
        FUN_0090bcd8(&local_80,&local_90);
        if (local_80 == &SUB_00000002 && local_7c == (char *)0x0) {
          local_180 = local_78;
          local_17c = local_74;
          local_178 = local_70;
          pcStack_174 = local_6c;
          local_170 = local_68;
          local_16c = local_64;
          local_168 = local_60;
          pcStack_164 = local_5c;
          pcStack_160 = local_58;
          pcStack_15c = pcStack_54;
          pcStack_158 = pcStack_50;
          pcStack_154 = pcStack_4c;
          local_184 = (char *)0x0;
          local_188 = (char *)0x3;
        }
        else {
          FUN_016dd1aa(&local_188,&local_80,0x48);
        }
      }
      local_214 = local_184;
      local_210 = local_188;
      pcVar26 = local_1e8[0];
      iVar18 = local_1d8;
      iVar20 = local_1d4;
      iVar2 = local_1d0;
      pcVar19 = local_180;
      pcVar29 = local_17c;
      pcVar25 = local_178;
      pcVar24 = pcStack_174;
      pcVar23 = local_170;
      pcVar3 = local_16c;
      pcVar4 = local_168;
      pcVar5 = pcStack_164;
      pcVar6 = pcStack_160;
      pcVar7 = pcStack_15c;
      pcVar8 = pcStack_158;
      pcVar9 = pcStack_154;
      local_110 = local_150;
      pcStack_10c = pcStack_14c;
      uStack_108 = uStack_148;
      uStack_104 = uStack_144;
      local_c0 = local_180;
      pcStack_bc = local_17c;
      pcStack_b8 = local_178;
      pcStack_b4 = pcStack_174;
      pcStack_b0 = local_170;
      pcStack_ac = local_16c;
      local_a8 = local_168;
      pcStack_a4 = pcStack_164;
      pcStack_a0 = pcStack_160;
      pcStack_9c = pcStack_15c;
      pcStack_98 = pcStack_158;
      pcStack_94 = pcStack_154;
      if (!(local_188 != (char *)0x3 || local_184 != (char *)0x0)) goto LAB_0090221c;
joined_r0x009018f4:
      pcStack_114 = pcVar9;
      local_118 = pcVar8;
      pcStack_11c = pcVar7;
      pcStack_120 = pcVar6;
      pcStack_124 = pcVar5;
      local_128 = pcVar4;
      local_12c = pcVar3;
      pcStack_130 = pcVar23;
      pcStack_134 = pcVar24;
      pcStack_138 = pcVar25;
      pcStack_13c = pcVar29;
      local_140 = pcVar19;
      local_1d0 = iVar2;
      local_1d4 = iVar20;
      local_1d8 = iVar18;
      local_1e8[0] = pcVar26;
      if (param_2 == iVar27) goto LAB_00901d64;
      goto LAB_0090109c;
    case 3:
      if (local_20c != (char *)0x3) {
        FUN_009244cc(&local_80,"fan_control",0xb);
        goto LAB_00902338;
      }
      local_208 = (char *)0x80000015;
      if (pcVar26 == (char *)0x80000015) {
        FUN_00926fa4(ppcVar13,&DAT_00565810,0x10);
      }
      else {
        local_90 = pcVar26;
        iVar18 = piVar15[1];
        iVar20 = piVar15[2];
        *piVar14 = *piVar15;
        piVar14[1] = iVar18;
        piVar14[2] = iVar20;
        uVar16 = 0x15;
        if ((int)pcVar26 < 0) {
          uVar16 = (uint)pcVar26 ^ 0x80000000;
        }
        if (uVar16 == 0x10) {
LAB_0090182c:
          local_188 = &SUB_00000002;
joined_r0x00901af4:
          if (pcVar26 != (char *)0x80000011) {
            FUN_008f7448(&local_90);
          }
        }
        else {
          if (uVar16 == 0x11) {
            local_38 = *local_8c;
            local_34 = local_8c[1];
            local_30 = local_8c[2];
            uStack_2c = local_8c[3];
            FUN_00909dac(&local_80,&local_38);
            if (local_80 == &SUB_00000002) {
              pcVar19 = (char *)piVar10[1];
              pcVar29 = (char *)piVar10[2];
              pcVar25 = (char *)piVar10[3];
              pcVar24 = (char *)piVar10[4];
              pcVar23 = (char *)piVar10[5];
              *ppcVar13 = (char *)*piVar10;
              ppcVar13[1] = pcVar19;
              ppcVar13[2] = pcVar29;
              ppcVar13[3] = pcVar25;
              ppcVar13[4] = pcVar24;
              ppcVar13[5] = pcVar23;
              pcVar19 = (char *)piVar10[7];
              pcVar29 = (char *)piVar10[8];
              pcVar25 = (char *)piVar10[9];
              pcVar24 = (char *)piVar10[10];
              pcVar23 = (char *)piVar10[0xb];
              ppcVar13[6] = (char *)piVar10[6];
              ppcVar13[7] = pcVar19;
              ppcVar13[8] = pcVar29;
              ppcVar13[9] = pcVar25;
              ppcVar13[10] = pcVar24;
              ppcVar13[0xb] = pcVar23;
              local_188 = (char *)0x3;
            }
            else {
              local_188 = local_80;
              local_184 = local_7c;
              local_180 = local_78;
              local_17c = local_74;
              local_178 = local_70;
              pcStack_174 = local_6c;
              local_170 = local_68;
              local_16c = local_64;
              local_168 = local_60;
              pcStack_164 = local_5c;
              pcStack_160 = local_58;
              pcStack_15c = pcStack_54;
              pcStack_158 = pcStack_50;
            }
            thunk_FUN_016d3fb4(puVar17);
            goto joined_r0x00901af4;
          }
          if (uVar16 == 0x12) goto LAB_0090182c;
          FUN_00909dac(&local_80,&local_90);
          if (local_80 == &SUB_00000002) {
            pcVar26 = (char *)piVar10[1];
            pcVar19 = (char *)piVar10[2];
            pcVar29 = (char *)piVar10[3];
            pcVar25 = (char *)piVar10[4];
            pcVar24 = (char *)piVar10[5];
            *ppcVar13 = (char *)*piVar10;
            ppcVar13[1] = pcVar26;
            ppcVar13[2] = pcVar19;
            ppcVar13[3] = pcVar29;
            ppcVar13[4] = pcVar25;
            ppcVar13[5] = pcVar24;
            pcVar26 = (char *)piVar10[7];
            pcVar19 = (char *)piVar10[8];
            pcVar29 = (char *)piVar10[9];
            pcVar25 = (char *)piVar10[10];
            pcVar24 = (char *)piVar10[0xb];
            ppcVar13[6] = (char *)piVar10[6];
            ppcVar13[7] = pcVar26;
            ppcVar13[8] = pcVar19;
            ppcVar13[9] = pcVar29;
            ppcVar13[10] = pcVar25;
            ppcVar13[0xb] = pcVar24;
            local_188 = (char *)0x3;
          }
          else {
            local_188 = local_80;
            local_184 = local_7c;
            local_180 = local_78;
            local_17c = local_74;
            local_178 = local_70;
            pcStack_174 = local_6c;
            local_170 = local_68;
            local_16c = local_64;
            local_168 = local_60;
            pcStack_164 = local_5c;
            pcStack_160 = local_58;
            pcStack_15c = pcStack_54;
            pcStack_158 = pcStack_50;
          }
        }
        if (local_188 != (char *)0x3) {
          local_100 = *ppcVar13;
          pcStack_fc = ppcVar13[1];
          pcStack_f8 = ppcVar13[2];
          pcStack_f4 = ppcVar13[3];
          pcStack_f0 = ppcVar13[4];
          pcStack_ec = ppcVar13[5];
          local_e8 = ppcVar13[6];
          pcStack_e4 = ppcVar13[7];
          pcStack_e0 = ppcVar13[8];
          pcStack_dc = ppcVar13[9];
          pcStack_d8 = ppcVar13[10];
          pcStack_d4 = ppcVar13[0xb];
          local_20c = local_188;
          pcVar26 = local_1e8[0];
          iVar18 = local_1d8;
          iVar20 = local_1d4;
          iVar2 = local_1d0;
          pcVar19 = local_140;
          pcVar29 = pcStack_13c;
          pcVar25 = pcStack_138;
          pcVar24 = pcStack_134;
          pcVar23 = pcStack_130;
          pcVar3 = local_12c;
          pcVar4 = local_128;
          pcVar5 = pcStack_124;
          pcVar6 = pcStack_120;
          pcVar7 = pcStack_11c;
          pcVar8 = local_118;
          pcVar9 = pcStack_114;
          local_c0 = local_100;
          pcStack_bc = pcStack_fc;
          pcStack_b8 = pcStack_f8;
          pcStack_b4 = pcStack_f4;
          pcStack_b0 = pcStack_f0;
          pcStack_ac = pcStack_ec;
          local_a8 = local_e8;
          pcStack_a4 = pcStack_e4;
          pcStack_a0 = pcStack_e0;
          pcStack_9c = pcStack_dc;
          pcStack_98 = pcStack_d8;
          pcStack_94 = pcStack_d4;
          goto joined_r0x009018f4;
        }
      }
      ppcVar21 = ppcVar13;
LAB_0090221c:
      local_c0 = *ppcVar21;
      pcStack_bc = ppcVar21[1];
      pcStack_b8 = ppcVar21[2];
      pcStack_b4 = ppcVar21[3];
      pcStack_b0 = ppcVar21[4];
      pcStack_ac = ppcVar21[5];
      pcVar26 = ppcVar21[6];
      pcVar22 = ppcVar21[7];
      pcVar28 = ppcVar21[8];
      pcVar19 = ppcVar21[9];
      pcVar29 = ppcVar21[10];
      pcVar25 = ppcVar21[0xb];
      param_1[2] = local_c0;
      param_1[3] = pcStack_bc;
      param_1[4] = pcStack_b8;
      param_1[5] = pcStack_b4;
      param_1[6] = pcStack_b0;
      param_1[7] = pcStack_ac;
      local_a8 = pcVar26;
      pcStack_a4 = pcVar22;
      pcStack_a0 = pcVar28;
      pcStack_9c = pcVar19;
      pcStack_98 = pcVar29;
      pcStack_94 = pcVar25;
LAB_00902244:
      param_1[8] = pcVar26;
      param_1[9] = pcVar22;
      param_1[10] = pcVar28;
      param_1[0xb] = pcVar19;
      param_1[0xc] = pcVar29;
      param_1[0xd] = pcVar25;
      *param_1 = 3;
      param_1[1] = 0;
      break;
    case 4:
      if (local_1d8 != -0x7fffffff) {
        FUN_009244cc(&local_80,&DAT_00377f5d,5);
        goto LAB_00902338;
      }
      local_208 = (char *)0x80000015;
      if (pcVar26 == (char *)0x80000015) {
        local_70 = (char *)thunk_FUN_016d4a50(0x10);
        if (local_70 == (char *)0x0) goto LAB_00902350;
        builtin_strncpy(local_70 + 0xc,"sing",4);
        local_d0 = *piVar10;
        iStack_cc = piVar10[1];
        builtin_strncpy(local_70,"value is mis",0xc);
        local_74 = &DAT_00000010;
        local_5c = &DAT_80000000;
        iStack_c8 = piVar10[2];
        local_80 = (char *)0x0;
        local_60 = (char *)0x0;
        local_64 = &DAT_00000004;
        local_68 = (char *)0x0;
        local_6c = &DAT_00000010;
      }
      else {
        local_188 = pcVar26;
        pcVar26 = (char *)piVar15[1];
        pcVar19 = (char *)piVar15[2];
        *ppcVar13 = (char *)*piVar15;
        ppcVar13[1] = pcVar26;
        ppcVar13[2] = pcVar19;
        FUN_009458b8(&local_80,&local_188);
        local_d0 = *piVar10;
        iStack_cc = piVar10[1];
        iStack_c8 = piVar10[2];
        pcVar26 = local_1e8[0];
        iVar18 = local_d0;
        iVar20 = iStack_cc;
        iVar2 = iStack_c8;
        pcVar19 = local_140;
        pcVar29 = pcStack_13c;
        pcVar25 = pcStack_138;
        pcVar24 = pcStack_134;
        pcVar23 = pcStack_130;
        pcVar3 = local_12c;
        pcVar4 = local_128;
        pcVar5 = pcStack_124;
        pcVar6 = pcStack_120;
        pcVar7 = pcStack_11c;
        pcVar8 = local_118;
        pcVar9 = pcStack_114;
        if (local_80 == &SUB_00000002) goto joined_r0x009018f4;
      }
      param_1[6] = local_70;
      param_1[7] = local_6c;
      param_1[8] = local_68;
      param_1[9] = local_64;
      param_1[10] = local_60;
      param_1[0xb] = local_5c;
      param_1[0xc] = local_58;
      param_1[0xd] = pcStack_54;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_80;
      param_1[3] = local_d0;
      param_1[4] = iStack_cc;
      param_1[5] = iStack_c8;
      break;
    case 5:
      local_208 = (char *)0x80000015;
      if (pcVar26 != (char *)0x80000015) {
        local_80 = pcVar26;
        iVar18 = piVar15[1];
        iVar20 = piVar15[2];
        *piVar10 = *piVar15;
        piVar10[1] = iVar18;
        piVar10[2] = iVar20;
        FUN_008f7448(&local_80);
        pcVar26 = local_1e8[0];
        iVar18 = local_1d8;
        iVar20 = local_1d4;
        iVar2 = local_1d0;
        pcVar19 = local_140;
        pcVar29 = pcStack_13c;
        pcVar25 = pcStack_138;
        pcVar24 = pcStack_134;
        pcVar23 = pcStack_130;
        pcVar3 = local_12c;
        pcVar4 = local_128;
        pcVar5 = pcStack_124;
        pcVar6 = pcStack_120;
        pcVar7 = pcStack_11c;
        pcVar8 = local_118;
        pcVar9 = pcStack_114;
        goto joined_r0x009018f4;
      }
      puVar17 = (undefined4 *)thunk_FUN_016d4a50(0x10);
      if (puVar17 == (undefined4 *)0x0) {
LAB_00902350:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x10);
      }
      *param_1 = 3;
      param_1[1] = 0;
      puVar17[3] = 0x676e6973;
      param_1[5] = 0x10;
      puVar17[2] = 0x73696d20;
      param_1[6] = puVar17;
      puVar17[1] = 0x73692065;
      param_1[7] = 0x10;
      *puVar17 = 0x756c6176;
      param_1[8] = 0;
      param_1[9] = 4;
      param_1[10] = 0;
      param_1[0xb] = 0x80000000;
      param_1[2] = 0;
    }
LAB_00902254:
    iVar18 = local_1d4;
    iVar27 = local_1d8;
    if ((-0x7fffffff < local_1d8) && (FUN_0094abc0(local_1d4,local_1d0), iVar27 != 0)) {
      thunk_FUN_016d3fb4(iVar18);
    }
    if (((uint)local_1e8[0] & 1) != 0) {
      FUN_0093a2b4(puVar12);
    }
    goto joined_r0x0090229c;
  }
  pcVar29 = (char *)0x0;
  local_210 = (char *)0x0;
  pcVar22 = (char *)0x3;
  pcVar28 = (char *)0x0;
  local_20c = &SUB_00000002;
  local_1f8 = param_2;
LAB_00901e64:
  *param_1 = pcVar26;
  param_1[1] = pcVar29;
  iVar27 = local_1d8;
  if (local_1d8 == -0x7fffffff) {
    iVar27 = -0x80000000;
  }
  param_1[2] = local_80;
  param_1[3] = local_7c;
  param_1[4] = local_78;
  param_1[5] = local_74;
  param_1[6] = local_70;
  param_1[7] = local_6c;
  param_1[8] = local_68;
  param_1[9] = local_64;
  param_1[10] = local_60;
  param_1[0xb] = local_5c;
  param_1[0xc] = local_58;
  param_1[0xd] = pcStack_54;
  param_1[0xe] = pcStack_50;
  param_1[0xf] = pcStack_4c;
  param_1[0x10] = local_48;
  param_1[0x11] = uStack_44;
  param_1[0x12] = pcVar22;
  param_1[0x13] = pcVar28;
  param_1[0x14] = local_c0;
  param_1[0x15] = pcStack_bc;
  param_1[0x16] = pcStack_b8;
  param_1[0x17] = pcStack_b4;
  param_1[0x18] = pcStack_b0;
  param_1[0x19] = pcStack_ac;
  param_1[0x1a] = local_a8;
  param_1[0x1b] = pcStack_a4;
  param_1[0x1c] = pcStack_a0;
  param_1[0x1d] = pcStack_9c;
  param_1[0x1e] = pcStack_98;
  param_1[0x1f] = pcStack_94;
  param_1[0x24] = local_34;
  param_1[0x20] = local_22c;
  param_1[0x26] = local_20c;
  param_1[0x21] = local_230;
  param_1[0x22] = local_210;
  param_1[0x23] = local_38;
  param_1[0x25] = local_30;
  param_1[0x27] = local_188;
  param_1[0x28] = local_184;
  param_1[0x29] = local_180;
  param_1[0x2a] = local_17c;
  param_1[0x2b] = local_178;
  param_1[0x2c] = pcStack_174;
  param_1[0x2d] = local_170;
  param_1[0x2e] = local_16c;
  param_1[0x2f] = local_168;
  param_1[0x30] = pcStack_164;
  param_1[0x31] = pcStack_160;
  param_1[0x32] = pcStack_15c;
  param_1[0x34] = local_1d4;
  param_1[0x35] = local_1d0;
  param_1[0x33] = iVar27;
joined_r0x0090229c:
  if (local_208 == (char *)0x80000015) {
    return;
  }
  FUN_008f7448(&local_208);
  return;
LAB_00901d64:
  if (pcVar22 == &DAT_00000004 && pcVar28 == (char *)0x0) {
    pcVar22 = (char *)0x3;
    pcVar28 = (char *)0x0;
  }
  else {
    local_c0 = local_1c8;
    pcStack_bc = pcStack_1c4;
    pcStack_b8 = pcStack_1c0;
    pcStack_b4 = pcStack_1bc;
    pcStack_b0 = pcStack_1b8;
    pcStack_ac = pcStack_1b4;
    local_a8 = local_1b0;
    pcStack_a4 = pcStack_1ac;
    pcStack_a0 = pcStack_1a8;
    pcStack_9c = pcStack_1a4;
    pcStack_98 = pcStack_1a0;
    pcStack_94 = pcStack_19c;
  }
  pcVar19 = (char *)0x0;
  if (local_1e8[0] != &SUB_00000002) {
    local_38 = *puVar12;
    local_34 = puVar12[1];
    local_30 = puVar12[2];
    pcVar19 = local_1e8[0];
  }
  pcVar26 = &SUB_00000002;
  pcVar29 = (char *)0x0;
  if (local_210 != (char *)0x3 || local_214 != (char *)0x0) {
    local_80 = local_140;
    local_7c = pcStack_13c;
    local_78 = pcStack_138;
    local_74 = pcStack_134;
    local_70 = pcStack_130;
    local_6c = local_12c;
    local_68 = local_128;
    local_64 = pcStack_124;
    local_60 = pcStack_120;
    local_5c = pcStack_11c;
    local_58 = local_118;
    pcStack_54 = pcStack_114;
    pcStack_50 = local_110;
    pcStack_4c = pcStack_10c;
    local_48 = uStack_108;
    uStack_44 = uStack_104;
    pcVar26 = local_210;
    pcVar29 = local_214;
  }
  if (local_20c == (char *)0x3) {
    local_20c = &SUB_00000002;
  }
  else {
    local_188 = local_100;
    local_184 = pcStack_fc;
    local_180 = pcStack_f8;
    local_17c = pcStack_f4;
    local_178 = pcStack_f0;
    pcStack_174 = pcStack_ec;
    local_170 = local_e8;
    local_16c = pcStack_e4;
    local_168 = pcStack_e0;
    pcStack_164 = pcStack_dc;
    pcStack_160 = pcStack_d8;
    pcStack_15c = pcStack_d4;
  }
  local_210 = pcVar19;
  goto LAB_00901e64;
}

