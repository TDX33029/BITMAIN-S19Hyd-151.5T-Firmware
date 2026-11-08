// FUN_01573254 @ 01573254 size=4780 calls_out=9 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01573254(undefined4 *param_1,undefined4 param_2,code *param_3,code *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar6;
  char cVar5;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  code *pcVar11;
  short *psVar12;
  short *psVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  short sVar19;
  uint uVar20;
  char *pcVar21;
  short *psVar22;
  short *psVar23;
  int iVar24;
  undefined4 *puVar25;
  short *psVar26;
  short *psVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  byte *pbVar31;
  byte *pbVar32;
  bool bVar33;
  bool bVar34;
  short *local_ac;
  uint local_a8;
  uint local_a0;
  short *local_9c;
  short *local_98;
  short *local_94;
  char *local_8c;
  short *local_88;
  char *local_80;
  short *local_7c;
  int local_78;
  byte *local_74;
  char *local_70;
  char *local_6c;
  char *local_68;
  char *local_64;
  short *local_60;
  short *local_5c;
  short *local_58;
  int local_54;
  short *local_50;
  short *local_4c;
  short *local_48;
  short *local_44;
  short *local_40;
  short *local_38;
  undefined4 local_34;
  short *local_30;
  short *local_2c;
  short local_26;
  
  local_74 = (byte *)thunk_FUN_016d4a50(0x400);
  if (local_74 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x400);
  }
  local_70 = (char *)0x0;
  local_80 = &DAT_80000000;
  local_78 = 0x400;
  local_6c = &DAT_80000000;
  local_50 = (short *)thunk_FUN_016d4a50(0x50);
  if (local_50 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1);
  }
  local_54 = 0x50;
LAB_015732e0:
  psVar26 = (short *)0x0;
  psVar22 = (short *)0x0;
  local_4c = (short *)0x0;
  do {
    (*param_3)(&local_38,param_2);
    if (local_38 == (short *)&DAT_00000001) {
      do {
        psVar13 = local_30;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((uint)local_34 & 0xff) {
        case 0:
          if (local_30 != (short *)&DAT_00000004) goto LAB_015734a0;
          goto LAB_015733a4;
        case 1:
          cVar7 = local_34._1_1_;
          break;
        case 2:
          cVar7 = (char)local_30[4];
          break;
        case 3:
          if ((char)local_30[4] == '#') {
            uVar9 = *(undefined4 *)local_30;
            puVar25 = *(undefined4 **)(local_30 + 2);
            pcVar11 = (code *)*puVar25;
            if (pcVar11 != (code *)0x0) {
              (*pcVar11)(uVar9);
            }
            if (puVar25[1] != 0) {
              thunk_FUN_016d3fb4(uVar9);
            }
            thunk_FUN_016d3fb4(psVar13);
            goto LAB_015733a4;
          }
          goto LAB_015734a0;
        }
        if (cVar7 != '#') {
LAB_015734a0:
          psVar13 = local_34;
          psVar22 = local_30;
          if (((uint)local_34 & 0xff) == 4) goto LAB_015734b4;
          uVar9 = 1;
          iVar8 = 0xc;
          iVar14 = 8;
          psVar27 = (short *)0x3;
          iVar16 = 4;
          psVar12 = local_34;
          local_58 = local_30;
          goto LAB_01573d94;
        }
LAB_015733a4:
        (*param_3)(&local_38,param_2);
      } while (local_38 != (short *)0x0);
    }
    psVar13 = local_30;
    psVar27 = local_34;
    if (local_30 != (short *)0x0) {
      psVar12 = (short *)0x0;
      do {
        if (*(char *)((int)local_34 + (int)psVar12) == '\n' ||
            *(char *)((int)local_34 + (int)psVar12) == '\r') {
          if (local_30 <= psVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,psVar12,local_30,&DAT_018a90d0);
          }
          psVar13 = (short *)((int)psVar12 + 1);
          if ((short *)(local_54 - (int)psVar26) <= psVar12) {
            FUN_01007854(&local_54,psVar26,psVar13);
            psVar26 = local_4c;
          }
          FUN_016dd1aa((char *)((int)local_50 + (int)psVar26),psVar27,psVar13);
          psVar26 = (short *)((int)psVar26 + (int)psVar13);
          local_4c = psVar26;
          (*param_4)(param_2,psVar13);
          psVar22 = (short *)((int)psVar13 + (int)psVar22);
          goto LAB_015734b4;
        }
        psVar12 = (short *)((int)psVar12 + 1);
      } while (local_30 != psVar12);
    }
    if ((short *)(local_54 - (int)psVar26) < local_30) {
      FUN_01007854(&local_54,psVar26,local_30);
      psVar26 = local_4c;
    }
    FUN_016dd1aa((char *)((int)local_50 + (int)psVar26),psVar27,psVar13);
    psVar26 = (short *)((int)psVar26 + (int)psVar13);
    local_4c = psVar26;
    (*param_4)(param_2,psVar13);
    psVar22 = (short *)((int)psVar13 + (int)psVar22);
  } while (psVar13 != (short *)0x0);
