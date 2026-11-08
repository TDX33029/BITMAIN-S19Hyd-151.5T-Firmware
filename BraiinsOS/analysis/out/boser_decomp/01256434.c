// FUN_01256434 @ 01256434 size=3264 calls_out=13 calls_in=1
// strings: model_detection | model_detection | performance_scaling | autotuning | management | performance_scaling

/* WARNING: Removing unreachable block (ram,0x01257130) */
/* WARNING: Removing unreachable block (ram,0x0125717c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01256434(undefined4 *param_1,uint *param_2,int param_3)

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
  byte *local_368;
  byte *local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_29c;
  int local_298;
  int local_294;
  byte *local_290;
  byte *pbStack_28c;
  byte *pbStack_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  byte *local_238;
  byte *local_234;
  byte *pbStack_220;
  byte *pbStack_21c;
  byte *local_218;
  byte *pbStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined1 auStack_200 [160];
  byte *local_160;
  byte *pbStack_15c;
  byte *pbStack_158;
  byte *pbStack_154;
  byte *local_150;
  byte *pbStack_14c;
  byte *local_148;
  byte *pbStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  byte *local_130;
  byte *local_12c;
  byte *local_128;
  byte *local_124;
  byte *local_120;
  byte *local_11c;
  byte *local_118;
  byte *pbStack_114;
  byte *local_110;
  byte *pbStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [164];
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined8 local_44;
  int *local_3c;
  int **local_38;
  undefined1 *local_34;
  undefined4 local_30 [3];
  
  ppbVar13 = &local_128;
  local_294 = 0;
  local_29c = 0;
  ppbVar7 = &local_120;
  local_298 = 8;
  puVar4 = param_2;
  do {
    puVar8 = puVar4;
    if (puVar8 == param_2 + param_3 * 8) goto LAB_01257108;
    uVar11 = *puVar8;
    puVar4 = puVar8 + 8;
  } while (uVar11 == 0x80000015);
  uVar5 = 0x15;
  if ((int)uVar11 < 0) {
    uVar5 = uVar11 ^ 0x80000000;
  }
  switch(uVar5) {
  case 1:
    local_128 = &DAT_80000001;
    local_124 = (byte *)CONCAT31(local_124._1_3_,(char)puVar8[1]);
    break;
  default:
    FUN_01222458(&local_130,puVar8,&local_268,&DAT_01c24834);
    if (local_130 == (byte *)0x2) break;
    local_160 = local_124;
    pbStack_15c = local_120;
    pbStack_158 = local_11c;
    local_290 = local_124;
    pbStack_28c = local_120;
    pbStack_288 = local_11c;
    param_1[8] = local_118;
    param_1[9] = pbStack_114;
    param_1[10] = local_110;
    param_1[0xb] = pbStack_10c;
    param_1[0xc] = uStack_108;
    param_1[0xd] = uStack_104;
    param_1[5] = local_124;
    param_1[6] = local_120;
    param_1[7] = local_11c;
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = local_130;
    param_1[3] = local_12c;
    param_1[4] = local_128;
    goto LAB_0125721c;
  case 4:
    local_120 = (byte *)puVar8[2];
    local_11c = (byte *)puVar8[3];
    local_128 = &DAT_80000004;
    goto LAB_01256a9c;
  case 0xc:
    pbVar10 = (byte *)puVar8[3];
    uVar11 = puVar8[2];
    if (pbVar10 == &DAT_0000000a) {
      iVar6 = thunk_FUN_01bed842(uVar11,"autotuning",10);
      if (iVar6 == 0) {
        local_128 = &DAT_80000016;
      }
      else {
        iVar6 = thunk_FUN_01bed842(uVar11,"management",10);
        if (iVar6 != 0) goto LAB_01256b24;
        local_128 = &DAT_80000018;
      }
    }
    else if (pbVar10 == &DAT_00000013) {
      iVar6 = thunk_FUN_01bed842(uVar11,"performance_scaling",0x13);
      if (iVar6 != 0) {
LAB_01256b24:
        uVar14 = 1;
        pbVar12 = (byte *)FUN_01298504(pbVar10,1);
        if (pbVar12 == (byte *)0x0) {
          local_364 = pbVar10;
          goto LAB_01257688;
        }
        pbVar9 = pbVar10;
        goto LAB_01256b40;
      }
      local_128 = (byte *)0x80000017;
    }
    else if (pbVar10 == &DAT_0000000f) {
      iVar6 = thunk_FUN_01bed842(uVar11,"model_detection",0xf);
      if (iVar6 != 0) goto LAB_01256b24;
      local_128 = (byte *)0x80000015;
    }
    else {
      uVar14 = 0;
      local_364 = local_368;
      if ((int)pbVar10 < 0) goto LAB_01257688;
      if (pbVar10 != (byte *)0x0) goto LAB_01256b24;
      pbVar12 = &DAT_00000001;
      pbVar9 = (byte *)0x0;
LAB_01256b40:
      FUN_01bed4e2(pbVar12,uVar11,pbVar10);
      local_11c = pbVar10;
      local_128 = &DAT_8000000c;
      local_120 = pbVar12;
      local_124 = pbVar9;
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
        if (iVar6 != 0) goto LAB_012569ac;
        pbVar9 = &DAT_80000018;
      }
LAB_01256c48:
      ppbVar7 = ppbVar13;
    }
    else {
      if (pbVar9 == (byte *)0x13) {
        iVar6 = thunk_FUN_01bed842(pbVar10,"performance_scaling",0x13);
        if (iVar6 == 0) {
          pbVar9 = (byte *)0x80000017;
          goto LAB_01256c48;
        }
      }
      else if ((pbVar9 == (byte *)0xf) &&
              (iVar6 = thunk_FUN_01bed842(pbVar10,"model_detection",0xf), iVar6 == 0)) {
        pbVar9 = (byte *)0x80000015;
        goto LAB_01256c48;
      }
LAB_012569ac:
      local_124 = pbVar10;
      local_128 = (byte *)0x8000000d;
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
                  local_128 = &DAT_80000018;
                  goto LAB_01257078;
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
                  local_128 = &DAT_80000016;
LAB_01257078:
                  break;
                }
              }
            }
          }
        }
      }
LAB_01256a50:
      uVar14 = 1;
      local_120 = (byte *)FUN_01298504(pbVar10,1);
      if (local_120 == (byte *)0x0) {
        local_364 = pbVar10;
LAB_01257688:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar14,local_364);
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
                            local_128 = (byte *)0x80000017;
                            goto LAB_01257078;
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
        goto LAB_01256a50;
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
                      local_128 = (byte *)0x80000015;
                      goto LAB_01257078;
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_01256a50;
      }
      uVar14 = 0;
      if ((int)pbVar10 < 0) goto LAB_01257688;
      if (pbVar10 != (byte *)0x0) goto LAB_01256a50;
      local_120 = &DAT_00000001;
      pbVar9 = (byte *)0x0;
    }
    FUN_01bed4e2(local_120,pcVar15,pbVar10);
    local_128 = (byte *)0x8000000e;
    local_124 = pbVar9;
    local_11c = pbVar10;
LAB_01256a9c:
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
LAB_01256a2c:
                  bVar16 = bVar1 == 0x67;
                  goto LAB_012570cc;
                }
              }
            }
          }
        }
        goto LAB_01256bc0;
      }
      bVar1 = pbVar10[1];
      bVar16 = bVar1 == 0x61;
      if (bVar16) {
        bVar1 = pbVar10[2];
      }
      if (!bVar16 || bVar1 != 0x6e) goto LAB_01256bc0;
      bVar1 = pbVar10[3];
      bVar16 = bVar1 != 0x61;
      if (!bVar16) {
        bVar1 = pbVar10[4];
      }
      if (bVar16 || bVar1 != 0x67) goto LAB_01256bc0;
      bVar1 = pbVar10[5];
      bVar16 = bVar1 != 0x65;
      if (!bVar16) {
        bVar1 = pbVar10[6];
      }
      if (bVar16 || bVar1 != 0x6d) goto LAB_01256bc0;
      bVar1 = pbVar10[7];
      bVar16 = bVar1 != 0x65;
      if (!bVar16) {
        bVar1 = pbVar10[8];
      }
      if (bVar16 || bVar1 != 0x6e) goto LAB_01256bc0;
      pbVar12 = &DAT_80000018;
      bVar16 = pbVar10[9] == 0x74;
LAB_012570cc:
      if (!bVar16) goto LAB_01256bc0;
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
                          goto LAB_01256a2c;
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
                      goto LAB_012570cc;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_01256bc0:
      local_124 = pbVar10;
      local_128 = (byte *)0x8000000f;
      pbVar12 = pbVar9;
      ppbVar13 = ppbVar7;
    }
    *ppbVar13 = pbVar12;
  }
  local_290 = local_124;
  pbStack_28c = local_120;
  pbStack_288 = local_11c;
  local_160 = local_290;
  pbStack_15c = pbStack_28c;
  pbStack_158 = pbStack_288;
  if (local_128 != (byte *)0x80000019) {
    pbVar10 = &SUB_00000004;
    if (&DAT_80000014 < local_128) {
      pbVar10 = local_128 + 0x7fffffeb;
    }
                    /* WARNING: Could not recover jumptable at 0x01256ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((int)&DAT_01256ca8 + (&DAT_01256ca8)[(int)pbVar10]))();
    return;
  }
LAB_01257108:
  iVar3 = local_294;
  iVar6 = local_298;
  FUN_01227834(&local_130,local_298);
  local_234 = local_12c;
  local_238 = local_130;
  local_160 = local_128;
  pbStack_15c = local_124;
  pbStack_158 = local_120;
  pbStack_154 = local_11c;
  local_150 = local_118;
  pbStack_14c = pbStack_114;
  local_148 = local_110;
  pbStack_144 = pbStack_10c;
  uStack_140 = uStack_108;
  uStack_13c = uStack_104;
  uStack_138 = uStack_100;
  uStack_134 = uStack_fc;
  if (local_130 == &DAT_00000003 && local_12c == (byte *)0x0) {
    param_1[2] = local_128;
    param_1[3] = local_124;
    param_1[4] = local_120;
    param_1[5] = local_11c;
    param_1[6] = local_118;
    param_1[7] = pbStack_114;
    param_1[8] = local_110;
    param_1[9] = pbStack_10c;
    param_1[10] = uStack_108;
    param_1[0xb] = uStack_104;
    param_1[0xc] = uStack_100;
    param_1[0xd] = uStack_fc;
    *param_1 = 3;
    param_1[1] = 0;
LAB_0125721c:
    FUN_0126cce4(&local_29c);
  }
  else {
    FUN_01bed4e2(auStack_200,auStack_f8,0xa0);
    pbStack_220 = local_150;
    pbStack_21c = pbStack_14c;
    local_218 = local_148;
    pbStack_214 = pbStack_144;
    uStack_210 = uStack_140;
    uStack_20c = uStack_13c;
    uStack_208 = uStack_138;
    uStack_204 = uStack_134;
    local_48 = iVar6 + iVar3 * 0x20;
    local_4c = local_29c;
    local_50 = iVar6;
    local_54 = iVar6;
    FUN_0124d46c(&local_130,&local_54);
    if (local_130 != &DAT_80000016) {
      local_160 = local_130;
      pbStack_15c = local_12c;
      pbStack_158 = local_128;
      pbStack_154 = local_124;
      local_150 = local_120;
      pbStack_14c = local_11c;
      local_148 = local_118;
      pbStack_144 = pbStack_114;
      if (&DAT_00000001 < local_130 + 0x7fffffeb) {
        uVar18 = FUN_01962cb0(&local_160);
        if ((int)uVar18 == 0) {
          local_30[0] = 0;
          FUN_01a41b24(&local_130,
                       "unexpected map keystruct Metadata with 5 elementsstruct Metadata with 6 elementsstruct Metadata with 7 elementsstruct IndexVariant with 4 elementsstruct Assets with 5 elementsstruct Metadata with 3 elements"
                       ,0x25,local_30);
        }
        else {
          local_3c = (int *)&local_44;
          local_38 = &local_3c;
          local_34 = &LAB_01963050;
          local_30[0] = 0;
          local_44 = uVar18;
          FUN_01a41b24(&local_130,&DAT_005bc768,&local_38,local_30);
        }
        param_1[2] = local_130;
        param_1[3] = local_12c;
        param_1[4] = local_128;
        param_1[5] = local_124;
        param_1[6] = local_120;
        param_1[7] = local_11c;
        param_1[8] = local_118;
        param_1[9] = pbStack_114;
        param_1[10] = local_110;
        param_1[0xb] = pbStack_10c;
        param_1[0xc] = uStack_108;
        param_1[0xd] = uStack_104;
        *param_1 = 3;
        param_1[1] = 0;
        FUN_0123b780(&local_160);
        FUN_0123b780(&local_150);
        FUN_0124ef54(&local_54);
        FUN_0123bec8(&local_238);
        return;
      }
    }
    FUN_0124ef54(&local_54);
    FUN_01bed4e2(param_1,&local_238,0xd8);
    param_1[0x38] = local_280;
    param_1[0x39] = uStack_27c;
    param_1[0x3a] = uStack_278;
    param_1[0x3b] = uStack_274;
    param_1[0x3c] = uStack_270;
    param_1[0x3d] = uStack_26c;
    param_1[0x40] = local_268;
    param_1[0x41] = uStack_264;
    param_1[0x42] = uStack_260;
    param_1[0x43] = uStack_25c;
    param_1[0x44] = uStack_258;
    param_1[0x45] = uStack_254;
    param_1[0x46] = local_250;
    param_1[0x47] = uStack_24c;
    param_1[0x48] = uStack_248;
    param_1[0x49] = uStack_244;
    param_1[0x4a] = uStack_240;
    param_1[0x4b] = uStack_23c;
    param_1[0x4d] = local_360;
    param_1[0x3e] = 2;
    param_1[0x36] = 2;
    param_1[0x3f] = 0;
    param_1[0x4f] = local_358;
    param_1[0x4c] = local_354;
    param_1[0x37] = 0;
    param_1[0x50] = local_35c;
    param_1[0x4e] = 2;
    *(undefined1 *)(param_1 + 0x51) = 3;
  }
  return;
}

