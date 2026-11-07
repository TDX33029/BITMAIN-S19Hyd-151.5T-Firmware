// FUN_012289a0 @ 012289a0 size=4084 calls_out=19 calls_in=1
// strings: asic_boostvariant index 0 <= i < 4struct ConfigDescriptorCommonstruct DefaultTemperatureDescriptor | asic_boostvariant index 0 <= i < 4struct ConfigDescriptorCommonstruct DefaultTemperatureDescriptor | quick_ramping_time_up_s | quick_ramping_time_down_s | quick_ramping_time_up_s | quick_ramping_time_down_s

/* WARNING: Removing unreachable block (ram,0x01228ac8) */
/* WARNING: Removing unreachable block (ram,0x01229520) */
/* WARNING: Removing unreachable block (ram,0x01229530) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012289a0(uint *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined1 uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  char **ppcVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  char *pcVar14;
  char **ppcVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined1 uVar24;
  byte *pbVar25;
  bool bVar26;
  bool bVar27;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  byte *local_244;
  byte *local_240;
  uint local_230;
  uint local_22c;
  char *local_20c;
  char *local_204;
  byte *local_200;
  char *local_1f8;
  byte *pbStack_1f4;
  char *pcStack_1f0;
  byte *pbStack_1ec;
  uint *local_1e8;
  uint *local_1e4;
  int local_1e0;
  uint *local_1dc;
  undefined4 local_1d8;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  byte *local_1c0;
  char *pcStack_1bc;
  uint local_1b0;
  byte *pbStack_1ac;
  char *pcStack_1a8;
  byte *pbStack_1a4;
  uint uStack_1a0;
  uint local_19c;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint local_180;
  undefined1 local_17c;
  char *local_178;
  byte *local_174;
  uint local_170;
  uint uStack_16c;
  char *pcStack_168;
  byte *local_164;
  uint local_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint local_150;
  uint uStack_14c;
  char *pcStack_148;
  byte *pbStack_144;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint local_130;
  uint uStack_12c;
  char *pcStack_128;
  byte *pbStack_124;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  char *local_110;
  byte *local_10c;
  char *local_108;
  byte *pbStack_104;
  undefined8 local_100;
  char *local_f8;
  byte *pbStack_f4;
  undefined8 local_f0;
  uint local_e8;
  uint uStack_e4;
  byte *local_e0 [4];
  int local_d0;
  int local_cc;
  undefined *local_c8;
  undefined4 local_c4;
  byte *local_c0;
  char *pcStack_bc;
  int local_90 [4];
  byte *local_80;
  char *local_70;
  undefined4 local_6c;
  char *local_68;
  byte *local_64;
  char *local_60;
  byte *pbStack_5c;
  char *local_58;
  byte *pbStack_54;
  char *pcStack_50;
  byte *pbStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined1 uStack_39;
  
  pbVar3 = pbStack_1a4;
  pcVar14 = pcStack_1a8;
  pbVar25 = pbStack_1ac;
  local_1e0 = *param_2;
  if (local_1e0 < 0) {
    FUN_012223f8(param_1 + 2,param_2,&uStack_39,&DAT_01c245f4);
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  local_1f8 = (char *)0x80000015;
  ppcVar15 = &local_68;
  puVar6 = (uint *)((uint)&local_1b0 | 4);
  ppcVar10 = &local_60;
  puVar7 = (undefined4 *)((uint)&local_110 | 4);
  local_1e8 = (uint *)param_2[1];
  local_1dc = local_1e8 + param_2[2] * 8;
  local_1d8 = 0;
  local_1c4 = 0;
  local_1cc = 0;
  local_1c8 = 8;
  puVar13 = local_1dc;
  local_1e4 = local_1e8;
  if (local_1e8 != local_1dc) {
    local_1e4 = local_1e8 + 8;
    puVar13 = (uint *)*local_1e8;
  }
  if (local_1e8 == local_1dc || puVar13 == (uint *)0x80000015) goto LAB_012294f8;
  uVar16 = local_1e8[2];
  uVar21 = local_1e8[3];
  *puVar6 = local_1e8[1];
  puVar6[1] = uVar16;
  puVar6[2] = uVar21;
  local_1f8 = (char *)local_1e8[4];
  pbStack_1f4 = (byte *)local_1e8[5];
  pcStack_1f0 = (char *)local_1e8[6];
  pbStack_1ec = (byte *)local_1e8[7];
  local_1c4 = 0;
  local_1c8 = 8;
  local_1cc = 0;
  local_1d8 = 1;
  local_178 = pcStack_1a8;
  local_174 = pbStack_1a4;
  uVar16 = 0x15;
  if ((int)puVar13 < 0) {
    uVar16 = (uint)puVar13 ^ 0x80000000;
  }
  local_1b0 = (uint)puVar13;
  local_180 = (uint)puVar13;
  local_70 = local_1f8;
  local_6c = pbStack_1f4;
  local_68 = pcStack_1f0;
  local_64 = pbStack_1ec;
  switch(uVar16) {
  case 1:
    local_17c = SUB41(pbStack_1ac,0);
    local_64 = (byte *)CONCAT31((int3)((uint)pbStack_1ec >> 8),local_17c);
    local_68 = &DAT_80000001;
    break;
  default:
    FUN_012223f8(&local_70,&local_1b0,&uStack_39,&DAT_01c24744);
    if (local_70 != (char *)0x2) {
      local_1c0 = local_64;
      pcStack_1bc = local_60;
      local_110 = local_58;
      local_10c = pbStack_54;
      local_108 = pcStack_50;
      pbStack_104 = pbStack_4c;
      local_100 = CONCAT44(uStack_44,uStack_48);
      param_1[8] = (uint)local_58;
      param_1[9] = (uint)pbStack_54;
      param_1[10] = (uint)pcStack_50;
      param_1[0xb] = (uint)pbStack_4c;
      param_1[0xc] = uStack_48;
      param_1[0xd] = uStack_44;
      param_1[5] = (uint)local_64;
      param_1[6] = (uint)local_60;
      param_1[7] = (uint)pbStack_5c;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = (uint)local_70;
      param_1[3] = (uint)local_6c;
      param_1[4] = (uint)local_68;
      local_c0 = local_1c0;
      pcStack_bc = pcStack_1bc;
      goto LAB_01229928;
    }
    goto LAB_012290f8;
  case 4:
    local_60 = pcStack_1a8;
    pbStack_5c = pbStack_1a4;
    local_68 = &DAT_80000004;
    break;
  case 0xc:
    if (pbStack_1a4 == &DAT_00000019) {
      iVar8 = thunk_FUN_01bed842(pcStack_1a8,"quick_ramping_time_down_s",0x19);
      if (iVar8 == 0) {
        local_68 = (char *)0x80000017;
      }
      else {
LAB_0122905c:
        pbVar17 = &DAT_00000001;
        pcVar9 = (char *)FUN_01298504(pbVar3,1);
        if (pcVar9 == (char *)0x0) {
          local_244 = pbVar3;
LAB_01229c60:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(pbVar17,local_244);
        }
        pbVar17 = pbVar3;
LAB_0122907c:
        FUN_01bed4e2(pcVar9,pcVar14,pbVar3);
        local_68 = &DAT_8000000c;
        pbStack_5c = pbVar3;
        local_64 = pbVar17;
        local_60 = pcVar9;
      }
    }
    else if (pbStack_1a4 == &DAT_00000017) {
      iVar8 = thunk_FUN_01bed842(pcStack_1a8,"quick_ramping_time_up_s",0x17);
      if (iVar8 != 0) goto LAB_0122905c;
      local_68 = &DAT_80000016;
    }
    else {
      if (pbStack_1a4 != &DAT_0000000a) {
        pbVar17 = (byte *)0x0;
        if ((int)pbStack_1a4 < 0) goto LAB_01229c60;
        if (pbStack_1a4 != (byte *)0x0) goto LAB_0122905c;
        pcVar9 = &DAT_00000001;
        goto LAB_0122907c;
      }
      iVar8 = thunk_FUN_01bed842(pcStack_1a8,
                                 "asic_boostvariant index 0 <= i < 4struct ConfigDescriptorCommonstruct DefaultTemperatureDescriptor"
                                 ,10);
      if (iVar8 != 0) goto LAB_0122905c;
      local_68 = (char *)0x80000015;
    }
    goto LAB_012290b0;
  case 0xd:
    if (pcStack_1a8 == &DAT_00000019) {
      iVar8 = thunk_FUN_01bed842(pbStack_1ac,"quick_ramping_time_down_s",0x19);
      if (iVar8 != 0) goto LAB_01228f4c;
      pcVar14 = (char *)0x80000017;
LAB_012290e0:
      ppcVar10 = ppcVar15;
    }
    else {
      if (pcStack_1a8 == &DAT_00000017) {
        iVar8 = thunk_FUN_01bed842(pbStack_1ac,"quick_ramping_time_up_s",0x17);
        if (iVar8 != 0) goto LAB_01228f4c;
        pcVar14 = &DAT_80000016;
        goto LAB_012290e0;
      }
      if ((pcStack_1a8 == &DAT_0000000a) &&
         (iVar8 = thunk_FUN_01bed842(pbStack_1ac,
                                     "asic_boostvariant index 0 <= i < 4struct ConfigDescriptorCommonstruct DefaultTemperatureDescriptor"
                                     ,10), iVar8 == 0)) {
        pcVar14 = (char *)0x80000015;
        goto LAB_012290e0;
      }
LAB_01228f4c:
      local_64 = pbVar25;
      local_68 = (char *)0x8000000d;
    }
    *ppcVar10 = pcVar14;
    local_70 = (char *)0x2;
    break;
  case 0xe:
    if (pbStack_1a4 == &DAT_00000019) {
      if (*pcStack_1a8 == 'q') {
        cVar2 = pcStack_1a8[1];
        bVar26 = cVar2 == 'u';
        if (bVar26) {
          cVar2 = pcStack_1a8[2];
        }
        if (bVar26 && cVar2 == 'i') {
          cVar2 = pcStack_1a8[3];
          bVar26 = cVar2 == 'c';
          if (bVar26) {
            cVar2 = pcStack_1a8[4];
          }
          if (bVar26 && cVar2 == 'k') {
            cVar2 = pcStack_1a8[5];
            bVar26 = cVar2 == '_';
            if (bVar26) {
              cVar2 = pcStack_1a8[6];
            }
            if (bVar26 && cVar2 == 'r') {
              cVar2 = pcStack_1a8[7];
              bVar26 = cVar2 == 'a';
              if (bVar26) {
                cVar2 = pcStack_1a8[8];
              }
              if (bVar26 && cVar2 == 'm') {
                cVar2 = pcStack_1a8[9];
                bVar26 = cVar2 == 'p';
                if (bVar26) {
                  cVar2 = pcStack_1a8[10];
                }
                if (bVar26 && cVar2 == 'i') {
                  cVar2 = pcStack_1a8[0xb];
                  bVar26 = cVar2 == 'n';
                  if (bVar26) {
                    cVar2 = pcStack_1a8[0xc];
                  }
                  if (bVar26 && cVar2 == 'g') {
                    cVar2 = pcStack_1a8[0xd];
                    bVar26 = cVar2 == '_';
                    if (bVar26) {
                      cVar2 = pcStack_1a8[0xe];
                    }
                    if (bVar26 && cVar2 == 't') {
                      cVar2 = pcStack_1a8[0xf];
                      bVar26 = cVar2 == 'i';
                      if (bVar26) {
                        cVar2 = pcStack_1a8[0x10];
                      }
                      if (bVar26 && cVar2 == 'm') {
                        cVar2 = pcStack_1a8[0x11];
                        bVar26 = cVar2 == 'e';
                        if (bVar26) {
                          cVar2 = pcStack_1a8[0x12];
                        }
                        if (bVar26 && cVar2 == '_') {
                          cVar2 = pcStack_1a8[0x13];
                          bVar26 = cVar2 == 'd';
                          if (bVar26) {
                            cVar2 = pcStack_1a8[0x14];
                          }
                          if (bVar26 && cVar2 == 'o') {
                            cVar2 = pcStack_1a8[0x15];
                            bVar26 = cVar2 == 'w';
                            if (bVar26) {
                              cVar2 = pcStack_1a8[0x16];
                            }
                            if (bVar26 && cVar2 == 'n') {
                              cVar2 = pcStack_1a8[0x17];
                              bVar26 = cVar2 == '_';
                              if (bVar26) {
                                cVar2 = pcStack_1a8[0x18];
                              }
                              if (bVar26 && cVar2 == 's') {
                                local_68 = (char *)0x80000017;
                                goto LAB_01228fec;
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
          }
        }
      }
LAB_01228fb0:
      pbVar17 = &DAT_00000001;
      pcVar9 = (char *)FUN_01298504(pbStack_1a4,1);
      if (pcVar9 == (char *)0x0) {
        local_240 = pbVar3;
LAB_01229c4c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(pbVar17,local_240);
      }
      pbVar17 = pbVar3;
LAB_01228fcc:
      FUN_01bed4e2(pcVar9,pcVar14,pbVar3);
      pbStack_5c = pbVar3;
      local_68 = (char *)0x8000000e;
      local_64 = pbVar17;
      local_60 = pcVar9;
    }
    else {
      if (pbStack_1a4 == &DAT_00000017) {
        if (*pcStack_1a8 == 'q') {
          cVar2 = pcStack_1a8[1];
          bVar26 = cVar2 == 'u';
          if (bVar26) {
            cVar2 = pcStack_1a8[2];
          }
          if (bVar26 && cVar2 == 'i') {
            cVar2 = pcStack_1a8[3];
            bVar26 = cVar2 == 'c';
            if (bVar26) {
              cVar2 = pcStack_1a8[4];
            }
            if (bVar26 && cVar2 == 'k') {
              cVar2 = pcStack_1a8[5];
              bVar26 = cVar2 == '_';
              if (bVar26) {
                cVar2 = pcStack_1a8[6];
              }
              if (bVar26 && cVar2 == 'r') {
                cVar2 = pcStack_1a8[7];
                bVar26 = cVar2 == 'a';
                if (bVar26) {
                  cVar2 = pcStack_1a8[8];
                }
                if (bVar26 && cVar2 == 'm') {
                  cVar2 = pcStack_1a8[9];
                  bVar26 = cVar2 == 'p';
                  if (bVar26) {
                    cVar2 = pcStack_1a8[10];
                  }
                  if (bVar26 && cVar2 == 'i') {
                    cVar2 = pcStack_1a8[0xb];
                    bVar26 = cVar2 == 'n';
                    if (bVar26) {
                      cVar2 = pcStack_1a8[0xc];
                    }
                    if (bVar26 && cVar2 == 'g') {
                      cVar2 = pcStack_1a8[0xd];
                      bVar26 = cVar2 == '_';
                      if (bVar26) {
                        cVar2 = pcStack_1a8[0xe];
                      }
                      if (bVar26 && cVar2 == 't') {
                        cVar2 = pcStack_1a8[0xf];
                        bVar26 = cVar2 == 'i';
                        if (bVar26) {
                          cVar2 = pcStack_1a8[0x10];
                        }
                        if (bVar26 && cVar2 == 'm') {
                          cVar2 = pcStack_1a8[0x11];
                          bVar26 = cVar2 == 'e';
                          if (bVar26) {
                            cVar2 = pcStack_1a8[0x12];
                          }
                          if (bVar26 && cVar2 == '_') {
                            cVar2 = pcStack_1a8[0x13];
                            bVar26 = cVar2 == 'u';
                            if (bVar26) {
                              cVar2 = pcStack_1a8[0x14];
                            }
                            if (bVar26 && cVar2 == 'p') {
                              cVar2 = pcStack_1a8[0x15];
                              bVar26 = cVar2 == '_';
                              if (bVar26) {
                                cVar2 = pcStack_1a8[0x16];
                              }
                              if (bVar26 && cVar2 == 's') {
                                local_68 = &DAT_80000016;
                                goto LAB_01228fec;
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
          }
        }
        goto LAB_01228fb0;
      }
      if (pbStack_1a4 != &DAT_0000000a) {
        pbVar17 = (byte *)0x0;
        if ((int)pbStack_1a4 < 0) goto LAB_01229c4c;
        if (pbStack_1a4 != (byte *)0x0) goto LAB_01228fb0;
        pcVar9 = &DAT_00000001;
        goto LAB_01228fcc;
      }
      cVar2 = *pcStack_1a8;
      bVar26 = cVar2 == 'a';
      if (bVar26) {
        cVar2 = pcStack_1a8[1];
      }
      bVar27 = bVar26 && cVar2 == 's';
      if (bVar26 && cVar2 == 's') {
        bVar27 = pcStack_1a8[2] == 'i';
      }
      if ((!bVar27) || (pcStack_1a8[3] != 'c')) goto LAB_01228fb0;
      cVar2 = pcStack_1a8[4];
      bVar26 = cVar2 != '_';
      if (!bVar26) {
        cVar2 = pcStack_1a8[5];
      }
      if (bVar26 || cVar2 != 'b') goto LAB_01228fb0;
      cVar2 = pcStack_1a8[6];
      bVar26 = cVar2 != 'o';
      if (!bVar26) {
        cVar2 = pcStack_1a8[7];
      }
      if (bVar26 || cVar2 != 'o') goto LAB_01228fb0;
      cVar2 = pcStack_1a8[8];
      bVar26 = cVar2 != 's';
      if (!bVar26) {
        cVar2 = pcStack_1a8[9];
      }
      if (bVar26 || cVar2 != 't') goto LAB_01228fb0;
      local_68 = (char *)0x80000015;
      local_64 = pbStack_1ec;
    }
LAB_01228fec:
    local_70 = (char *)0x2;
LAB_012290b0:
    FUN_019bb7e0(pbVar25,pcVar14);
    goto LAB_012290f8;
  case 0xf:
    if (pcStack_1a8 == &DAT_00000019) {
      bVar1 = *pbStack_1ac;
      bVar26 = bVar1 == 0x71;
      if (bVar26) {
        bVar1 = pbStack_1ac[1];
      }
      if (bVar26 && bVar1 == 0x75) {
        bVar1 = pbStack_1ac[2];
        bVar26 = bVar1 == 0x69;
        if (bVar26) {
          bVar1 = pbStack_1ac[3];
        }
        if (bVar26 && bVar1 == 99) {
          bVar1 = pbStack_1ac[4];
          bVar26 = bVar1 == 0x6b;
          if (bVar26) {
            bVar1 = pbStack_1ac[5];
          }
          if (bVar26 && bVar1 == 0x5f) {
            bVar1 = pbStack_1ac[6];
            bVar26 = bVar1 == 0x72;
            if (bVar26) {
              bVar1 = pbStack_1ac[7];
            }
            if (bVar26 && bVar1 == 0x61) {
              bVar1 = pbStack_1ac[8];
              bVar26 = bVar1 == 0x6d;
              if (bVar26) {
                bVar1 = pbStack_1ac[9];
              }
              if (bVar26 && bVar1 == 0x70) {
                bVar1 = pbStack_1ac[10];
                bVar26 = bVar1 == 0x69;
                if (bVar26) {
                  bVar1 = pbStack_1ac[0xb];
                }
                if (bVar26 && bVar1 == 0x6e) {
                  bVar1 = pbStack_1ac[0xc];
                  bVar26 = bVar1 == 0x67;
                  if (bVar26) {
                    bVar1 = pbStack_1ac[0xd];
                  }
                  if (bVar26 && bVar1 == 0x5f) {
                    bVar1 = pbStack_1ac[0xe];
                    bVar26 = bVar1 == 0x74;
                    if (bVar26) {
                      bVar1 = pbStack_1ac[0xf];
                    }
                    if (bVar26 && bVar1 == 0x69) {
                      bVar1 = pbStack_1ac[0x10];
                      bVar26 = bVar1 == 0x6d;
                      if (bVar26) {
                        bVar1 = pbStack_1ac[0x11];
                      }
                      if (bVar26 && bVar1 == 0x65) {
                        bVar1 = pbStack_1ac[0x12];
                        bVar26 = bVar1 == 0x5f;
                        if (bVar26) {
                          bVar1 = pbStack_1ac[0x13];
                        }
                        if (bVar26 && bVar1 == 100) {
                          bVar1 = pbStack_1ac[0x14];
                          bVar26 = bVar1 == 0x6f;
                          if (bVar26) {
                            bVar1 = pbStack_1ac[0x15];
                          }
                          if (bVar26 && bVar1 == 0x77) {
                            bVar1 = pbStack_1ac[0x16];
                            bVar26 = bVar1 == 0x6e;
                            if (bVar26) {
                              bVar1 = pbStack_1ac[0x17];
                            }
                            if (bVar26 && bVar1 == 0x5f) {
                              bVar1 = pbStack_1ac[0x18];
                              pcVar14 = (char *)0x80000017;
                              goto LAB_01228e38;
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
        }
      }
LAB_01228f74:
      local_64 = pbStack_1ac;
      local_68 = (char *)0x8000000f;
      pcVar14 = pcStack_1a8;
      ppcVar15 = ppcVar10;
    }
    else {
      if (pcStack_1a8 == &DAT_00000017) {
        bVar1 = *pbStack_1ac;
        bVar26 = bVar1 == 0x71;
        if (bVar26) {
          bVar1 = pbStack_1ac[1];
        }
        if (bVar26 && bVar1 == 0x75) {
          bVar1 = pbStack_1ac[2];
          bVar26 = bVar1 == 0x69;
          if (bVar26) {
            bVar1 = pbStack_1ac[3];
          }
          if (bVar26 && bVar1 == 99) {
            bVar1 = pbStack_1ac[4];
            bVar26 = bVar1 == 0x6b;
            if (bVar26) {
              bVar1 = pbStack_1ac[5];
            }
            if (bVar26 && bVar1 == 0x5f) {
              bVar1 = pbStack_1ac[6];
              bVar26 = bVar1 == 0x72;
              if (bVar26) {
                bVar1 = pbStack_1ac[7];
              }
              if (bVar26 && bVar1 == 0x61) {
                bVar1 = pbStack_1ac[8];
                bVar26 = bVar1 == 0x6d;
                if (bVar26) {
                  bVar1 = pbStack_1ac[9];
                }
                if (bVar26 && bVar1 == 0x70) {
                  bVar1 = pbStack_1ac[10];
                  bVar26 = bVar1 == 0x69;
                  if (bVar26) {
                    bVar1 = pbStack_1ac[0xb];
                  }
                  if (bVar26 && bVar1 == 0x6e) {
                    bVar1 = pbStack_1ac[0xc];
                    bVar26 = bVar1 == 0x67;
                    if (bVar26) {
                      bVar1 = pbStack_1ac[0xd];
                    }
                    if (bVar26 && bVar1 == 0x5f) {
                      bVar1 = pbStack_1ac[0xe];
                      bVar26 = bVar1 == 0x74;
                      if (bVar26) {
                        bVar1 = pbStack_1ac[0xf];
                      }
                      if (bVar26 && bVar1 == 0x69) {
                        bVar1 = pbStack_1ac[0x10];
                        bVar26 = bVar1 == 0x6d;
                        if (bVar26) {
                          bVar1 = pbStack_1ac[0x11];
                        }
                        if (bVar26 && bVar1 == 0x65) {
                          bVar1 = pbStack_1ac[0x12];
                          bVar26 = bVar1 == 0x5f;
                          if (bVar26) {
                            bVar1 = pbStack_1ac[0x13];
                          }
                          if (bVar26 && bVar1 == 0x75) {
                            bVar1 = pbStack_1ac[0x14];
                            bVar26 = bVar1 == 0x70;
                            if (bVar26) {
                              bVar1 = pbStack_1ac[0x15];
                            }
                            if (bVar26 && bVar1 == 0x5f) {
                              bVar1 = pbStack_1ac[0x16];
                              pcVar14 = &DAT_80000016;
LAB_01228e38:
                              bVar26 = bVar1 == 0x73;
                              goto LAB_01228c2c;
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
        }
        goto LAB_01228f74;
      }
      if (pcStack_1a8 == &DAT_0000000a) {
        puVar13 = (uint *)(uint)*pbStack_1ac;
      }
      if (pcStack_1a8 != &DAT_0000000a || puVar13 != (uint *)0x61) goto LAB_01228f74;
      bVar1 = pbStack_1ac[1];
      bVar26 = bVar1 != 0x73;
      if (!bVar26) {
        bVar1 = pbStack_1ac[2];
      }
      if (bVar26 || bVar1 != 0x69) goto LAB_01228f74;
      bVar1 = pbStack_1ac[3];
      bVar26 = bVar1 != 99;
      if (!bVar26) {
        bVar1 = pbStack_1ac[4];
      }
      if (bVar26 || bVar1 != 0x5f) goto LAB_01228f74;
      bVar1 = pbStack_1ac[5];
      bVar26 = bVar1 != 0x62;
      if (!bVar26) {
        bVar1 = pbStack_1ac[6];
      }
      if (bVar26 || bVar1 != 0x6f) goto LAB_01228f74;
      bVar1 = pbStack_1ac[7];
      bVar26 = bVar1 != 0x6f;
      if (!bVar26) {
        bVar1 = pbStack_1ac[8];
      }
      if (bVar26 || bVar1 != 0x73) goto LAB_01228f74;
      pcVar14 = (char *)0x80000015;
      bVar26 = pbStack_1ac[9] == 0x74;
LAB_01228c2c:
      if (!bVar26) goto LAB_01228f74;
    }
    *ppcVar15 = pcVar14;
  }
  FUN_012222e0(&local_180);
LAB_012290f8:
  local_1c0 = local_64;
  pcStack_1bc = local_60;
  local_c0 = local_1c0;
  pcStack_bc = pcStack_1bc;
  if (local_68 != &DAT_80000018) {
    pcVar14 = &DAT_00000003;
    if (&DAT_80000014 < local_68) {
      pcVar14 = local_68 + 0x7fffffeb;
    }
                    /* WARNING: Could not recover jumptable at 0x0122913c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((int)&DAT_01229140 + (&DAT_01229140)[(int)pcVar14]))();
    return;
  }
LAB_012294f8:
  pbVar25 = (byte *)0x0;
  local_d0 = 8;
  local_c8 = &DAT_01c24b6c;
  local_e0[0] = (byte *)0x80000015;
  local_cc = 8;
  puVar11 = (undefined4 *)((uint)&local_c0 | 4);
  puVar12 = (undefined4 *)((uint)local_e0 | 4);
  uVar16 = 3;
  local_200 = (byte *)0x0;
  local_c4 = 3;
  local_204 = (char *)0x2;
  local_20c = (char *)0x2;
LAB_012295a0:
  uVar19 = local_c4;
  puVar4 = local_c8;
  iVar8 = local_cc;
  uVar24 = (undefined1)uVar16;
  iVar18 = local_d0;
  if (local_d0 == local_cc) {
switchD_01229630_caseD_4:
    local_d0 = iVar18;
    if (local_20c == (char *)0x2 && pbVar25 == (byte *)0x0) {
      local_20c = (char *)0x0;
      pbVar25 = (byte *)0x0;
    }
    if (local_204 == (char *)0x2 && local_200 == (byte *)0x0) {
      local_204 = (char *)0x0;
      local_200 = (byte *)0x0;
    }
    if (uVar16 == 3) {
      uVar24 = 2;
    }
    local_e8 = CONCAT31(local_e8._1_3_,uVar24);
    local_110 = (char *)0x2;
    local_108 = local_20c;
    pbStack_104 = pbVar25;
    local_100 = unaff_d9;
    local_f8 = local_204;
    pbStack_f4 = local_200;
    local_f0 = unaff_d8;
    if (local_e0[0] != (byte *)0x80000015) goto LAB_012297c4;
    goto LAB_012297dc;
  }
  while( true ) {
    FUN_01962c44(local_90,iVar18,puVar4,uVar19);
    iVar18 = iVar18 + 0x20;
    if (local_90[0] != -0x7fffffeb) break;
    if (iVar18 == iVar8) goto switchD_01229630_caseD_4;
  }
  local_d0 = iVar18;
  if (local_e0[0] != (byte *)0x80000015) {
    FUN_0123b780(local_e0);
  }
  local_e0[0] = local_80;
  FUN_012234d4(&local_70,local_90);
  local_110 = local_70;
  pbVar3 = local_e0[0];
  uVar5 = (undefined1)local_6c;
  if (local_70 != (char *)0x2) {
    FUN_01bed4e2(&local_c0,(int)&local_6c + 1,0x2b);
    FUN_01bed4e2((uint)&local_110 | 5,&local_c0,0x2b);
    local_10c = (byte *)CONCAT31(local_10c._1_3_,uVar5);
    goto LAB_01229a18;
  }
  iVar18 = local_d0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((uint)local_6c & 0xff) {
  case 0:
    if (uVar16 == 3) {
      local_e0[0] = (byte *)0x80000015;
      if (pbVar3 == (byte *)0x80000015) {
        FUN_01a429c4(&local_70,&DAT_0056ad38,0x10);
      }
      else {
        uVar19 = puVar12[1];
        uVar22 = puVar12[2];
        *puVar11 = *puVar12;
        puVar11[1] = uVar19;
        puVar11[2] = uVar22;
        local_c0 = pbVar3;
        FUN_0123c38c(&local_70,&local_c0);
      }
      pcVar14 = local_70;
      uVar24 = (undefined1)local_6c;
      uVar16 = (uint)local_6c & 0xff;
      if (local_70 != (char *)0x2) {
        FUN_01bed4e2((uint)&local_110 | 5,(int)&local_6c + 1,0x2b);
        local_10c = (byte *)CONCAT31(local_10c._1_3_,uVar24);
        local_110 = pcVar14;
        goto LAB_01229a18;
      }
      goto LAB_012295a0;
    }
    FUN_0123c090(&local_70,"enabled",7);
    break;
  case 1:
    if (!(local_20c != (char *)0x2 || pbVar25 != (byte *)0x0)) {
      FUN_0123bbd0(&local_70,local_e0);
      if (local_70 != (char *)0x2) {
LAB_012299dc:
        local_100 = CONCAT44(pbStack_5c,local_60);
        local_f8 = local_58;
        pbStack_f4 = pbStack_54;
        local_f0 = CONCAT44(pbStack_4c,pcStack_50);
        local_e8 = uStack_48;
        uStack_e4 = uStack_44;
        local_10c = local_6c;
        local_108 = local_68;
        pbStack_104 = local_64;
        local_110 = local_70;
        goto LAB_01229a18;
      }
      unaff_d9 = CONCAT44(pbStack_5c,local_60);
      local_20c = local_68;
      pbVar25 = local_64;
      goto LAB_012295a0;
    }
    FUN_0123c090(&local_70,"frequency",9);
    break;
  case 2:
    if (!(local_204 != (char *)0x2 || local_200 != (byte *)0x0)) {
      FUN_0123bbd0(&local_70,local_e0);
      if (local_70 != (char *)0x2) goto LAB_012299dc;
      unaff_d8 = CONCAT44(pbStack_5c,local_60);
      local_204 = local_68;
      local_200 = local_64;
      goto LAB_012295a0;
    }
    FUN_0123c090(&local_70,"voltage",7);
    break;
  case 3:
    goto switchD_01229630_caseD_3;
  case 4:
    goto switchD_01229630_caseD_4;
  }
  local_110 = local_70;
  local_10c = local_6c;
  local_108 = local_68;
  pbStack_104 = local_64;
  local_100 = CONCAT44(pbStack_5c,local_60);
  local_f8 = local_58;
  pbStack_f4 = pbStack_54;
  local_f0 = CONCAT44(pbStack_4c,pcStack_50);
  local_e8 = uStack_48;
  uStack_e4 = uStack_44;
  goto LAB_01229a18;
switchD_01229630_caseD_3:
  FUN_0123bc2c(&local_70,local_e0);
  if (local_70 != (char *)0x2) goto LAB_01229a28;
  goto LAB_012295a0;
LAB_01229a28:
  *puVar7 = local_6c;
  puVar7[1] = local_68;
  puVar7[2] = local_64;
  puVar7[3] = local_60;
  puVar7[4] = pbStack_5c;
  puVar7[5] = local_58;
  puVar7[6] = pbStack_54;
  puVar7[7] = pcStack_50;
  puVar7[8] = pbStack_4c;
  puVar7[9] = uStack_48;
  puVar7[10] = uStack_44;
  local_110 = local_70;
LAB_01229a18:
  if (local_e0[0] != (byte *)0x80000015) {
LAB_012297c4:
    FUN_0123b780(local_e0);
  }
  if (local_110 == (char *)0x2) {
LAB_012297dc:
    local_130 = (uint)local_100;
    uStack_12c = local_100._4_4_;
    pcStack_128 = local_f8;
    pbStack_124 = pbStack_f4;
    local_120 = (uint)local_f0;
    uStack_11c = local_f0._4_4_;
    uStack_118 = local_e8;
    uStack_114 = uStack_e4;
    local_150 = (uint)local_100;
    uStack_14c = local_100._4_4_;
    pcStack_148 = local_f8;
    pbStack_144 = pbStack_f4;
    local_140 = (uint)local_f0;
    uStack_13c = local_f0._4_4_;
    uStack_138 = local_e8;
    uStack_134 = uStack_e4;
    pcVar14 = local_108;
    pbVar25 = pbStack_104;
    if (local_108 != &DAT_00000003 || pbStack_104 != (byte *)0x0) goto LAB_012298b0;
    FUN_01a429c4(&local_180,
                 "can only flatten structs and mapsinvalid urlrequest failedinvalid index typefailed to parse indexinvalid index pathfield index 0 <= i < 3"
                 ,0x21);
    if (local_180 != 2) {
      puVar13 = (uint *)((uint)&local_180 | 4);
      local_1b0 = *puVar13;
      pbStack_1ac = (byte *)puVar13[1];
      pcStack_1a8 = (char *)puVar13[2];
      pbStack_1a4 = (byte *)puVar13[3];
      uStack_1a0 = puVar13[4];
      local_19c = puVar13[5];
      uStack_198 = puVar13[6];
      uStack_194 = puVar13[7];
      uStack_190 = puVar13[8];
      uStack_18c = puVar13[9];
      uStack_188 = puVar13[10];
      param_1[3] = local_1b0;
      param_1[4] = (uint)pbStack_1ac;
      param_1[5] = (uint)pcStack_1a8;
      param_1[6] = (uint)pbStack_1a4;
      param_1[7] = uStack_1a0;
      param_1[8] = local_19c;
      param_1[9] = uStack_198;
      param_1[10] = uStack_194;
      param_1[0xb] = uStack_190;
      param_1[0xc] = uStack_18c;
      param_1[0xd] = uStack_188;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_180;
      goto LAB_01229928;
    }
  }
  else {
    FUN_00a25ec4(&local_110);
    pbVar25 = (byte *)0x0;
    pcVar14 = (char *)0x2;
LAB_012298b0:
    local_170 = local_130;
    uStack_16c = uStack_12c;
    pcStack_168 = pcStack_128;
    local_164 = pbStack_124;
    local_160 = local_120;
    uStack_15c = uStack_11c;
    uStack_158 = uStack_118;
    uStack_154 = uStack_114;
    local_178 = pcVar14;
    local_174 = pbVar25;
    local_150 = local_130;
    uStack_14c = uStack_12c;
    pcStack_148 = pcStack_128;
    pbStack_144 = pbStack_124;
    local_140 = local_120;
    uStack_13c = uStack_11c;
    uStack_138 = uStack_118;
    uStack_134 = uStack_114;
  }
  *puVar6 = (uint)local_178;
  puVar6[1] = (uint)local_174;
  puVar6[2] = local_170;
  puVar6[3] = uStack_16c;
  puVar6[4] = (uint)pcStack_168;
  puVar6[5] = (uint)local_164;
  puVar6[6] = local_160;
  puVar6[7] = uStack_15c;
  puVar6[8] = uStack_158;
  puVar6[9] = uStack_154;
  uVar16 = puVar6[1];
  uVar21 = puVar6[2];
  uVar20 = puVar6[3];
  uVar23 = puVar6[4];
  *param_1 = *puVar6;
  param_1[1] = uVar16;
  param_1[2] = uVar21;
  param_1[3] = uVar20;
  param_1[4] = uVar23;
  uVar16 = puVar6[6];
  uVar21 = puVar6[7];
  uVar20 = puVar6[8];
  uVar23 = puVar6[9];
  param_1[5] = puVar6[5];
  param_1[6] = uVar16;
  param_1[7] = uVar21;
  param_1[8] = uVar20;
  param_1[9] = uVar23;
  param_1[10] = 0;
  param_1[0xb] = local_230;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xe) = 2;
  param_1[0xd] = local_22c;
LAB_01229928:
  FUN_0126cce4(&local_1cc);
  if (*param_1 == 3 && param_1[1] == 0) {
    FUN_01222c4c(&local_1f8);
  }
  else {
    FUN_01222c98(&local_70,&local_1f8);
    if (local_70 != (char *)0x2) {
      param_1[2] = (uint)local_70;
      param_1[3] = (uint)local_6c;
      param_1[4] = (uint)local_68;
      param_1[5] = (uint)local_64;
      param_1[6] = (uint)local_60;
      param_1[7] = (uint)pbStack_5c;
      param_1[8] = (uint)local_58;
      param_1[9] = (uint)pbStack_54;
      param_1[10] = (uint)pcStack_50;
      param_1[0xb] = (uint)pbStack_4c;
      param_1[0xc] = uStack_48;
      param_1[0xd] = uStack_44;
      *param_1 = 3;
      param_1[1] = 0;
    }
  }
  return;
}

