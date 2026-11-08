// FUN_012339a0 @ 012339a0 size=2956 calls_out=12 calls_in=0
// strings: autotuning | management | autotuning | management | performance_scaling | performance_scaling

/* WARNING: Removing unreachable block (ram,0x012344b4) */
/* WARNING: Removing unreachable block (ram,0x012344e8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012339a0(int *param_1,uint *param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  char **ppcVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  char **ppcVar11;
  undefined4 uVar12;
  bool bVar13;
  char *local_290;
  char *local_28c;
  int local_288;
  int local_284;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  char *local_1f0;
  char *pcStack_1ec;
  char *pcStack_1e8;
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int local_1d0;
  int local_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  char *local_130;
  char *pcStack_12c;
  char *pcStack_128;
  char *pcStack_124;
  int local_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int local_fc;
  char *local_f8;
  char *local_f4;
  char *local_f0;
  char *local_ec;
  int local_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined1 auStack_c8 [164];
  
  ppcVar11 = &local_f8;
  ppcVar5 = &local_f0;
  local_1f4 = 0;
  local_1fc = 0;
  local_1f8 = 8;
  puVar2 = param_2;
  do {
    puVar6 = puVar2;
    if (puVar6 == param_2 + param_3 * 8) goto LAB_0123448c;
    uVar9 = *puVar6;
    puVar2 = puVar6 + 8;
  } while (uVar9 == 0x80000015);
  uVar3 = 0x15;
  if ((int)uVar9 < 0) {
    uVar3 = uVar9 ^ 0x80000000;
  }
  switch(uVar3) {
  case 1:
    local_f8 = &DAT_80000001;
    local_f4 = (char *)CONCAT31(local_f4._1_3_,(char)puVar6[1]);
    break;
  default:
    FUN_01222458(&local_100,puVar6,&local_148,&DAT_01c24804);
    if (local_100 != 2) {
      local_130 = local_f4;
      pcStack_12c = local_f0;
      pcStack_128 = local_ec;
      local_1f0 = local_f4;
      pcStack_1ec = local_f0;
      pcStack_1e8 = local_ec;
      param_1[8] = local_e8;
      param_1[9] = iStack_e4;
      param_1[10] = local_e0;
      param_1[0xb] = iStack_dc;
      param_1[0xc] = iStack_d8;
      param_1[0xd] = iStack_d4;
      param_1[5] = (int)local_f4;
      param_1[6] = (int)local_f0;
      param_1[7] = (int)local_ec;
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_100;
      param_1[3] = local_fc;
      param_1[4] = (int)local_f8;
      goto LAB_01234628;
    }
    break;
  case 4:
    local_f0 = (char *)puVar6[2];
    local_ec = (char *)puVar6[3];
    local_f8 = &DAT_80000004;
    break;
  case 0xc:
    uVar9 = puVar6[2];
    pcVar8 = (char *)puVar6[3];
    if (pcVar8 == &DAT_00000013) {
      iVar4 = thunk_FUN_01bed842(uVar9,"performance_scaling",0x13);
      if (iVar4 != 0) {
LAB_01233ed4:
        local_290 = (char *)FUN_01298504(pcVar8,1);
        local_28c = pcVar8;
        if (local_290 != (char *)0x0) {
          pcVar7 = pcVar8;
          goto LAB_01233ef8;
        }
LAB_012347d4:
        uVar12 = 1;
LAB_012347d8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar12,local_28c);
      }
      local_f8 = &DAT_80000016;
    }
    else if (pcVar8 == &DAT_0000000a) {
      iVar4 = thunk_FUN_01bed842(uVar9,"autotuning",10);
      if (iVar4 == 0) {
        local_f8 = (char *)0x80000015;
      }
      else {
        iVar4 = thunk_FUN_01bed842(uVar9,"management",10);
        if (iVar4 != 0) goto LAB_01233ed4;
        local_f8 = (char *)0x80000017;
      }
    }
    else {
      uVar12 = 0;
      local_28c = local_290;
      if ((int)pcVar8 < 0) goto LAB_012347d8;
      if (pcVar8 != (char *)0x0) goto LAB_01233ed4;
      pcVar7 = (char *)0x0;
      local_290 = &DAT_00000001;
LAB_01233ef8:
      FUN_01bed4e2(local_290,uVar9,pcVar8);
      local_f8 = &DAT_8000000c;
      local_f0 = local_290;
      local_f4 = pcVar7;
      local_ec = pcVar8;
    }
    break;
  case 0xd:
    pcVar8 = (char *)puVar6[1];
    pcVar7 = (char *)puVar6[2];
    if (pcVar7 == (char *)0x13) {
      iVar4 = thunk_FUN_01bed842(pcVar8,"performance_scaling",0x13);
      if (iVar4 == 0) {
        pcVar7 = &DAT_80000016;
        goto LAB_01233f80;
      }
LAB_01233d18:
      local_f8 = (char *)0x8000000d;
      local_f4 = pcVar8;
    }
    else {
      if (pcVar7 != (char *)0xa) goto LAB_01233d18;
      iVar4 = thunk_FUN_01bed842(pcVar8,"autotuning",10);
      if (iVar4 == 0) {
        pcVar7 = (char *)0x80000015;
      }
      else {
        iVar4 = thunk_FUN_01bed842(pcVar8,"management",10);
        if (iVar4 != 0) goto LAB_01233d18;
        pcVar7 = (char *)0x80000017;
      }
LAB_01233f80:
      ppcVar5 = ppcVar11;
    }
    *ppcVar5 = pcVar7;
    break;
  case 0xe:
    pcVar8 = (char *)puVar6[3];
    pcVar7 = (char *)puVar6[2];
    if (pcVar8 == &DAT_00000013) {
      if (*pcVar7 == 'p') {
        cVar1 = pcVar7[1];
        bVar13 = cVar1 == 'e';
        if (bVar13) {
          cVar1 = pcVar7[2];
        }
        if (bVar13 && cVar1 == 'r') {
          cVar1 = pcVar7[3];
          bVar13 = cVar1 == 'f';
          if (bVar13) {
            cVar1 = pcVar7[4];
          }
          if (bVar13 && cVar1 == 'o') {
            cVar1 = pcVar7[5];
            bVar13 = cVar1 == 'r';
            if (bVar13) {
              cVar1 = pcVar7[6];
            }
            if (bVar13 && cVar1 == 'm') {
              cVar1 = pcVar7[7];
              bVar13 = cVar1 == 'a';
              if (bVar13) {
                cVar1 = pcVar7[8];
              }
              if (bVar13 && cVar1 == 'n') {
                cVar1 = pcVar7[9];
                bVar13 = cVar1 == 'c';
                if (bVar13) {
                  cVar1 = pcVar7[10];
                }
                if (bVar13 && cVar1 == 'e') {
                  cVar1 = pcVar7[0xb];
                  bVar13 = cVar1 == '_';
                  if (bVar13) {
                    cVar1 = pcVar7[0xc];
                  }
                  if (bVar13 && cVar1 == 's') {
                    cVar1 = pcVar7[0xd];
                    bVar13 = cVar1 == 'c';
                    if (bVar13) {
                      cVar1 = pcVar7[0xe];
                    }
                    if (bVar13 && cVar1 == 'a') {
                      cVar1 = pcVar7[0xf];
                      bVar13 = cVar1 == 'l';
                      if (bVar13) {
                        cVar1 = pcVar7[0x10];
                      }
                      if (bVar13 && cVar1 == 'i') {
                        cVar1 = pcVar7[0x11];
                        bVar13 = cVar1 == 'n';
                        if (bVar13) {
                          cVar1 = pcVar7[0x12];
                        }
                        if (bVar13 && cVar1 == 'g') {
                          local_f8 = &DAT_80000016;
                          break;
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
LAB_01233ff8:
      local_f0 = (char *)FUN_01298504(pcVar8,1);
      local_28c = pcVar8;
      if (local_f0 == (char *)0x0) goto LAB_012347d4;
      pcVar10 = pcVar8;
    }
    else {
      if (pcVar8 == &DAT_0000000a) {
        cVar1 = *pcVar7;
        if (cVar1 == 'a') {
          if (pcVar7[1] == 'u') {
            cVar1 = pcVar7[2];
            bVar13 = cVar1 == 't';
            if (bVar13) {
              cVar1 = pcVar7[3];
            }
            if (bVar13 && cVar1 == 'o') {
              cVar1 = pcVar7[4];
              bVar13 = cVar1 == 't';
              if (bVar13) {
                cVar1 = pcVar7[5];
              }
              if (bVar13 && cVar1 == 'u') {
                cVar1 = pcVar7[6];
                bVar13 = cVar1 == 'n';
                if (bVar13) {
                  cVar1 = pcVar7[7];
                }
                if (bVar13 && cVar1 == 'i') {
                  cVar1 = pcVar7[8];
                  bVar13 = cVar1 == 'n';
                  if (bVar13) {
                    cVar1 = pcVar7[9];
                  }
                  if (bVar13 && cVar1 == 'g') {
                    local_f8 = (char *)0x80000015;
                    break;
                  }
                }
              }
            }
          }
        }
        else {
          bVar13 = cVar1 == 'm';
          if (bVar13) {
            cVar1 = pcVar7[1];
          }
          if (bVar13 && cVar1 == 'a') {
            cVar1 = pcVar7[2];
            bVar13 = cVar1 == 'n';
            if (bVar13) {
              cVar1 = pcVar7[3];
            }
            if (bVar13 && cVar1 == 'a') {
              cVar1 = pcVar7[4];
              bVar13 = cVar1 == 'g';
              if (bVar13) {
                cVar1 = pcVar7[5];
              }
              if (bVar13 && cVar1 == 'e') {
                cVar1 = pcVar7[6];
                bVar13 = cVar1 == 'm';
                if (bVar13) {
                  cVar1 = pcVar7[7];
                }
                if (bVar13 && cVar1 == 'e') {
                  cVar1 = pcVar7[8];
                  bVar13 = cVar1 == 'n';
                  if (bVar13) {
                    cVar1 = pcVar7[9];
                  }
                  if (bVar13 && cVar1 == 't') {
                    local_f8 = (char *)0x80000017;
                    break;
                  }
                }
              }
            }
          }
        }
        goto LAB_01233ff8;
      }
      uVar12 = 0;
      if ((int)pcVar8 < 0) goto LAB_012347d8;
      if (pcVar8 != (char *)0x0) goto LAB_01233ff8;
      local_f0 = &DAT_00000001;
      pcVar10 = (char *)0x0;
    }
    FUN_01bed4e2(local_f0,pcVar7,pcVar8);
    local_f8 = (char *)0x8000000e;
    local_f4 = pcVar10;
    local_ec = pcVar8;
    break;
  case 0xf:
    pcVar8 = (char *)puVar6[1];
    pcVar7 = (char *)puVar6[2];
    if (pcVar7 == (char *)0x13) {
      cVar1 = *pcVar8;
      bVar13 = cVar1 == 'p';
      if (bVar13) {
        cVar1 = pcVar8[1];
      }
      if (bVar13 && cVar1 == 'e') {
        cVar1 = pcVar8[2];
        bVar13 = cVar1 == 'r';
        if (bVar13) {
          cVar1 = pcVar8[3];
        }
        if (bVar13 && cVar1 == 'f') {
          cVar1 = pcVar8[4];
          bVar13 = cVar1 == 'o';
          if (bVar13) {
            cVar1 = pcVar8[5];
          }
          if (bVar13 && cVar1 == 'r') {
            cVar1 = pcVar8[6];
            bVar13 = cVar1 == 'm';
            if (bVar13) {
              cVar1 = pcVar8[7];
            }
            if (bVar13 && cVar1 == 'a') {
              cVar1 = pcVar8[8];
              bVar13 = cVar1 == 'n';
              if (bVar13) {
                cVar1 = pcVar8[9];
              }
              if (bVar13 && cVar1 == 'c') {
                cVar1 = pcVar8[10];
                bVar13 = cVar1 == 'e';
                if (bVar13) {
                  cVar1 = pcVar8[0xb];
                }
                if (bVar13 && cVar1 == '_') {
                  cVar1 = pcVar8[0xc];
                  bVar13 = cVar1 == 's';
                  if (bVar13) {
                    cVar1 = pcVar8[0xd];
                  }
                  if (bVar13 && cVar1 == 'c') {
                    cVar1 = pcVar8[0xe];
                    bVar13 = cVar1 == 'a';
                    if (bVar13) {
                      cVar1 = pcVar8[0xf];
                    }
                    if (bVar13 && cVar1 == 'l') {
                      cVar1 = pcVar8[0x10];
                      bVar13 = cVar1 == 'i';
                      if (bVar13) {
                        cVar1 = pcVar8[0x11];
                      }
                      if (bVar13 && cVar1 == 'n') {
                        cVar1 = pcVar8[0x12];
                        pcVar10 = &DAT_80000016;
                        goto LAB_0123439c;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_01233fbc:
      local_f8 = (char *)0x8000000f;
      pcVar10 = pcVar7;
      ppcVar11 = ppcVar5;
      local_f4 = pcVar8;
    }
    else {
      if (pcVar7 != (char *)0xa) goto LAB_01233fbc;
      cVar1 = *pcVar8;
      if (cVar1 == 'a') {
        cVar1 = pcVar8[1];
        bVar13 = cVar1 == 'u';
        if (bVar13) {
          cVar1 = pcVar8[2];
        }
        if (bVar13 && cVar1 == 't') {
          cVar1 = pcVar8[3];
          bVar13 = cVar1 == 'o';
          if (bVar13) {
            cVar1 = pcVar8[4];
          }
          if (bVar13 && cVar1 == 't') {
            cVar1 = pcVar8[5];
            bVar13 = cVar1 == 'u';
            if (bVar13) {
              cVar1 = pcVar8[6];
            }
            if (bVar13 && cVar1 == 'n') {
              cVar1 = pcVar8[7];
              bVar13 = cVar1 == 'i';
              if (bVar13) {
                cVar1 = pcVar8[8];
              }
              if (bVar13 && cVar1 == 'n') {
                cVar1 = pcVar8[9];
                pcVar10 = (char *)0x80000015;
LAB_0123439c:
                bVar13 = cVar1 == 'g';
                goto LAB_012343a0;
              }
            }
          }
        }
        goto LAB_01233fbc;
      }
      bVar13 = cVar1 != 'm';
      if (!bVar13) {
        cVar1 = pcVar8[1];
      }
      if ((bVar13 || cVar1 != 'a') || (pcVar8[2] != 'n')) goto LAB_01233fbc;
      cVar1 = pcVar8[3];
      bVar13 = cVar1 != 'a';
      if (!bVar13) {
        cVar1 = pcVar8[4];
      }
      if (bVar13 || cVar1 != 'g') goto LAB_01233fbc;
      cVar1 = pcVar8[5];
      bVar13 = cVar1 != 'e';
      if (!bVar13) {
        cVar1 = pcVar8[6];
      }
      if (bVar13 || cVar1 != 'm') goto LAB_01233fbc;
      cVar1 = pcVar8[7];
      bVar13 = cVar1 != 'e';
      if (!bVar13) {
        cVar1 = pcVar8[8];
      }
      if (bVar13 || cVar1 != 'n') goto LAB_01233fbc;
      pcVar10 = (char *)0x80000017;
      bVar13 = pcVar8[9] == 't';
LAB_012343a0:
      if (!bVar13) goto LAB_01233fbc;
    }
    *ppcVar11 = pcVar10;
  }
  local_130 = local_f4;
  pcStack_12c = local_f0;
  pcStack_128 = local_ec;
  local_1f0 = local_f4;
  pcStack_1ec = local_f0;
  pcStack_1e8 = local_ec;
  if (local_f8 != &DAT_80000018) {
    pcVar8 = &DAT_00000003;
    if (&DAT_80000014 < local_f8) {
      pcVar8 = local_f8 + 0x7fffffeb;
    }
                    /* WARNING: Could not recover jumptable at 0x01234084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01234088 + *(int *)(&DAT_01234088 + (int)pcVar8 * 4)))();
    return;
  }
LAB_0123448c:
  FUN_01227834(&local_100,8,0);
  local_130 = local_f8;
  pcStack_12c = local_f4;
  pcStack_128 = local_f0;
  pcStack_124 = local_ec;
  local_120 = local_e8;
  iStack_11c = iStack_e4;
  local_118 = local_e0;
  iStack_114 = iStack_dc;
  iStack_110 = iStack_d8;
  iStack_10c = iStack_d4;
  iStack_108 = iStack_d0;
  iStack_104 = iStack_cc;
  if (local_100 == 3 && local_fc == 0) {
    param_1[2] = (int)local_f8;
    param_1[3] = (int)local_f4;
    param_1[4] = (int)local_f0;
    param_1[5] = (int)local_ec;
    param_1[6] = local_e8;
    param_1[7] = iStack_e4;
    param_1[8] = local_e0;
    param_1[9] = iStack_dc;
    param_1[10] = iStack_d8;
    param_1[0xb] = iStack_d4;
    param_1[0xc] = iStack_d0;
    param_1[0xd] = iStack_cc;
    *param_1 = 3;
    param_1[1] = 0;
  }
  else {
    FUN_01bed4e2(param_1 + 0xe,auStack_c8,0xa0);
    param_1[2] = (int)local_130;
    param_1[3] = (int)pcStack_12c;
    param_1[4] = (int)pcStack_128;
    param_1[5] = (int)pcStack_124;
    param_1[6] = local_120;
    param_1[7] = iStack_11c;
    param_1[8] = local_118;
    param_1[9] = iStack_114;
    param_1[10] = iStack_110;
    param_1[0xb] = iStack_10c;
    param_1[0xc] = iStack_108;
    param_1[0xd] = iStack_104;
    param_1[0x38] = local_148;
    param_1[0x39] = iStack_144;
    param_1[0x3a] = iStack_140;
    param_1[0x3b] = iStack_13c;
    param_1[0x3c] = iStack_138;
    param_1[0x3d] = iStack_134;
    param_1[0x40] = local_1e0;
    param_1[0x41] = iStack_1dc;
    param_1[0x42] = iStack_1d8;
    param_1[0x43] = iStack_1d4;
    param_1[0x44] = local_1d0;
    param_1[0x45] = local_1cc;
    param_1[0x46] = iStack_1c8;
    param_1[0x47] = iStack_1c4;
    param_1[0x48] = iStack_1c0;
    param_1[0x49] = iStack_1bc;
    param_1[0x4a] = local_1b8;
    param_1[0x4b] = iStack_1b4;
    param_1[0x4c] = iStack_1b0;
    param_1[0x4d] = iStack_1ac;
    param_1[0x4e] = iStack_1a8;
    param_1[0x4f] = iStack_1a4;
    param_1[0x3e] = 2;
    param_1[0x36] = 2;
    param_1[0x3f] = 0;
    param_1[0x51] = local_284;
    param_1[0x37] = 0;
    param_1[0x52] = local_288;
    *param_1 = local_100;
    param_1[1] = local_fc;
    param_1[0x50] = 2;
  }
LAB_01234628:
  FUN_0126cce4(&local_1fc);
  return;
}

