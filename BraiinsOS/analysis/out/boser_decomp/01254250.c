// FUN_01254250 @ 01254250 size=3264 calls_out=13 calls_in=1
// strings: model_detection | model_detection | performance_scaling | autotuning | management | performance_scaling

/* WARNING: Removing unreachable block (ram,0x01254f4c) */
/* WARNING: Removing unreachable block (ram,0x01254f98) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01254250(undefined4 *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  byte **ppbVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  byte **ppbVar13;
  undefined4 uVar14;
  char *pcVar15;
  bool bVar16;
  bool bVar17;
  undefined8 uVar18;
  byte *local_338;
  byte *local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_26c;
  int local_268;
  int local_264;
  byte *local_260;
  byte *pbStack_25c;
  byte *pbStack_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  byte *local_208;
  byte *local_204;
  byte *pbStack_1f0;
  byte *pbStack_1ec;
  byte *local_1e8;
  byte *pbStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined1 auStack_1d0 [136];
  byte *local_148;
  byte *pbStack_144;
  byte *pbStack_140;
  byte *pbStack_13c;
  byte *local_138;
  byte *pbStack_134;
  byte *local_130;
  byte *pbStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  byte *local_118;
  byte *local_114;
  byte *local_110;
  byte *local_10c;
  byte *local_108;
  byte *local_104;
  byte *local_100;
  byte *pbStack_fc;
  byte *local_f8;
  byte *pbStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [140];
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined8 local_44;
  int *local_3c;
  int **local_38;
  undefined1 *local_34;
  undefined4 local_30 [3];
  
  ppbVar13 = &local_110;
  local_264 = 0;
  local_26c = 0;
  ppbVar7 = &local_108;
  local_268 = 8;
  puVar4 = param_2;
  do {
    puVar8 = puVar4;
    if (puVar8 == param_2 + param_3 * 8) goto LAB_01254f24;
    uVar11 = *puVar8;
    puVar4 = puVar8 + 8;
  } while (uVar11 == 0x80000015);
  uVar5 = 0x15;
  if ((int)uVar11 < 0) {
    uVar5 = uVar11 ^ 0x80000000;
  }
  switch(uVar5) {
  case 1:
    local_110 = &DAT_80000001;
    local_10c = (byte *)CONCAT31(local_10c._1_3_,(char)puVar8[1]);
    break;
  default:
    FUN_01222458(&local_118,puVar8,&local_238,&DAT_01c24874);
    if (local_118 == (byte *)0x2) break;
    local_148 = local_10c;
    pbStack_144 = local_108;
    pbStack_140 = local_104;
    local_260 = local_10c;
    pbStack_25c = local_108;
    pbStack_258 = local_104;
    param_1[8] = local_100;
    param_1[9] = pbStack_fc;
    param_1[10] = local_f8;
    param_1[0xb] = pbStack_f4;
    param_1[0xc] = uStack_f0;
    param_1[0xd] = uStack_ec;
    param_1[5] = local_10c;
    param_1[6] = local_108;
    param_1[7] = local_104;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_118;
    param_1[3] = local_114;
    param_1[4] = local_110;
    goto LAB_01255038;
  case 4:
    local_108 = (byte *)puVar8[2];
    local_104 = (byte *)puVar8[3];
    local_110 = &DAT_80000004;
    goto LAB_012548b8;
  case 0xc:
    pbVar10 = (byte *)puVar8[3];
    uVar11 = puVar8[2];
    if (pbVar10 == &DAT_0000000a) {
      iVar6 = thunk_FUN_01bed842(uVar11,"autotuning",10);
      if (iVar6 == 0) {
        local_110 = &DAT_80000016;
      }
      else {
        iVar6 = thunk_FUN_01bed842(uVar11,"management",10);
        if (iVar6 != 0) goto LAB_01254940;
        local_110 = &DAT_80000018;
      }
    }
    else if (pbVar10 == &DAT_00000013) {
      iVar6 = thunk_FUN_01bed842(uVar11,"performance_scaling",0x13);
      if (iVar6 != 0) {
LAB_01254940:
        uVar14 = 1;
        pbVar12 = (byte *)FUN_01298504(pbVar10,1);
        if (pbVar12 == (byte *)0x0) {
          local_334 = pbVar10;
          goto LAB_012554a4;
        }
        pbVar9 = pbVar10;
        goto LAB_0125495c;
      }
      local_110 = (byte *)0x80000017;
    }
    else if (pbVar10 == &DAT_0000000f) {
      iVar6 = thunk_FUN_01bed842(uVar11,"model_detection",0xf);
      if (iVar6 != 0) goto LAB_01254940;
      local_110 = (byte *)0x80000015;
    }
    else {
      uVar14 = 0;
      local_334 = local_338;
      if ((int)pbVar10 < 0) goto LAB_012554a4;
      if (pbVar10 != (byte *)0x0) goto LAB_01254940;
      pbVar12 = &DAT_00000001;
      pbVar9 = (byte *)0x0;
LAB_0125495c:
      FUN_01bed4e2(pbVar12,uVar11,pbVar10);
      local_104 = pbVar10;
      local_110 = &DAT_8000000c;
      local_108 = pbVar12;
      local_10c = pbVar9;
    }
    break;
  case 0xd:
    pbVar9 = (byte *)puVar8[2];
    pbVar10 = (byte *)puVar8[1];
    if (pbVar9 == (byte *)0xa) {
      iVar6 = thunk_FUN_01bed842(pbVar10,"autotuning",10);
      if (iVar6 == 0) {
        pbVar9 = &DAT_80000016;
      }
      else {
        iVar6 = thunk_FUN_01bed842(pbVar10,"management",10);
        if (iVar6 != 0) goto LAB_012547c8;
        pbVar9 = &DAT_80000018;
      }
LAB_01254a64:
      ppbVar7 = ppbVar13;
    }
    else {
      if (pbVar9 == (byte *)0x13) {
        iVar6 = thunk_FUN_01bed842(pbVar10,"performance_scaling",0x13);
        if (iVar6 == 0) {
          pbVar9 = (byte *)0x80000017;
          goto LAB_01254a64;
        }
      }
      else if ((pbVar9 == (byte *)0xf) &&
              (iVar6 = thunk_FUN_01bed842(pbVar10,"model_detection",0xf), iVar6 == 0)) {
        pbVar9 = (byte *)0x80000015;
        goto LAB_01254a64;
      }
LAB_012547c8:
      local_10c = pbVar10;
      local_110 = (byte *)0x8000000d;
    }
    *ppbVar7 = pbVar9;
    break;
  case 0xe:
    pbVar10 = (byte *)puVar8[3];
    pcVar15 = (char *)puVar8[2];
    if (pbVar10 == &DAT_0000000a) {
      cVar2 = *pcVar15;
      if (cVar2 == 'm') {
        if (pcVar15[1] == 'a') {
          cVar2 = pcVar15[2];
          bVar16 = cVar2 == 'n';
          if (bVar16) {
            cVar2 = pcVar15[3];
          }
          if (bVar16 && cVar2 == 'a') {
            cVar2 = pcVar15[4];
            bVar16 = cVar2 == 'g';
            if (bVar16) {
              cVar2 = pcVar15[5];
            }
            if (bVar16 && cVar2 == 'e') {
              cVar2 = pcVar15[6];
              bVar16 = cVar2 == 'm';
              if (bVar16) {
                cVar2 = pcVar15[7];
              }
              if (bVar16 && cVar2 == 'e') {
                cVar2 = pcVar15[8];
                bVar16 = cVar2 == 'n';
                if (bVar16) {
                  cVar2 = pcVar15[9];
                }
                if (bVar16 && cVar2 == 't') {
                  local_110 = &DAT_80000018;
                  goto LAB_01254e94;
                }
              }
            }
          }
        }
      }
      else {
        bVar16 = cVar2 == 'a';
        if (bVar16) {
          cVar2 = pcVar15[1];
        }
        if (bVar16 && cVar2 == 'u') {
          cVar2 = pcVar15[2];
          bVar16 = cVar2 == 't';
          if (bVar16) {
            cVar2 = pcVar15[3];
          }
          if (bVar16 && cVar2 == 'o') {
            cVar2 = pcVar15[4];
            bVar16 = cVar2 == 't';
            if (bVar16) {
              cVar2 = pcVar15[5];
            }
            if (bVar16 && cVar2 == 'u') {
              cVar2 = pcVar15[6];
              bVar16 = cVar2 == 'n';
              if (bVar16) {
                cVar2 = pcVar15[7];
              }
              if (bVar16 && cVar2 == 'i') {
                cVar2 = pcVar15[8];
                bVar16 = cVar2 == 'n';
                if (bVar16) {
                  cVar2 = pcVar15[9];
                }
                if (bVar16 && cVar2 == 'g') {
                  local_110 = &DAT_80000016;
LAB_01254e94:
                  break;
                }
              }
            }
          }
        }
      }
LAB_0125486c:
      uVar14 = 1;
      local_108 = (byte *)FUN_01298504(pbVar10,1);
      if (local_108 == (byte *)0x0) {
        local_334 = pbVar10;
LAB_012554a4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar14,local_334);
      }
      pbVar9 = pbVar10;
    }
    else {
      if (pbVar10 == &DAT_00000013) {
        if (*pcVar15 == 'p') {
          cVar2 = pcVar15[1];
          bVar16 = cVar2 == 'e';
          if (bVar16) {
            cVar2 = pcVar15[2];
          }
          if (bVar16 && cVar2 == 'r') {
            cVar2 = pcVar15[3];
            bVar16 = cVar2 == 'f';
            if (bVar16) {
              cVar2 = pcVar15[4];
            }
            if (bVar16 && cVar2 == 'o') {
              cVar2 = pcVar15[5];
              bVar16 = cVar2 == 'r';
              if (bVar16) {
                cVar2 = pcVar15[6];
              }
              if (bVar16 && cVar2 == 'm') {
                cVar2 = pcVar15[7];
                bVar16 = cVar2 == 'a';
                if (bVar16) {
                  cVar2 = pcVar15[8];
                }
                if (bVar16 && cVar2 == 'n') {
                  cVar2 = pcVar15[9];
                  bVar16 = cVar2 == 'c';
                  if (bVar16) {
                    cVar2 = pcVar15[10];
                  }
                  if (bVar16 && cVar2 == 'e') {
                    cVar2 = pcVar15[0xb];
                    bVar16 = cVar2 == '_';
                    if (bVar16) {
                      cVar2 = pcVar15[0xc];
                    }
                    if (bVar16 && cVar2 == 's') {
                      cVar2 = pcVar15[0xd];
                      bVar16 = cVar2 == 'c';
                      if (bVar16) {
                        cVar2 = pcVar15[0xe];
                      }
                      if (bVar16 && cVar2 == 'a') {
                        cVar2 = pcVar15[0xf];
                        bVar16 = cVar2 == 'l';
                        if (bVar16) {
                          cVar2 = pcVar15[0x10];
                        }
                        if (bVar16 && cVar2 == 'i') {
                          cVar2 = pcVar15[0x11];
                          bVar16 = cVar2 == 'n';
                          if (bVar16) {
                            cVar2 = pcVar15[0x12];
                          }
                          if (bVar16 && cVar2 == 'g') {
                            local_110 = (byte *)0x80000017;
                            goto LAB_01254e94;
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
        goto LAB_0125486c;
      }
      if (pbVar10 == &DAT_0000000f) {
        cVar2 = *pcVar15;
        bVar16 = cVar2 == 'm';
        if (bVar16) {
          cVar2 = pcVar15[1];
        }
        bVar17 = bVar16 && cVar2 == 'o';
        if (bVar16 && cVar2 == 'o') {
          bVar17 = pcVar15[2] == 'd';
        }
        if (bVar17) {
          cVar2 = pcVar15[3];
          bVar16 = cVar2 == 'e';
          if (bVar16) {
            cVar2 = pcVar15[4];
          }
          if (bVar16 && cVar2 == 'l') {
            cVar2 = pcVar15[5];
            bVar16 = cVar2 == '_';
            if (bVar16) {
              cVar2 = pcVar15[6];
            }
            if (bVar16 && cVar2 == 'd') {
              cVar2 = pcVar15[7];
              bVar16 = cVar2 == 'e';
              if (bVar16) {
                cVar2 = pcVar15[8];
              }
              if (bVar16 && cVar2 == 't') {
                cVar2 = pcVar15[9];
                bVar16 = cVar2 == 'e';
                if (bVar16) {
                  cVar2 = pcVar15[10];
                }
                if (bVar16 && cVar2 == 'c') {
                  cVar2 = pcVar15[0xb];
                  bVar16 = cVar2 == 't';
                  if (bVar16) {
                    cVar2 = pcVar15[0xc];
                  }
                  if (bVar16 && cVar2 == 'i') {
                    cVar2 = pcVar15[0xd];
                    bVar16 = cVar2 == 'o';
                    if (bVar16) {
                      cVar2 = pcVar15[0xe];
                    }
                    if (bVar16 && cVar2 == 'n') {
                      local_110 = (byte *)0x80000015;
                      goto LAB_01254e94;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_0125486c;
      }
      uVar14 = 0;
      if ((int)pbVar10 < 0) goto LAB_012554a4;
      if (pbVar10 != (byte *)0x0) goto LAB_0125486c;
      local_108 = &DAT_00000001;
      pbVar9 = (byte *)0x0;
    }
    FUN_01bed4e2(local_108,pcVar15,pbVar10);
    local_110 = (byte *)0x8000000e;
    local_10c = pbVar9;
    local_104 = pbVar10;
LAB_012548b8:
    break;
  case 0xf:
    pbVar10 = (byte *)puVar8[1];
    pbVar9 = (byte *)puVar8[2];
    if (pbVar9 == (byte *)0xa) {
      if (*pbVar10 != 0x6d) {
        if (*pbVar10 == 0x61) {
          bVar1 = pbVar10[1];
          bVar16 = bVar1 == 0x75;
          if (bVar16) {
            bVar1 = pbVar10[2];
          }
          if (bVar16 && bVar1 == 0x74) {
            bVar1 = pbVar10[3];
            bVar16 = bVar1 == 0x6f;
            if (bVar16) {
              bVar1 = pbVar10[4];
            }
            if (bVar16 && bVar1 == 0x74) {
              bVar1 = pbVar10[5];
              bVar16 = bVar1 == 0x75;
              if (bVar16) {
                bVar1 = pbVar10[6];
              }
              if (bVar16 && bVar1 == 0x6e) {
                bVar1 = pbVar10[7];
                bVar16 = bVar1 == 0x69;
                if (bVar16) {
                  bVar1 = pbVar10[8];
                }
                if (bVar16 && bVar1 == 0x6e) {
                  bVar1 = pbVar10[9];
                  pbVar12 = &DAT_80000016;
LAB_01254848:
                  bVar16 = bVar1 == 0x67;
                  goto LAB_01254ee8;
                }
              }
            }
          }
        }
        goto LAB_012549dc;
      }
      bVar1 = pbVar10[1];
      bVar16 = bVar1 == 0x61;
      if (bVar16) {
        bVar1 = pbVar10[2];
      }
      if (!bVar16 || bVar1 != 0x6e) goto LAB_012549dc;
      bVar1 = pbVar10[3];
      bVar16 = bVar1 != 0x61;
      if (!bVar16) {
        bVar1 = pbVar10[4];
      }
      if (bVar16 || bVar1 != 0x67) goto LAB_012549dc;
      bVar1 = pbVar10[5];
      bVar16 = bVar1 != 0x65;
      if (!bVar16) {
        bVar1 = pbVar10[6];
      }
      if (bVar16 || bVar1 != 0x6d) goto LAB_012549dc;
      bVar1 = pbVar10[7];
      bVar16 = bVar1 != 0x65;
      if (!bVar16) {
        bVar1 = pbVar10[8];
      }
      if (bVar16 || bVar1 != 0x6e) goto LAB_012549dc;
      pbVar12 = &DAT_80000018;
      bVar16 = pbVar10[9] == 0x74;
LAB_01254ee8:
      if (!bVar16) goto LAB_012549dc;
    }
    else {
      if (pbVar9 == (byte *)0x13) {
        bVar1 = *pbVar10;
        bVar16 = bVar1 == 0x70;
        if (bVar16) {
          bVar1 = pbVar10[1];
        }
        if (bVar16 && bVar1 == 0x65) {
          bVar1 = pbVar10[2];
          bVar16 = bVar1 == 0x72;
          if (bVar16) {
            bVar1 = pbVar10[3];
          }
          if (bVar16 && bVar1 == 0x66) {
            bVar1 = pbVar10[4];
            bVar16 = bVar1 == 0x6f;
            if (bVar16) {
              bVar1 = pbVar10[5];
            }
            if (bVar16 && bVar1 == 0x72) {
              bVar1 = pbVar10[6];
              bVar16 = bVar1 == 0x6d;
              if (bVar16) {
                bVar1 = pbVar10[7];
              }
              if (bVar16 && bVar1 == 0x61) {
                bVar1 = pbVar10[8];
                bVar16 = bVar1 == 0x6e;
                if (bVar16) {
                  bVar1 = pbVar10[9];
                }
                if (bVar16 && bVar1 == 99) {
                  bVar1 = pbVar10[10];
                  bVar16 = bVar1 == 0x65;
                  if (bVar16) {
                    bVar1 = pbVar10[0xb];
                  }
                  if (bVar16 && bVar1 == 0x5f) {
                    bVar1 = pbVar10[0xc];
                    bVar16 = bVar1 == 0x73;
                    if (bVar16) {
                      bVar1 = pbVar10[0xd];
                    }
                    if (bVar16 && bVar1 == 99) {
                      bVar1 = pbVar10[0xe];
                      bVar16 = bVar1 == 0x61;
                      if (bVar16) {
                        bVar1 = pbVar10[0xf];
                      }
                      if (bVar16 && bVar1 == 0x6c) {
                        bVar1 = pbVar10[0x10];
                        bVar16 = bVar1 == 0x69;
                        if (bVar16) {
                          bVar1 = pbVar10[0x11];
                        }
                        if (bVar16 && bVar1 == 0x6e) {
                          bVar1 = pbVar10[0x12];
                          pbVar12 = (byte *)0x80000017;
                          goto LAB_01254848;
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
      else {
        if (pbVar9 == (byte *)0xf) {
          uVar11 = (uint)*pbVar10;
        }
        if (pbVar9 == (byte *)0xf && uVar11 == 0x6d) {
          bVar1 = pbVar10[1];
          bVar16 = bVar1 == 0x6f;
          if (bVar16) {
            bVar1 = pbVar10[2];
          }
          if ((bVar16 && bVar1 == 100) && (pbVar10[3] == 0x65)) {
            bVar1 = pbVar10[4];
            bVar16 = bVar1 == 0x6c;
            if (bVar16) {
              bVar1 = pbVar10[5];
            }
            if (bVar16 && bVar1 == 0x5f) {
              bVar1 = pbVar10[6];
              bVar16 = bVar1 == 100;
              if (bVar16) {
                bVar1 = pbVar10[7];
              }
              if (bVar16 && bVar1 == 0x65) {
                bVar1 = pbVar10[8];
                bVar16 = bVar1 == 0x74;
                if (bVar16) {
                  bVar1 = pbVar10[9];
                }
                if (bVar16 && bVar1 == 0x65) {
                  bVar1 = pbVar10[10];
                  bVar16 = bVar1 == 99;
                  if (bVar16) {
                    bVar1 = pbVar10[0xb];
                  }
                  if (bVar16 && bVar1 == 0x74) {
                    bVar1 = pbVar10[0xc];
                    bVar16 = bVar1 == 0x69;
                    if (bVar16) {
                      bVar1 = pbVar10[0xd];
                    }
                    if (bVar16 && bVar1 == 0x6f) {
                      pbVar12 = (byte *)0x80000015;
                      bVar16 = pbVar10[0xe] == 0x6e;
                      goto LAB_01254ee8;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_012549dc:
      local_10c = pbVar10;
      local_110 = (byte *)0x8000000f;
      pbVar12 = pbVar9;
      ppbVar13 = ppbVar7;
    }
    *ppbVar13 = pbVar12;
  }
  local_260 = local_10c;
  pbStack_25c = local_108;
  pbStack_258 = local_104;
  local_148 = local_260;
  pbStack_144 = pbStack_25c;
  pbStack_140 = pbStack_258;
  if (local_110 != (byte *)0x80000019) {
    pbVar10 = &SUB_00000004;
    if (&DAT_80000014 < local_110) {
      pbVar10 = local_110 + 0x7fffffeb;
    }
                    /* WARNING: Could not recover jumptable at 0x01254ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((int)&DAT_01254ac4 + (&DAT_01254ac4)[(int)pbVar10]))();
    return;
  }
LAB_01254f24:
  iVar3 = local_264;
  iVar6 = local_268;
  FUN_0122a788(&local_118,local_268);
  local_204 = local_114;
  local_208 = local_118;
  local_148 = local_110;
  pbStack_144 = local_10c;
  pbStack_140 = local_108;
  pbStack_13c = local_104;
  local_138 = local_100;
  pbStack_134 = pbStack_fc;
  local_130 = local_f8;
  pbStack_12c = pbStack_f4;
  uStack_128 = uStack_f0;
  uStack_124 = uStack_ec;
  uStack_120 = uStack_e8;
  uStack_11c = uStack_e4;
  if (local_118 == &DAT_00000003 && local_114 == (byte *)0x0) {
    param_1[2] = local_110;
    param_1[3] = local_10c;
    param_1[4] = local_108;
    param_1[5] = local_104;
    param_1[6] = local_100;
    param_1[7] = pbStack_fc;
    param_1[8] = local_f8;
    param_1[9] = pbStack_f4;
    param_1[10] = uStack_f0;
    param_1[0xb] = uStack_ec;
    param_1[0xc] = uStack_e8;
    param_1[0xd] = uStack_e4;
    *param_1 = 3;
    param_1[1] = 0;
LAB_01255038:
    FUN_0126cce4(&local_26c);
  }
  else {
    FUN_01bed4e2(auStack_1d0,auStack_e0,0x88);
    pbStack_1f0 = local_138;
    pbStack_1ec = pbStack_134;
    local_1e8 = local_130;
    pbStack_1e4 = pbStack_12c;
    uStack_1e0 = uStack_128;
    uStack_1dc = uStack_124;
    uStack_1d8 = uStack_120;
    uStack_1d4 = uStack_11c;
    local_48 = iVar6 + iVar3 * 0x20;
    local_4c = local_26c;
    local_50 = iVar6;
    local_54 = iVar6;
    FUN_0124d46c(&local_118,&local_54);
    if (local_118 != &DAT_80000016) {
      local_148 = local_118;
      pbStack_144 = local_114;
      pbStack_140 = local_110;
      pbStack_13c = local_10c;
      local_138 = local_108;
      pbStack_134 = local_104;
      local_130 = local_100;
      pbStack_12c = pbStack_fc;
      if (&DAT_00000001 < local_118 + 0x7fffffeb) {
        uVar18 = FUN_01962cb0(&local_148);
        if ((int)uVar18 == 0) {
          local_30[0] = 0;
          FUN_01a41b24(&local_118,
                       "unexpected map keystruct Metadata with 5 elementsstruct Metadata with 6 elementsstruct Metadata with 7 elementsstruct IndexVariant with 4 elementsstruct Assets with 5 elementsstruct Metadata with 3 elements"
                       ,0x25,local_30);
        }
        else {
          local_3c = (int *)&local_44;
          local_38 = &local_3c;
          local_34 = &LAB_01963050;
          local_30[0] = 0;
          local_44 = uVar18;
          FUN_01a41b24(&local_118,&DAT_005bc768,&local_38,local_30);
        }
        param_1[2] = local_118;
        param_1[3] = local_114;
        param_1[4] = local_110;
        param_1[5] = local_10c;
        param_1[6] = local_108;
        param_1[7] = local_104;
        param_1[8] = local_100;
        param_1[9] = pbStack_fc;
        param_1[10] = local_f8;
        param_1[0xb] = pbStack_f4;
        param_1[0xc] = uStack_f0;
        param_1[0xd] = uStack_ec;
        *param_1 = 3;
        param_1[1] = 0;
        FUN_0123b780(&local_148);
        FUN_0123b780(&local_138);
        FUN_0124ef54(&local_54);
        FUN_0123be88(&local_208);
        return;
      }
    }
    FUN_0124ef54(&local_54);
    FUN_01bed4e2(param_1,&local_208,0xc0);
    param_1[0x32] = local_250;
    param_1[0x33] = uStack_24c;
    param_1[0x34] = uStack_248;
    param_1[0x35] = uStack_244;
    param_1[0x36] = uStack_240;
    param_1[0x37] = uStack_23c;
    param_1[0x3a] = local_238;
    param_1[0x3b] = uStack_234;
    param_1[0x3c] = uStack_230;
    param_1[0x3d] = uStack_22c;
    param_1[0x3e] = uStack_228;
    param_1[0x3f] = uStack_224;
    param_1[0x40] = local_220;
    param_1[0x41] = uStack_21c;
    param_1[0x42] = uStack_218;
    param_1[0x43] = uStack_214;
    param_1[0x44] = uStack_210;
    param_1[0x45] = uStack_20c;
    param_1[0x47] = local_330;
    param_1[0x38] = 2;
    param_1[0x30] = 2;
    param_1[0x39] = 0;
    param_1[0x49] = local_328;
    param_1[0x46] = local_324;
    param_1[0x31] = 0;
    param_1[0x4a] = local_32c;
    param_1[0x48] = 2;
    *(undefined1 *)(param_1 + 0x4b) = 3;
  }
  return;
}

