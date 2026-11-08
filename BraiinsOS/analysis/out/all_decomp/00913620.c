// FUN_00913620 @ 00913620 size=3900 calls_out=14 calls_in=1
// strings: autotuning | management | autotuning | management | performance_scaling | performance_scaling

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00913620(undefined4 *param_1,uint *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint **ppuVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  char *pcVar14;
  uint *puVar15;
  bool bVar16;
  undefined8 uVar17;
  uint *local_270;
  uint *local_26c;
  uint *local_268;
  uint *local_260;
  uint *local_25c;
  uint *local_258;
  uint *local_254;
  uint *local_24c;
  uint *local_248;
  int local_214;
  uint *local_210;
  uint *local_20c;
  int local_208;
  uint *local_204;
  uint *local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  uint *local_1f0;
  uint *puStack_1ec;
  uint *puStack_1e8;
  uint *local_1e0;
  uint *puStack_1dc;
  uint *puStack_1d8;
  uint *puStack_1d4;
  uint *puStack_1d0;
  uint *puStack_1cc;
  uint *local_1c8;
  uint *puStack_1c4;
  uint *puStack_1c0;
  uint *puStack_1bc;
  uint *puStack_1b8;
  uint *local_1b4;
  uint *local_1b0;
  uint *puStack_1ac;
  uint *puStack_1a8;
  uint *puStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  uint *local_198;
  uint *puStack_194;
  uint *puStack_190;
  uint *puStack_18c;
  uint *local_188;
  uint *puStack_184;
  uint *puStack_180;
  uint *puStack_17c;
  uint *puStack_178;
  uint *puStack_174;
  uint *local_170;
  uint *puStack_16c;
  uint *puStack_168;
  uint *puStack_164;
  uint *local_160;
  uint *local_15c;
  uint *local_158;
  uint *puStack_154;
  uint *puStack_150;
  uint *puStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  uint *puStack_140;
  uint *puStack_13c;
  uint *puStack_138;
  uint *puStack_134;
  uint *local_130;
  uint *local_12c;
  uint *puStack_128;
  uint *puStack_124;
  uint *puStack_120;
  uint *puStack_11c;
  uint *local_118;
  uint *puStack_114;
  uint *puStack_110;
  uint *puStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  uint *local_100;
  uint *local_fc;
  uint *local_f8;
  uint *local_f4;
  uint *local_f0;
  uint *local_ec;
  uint *local_e8;
  uint *puStack_e4;
  uint *local_e0;
  uint *puStack_dc;
  uint *local_d8;
  uint *puStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint *local_c8;
  uint *local_c4;
  uint *local_c0;
  uint *local_bc;
  
  local_208 = 0;
  local_214 = 8;
  puVar9 = (undefined4 *)((uint)&local_188 | 4);
  local_200 = (uint *)0x0;
  puVar15 = (uint *)0x3;
  local_1f4 = 0;
  local_1fc = 0;
  local_204 = (uint *)0x3;
  local_210 = (uint *)0x3;
  local_1f8 = 8;
  local_20c = (uint *)0x0;
  puVar7 = param_2;
LAB_009136e8:
  do {
    do {
      puVar6 = puVar7;
      if (puVar6 == param_2 + param_3 * 8) {
LAB_0091425c:
        puVar7 = (uint *)&SUB_00000002;
        puVar6 = (uint *)0x0;
        if (local_210 != (uint *)0x3 || local_20c != (uint *)0x0) {
          local_188 = local_1e0;
          puStack_184 = puStack_1dc;
          puStack_180 = puStack_1d8;
          puStack_17c = puStack_1d4;
          puStack_178 = puStack_1d0;
          puStack_174 = puStack_1cc;
          puVar7 = local_210;
          puVar6 = local_20c;
        }
        puVar11 = (uint *)&SUB_00000002;
        puVar12 = (uint *)0x0;
        if (puVar15 != (uint *)0x3 || local_200 != (uint *)0x0) {
          local_170 = local_1c8;
          puStack_16c = puStack_1c4;
          puStack_168 = puStack_1c0;
          puStack_164 = puStack_1bc;
          local_160 = puStack_1b8;
          local_15c = local_1b4;
          local_158 = local_1b0;
          puStack_154 = puStack_1ac;
          puStack_150 = puStack_1a8;
          puStack_14c = puStack_1a4;
          local_148 = local_1a0;
          uStack_144 = uStack_19c;
          puStack_140 = local_198;
          puStack_13c = puStack_194;
          puStack_138 = puStack_190;
          puStack_134 = puStack_18c;
          puVar11 = puVar15;
          puVar12 = local_200;
        }
        if (local_204 == (uint *)0x3) {
          local_204 = (uint *)&SUB_00000002;
        }
        FUN_00900f94(&local_100,local_214,local_208);
        puVar13 = local_fc;
        puVar15 = local_100;
        local_130 = local_f8;
        local_12c = local_f4;
        puStack_128 = local_f0;
        puStack_124 = local_ec;
        puStack_120 = local_e8;
        puStack_11c = puStack_e4;
        local_118 = local_e0;
        puStack_114 = puStack_dc;
        puStack_110 = local_d8;
        puStack_10c = puStack_d4;
        uStack_108 = uStack_d0;
        uStack_104 = uStack_cc;
        if (!(local_100 != (uint *)0x3 || local_fc != (uint *)0x0)) {
          param_1[2] = local_f8;
          param_1[3] = local_f4;
          param_1[4] = local_f0;
          param_1[5] = local_ec;
          param_1[6] = local_e8;
          param_1[7] = puStack_e4;
          param_1[8] = local_e0;
          param_1[9] = puStack_dc;
          param_1[10] = local_d8;
          param_1[0xb] = puStack_d4;
          param_1[0xc] = uStack_d0;
          param_1[0xd] = uStack_cc;
          *param_1 = 3;
          param_1[1] = 0;
          local_208 = local_1f4;
          local_214 = local_1f8;
          goto LAB_00914364;
        }
        FUN_016dd1aa(param_1 + 0xe,&local_c8,0xa0);
        local_214 = local_1f8;
        param_1[2] = local_130;
        param_1[3] = local_12c;
        param_1[4] = puStack_128;
        param_1[5] = puStack_124;
        param_1[6] = puStack_120;
        param_1[7] = puStack_11c;
        param_1[8] = local_118;
        param_1[9] = puStack_114;
        param_1[10] = puStack_110;
        param_1[0xb] = puStack_10c;
        param_1[0xc] = uStack_108;
        param_1[0xd] = uStack_104;
        param_1[0x38] = local_188;
        param_1[0x39] = puStack_184;
        param_1[0x3a] = puStack_180;
        param_1[0x3b] = puStack_17c;
        param_1[0x3c] = puStack_178;
        param_1[0x3d] = puStack_174;
        param_1[0x40] = local_170;
        param_1[0x41] = puStack_16c;
        param_1[0x42] = puStack_168;
        param_1[0x43] = puStack_164;
        param_1[0x44] = local_160;
        param_1[0x45] = local_15c;
        param_1[0x46] = local_158;
        param_1[0x47] = puStack_154;
        param_1[0x48] = puStack_150;
        param_1[0x49] = puStack_14c;
        param_1[0x4a] = local_148;
        param_1[0x4b] = uStack_144;
        param_1[0x4c] = puStack_140;
        param_1[0x4d] = puStack_13c;
        param_1[0x4e] = puStack_138;
        param_1[0x4f] = puStack_134;
        param_1[0x3e] = puVar11;
        param_1[0x3f] = puVar12;
        param_1[0x36] = puVar7;
        param_1[0x37] = puVar6;
        param_1[0x51] = local_248;
        param_1[0x52] = local_24c;
        *param_1 = puVar15;
        param_1[1] = puVar13;
        param_1[0x50] = local_204;
        FUN_00953170(local_1f8,local_1f4);
        goto LAB_00914414;
      }
      puVar7 = puVar6 + 8;
      uVar2 = *puVar6;
    } while (uVar2 == 0x80000015);
    uVar10 = 0x15;
    if ((int)uVar2 < 0) {
      uVar10 = uVar2 ^ 0x80000000;
    }
    puVar11 = &switchD_00913720::switchdataD_00913724;
    switch(uVar10) {
    case 1:
      local_f8 = (uint *)0x80000001;
      local_f4 = (uint *)CONCAT31(local_f4._1_3_,(char)puVar6[1]);
      break;
    default:
      FUN_008f7820(&local_100,puVar6,&local_130,&DAT_01867298);
      if (local_100 != (uint *)&SUB_00000002) {
        local_1f0 = local_f4;
        puStack_1ec = local_f0;
        puStack_1e8 = local_ec;
        param_1[8] = local_e8;
        param_1[9] = puStack_e4;
        param_1[10] = local_e0;
        param_1[0xb] = puStack_dc;
        param_1[0xc] = local_d8;
        param_1[0xd] = puStack_d4;
        *param_1 = 3;
        param_1[1] = 0;
        param_1[2] = local_100;
        param_1[3] = local_fc;
        param_1[4] = local_f8;
        param_1[5] = local_f4;
        param_1[6] = local_f0;
        param_1[7] = local_ec;
        local_170 = local_1f0;
        puStack_16c = puStack_1ec;
        puStack_168 = puStack_1e8;
        goto LAB_00914364;
      }
      break;
    case 4:
      local_f0 = (uint *)puVar6[2];
      local_ec = (uint *)puVar6[3];
      local_f8 = (uint *)&DAT_80000004;
      break;
    case 0xc:
      uVar2 = puVar6[2];
      puVar12 = (uint *)puVar6[3];
      if (puVar12 == (uint *)&DAT_00000013) {
        uVar17 = thunk_FUN_016dd50a(uVar2,"performance_scaling",0x13);
        puVar11 = (uint *)((ulonglong)uVar17 >> 0x20);
        if ((int)uVar17 != 0) {
LAB_00913b40:
          local_260 = (uint *)thunk_FUN_016d4a50(puVar12,puVar11);
          if (local_260 == (uint *)0x0) {
            uVar8 = 1;
            puVar11 = puVar12;
            goto LAB_00914594;
          }
          local_254 = puVar12;
          goto LAB_00913b5c;
        }
        local_f8 = (uint *)0x80000016;
      }
      else {
        if (puVar12 != (uint *)&DAT_0000000a) {
          uVar8 = 0;
          puVar11 = local_260;
          if ((int)puVar12 < 0) goto LAB_00914594;
          if (puVar12 != (uint *)0x0) goto LAB_00913b40;
          local_254 = (uint *)0x0;
          local_260 = (uint *)&DAT_00000001;
LAB_00913b5c:
          FUN_016dd1aa(local_260,uVar2,puVar12);
          local_f4 = local_254;
          local_f8 = (uint *)&DAT_8000000c;
          local_ec = puVar12;
          local_f0 = local_260;
          break;
        }
        iVar3 = thunk_FUN_016dd50a(uVar2,"autotuning",10);
        if (iVar3 == 0) {
          local_f8 = (uint *)0x80000015;
        }
        else {
          uVar17 = thunk_FUN_016dd50a(uVar2,"management",10);
          puVar11 = (uint *)((ulonglong)uVar17 >> 0x20);
          if ((int)uVar17 != 0) goto LAB_00913b40;
          local_f8 = (uint *)0x80000017;
        }
      }
      break;
    case 0xd:
      puVar11 = (uint *)puVar6[1];
      puVar12 = (uint *)puVar6[2];
      ppuVar4 = &local_f8;
      if (puVar12 == (uint *)0x13) {
        iVar3 = thunk_FUN_016dd50a(puVar11,"performance_scaling",0x13);
        if (iVar3 == 0) {
          puVar12 = (uint *)0x80000016;
          goto LAB_00913984;
        }
LAB_00913974:
        local_f4 = puVar11;
        local_f8 = (uint *)&DAT_8000000d;
        ppuVar4 = &local_f0;
      }
      else {
        if (puVar12 != (uint *)0xa) goto LAB_00913974;
        iVar3 = thunk_FUN_016dd50a(puVar11,"autotuning",10);
        if (iVar3 == 0) {
          puVar12 = (uint *)0x80000015;
        }
        else {
          iVar3 = thunk_FUN_016dd50a(puVar11,"management",10);
          if (iVar3 != 0) goto LAB_00913974;
          puVar12 = (uint *)0x80000017;
        }
      }
LAB_00913984:
      *ppuVar4 = puVar12;
      break;
    case 0xe:
      puVar12 = (uint *)puVar6[3];
      pcVar14 = (char *)puVar6[2];
      if (puVar12 == (uint *)&DAT_00000013) {
        if (*pcVar14 == 'p') {
          cVar1 = pcVar14[1];
          bVar16 = cVar1 == 'e';
          if (bVar16) {
            cVar1 = pcVar14[2];
          }
          if (bVar16 && cVar1 == 'r') {
            cVar1 = pcVar14[3];
            bVar16 = cVar1 == 'f';
            if (bVar16) {
              cVar1 = pcVar14[4];
            }
            if (bVar16 && cVar1 == 'o') {
              cVar1 = pcVar14[5];
              bVar16 = cVar1 == 'r';
              if (bVar16) {
                cVar1 = pcVar14[6];
              }
              if (bVar16 && cVar1 == 'm') {
                cVar1 = pcVar14[7];
                bVar16 = cVar1 == 'a';
                if (bVar16) {
                  cVar1 = pcVar14[8];
                }
                if (bVar16 && cVar1 == 'n') {
                  cVar1 = pcVar14[9];
                  bVar16 = cVar1 == 'c';
                  if (bVar16) {
                    cVar1 = pcVar14[10];
                  }
                  if (bVar16 && cVar1 == 'e') {
                    cVar1 = pcVar14[0xb];
                    bVar16 = cVar1 == '_';
                    if (bVar16) {
                      cVar1 = pcVar14[0xc];
                    }
                    if (bVar16 && cVar1 == 's') {
                      cVar1 = pcVar14[0xd];
                      bVar16 = cVar1 == 'c';
                      if (bVar16) {
                        cVar1 = pcVar14[0xe];
                      }
                      if (bVar16 && cVar1 == 'a') {
                        cVar1 = pcVar14[0xf];
                        bVar16 = cVar1 == 'l';
                        if (bVar16) {
                          cVar1 = pcVar14[0x10];
                        }
                        if (bVar16 && cVar1 == 'i') {
                          cVar1 = pcVar14[0x11];
                          bVar16 = cVar1 == 'n';
                          if (bVar16) {
                            cVar1 = pcVar14[0x12];
                          }
                          if (bVar16 && cVar1 == 'g') {
                            local_f8 = (uint *)0x80000016;
                            goto LAB_00913fac;
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
        goto LAB_00913f68;
      }
      if (puVar12 == (uint *)&DAT_0000000a) {
        cVar1 = *pcVar14;
        if (cVar1 == 'a') {
          if (pcVar14[1] == 'u') {
            cVar1 = pcVar14[2];
            bVar16 = cVar1 == 't';
            if (bVar16) {
              cVar1 = pcVar14[3];
            }
            if (bVar16 && cVar1 == 'o') {
              cVar1 = pcVar14[4];
              bVar16 = cVar1 == 't';
              if (bVar16) {
                cVar1 = pcVar14[5];
              }
              if (bVar16 && cVar1 == 'u') {
                cVar1 = pcVar14[6];
                bVar16 = cVar1 == 'n';
                if (bVar16) {
                  cVar1 = pcVar14[7];
                }
                if (bVar16 && cVar1 == 'i') {
                  cVar1 = pcVar14[8];
                  bVar16 = cVar1 == 'n';
                  if (bVar16) {
                    cVar1 = pcVar14[9];
                  }
                  if (bVar16 && cVar1 == 'g') {
                    local_f8 = (uint *)0x80000015;
                    goto LAB_00913fac;
                  }
                }
              }
            }
          }
LAB_00913f68:
          local_25c = (uint *)thunk_FUN_016d4a50(puVar12,puVar11);
          if (local_25c == (uint *)0x0) {
            uVar8 = 1;
            puVar11 = puVar12;
LAB_00914594:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar8,puVar11);
          }
          local_258 = puVar12;
          goto LAB_00913f84;
        }
        bVar16 = cVar1 != 'm';
        if (!bVar16) {
          cVar1 = pcVar14[1];
        }
        if (bVar16 || cVar1 != 'a') goto LAB_00913f68;
        cVar1 = pcVar14[2];
        bVar16 = cVar1 != 'n';
        if (!bVar16) {
          cVar1 = pcVar14[3];
        }
        if (bVar16 || cVar1 != 'a') goto LAB_00913f68;
        cVar1 = pcVar14[4];
        bVar16 = cVar1 != 'g';
        if (!bVar16) {
          cVar1 = pcVar14[5];
        }
        if (bVar16 || cVar1 != 'e') goto LAB_00913f68;
        cVar1 = pcVar14[6];
        bVar16 = cVar1 != 'm';
        if (!bVar16) {
          cVar1 = pcVar14[7];
        }
        if (bVar16 || cVar1 != 'e') goto LAB_00913f68;
        cVar1 = pcVar14[8];
        bVar16 = cVar1 != 'n';
        if (!bVar16) {
          cVar1 = pcVar14[9];
        }
        if (bVar16 || cVar1 != 't') goto LAB_00913f68;
        local_f8 = (uint *)0x80000017;
      }
      else {
        uVar8 = 0;
        puVar11 = local_25c;
        if ((int)puVar12 < 0) goto LAB_00914594;
        if (puVar12 != (uint *)0x0) goto LAB_00913f68;
        local_258 = (uint *)0x0;
        local_25c = (uint *)&DAT_00000001;
LAB_00913f84:
        FUN_016dd1aa(local_25c,pcVar14,puVar12);
        local_f4 = local_258;
        local_f8 = (uint *)0x8000000e;
        local_ec = puVar12;
        local_f0 = local_25c;
      }
LAB_00913fac:
      break;
    case 0xf:
      puVar11 = (uint *)puVar6[1];
      puVar12 = (uint *)puVar6[2];
      if (puVar12 == (uint *)0x13) {
        cVar1 = (char)*puVar11;
        bVar16 = cVar1 == 'p';
        if (bVar16) {
          cVar1 = *(char *)((int)puVar11 + 1);
        }
        if (bVar16 && cVar1 == 'e') {
          cVar1 = *(char *)((int)puVar11 + 2);
          bVar16 = cVar1 == 'r';
          if (bVar16) {
            cVar1 = *(char *)((int)puVar11 + 3);
          }
          if (bVar16 && cVar1 == 'f') {
            cVar1 = (char)puVar11[1];
            bVar16 = cVar1 == 'o';
            if (bVar16) {
              cVar1 = *(char *)((int)puVar11 + 5);
            }
            if (bVar16 && cVar1 == 'r') {
              cVar1 = *(char *)((int)puVar11 + 6);
              bVar16 = cVar1 == 'm';
              if (bVar16) {
                cVar1 = *(char *)((int)puVar11 + 7);
              }
              if (bVar16 && cVar1 == 'a') {
                cVar1 = (char)puVar11[2];
                bVar16 = cVar1 == 'n';
                if (bVar16) {
                  cVar1 = *(char *)((int)puVar11 + 9);
                }
                if (bVar16 && cVar1 == 'c') {
                  cVar1 = *(char *)((int)puVar11 + 10);
                  bVar16 = cVar1 == 'e';
                  if (bVar16) {
                    cVar1 = *(char *)((int)puVar11 + 0xb);
                  }
                  if (bVar16 && cVar1 == '_') {
                    cVar1 = (char)puVar11[3];
                    bVar16 = cVar1 == 's';
                    if (bVar16) {
                      cVar1 = *(char *)((int)puVar11 + 0xd);
                    }
                    if (bVar16 && cVar1 == 'c') {
                      cVar1 = *(char *)((int)puVar11 + 0xe);
                      bVar16 = cVar1 == 'a';
                      if (bVar16) {
                        cVar1 = *(char *)((int)puVar11 + 0xf);
                      }
                      if (bVar16 && cVar1 == 'l') {
                        cVar1 = (char)puVar11[4];
                        bVar16 = cVar1 == 'i';
                        if (bVar16) {
                          cVar1 = *(char *)((int)puVar11 + 0x11);
                        }
                        if (bVar16 && cVar1 == 'n') {
                          cVar1 = *(char *)((int)puVar11 + 0x12);
                          puVar13 = (uint *)0x80000016;
                          goto LAB_00914114;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_00913c34:
        local_f4 = puVar11;
        local_f8 = (uint *)&DAT_8000000f;
        puVar13 = puVar12;
        ppuVar4 = &local_f0;
      }
      else {
        if (puVar12 != (uint *)0xa) goto LAB_00913c34;
        cVar1 = (char)*puVar11;
        if (cVar1 == 'a') {
          cVar1 = *(char *)((int)puVar11 + 1);
          bVar16 = cVar1 == 'u';
          if (bVar16) {
            cVar1 = *(char *)((int)puVar11 + 2);
          }
          if (bVar16 && cVar1 == 't') {
            cVar1 = *(char *)((int)puVar11 + 3);
            bVar16 = cVar1 == 'o';
            if (bVar16) {
              cVar1 = (char)puVar11[1];
            }
            if (bVar16 && cVar1 == 't') {
              cVar1 = *(char *)((int)puVar11 + 5);
              bVar16 = cVar1 == 'u';
              if (bVar16) {
                cVar1 = *(char *)((int)puVar11 + 6);
              }
              if (bVar16 && cVar1 == 'n') {
                cVar1 = *(char *)((int)puVar11 + 7);
                bVar16 = cVar1 == 'i';
                if (bVar16) {
                  cVar1 = (char)puVar11[2];
                }
                if (bVar16 && cVar1 == 'n') {
                  cVar1 = *(char *)((int)puVar11 + 9);
                  puVar13 = (uint *)0x80000015;
LAB_00914114:
                  bVar16 = cVar1 == 'g';
                  goto LAB_00914118;
                }
              }
            }
          }
          goto LAB_00913c34;
        }
        bVar16 = cVar1 != 'm';
        if (!bVar16) {
          cVar1 = *(char *)((int)puVar11 + 1);
        }
        if ((bVar16 || cVar1 != 'a') || (*(char *)((int)puVar11 + 2) != 'n')) goto LAB_00913c34;
        cVar1 = *(char *)((int)puVar11 + 3);
        bVar16 = cVar1 != 'a';
        if (!bVar16) {
          cVar1 = (char)puVar11[1];
        }
        if (bVar16 || cVar1 != 'g') goto LAB_00913c34;
        cVar1 = *(char *)((int)puVar11 + 5);
        bVar16 = cVar1 != 'e';
        if (!bVar16) {
          cVar1 = *(char *)((int)puVar11 + 6);
        }
        if (bVar16 || cVar1 != 'm') goto LAB_00913c34;
        cVar1 = *(char *)((int)puVar11 + 7);
        bVar16 = cVar1 != 'e';
        if (!bVar16) {
          cVar1 = (char)puVar11[2];
        }
        if (bVar16 || cVar1 != 'n') goto LAB_00913c34;
        puVar13 = (uint *)0x80000017;
        bVar16 = *(char *)((int)puVar11 + 9) == 't';
LAB_00914118:
        ppuVar4 = &local_f8;
        if (!bVar16) goto LAB_00913c34;
      }
      *ppuVar4 = puVar13;
    }
    local_1f0 = local_f4;
    puStack_1ec = local_f0;
    puStack_1e8 = local_ec;
    if (local_f8 == (uint *)&DAT_80000018) goto LAB_0091425c;
    pcVar14 = (char *)0x3;
    if ((uint *)0x80000014 < local_f8) {
      pcVar14 = (char *)((int)local_f8 + 0x7fffffeb);
    }
    puVar11 = puVar6 + 4;
    if (pcVar14 == &DAT_00000001) {
      if (puVar15 != (uint *)0x3 || local_200 != (uint *)0x0) {
        FUN_009244cc(&local_100,"performance_scaling",0x13);
        goto LAB_00914520;
      }
      uVar2 = 0x15;
      puVar15 = (uint *)&SUB_00000002;
      if ((int)*puVar11 < 0) {
        uVar2 = *puVar11 ^ 0x80000000;
      }
      local_200 = (uint *)0x0;
      if (uVar2 != 0x10) {
        if (uVar2 == 0x11) {
          FUN_00914634(&local_100,puVar6[5]);
        }
        else {
          if (uVar2 == 0x12) goto LAB_00913d80;
          FUN_00914634(&local_100);
        }
        local_170 = local_f8;
        puStack_16c = local_f4;
        puStack_168 = local_f0;
        puStack_164 = local_ec;
        local_160 = local_e8;
        local_15c = puStack_e4;
        local_158 = local_e0;
        puStack_154 = puStack_dc;
        puStack_150 = local_d8;
        puStack_14c = puStack_d4;
        local_148 = uStack_d0;
        uStack_144 = uStack_cc;
        local_200 = local_fc;
        if (local_100 == (uint *)&SUB_00000002 && local_fc == (uint *)0x0) {
          local_200 = (uint *)0x0;
          puVar15 = (uint *)0x3;
        }
        else {
          local_188 = local_c8;
          puStack_184 = local_c4;
          puStack_180 = local_c0;
          puStack_17c = local_bc;
          puVar15 = local_100;
        }
        local_130 = local_f8;
        local_12c = local_f4;
        puStack_128 = local_f0;
        puStack_124 = local_ec;
        puStack_120 = local_e8;
        puStack_11c = puStack_e4;
        local_118 = local_e0;
        puStack_114 = puStack_dc;
        puStack_110 = local_d8;
        puStack_10c = puStack_d4;
        uStack_108 = uStack_d0;
        uStack_104 = uStack_cc;
        if (puVar15 == (uint *)0x3 && local_200 == (uint *)0x0) {
          param_1[2] = local_f8;
          param_1[3] = local_f4;
          param_1[4] = local_f0;
          param_1[5] = local_ec;
          param_1[6] = local_e8;
          param_1[7] = puStack_e4;
          param_1[8] = local_e0;
          param_1[9] = puStack_dc;
          param_1[10] = local_d8;
          param_1[0xb] = puStack_d4;
          param_1[0xc] = uStack_d0;
          param_1[0xd] = uStack_cc;
          *param_1 = 3;
          param_1[1] = 0;
          goto LAB_00914364;
        }
      }
LAB_00913d80:
      local_198 = local_188;
      puStack_194 = puStack_184;
      puStack_190 = puStack_180;
      puStack_18c = puStack_17c;
      local_1c8 = local_130;
      puStack_1c4 = local_12c;
      puStack_1c0 = puStack_128;
      puStack_1bc = puStack_124;
      puStack_1b8 = puStack_120;
      local_1b4 = puStack_11c;
      local_1b0 = local_118;
      puStack_1ac = puStack_114;
      puStack_1a8 = puStack_110;
      puStack_1a4 = puStack_10c;
      local_1a0 = uStack_108;
      uStack_19c = uStack_104;
      goto LAB_009136e8;
    }
    if (pcVar14 != (char *)0x0) {
      if (pcVar14 != &SUB_00000002) {
        *puVar9 = local_f4;
        puVar9[1] = local_f0;
        puVar9[2] = local_ec;
        local_188 = local_f8;
        FUN_015791cc(&local_f8);
        puStack_e4 = local_ec;
        local_e8 = local_f0;
        puVar11 = local_f4;
        puVar6 = local_f8;
        local_12c = local_f8;
        puStack_128 = local_f4;
        puStack_124 = local_f0;
        puStack_120 = local_ec;
        local_160 = local_f8;
        local_15c = local_f4;
        local_158 = local_f0;
        puStack_154 = local_ec;
        local_170 = local_188;
        puStack_16c = puStack_184;
        puStack_168 = puStack_180;
        puStack_164 = puStack_17c;
        local_100 = local_188;
        local_fc = puStack_184;
        local_f8 = puStack_180;
        local_f4 = puStack_17c;
        local_f0 = puVar6;
        local_ec = puVar11;
        if (local_208 == local_1fc) {
          FUN_009f4b90(&local_1fc);
          local_214 = local_1f8;
        }
        puVar5 = (undefined4 *)(local_214 + local_208 * 0x20);
        local_208 = local_208 + 1;
        *puVar5 = local_100;
        puVar5[1] = local_fc;
        puVar5[2] = local_f8;
        puVar5[3] = local_f4;
        puVar5[4] = local_f0;
        puVar5[5] = local_ec;
        puVar5[6] = local_e8;
        puVar5[7] = puStack_e4;
        local_1f4 = local_208;
        goto LAB_009136e8;
      }
      if (local_204 != (uint *)0x3) {
        FUN_009244cc(&local_100,"management",10);
        goto LAB_00914520;
      }
      uVar2 = 0x15;
      if ((int)*puVar11 < 0) {
        uVar2 = *puVar11 ^ 0x80000000;
      }
      local_204 = (uint *)&SUB_00000002;
      if (uVar2 != 0x10) {
        if (uVar2 == 0x11) {
          FUN_0091719c(&local_100,puVar6[5]);
        }
        else {
          if (uVar2 == 0x12) goto LAB_009136e8;
          FUN_0091719c(&local_100);
        }
        local_204 = local_fc;
        if (local_100 == (uint *)&SUB_00000002) {
          puVar6 = (uint *)&SUB_00000002;
        }
        else {
          local_170 = local_f0;
          puStack_16c = local_ec;
          puStack_168 = local_e8;
          puStack_164 = puStack_e4;
          local_160 = local_e0;
          local_15c = puStack_dc;
          local_158 = local_d8;
          puStack_154 = puStack_d4;
          puVar6 = local_100;
        }
        local_248 = local_f8;
        local_24c = local_f4;
        if (puVar6 != (uint *)&SUB_00000002) {
          param_1[6] = local_170;
          param_1[7] = puStack_16c;
          param_1[8] = puStack_168;
          param_1[9] = puStack_164;
          param_1[10] = local_160;
          param_1[0xb] = local_15c;
          param_1[0xc] = local_158;
          param_1[0xd] = puStack_154;
          param_1[2] = puVar6;
          param_1[4] = local_f8;
          param_1[5] = local_f4;
          param_1[1] = 0;
          *param_1 = 3;
          local_270 = local_fc;
LAB_00914500:
          param_1[3] = local_270;
LAB_00914364:
          FUN_00953170(local_214,local_208);
LAB_00914414:
          if (local_1fc != 0) {
            thunk_FUN_016d3fb4(local_214);
          }
          return;
        }
      }
      goto LAB_009136e8;
    }
    if (local_210 != (uint *)0x3 || local_20c != (uint *)0x0) {
      FUN_009244cc(&local_100,"autotuning",10);
LAB_00914520:
      param_1[2] = local_100;
      param_1[3] = local_fc;
      param_1[4] = local_f8;
      param_1[5] = local_f4;
      param_1[6] = local_f0;
      param_1[7] = local_ec;
      param_1[8] = local_e8;
      param_1[9] = puStack_e4;
      param_1[10] = local_e0;
      param_1[0xb] = puStack_dc;
      param_1[0xc] = local_d8;
      param_1[0xd] = puStack_d4;
      *param_1 = 3;
      param_1[1] = 0;
      goto LAB_00914364;
    }
    uVar2 = 0x15;
    if ((int)*puVar11 < 0) {
      uVar2 = *puVar11 ^ 0x80000000;
    }
    local_20c = (uint *)0x0;
    local_210 = (uint *)&SUB_00000002;
    if (uVar2 != 0x10) {
      if (uVar2 == 0x11) {
        FUN_009168b4(&local_100,puVar6[5]);
        if (local_100 == (uint *)&SUB_00000002) goto LAB_0091405c;
        local_170 = local_f0;
        puStack_16c = local_ec;
        puStack_168 = local_e8;
        puStack_164 = puStack_e4;
        local_160 = local_e0;
        local_15c = puStack_dc;
LAB_00914150:
        local_268 = local_d8;
        local_26c = puStack_d4;
        puVar6 = local_100;
        local_270 = local_fc;
      }
      else {
        if (uVar2 == 0x12) goto LAB_00914168;
        FUN_009168b4(&local_100);
        if (local_100 != (uint *)&SUB_00000002) {
          local_170 = local_f0;
          puStack_16c = local_ec;
          puStack_168 = local_e8;
          puStack_164 = puStack_e4;
          local_160 = local_e0;
          local_15c = puStack_dc;
          goto LAB_00914150;
        }
LAB_0091405c:
        local_170 = local_f0;
        puStack_16c = local_ec;
        puStack_168 = local_e8;
        puStack_164 = puStack_e4;
        local_160 = local_e0;
        local_15c = puStack_dc;
        puVar6 = (uint *)&SUB_00000002;
      }
      local_170 = local_f0;
      puStack_16c = local_ec;
      puStack_168 = local_e8;
      puStack_164 = puStack_e4;
      local_160 = local_e0;
      local_15c = puStack_dc;
      if (puVar6 != (uint *)&SUB_00000002) {
        local_130 = local_f0;
        local_12c = local_ec;
        puStack_128 = local_e8;
        puStack_124 = puStack_e4;
        puStack_120 = local_e0;
        puStack_11c = puStack_dc;
        param_1[6] = local_f0;
        param_1[7] = local_ec;
        param_1[8] = local_e8;
        param_1[9] = puStack_e4;
        param_1[10] = local_e0;
        param_1[0xb] = puStack_dc;
        param_1[0xc] = local_268;
        param_1[4] = local_f8;
        param_1[5] = local_f4;
        param_1[0xd] = local_26c;
        param_1[1] = 0;
        param_1[2] = puVar6;
        *param_1 = 3;
        goto LAB_00914500;
      }
      local_210 = local_f8;
      local_20c = local_f4;
    }
LAB_00914168:
    local_130 = local_170;
    local_12c = puStack_16c;
    puStack_128 = puStack_168;
    puStack_124 = puStack_164;
    puStack_120 = local_160;
    puStack_11c = local_15c;
    local_1e0 = local_170;
    puStack_1dc = puStack_16c;
    puStack_1d8 = puStack_168;
    puStack_1d4 = puStack_164;
    puStack_1d0 = local_160;
    puStack_1cc = local_15c;
  } while( true );
}

