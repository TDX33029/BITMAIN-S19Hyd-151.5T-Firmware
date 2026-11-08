// FUN_0001eba4 @ 0001eba4  size=5208  callers=1
// program: bmminer


int FUN_0001eba4(void)

{
  bool bVar1;
  undefined2 uVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  size_t sVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_924 [252];
  char local_828 [4];
  undefined4 local_824;
  char acStack_820 [8];
  uint local_818;
  uint local_814;
  undefined4 local_810;
  undefined4 uStack_80c;
  char local_808 [8];
  undefined2 uStack_800;
  undefined1 local_7fe;
  
  piVar3 = (int *)FUN_00054e88("/etc/topol.conf",0,auStack_924);
  if ((piVar3 == (int *)0x0) || (*piVar3 != 0)) {
    if (DAT_00087bbc < 4) {
      return -1;
    }
    snprintf(local_828,0x800,"load topol config file %s failed\n","/etc/topol.conf");
    FUN_00032218(3,local_828,0);
    return -1;
  }
  piVar4 = (int *)FUN_000559d4(piVar3,"machine");
  if ((piVar4 == (int *)0x0) || (*piVar4 != 2)) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_828,"get ",4);
      local_824._0_1_ = 'm';
      local_824._1_1_ = 'a';
      local_824._2_1_ = 'c';
      local_824._3_1_ = 'h';
      builtin_strncpy(acStack_820,"ine fail",8);
      local_818._0_1_ = 'e';
      local_818._1_1_ = 'd';
      local_818._2_1_ = '\n';
      local_818._3_1_ = '\0';
      FUN_00032218(3,local_828,0);
