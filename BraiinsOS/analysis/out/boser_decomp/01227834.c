// FUN_01227834 @ 01227834 size=4068 calls_out=18 calls_in=2
// strings: temp_control | hash_chain_global | hash_chain | fan_control

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01227834(undefined4 *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char **ppcVar8;
  uint uVar9;
  char **ppcVar10;
  undefined4 uVar11;
  char *pcVar12;
  char **ppcVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  undefined4 uVar17;
  char *pcVar18;
  char *pcVar19;
  undefined1 uVar20;
  char *pcVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  undefined4 local_260;
  undefined4 local_25c;
  char *local_21c;
  char *local_218;
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
  char *local_1e8;
  char *pcStack_1e4;
  char *pcStack_1e0;
  char *pcStack_1dc;
  char *pcStack_1d8;
  char *pcStack_1d4;
  char *local_1d0;
  char *pcStack_1cc;
  char *pcStack_1c8;
  char *pcStack_1c4;
  char *pcStack_1c0;
  char *pcStack_1bc;
  char *local_1b8 [4];
  char *local_1a8;
  char *pcStack_1a4;
  char *pcStack_1a0;
  char *pcStack_19c;
  char *pcStack_198;
  char *pcStack_194;
  char *local_190;
  char *pcStack_18c;
  char *pcStack_188;
  char *pcStack_184;
  char *pcStack_180;
  char *pcStack_17c;
  int local_178;
  char *local_174;
  undefined4 *local_170;
  char *local_168;
  char *local_158;
  char *local_154;
  char *local_150;
  char *pcStack_14c;
  char *local_148;
  char *pcStack_144;
  char *local_140;
  char *pcStack_13c;
  char *local_138;
  char *pcStack_134;
  char *pcStack_130;
  char *pcStack_12c;
  char *pcStack_128;
  char *pcStack_124;
  char *local_120;
  char *pcStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  char *local_110;
  char *pcStack_10c;
  char *pcStack_108;
  char *pcStack_104;
  char *pcStack_100;
  char *local_fc;
  char *local_f8;
  char *pcStack_f4;
  char *pcStack_f0;
  char *pcStack_ec;
  char *local_e8;
  char *pcStack_e4;
  char *local_e0;
  char *pcStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  char *pcStack_cc;
  undefined4 *puStack_c8;
  char *local_c0;
  char *local_bc;
  char *local_b8;
  char *local_b4;
  char *local_b0;
  char *pcStack_ac;
  char *local_a8;
  char *pcStack_a4;
  char *pcStack_a0;
  char *pcStack_9c;
  char *pcStack_98;
  char *pcStack_94;
  char *local_90;
  undefined4 local_8c;
  char *local_88;
  char *pcStack_84;
  char *local_80;
  char *local_7c;
  char *local_78;
  char *pcStack_74;
  char *local_70;
  char *pcStack_6c;
  char *local_68;
  char *pcStack_64;
  char *pcStack_60;
  char *pcStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  char *local_48;
  undefined4 *local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_1f0 = &DAT_01c24b0c;
  local_1b8[0] = (char *)0x2;
  local_178 = -0x7fffffff;
  puVar4 = (undefined4 *)((uint)&local_48 | 4);
  piVar5 = (int *)((uint)&local_90 | 4);
  puVar6 = (undefined4 *)((uint)&local_208 | 4);
  puVar7 = (undefined4 *)((uint)local_1b8 | 4);
  local_20c = &SUB_00000004;
  local_1f4 = param_2 + param_3 * 0x20;
  local_1ec = 5;
  local_208 = (char *)0x80000015;
  local_218 = &DAT_00000003;
  local_214 = &DAT_00000003;
  ppcVar13 = &local_150;
  ppcVar8 = (char **)((uint)&local_158 | 4);
  local_21c = (char *)0x0;
  local_210 = (char *)0x0;
  local_1f8 = param_2;
LAB_01227934:
  uVar11 = local_1ec;
  puVar1 = local_1f0;
  iVar22 = local_1f4;
  pcVar12 = local_214;
  iVar14 = local_1f8;
  if (local_1f8 == local_1f4) goto switchD_01227ee4_caseD_6;
  while( true ) {
    FUN_01962c44(&local_c0,iVar14,puVar1,uVar11);
    iVar14 = iVar14 + 0x20;
    if (local_c0 != (char *)0x80000015) break;
    if (iVar14 == iVar22) {
      local_1f8 = iVar14;
      goto switchD_01227ee4_caseD_6;
    }
  }
  local_1f8 = iVar14;
  if (local_208 != (char *)0x80000015) {
    FUN_0123b780(&local_208);
  }
  pcVar15 = local_b8;
  pcVar21 = local_bc;
  local_208 = local_b0;
  pcStack_204 = pcStack_ac;
  pcStack_200 = local_a8;
  pcStack_1fc = pcStack_a4;
  uVar9 = 0x15;
  if ((int)local_c0 < 0) {
    uVar9 = (uint)local_c0 ^ 0x80000000;
  }
  switch(uVar9) {
  case 1:
    local_90 = (char *)0x2;
    uVar20 = SUB41(local_bc,0);
    if (4 < ((uint)local_bc & 0xff)) {
      uVar20 = 5;
    }
    local_8c = (char *)CONCAT31(local_8c._1_3_,uVar20);
    break;
  default:
    FUN_012223f8(&local_90,&local_c0,&local_38,&DAT_01c246e4);
    goto LAB_01227ecc;
  case 4:
    pcVar21 = local_b8;
    if (local_b4 != (char *)0x0 || local_b4 < (char *)(uint)(&SUB_00000004 < local_b8)) {
      pcVar21 = &DAT_00000005;
    }
    uVar20 = SUB41(pcVar21,0);
    goto LAB_01227eb4;
  case 0xc:
    FUN_01232658(&local_90,local_b8);
    FUN_019bb7e0(pcVar21,pcVar15);
    goto LAB_01227ecc;
  case 0xd:
    FUN_01232658(&local_90,local_bc,local_b8);
    break;
  case 0xe:
    switch(local_b4) {
    case (char *)0xa:
      if (*local_b8 == 'h') {
        cVar3 = local_b8[1];
        bVar23 = cVar3 == 'a';
        if (bVar23) {
          cVar3 = local_b8[2];
        }
        if (bVar23 && cVar3 == 's') {
          cVar3 = local_b8[3];
          bVar23 = cVar3 == 'h';
          if (bVar23) {
            cVar3 = local_b8[4];
          }
          if (bVar23 && cVar3 == '_') {
            cVar3 = local_b8[5];
            bVar23 = cVar3 == 'c';
            if (bVar23) {
              cVar3 = local_b8[6];
            }
            if (bVar23 && cVar3 == 'h') {
              cVar3 = local_b8[7];
              bVar23 = cVar3 == 'a';
              if (bVar23) {
                cVar3 = local_b8[8];
              }
              if ((bVar23 && cVar3 == 'i') && (uVar20 = 1, local_b8[9] == 'n')) goto LAB_01228254;
            }
          }
        }
      }
      break;
    case (char *)0xb:
      cVar3 = *local_b8;
      bVar23 = cVar3 == 'f';
      if (bVar23) {
        cVar3 = local_b8[1];
      }
      if (bVar23 && cVar3 == 'a') {
        cVar3 = local_b8[2];
        bVar23 = cVar3 == 'n';
        if (bVar23) {
          cVar3 = local_b8[3];
        }
        if (bVar23 && cVar3 == '_') {
          cVar3 = local_b8[4];
          bVar23 = cVar3 == 'c';
          if (bVar23) {
            cVar3 = local_b8[5];
          }
          if (bVar23 && cVar3 == 'o') {
            cVar3 = local_b8[6];
            bVar23 = cVar3 == 'n';
            if (bVar23) {
              cVar3 = local_b8[7];
            }
            if (bVar23 && cVar3 == 't') {
              cVar3 = local_b8[8];
              bVar23 = cVar3 == 'r';
              if (bVar23) {
                cVar3 = local_b8[9];
              }
              if (bVar23 && cVar3 == 'o') {
                cVar3 = local_b8[10];
                uVar20 = 3;
LAB_01228474:
                if (cVar3 == 'l') goto LAB_01228254;
              }
            }
          }
        }
      }
      break;
    case (char *)0xc:
      if (*local_b8 == 't') {
        cVar3 = local_b8[1];
        bVar23 = cVar3 == 'e';
        if (bVar23) {
          cVar3 = local_b8[2];
        }
        if (bVar23 && cVar3 == 'm') {
          cVar3 = local_b8[3];
          bVar23 = cVar3 == 'p';
          if (bVar23) {
            cVar3 = local_b8[4];
          }
          if (bVar23 && cVar3 == '_') {
            cVar3 = local_b8[5];
            bVar23 = cVar3 == 'c';
            if (bVar23) {
              cVar3 = local_b8[6];
            }
            if (bVar23 && cVar3 == 'o') {
              cVar3 = local_b8[7];
              bVar23 = cVar3 == 'n';
              if (bVar23) {
                cVar3 = local_b8[8];
              }
              if (bVar23 && cVar3 == 't') {
                cVar3 = local_b8[9];
                bVar23 = cVar3 == 'r';
                if (bVar23) {
                  cVar3 = local_b8[10];
                }
                if (bVar23 && cVar3 == 'o') {
                  cVar3 = local_b8[0xb];
                  uVar20 = 2;
                  goto LAB_01228474;
                }
              }
            }
          }
        }
      }
      break;
    case (char *)0xd:
    case (char *)0xe:
    case (char *)0xf:
    case (char *)0x10:
      break;
    case (char *)0x11:
      cVar3 = *local_b8;
      bVar23 = cVar3 == 'h';
      if (bVar23) {
        cVar3 = local_b8[1];
      }
      bVar24 = bVar23 && cVar3 == 'a';
      if (bVar23 && cVar3 == 'a') {
        bVar24 = local_b8[2] == 's';
      }
      if ((bVar24) && (local_b8[3] == 'h')) {
        cVar3 = local_b8[4];
        bVar23 = cVar3 == '_';
        if (bVar23) {
          cVar3 = local_b8[5];
        }
        if (bVar23 && cVar3 == 'c') {
          cVar3 = local_b8[6];
          bVar23 = cVar3 == 'h';
          if (bVar23) {
            cVar3 = local_b8[7];
          }
          if (bVar23 && cVar3 == 'a') {
            cVar3 = local_b8[8];
            bVar23 = cVar3 == 'i';
            if (bVar23) {
              cVar3 = local_b8[9];
            }
            if (bVar23 && cVar3 == 'n') {
              cVar3 = local_b8[10];
              bVar23 = cVar3 == '_';
              if (bVar23) {
                cVar3 = local_b8[0xb];
              }
              if (bVar23 && cVar3 == 'g') {
                cVar3 = local_b8[0xc];
                bVar23 = cVar3 == 'l';
                if (bVar23) {
                  cVar3 = local_b8[0xd];
                }
                if (bVar23 && cVar3 == 'o') {
                  cVar3 = local_b8[0xe];
                  bVar23 = cVar3 == 'b';
                  if (bVar23) {
                    cVar3 = local_b8[0xf];
                  }
                  if (bVar23 && cVar3 == 'a') {
                    cVar3 = local_b8[0x10];
                    uVar20 = 0;
                    goto LAB_01228474;
                  }
                }
              }
            }
          }
        }
      }
      break;
    default:
      if (local_b4 != &DAT_00000005) break;
      cVar3 = *local_b8;
      bVar23 = cVar3 != 'g';
      if (!bVar23) {
        cVar3 = local_b8[1];
      }
      if (bVar23 || cVar3 != 'r') break;
      cVar3 = local_b8[2];
      bVar23 = cVar3 != 'o';
      if (!bVar23) {
        cVar3 = local_b8[3];
      }
      if (bVar23 || cVar3 != 'u') break;
      uVar20 = 4;
      if (local_b8[4] != 'p') {
        uVar20 = 5;
      }
      goto LAB_01228254;
    }
    uVar20 = 5;
LAB_01228254:
    local_8c = (char *)CONCAT31(local_8c._1_3_,uVar20);
    local_90 = (char *)0x2;
    FUN_019bb7e0(local_bc,local_b8);
    goto LAB_01227edc;
  case 0xf:
    switch(local_b8) {
    case (char *)0xa:
      if (*local_bc == 'h') {
        cVar3 = local_bc[1];
        bVar23 = cVar3 == 'a';
        if (bVar23) {
          cVar3 = local_bc[2];
        }
        if (bVar23 && cVar3 == 's') {
          cVar3 = local_bc[3];
          bVar23 = cVar3 == 'h';
          if (bVar23) {
            cVar3 = local_bc[4];
          }
          if (bVar23 && cVar3 == '_') {
            cVar3 = local_bc[5];
            bVar23 = cVar3 == 'c';
            if (bVar23) {
              cVar3 = local_bc[6];
            }
            if (bVar23 && cVar3 == 'h') {
              cVar3 = local_bc[7];
              bVar23 = cVar3 == 'a';
              if (bVar23) {
                cVar3 = local_bc[8];
              }
              if ((bVar23 && cVar3 == 'i') && (uVar20 = 1, local_bc[9] == 'n')) goto LAB_01227eb4;
            }
          }
        }
      }
      break;
    case (char *)0xb:
      cVar3 = *local_bc;
      bVar23 = cVar3 == 'f';
      if (bVar23) {
        cVar3 = local_bc[1];
      }
      if (bVar23 && cVar3 == 'a') {
        cVar3 = local_bc[2];
        bVar23 = cVar3 == 'n';
        if (bVar23) {
          cVar3 = local_bc[3];
        }
        if (bVar23 && cVar3 == '_') {
          cVar3 = local_bc[4];
          bVar23 = cVar3 == 'c';
          if (bVar23) {
            cVar3 = local_bc[5];
          }
          if (bVar23 && cVar3 == 'o') {
            cVar3 = local_bc[6];
            bVar23 = cVar3 == 'n';
            if (bVar23) {
              cVar3 = local_bc[7];
            }
            if (bVar23 && cVar3 == 't') {
              cVar3 = local_bc[8];
              bVar23 = cVar3 == 'r';
              if (bVar23) {
                cVar3 = local_bc[9];
              }
              if (bVar23 && cVar3 == 'o') {
                cVar3 = local_bc[10];
                uVar20 = 3;
LAB_01228410:
                if (cVar3 == 'l') goto LAB_01227eb4;
              }
            }
          }
        }
      }
      break;
    case (char *)0xc:
      if (*local_bc == 't') {
        cVar3 = local_bc[1];
        bVar23 = cVar3 == 'e';
        if (bVar23) {
          cVar3 = local_bc[2];
        }
        if (bVar23 && cVar3 == 'm') {
          cVar3 = local_bc[3];
          bVar23 = cVar3 == 'p';
          if (bVar23) {
            cVar3 = local_bc[4];
          }
          if (bVar23 && cVar3 == '_') {
            cVar3 = local_bc[5];
            bVar23 = cVar3 == 'c';
            if (bVar23) {
              cVar3 = local_bc[6];
            }
            if (bVar23 && cVar3 == 'o') {
              cVar3 = local_bc[7];
              bVar23 = cVar3 == 'n';
              if (bVar23) {
                cVar3 = local_bc[8];
              }
              if (bVar23 && cVar3 == 't') {
                cVar3 = local_bc[9];
                bVar23 = cVar3 == 'r';
                if (bVar23) {
                  cVar3 = local_bc[10];
                }
                if (bVar23 && cVar3 == 'o') {
                  cVar3 = local_bc[0xb];
                  uVar20 = 2;
                  goto LAB_01228410;
                }
              }
            }
          }
        }
      }
      break;
    case (char *)0xd:
    case (char *)0xe:
    case (char *)0xf:
    case (char *)0x10:
      break;
    case (char *)0x11:
      cVar3 = *local_bc;
      bVar23 = cVar3 == 'h';
      if (bVar23) {
        cVar3 = local_bc[1];
      }
      bVar24 = bVar23 && cVar3 == 'a';
      if (bVar23 && cVar3 == 'a') {
        bVar24 = local_bc[2] == 's';
      }
      if ((bVar24) && (local_bc[3] == 'h')) {
        cVar3 = local_bc[4];
        bVar23 = cVar3 == '_';
        if (bVar23) {
          cVar3 = local_bc[5];
        }
        if (bVar23 && cVar3 == 'c') {
          cVar3 = local_bc[6];
          bVar23 = cVar3 == 'h';
          if (bVar23) {
            cVar3 = local_bc[7];
          }
          if (bVar23 && cVar3 == 'a') {
            cVar3 = local_bc[8];
            bVar23 = cVar3 == 'i';
            if (bVar23) {
              cVar3 = local_bc[9];
            }
            if (bVar23 && cVar3 == 'n') {
              cVar3 = local_bc[10];
              bVar23 = cVar3 == '_';
              if (bVar23) {
                cVar3 = local_bc[0xb];
              }
              if (bVar23 && cVar3 == 'g') {
                cVar3 = local_bc[0xc];
                bVar23 = cVar3 == 'l';
                if (bVar23) {
                  cVar3 = local_bc[0xd];
                }
                if (bVar23 && cVar3 == 'o') {
                  cVar3 = local_bc[0xe];
                  bVar23 = cVar3 == 'b';
                  if (bVar23) {
                    cVar3 = local_bc[0xf];
                  }
                  if (bVar23 && cVar3 == 'a') {
                    cVar3 = local_bc[0x10];
                    uVar20 = 0;
                    goto LAB_01228410;
                  }
                }
              }
            }
          }
        }
      }
      break;
    default:
      if (local_b8 == &DAT_00000005) {
        cVar3 = *local_bc;
        bVar23 = cVar3 == 'g';
        if (bVar23) {
          cVar3 = local_bc[1];
        }
        if (bVar23 && cVar3 == 'r') {
          cVar3 = local_bc[2];
          bVar23 = cVar3 == 'o';
          if (bVar23) {
            cVar3 = local_bc[3];
          }
          if (bVar23 && cVar3 == 'u') {
            uVar20 = 4;
            if (local_bc[4] != 'p') {
              uVar20 = 5;
            }
            goto LAB_01227eb4;
          }
        }
      }
    }
    uVar20 = 5;
LAB_01227eb4:
    local_8c = (char *)CONCAT31(local_8c._1_3_,uVar20);
    local_90 = (char *)0x2;
  }
  FUN_012222e0(&local_c0);
LAB_01227ecc:
  pcVar21 = local_90;
  uVar20 = (undefined1)local_8c;
  if (local_90 != (char *)0x2) {
    FUN_01bed4e2(&local_158,(int)&local_8c + 1,0x2b);
    FUN_01bed4e2((int)param_1 + 0xd,&local_158,0x2b);
    *(undefined1 *)(param_1 + 3) = uVar20;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = pcVar21;
    goto LAB_0122874c;
  }
LAB_01227edc:
  puVar2 = local_44;
  pcVar21 = local_208;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((undefined1)local_8c) {
  case 0:
    if (local_20c == &SUB_00000004 && local_210 == (char *)0x0) {
      FUN_0123bc98(&local_90,&local_208);
      local_1e8 = local_88;
      pcStack_1e4 = pcStack_84;
      pcStack_1e0 = local_80;
      pcStack_1dc = local_7c;
      pcStack_1d8 = local_78;
      pcStack_1d4 = pcStack_74;
      local_140 = local_70;
      pcStack_13c = pcStack_6c;
      local_138 = local_68;
      pcStack_134 = pcStack_64;
      pcStack_130 = pcStack_60;
      pcStack_12c = pcStack_5c;
      local_20c = local_90;
      local_210 = local_8c;
      local_158 = local_1e8;
      local_154 = pcStack_1e4;
      local_150 = pcStack_1e0;
      pcStack_14c = pcStack_1dc;
      local_148 = pcStack_1d8;
      pcStack_144 = pcStack_1d4;
      if (local_90 != &SUB_00000004 || local_8c != (char *)0x0) {
        local_25c = local_58;
        local_260 = uStack_54;
        ppcVar10 = &local_1d0;
        pcVar12 = local_70;
        pcVar21 = pcStack_6c;
        pcVar15 = local_68;
        pcVar16 = pcStack_64;
        pcVar19 = pcStack_60;
        pcVar18 = pcStack_5c;
        goto LAB_0122830c;
      }
      param_1[2] = local_88;
      param_1[3] = pcStack_84;
      param_1[4] = local_80;
      param_1[5] = local_7c;
      param_1[6] = local_78;
      param_1[7] = pcStack_74;
      pcVar12 = local_70;
      pcVar21 = pcStack_6c;
      pcVar15 = local_68;
      pcVar16 = pcStack_64;
      pcVar19 = pcStack_60;
      pcVar18 = pcStack_5c;
LAB_0122873c:
      param_1[8] = pcVar12;
      param_1[9] = pcVar21;
      param_1[10] = pcVar15;
      param_1[0xb] = pcVar16;
      param_1[0xc] = pcVar19;
      param_1[0xd] = pcVar18;
      *param_1 = 3;
      param_1[1] = 0;
      goto LAB_0122874c;
    }
    FUN_0123c090(&local_90,"hash_chain_global",0x11);
    break;
  case 1:
    if (local_1b8[0] == (char *)0x2) {
      FUN_0123b8d0(&local_90,&local_208);
      local_168 = local_8c;
      if (local_90 != (char *)0x2) {
        param_1[7] = local_7c;
        param_1[8] = local_78;
        param_1[9] = pcStack_74;
        param_1[10] = local_70;
        param_1[0xb] = pcStack_6c;
        param_1[0xc] = local_68;
        param_1[0xd] = pcStack_64;
        param_1[3] = local_8c;
        param_1[4] = local_88;
        param_1[5] = pcStack_84;
        param_1[6] = local_80;
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = local_90;
        goto LAB_0122874c;
      }
      local_1b8[0] = local_168;
      goto LAB_01227934;
    }
    FUN_0123c090(&local_90,"hash_chain",10);
    break;
  case 2:
    if (!(local_214 != &DAT_00000003 || local_21c != (char *)0x0)) {
      local_208 = (char *)0x80000015;
      if (pcVar21 == (char *)0x80000015) {
        FUN_01a429c4(ppcVar13,&DAT_0056ad38,0x10);
LAB_012286fc:
        local_c0 = *ppcVar13;
        local_bc = ppcVar13[1];
        local_b8 = ppcVar13[2];
        local_b4 = ppcVar13[3];
        local_b0 = ppcVar13[4];
        pcStack_ac = ppcVar13[5];
        local_a8 = ppcVar13[6];
        pcStack_a4 = ppcVar13[7];
        pcStack_a0 = ppcVar13[8];
        pcStack_9c = ppcVar13[9];
        pcStack_98 = ppcVar13[10];
        pcStack_94 = ppcVar13[0xb];
      }
      else {
        uVar11 = puVar6[1];
        uVar17 = puVar6[2];
        *puVar4 = *puVar6;
        puVar4[1] = uVar11;
        puVar4[2] = uVar17;
        uVar9 = 0x15;
        if ((int)pcVar21 < 0) {
          uVar9 = (uint)pcVar21 ^ 0x80000000;
        }
        local_48 = pcVar21;
        if (uVar9 == 0x10) {
LAB_012280a8:
          local_154 = (char *)0x0;
          local_158 = (char *)0x2;
LAB_0122832c:
          if (pcVar21 != (char *)0x80000011) {
            FUN_012222e0(&local_48);
          }
        }
        else {
          if (uVar9 == 0x11) {
            local_38 = *local_44;
            uStack_34 = local_44[1];
            uStack_30 = local_44[2];
            uStack_2c = local_44[3];
            FUN_0122fe84(&local_90);
            if (local_90 == (char *)0x2 && local_8c == (char *)0x0) {
              local_150 = local_88;
              pcStack_14c = pcStack_84;
              local_148 = local_80;
              pcStack_144 = local_7c;
              local_140 = local_78;
              pcStack_13c = pcStack_74;
              local_138 = local_70;
              pcStack_134 = pcStack_6c;
              pcStack_130 = local_68;
              pcStack_12c = pcStack_64;
              pcStack_128 = pcStack_60;
              pcStack_124 = pcStack_5c;
              local_154 = (char *)0x0;
              local_158 = &DAT_00000003;
            }
            else {
              FUN_01bed4e2(&local_158,&local_90,0x48);
            }
            thunk_FUN_01be4678(puVar2);
            goto LAB_0122832c;
          }
          if (uVar9 == 0x12) goto LAB_012280a8;
          FUN_0122fe84(&local_90,&local_48);
          if (local_90 == (char *)0x2 && local_8c == (char *)0x0) {
            local_150 = local_88;
            pcStack_14c = pcStack_84;
            local_148 = local_80;
            pcStack_144 = local_7c;
            local_140 = local_78;
            pcStack_13c = pcStack_74;
            local_138 = local_70;
            pcStack_134 = pcStack_6c;
            pcStack_130 = local_68;
            pcStack_12c = pcStack_64;
            pcStack_128 = pcStack_60;
            pcStack_124 = pcStack_5c;
            local_154 = (char *)0x0;
            local_158 = &DAT_00000003;
          }
          else {
            FUN_01bed4e2(&local_158,&local_90,0x48);
          }
        }
        local_c0 = local_150;
        local_bc = pcStack_14c;
        local_b8 = local_148;
        local_b4 = pcStack_144;
        local_b0 = local_140;
        pcStack_ac = pcStack_13c;
        local_a8 = local_138;
        pcStack_a4 = pcStack_134;
        pcStack_a0 = pcStack_130;
        pcStack_9c = pcStack_12c;
        pcStack_98 = pcStack_128;
        pcStack_94 = pcStack_124;
        local_21c = local_154;
        if (!(local_158 == &DAT_00000003 && local_154 == (char *)0x0)) {
          local_214 = local_158;
          local_e0 = local_120;
          pcStack_dc = pcStack_11c;
          uStack_d8 = uStack_118;
          uStack_d4 = uStack_114;
          local_110 = local_150;
          pcStack_10c = pcStack_14c;
          pcStack_108 = local_148;
          pcStack_104 = pcStack_144;
          pcStack_100 = local_140;
          local_fc = pcStack_13c;
          local_f8 = local_138;
          pcStack_f4 = pcStack_134;
          pcStack_f0 = pcStack_130;
          pcStack_ec = pcStack_12c;
          local_e8 = pcStack_128;
          pcStack_e4 = pcStack_124;
          goto LAB_01227934;
        }
      }
LAB_01228710:
      param_1[2] = local_c0;
      param_1[3] = local_bc;
      param_1[4] = local_b8;
      param_1[5] = local_b4;
      param_1[6] = local_b0;
      param_1[7] = pcStack_ac;
      pcVar12 = local_a8;
      pcVar21 = pcStack_a4;
      pcVar15 = pcStack_a0;
      pcVar16 = pcStack_9c;
      pcVar19 = pcStack_98;
      pcVar18 = pcStack_94;
      goto LAB_0122873c;
    }
    FUN_0123c090(&local_90,"temp_control",0xc);
    break;
  case 3:
    if (local_218 == &DAT_00000003) {
      local_208 = (char *)0x80000015;
      if (pcVar21 == (char *)0x80000015) {
        FUN_01a429c4(ppcVar8,&DAT_0056ad38,0x10);
        ppcVar13 = ppcVar8;
        goto LAB_012286fc;
      }
      uVar11 = puVar6[1];
      uVar17 = puVar6[2];
      *puVar4 = *puVar6;
      puVar4[1] = uVar11;
      puVar4[2] = uVar17;
      uVar9 = 0x15;
      if ((int)pcVar21 < 0) {
        uVar9 = (uint)pcVar21 ^ 0x80000000;
      }
      local_48 = pcVar21;
      if (uVar9 == 0x10) {
LAB_01227fd4:
        local_158 = (char *)0x2;
LAB_012282a0:
        if (pcVar21 != (char *)0x80000011) {
          FUN_012222e0(&local_48);
        }
      }
      else {
        if (uVar9 == 0x11) {
          local_38 = *local_44;
          uStack_34 = local_44[1];
          uStack_30 = local_44[2];
          uStack_2c = local_44[3];
          FUN_0122e668(&local_90);
          if (local_90 == (char *)0x2) {
            pcVar12 = (char *)piVar5[1];
            pcVar15 = (char *)piVar5[2];
            pcVar16 = (char *)piVar5[3];
            pcVar19 = (char *)piVar5[4];
            pcVar18 = (char *)piVar5[5];
            *ppcVar8 = (char *)*piVar5;
            ppcVar8[1] = pcVar12;
            ppcVar8[2] = pcVar15;
            ppcVar8[3] = pcVar16;
            ppcVar8[4] = pcVar19;
            ppcVar8[5] = pcVar18;
            pcVar12 = (char *)piVar5[7];
            pcVar15 = (char *)piVar5[8];
            pcVar16 = (char *)piVar5[9];
            pcVar19 = (char *)piVar5[10];
            pcVar18 = (char *)piVar5[0xb];
            ppcVar8[6] = (char *)piVar5[6];
            ppcVar8[7] = pcVar12;
            ppcVar8[8] = pcVar15;
            ppcVar8[9] = pcVar16;
            ppcVar8[10] = pcVar19;
            ppcVar8[0xb] = pcVar18;
            local_158 = &DAT_00000003;
          }
          else {
            local_158 = local_90;
            local_154 = local_8c;
            local_150 = local_88;
            pcStack_14c = pcStack_84;
            local_148 = local_80;
            pcStack_144 = local_7c;
            local_140 = local_78;
            pcStack_13c = pcStack_74;
            local_138 = local_70;
            pcStack_134 = pcStack_6c;
            pcStack_130 = local_68;
            pcStack_12c = pcStack_64;
            pcStack_128 = pcStack_60;
          }
          thunk_FUN_01be4678(puVar2);
          goto LAB_012282a0;
        }
        if (uVar9 == 0x12) goto LAB_01227fd4;
        FUN_0122e668(&local_90,&local_48);
        if (local_90 == (char *)0x2) {
          pcVar12 = (char *)piVar5[1];
          pcVar21 = (char *)piVar5[2];
          pcVar15 = (char *)piVar5[3];
          pcVar16 = (char *)piVar5[4];
          pcVar19 = (char *)piVar5[5];
          *ppcVar8 = (char *)*piVar5;
          ppcVar8[1] = pcVar12;
          ppcVar8[2] = pcVar21;
          ppcVar8[3] = pcVar15;
          ppcVar8[4] = pcVar16;
          ppcVar8[5] = pcVar19;
          pcVar12 = (char *)piVar5[7];
          pcVar21 = (char *)piVar5[8];
          pcVar15 = (char *)piVar5[9];
          pcVar16 = (char *)piVar5[10];
          pcVar19 = (char *)piVar5[0xb];
          ppcVar8[6] = (char *)piVar5[6];
          ppcVar8[7] = pcVar12;
          ppcVar8[8] = pcVar21;
          ppcVar8[9] = pcVar15;
          ppcVar8[10] = pcVar16;
          ppcVar8[0xb] = pcVar19;
          local_158 = &DAT_00000003;
        }
        else {
          local_158 = local_90;
          local_154 = local_8c;
          local_150 = local_88;
          pcStack_14c = pcStack_84;
          local_148 = local_80;
          pcStack_144 = local_7c;
          local_140 = local_78;
          pcStack_13c = pcStack_74;
          local_138 = local_70;
          pcStack_134 = pcStack_6c;
          pcStack_130 = local_68;
          pcStack_12c = pcStack_64;
          pcStack_128 = pcStack_60;
        }
      }
      local_c0 = *ppcVar8;
      local_bc = ppcVar8[1];
      local_b8 = ppcVar8[2];
      local_b4 = ppcVar8[3];
      local_b0 = ppcVar8[4];
      pcStack_ac = ppcVar8[5];
      local_a8 = ppcVar8[6];
      pcStack_a4 = ppcVar8[7];
      pcStack_a0 = ppcVar8[8];
      pcStack_9c = ppcVar8[9];
      pcStack_98 = ppcVar8[10];
      pcStack_94 = ppcVar8[0xb];
      local_218 = local_158;
      if (local_158 == &DAT_00000003) goto LAB_01228710;
      ppcVar10 = &local_190;
      pcVar12 = local_a8;
      pcVar21 = pcStack_a4;
      pcVar15 = pcStack_a0;
      pcVar16 = pcStack_9c;
      pcVar19 = pcStack_98;
      pcVar18 = pcStack_94;
      local_1a8 = local_c0;
      pcStack_1a4 = local_bc;
      pcStack_1a0 = local_b8;
      pcStack_19c = local_b4;
      pcStack_198 = local_b0;
      pcStack_194 = pcStack_ac;
LAB_0122830c:
      *ppcVar10 = pcVar12;
      ppcVar10[1] = pcVar21;
      ppcVar10[2] = pcVar15;
      ppcVar10[3] = pcVar16;
      ppcVar10[4] = pcVar19;
      ppcVar10[5] = pcVar18;
      goto LAB_01227934;
    }
    FUN_0123c090(&local_90,"fan_control",0xb);
    break;
  case 4:
    if (local_178 == -0x7fffffff) {
      FUN_0123ba54(&local_90,&local_208);
      local_d0 = *piVar5;
      pcStack_cc = (char *)piVar5[1];
      puStack_c8 = (undefined4 *)piVar5[2];
      if (local_90 != (char *)0x2) {
        param_1[6] = local_80;
        param_1[7] = local_7c;
        param_1[8] = local_78;
        param_1[9] = pcStack_74;
        param_1[10] = local_70;
        param_1[0xb] = pcStack_6c;
        param_1[0xc] = local_68;
        param_1[0xd] = pcStack_64;
        param_1[3] = local_d0;
        param_1[4] = pcStack_cc;
        param_1[5] = puStack_c8;
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = local_90;
        goto LAB_0122874c;
      }
      local_178 = local_d0;
      local_174 = pcStack_cc;
      local_170 = puStack_c8;
      goto LAB_01227934;
    }
    FUN_0123c090(&local_90,&DAT_0051d8de,5);
    break;
  case 5:
    goto switchD_01227ee4_caseD_5;
  case 6:
switchD_01227ee4_caseD_6:
    if (local_20c == &SUB_00000004 && local_210 == (char *)0x0) {
      local_20c = &DAT_00000003;
      local_210 = (char *)0x0;
    }
    else {
      local_c0 = local_1e8;
      local_bc = pcStack_1e4;
      local_b8 = pcStack_1e0;
      local_b4 = pcStack_1dc;
      local_b0 = pcStack_1d8;
      pcStack_ac = pcStack_1d4;
      local_a8 = local_1d0;
      pcStack_a4 = pcStack_1cc;
      pcStack_a0 = pcStack_1c8;
      pcStack_9c = pcStack_1c4;
      pcStack_98 = pcStack_1c0;
      pcStack_94 = pcStack_1bc;
    }
    pcVar21 = (char *)0x0;
    if (local_1b8[0] != (char *)0x2) {
      local_38 = *puVar7;
      uStack_34 = puVar7[1];
      uStack_30 = puVar7[2];
      pcVar21 = local_1b8[0];
    }
    bVar23 = local_214 != &DAT_00000003;
    local_214 = (char *)0x2;
    pcVar15 = (char *)0x2;
    pcVar16 = (char *)0x0;
    if (bVar23 || local_21c != (char *)0x0) {
      local_90 = local_110;
      local_8c = pcStack_10c;
      local_88 = pcStack_108;
      pcStack_84 = pcStack_104;
      local_80 = pcStack_100;
      local_7c = local_fc;
      local_78 = local_f8;
      pcStack_74 = pcStack_f4;
      local_70 = pcStack_f0;
      pcStack_6c = pcStack_ec;
      local_68 = local_e8;
      pcStack_64 = pcStack_e4;
      pcStack_60 = local_e0;
      pcStack_5c = pcStack_dc;
      local_58 = uStack_d8;
      uStack_54 = uStack_d4;
      pcVar15 = pcVar12;
      pcVar16 = local_21c;
    }
    if (local_218 != &DAT_00000003) {
      local_158 = local_1a8;
      local_154 = pcStack_1a4;
      local_150 = pcStack_1a0;
      pcStack_14c = pcStack_19c;
      local_148 = pcStack_198;
      pcStack_144 = pcStack_194;
      local_140 = local_190;
      pcStack_13c = pcStack_18c;
      local_138 = pcStack_188;
      pcStack_134 = pcStack_184;
      pcStack_130 = pcStack_180;
      pcStack_12c = pcStack_17c;
      local_214 = local_218;
    }
    iVar22 = -0x80000000;
    if (local_178 != -0x7fffffff) {
      local_44 = local_170;
      local_48 = local_174;
      iVar22 = local_178;
    }
    param_1[0x22] = pcVar21;
    param_1[0x23] = local_38;
    param_1[0x24] = uStack_34;
    param_1[0x25] = uStack_30;
    param_1[0x14] = local_c0;
    param_1[0x15] = local_bc;
    param_1[0x16] = local_b8;
    param_1[0x17] = local_b4;
    param_1[0x18] = local_b0;
    param_1[0x19] = pcStack_ac;
    param_1[0x1a] = local_a8;
    param_1[0x1b] = pcStack_a4;
    param_1[0x1c] = pcStack_a0;
    param_1[0x1d] = pcStack_9c;
    param_1[0x1e] = pcStack_98;
    param_1[0x1f] = pcStack_94;
    param_1[2] = local_90;
    param_1[3] = local_8c;
    param_1[4] = local_88;
    param_1[5] = pcStack_84;
    param_1[6] = local_80;
    param_1[7] = local_7c;
    param_1[8] = local_78;
    param_1[9] = pcStack_74;
    param_1[10] = local_70;
    param_1[0xb] = pcStack_6c;
    param_1[0xc] = local_68;
    param_1[0xd] = pcStack_64;
    param_1[0xe] = pcStack_60;
    param_1[0xf] = pcStack_5c;
    param_1[0x10] = local_58;
    param_1[0x11] = uStack_54;
    param_1[0x27] = local_158;
    param_1[0x28] = local_154;
    param_1[0x29] = local_150;
    param_1[0x2a] = pcStack_14c;
    param_1[0x2b] = local_148;
    param_1[0x2c] = pcStack_144;
    param_1[0x2d] = local_140;
    param_1[0x2e] = pcStack_13c;
    param_1[0x2f] = local_138;
    param_1[0x30] = pcStack_134;
    param_1[0x31] = pcStack_130;
    param_1[0x32] = pcStack_12c;
    param_1[0x20] = local_25c;
    param_1[0x21] = local_260;
    param_1[0x12] = local_20c;
    param_1[0x13] = local_210;
    *param_1 = pcVar15;
    param_1[1] = pcVar16;
    param_1[0x33] = iVar22;
    param_1[0x26] = local_214;
    param_1[0x34] = local_48;
    param_1[0x35] = local_44;
    goto joined_r0x0122877c;
  }
  param_1[2] = local_90;
  param_1[3] = local_8c;
  param_1[4] = local_88;
  param_1[5] = pcStack_84;
  param_1[6] = local_80;
  param_1[7] = local_7c;
  param_1[8] = local_78;
  param_1[9] = pcStack_74;
  param_1[10] = local_70;
  param_1[0xb] = pcStack_6c;
  param_1[0xc] = local_68;
  param_1[0xd] = pcStack_64;
  *param_1 = 3;
  param_1[1] = 0;
  goto LAB_0122874c;
switchD_01227ee4_caseD_5:
  FUN_0123bc2c(&local_90,&local_208);
  if (local_90 != (char *)0x2) {
    param_1[3] = local_8c;
    param_1[4] = local_88;
    param_1[5] = pcStack_84;
    param_1[6] = local_80;
    param_1[7] = local_7c;
    param_1[8] = local_78;
    param_1[9] = pcStack_74;
    param_1[10] = local_70;
    param_1[0xb] = pcStack_6c;
    param_1[0xc] = local_68;
    param_1[0xd] = pcStack_64;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_90;
LAB_0122874c:
    if (local_178 != -0x7fffffff) {
      FUN_00b1d658(&local_178);
    }
    if (((uint)local_1b8[0] & 1) != 0) {
      FUN_0124f320(puVar7);
    }
joined_r0x0122877c:
    if (local_208 != (char *)0x80000015) {
      FUN_0123b780(&local_208);
    }
    return;
  }
  goto LAB_01227934;
}

