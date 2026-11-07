// FUN_00040560 @ 00040560  size=8152  callers=0
// program: cgminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00040560(char *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  bool bVar16;
  undefined4 extraout_s1;
  undefined8 uVar17;
  undefined1 auStack_924 [92];
  char acStack_8c8 [160];
  char acStack_828 [2052];
  
  if ((DAT_000686f1 != '\0') &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    snprintf(acStack_828,0x800,"%s(%d) : %s","cb_bitmain_api_stats",param_2,param_1);
    FUN_0001dd98(7,acStack_828,0);
  }
  piVar1 = (int *)FUN_00047e04(param_1,0,auStack_924);
  if ((piVar1 == (int *)0x0) || (*piVar1 != 0)) {
    if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
      snprintf(acStack_828,0x800,"%s: load data is failed(%s)","cb_bitmain_api_stats",acStack_8c8);
      FUN_0001dd98(3,acStack_828,0);
    }
    return 0xfffffffe;
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00076310);
  if (iVar2 != 0) {
    piVar3 = __errno_location();
    snprintf(acStack_828,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar3,
             "socketa_api.c","cb_bitmain_api_stats",0x99);
    FUN_0001dd98(3,acStack_828,1);
    FUN_0003c34c(1);
  }
  memset(&DAT_00076328,0,0x1a28);
  piVar3 = (int *)FUN_00048cac(piVar1,"inited");
  if ((piVar3 == (int *)0x0) || (*piVar3 != 3)) {
    if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
      snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats");
      FUN_0001dd98(3,acStack_828,0);
    }
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076310);
    if (iVar2 != 0) {
      piVar3 = __errno_location();
      snprintf(acStack_828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar3,
               "socketa_api.c","cb_bitmain_api_stats",0x9e);
      FUN_0001dd98(3,acStack_828,1);
      FUN_0003c34c(1);
    }
    (*DAT_0006796c)();
    if (piVar1[1] == -1) {
      return 0xfffffffd;
    }
    piVar3 = piVar1 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3 + -1;
      bVar16 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar16);
    *piVar3 = iVar2;
  }
  else {
    DAT_00076330 = FUN_0004943c();
    piVar3 = (int *)FUN_00048cac(piVar1,"chain_num");
    if ((piVar3 != (int *)0x0) && (*piVar3 == 3)) {
      DAT_0007632c = FUN_0004943c();
      piVar3 = (int *)FUN_00048cac(piVar1,"real_miner_type");
      if ((piVar3 != (int *)0x0) && (*piVar3 == 2)) {
        pcVar4 = (char *)FUN_000491e0();
        snprintf(&DAT_00076334,0x100,"%s",pcVar4);
      }
      piVar3 = (int *)FUN_00048cac(piVar1,"rate_5s");
      if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
        if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
          snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats");
          FUN_0001dd98(3,acStack_828,0);
        }
        iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076310);
        if (iVar2 != 0) {
          piVar3 = __errno_location();
          snprintf(acStack_828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar3,
                   "socketa_api.c","cb_bitmain_api_stats",0xac);
          FUN_0001dd98(3,acStack_828,1);
          FUN_0003c34c(1);
        }
      }
      else {
        pcVar4 = (char *)FUN_000491e0();
        snprintf(&DAT_00076434,0x10,"%s",pcVar4);
        piVar3 = (int *)FUN_00048cac(piVar1,"rate_30m");
        if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
          if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats");
            FUN_0001dd98(3,acStack_828,0);
          }
          uVar5 = 0xb0;
        }
        else {
          pcVar4 = (char *)FUN_000491e0();
          snprintf(&DAT_00076444,0x10,"%s",pcVar4);
          piVar3 = (int *)FUN_00048cac(piVar1,"rate_avg");
          if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
            if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
              snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats");
              FUN_0001dd98(3,acStack_828,0);
            }
            uVar5 = 0xb4;
          }
          else {
            pcVar4 = (char *)FUN_000491e0();
            snprintf(&DAT_00076454,0x10,"%s",pcVar4);
            strncpy(&DAT_0006a6c8,&DAT_00076454,0x10);
            piVar3 = (int *)FUN_00048cac(piVar1,"rate_ideal");
            if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
              if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats");
                FUN_0001dd98(3,acStack_828,0);
              }
              uVar5 = 0xb9;
            }
            else {
              pcVar4 = (char *)FUN_000491e0();
              snprintf(&DAT_00076464,0x10,"%s",pcVar4);
              piVar3 = (int *)FUN_00048cac(piVar1,"rate_unit");
              if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
                if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                  snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats");
                  FUN_0001dd98(3,acStack_828,0);
                }
                uVar5 = 0xbd;
              }
              else {
                pcVar4 = (char *)FUN_000491e0();
                snprintf(&DAT_00076474,8,"%s",pcVar4);
                piVar3 = (int *)FUN_00048cac(piVar1,"fan_num");
                if ((piVar3 == (int *)0x0) || (*piVar3 != 3)) {
                  if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                    snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats");
                    FUN_0001dd98(3,acStack_828,0);
                  }
                  uVar5 = 0xc1;
                }
                else {
                  DAT_0007647c = FUN_0004943c();
                  iVar2 = FUN_00048cac(piVar1,&DAT_000562a4);
                  if (iVar2 != 0) {
                    DAT_00077d34 = FUN_0004943c();
                  }
                  iVar2 = FUN_00048cac(piVar1,&DAT_000562ac);
                  if (iVar2 != 0) {
                    pcVar4 = (char *)FUN_000491e0();
                    snprintf(&DAT_00077d44,8,"%s",pcVar4);
                  }
                  iVar2 = FUN_00048cac(piVar1,"power_min");
                  if (iVar2 != 0) {
                    DAT_00077d3c = FUN_0004943c();
                  }
                  iVar2 = FUN_00048cac(piVar1,"power_max");
                  if (iVar2 != 0) {
                    DAT_00077d38 = FUN_0004943c();
                  }
                  iVar2 = FUN_00048cac(piVar1,"power_def");
                  if (iVar2 != 0) {
                    DAT_00077d40 = FUN_0004943c();
                  }
                  piVar3 = (int *)FUN_00048cac(piVar1,&DAT_000562d4);
                  if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
                    if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                      snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats");
                      FUN_0001dd98(3,acStack_828,0);
                    }
                    uVar5 = 0xdb;
                  }
                  else {
                    puVar14 = &DAT_0007647c;
                    uVar13 = 0;
                    while( true ) {
                      uVar6 = FUN_00049018(piVar3);
                      if ((uVar6 <= uVar13) ||
                         (piVar7 = (int *)FUN_00049034(piVar3,uVar13), piVar7 == (int *)0x0)) break;
                      if (*piVar7 != 3) {
                        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)
                           ) {
                          snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats");
                          FUN_0001dd98(3,acStack_828,0);
                        }
                        uVar5 = 0xdd;
                        goto LAB_00040b28;
                      }
                      uVar5 = FUN_0004943c();
                      puVar14 = puVar14 + 1;
                      *puVar14 = uVar5;
                      uVar13 = uVar13 + 1;
                    }
                    piVar3 = (int *)FUN_00048cac(piVar1,"chain");
                    if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
                      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848))
                      {
                        snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats");
                        FUN_0001dd98(3,acStack_828,0);
                      }
                      uVar5 = 0xe2;
                    }
                    else {
                      pcVar4 = &DAT_00076684;
                      DAT_00076070 = 0;
                      for (uVar13 = 0;
                          (uVar6 = FUN_00049018(piVar3), uVar13 < uVar6 &&
                          (piVar7 = (int *)FUN_00049034(piVar3,uVar13),
                          piVar7 != (int *)0x0 && uVar13 != 4)); uVar13 = uVar13 + 1) {
                        if (*piVar7 != 0) {
                          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) ||
                             (2 < DAT_00067848)) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0xe8;
                          goto LAB_00040b28;
                        }
                        piVar8 = (int *)FUN_00048cac(piVar7,"index");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0xeb;
                          goto LAB_00040b28;
                        }
                        uVar5 = FUN_0004943c();
                        *(undefined4 *)(pcVar4 + -500) = uVar5;
                        piVar8 = (int *)FUN_00048cac(piVar7,"freq_avg");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0xef;
                          goto LAB_00040b28;
                        }
                        uVar5 = FUN_0004943c();
                        *(undefined4 *)(pcVar4 + -0x1f0) = uVar5;
                        piVar8 = (int *)FUN_00048cac(piVar7,"rate_ideal");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0xf3;
                          goto LAB_00040b28;
                        }
                        pcVar9 = (char *)FUN_000491e0();
                        snprintf(pcVar4 + -0x1ec,0x10,"%s",pcVar9);
                        piVar8 = (int *)FUN_00048cac(piVar7,"rate_real");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0xf7;
                          goto LAB_00040b28;
                        }
                        pcVar9 = (char *)FUN_000491e0();
                        snprintf(pcVar4 + -0x1dc,0x10,"%s",pcVar9);
                        piVar8 = (int *)FUN_00048cac(piVar7,"asic_num");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0xfb;
                          goto LAB_00040b28;
                        }
                        uVar5 = FUN_0004943c();
                        *(undefined4 *)(pcVar4 + -0x1cc) = uVar5;
                        piVar8 = (int *)FUN_00048cac(piVar7,&DAT_00056304);
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0xff;
                          goto LAB_00040b28;
                        }
                        pcVar9 = (char *)FUN_000491e0();
                        snprintf(pcVar4 + -0x1c8,0x100,"%s",pcVar9);
                        piVar8 = (int *)FUN_00048cac(piVar7,"temp_pic");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 1)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0x103;
                          goto LAB_00040b28;
                        }
                        pcVar9 = pcVar4 + -0xcc;
                        uVar6 = 0;
                        while (uVar10 = FUN_00049018(piVar8), uVar6 < uVar10) {
                          piVar11 = (int *)FUN_00049034(piVar8,uVar6);
                          bVar16 = uVar6 == 4;
                          uVar6 = uVar6 + 1;
                          if (piVar11 == (int *)0x0 || bVar16) break;
                          if (*piVar11 != 3) {
                            if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) ||
                               (2 < DAT_00067848)) {
                              snprintf(acStack_828,0x800,"%s: load json failed",
                                       "cb_bitmain_api_stats");
                              FUN_0001dd98(3,acStack_828,0);
                            }
                            uVar5 = 0x107;
                            goto LAB_00040b28;
                          }
                          uVar5 = FUN_0004943c();
                          pcVar9 = pcVar9 + 4;
                          *(undefined4 *)pcVar9 = uVar5;
                        }
                        piVar8 = (int *)FUN_00048cac(piVar7,"temp_pcb");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 1)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0x10c;
                          goto LAB_00040b28;
                        }
                        pcVar9 = pcVar4 + -0xbc;
                        uVar6 = 0;
                        while (uVar10 = FUN_00049018(piVar8), uVar6 < uVar10) {
                          piVar11 = (int *)FUN_00049034(piVar8,uVar6);
                          bVar16 = uVar6 == 4;
                          uVar6 = uVar6 + 1;
                          if (piVar11 == (int *)0x0 || bVar16) break;
                          if (*piVar11 != 3) {
                            if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) ||
                               (2 < DAT_00067848)) {
                              snprintf(acStack_828,0x800,"%s: load json failed",
                                       "cb_bitmain_api_stats");
                              FUN_0001dd98(3,acStack_828,0);
                            }
                            uVar5 = 0x110;
                            goto LAB_00040b28;
                          }
                          uVar5 = FUN_0004943c();
                          pcVar9 = pcVar9 + 4;
                          *(undefined4 *)pcVar9 = uVar5;
                        }
                        piVar8 = (int *)FUN_00048cac(piVar7,"temp_chip");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 1)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0x115;
                          goto LAB_00040b28;
                        }
                        pcVar9 = pcVar4 + -0xac;
                        uVar6 = 0;
                        while (uVar10 = FUN_00049018(piVar8), uVar6 < uVar10) {
                          piVar11 = (int *)FUN_00049034(piVar8,uVar6);
                          bVar16 = uVar6 == 4;
                          uVar6 = uVar6 + 1;
                          if (piVar11 == (int *)0x0 || bVar16) break;
                          if (*piVar11 != 3) {
                            if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) ||
                               (2 < DAT_00067848)) {
                              snprintf(acStack_828,0x800,"%s: load json failed",
                                       "cb_bitmain_api_stats");
                              FUN_0001dd98(3,acStack_828,0);
                            }
                            uVar5 = 0x119;
                            goto LAB_00040b28;
                          }
                          uVar5 = FUN_0004943c();
                          pcVar9 = pcVar9 + 4;
                          *(undefined4 *)pcVar9 = uVar5;
                        }
                        piVar8 = (int *)FUN_00048cac(piVar7,&DAT_00056330);
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0x11e;
                          goto LAB_00040b28;
                        }
                        iVar2 = FUN_0004943c();
                        *(int *)(pcVar4 + -0x98) = iVar2;
                        DAT_00077d2c = 0;
                        DAT_00076070 = DAT_00076070 + iVar2;
                        piVar8 = (int *)FUN_00048cac(piVar7,"rate_array");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 1)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0x124;
                          goto LAB_00040b28;
                        }
                        pcVar9 = pcVar4 + -0x98;
                        uVar6 = 0;
                        while( true ) {
                          uVar10 = FUN_00049018(piVar8);
                          if ((uVar10 <= uVar6) ||
                             (piVar11 = (int *)FUN_00049034(piVar8,uVar6), piVar11 == (int *)0x0))
                          break;
                          if (*piVar11 != 3) {
                            if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) ||
                               (2 < DAT_00067848)) {
                              snprintf(acStack_828,0x800,"%s: load json failed",
                                       "cb_bitmain_api_stats");
                              FUN_0001dd98(3,acStack_828,0);
                            }
                            uVar5 = 0x126;
                            goto LAB_00040b28;
                          }
                          uVar5 = FUN_0004943c();
                          pcVar9 = pcVar9 + 4;
                          *(undefined4 *)pcVar9 = uVar5;
                          DAT_00077d2c = DAT_00077d2c + 1;
                          uVar6 = uVar6 + 1;
                        }
                        piVar8 = (int *)FUN_00048cac(piVar7,"nonce");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) ||
                             (2 < DAT_00067848)) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 300;
                          goto LAB_00040b28;
                        }
                        iVar2 = FUN_0004943c();
                        *(int *)(pcVar4 + -0x34) = iVar2;
                        DAT_00077d28 = DAT_00077d28 + iVar2;
                        piVar8 = (int *)FUN_00048cac(piVar7,"eeprom");
                        if ((piVar8 == (int *)0x0) || (1 < *piVar8 - 5U)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0x131;
                          goto LAB_00040b28;
                        }
                        pcVar4[-0x30] = *piVar8 == 5;
                        piVar8 = (int *)FUN_00048cac(piVar7,&DAT_00056348);
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0x135;
                          goto LAB_00040b28;
                        }
                        pcVar9 = (char *)FUN_000491e0();
                        snprintf(pcVar4 + -0x2f,0x20,"%s",pcVar9);
                        piVar8 = (int *)FUN_00048cac(piVar7,"eeprom_vol");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0x139;
                          goto LAB_00040b28;
                        }
                        uVar5 = FUN_0004943c();
                        *(undefined4 *)(pcVar4 + -8) = uVar5;
                        piVar8 = (int *)FUN_00048cac(piVar7,"eeprom_freq");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0x13d;
                          goto LAB_00040b28;
                        }
                        uVar5 = FUN_0004943c();
                        *(undefined4 *)(pcVar4 + -0xc) = uVar5;
                        piVar8 = (int *)FUN_00048cac(piVar7,"eeprom_bin");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0x141;
                          goto LAB_00040b28;
                        }
                        uVar5 = FUN_0004943c();
                        *(undefined4 *)(pcVar4 + -4) = uVar5;
                        piVar8 = (int *)FUN_00048cac(piVar7,"eeprom_ft");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0x145;
                          goto LAB_00040b28;
                        }
                        pcVar9 = (char *)FUN_000491e0();
                        snprintf(pcVar4,0x10,"%s",pcVar9);
                        piVar8 = (int *)FUN_00048cac(piVar7,"eeprom_code");
                        if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0x149;
                          goto LAB_00040b28;
                        }
                        uVar5 = FUN_0004943c();
                        *(undefined4 *)(pcVar4 + 0x10) = uVar5;
                        iVar2 = FUN_00048cac(piVar7,&DAT_00056388);
                        if (iVar2 != 0) {
                          uVar10 = 0;
                          uVar17 = FUN_00049018();
                          uVar6 = (uint)((ulonglong)uVar17 >> 0x20);
                          *(int *)(pcVar4 + 0x14) = (int)uVar17;
                          while ((uVar6 = FUN_00049018(iVar2,uVar6), uVar10 < uVar6 &&
                                 (piVar7 = (int *)FUN_00049034(iVar2,uVar10), piVar7 != (int *)0x0))
                                ) {
                            if (*piVar7 != 1) {
                              if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) ||
                                 (2 < DAT_00067848)) {
                                snprintf(acStack_828,0x800,"%s: load json failed",
                                         "cb_bitmain_api_stats");
                                FUN_0001dd98(3,acStack_828,0);
                              }
                              uVar5 = 0x153;
                              goto LAB_00040b28;
                            }
                            uVar5 = FUN_00049018();
                            *(undefined4 *)(pcVar4 + 0x18) = uVar5;
                            for (uVar15 = 0; uVar12 = FUN_00049018(piVar7), uVar6 = uVar15,
                                uVar15 < uVar12; uVar15 = uVar15 + 1) {
                              uVar17 = FUN_00049034(piVar7);
                              uVar6 = (uint)((ulonglong)uVar17 >> 0x20);
                              if ((int)uVar17 == 0) break;
                              uVar5 = FUN_0004943c();
                              *(undefined4 *)
                               (&DAT_00076328 +
                               (*(int *)(pcVar4 + 0x18) * uVar10 + uVar13 * 0x184 + uVar15 + 0xde) *
                               4) = uVar5;
                            }
                            uVar10 = uVar10 + 1;
                          }
                        }
                        pcVar4 = pcVar4 + 0x610;
                      }
                      piVar3 = (int *)FUN_00048cac(piVar1,"miner_version");
                      if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
                        if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))
                           ) {
                          snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats");
                          FUN_0001dd98(3,acStack_828,0);
                        }
                        uVar5 = 0x15c;
                      }
                      else {
                        pcVar4 = (char *)FUN_000491e0();
                        snprintf(&DAT_00077cd0,0x30,"%s",pcVar4);
                        iVar2 = strcmp(&DAT_00077cd0,&DAT_0006a6e0);
                        if (iVar2 != 0) {
                          strncpy(&DAT_0006a6e0,&DAT_00077cd0,0x100);
                        }
                        piVar3 = (int *)FUN_00048cac(piVar1,"total_hash");
                        if ((piVar3 == (int *)0x0) || (*piVar3 != 4)) {
                          if ((DAT_00072da0 != '\0') ||
                             ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                            snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats"
                                    );
                            FUN_0001dd98(3,acStack_828,0);
                          }
                          uVar5 = 0x162;
                        }
                        else {
                          uVar5 = FUN_000494e8();
                          DAT_00077d00 = (double)CONCAT44(extraout_s1,uVar5);
                          DAT_00072d98 = DAT_00077d00 * 1000.0;
                          piVar3 = (int *)FUN_00048cac(piVar1,"miner_id");
                          if ((piVar3 == (int *)0x0) || (*piVar3 != 2)) {
                            if ((DAT_00072da0 != '\0') ||
                               ((DAT_000686f0 != '\0' || (2 < DAT_00067848)))) {
                              snprintf(acStack_828,0x800,"%s: load json failed",
                                       "cb_bitmain_api_stats");
                              FUN_0001dd98(3,acStack_828,0);
                            }
                            uVar5 = 0x167;
                          }
                          else {
                            pcVar4 = (char *)FUN_000491e0();
                            snprintf(&DAT_00077d08,0x20,"%s",pcVar4);
                            piVar3 = (int *)FUN_00048cac(piVar1,"error_code");
                            if ((piVar3 != (int *)0x0) && (*piVar3 == 3)) {
                              DAT_00077d30 = FUN_0004943c();
                              FUN_000404e4(0x16e);
                              (*DAT_0006796c)();
                              if (piVar1[1] == -1) {
                                return 0;
                              }
                              FUN_00040238(piVar1);
                              return 0;
                            }
                            if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) ||
                               (2 < DAT_00067848)) {
                              snprintf(acStack_828,0x800,"%s: load json failed",
                                       "cb_bitmain_api_stats");
                              FUN_0001dd98(3,acStack_828,0);
                            }
                            uVar5 = 0x16b;
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
LAB_00040b28:
        FUN_000404e4(uVar5);
      }
      (*DAT_0006796c)();
      if (piVar1[1] == -1) {
        return 0xfffffffd;
      }
      FUN_00040238(piVar1);
      return 0xfffffffd;
    }
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(acStack_828,0x800,"%s: load json failed","cb_bitmain_api_stats");
      FUN_0001dd98(3,acStack_828,0);
    }
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076310);
    if (iVar2 != 0) {
      piVar3 = __errno_location();
      snprintf(acStack_828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar3,
               "socketa_api.c","cb_bitmain_api_stats",0xa2);
      FUN_0001dd98(3,acStack_828,1);
      FUN_0003c34c(1);
    }
    (*DAT_0006796c)();
    if (piVar1[1] == -1) {
      return 0xfffffffd;
    }
    piVar3 = piVar1 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3 + -1;
      bVar16 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar16);
    *piVar3 = iVar2;
  }
  if (iVar2 == 0) {
    FUN_000495e4(piVar1);
  }
  return 0xfffffffd;
}