LAB_0001ecf4:
      if (3 < DAT_00087bbc) {
        iVar12 = -1;
        builtin_strncpy(local_828,"pars",4);
        local_824._0_1_ = 'e';
        local_824._1_1_ = ' ';
        local_824._2_1_ = 'm';
        local_824._3_1_ = 'a';
        builtin_strncpy(acStack_820,"chine fa",8);
        local_818._0_1_ = 'i';
        local_818._1_1_ = 'l';
        local_818._2_1_ = 'e';
        local_818._3_1_ = 'd';
        local_814 = CONCAT22(local_814._2_2_,10);
        FUN_00032218(3,local_828,0);
        goto LAB_0001ec38;
      }
    }
  }
  else {
    if (3 < DAT_00087bbc) {
      pcVar5 = (char *)FUN_00055f08();
      snprintf(local_828,0x800,"load machine %s conf\n",pcVar5);
      FUN_00032218(3,local_828,0);
    }
    pcVar5 = (char *)FUN_00055f08(piVar4);
    sVar6 = strlen(pcVar5);
    pcVar7 = calloc(sVar6 + 1,1);
    DAT_0071c3e8 = pcVar7;
    if (pcVar7 == (char *)0x0) {
      if (3 < DAT_00087bbc) {
        builtin_strncpy(local_828,"get ",4);
        local_824._0_1_ = 'm';
        local_824._1_1_ = 'a';
        local_824._2_1_ = 'c';
        local_824._3_1_ = 'h';
        builtin_strncpy(acStack_820,"ine fail",8);
        local_818._0_1_ = 'e';
        local_818._1_1_ = 'd';
        local_818._2_1_ = ',';
        local_818._3_1_ = ' ';
        local_814._0_1_ = 'C';
        local_814._1_1_ = 'a';
        local_814._2_1_ = 'n';
        local_814._3_1_ = 'n';
        local_810._0_1_ = 'o';
        local_810._1_1_ = 't';
        local_810._2_1_ = ' ';
        local_810._3_1_ = 'a';
        uStack_80c._0_1_ = 'l';
        uStack_80c._1_1_ = 'l';
        uStack_80c._2_1_ = 'o';
        uStack_80c._3_1_ = 'c';
        builtin_strncpy(local_808,"ate spac",8);
        uStack_800 = 0xa65;
        local_7fe = 0;
        FUN_00032218(3,local_828,0);
        goto LAB_0001ecf4;
      }
    }
    else {
      strcpy(pcVar7,pcVar5);
      if (3 < DAT_00087bbc) {
        snprintf(local_828,0x800,"machine : %s \n",pcVar7);
        FUN_00032218(3,local_828,0);
      }
      piVar4 = (int *)FUN_000559d4(piVar3,"hw_version");
      if ((piVar4 == (int *)0x0) || (*piVar4 != 2)) {
        if (3 < DAT_00087bbc) {
          pcVar5 = "get hw_version failed\n";
LAB_0001edc8:
          local_828 = *(char (*) [4])pcVar5;
          local_824 = *(undefined4 *)(pcVar5 + 4);
          acStack_820._0_4_ = *(undefined4 *)(pcVar5 + 8);
          acStack_820._4_4_ = *(undefined4 *)(pcVar5 + 0xc);
          local_818 = *(uint *)(pcVar5 + 0x10);
          local_814 = CONCAT22(local_814._2_2_,(short)*(undefined4 *)(pcVar5 + 0x14));
          FUN_00032218(3,local_828,0);
          goto LAB_0001ecf4;
        }
      }
      else {
        if (4 < DAT_00087bbc) {
          pcVar5 = (char *)FUN_00055f08();
          snprintf(local_828,0x800,"hw_version: %s\n",pcVar5);
          FUN_00032218(4,local_828,0);
        }
        piVar4 = (int *)FUN_000559d4(piVar3,"sw_version");
        if ((piVar4 == (int *)0x0) || (*piVar4 != 2)) {
          if (3 < DAT_00087bbc) {
            pcVar5 = "get sw_version failed\n";
            goto LAB_0001edc8;
          }
        }
        else {
          if (4 < DAT_00087bbc) {
            pcVar5 = (char *)FUN_00055f08();
            snprintf(local_828,0x800,"sw_version: %s\n",pcVar5);
            FUN_00032218(4,local_828,0);
          }
          piVar4 = (int *)FUN_000559d4(piVar3,"processor");
          if ((piVar4 == (int *)0x0) || (*piVar4 != 0)) {
            if (3 < DAT_00087bbc) {
              builtin_strncpy(local_828,"get ",4);
              local_824._0_1_ = 'p';
              local_824._1_1_ = 'r';
              local_824._2_1_ = 'o';
              local_824._3_1_ = 'c';
              builtin_strncpy(acStack_820,"essor fa",8);
              local_818._0_1_ = 'i';
              local_818._1_1_ = 'l';
              local_818._2_1_ = 'e';
              local_818._3_1_ = 'd';
              local_814 = CONCAT22(local_814._2_2_,10);
              FUN_00032218(3,local_828,0);
LAB_0001eff4:
              if (3 < DAT_00087bbc) {
                iVar12 = -1;
                builtin_strncpy(local_828,"pars",4);
                local_824._0_1_ = 'e';
                local_824._1_1_ = ' ';
                local_824._2_1_ = 'p';
                local_824._3_1_ = 'r';
                builtin_strncpy(acStack_820,"ocessor ",8);
                local_818._0_1_ = 'f';
                local_818._1_1_ = 'a';
                local_818._2_1_ = 'i';
                local_818._3_1_ = 'l';
                local_814._0_1_ = 'e';
                local_814._1_1_ = 'd';
                local_814._2_1_ = '\n';
                local_814._3_1_ = '\0';
                FUN_00032218(3,local_828,0);
                goto LAB_0001ec38;
              }
            }
          }
          else {
            if (4 < DAT_00087bbc) {
              builtin_strncpy(local_828,"proc",4);
              local_824._0_1_ = 'e';
              local_824._1_1_ = 's';
              local_824._2_1_ = 's';
              local_824._3_1_ = 'o';
              builtin_strncpy(acStack_820,"r:\n",4);
              FUN_00032218(4,local_828,0);
            }
            piVar4 = (int *)FUN_000559d4(piVar4,"type");
            if ((piVar4 == (int *)0x0) || (*piVar4 != 2)) {
              if (3 < DAT_00087bbc) {
                builtin_strncpy(local_828,"get ",4);
                local_824._0_1_ = 't';
                local_824._1_1_ = 'y';
                local_824._2_1_ = 'p';
                local_824._3_1_ = 'e';
                builtin_strncpy(acStack_820," failed\n",8);
                local_818 = local_818 & 0xffffff00;
                FUN_00032218(3,local_828,0);
                goto LAB_0001eff4;
              }
            }
            else {
              if (4 < DAT_00087bbc) {
                pcVar5 = (char *)FUN_00055f08();
                snprintf(local_828,0x800,"type: %s\n",pcVar5);
                FUN_00032218(4,local_828,0);
              }
              piVar4 = (int *)FUN_000559d4(piVar3,"power");
              if ((piVar4 == (int *)0x0) || (*piVar4 != 0)) {
                if (3 < DAT_00087bbc) {
                  builtin_strncpy(local_828,"get ",4);
                  local_824._0_1_ = 'p';
                  local_824._1_1_ = 'o';
                  local_824._2_1_ = 'w';
                  local_824._3_1_ = 'e';
                  builtin_strncpy(acStack_820,"r failed",8);
                  local_818 = CONCAT22(local_818._2_2_,10);
                  FUN_00032218(3,local_828,0);
LAB_0001f168:
                  if (3 < DAT_00087bbc) {
                    iVar12 = -1;
                    builtin_strncpy(local_828,"pars",4);
                    local_824._0_1_ = 'e';
                    local_824._1_1_ = ' ';
                    local_824._2_1_ = 'p';
                    local_824._3_1_ = 'o';
                    builtin_strncpy(acStack_820,"wer fail",8);
                    local_818._0_1_ = 'e';
                    local_818._1_1_ = 'd';
                    local_818._2_1_ = '\n';
                    local_818._3_1_ = '\0';
                    FUN_00032218(3,local_828,0);
                    goto LAB_0001ec38;
                  }
                }
              }
              else {
                if (4 < DAT_00087bbc) {
                  builtin_strncpy(local_828,"powe",4);
                  local_824._0_1_ = 'r';
                  local_824._1_1_ = ':';
                  local_824._2_1_ = '\n';
                  local_824._3_1_ = '\0';
                  FUN_00032218(4,local_828);
                }
                piVar8 = (int *)FUN_000559d4(piVar4,"type");
                if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
                  if (3 < DAT_00087bbc) {
                    pcVar5 = "get type failed\n";
LAB_0001f144:
                    local_828 = *(char (*) [4])pcVar5;
                    local_824 = *(undefined4 *)(pcVar5 + 4);
                    acStack_820._0_4_ = *(undefined4 *)(pcVar5 + 8);
                    acStack_820._4_4_ = *(undefined4 *)(pcVar5 + 0xc);
                    local_818 = CONCAT31(local_818._1_3_,(char)*(undefined4 *)(pcVar5 + 0x10));
                    FUN_00032218(3,local_828,0);
                    goto LAB_0001f168;
                  }
                }
                else {
                  if (4 < DAT_00087bbc) {
                    pcVar5 = (char *)FUN_00055f08();
                    snprintf(local_828,0x800,"type: %s\n",pcVar5);
                    FUN_00032218(4,local_828,0);
                  }
                  piVar8 = (int *)FUN_000559d4(piVar4,"version");
                  if ((piVar8 == (int *)0x0) || (*piVar8 != 1)) {
                    if (3 < DAT_00087bbc) {
                      builtin_strncpy(local_828,"get ",4);
                      local_824._0_1_ = 'v';
                      local_824._1_1_ = 'e';
                      local_824._2_1_ = 'r';
                      local_824._3_1_ = 's';
                      builtin_strncpy(acStack_820,"ion arra",8);
                      local_818._0_1_ = 'y';
                      local_818._1_1_ = ' ';
                      local_818._2_1_ = 'f';
                      local_818._3_1_ = 'a';
                      local_814._0_1_ = 'i';
                      local_814._1_1_ = 'l';
                      local_814._2_1_ = 'e';
                      local_814._3_1_ = 'd';
                      local_810._0_1_ = '\n';
                      local_810._1_1_ = '\0';
                      FUN_00032218(3,local_828,0);
                      goto LAB_0001f168;
                    }
                  }
                  else {
                    sVar6 = FUN_00055d40();
                    DAT_0071c478 = sVar6;
                    DAT_0071c47c = calloc(sVar6,2);
                    if (0 < (int)sVar6) {
                      iVar12 = 0;
                      do {
                        FUN_00055d5c(piVar8,iVar12);
                        uVar2 = FUN_00056164();
                        iVar11 = iVar12 * 2;
                        iVar12 = iVar12 + 1;
                        *(undefined2 *)((int)DAT_0071c47c + iVar11) = uVar2;
                        if (4 < DAT_00087bbc) {
                          snprintf(local_828,0x800,"psu version = 0x%x",
                                   (uint)*(ushort *)((int)DAT_0071c47c + iVar11));
                          FUN_00032218(4,local_828,0);
                        }
                      } while (iVar12 < (int)DAT_0071c478);
                    }
                    piVar8 = (int *)FUN_000559d4(piVar4,"i2c_addr");
                    if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                      if (3 < DAT_00087bbc) {
                        builtin_strncpy(local_828,"get ",4);
                        local_824._0_1_ = 'i';
                        local_824._1_1_ = '2';
                        local_824._2_1_ = 'c';
                        local_824._3_1_ = '_';
                        builtin_strncpy(acStack_820,"addr fai",8);
                        local_818._0_1_ = 'l';
                        local_818._1_1_ = 'e';
                        local_818._2_1_ = 'd';
                        local_818._3_1_ = '\n';
                        local_814 = local_814 & 0xffffff00;
                        FUN_00032218(3,local_828,0);
                        goto LAB_0001f168;
                      }
                    }
                    else {
                      if (4 < DAT_00087bbc) {
                        iVar12 = FUN_00056164();
                        snprintf(local_828,0x800,"i2c_addr: %d\n",iVar12);
                        FUN_00032218(4,local_828,0);
                      }
                      piVar4 = (int *)FUN_000559d4(piVar4,&DAT_00069c70);
                      if ((piVar4 == (int *)0x0) || (*piVar4 != 3)) {
                        if (3 < DAT_00087bbc) {
                          pcVar5 = "get gpio failed\n";
                          goto LAB_0001f144;
                        }
                      }
                      else {
                        if (4 < DAT_00087bbc) {
                          iVar12 = FUN_00056164();
                          snprintf(local_828,0x800,"gpio: %d\n",iVar12);
                          FUN_00032218(4,local_828,0);
                        }
                        piVar4 = (int *)FUN_000559d4(piVar3,&DAT_00069cac);
                        if ((piVar4 == (int *)0x0) || (*piVar4 != 1)) {
                          if (3 < DAT_00087bbc) {
                            builtin_strncpy(local_828,"get ",4);
                            local_824._0_1_ = 'f';
                            local_824._1_1_ = 'a';
                            local_824._2_1_ = 'n';
                            local_824._3_1_ = ' ';
                            builtin_strncpy(acStack_820,"failed\n",8);
                            FUN_00032218(3,local_828,0);
LAB_0001f4a4:
                            if (3 < DAT_00087bbc) {
                              iVar12 = -1;
                              builtin_strncpy(local_828,"pars",4);
                              local_824._0_1_ = 'e';
                              local_824._1_1_ = ' ';
                              local_824._2_1_ = 'f';
                              local_824._3_1_ = 'a';
                              builtin_strncpy(acStack_820,"n failed",8);
                              local_818 = CONCAT22(local_818._2_2_,10);
                              FUN_00032218(3,local_828,0);
                              goto LAB_0001ec38;
                            }
                          }
                        }
                        else {
                          if (4 < DAT_00087bbc) {
                            builtin_strncpy(local_828,"fan:",4);
                            local_824._0_1_ = '\n';
                            local_824._1_1_ = '\0';
                            FUN_00032218(4,local_828,0);
                          }
                          pcVar7 = (char *)0x0;
                          pcVar5 = (char *)0x0;
                          for (uVar13 = 0; uVar9 = FUN_00055d40(piVar4), uVar13 < uVar9;
                              uVar13 = uVar13 + 1) {
                            piVar8 = (int *)FUN_00055d5c(piVar4,uVar13);
                            if ((piVar8 == (int *)0x0) || (*piVar8 != 0)) {
                              if (DAT_00087bbc < 4) goto LAB_0001ec34;
                              pcVar5 = "get array %d failed\n";
LAB_0001f6d4:
                              snprintf(local_828,0x800,pcVar5,uVar13);
                              FUN_00032218(3,local_828,0);
                              goto LAB_0001f4a4;
                            }
                            piVar10 = (int *)FUN_000559d4(piVar8,&DAT_00069cc8);
                            if ((piVar10 == (int *)0x0) || (*piVar10 != 3)) {
                              if (3 < DAT_00087bbc) {
                                pcVar5 = "get arrya %d id failed\n";
                                goto LAB_0001f6d4;
                              }
                              goto LAB_0001ec34;
                            }
                            if (4 < DAT_00087bbc) {
                              iVar12 = FUN_00056164();
                              snprintf(local_828,0x800,"id: %d\n",iVar12);
                              FUN_00032218(4,local_828,0);
                            }
                            piVar10 = (int *)FUN_000559d4(piVar8,"position");
                            if ((piVar10 == (int *)0x0) || (*piVar10 != 2)) {
                              if (3 < DAT_00087bbc) {
                                pcVar5 = "get arrya %d position failed\n";
                                goto LAB_0001f6d4;
                              }
                              goto LAB_0001ec34;
                            }
                            if (4 < DAT_00087bbc) {
                              pcVar5 = (char *)FUN_00055f08();
                              snprintf(local_828,0x800,"position: %s\n",pcVar5);
                              FUN_00032218(4,local_828,0);
                            }
                            pcVar5 = (char *)FUN_00055f08(piVar10);
                            piVar8 = (int *)FUN_000559d4(piVar8,"direction");
                            if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
                              if (3 < DAT_00087bbc) {
                                pcVar5 = "get arrya%d direction failed\n";
                                goto LAB_0001f6d4;
                              }
                              goto LAB_0001ec34;
                            }
                            if (4 < DAT_00087bbc) {
                              pcVar7 = (char *)FUN_00055f08();
                              snprintf(local_828,0x800,"direction: %s\n",pcVar7);
                              FUN_00032218(4,local_828,0);
                            }
                            pcVar7 = (char *)FUN_00055f08(piVar8);
                            DAT_0071c434 = DAT_0071c434 + 1;
                          }
                          iVar12 = strncmp(pcVar5,"right",5);
                          if (iVar12 == 0) {
                            iVar12 = strncmp(pcVar7,"in",2);
                            if (iVar12 == 0) {
LAB_0001fb24:
                              DAT_0071c430 = 0;
                            }
                            else {
                              iVar12 = strncmp(pcVar5,"left",4);
                              if (iVar12 == 0) goto LAB_0001f88c;
                              iVar12 = strncmp(pcVar7,"out",2);
joined_r0x0001f8c0:
                              if (iVar12 != 0) {
                                iVar12 = strncmp(pcVar5,"up",2);
                                if (iVar12 != 0) goto LAB_0001f7f8;
LAB_0001fb84:
                                iVar12 = strncmp(pcVar5,"down",4);
                                if (iVar12 == 0) {
                                  iVar12 = strncmp(pcVar7,"out",3);
                                  if (iVar12 == 0) goto LAB_0001fbbc;
                                }
                                else {
                                  iVar12 = strncmp(pcVar7,"out",3);
joined_r0x0001f848:
                                  if (iVar12 == 0) {
                                    DAT_0071c430 = 3;
                                    goto LAB_0001f8cc;
                                  }
                                }
LAB_0001f84c:
                                if (3 < DAT_00087bbc) {
                                  snprintf(local_828,0x800,
                                           "unkonwn wind position %s, direction %s\n",pcVar5,pcVar7)
                                  ;
                                  FUN_00032218(3,local_828,0);
                                  goto LAB_0001f4a4;
                                }
                                goto LAB_0001ec34;
                              }
                              DAT_0071c430 = 1;
                            }
                          }
                          else {
                            iVar12 = strncmp(pcVar5,"left",4);
                            if (iVar12 == 0) {
LAB_0001f88c:
                              iVar12 = strncmp(pcVar7,"out",2);
                              if (iVar12 == 0) goto LAB_0001fb24;
                              iVar12 = strncmp(pcVar7,"in",2);
                              goto joined_r0x0001f8c0;
                            }
                            iVar12 = strncmp(pcVar5,"up",2);
                            if (iVar12 == 0) {
                              iVar12 = strncmp(pcVar7,"in",2);
                              if (iVar12 != 0) goto LAB_0001fb84;
                            }
                            else {
LAB_0001f7f8:
                              iVar12 = strncmp(pcVar5,"down",4);
                              if (iVar12 != 0) goto LAB_0001f84c;
                              iVar12 = strncmp(pcVar7,"out",3);
                              if (iVar12 != 0) {
                                iVar12 = strncmp(pcVar7,"in",2);
                                goto joined_r0x0001f848;
                              }
                            }
LAB_0001fbbc:
                            DAT_0071c430 = 2;
                          }
LAB_0001f8cc:
                          piVar4 = (int *)FUN_000559d4(piVar3,&DAT_00069974);
                          if ((piVar4 == (int *)0x0) || (*piVar4 != 0)) {
                            if (3 < DAT_00087bbc) {
                              builtin_strncpy(local_828,"get ",4);
                              local_824._0_1_ = 'a';
                              local_824._1_1_ = 's';
                              local_824._2_1_ = 'i';
                              local_824._3_1_ = 'c';
                              builtin_strncpy(acStack_820," failed\n",8);
                              local_818 = local_818 & 0xffffff00;
                              FUN_00032218(3,local_828,0);
LAB_0001f960:
                              if (3 < DAT_00087bbc) {
                                iVar12 = -1;
                                builtin_strncpy(local_828,"pars",4);
                                local_824._0_1_ = 'e';
                                local_824._1_1_ = ' ';
                                local_824._2_1_ = 'a';
                                local_824._3_1_ = 's';
                                builtin_strncpy(acStack_820,"ic faile",8);
                                local_818 = CONCAT13(local_818._3_1_,0xa64);
                                FUN_00032218(3,local_828,0);
                                goto LAB_0001ec38;
                              }
                            }
                          }
                          else {
                            if (4 < DAT_00087bbc) {
                              builtin_strncpy(local_828,"asic",4);
                              local_824._0_1_ = ':';
                              local_824._1_1_ = '\n';
                              local_824._2_1_ = '\0';
                              FUN_00032218(4,local_828);
                            }
                            piVar8 = (int *)FUN_000559d4(piVar4,"asic_id");
                            if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
                              if (3 < DAT_00087bbc) {
                                builtin_strncpy(local_828,"get ",4);
                                local_824._0_1_ = 'a';
                                local_824._1_1_ = 's';
                                local_824._2_1_ = 'i';
                                local_824._3_1_ = 'c';
                                builtin_strncpy(acStack_820,"_id fail",8);
                                local_818._0_1_ = 'e';
                                local_818._1_1_ = 'd';
                                local_818._2_1_ = '\n';
                                local_818._3_1_ = '\0';
                                FUN_00032218(3,local_828,0);
                                goto LAB_0001f960;
                              }
                            }
                            else {
                              if (4 < DAT_00087bbc) {
                                pcVar5 = (char *)FUN_00055f08();
                                snprintf(local_828,0x800,"asic_id: %s\n",pcVar5);
                                FUN_00032218(4,local_828,0);
                              }
                              piVar8 = (int *)FUN_000559d4(piVar4,"asic_addr");
                              if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
                                if (3 < DAT_00087bbc) {
                                  builtin_strncpy(local_828,"get ",4);
                                  local_824._0_1_ = 'a';
                                  local_824._1_1_ = 's';
                                  local_824._2_1_ = 'i';
                                  local_824._3_1_ = 'c';
                                  builtin_strncpy(acStack_820,"_addr fa",8);
                                  local_818._0_1_ = 'i';
                                  local_818._1_1_ = 'l';
                                  local_818._2_1_ = 'e';
                                  local_818._3_1_ = 'd';
                                  local_814 = CONCAT22(local_814._2_2_,10);
                                  FUN_00032218(3,local_828,0);
                                  goto LAB_0001f960;
                                }
                              }
                              else {
                                if (4 < DAT_00087bbc) {
                                  pcVar5 = (char *)FUN_00055f08();
                                  snprintf(local_828,0x800,"asic_addr : %s\n",pcVar5);
                                  FUN_00032218(4,local_828,0);
                                }
                                pcVar5 = (char *)FUN_00055f08(piVar8);
                                DAT_0071c408 = strtol(pcVar5,(char **)0x0,0);
                                if (DAT_0071c408 == 0) {
                                  if (3 < DAT_00087bbc) {
                                    pcVar5 = "convert asic_addr failed\n";
LAB_0001faf8:
                                    local_828 = *(char (*) [4])pcVar5;
                                    local_824 = *(undefined4 *)(pcVar5 + 4);
                                    acStack_820._0_4_ = *(undefined4 *)(pcVar5 + 8);
                                    acStack_820._4_4_ = *(undefined4 *)(pcVar5 + 0xc);
                                    local_818 = *(uint *)(pcVar5 + 0x10);
                                    local_814 = *(uint *)(pcVar5 + 0x14);
                                    local_810._0_1_ = (char)*(undefined4 *)(pcVar5 + 0x18);
                                    local_810._1_1_ =
                                         (char)((uint)*(undefined4 *)(pcVar5 + 0x18) >> 8);
                                    FUN_00032218(3,local_828,0);
                                    goto LAB_0001f960;
                                  }
                                }
                                else {
                                  if (4 < DAT_00087bbc) {
                                    snprintf(local_828,0x800,"asic_addr 0x%x\n",DAT_0071c408);
                                    FUN_00032218(4,local_828,0);
                                  }
                                  piVar8 = (int *)FUN_000559d4(piVar4,"asic_core_num");
                                  if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                                    if (3 < DAT_00087bbc) {
                                      pcVar5 = "get asic_core_num failed\n";
                                      goto LAB_0001faf8;
                                    }
                                  }
                                  else {
                                    if (4 < DAT_00087bbc) {
                                      iVar12 = FUN_00056164();
                                      snprintf(local_828,0x800,"asic_core_num: %d\n",iVar12);
                                      FUN_00032218(4,local_828,0);
                                    }
                                    DAT_0071c40c = FUN_00056164(piVar8);
                                    piVar8 = (int *)FUN_000559d4(piVar4,"asic_small_core_num");
                                    if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                                      if (3 < DAT_00087bbc) {
                                        pcVar5 = "get asic_small_core_num failed\n";
LAB_0001fd14:
                                        local_828 = *(char (*) [4])pcVar5;
                                        local_824 = *(undefined4 *)(pcVar5 + 4);
                                        acStack_820._0_4_ = *(undefined4 *)(pcVar5 + 8);
                                        acStack_820._4_4_ = *(undefined4 *)(pcVar5 + 0xc);
                                        local_818 = *(uint *)(pcVar5 + 0x10);
                                        local_814 = *(uint *)(pcVar5 + 0x14);
                                        local_810 = *(undefined4 *)(pcVar5 + 0x18);
                                        uStack_80c = *(undefined4 *)(pcVar5 + 0x1c);
                                        FUN_00032218(3,local_828,0);
                                        goto LAB_0001f960;
                                      }
                                    }
                                    else {
                                      if (4 < DAT_00087bbc) {
                                        iVar12 = FUN_00056164();
                                        snprintf(local_828,0x800,"asic_small_core_num: %d\n",iVar12)
                                        ;
                                        FUN_00032218(4,local_828,0);
                                      }
                                      DAT_0071c410 = FUN_00056164(piVar8);
                                      piVar8 = (int *)FUN_000559d4(piVar4,"core_small_core_num");
                                      if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                                        if (3 < DAT_00087bbc) {
                                          pcVar5 = "get core_small_core_num failed\n";
                                          goto LAB_0001fd14;
                                        }
                                      }
                                      else {
                                        if (4 < DAT_00087bbc) {
                                          iVar12 = FUN_00056164();
                                          snprintf(local_828,0x800,"core_small_core_num: %d\n",
                                                   iVar12);
                                          FUN_00032218(4,local_828,0);
                                        }
                                        DAT_0071c414 = FUN_00056164(piVar8);
                                        piVar8 = (int *)FUN_000559d4(piVar4,"asic_domain_num");
                                        if ((piVar8 == (int *)0x0) || (*piVar8 != 3)) {
                                          if (3 < DAT_00087bbc) {
                                            builtin_strncpy(local_828,"get ",4);
                                            local_824._0_1_ = 'a';
                                            local_824._1_1_ = 's';
                                            local_824._2_1_ = 'i';
                                            local_824._3_1_ = 'c';
                                            builtin_strncpy(acStack_820,"_domain_",8);
                                            local_818._0_1_ = 'n';
                                            local_818._1_1_ = 'u';
                                            local_818._2_1_ = 'm';
                                            local_818._3_1_ = ' ';
                                            local_814._0_1_ = 'f';
                                            local_814._1_1_ = 'a';
                                            local_814._2_1_ = 'i';
                                            local_814._3_1_ = 'l';
                                            local_810._0_1_ = 'e';
                                            local_810._1_1_ = 'd';
                                            local_810._2_1_ = '\n';
                                            local_810._3_1_ = '\0';
                                            FUN_00032218(3,local_828,0);
                                            goto LAB_0001f960;
                                          }
                                        }
                                        else {
                                          if (4 < DAT_00087bbc) {
                                            iVar12 = FUN_00056164();
                                            snprintf(local_828,0x800,"asic_domain_num : %d\n",iVar12
                                                    );
                                            FUN_00032218(4,local_828,0);
                                          }
                                          DAT_0071c418 = FUN_00056164(piVar8);
                                          piVar4 = (int *)FUN_000559d4(piVar4,"asic_addr_interval");
                                          if ((piVar4 != (int *)0x0) && (*piVar4 == 3)) {
                                            if (4 < DAT_00087bbc) {
                                              iVar12 = FUN_00056164();
                                              snprintf(local_828,0x800,"asic_addr_interval : %d\n",
                                                       iVar12);
                                              FUN_00032218(4,local_828,0);
                                            }
                                            DAT_0071c41c = FUN_00056164(piVar4);
                                            iVar12 = FUN_00012650(piVar3);
                                            if (iVar12 == 0) {
                                              iVar12 = FUN_0001ea90();
                                              if ((iVar12 != 0) && (3 < DAT_00087bbc)) {
                                                builtin_strncpy(local_828,"init",4);
                                                local_824._0_1_ = ' ';
                                                local_824._1_1_ = 't';
                                                local_824._2_1_ = 'o';
                                                local_824._3_1_ = 'p';
                                                builtin_strncpy(acStack_820,"ol runti",8);
                                                local_818._0_1_ = 'm';
                                                local_818._1_1_ = 'e';
                                                local_818._2_1_ = ' ';
                                                local_818._3_1_ = 'f';
                                                local_814._0_1_ = 'a';
                                                local_814._1_1_ = 'i';
                                                local_814._2_1_ = 'l';
                                                local_814._3_1_ = 'e';
                                                local_810._0_1_ = 'd';
                                                local_810._1_1_ = '\n';
                                                local_810._2_1_ = '\0';
                                                FUN_00032218(3,local_828,0);
                                              }
                                            }
                                            else if (3 < DAT_00087bbc) {
                                              builtin_strncpy(local_828,"pars",4);
                                              local_824._0_1_ = 'e';
                                              local_824._1_1_ = ' ';
                                              local_824._2_1_ = 'c';
                                              local_824._3_1_ = 'h';
                                              builtin_strncpy(acStack_820,"ain fail",8);
                                              local_818._0_1_ = 'e';
                                              local_818._1_1_ = 'd';
                                              local_818._2_1_ = '\n';
                                              local_818._3_1_ = '\0';
                                              FUN_00032218(3,local_828,0);
                                            }
                                            goto LAB_0001ec38;
                                          }
                                          if (3 < DAT_00087bbc) {
                                            builtin_strncpy(local_828,"get ",4);
                                            local_824._0_1_ = 'a';
                                            local_824._1_1_ = 's';
                                            local_824._2_1_ = 'i';
                                            local_824._3_1_ = 'c';
                                            builtin_strncpy(acStack_820,"_addr_in",8);
                                            local_818._0_1_ = 't';
                                            local_818._1_1_ = 'e';
                                            local_818._2_1_ = 'r';
                                            local_818._3_1_ = 'v';
                                            local_814._0_1_ = 'a';
                                            local_814._1_1_ = 'l';
                                            local_814._2_1_ = ' ';
                                            local_814._3_1_ = 'f';
                                            local_810._0_1_ = 'a';
                                            local_810._1_1_ = 'i';
                                            local_810._2_1_ = 'l';
                                            local_810._3_1_ = 'e';
                                            uStack_80c._0_1_ = 'd';
                                            uStack_80c._1_1_ = '\n';
                                            uStack_80c._2_1_ = '\0';
                                            FUN_00032218(3,local_828,0);
                                            goto LAB_0001f960;
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
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0001ec34:
  iVar12 = -1;
LAB_0001ec38:
  if (piVar3[1] != -1) {
    piVar4 = piVar3 + 1;
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar11 + -1;
    if (iVar11 + -1 == 0) {
      FUN_0005630c(piVar3);
    }
  }
  return iVar12;
}

