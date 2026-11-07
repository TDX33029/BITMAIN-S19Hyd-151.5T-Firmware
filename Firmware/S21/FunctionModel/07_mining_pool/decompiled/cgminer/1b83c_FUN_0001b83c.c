// FUN_0001b83c @ 0001b83c  size=4792  callers=1
// program: cgminer


void FUN_0001b83c(void)

{
  byte bVar1;
  bool bVar2;
  addrinfo *paVar3;
  int iVar4;
  time_t tVar5;
  time_t tVar6;
  int iVar7;
  ssize_t sVar8;
  int *piVar9;
  int *piVar10;
  void *pvVar11;
  char *pcVar12;
  size_t sVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  int *unaff_r5;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  undefined4 uVar21;
  time_t *unaff_r10;
  char *unaff_r11;
  uint local_ad74;
  uint local_ad70;
  char *local_ad6c;
  uint local_ad68;
  undefined2 *local_ad64;
  int local_ad40;
  int local_ad3c [5];
  addrinfo *local_ad28;
  undefined4 local_ad24;
  undefined4 local_ad20;
  uint local_ad1c;
  char acStack_ad18 [12];
  char local_ad0c [16];
  undefined4 local_acfc;
  undefined4 local_acf8;
  undefined4 local_acf4;
  undefined4 local_acf0;
  undefined4 auStack_acec [4];
  undefined4 local_acdc;
  addrinfo local_acd8;
  sockaddr asStack_acb8 [8];
  undefined1 auStack_ac38 [252];
  undefined1 auStack_ab3c [252];
  char acStack_aa40 [256];
  __pthread_unwind_buf_t a_Stack_a940 [6];
  char acStack_a828 [2048];
  char acStack_a028 [2048];
  char local_9828 [2048];
  char acStack_9028 [2048];
  char acStack_8828 [2048];
  char acStack_8028 [2048];
  char acStack_7828 [2048];
  char acStack_7028 [2048];
  char acStack_6828 [2048];
  char acStack_6028 [2048];
  char acStack_5828 [2048];
  char acStack_5028 [2048];
  char acStack_4828 [2048];
  char acStack_4028 [2048];
  char acStack_3828 [2047];
  char acStack_3029 [4097];
  char local_2028 [8196];
  
  local_ad40 = -1;
  local_ad3c[0] = -1;
  local_ad74 = 2;
  memset(local_2028,0,0x2000);
  memset(acStack_3029 + 1,0,0x1000);
  local_ad0c[4] = '\0';
  local_ad0c[5] = '\0';
  local_ad0c[6] = '\0';
  local_ad0c[7] = '\0';
  local_ad0c[0] = '\0';
  local_ad0c[1] = '\0';
  local_ad0c[2] = '\0';
  local_ad0c[3] = '\0';
  local_ad0c[8] = '\0';
  local_ad0c[9] = '\0';
  local_ad0c[10] = '\0';
  local_ad0c[0xb] = '\0';
  local_ad0c[0xc] = '\0';
  local_ad0c[0xd] = '\0';
  local_ad0c[0xe] = '\0';
  local_ad0c[0xf] = '\0';
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
    snprintf(acStack_a828,0x800,"Start %s function\n","api");
    FUN_0001dd98(5,acStack_a828,0);
  }
  paVar3 = (addrinfo *)__sigsetjmp(a_Stack_a940,0);
  if (paVar3 != (addrinfo *)0x0) {
    FUN_00018360(&local_ad40);
    __pthread_unwind_next(a_Stack_a940);
    goto LAB_0001ca50;
  }
  __pthread_register_cancel(a_Stack_a940);
  sprintf(acStack_ad18,"%d",0xfbc);
  local_acd8.ai_flags = 1;
  local_acd8.ai_family = (int)paVar3;
  local_acd8.ai_socktype = (int)paVar3;
  local_acd8.ai_protocol = (int)paVar3;
  local_acd8.ai_addrlen = (socklen_t)paVar3;
  local_acd8.ai_addr = (sockaddr *)paVar3;
  local_acd8.ai_canonname = (char *)paVar3;
  local_acd8.ai_next = paVar3;
  iVar4 = getaddrinfo("0.0.0.0",acStack_ad18,&local_acd8,&local_ad28);
  if (iVar4 == 0) {
    paVar3 = local_ad28;
    if (local_ad28 == (addrinfo *)0x0) {
      iVar4 = 0;
    }
    else {
      do {
        iVar4 = socket(local_ad28->ai_family,1,0);
        if (0 < iVar4) {
          goto LAB_0001b9d0;
        }
        paVar3 = paVar3->ai_next;
      } while (paVar3 != (addrinfo *)0x0);
      if (iVar4 == -1) {
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
          snprintf(acStack_5828,0x800,"%s: exec socket() failed\n","api_init_socket");
          FUN_0001dd98(3,acStack_5828,0);
          goto LAB_0001c0e8;
        }
        goto LAB_0001bfd8;
      }
    }
