// FUN_012268d8 @ 012268d8 size=3572 calls_out=16 calls_in=1
// strings: dangerous_temp | target_temp | cold_temp | MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012268d8(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  byte bVar7;
  uint *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  char cVar14;
  uint uVar15;
  uint unaff_r5;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  undefined1 uVar23;
  char *pcVar24;
  bool bVar25;
  bool bVar26;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  int *local_144;
  int *local_140;
  uint local_13c;
  int *local_138;
  undefined4 local_134;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint *local_120;
  uint *local_11c;
  uint local_118;
  uint *local_114;
  int local_110;
  uint local_108;
  undefined4 local_104;
  uint local_100;
  uint local_fc;
  undefined8 local_f8;
  uint local_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  int local_c0 [12];
  uint local_90;
  char *local_8c;
  char *local_88;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined1 uStack_49;
  
  uVar10 = *param_2;
  uVar12 = 0x15;
  if ((int)uVar10 < 0) {
    uVar12 = uVar10 ^ 0x80000000;
  }
  puVar17 = param_1 + 4;
  if (uVar12 != 0x14) {
    if (uVar12 != 0x15) {
      FUN_012223f8(param_1 + 2,param_2,&uStack_49,&DAT_01c24654);
      *param_1 = 2;
      param_1[1] = 0;
      return;
    }
    local_130 = 0x80000015;
    puVar22 = (uint *)((uint)&local_90 | 4);
    puVar8 = (uint *)((uint)&local_130 | 4);
    local_158 = 0;
    local_154 = 4;
    local_15c = 2;
    local_164 = 2;
    local_120 = (uint *)param_2[1];
    local_160 = 0;
    local_16c = 2;
    local_114 = local_120 + param_2[2] * 8;
    local_168 = 0;
    local_110 = 0;
    local_174 = 2;
    local_170 = 0;
    local_11c = local_120;
    local_118 = uVar10;
LAB_012269b4:
    puVar1 = local_11c;
    bVar25 = local_11c == local_114;
    if (!bVar25) {
      unaff_r5 = *local_11c;
      local_11c = local_11c + 8;
    }
    if (bVar25 || unaff_r5 == 0x80000015) goto switchD_01226e78_caseD_6;
    local_110 = local_110 + 1;
    uVar12 = puVar1[2];
    uVar19 = puVar1[3];
    *puVar22 = puVar1[1];
    puVar22[1] = uVar12;
    puVar22[2] = uVar19;
    local_80 = puVar1[4];
    local_7c = puVar1[5];
    local_78 = puVar1[6];
    local_74 = puVar1[7];
    local_90 = unaff_r5;
    if (local_130 != 0x80000015) {
      FUN_012222e0(&local_130);
    }
    pcVar6 = local_88;
    pcVar24 = local_8c;
    local_130 = local_80;
    uStack_12c = local_7c;
    uStack_128 = local_78;
    uStack_124 = local_74;
    uVar12 = 0x15;
    if ((int)unaff_r5 < 0) {
      uVar12 = unaff_r5 ^ 0x80000000;
    }
    switch(uVar12) {
    case 1:
      local_80 = 2;
      uVar23 = SUB41(local_8c,0);
      if (4 < ((uint)local_8c & 0xff)) {
        uVar23 = 5;
      }
      local_7c = CONCAT31(local_7c._1_3_,uVar23);
      break;
    default:
      FUN_012223f8(&local_80,&local_90,&uStack_49,&DAT_01c24734);
      goto LAB_01226e60;
    case 4:
      pcVar24 = local_88;
      if (local_84 != 0 || local_84 < (&SUB_00000004 < local_88)) {
        pcVar24 = &DAT_00000005;
      }
      uVar23 = SUB41(pcVar24,0);
      goto LAB_01226e4c;
    case 0xc:
      FUN_0123229c(&local_80,local_88);
      FUN_019bb7e0(pcVar24,pcVar6);
      goto LAB_01226e60;
    case 0xd:
      FUN_0123229c(&local_80,local_8c,local_88);
      break;
    case 0xe:
      switch(local_84) {
      case 4:
        cVar14 = *local_88;
        bVar25 = cVar14 == 'm';
        if (bVar25) {
          cVar14 = local_88[1];
        }
        bVar26 = bVar25 && cVar14 == 'o';
        if (bVar25 && cVar14 == 'o') {
          bVar26 = local_88[2] == 'd';
        }
        if ((!bVar26) || (uVar23 = 0, local_88[3] != 'e')) break;
        goto LAB_01227058;
      case 8:
        if (*local_88 == 'h') {
          cVar14 = local_88[1];
          bVar25 = cVar14 == 'o';
          if (bVar25) {
            cVar14 = local_88[2];
          }
          if (bVar25 && cVar14 == 't') {
            cVar14 = local_88[3];
            bVar25 = cVar14 == '_';
            if (bVar25) {
              cVar14 = local_88[4];
            }
            if (bVar25 && cVar14 == 't') {
              cVar14 = local_88[5];
              bVar25 = cVar14 == 'e';
              if (bVar25) {
                cVar14 = local_88[6];
              }
              if (bVar25 && cVar14 == 'm') {
                cVar14 = local_88[7];
                uVar23 = 2;
LAB_01226d3c:
                if (cVar14 != 'p') {
                  uVar23 = 5;
                }
                goto LAB_01227058;
              }
            }
          }
        }
        break;
      case 9:
        cVar14 = *local_88;
        bVar25 = cVar14 == 'c';
        if (bVar25) {
          cVar14 = local_88[1];
        }
        if (bVar25 && cVar14 == 'o') {
          cVar14 = local_88[2];
          bVar25 = cVar14 == 'l';
          if (bVar25) {
            cVar14 = local_88[3];
          }
          if (bVar25 && cVar14 == 'd') {
            cVar14 = local_88[4];
            bVar25 = cVar14 == '_';
            if (bVar25) {
              cVar14 = local_88[5];
            }
            if (bVar25 && cVar14 == 't') {
              cVar14 = local_88[6];
              bVar25 = cVar14 == 'e';
              if (bVar25) {
                cVar14 = local_88[7];
              }
              if (bVar25 && cVar14 == 'm') {
                cVar14 = local_88[8];
                uVar23 = 4;
                goto LAB_01226d3c;
              }
            }
          }
        }
        break;
      case 0xb:
        cVar14 = *local_88;
        bVar25 = cVar14 == 't';
        if (bVar25) {
          cVar14 = local_88[1];
        }
        if (bVar25 && cVar14 == 'a') {
          cVar14 = local_88[2];
          bVar25 = cVar14 == 'r';
          if (bVar25) {
            cVar14 = local_88[3];
          }
          if (bVar25 && cVar14 == 'g') {
            cVar14 = local_88[4];
            bVar25 = cVar14 == 'e';
            if (bVar25) {
              cVar14 = local_88[5];
            }
            if (bVar25 && cVar14 == 't') {
              cVar14 = local_88[6];
              bVar25 = cVar14 == '_';
              if (bVar25) {
                cVar14 = local_88[7];
              }
              if (bVar25 && cVar14 == 't') {
                cVar14 = local_88[8];
                bVar25 = cVar14 == 'e';
                if (bVar25) {
                  cVar14 = local_88[9];
                }
                if (bVar25 && cVar14 == 'm') {
                  cVar14 = local_88[10];
                  uVar23 = 1;
                  goto LAB_01226d3c;
                }
              }
            }
          }
        }
        break;
      case 0xe:
        if (*local_88 == 'd') {
          cVar14 = local_88[1];
          bVar25 = cVar14 == 'a';
          if (bVar25) {
            cVar14 = local_88[2];
          }
          if (bVar25 && cVar14 == 'n') {
            cVar14 = local_88[3];
            bVar25 = cVar14 == 'g';
            if (bVar25) {
              cVar14 = local_88[4];
            }
            if (bVar25 && cVar14 == 'e') {
              cVar14 = local_88[5];
              bVar25 = cVar14 == 'r';
              if (bVar25) {
                cVar14 = local_88[6];
              }
              if (bVar25 && cVar14 == 'o') {
                cVar14 = local_88[7];
                bVar25 = cVar14 == 'u';
                if (bVar25) {
                  cVar14 = local_88[8];
                }
                if (bVar25 && cVar14 == 's') {
                  cVar14 = local_88[9];
                  bVar25 = cVar14 == '_';
                  if (bVar25) {
                    cVar14 = local_88[10];
                  }
                  if (bVar25 && cVar14 == 't') {
                    cVar14 = local_88[0xb];
                    bVar25 = cVar14 == 'e';
                    if (bVar25) {
                      cVar14 = local_88[0xc];
                    }
                    if (bVar25 && cVar14 == 'm') {
                      cVar14 = local_88[0xd];
                      uVar23 = 3;
                      goto LAB_01226d3c;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar23 = 5;
LAB_01227058:
      local_7c = CONCAT31(local_7c._1_3_,uVar23);
      local_80 = 2;
      FUN_019bb7e0(local_8c,local_88);
      goto LAB_01226e70;
    case 0xf:
      switch(local_88) {
      case (char *)0x4:
        cVar14 = *local_8c;
        bVar25 = cVar14 == 'm';
        if (bVar25) {
          cVar14 = local_8c[1];
        }
        bVar26 = bVar25 && cVar14 == 'o';
        if (bVar25 && cVar14 == 'o') {
          bVar26 = local_8c[2] == 'd';
        }
        if ((bVar26) && (uVar23 = 0, local_8c[3] == 'e')) goto LAB_01226e4c;
        break;
      case (char *)0x8:
        if (*local_8c == 'h') {
          cVar14 = local_8c[1];
          bVar25 = cVar14 == 'o';
          if (bVar25) {
            cVar14 = local_8c[2];
          }
          if (bVar25 && cVar14 == 't') {
            cVar14 = local_8c[3];
            bVar25 = cVar14 == '_';
            if (bVar25) {
              cVar14 = local_8c[4];
            }
            if (bVar25 && cVar14 == 't') {
              cVar14 = local_8c[5];
              bVar25 = cVar14 == 'e';
              if (bVar25) {
                cVar14 = local_8c[6];
              }
              if (bVar25 && cVar14 == 'm') {
                cVar14 = local_8c[7];
                uVar23 = 2;
LAB_01226ce0:
                if (cVar14 != 'p') {
                  uVar23 = 5;
                }
                goto LAB_01226e4c;
              }
            }
          }
        }
        break;
      case (char *)0x9:
        cVar14 = *local_8c;
        bVar25 = cVar14 == 'c';
        if (bVar25) {
          cVar14 = local_8c[1];
        }
        if (bVar25 && cVar14 == 'o') {
          cVar14 = local_8c[2];
          bVar25 = cVar14 == 'l';
          if (bVar25) {
            cVar14 = local_8c[3];
          }
          if (bVar25 && cVar14 == 'd') {
            cVar14 = local_8c[4];
            bVar25 = cVar14 == '_';
            if (bVar25) {
              cVar14 = local_8c[5];
            }
            if (bVar25 && cVar14 == 't') {
              cVar14 = local_8c[6];
              bVar25 = cVar14 == 'e';
              if (bVar25) {
                cVar14 = local_8c[7];
              }
              if (bVar25 && cVar14 == 'm') {
                cVar14 = local_8c[8];
                uVar23 = 4;
                goto LAB_01226ce0;
              }
            }
          }
        }
        break;
      case (char *)0xb:
        cVar14 = *local_8c;
        bVar25 = cVar14 == 't';
        if (bVar25) {
          cVar14 = local_8c[1];
        }
        if (bVar25 && cVar14 == 'a') {
          cVar14 = local_8c[2];
          bVar25 = cVar14 == 'r';
          if (bVar25) {
            cVar14 = local_8c[3];
          }
          if (bVar25 && cVar14 == 'g') {
            cVar14 = local_8c[4];
            bVar25 = cVar14 == 'e';
            if (bVar25) {
              cVar14 = local_8c[5];
            }
            if (bVar25 && cVar14 == 't') {
              cVar14 = local_8c[6];
              bVar25 = cVar14 == '_';
              if (bVar25) {
                cVar14 = local_8c[7];
              }
              if (bVar25 && cVar14 == 't') {
                cVar14 = local_8c[8];
                bVar25 = cVar14 == 'e';
                if (bVar25) {
                  cVar14 = local_8c[9];
                }
                if (bVar25 && cVar14 == 'm') {
                  cVar14 = local_8c[10];
                  uVar23 = 1;
                  goto LAB_01226ce0;
                }
              }
            }
          }
        }
        break;
      case (char *)0xe:
        if (*local_8c == 'd') {
          cVar14 = local_8c[1];
          bVar25 = cVar14 == 'a';
          if (bVar25) {
            cVar14 = local_8c[2];
          }
          if (bVar25 && cVar14 == 'n') {
            cVar14 = local_8c[3];
            bVar25 = cVar14 == 'g';
            if (bVar25) {
              cVar14 = local_8c[4];
            }
            if (bVar25 && cVar14 == 'e') {
              cVar14 = local_8c[5];
              bVar25 = cVar14 == 'r';
              if (bVar25) {
                cVar14 = local_8c[6];
              }
              if (bVar25 && cVar14 == 'o') {
                cVar14 = local_8c[7];
                bVar25 = cVar14 == 'u';
                if (bVar25) {
                  cVar14 = local_8c[8];
                }
                if (bVar25 && cVar14 == 's') {
                  cVar14 = local_8c[9];
                  bVar25 = cVar14 == '_';
                  if (bVar25) {
                    cVar14 = local_8c[10];
                  }
                  if (bVar25 && cVar14 == 't') {
                    cVar14 = local_8c[0xb];
                    bVar25 = cVar14 == 'e';
                    if (bVar25) {
                      cVar14 = local_8c[0xc];
                    }
                    if (bVar25 && cVar14 == 'm') {
                      cVar14 = local_8c[0xd];
                      uVar23 = 3;
                      goto LAB_01226ce0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      uVar23 = 5;
LAB_01226e4c:
      local_7c = CONCAT31(local_7c._1_3_,uVar23);
      local_80 = 2;
    }
    FUN_012222e0(&local_90);
LAB_01226e60:
    uVar12 = local_80;
    bVar7 = (byte)local_7c;
    if (local_80 != 2) {
      FUN_01bed4e2(local_c0,(int)&local_7c + 1,0x2b);
      FUN_01bed4e2((int)param_1 + 0xd,local_c0,0x2b);
      *(byte *)(param_1 + 3) = bVar7;
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = uVar12;
      goto LAB_01227634;
    }
LAB_01226e70:
    uVar12 = local_130;
    unaff_r5 = (uint)(byte)local_7c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((byte)local_7c) {
    case 0:
      if (local_154 == 4) {
        local_130 = 0x80000015;
        if (uVar12 == 0x80000015) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                       ,0x2c,&DAT_01cfa02c);
        }
        unaff_r5 = puVar8[1];
        uVar19 = puVar8[2];
        *puVar22 = *puVar8;
        puVar22[1] = unaff_r5;
        puVar22[2] = uVar19;
        local_90 = uVar12;
        FUN_0124298c(&local_80,&local_90);
        uVar12 = local_80;
        uVar23 = (byte)local_7c;
        local_154 = local_7c & 0xff;
        if (local_80 != 2) {
          FUN_01bed4e2(local_c0,(int)&local_7c + 1,0x2b);
          *(undefined1 *)(param_1 + 3) = uVar23;
          param_1[2] = uVar12;
          FUN_01bed4e2((int)param_1 + 0xd,local_c0,0x2b);
          *param_1 = 2;
          param_1[1] = 0;
          goto LAB_01227634;
        }
        goto LAB_012269b4;
      }
      FUN_0123c090(&local_80,&DAT_0056d358,4);
      break;
    case 1:
      if (!(local_174 != 2 || local_170 != 0)) {
        FUN_01223148(&local_80,&local_130);
        if (local_80 != 2) {
LAB_01227574:
          param_1[8] = local_68;
          param_1[9] = uStack_64;
          param_1[10] = uStack_60;
          param_1[0xb] = uStack_5c;
          param_1[0xc] = uStack_58;
          param_1[0xd] = uStack_54;
          *puVar17 = local_78;
          param_1[5] = local_74;
          *param_1 = 2;
          param_1[1] = 0;
          param_1[2] = local_80;
          param_1[3] = local_7c;
          *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_6c,local_70);
          goto LAB_01227634;
        }
        unaff_d11 = CONCAT44(uStack_6c,local_70);
        local_174 = local_78;
        local_170 = local_74;
        goto LAB_012269b4;
      }
      FUN_0123c090(&local_80,"target_temp",0xb);
      break;
    case 2:
      if (!(local_16c != 2 || local_168 != 0)) {
        FUN_01223148(&local_80,&local_130);
        if (local_80 != 2) goto LAB_01227574;
        unaff_d10 = CONCAT44(uStack_6c,local_70);
        local_16c = local_78;
        local_168 = local_74;
        goto LAB_012269b4;
      }
      FUN_0123c090(&local_80,&DAT_00570ea8,8);
      break;
    case 3:
      if (!(local_164 != 2 || local_160 != 0)) {
        FUN_01223148(&local_80,&local_130);
        if (local_80 != 2) goto LAB_01227574;
        unaff_d9 = CONCAT44(uStack_6c,local_70);
        local_164 = local_78;
        local_160 = local_74;
        goto LAB_012269b4;
      }
      FUN_0123c090(&local_80,"dangerous_temp",0xe);
      break;
    case 4:
      if (!(local_15c != 2 || local_158 != 0)) {
        FUN_01223148(&local_80,&local_130);
        if (local_80 != 2) goto LAB_01227574;
        unaff_d8 = CONCAT44(uStack_6c,local_70);
        local_15c = local_78;
        local_158 = local_74;
        goto LAB_012269b4;
      }
      FUN_0123c090(&local_80,"cold_temp",9);
      break;
    case 5:
      goto switchD_01226e78_caseD_5;
    case 6:
switchD_01226e78_caseD_6:
      if (local_154 == 4) {
        local_154._0_1_ = 3;
      }
      *(undefined1 *)(param_1 + 0x10) = (undefined1)local_154;
      *(undefined8 *)(param_1 + 2) = unaff_d11;
      if (local_174 == 2 && local_170 == 0) {
        local_174 = 0;
        local_170 = 0;
      }
      *param_1 = local_174;
      param_1[1] = local_170;
      *(undefined8 *)(param_1 + 6) = unaff_d10;
      *(undefined8 *)(param_1 + 10) = unaff_d9;
      *(undefined8 *)(param_1 + 0xe) = unaff_d8;
      if (local_16c == 2 && local_168 == 0) {
        local_16c = 0;
        local_168 = 0;
      }
      *puVar17 = local_16c;
      param_1[5] = local_168;
      if (local_164 == 2 && local_160 == 0) {
        local_164 = 0;
        local_160 = 0;
      }
      param_1[8] = local_164;
      param_1[9] = local_160;
      if (local_15c == 2 && local_158 == 0) {
        local_15c = 0;
        local_158 = 0;
      }
      param_1[0xc] = local_15c;
      param_1[0xd] = local_158;
      FUN_01bed4e2(&local_108,param_1,0x48);
      puVar17 = &local_80;
      FUN_01222c98(puVar17,&local_130);
      if (local_80 != 2) goto LAB_01227418;
      FUN_01bed4e2(param_1,&local_108,0x48);
      goto LAB_0122743c;
    }
    param_1[2] = local_80;
    param_1[3] = local_7c;
    param_1[4] = local_78;
    param_1[5] = local_74;
    param_1[6] = local_70;
    param_1[7] = uStack_6c;
    param_1[8] = local_68;
    param_1[9] = uStack_64;
    param_1[10] = uStack_60;
    param_1[0xb] = uStack_5c;
    param_1[0xc] = uStack_58;
    param_1[0xd] = uStack_54;
    *param_1 = 2;
    param_1[1] = 0;
    goto LAB_01227634;
  }
  local_13c = param_2[1];
  local_144 = (int *)param_2[2];
  local_134 = 0;
  local_138 = local_144 + param_2[3] * 4;
  local_140 = local_144;
  if (param_2[3] == 0) {
LAB_012271c0:
    cVar14 = '\x03';
LAB_012271c4:
    FUN_012231a8(&local_108,&local_144);
    uVar3 = local_f8;
    uVar19 = local_fc;
    uVar12 = local_100;
    if (local_108 == 2) {
      if (local_100 == 2 && local_fc == 0) {
        uVar9 = 1;
      }
      else {
        FUN_012231a8(&local_108,&local_144);
        uVar4 = local_f8;
        uVar16 = local_fc;
        uVar15 = local_100;
        if (local_108 != 2) goto LAB_012273c8;
        if (local_100 == 2 && local_fc == 0) {
          uVar9 = 2;
        }
        else {
          FUN_012231a8(&local_108,&local_144);
          uVar5 = local_f8;
          uVar2 = local_fc;
          uVar20 = local_100;
          if (local_108 != 2) {
LAB_01227508:
            param_1[8] = local_f0;
            param_1[9] = uStack_ec;
            param_1[10] = uStack_e8;
            param_1[0xb] = uStack_e4;
            param_1[0xc] = uStack_e0;
            param_1[0xd] = uStack_dc;
            param_1[2] = local_108;
            *puVar17 = local_100;
            param_1[5] = local_fc;
            param_1[3] = local_104;
            goto LAB_012273f8;
          }
          if (local_100 == 2 && local_fc == 0) {
            uVar9 = 3;
          }
          else {
            FUN_012231a8(&local_108,&local_144);
            if (local_108 != 2) goto LAB_01227508;
            if (local_100 != 2 || local_fc != 0) {
              *param_1 = uVar12;
              *puVar17 = uVar15;
              param_1[8] = uVar20;
              param_1[0xc] = local_100;
              *(undefined8 *)(param_1 + 2) = uVar3;
              *(undefined8 *)(param_1 + 6) = uVar4;
              *(undefined8 *)(param_1 + 10) = uVar5;
              *(char *)(param_1 + 0x10) = cVar14;
              *(undefined8 *)(param_1 + 0xe) = local_f8;
              param_1[1] = uVar19;
              param_1[5] = uVar16;
              param_1[9] = uVar2;
              param_1[0xd] = local_fc;
              puVar17 = &local_108;
              FUN_01222e2c(puVar17,&local_144);
              if (local_108 != 2) {
LAB_01227418:
                uVar12 = puVar17[1];
                uVar19 = puVar17[2];
                uVar15 = puVar17[3];
                uVar16 = puVar17[4];
                uVar20 = puVar17[5];
                param_1[2] = *puVar17;
                param_1[3] = uVar12;
                param_1[4] = uVar19;
                param_1[5] = uVar15;
                param_1[6] = uVar16;
                param_1[7] = uVar20;
                uVar12 = puVar17[7];
                uVar19 = puVar17[8];
                uVar15 = puVar17[9];
                uVar16 = puVar17[10];
                uVar20 = puVar17[0xb];
                param_1[8] = puVar17[6];
                param_1[9] = uVar12;
                param_1[10] = uVar19;
                param_1[0xb] = uVar15;
                param_1[0xc] = uVar16;
                param_1[0xd] = uVar20;
                *param_1 = 2;
                param_1[1] = 0;
              }
              goto LAB_0122743c;
            }
            uVar9 = 4;
          }
        }
      }
      FUN_0123c028(param_1 + 2,uVar9,&DAT_01c24924,&DAT_01d064b8);
    }
    else {
LAB_012273c8:
      param_1[8] = local_f0;
      param_1[9] = uStack_ec;
      param_1[10] = uStack_e8;
      param_1[0xb] = uStack_e4;
      param_1[0xc] = uStack_e0;
      param_1[0xd] = uStack_dc;
      param_1[2] = local_108;
      param_1[3] = local_104;
      *puVar17 = local_100;
      param_1[5] = local_fc;
LAB_012273f8:
      *(undefined8 *)(param_1 + 6) = local_f8;
    }
  }
  else {
    local_140 = local_144 + 4;
    iVar11 = *local_144;
    if (iVar11 == -0x7fffffeb) goto LAB_012271c0;
    piVar13 = (int *)((uint)local_c0 | 4);
    iVar18 = local_144[2];
    iVar21 = local_144[3];
    *piVar13 = local_144[1];
    piVar13[1] = iVar18;
    piVar13[2] = iVar21;
    local_134 = 1;
    local_c0[0] = iVar11;
    FUN_0124298c(&local_108);
    if (local_108 == 2) {
      cVar14 = (char)local_104;
      if ((char)local_104 == '\x04') {
        cVar14 = '\x03';
      }
      goto LAB_012271c4;
    }
    FUN_01bed4e2(&local_80,(int)&local_104 + 1,0x2b);
    FUN_01bed4e2((int)param_1 + 0xd,&local_80,0x2b);
    *(char *)(param_1 + 3) = (char)local_104;
    param_1[2] = local_108;
  }
  *param_1 = 2;
  param_1[1] = 0;
  FUN_01264ff4(&local_144);
LAB_0122743c:
  if ((uVar10 < 0x80000000) || ((undefined1 *)(uVar10 & 0xfffffffe) == &DAT_80000014)) {
    return;
  }
  FUN_012222e0(param_2);
  return;
switchD_01226e78_caseD_5:
  FUN_012230dc(&local_80,&local_130);
  if (local_80 != 2) goto LAB_012275c0;
  goto LAB_012269b4;
LAB_012275c0:
  param_1[3] = local_7c;
  param_1[4] = local_78;
  param_1[5] = local_74;
  param_1[6] = local_70;
  param_1[7] = uStack_6c;
  param_1[8] = local_68;
  param_1[9] = uStack_64;
  param_1[10] = uStack_60;
  param_1[0xb] = uStack_5c;
  param_1[0xc] = uStack_58;
  param_1[0xd] = uStack_54;
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = local_80;
LAB_01227634:
  FUN_01222c4c(&local_130);
  goto LAB_0122743c;
}