LAB_015734b4:
  psVar23 = local_50;
  psVar12 = local_5c;
  psVar27 = local_60;
  if (psVar22 != (short *)0x0) {
    if ((&DAT_0000000a < psVar26) &&
       (iVar8 = thunk_FUN_016dd50a(&DAT_0040d927,local_50,0xb), iVar8 == 0)) {
      psVar13 = (short *)((int)psVar23 + (int)psVar26);
      iVar8 = 0;
      psVar22 = psVar26;
LAB_01573558:
      psVar13 = (short *)((int)psVar13 + -1);
      switch(*(char *)psVar13) {
      case '\n':
      case '\r':
      case ' ':
        goto switchD_01573570_caseD_a;
      default:
        goto switchD_01573570_caseD_b;
      case '-':
        psVar22 = (short *)((int)psVar13 - (int)psVar23);
        iVar8 = iVar8 + 1;
        if (psVar22 == (short *)0x0) {
          if (iVar8 != 5) goto LAB_01573e08;
          psVar22 = (short *)0x0;
          goto LAB_015745d4;
        }
        goto LAB_01573558;
      }
    }
    if (local_80 != &DAT_80000000) {
      if (local_58 <= psVar26) {
        iVar8 = thunk_FUN_016dd50a(local_5c,psVar23);
        pcVar21 = local_70;
        if (iVar8 == 0) {
          switch(local_88) {
          case (short *)0x8:
            if (*local_8c == 'X') {
              cVar7 = local_8c[1];
              bVar33 = cVar7 == '5';
              if (bVar33) {
                cVar7 = local_8c[2];
              }
              if (bVar33 && cVar7 == '0') {
                cVar7 = local_8c[3];
                bVar33 = cVar7 == '9';
                if (bVar33) {
                  cVar7 = local_8c[4];
                }
                if (bVar33 && cVar7 == ' ') {
                  cVar7 = local_8c[5];
                  bVar33 = cVar7 == 'C';
                  if (bVar33) {
                    cVar7 = local_8c[6];
                  }
                  if (bVar33 && cVar7 == 'R') {
                    iVar24 = 5;
                    cVar7 = 'L';
                    iVar8 = 7;
LAB_01573ca0:
                    if (local_8c[iVar8] == cVar7) {
                      local_98 = (short *)(((uint)(local_70 + 3) >> 2) * 3);
                      if (local_70 == (char *)0x0) {
                        local_9c = (short *)&DAT_00000001;
                        psVar27 = (short *)0x0;
                      }
                      else {
                        local_9c = (short *)FUN_016d38c8(local_98,1);
                        if (local_9c == (short *)0x0) {
                          uVar9 = 1;
                          goto LAB_01573e14;
                        }
                        psVar27 = local_98;
                      }
                      if (iVar24 - 2U < 3) {
                        local_ac = (short *)0x0;
                        local_a8 = 0x2a;
                        local_94 = (short *)0x0;
                        local_7c = (short *)0x0;
                        local_88 = (short *)0x0;
                        local_a0 = 0;
                        pbVar32 = local_74;
                        goto LAB_01573f00;
                      }
                      local_88 = (short *)0x0;
                      uVar10 = 0x2a;
                      uVar28 = 0;
                      uVar20 = 0;
                      uVar29 = 0;
                      psVar22 = (short *)&DAT_0040d95f;
                      local_7c = (short *)0x0;
                      pbVar32 = local_74;
                      goto LAB_01574134;
                    }
                  }
                }
              }
            }
            break;
          case (short *)0x9:
            cVar7 = *local_8c;
            bVar33 = cVar7 == 'E';
            if (bVar33) {
              cVar7 = local_8c[1];
            }
            if (bVar33 && cVar7 == 'C') {
              cVar7 = local_8c[2];
              bVar33 = cVar7 == 'H';
              if (bVar33) {
                cVar7 = local_8c[3];
              }
              if (bVar33 && cVar7 == 'C') {
                cVar7 = local_8c[4];
                bVar33 = cVar7 == 'O';
                if (bVar33) {
                  cVar7 = local_8c[5];
                }
                if (bVar33 && cVar7 == 'N') {
                  cVar7 = local_8c[6];
                  bVar33 = cVar7 == 'F';
                  if (bVar33) {
                    cVar7 = local_8c[7];
                  }
                  if (bVar33 && cVar7 == 'I') {
                    iVar24 = 7;
                    cVar7 = 'G';
                    iVar8 = 8;
                    goto LAB_01573ca0;
                  }
                }
              }
            }
            break;
          case (short *)0xa:
            if (*local_8c == 'P') {
              cVar7 = local_8c[1];
              bVar33 = cVar7 == 'U';
              if (bVar33) {
                cVar7 = local_8c[2];
              }
              if (bVar33 && cVar7 == 'B') {
                cVar7 = local_8c[3];
                bVar33 = cVar7 == 'L';
                if (bVar33) {
                  cVar7 = local_8c[4];
                }
                if (bVar33 && cVar7 == 'I') {
                  cVar7 = local_8c[5];
                  bVar33 = cVar7 == 'C';
                  if (bVar33) {
                    cVar7 = local_8c[6];
                  }
                  if (bVar33 && cVar7 == ' ') {
                    cVar7 = local_8c[7];
                    bVar33 = cVar7 == 'K';
                    if (bVar33) {
                      cVar7 = local_8c[8];
                    }
                    if (bVar33 && cVar7 == 'E') {
                      iVar24 = 1;
                      cVar7 = 'Y';
                      iVar8 = 9;
                      goto LAB_01573ca0;
                    }
                  }
                }
              }
            }
            break;
          case (short *)0xb:
            cVar7 = *local_8c;
            if (cVar7 == 'P') {
              cVar7 = local_8c[1];
              bVar33 = cVar7 == 'R';
              if (bVar33) {
                cVar7 = local_8c[2];
              }
              if ((bVar33 && cVar7 == 'I') && (local_8c[3] == 'V')) {
                cVar7 = local_8c[4];
                bVar33 = cVar7 == 'A';
                if (bVar33) {
                  cVar7 = local_8c[5];
                }
                if (bVar33 && cVar7 == 'T') {
                  cVar7 = local_8c[6];
                  bVar33 = cVar7 == 'E';
                  if (bVar33) {
                    cVar7 = local_8c[7];
                  }
                  if (bVar33 && cVar7 == ' ') {
                    cVar7 = local_8c[8];
                    bVar33 = cVar7 == 'K';
                    if (bVar33) {
                      cVar7 = local_8c[9];
                    }
                    if (bVar33 && cVar7 == 'E') {
                      iVar24 = 3;
                      cVar7 = 'Y';
LAB_01573c9c:
                      iVar8 = 10;
                      goto LAB_01573ca0;
                    }
                  }
                }
              }
            }
            else {
              bVar33 = cVar7 == 'C';
              if (bVar33) {
                cVar7 = local_8c[1];
              }
              if (bVar33 && cVar7 == 'E') {
                cVar7 = local_8c[2];
                bVar33 = cVar7 == 'R';
                if (bVar33) {
                  cVar7 = local_8c[3];
                }
                if (bVar33 && cVar7 == 'T') {
                  cVar7 = local_8c[4];
                  bVar33 = cVar7 == 'I';
                  if (bVar33) {
                    cVar7 = local_8c[5];
                  }
                  if (bVar33 && cVar7 == 'F') {
                    cVar7 = local_8c[6];
                    bVar33 = cVar7 == 'I';
                    if (bVar33) {
                      cVar7 = local_8c[7];
                    }
                    if (bVar33 && cVar7 == 'C') {
                      cVar7 = local_8c[8];
                      bVar33 = cVar7 == 'A';
                      if (bVar33) {
                        cVar7 = local_8c[9];
                      }
                      if (bVar33 && cVar7 == 'T') {
                        iVar24 = 0;
                        cVar7 = 'E';
                        goto LAB_01573c9c;
                      }
                    }
                  }
                }
              }
            }
            break;
          case (short *)0xe:
            if (*local_8c == 'E') {
              cVar7 = local_8c[1];
              bVar33 = cVar7 == 'C';
              if (bVar33) {
                cVar7 = local_8c[2];
              }
              if (bVar33 && cVar7 == ' ') {
                cVar7 = local_8c[3];
                bVar33 = cVar7 == 'P';
                if (bVar33) {
                  cVar7 = local_8c[4];
                }
                if (bVar33 && cVar7 == 'R') {
                  cVar7 = local_8c[5];
                  bVar33 = cVar7 == 'I';
                  if (bVar33) {
                    cVar7 = local_8c[6];
                  }
                  if (bVar33 && cVar7 == 'V') {
                    cVar7 = local_8c[7];
                    bVar33 = cVar7 == 'A';
                    if (bVar33) {
                      cVar7 = local_8c[8];
                    }
                    if (bVar33 && cVar7 == 'T') {
                      cVar7 = local_8c[9];
                      bVar33 = cVar7 == 'E';
                      if (bVar33) {
                        cVar7 = local_8c[10];
                      }
                      if (bVar33 && cVar7 == ' ') {
                        cVar7 = local_8c[0xb];
                        bVar33 = cVar7 == 'K';
                        if (bVar33) {
                          cVar7 = local_8c[0xc];
                        }
                        if (bVar33 && cVar7 == 'E') {
                          iVar24 = 4;
                          cVar7 = 'Y';
                          iVar8 = 0xd;
                          goto LAB_01573ca0;
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case (short *)0xf:
            cVar7 = *local_8c;
            bVar33 = cVar7 == 'R';
            if (bVar33) {
              cVar7 = local_8c[1];
            }
            if (bVar33 && cVar7 == 'S') {
              cVar7 = local_8c[2];
              bVar33 = cVar7 == 'A';
              if (bVar33) {
                cVar7 = local_8c[3];
              }
              if (bVar33 && cVar7 == ' ') {
                cVar7 = local_8c[4];
                bVar33 = cVar7 == 'P';
                if (bVar33) {
                  cVar7 = local_8c[5];
                }
                if (bVar33 && cVar7 == 'R') {
                  cVar7 = local_8c[6];
                  bVar33 = cVar7 == 'I';
                  if (bVar33) {
                    cVar7 = local_8c[7];
                  }
                  if (bVar33 && cVar7 == 'V') {
                    cVar7 = local_8c[8];
                    bVar33 = cVar7 == 'A';
                    if (bVar33) {
                      cVar7 = local_8c[9];
                    }
                    if (bVar33 && cVar7 == 'T') {
                      cVar7 = local_8c[10];
                      bVar33 = cVar7 == 'E';
                      if (bVar33) {
                        cVar7 = local_8c[0xb];
                      }
                      if (bVar33 && cVar7 == ' ') {
                        cVar7 = local_8c[0xc];
                        bVar33 = cVar7 == 'K';
                        if (bVar33) {
                          cVar7 = local_8c[0xd];
                        }
                        if (bVar33 && cVar7 == 'E') {
                          iVar24 = 2;
                          cVar7 = 'Y';
                          iVar8 = 0xe;
                          goto LAB_01573ca0;
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          case (short *)0x13:
            cVar7 = *local_8c;
            bVar33 = cVar7 == 'C';
            if (bVar33) {
              cVar7 = local_8c[1];
            }
            if (bVar33 && cVar7 == 'E') {
              cVar7 = local_8c[2];
              bVar33 = cVar7 == 'R';
              if (bVar33) {
                cVar7 = local_8c[3];
              }
              if (bVar33 && cVar7 == 'T') {
                cVar7 = local_8c[4];
                bVar33 = cVar7 == 'I';
                if (bVar33) {
                  cVar7 = local_8c[5];
                }
                if (bVar33 && cVar7 == 'F') {
                  cVar7 = local_8c[6];
                  bVar33 = cVar7 == 'I';
                  if (bVar33) {
                    cVar7 = local_8c[7];
                  }
                  if (bVar33 && cVar7 == 'C') {
                    cVar7 = local_8c[8];
                    bVar33 = cVar7 == 'A';
                    if (bVar33) {
                      cVar7 = local_8c[9];
                    }
                    if (bVar33 && cVar7 == 'T') {
                      cVar7 = local_8c[10];
                      bVar33 = cVar7 == 'E';
                      if (bVar33) {
                        cVar7 = local_8c[0xb];
                      }
                      if (bVar33 && cVar7 == ' ') {
                        cVar7 = local_8c[0xc];
                        bVar33 = cVar7 == 'R';
                        if (bVar33) {
                          cVar7 = local_8c[0xd];
                        }
                        if (bVar33 && cVar7 == 'E') {
                          cVar7 = local_8c[0xe];
                          bVar33 = cVar7 == 'Q';
                          if (bVar33) {
                            cVar7 = local_8c[0xf];
                          }
                          if (bVar33 && cVar7 == 'U') {
                            cVar7 = local_8c[0x10];
                            bVar33 = cVar7 == 'E';
                            if (bVar33) {
                              cVar7 = local_8c[0x11];
                            }
                            if (bVar33 && cVar7 == 'S') {
                              iVar24 = 6;
                              cVar7 = 'T';
                              iVar8 = 0x12;
                              goto LAB_01573ca0;
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
          if (local_80 != (char *)0x0) {
            thunk_FUN_016d3fb4(local_8c);
          }
          if (local_60 != (short *)0x0) {
            thunk_FUN_016d3fb4(local_5c);
          }
          local_70 = (char *)0x0;
          local_80 = &DAT_80000000;
          local_6c = &DAT_80000000;
          goto LAB_015732e0;
        }
      }
      if ((short *)(local_78 - (int)local_70) < psVar26) {
        FUN_01007854(&local_78,local_70,psVar26);
      }
      pcVar21 = local_70;
      FUN_016dd1aa(local_74 + (int)local_70,psVar23,psVar26);
      local_70 = pcVar21 + (int)psVar26;
    }
    goto LAB_015732e0;
  }
  iVar24 = 0;
  local_6c = &DAT_80000000;
  if (local_80 == &DAT_80000000) {
    psVar27 = (short *)&DAT_80000000;
    local_80 = &DAT_80000000;
    uVar9 = 0;
    local_58 = (short *)0x0;
    psVar12 = psVar13;
  }
  else {
    uVar9 = 1;
    if (local_80 != (char *)0x0) {
      thunk_FUN_016d3fb4(local_8c);
    }
    local_80 = &DAT_80000000;
  }
  goto LAB_01573d64;
switchD_01573570_caseD_a:
  if (psVar13 == psVar23) goto switchD_01573570_caseD_b;
  goto LAB_01573558;
switchD_01573570_caseD_b:
  if (iVar8 != 5) {
LAB_01573e08:
    if ((int)psVar26 < 0) {
      uVar9 = 0;
    }
    else {
      psVar12 = (short *)thunk_FUN_016d4a50(psVar26);
      if (psVar12 != (short *)0x0) {
        FUN_016dd1aa(psVar12,psVar23,psVar26);
        iVar24 = 1;
        uVar9 = 1;
        local_58 = psVar26;
        psVar27 = psVar26;
        goto LAB_01573e4c;
      }
      uVar9 = 1;
      local_98 = psVar26;
    }
LAB_01573e14:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar9,local_98);
  }
  if ((psVar22 < &DAT_0000000b) || (psVar26 < psVar22)) {
LAB_015745d4:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0xb,psVar22,psVar26,&DAT_018a90e0);
  }
  psVar26 = (short *)((int)psVar22 + 3);
  uVar9 = 0;
  if ((int)psVar26 < 0) goto LAB_01573e14;
  if (psVar26 == (short *)0x0) {
    local_44 = (short *)&DAT_00000001;
    local_48 = (short *)0x0;
LAB_0157374c:
    local_98 = local_44;
    local_40 = (short *)0x0;
    FUN_01007854(&local_48,0,9);
  }
  else {
    local_98 = (short *)thunk_FUN_016d4a50(psVar26);
    if (local_98 == (short *)0x0) {
      uVar9 = 1;
      local_98 = psVar26;
      goto LAB_01573e14;
    }
    local_40 = (short *)0x0;
    local_48 = psVar26;
    local_44 = local_98;
    if (psVar26 < &DAT_00000009) goto LAB_0157374c;
  }
  local_88 = (short *)((int)psVar22 + -0xb);
  builtin_strncpy((char *)((int)local_44 + (int)local_40),"-----END ",9);
  local_40 = (short *)((int)local_40 + 9);
  if ((char *)((int)local_48 - (int)local_40) < local_88) {
    FUN_01007854(&local_48,local_40,local_88);
  }
  psVar22 = local_40;
  FUN_016dd1aa((char *)((int)local_44 + (int)local_40),(char *)((int)psVar23 + 0xb),local_88);
  local_40 = (short *)((int)local_88 + (int)psVar22);
  if ((uint)((int)local_48 - (int)local_40) < 5) {
    FUN_01007854(&local_48,local_40,5);
  }
  builtin_strncpy((char *)((int)local_44 + (int)local_40),"-----",5);
  local_40 = (short *)((int)local_40 + 5);
  uVar9 = 0;
  if ((int)local_88 < 0) {
LAB_01574530:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar9,local_9c);
  }
  if (local_88 == (short *)0x0) {
    pcVar21 = (char *)0x0;
    local_9c = (short *)&DAT_00000001;
  }
  else {
    local_9c = (short *)thunk_FUN_016d4a50(local_88);
    if (local_9c == (short *)0x0) {
      uVar9 = 1;
      local_9c = local_88;
      goto LAB_01574530;
    }
    pcVar21 = (char *)local_88;
  }
  FUN_016dd1aa(local_9c,(char *)((int)psVar23 + 0xb),local_88);
  local_38 = local_48;
  local_34 = local_44;
  local_30 = local_40;
  if (local_80 != &DAT_80000000) {
    if (local_80 != (char *)0x0) {
      thunk_FUN_016d3fb4(local_8c);
    }
    if (local_60 != (short *)0x0) {
      thunk_FUN_016d3fb4(local_5c);
    }
  }
  local_60 = local_38;
  local_5c = local_34;
  local_58 = local_30;
  local_8c = (char *)local_9c;
  local_80 = pcVar21;
  local_6c = pcVar21;
  local_68 = (char *)local_9c;
  local_64 = (char *)local_88;
  goto LAB_015732e0;
LAB_01574134:
  cVar7 = (char)(uVar29 >> 8);
  cVar5 = (char)(uVar20 >> 0x18);
  cVar6 = (char)(uVar20 >> 0x10);
  if (pbVar32 != local_74 + (int)pcVar21) {
    pbVar31 = pbVar32 + 1;
    bVar1 = *pbVar32;
    uVar30 = (uint)(byte)(&DAT_0040d95f)[bVar1];
    pbVar32 = pbVar31;
    if (uVar30 != 0xf0) {
      if (uVar30 == 0xf1) {
        iVar8 = 1;
        uVar30 = 0;
      }
      else {
        if (uVar30 == 0xf2) {
          sVar19 = (ushort)bVar1 << 8;
          goto switchD_015743c4_caseD_1;
        }
        iVar8 = 0;
      }
      if (uVar28 == 8) {
        if (local_7c != (short *)0x0) goto LAB_0157453c;
        sVar19 = 3;
        bVar34 = &DAT_fffffff8 < local_88;
        bVar33 = local_88 == (short *)0xfffffff9;
        if (local_88 < (short *)0xfffffffa) {
          psVar13 = local_88 + 3;
          bVar34 = local_98 <= psVar13;
          bVar33 = psVar13 == local_98;
        }
        if (bVar34 && !bVar33) goto switchD_015743c4_caseD_1;
        uVar10 = 0x2a;
        uVar28 = 0;
        pcVar15 = (char *)((int)local_9c + (int)local_88);
        *pcVar15 = cVar7;
        pcVar15[4] = (char)(uVar20 >> 8);
        pcVar15[3] = cVar6;
        pcVar15[5] = (char)uVar20;
        uVar20 = 0;
        pcVar15[1] = (char)uVar29;
        uVar29 = 0;
        pcVar15[2] = cVar5;
        local_7c = (short *)0x0;
        local_88 = psVar13;
      }
      uVar17 = uVar28 & 0x1f;
      uVar28 = uVar28 + 1;
      local_7c = (short *)((uint)local_7c | iVar8 << uVar17);
      uVar18 = uVar10 & 0x3f;
      psVar13 = (short *)(uVar18 - 0x20);
      uVar17 = uVar30 << uVar18;
      if (-1 < (int)psVar13) {
        uVar17 = 0;
      }
      uVar20 = uVar17 | uVar20;
      uVar17 = uVar30 >> (0x20 - uVar18 & 0xff);
      uVar10 = uVar10 - 6;
      if (-1 < (int)psVar13) {
        uVar17 = uVar30 << ((uint)psVar13 & 0xff);
      }
      uVar29 = uVar17 | uVar29;
    }
    goto LAB_01574134;
  }
  uVar10 = uVar20 >> 0x18;
  if ((int)uVar28 < 5) {
LAB_015743ec:
    sVar19 = 2;
    local_94 = local_7c;
    local_ac = local_88;
    local_58 = local_7c;
    switch(uVar28) {
    case 0:
      local_58 = local_88;
      goto LAB_0157441c;
    case 2:
      goto LAB_0157447c;
    case 3:
      if (local_7c == (short *)0x0) {
LAB_01574504:
        bVar34 = (short *)0xfffffffc < local_88;
        bVar33 = local_88 == (short *)0xfffffffd;
        sVar19 = 3;
        if (local_88 < (short *)0xfffffffe) {
          local_58 = local_88 + 1;
          bVar34 = local_98 <= local_58;
          bVar33 = local_58 == local_98;
        }
        if (!bVar34 || bVar33) {
          *(char *)((int)local_9c + (int)local_88) = cVar7;
LAB_015745a0:
          ((char *)((int)local_9c + (int)local_88))[1] = (char)uVar29;
          goto LAB_015745a8;
        }
      }
      break;
    case 4:
      if (local_7c == (short *)0x0) {
        bVar34 = (short *)0xfffffffb < local_88;
        bVar33 = local_88 == (short *)0xfffffffc;
        sVar19 = 3;
        if (local_88 < (short *)0xfffffffd) {
          local_58 = (short *)((int)local_88 + 3);
          bVar34 = local_98 <= local_58;
          bVar33 = local_58 == local_98;
        }
        if (!(bVar34 && !bVar33)) {
          *(char *)((int)local_9c + (int)local_88) = cVar7;
          ((char *)((int)local_9c + (int)local_88))[2] = (char)uVar10;
          goto LAB_015745a0;
        }
      }
      else {
        if (local_7c == (short *)&DAT_00000008) goto LAB_01574504;
LAB_015744b8:
        sVar19 = 2;
        if (local_94 == (short *)&DAT_0000000c) goto LAB_015744c0;
      }
    }
  }
  else {
    sVar19 = 1;
    if (((uint)local_7c & 0xf) == 0) {
      sVar19 = 3;
      bVar34 = (short *)0xfffffffb < local_88;
      bVar33 = local_88 == (short *)0xfffffffc;
      if (local_88 < (short *)0xfffffffd) {
        psVar22 = (short *)((int)local_88 + 3);
        bVar34 = local_98 <= psVar22;
        bVar33 = psVar22 == local_98;
      }
      if (!bVar34 || bVar33) {
        uVar28 = uVar28 - 4;
        pcVar21 = (char *)((int)local_9c + (int)local_88);
        *pcVar21 = cVar7;
        pcVar21[2] = cVar5;
        pcVar21[1] = (char)uVar29;
        uVar29 = uVar20 >> 8;
        local_7c = (short *)((int)local_7c >> 4);
        local_88 = psVar22;
        uVar10 = uVar20;
        cVar7 = cVar6;
        goto LAB_015743ec;
      }
    }
  }
  goto switchD_015743c4_caseD_1;
LAB_0157453c:
  sVar19 = 1;
  goto switchD_015743c4_caseD_1;
LAB_01573f00:
  cVar7 = (char)(local_a0 >> 8);
  cVar5 = (char)((uint)local_88 >> 0x18);
  if (pbVar32 != local_74 + (int)pcVar21) {
    pbVar31 = pbVar32 + 1;
    bVar4 = *pbVar32;
    uVar30 = (uint)bVar4;
    bVar1 = (bVar4 ^ 0x2f) - 1 & ~bVar4;
    uVar28 = (int)(char)((bVar4 ^ 0x20) - 1 & ~bVar4) >> 7 | (int)((uVar30 - 9 & 0xff) - 5) >> 0xf;
    bVar2 = (bVar4 ^ 0x3d) - 1 & ~bVar4;
    bVar3 = (bVar4 ^ 0x2b) - 1 & ~bVar4;
    uVar29 = (int)((uVar30 - 0x41 & 0xff) - 0x1a) >> 0xf;
    uVar20 = (int)((uVar30 - 0x61 & 0xff) - 0x1a) >> 0xf;
    uVar10 = (int)((uVar30 - 0x30 & 0xff) - 10) >> 0xf;
    psVar23 = (short *)((int)(char)bVar1 >> 7 & 0x3f);
    psVar22 = (short *)(uVar30 - 0x47);
    uVar29 = (uint)psVar23 | (int)(char)bVar3 >> 7 & 0x3eU | (int)(char)bVar2 >> 7 & 0xfffffff1U |
             (uint)psVar22 & uVar20 | uVar30 - 0x41 & uVar29 | uVar30 + 4 & uVar10 |
             uVar28 & 0xfffffff0 |
             ~((int)(char)(bVar1 | bVar3 | bVar2) >> 7 | uVar29 | uVar20 | uVar10 | uVar28) &
             0xfffffff2;
    uVar20 = uVar29 & 0xff;
    pbVar32 = pbVar31;
    if (uVar20 != 0xf0) {
      if (uVar20 == 0xf1) {
        iVar8 = 1;
        uVar29 = 0;
      }
      else {
        if (uVar20 == 0xf2) {
          sVar19 = (ushort)bVar4 << 8;
          goto switchD_015743c4_caseD_1;
        }
        iVar8 = 0;
      }
      if (local_7c == (short *)0x8) {
        if (local_94 != (short *)0x0) goto LAB_0157453c;
        sVar19 = 3;
        bVar34 = &DAT_fffffff8 < local_ac;
        bVar33 = local_ac == (short *)0xfffffff9;
        if (local_ac < (short *)0xfffffffa) {
          psVar22 = local_ac + 3;
          bVar34 = local_98 <= psVar22;
          bVar33 = psVar22 == local_98;
        }
        if (bVar34 && !bVar33) goto switchD_015743c4_caseD_1;
        pcVar15 = (char *)((int)local_9c + (int)local_ac);
        *pcVar15 = cVar7;
        pcVar15[5] = (char)local_88;
        pcVar15[1] = (char)local_a0;
        pcVar15[4] = (char)((uint)local_88 >> 8);
        pcVar15[3] = (char)((uint)local_88 >> 0x10);
        pcVar15[2] = cVar5;
        local_94 = (short *)0x0;
        local_a8 = 0x2a;
        local_7c = (short *)0x0;
        local_88 = (short *)0x0;
        local_a0 = 0;
        local_ac = psVar22;
      }
      uVar20 = (uint)local_7c & 0x1f;
      local_7c = (short *)((int)local_7c + 1);
      local_94 = (short *)((uint)local_94 | iVar8 << uVar20);
      uVar10 = local_a8 & 0x3f;
      uVar29 = uVar29 & 0xff;
      uVar20 = uVar29 << uVar10;
      uVar28 = uVar10 - 0x20;
      if (-1 < (int)uVar28) {
        uVar20 = 0;
      }
      psVar23 = (short *)(uVar20 | (uint)local_88);
      local_a8 = local_a8 - 6;
      uVar20 = uVar29 >> (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar28) {
        uVar20 = uVar29 << (uVar28 & 0xff);
      }
      local_a0 = uVar20 | local_a0;
      local_88 = psVar23;
    }
    goto LAB_01573f00;
  }
  if (4 < (int)local_7c) {
    sVar19 = 1;
    if (((uint)local_94 & 0xf) == 0) {
      sVar19 = 3;
      bVar34 = (short *)0xfffffffb < local_ac;
      bVar33 = local_ac == (short *)0xfffffffc;
      if (local_ac < (short *)0xfffffffd) {
        psVar23 = (short *)((int)local_ac + 3);
        bVar34 = local_98 <= psVar23;
        bVar33 = psVar23 == local_98;
      }
      if (!bVar34 || bVar33) {
        pcVar21 = (char *)((int)local_9c + (int)local_ac);
        *pcVar21 = cVar7;
        pcVar21[2] = cVar5;
        pcVar21[1] = (char)local_a0;
        local_a0._0_2_ = (undefined2)((uint)local_88 >> 8);
        local_7c = (short *)((int)local_7c - 4);
        local_94 = (short *)((int)local_94 >> 4);
        local_ac = psVar23;
        goto LAB_015743a8;
      }
    }
    goto switchD_015743c4_caseD_1;
  }
  local_88 = (short *)((uint)local_88 >> 0x18);
LAB_015743a8:
  cVar7 = (char)((ushort)(undefined2)local_a0 >> 8);
  sVar19 = 2;
  local_58 = local_94;
  switch(local_7c) {
  case (short *)0x0:
    local_58 = local_ac;
LAB_0157441c:
    sVar19 = 2;
    if (local_94 == (short *)0x0) goto LAB_015745a8;
    break;
  case (short *)0x2:
LAB_0157447c:
    sVar19 = 2;
    if (local_94 == (short *)0x0) {
LAB_015744c0:
      sVar19 = 3;
      if (local_ac < local_98) {
        *(char *)((int)local_9c + (int)local_ac) = cVar7;
        local_58 = (short *)((int)local_ac + 1);
        goto LAB_015745a8;
      }
    }
    break;
  case (short *)0x3:
    if (local_94 == (short *)0x0) {
LAB_015744e0:
      bVar34 = (short *)0xfffffffc < local_ac;
      bVar33 = local_ac == (short *)0xfffffffd;
      sVar19 = 3;
      if (local_ac < (short *)0xfffffffe) {
        local_58 = local_ac + 1;
        bVar34 = local_98 <= local_58;
        bVar33 = local_58 == local_98;
      }
      if (!bVar34 || bVar33) {
        *(char *)((int)local_9c + (int)local_ac) = cVar7;
        goto LAB_0157456c;
      }
    }
    break;
  case (short *)0x4:
    if (local_94 != (short *)0x0) {
      if (local_94 != (short *)&DAT_00000008) goto LAB_015744b8;
      goto LAB_015744e0;
    }
    bVar34 = (short *)0xfffffffb < local_ac;
    bVar33 = local_ac == (short *)0xfffffffc;
    sVar19 = 3;
    if (local_ac < (short *)0xfffffffd) {
      local_58 = (short *)((int)local_ac + 3);
      bVar34 = local_98 <= local_58;
      bVar33 = local_58 == local_98;
    }
    if (!(!bVar34 || bVar33)) break;
    *(char *)((int)local_9c + (int)local_ac) = cVar7;
    ((char *)((int)local_9c + (int)local_ac))[2] = (char)local_88;
LAB_0157456c:
    ((char *)((int)local_9c + (int)local_ac))[1] = (char)(undefined2)local_a0;
LAB_015745a8:
    uVar9 = 0;
    if (local_98 < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,local_58,local_98,&DAT_018a9100);
    }
    psVar12 = local_9c;
    goto LAB_01573e4c;
  }
switchD_015743c4_caseD_1:
  local_44 = (short *)&LAB_01573084;
  local_48 = &local_26;
  local_26 = sVar19;
  FUN_00600d2c(&local_34,&DAT_00590e71,&local_48);
  psVar12 = local_30;
  uVar9 = 1;
  iVar24 = 2;
  bVar33 = psVar27 != (short *)0x0;
  local_58 = local_2c;
  psVar27 = local_34;
  if (bVar33) {
    thunk_FUN_016d3fb4(local_9c);
  }
LAB_01573e4c:
LAB_01573d64:
  iVar8 = 0x10;
  iVar14 = 0xc;
  iVar16 = 8;
  param_1[1] = iVar24;
LAB_01573d94:
  *(short **)((int)param_1 + iVar16) = psVar27;
  *(short **)((int)param_1 + iVar14) = psVar12;
  *(short **)((int)param_1 + iVar8) = local_58;
  *param_1 = uVar9;
  if (local_54 != 0) {
    thunk_FUN_016d3fb4(local_50);
  }
  if (local_80 != &DAT_80000000) {
    if (local_80 != (char *)0x0) {
      thunk_FUN_016d3fb4(local_8c);
    }
    if (local_60 != (short *)0x0) {
      thunk_FUN_016d3fb4(local_5c);
    }
  }
  if (local_78 != 0) {
    thunk_FUN_016d3fb4(local_74);
  }
  return;
}