LAB_0001b9d0:
    local_ad24 = 1;
    setsockopt(iVar4,1,2,&local_ad24,4);
    tVar5 = time((time_t *)0x0);
    while (iVar7 = bind(iVar4,paVar3->ai_addr,paVar3->ai_addrlen), iVar7 < 0) {
      piVar9 = __errno_location();
      pcVar16 = strerror(*piVar9);
      tVar6 = time((time_t *)0x0);
      if (0x3d < tVar6 - tVar5) {
        freeaddrinfo(local_ad28);
        if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3))
        goto LAB_0001bfd8;
        snprintf(acStack_4828,0x800,"api bind to port %d, failed (%s)",0xfbc,pcVar16);
        FUN_0001dd98(3,acStack_4828,0);
        goto LAB_0001c0e8;
      }
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
        snprintf(acStack_5028,0x800,"%s: api bind to port %d failed, trying again in 30sec",
                 "api_init_socket",0xfbc);
        FUN_0001dd98(4,acStack_5028,0);
      }
      sleep(0x1e);
    }
    freeaddrinfo(local_ad28);
    iVar7 = listen(iVar4,100);
    if (iVar7 < 0) {
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
        piVar9 = __errno_location();
        pcVar16 = strerror(*piVar9);
        snprintf(acStack_4028,0x800,"%s: exec listen() failed (%s)","api_init_socket",pcVar16);
        FUN_0001dd98(3,acStack_4028,0);
      }
      close(iVar4);
    }
    else if (iVar4 != -0x7ffffffa) {
      local_ad6c = "get_version_old";
      unaff_r11 = "api";
      unaff_r10 = &DAT_000685b0;
      local_ad64 = &DAT_0004bcb8;
      local_ad70 = 0;
      local_ad40 = iVar4;
      do {
        bVar1 = *(byte *)(unaff_r10 + 5);
        if (bVar1 != 0) {
LAB_0001c6d4:
          __pthread_unregister_cancel(a_Stack_a940);
          FUN_00018360(&local_ad40);
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
            snprintf(acStack_6828,0x800,"End %s function !!!","api");
            FUN_0001dd98(5,acStack_6828,0);
          }
          close(local_ad40);
          return;
        }
        local_ad3c[1] = 0x80;
        local_ad3c[0] = accept(local_ad40,asStack_acb8,(socklen_t *)(local_ad3c + 1));
        if (local_ad3c[0] < 0) {
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
            piVar9 = __errno_location();
            pcVar16 = strerror(*piVar9);
            snprintf(acStack_9028,0x800,"%s: exec accept failed (%s)","api",pcVar16);
            FUN_0001dd98(3,acStack_9028,0);
          }
          goto LAB_0001c6d4;
        }
        local_ad3c[4] = 2;
        local_ad3c[2] = 1;
        local_ad3c[3] = 5;
        setsockopt(local_ad3c[0],1,9,local_ad3c + 2,4);
        setsockopt(local_ad3c[0],6,1,local_ad3c + 2,4);
        setsockopt(local_ad3c[0],6,6,local_ad3c + 2,4);
        setsockopt(local_ad3c[0],6,4,local_ad3c + 3,4);
        setsockopt(local_ad3c[0],6,5,local_ad3c + 4,4);
        local_ad20 = 10;
        local_ad1c = (uint)bVar1;
        iVar4 = setsockopt(local_ad3c[0],1,0x15,&local_ad20,8);
        if (iVar4 != 0) {
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
            snprintf(acStack_8828,0x800,"%s:setsocket SO_SNDTIMEO failed\n",unaff_r11);
            FUN_0001dd98(3,acStack_8828,0);
          }
          close(local_ad3c[0]);
        }
        iVar4 = setsockopt(local_ad3c[0],1,0x14,&local_ad20,8);
        if (iVar4 != 0) {
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
            snprintf(acStack_8028,0x800,"%s:setsocket SO_RCVTIMEO failed\n",unaff_r11);
            FUN_0001dd98(3,acStack_8028,0);
          }
          close(local_ad3c[0]);
        }
        sVar8 = recv(local_ad3c[0],local_2028,0xfff,0);
        if (sVar8 < 1) {
          local_2028[0] = '\0';
        }
        else {
          unaff_r10[1] = 0;
          unaff_r10[2] = 0;
          unaff_r10[3] = 0;
          unaff_r10[4] = 0;
          local_2028[sVar8] = '\0';
          local_ad0c[0] = '\0';
          local_ad0c[1] = '\0';
          local_ad0c[2] = '\0';
          local_ad0c[3] = '\0';
          local_ad0c[4] = '\0';
          local_ad0c[5] = '\0';
          local_ad0c[6] = '\0';
          local_ad0c[7] = '\0';
          local_ad0c[8] = '\0';
          local_ad0c[9] = '\0';
          local_ad0c[10] = '\0';
          local_ad0c[0xb] = '\0';
          local_ad0c[0xc] = '\0';
          local_ad0c[0xd] = '\0';
          local_ad0c[0xe] = '\0';
          local_ad0c[0xf] = '\0';
          tVar5 = time((time_t *)0x0);
          *unaff_r10 = tVar5;
          getnameinfo(asStack_acb8,0x80,(char *)(unaff_r10 + 1),0x10,(char *)0x0,0,1);
          if ((DAT_000686f1 != '\0') &&
             (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
            snprintf(acStack_7828,0x800,"connect_addr: %s",(char *)(unaff_r10 + 1));
            FUN_0001dd98(7,acStack_7828,0);
          }
          local_acf8 = 0;
          local_acfc = 0;
          local_acf4 = 0;
          local_acf0 = 0;
          piVar9 = (int *)FUN_00047e04(local_2028,0,auStack_ac38);
          if ((piVar9 != (int *)0x0) && (*piVar9 == 0)) {
            piVar10 = (int *)FUN_00048cac(piVar9,"command");
            if ((piVar10 != (int *)0x0) && (*piVar10 == 1)) {
              piVar14 = (int *)FUN_00048cac(piVar9,"new_api");
              iVar4 = 1;
              if ((piVar14 != (int *)0x0) && (iVar4 = 0, *piVar14 != 5)) {
                iVar4 = 1;
              }
              local_ad68 = local_ad70;
              iVar7 = FUN_00048c28();
              for (uVar18 = local_ad70;
                  (uVar20 = FUN_00049018(piVar10), uVar18 < uVar20 &&
                  (piVar14 = (int *)FUN_00049034(piVar10,uVar18),
                  piVar14 != (int *)0x0 && uVar18 != 0xb)); uVar18 = uVar18 + 1) {
                if (*piVar14 == 2) {
                  local_acfc = 0;
                  local_acf8 = 0;
                  local_acf4 = 0;
                  local_acf0 = 0;
                  pcVar16 = (char *)FUN_000491e0();
                  snprintf((char *)&local_acfc,0x10,"%s",pcVar16);
                  iVar15 = strcmp((char *)&local_acfc,"reload");
                  if (iVar15 == 0 && iVar4 == 0) {
                    local_ad68 = 1;
                  }
                  else {
                    uVar21 = FUN_00048c28();
                    FUN_000183a4(uVar21,&local_acfc,iVar4);
                    FUN_00049a4c(iVar7,&local_acfc,uVar21);
                  }
                }
              }
              pvVar11 = (void *)FUN_00045c20(iVar7,0x6000);
              if (pvVar11 != (void *)0x0) {
                FUN_00018a04(local_ad3c,pvVar11);
              }
              free(pvVar11);
              if (local_ad68 == 1) {
                FUN_000183a4(iVar7,"reload",0);
              }
              if ((iVar7 != 0) && (*(int *)(iVar7 + 4) != -1)) {
                piVar10 = (int *)(iVar7 + 4);
                DataMemoryBarrier(0xb);
                do {
                  iVar4 = *piVar10;
                  bVar2 = (bool)hasExclusiveAccess(piVar10);
                } while (!bVar2);
                *piVar10 = iVar4 + -1;
                if (iVar4 + -1 == 0) {
                  FUN_000495e4(iVar7);
                }
              }
              if (piVar9[1] != -1) {
                piVar10 = piVar9 + 1;
                DataMemoryBarrier(0xb);
                do {
                  iVar4 = *piVar10;
                  bVar2 = (bool)hasExclusiveAccess(piVar10);
                } while (!bVar2);
                *piVar10 = iVar4 + -1;
                if (iVar4 + -1 == 0) {
                  FUN_000495e4(piVar9);
                }
              }
              goto LAB_0001bb20;
            }
            if (piVar9[1] != -1) {
              piVar10 = piVar9 + 1;
              DataMemoryBarrier(0xb);
              do {
                iVar4 = *piVar10;
                bVar2 = (bool)hasExclusiveAccess(piVar10);
              } while (!bVar2);
              *piVar10 = iVar4 + -1;
              if (iVar4 + -1 == 0) {
                FUN_000495e4(piVar9);
              }
            }
          }
          paVar3 = (addrinfo *)FUN_00048c28();
          unaff_r5 = (int *)FUN_00047e04(local_2028,0,auStack_ab3c);
          if ((unaff_r5 == (int *)0x0) || (*unaff_r5 != 0)) {
            local_ad74 = 2;
            snprintf(local_ad0c,0x10,"%s",local_2028);
LAB_0001bf14:
            FUN_000183a4(paVar3,local_ad0c,local_ad74);
          }
          else {
            piVar9 = (int *)FUN_00048cac(unaff_r5,"command");
            if ((piVar9 != (int *)0x0) && (*piVar9 == 2)) {
              pcVar16 = (char *)FUN_000491e0();
              snprintf(local_ad0c,0x10,"%s",pcVar16);
              piVar9 = (int *)FUN_00048cac(unaff_r5,"new_api");
              if (piVar9 == (int *)0x0) {
LAB_0001ca50:
                iVar4 = unaff_r5[1];
LAB_0001c9ec:
                if (iVar4 == -1) {
                  local_ad74 = 1;
                  goto LAB_0001bf14;
                }
                local_ad74 = 1;
              }
              else {
                iVar4 = unaff_r5[1];
                if (*piVar9 != 5) goto LAB_0001c9ec;
                if (iVar4 == -1) {
                  local_ad74 = local_ad70;
                  goto LAB_0001bf14;
                }
                local_ad74 = local_ad70;
              }
              piVar9 = unaff_r5 + 1;
              DataMemoryBarrier(0xb);
              do {
                iVar4 = *piVar9;
                bVar2 = (bool)hasExclusiveAccess(piVar9);
              } while (!bVar2);
              *piVar9 = iVar4 + -1;
              if (iVar4 + -1 == 0) {
                FUN_000495e4(unaff_r5);
              }
              goto LAB_0001bf14;
            }
            if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
              if (unaff_r5[1] != -1) goto LAB_0001c3c8;
LAB_0001c640:
              if (2 < DAT_00067848) goto LAB_0001c41c;
            }
            else {
              snprintf(acStack_3828,0x800,"%s error: format error about command\n",local_ad6c + 0xe4
                      );
              FUN_0001dd98(3,acStack_3828,0);
              if (unaff_r5[1] != -1) {
LAB_0001c3c8:
                piVar9 = unaff_r5 + 1;
                DataMemoryBarrier(0xb);
                do {
                  iVar4 = *piVar9;
                  bVar2 = (bool)hasExclusiveAccess(piVar9);
                } while (!bVar2);
                *piVar9 = iVar4 + -1;
                if (iVar4 + -1 == 0) {
                  FUN_000495e4(unaff_r5);
                }
              }
              if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0001c640;
LAB_0001c41c:
              snprintf(acStack_7028,0x800,"%s: input invaild param format",unaff_r11);
              FUN_0001dd98(3,acStack_7028,0);
            }
            FUN_00016a60(paVar3,0,0x18,"Missing JSON \'command\'");
          }
          if (local_ad74 == 2) {
            pcVar16 = acStack_3029 + 1;
            memset(pcVar16,0,0x1000);
            if (((paVar3 != (addrinfo *)0x0) &&
                (piVar9 = (int *)FUN_00048cac(paVar3,"STATUS"), piVar9 != (int *)0x0)) &&
               ((*piVar9 == 1 &&
                ((piVar9 = (int *)FUN_00049034(piVar9,0), piVar9 != (int *)0x0 && (*piVar9 == 0)))))
               ) {
              FUN_00048f14();
              pcVar12 = (char *)FUN_00048f94();
              if (pcVar12 != (char *)0x0) {
                do {
                  FUN_00048fac(pcVar12);
                  iVar4 = FUN_00048fa0();
                  if (iVar4 == 0) break;
                  sVar13 = strlen(pcVar16);
                  pcVar17 = stpcpy(pcVar16 + sVar13,pcVar12);
                  *(undefined2 *)pcVar17 = *local_ad64;
                  FUN_00018550(pcVar16,iVar4);
                  sVar13 = strlen(pcVar16);
                  (pcVar16 + sVar13)[0] = ',';
                  (pcVar16 + sVar13)[1] = '\0';
                  uVar21 = FUN_00048fac(pcVar12);
                  FUN_00048f60(piVar9,uVar21);
                  pcVar12 = (char *)FUN_00048f94();
                } while (pcVar12 != (char *)0x0);
              }
              sVar13 = strlen(acStack_3029 + 1);
              acStack_3029[sVar13] = '|';
              memset(acStack_aa40,0,0x100);
              auStack_acec[0] = *(undefined4 *)(local_ad6c + 0xf4);
              auStack_acec[1] = *(undefined4 *)(local_ad6c + 0xf8);
              auStack_acec[2] = *(undefined4 *)(local_ad6c + 0xfc);
              auStack_acec[3] = *(undefined4 *)(local_ad6c + 0x100);
              local_acdc = *(undefined4 *)(local_ad6c + 0x104);
              uVar18 = local_ad70;
              puVar19 = auStack_acec;
              do {
                uVar21 = *puVar19;
                piVar9 = (int *)FUN_00048cac(paVar3,uVar21);
                if ((piVar9 != (int *)0x0) && (*piVar9 == 1)) {
                  if ((uVar18 & 0xfffffffb) == 0) {
                    snprintf(acStack_aa40,0x100,"%s,",uVar21);
                    strcat(acStack_3029 + 1,acStack_aa40);
                  }
                  uVar18 = FUN_00049018(piVar9);
                  if (0 < (int)uVar18) {
                    uVar20 = local_ad70;
                    do {
                      piVar10 = (int *)FUN_00049034(piVar9,uVar20);
                      if ((piVar10 != (int *)0x0) && (*piVar10 == 0)) {
                        FUN_00048f14();
                        pcVar16 = (char *)FUN_00048f94();
                        if (pcVar16 != (char *)0x0) {
                          pcVar12 = acStack_3029 + 1;
                          do {
                            FUN_00048fac(pcVar16);
                            iVar4 = FUN_00048fa0();
                            if (iVar4 == 0) break;
                            sVar13 = strlen(pcVar12);
                            pcVar17 = stpcpy(pcVar12 + sVar13,pcVar16);
                            *(undefined2 *)pcVar17 = *local_ad64;
                            FUN_00018550(pcVar12,iVar4);
                            sVar13 = strlen(pcVar12);
                            (pcVar12 + sVar13)[0] = ',';
                            (pcVar12 + sVar13)[1] = '\0';
                            uVar21 = FUN_00048fac(pcVar16);
                            FUN_00048f60(piVar10,uVar21);
                            pcVar16 = (char *)FUN_00048f94();
                          } while (pcVar16 != (char *)0x0);
                        }
                        sVar13 = strlen(acStack_3029 + 1);
                        acStack_3029[sVar13] = '|';
                        if (uVar18 - 1 != uVar20) {
                          sVar13 = strlen(acStack_3029 + 1);
                          acStack_3029[sVar13 + 1] = ',';
                        }
                      }
                      uVar20 = uVar20 + 1;
                    } while (uVar18 != uVar20);
                  }
                  break;
                }
                uVar18 = uVar18 + 1;
                puVar19 = puVar19 + 1;
              } while (uVar18 != 5);
            }
            FUN_00018a04(local_ad3c,acStack_3029 + 1);
            if ((paVar3 != (addrinfo *)0x0) && (paVar3->ai_family != -1)) {
              piVar9 = &paVar3->ai_family;
              DataMemoryBarrier(0xb);
              do {
                iVar4 = *piVar9;
                bVar2 = (bool)hasExclusiveAccess(piVar9);
              } while (!bVar2);
              *piVar9 = iVar4 + -1;
              if (iVar4 + -1 == 0) {
                FUN_000495e4(paVar3);
              }
            }
          }
          else {
            pvVar11 = (void *)FUN_00045c20(paVar3,0x6000);
            if (pvVar11 != (void *)0x0) {
              FUN_00018a04(local_ad3c,pvVar11);
            }
            if ((paVar3 != (addrinfo *)0x0) && (paVar3->ai_family != -1)) {
              piVar9 = &paVar3->ai_family;
              DataMemoryBarrier(0xb);
              do {
                iVar4 = *piVar9;
                bVar2 = (bool)hasExclusiveAccess(piVar9);
              } while (!bVar2);
              *piVar9 = iVar4 + -1;
              if (iVar4 + -1 == 0) {
                FUN_000495e4(paVar3);
              }
            }
            free(pvVar11);
          }
        }
LAB_0001bb20:
        close(local_ad3c[0]);
      } while( true );
    }
LAB_0001c0e8:
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0001bfd8;
LAB_0001bfec:
    snprintf(acStack_a028,0x800,"%s: init socket failed","api");
    FUN_0001dd98(3,acStack_a028,0);
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_0001c03c;
  }
  else {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)) {
      snprintf(acStack_6028,0x800,"%s: exec getaddrinfo() failed\n","api_init_socket");
      FUN_0001dd98(3,acStack_6028,0);
      goto LAB_0001c0e8;
    }
LAB_0001bfd8:
    if (2 < DAT_00067848) goto LAB_0001bfec;
LAB_0001c03c:
    if (DAT_00067848 < 3) goto LAB_0001c078;
  }
  builtin_strncpy(local_9828,"cgminer restart",0x10);
  FUN_0001dd98(3,local_9828,0);
LAB_0001c078:
                    /* WARNING: Subroutine does not return */
  __assert_fail("0","api_new.c",0x741,"api");
}

