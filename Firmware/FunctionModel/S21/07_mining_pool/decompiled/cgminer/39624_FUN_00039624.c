// FUN_00039624 @ 00039624  size=6748  callers=0
// program: cgminer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00039624(int *param_1)

{
  char cVar1;
  ulonglong param5;
  pthread_t __th;
  int iVar2;
  pthread_rwlock_t *__haystack;
  int *piVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  pthread_rwlock_t *ppVar7;
  time_t tVar8;
  size_t sVar9;
  uint uVar10;
  undefined4 uVar11;
  char *__format;
  uint *puVar12;
  uint *puVar13;
  byte bVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  uint extraout_r3;
  int *unaff_r6;
  pthread_mutex_t *__mutex;
  int iVar18;
  int iVar19;
  uint *unaff_r11;
  bool bVar20;
  uint in_fpscr;
  double dVar21;
  double dVar22;
  int *local_a8c;
  int *local_a80;
  int local_a78;
  code **local_a70;
  byte *local_a6c;
  pthread_rwlock_t *local_a68;
  timeval local_a64;
  char acStack_a5c [16];
  char local_a4c [20];
  ushort local_a38;
  undefined1 auStack_a36 [30];
  char local_a18 [4];
  undefined2 local_a14;
  undefined1 local_a12;
  undefined1 auStack_a11 [29];
  char acStack_9f4 [60];
  undefined4 uStack_9b8;
  fd_set local_9b4;
  int local_934 [23];
  char acStack_8d8 [160];
  uint local_838 [8];
  char local_818 [2020];
  
  __th = pthread_self();
  pthread_detach(__th);
  local_a8c = (int *)&DAT_000686f8;
  snprintf(acStack_a5c,0x10,"%d/RStratum",*param_1);
  iVar18 = -0x60b6453a;
  iVar19 = -0x112410d;
  FUN_00022ed0(acStack_a5c);
  do {
    cVar1 = *(char *)((int)param_1 + 0x69);
    while( true ) {
      if (cVar1 != '\0') {
        FUN_00021370();
        return 0;
      }
      iVar2 = FUN_00020c94(param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_00030008(param_1);
        if (iVar2 == 0) {
          FUN_00021370(param_1);
          FUN_000328bc(param_1);
          FUN_000317d4(param_1);
          iVar2 = FUN_00030008(param_1);
          while ((iVar2 == 0 &&
                 ((param_1[0x19] == 0 ||
                  ((piVar4 = (int *)FUN_0002fbd8(), param_1 != piVar4 && (1 < DAT_00068af4 - 3U)))))
                 )) {
            iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00068c18);
            if (iVar2 != 0) {
              piVar4 = __errno_location();
              pcVar6 = "wait_lpcurrent";
              iVar18 = *piVar4;
              uVar11 = 0x2716;
              goto LAB_00039dac;
            }
            pthread_cond_wait((pthread_cond_t *)&DAT_00068c30,(pthread_mutex_t *)&DAT_00068c18);
            iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00068c18);
            if (iVar2 != 0) {
              piVar4 = __errno_location();
              pcVar6 = "wait_lpcurrent";
              iVar18 = *piVar4;
              uVar11 = 0x2718;
              goto LAB_00039e2c;
            }
            (*DAT_0006796c)();
            iVar2 = FUN_00030008(param_1);
          }
          while( true ) {
            iVar2 = FUN_00026080(param_1);
            unaff_r6 = local_a8c;
            if (iVar2 != 0) break;
            FUN_00031f80(param_1);
            if (*(char *)((int)param_1 + 0x69) != '\0') {
              return 0;
            }
            FUN_0002090c(5000);
          }
        }
      }
      puVar15 = &uStack_9b8;
      do {
        puVar15 = puVar15 + 1;
        *puVar15 = 0;
      } while (local_9b4.fds_bits + 0x1f != puVar15);
      uVar16 = param_1[0x93];
      local_a64.tv_usec = 0;
      local_a64.tv_sec = 0x5a;
      uVar10 = uVar16 + 0x1f;
      if (-1 < (int)uVar16) {
        uVar10 = uVar16;
      }
      uVar17 = uVar16 & 0x1f;
      if (-1 < (int)-uVar16) {
        uVar17 = -(-uVar16 & 0x1f);
      }
      local_9b4.fds_bits[(int)uVar10 >> 5] =
           local_9b4.fds_bits[(int)uVar10 >> 5] | 1 << (uVar17 & 0xff);
      iVar2 = FUN_00020c94(param_1);
      if ((iVar2 == 0) &&
         (iVar2 = select(param_1[0x93] + 1,&local_9b4,(fd_set *)0x0,(fd_set *)0x0,&local_a64),
         iVar2 < 1)) break;
      __haystack = (pthread_rwlock_t *)FUN_00021888(param_1);
      if (__haystack == (pthread_rwlock_t *)0x0) goto LAB_00039878;
      FUN_0002ffe4(param_1);
      iVar2 = FUN_000270bc(param_1,__haystack);
      if (iVar2 == 0) {
        iVar2 = FUN_00047e04(__haystack,0,local_934);
        if (iVar2 == 0) {
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
            unaff_r11 = local_838;
            snprintf((char *)unaff_r11,0x800,"JSON decode failed(%d): %s",local_934[0],acStack_8d8);
            FUN_0001dd98(6,unaff_r11,0);
          }
        }
        else {
          local_a80 = (int *)FUN_00048cac(iVar2,"result");
          piVar3 = (int *)FUN_00048cac(iVar2,"error");
          piVar4 = (int *)FUN_00048cac(iVar2,&DAT_0004b220);
          if ((piVar4 == (int *)0x0) || (*piVar4 == 7)) {
            if (piVar3 == (int *)0x0) {
              pcVar6 = malloc(0x11);
              if (pcVar6 != (char *)0x0) {
                builtin_strncpy(pcVar6,"(unknown reason)",0x11);
              }
            }
            else {
              pcVar6 = (char *)FUN_00045c20(piVar3,3);
            }
            if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
              unaff_r11 = local_838;
              snprintf((char *)unaff_r11,0x800,"JSON-RPC non method decode failed: %s",pcVar6);
              FUN_0001dd98(6,unaff_r11,0);
            }
            free(pcVar6);
            iVar5 = *(int *)(iVar2 + 4);
          }
          else {
            iVar5 = FUN_00048cac(local_a80,"version-rolling.mask");
            puVar12 = unaff_r11;
            if (((iVar5 == 0) &&
                (pcVar6 = strstr(__haystack->__size,"mining.configure"), pcVar6 == (char *)0x0)) &&
               (pcVar6 = strstr(__haystack->__size,"mining.set_version_mask"), pcVar6 == (char *)0x0
               )) {
              ppVar7 = (pthread_rwlock_t *)FUN_0004943c(piVar4);
              local_a68 = ppVar7;
              iVar5 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00068c64);
              puVar12 = DAT_00068c7c;
              if (iVar5 == 0) {
                uVar17 = (int)&((pthread_rwlock_t *)((uint)ppVar7 & 0xff00))[0x89208].__data.
                               __writer_wakeup +
                         ((uint)ppVar7 & 0xff0000ff) + ((uint)ppVar7 & 0xff0000) + 1 ^ 0x7f76d;
                uVar16 = iVar18 - uVar17 ^ uVar17 << 8;
                uVar10 = (iVar19 - uVar17) - uVar16 ^ uVar16 >> 0xd;
                uVar17 = (uVar17 - uVar16) - uVar10 ^ uVar10 >> 0xc;
                uVar16 = (uVar16 - uVar10) - uVar17 ^ uVar17 << 0x10;
                uVar10 = (uVar10 - uVar17) - uVar16 ^ uVar16 >> 5;
                uVar17 = (uVar17 - uVar16) - uVar10 ^ uVar10 >> 3;
                uVar16 = (uVar16 - uVar10) - uVar17 ^ uVar17 << 10;
                uVar10 = (uVar10 - uVar17) - uVar16 ^ uVar16 >> 0xf;
                ppVar7 = (pthread_rwlock_t *)((uint)ppVar7 & 0xff00);
                if (DAT_00068c7c != (uint *)0x0) {
                  ppVar7 = (pthread_rwlock_t *)*DAT_00068c7c;
                  local_a70 = (code **)(ppVar7->__data).__lock;
                  if (local_a70[((ppVar7->__data).__nr_readers - 1 & uVar10) * 3] != (code *)0x0) {
                    local_a6c = *(byte **)((int)ppVar7 + 0x14);
                    unaff_r6 = (int *)-(int)local_a6c;
                    __mutex = (pthread_mutex_t *)
                              (local_a70[((ppVar7->__data).__nr_readers - 1 & uVar10) * 3] +
                              (int)unaff_r6);
                    if (__mutex != (pthread_mutex_t *)0x0) {
                      do {
                        if (((uVar10 == *(uint *)((int)__mutex + 0x1c)) &&
                            (__mutex[1].__data.__lock == 4)) &&
                           (iVar5 = memcmp((void *)(__mutex->__data).field5_0x14.__spins,&local_a68,
                                           4), iVar5 == 0)) {
                          uVar10 = (__mutex->__data).__count;
                          if (uVar10 == 0) goto LAB_0003aaec;
                          if (__mutex ==
                              (pthread_mutex_t *)
                              ((ppVar7->__data).__nr_readers_queued + (int)unaff_r6))
                          goto LAB_0003ab44;
                          goto LAB_0003a050;
                        }
                        local_a78 = iVar19;
                        if ((__mutex->__data).__nusers == 0) break;
                        __mutex = (pthread_mutex_t *)((__mutex->__data).__nusers + (int)unaff_r6);
                      } while (__mutex != (pthread_mutex_t *)0x0);
                      goto LAB_0003a814;
                    }
                  }
                }
              }
              else {
                FUN_0002cbc0("parse_stratum_response",0x1cc5);
                __haystack = ppVar7;
                iVar18 = iVar19;
                puVar12 = unaff_r11;
LAB_0003a814:
                ppVar7 = __haystack;
                iVar19 = local_a78;
              }
              iVar5 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00068c64);
              if (iVar5 != 0) goto LAB_0003ab14;
              local_a70 = &DAT_0006796c;
              (*DAT_0006796c)();
              if (local_a80 == (int *)0x0) goto LAB_00039a34;
              __mutex = (pthread_mutex_t *)(param_1 + 0x35);
              iVar5 = pthread_mutex_lock(__mutex);
              if (iVar5 == 0) {
                ppVar7 = (pthread_rwlock_t *)(param_1 + 0x3b);
                iVar5 = pthread_rwlock_rdlock(ppVar7);
                if (iVar5 == 0) {
                  iVar5 = pthread_mutex_unlock(__mutex);
                  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0002cc1c("parse_stratum_response",0x1cd9);
                  }
                  dVar21 = *(double *)(param_1 + 0x1cc);
                  FUN_0002d768(ppVar7,"parse_stratum_response",0x1cdb);
                  if (*local_a80 != 5) {
                    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
                      puVar12 = local_838;
                      snprintf((char *)puVar12,0x800,"Rejected untracked stratum share from pool %d"
                               ,*param_1);
                      FUN_0001dd98(5,puVar12,0);
                    }
                    iVar5 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072da4);
                    if (iVar5 == 0) {
                      bVar20 = 0xfffffffe < DAT_00074fc8;
                      DAT_00074fc8 = DAT_00074fc8 + 1;
                      uVar10 = param_1[4];
                      DAT_00074fcc = DAT_00074fcc + (uint)bVar20;
                      _DAT_00074fc0 = _DAT_00074fc0 + dVar21;
                      param_1[4] = uVar10 + 1;
                      *(double *)(param_1 + 0x14) = *(double *)(param_1 + 0x14) + dVar21;
                      param_1[5] = param_1[5] + (uint)(0xfffffffe < uVar10);
                      iVar5 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072da4);
                      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_0002cc1c("parse_stratum_response",0x1cf3);
                      }
                      goto LAB_0003a994;
                    }
                    goto LAB_0003aad4;
                  }
                  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
                    puVar12 = local_838;
                    snprintf((char *)puVar12,0x800,"Accepted untracked stratum share from pool %d",
                             *param_1);
                    FUN_0001dd98(5,puVar12,0);
                  }
                  iVar5 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072da4);
                  if (iVar5 == 0) {
                    bVar20 = 0xfffffffe < DAT_00072f00;
                    DAT_00072f00 = DAT_00072f00 + 1;
                    DAT_00072f04 = DAT_00072f04 + (uint)bVar20;
                    uVar10 = param_1[2];
                    DAT_00074f38 = DAT_00074f38 + dVar21;
                    *(double *)(param_1 + 0x12) = *(double *)(param_1 + 0x12) + dVar21;
                    param_1[2] = uVar10 + 1;
                    param_1[3] = param_1[3] + (uint)(0xfffffffe < uVar10);
                    iVar5 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072da4);
                    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_0002cc1c("parse_stratum_response",0x1ce8);
                    }
LAB_0003a994:
                    (*DAT_0006796c)();
                    iVar5 = *(int *)(iVar2 + 4);
                    unaff_r11 = puVar12;
                    goto joined_r0x00039cb4;
                  }
                }
                else {
                  FUN_0002dd20("parse_stratum_response",0x1cd9);
LAB_0003aad4:
                  FUN_0002cbc0("parse_stratum_response",0x1cee);
                }
                FUN_0002cbc0("parse_stratum_response",0x1ce3);
                uVar10 = extraout_r3;
LAB_0003aaec:
                puVar13 = (uint *)(__mutex->__data).__owner;
                if (puVar13 == (uint *)0x0) {
                  free(local_a70);
                  free((void *)*puVar12);
                  DAT_00068c7c = puVar13;
                }
                else {
                  if (__mutex ==
                      (pthread_mutex_t *)((ppVar7->__data).__nr_readers_queued + (int)unaff_r6)) {
LAB_0003ab44:
                    (ppVar7->__data).__nr_readers_queued = (uint)(local_a6c + uVar10);
                    uVar10 = (__mutex->__data).__count;
                    if (uVar10 == 0) {
                      puVar13 = (uint *)(__mutex->__data).__owner;
                      goto LAB_0003ab08;
                    }
                    ppVar7 = (pthread_rwlock_t *)*puVar12;
LAB_0003a050:
                    *(int *)(uVar10 + (ppVar7->__data).__nr_writers_queued + 8) =
                         (__mutex->__data).__owner;
                  }
                  else {
LAB_0003ab08:
                    DAT_00068c7c = puVar13;
                  }
                  puVar12 = DAT_00068c7c;
                  piVar4 = (int *)*DAT_00068c7c;
                  if ((__mutex->__data).__owner != 0) {
                    *(uint *)((__mutex->__data).__owner + piVar4[5] + 4) = (__mutex->__data).__count
                    ;
                    piVar4 = (int *)*puVar12;
                  }
                  iVar5 = (piVar4[1] - 1U & *(uint *)((int)__mutex + 0x1c)) * 0xc;
                  *(int *)(*piVar4 + iVar5 + 4) = *(int *)(*piVar4 + iVar5 + 4) + -1;
                  if (*(pthread_mutex_t **)(*(int *)*puVar12 + iVar5) == __mutex) {
                    *(uint *)(*(int *)*puVar12 + iVar5) = (__mutex->__data).__nusers;
                  }
                  uVar10 = (__mutex->__data).__nusers;
                  if ((__mutex->__data).__kind != 0) {
                    *(uint *)((__mutex->__data).__kind + 0x10) = uVar10;
                    uVar10 = (__mutex->__data).__nusers;
                  }
                  if (uVar10 != 0) {
                    *(int *)(uVar10 + 0xc) = (__mutex->__data).__kind;
                  }
                  *(int *)(*puVar12 + 0xc) = *(int *)(*puVar12 + 0xc) + -1;
                }
                param_1[0xbb] = param_1[0xbb] + -1;
                iVar5 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00068c64);
                if (iVar5 != 0) {
LAB_0003ab14:
                    /* WARNING: Subroutine does not return */
                  FUN_0002cc1c("parse_stratum_response",0x1ccd);
                }
                local_a6c = &DAT_000686f1;
                (*DAT_0006796c)();
                ppVar7 = *(pthread_rwlock_t **)((int)__mutex + 0x24);
                tVar8 = time((time_t *)0x0);
                iVar5 = tVar8 - __mutex[2].__data.__lock;
                bVar14 = DAT_000686f1;
                if (0 < iVar5) {
                  bVar14 = DAT_000686f1 | 1;
                }
                unaff_r6 = (int *)0x0;
                if ((bVar14 != 0) &&
                   (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)))) {
                  snprintf((char *)local_838,0x800,
                           "Pool %d stratum share result lag time %d seconds",
                           **(int **)((int)ppVar7 + 0x104),iVar5);
                  FUN_0001dd98(6,local_838,0);
                }
              }
              else {
                FUN_0002cbc0("parse_stratum_response",0x1cd9);
              }
              uVar10 = *(uint *)((int)ppVar7 + 0xdc);
              unaff_r11 = local_838;
              local_838[0] = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                             (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18;
              uVar10 = *(uint *)((int)ppVar7 + 0xd8);
              local_838[1] = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                             (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18;
              uVar10 = *(uint *)((int)ppVar7 + 0xd4);
              local_838[2] = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                             (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18;
              uVar10 = *(uint *)((int)ppVar7 + 0xd0);
              local_838[3] = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                             (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18;
              uVar10 = *(uint *)((int)ppVar7 + 0xcc);
              local_838[4] = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                             (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18;
              uVar10 = *(uint *)((int)ppVar7 + 200);
              local_838[5] = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                             (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18;
              uVar10 = *(uint *)((int)ppVar7 + 0xc4);
              local_838[6] = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                             (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18;
              uVar10 = ppVar7[6].__data.__lock;
              local_838[7] = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                             (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18;
              puVar12 = unaff_r11;
              do {
                if ((char)*puVar12 != '\0') break;
                unaff_r6 = (int *)((int)unaff_r6 + 1);
                puVar12 = (uint *)((int)puVar12 + 1);
              } while (unaff_r6 != (int *)0x1d);
              uVar10 = *(uint *)((int)local_838 + (int)unaff_r6);
              dVar21 = round(*(double *)((int)ppVar7 + 0x178));
              param5 = FUN_0004ad88(SUB84(dVar21,0),(int)((ulonglong)dVar21 >> 0x20));
              FUN_00028838(*(undefined4 *)((int)ppVar7 + 0xe8),*(undefined4 *)((int)ppVar7 + 0xec),
                           local_a18,0x10,0);
              if (*(char *)((int)ppVar7 + 0x11b) == '\0') {
                pcVar6 = "";
              }
              else {
                pcVar6 = " BLOCK!";
              }
              snprintf(acStack_9f4,0x40,"%08lx Diff %s/%llu%s",
                       uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8
                       | uVar10 >> 0x18,local_a18,param5,pcVar6);
              unaff_r6 = *(int **)((int)ppVar7 + 0x104);
              iVar5 = FUN_0002f6e8(ppVar7[8].__data.__lock);
              local_a78 = *(int *)(iVar5 + 0x24);
              if ((local_a80 == (int *)0x0) ||
                 ((*local_a80 != 5 &&
                  ((*(char *)((int)ppVar7 + 0x144) == '\0' || (*local_a80 != 7)))))) {
                iVar5 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072da4);
                if (iVar5 == 0) {
                  *(int *)(local_a78 + 0x28) = *(int *)(local_a78 + 0x28) + 1;
                  bVar20 = 0xfffffffe < DAT_00074fc8;
                  DAT_00074fc8 = DAT_00074fc8 + 1;
                  uVar10 = unaff_r6[4];
                  DAT_00074fcc = DAT_00074fcc + (uint)bVar20;
                  unaff_r6[4] = uVar10 + 1;
                  unaff_r6[5] = unaff_r6[5] + (uint)(0xfffffffe < uVar10);
                  *(double *)(local_a78 + 0xd0) =
                       *(double *)(local_a78 + 0xd0) + *(double *)((int)ppVar7 + 0x178);
                  dVar21 = *(double *)((int)ppVar7 + 0x178);
                  _DAT_00074fc0 = _DAT_00074fc0 + dVar21;
                  unaff_r6[6] = unaff_r6[6] + 1;
                  *(double *)(unaff_r6 + 0x14) = *(double *)(unaff_r6 + 0x14) + dVar21;
                  iVar5 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072da4);
                  if (iVar5 != 0) {
                    piVar4 = __errno_location();
                    uVar11 = 0xe52;
                    goto LAB_0003abd0;
                  }
                  (*DAT_0006796c)();
                  if ((*local_a6c != 0) &&
                     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
                    local_838[0]._0_1_ = 'P';
                    local_838[0]._1_1_ = 'R';
                    local_838[0]._2_1_ = 'O';
                    local_838[0]._3_1_ = 'O';
                    local_838[1]._0_1_ = 'F';
                    local_838[1]._1_1_ = ' ';
                    local_838[1]._2_1_ = 'O';
                    local_838[1]._3_1_ = 'F';
                    local_838[2]._0_1_ = ' ';
                    local_838[2]._1_1_ = 'W';
                    local_838[2]._2_1_ = 'O';
                    local_838[2]._3_1_ = 'R';
                    local_838[3]._0_1_ = 'K';
                    local_838[3]._1_1_ = ' ';
                    local_838[3]._2_1_ = 'R';
                    local_838[3]._3_1_ = 'E';
                    local_838[4]._0_1_ = 'S';
                    local_838[4]._1_1_ = 'U';
                    local_838[4]._2_1_ = 'L';
                    local_838[4]._3_1_ = 'T';
                    local_838[5]._0_1_ = ':';
                    local_838[5]._1_1_ = ' ';
                    local_838[5]._2_1_ = 'f';
                    local_838[5]._3_1_ = 'a';
                    local_838[6]._0_1_ = 'l';
                    local_838[6]._1_1_ = 's';
                    local_838[6]._2_1_ = 'e';
                    local_838[6]._3_1_ = ' ';
                    local_838[7]._0_1_ = '(';
                    local_838[7]._1_1_ = 'b';
                    local_838[7]._2_1_ = 'o';
                    local_838[7]._3_1_ = 'o';
                    builtin_strncpy(local_818,"ooo)",5);
                    FUN_0001dd98(7,unaff_r11,0);
                  }
                  cVar1 = DAT_000761e0;
                  if ((DAT_00076244 == '\0') && (DAT_000761e0 == '\0')) {
                    local_a18[0] = 'r';
                    local_a18[1] = 'e';
                    local_a18[2] = 'j';
                    local_a18[3] = 'e';
                    local_a14 = 0x7463;
                    local_a12 = 0;
                    memset(auStack_a11,0,0x1d);
                    local_a38 = local_a38 & 0xff00;
                    if (DAT_00072e70 < 2) {
                      local_a4c[0] = cVar1;
                    }
                    else {
                      snprintf(local_a4c,0x14,"pool %d",**(int **)((int)ppVar7 + 0x104));
                    }
                    if (*(char *)((int)ppVar7 + 0x144) == '\0') {
                      local_a80 = (int *)FUN_00048cac(iVar2,"reject-reason");
                    }
                    if (local_a80 == (int *)0x0) {
                      if (piVar3 == (int *)0x0) {
                        bVar14 = 0;
                      }
                      else {
                        bVar14 = *(byte *)((int)ppVar7 + 0x11c) & 1;
                      }
                      if (bVar14 != 0) {
                        if (*piVar3 == 1) {
                          piVar3 = (int *)FUN_00049034(piVar3);
                          if ((piVar3 != (int *)0x0) && (*piVar3 == 2)) goto LAB_0003ab9c;
                        }
                        else if (*piVar3 == 2) {
LAB_0003ab9c:
                          pcVar6 = (char *)FUN_000491e0(piVar3);
                          snprintf((char *)&local_a38,0x1f," (%s)",pcVar6);
                        }
                      }
                    }
                    else {
                      pcVar6 = (char *)FUN_000491e0();
                      sVar9 = strlen(pcVar6);
                      if (0x1b < sVar9) {
                        sVar9 = 0x1c;
                      }
                      local_a38 = 0x2820;
                      FUN_00023324(auStack_a36,pcVar6,sVar9,"cgminer.c","share_result",0xe7a);
                      auStack_a36[sVar9] = 0x29;
                      auStack_a36[sVar9 + 1] = 0;
                      FUN_00023324(auStack_a11,pcVar6,sVar9,"cgminer.c","share_result",0xe7f);
                      local_a12 = 0x3a;
                      auStack_a11[sVar9] = 0;
                    }
                    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
                      snprintf((char *)unaff_r11,0x800,"Rejected %s %s %d %s%s %s%s version 0x%x",
                               acStack_9f4,*(char **)(*(int *)(local_a78 + 4) + 8),
                               *(int *)(local_a78 + 8),local_a4c,(char *)&local_a38,"","",
                               *(uint *)((int)ppVar7 + 0x1bc));
                      FUN_0001dd98(5,unaff_r11,0);
                    }
                    FUN_00033380(local_a18,ppVar7);
                  }
                  iVar5 = unaff_r6[6];
                  if (((10 < iVar5) && (*(char *)((int)ppVar7 + 0x119) == '\0')) &&
                     ((DAT_00072ea8 != '\0' && (1 < DAT_00074f34)))) {
                    dVar21 = (double)FUN_0004accc(DAT_00072f00,DAT_00072f04);
                    dVar22 = (dVar21 / DAT_000681d0) * 60.0 * 3.0;
                    dVar21 = (double)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
                    uVar10 = in_fpscr & 0xfffffff | (uint)(dVar21 < dVar22) << 0x1f |
                             (uint)(dVar21 == dVar22) << 0x1e;
                    in_fpscr = uVar10 | (uint)(NAN(dVar21) || NAN(dVar22)) << 0x1c;
                    bVar14 = (byte)(uVar10 >> 0x18);
                    if (!(bool)(bVar14 >> 6 & 1) && bVar14 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
                      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848))
                      {
                        snprintf((char *)unaff_r11,0x800,
                                 "Pool %d rejected %d sequential shares, disabling!",*unaff_r6,iVar5
                                );
                        FUN_0001dd98(4,unaff_r11,0);
                      }
                      if (unaff_r6[0x19] == 1) {
                        DAT_00074f34 = DAT_00074f34 + -1;
                      }
                      unaff_r6[0x19] = 2;
                      piVar4 = (int *)FUN_0002fbd8();
                      if (unaff_r6 == piVar4) {
                        FUN_00031afc(0);
                      }
                      unaff_r6[6] = 0;
                    }
                  }
LAB_0003a7a4:
                  FUN_0002a76c((undefined *)((int)__mutex + 0x24),"cgminer.c",
                               "parse_stratum_response",0x1cfa);
                  free(__mutex);
                  if (*(int *)(iVar2 + 4) != -1) {
                    DataMemoryBarrier(0xb);
                    piVar4 = (int *)(iVar2 + 4);
                    do {
                      iVar5 = *piVar4;
                      bVar20 = (bool)hasExclusiveAccess(piVar4);
                    } while (!bVar20);
                    *piVar4 = iVar5 + -1;
                    if (iVar5 + -1 == 0) {
                      FUN_000495e4(iVar2);
                    }
                  }
                  goto LAB_00039778;
                }
                piVar4 = __errno_location();
                uVar11 = 0xe4a;
                pcVar6 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
              }
              else {
                iVar5 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072da4);
                if (iVar5 == 0) {
                  bVar20 = 0xfffffffe < DAT_00072f00;
                  DAT_00072f00 = DAT_00072f00 + 1;
                  DAT_00072f04 = DAT_00072f04 + (uint)bVar20;
                  *(int *)(local_a78 + 0x24) = *(int *)(local_a78 + 0x24) + 1;
                  uVar10 = unaff_r6[2];
                  unaff_r6[2] = uVar10 + 1;
                  unaff_r6[3] = unaff_r6[3] + (uint)(0xfffffffe < uVar10);
                  *(double *)(local_a78 + 200) =
                       *(double *)(local_a78 + 200) + *(double *)((int)ppVar7 + 0x178);
                  DAT_00074f38 = DAT_00074f38 + *(double *)((int)ppVar7 + 0x178);
                  *(double *)(unaff_r6 + 0x12) =
                       *(double *)(unaff_r6 + 0x12) + *(double *)((int)ppVar7 + 0x178);
                  iVar5 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072da4);
                  if (iVar5 == 0) {
                    (*DAT_0006796c)();
                    unaff_r6[6] = 0;
                    *(int *)(local_a78 + 0xd8) = *unaff_r6;
                    tVar8 = time((time_t *)0x0);
                    bVar14 = *local_a6c;
                    *(time_t *)(local_a78 + 0xdc) = tVar8;
                    *(undefined8 *)(local_a78 + 0xe0) = *(undefined8 *)((int)ppVar7 + 0x178);
                    unaff_r6[0x58] = tVar8;
                    iVar5 = *(int *)((int)ppVar7 + 0x17c);
                    unaff_r6[0x5a] = *(int *)((int)ppVar7 + 0x178);
                    unaff_r6[0x5b] = iVar5;
                    if ((bVar14 != 0) &&
                       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
                      local_838[0]._0_1_ = 'P';
                      local_838[0]._1_1_ = 'R';
                      local_838[0]._2_1_ = 'O';
                      local_838[0]._3_1_ = 'O';
                      local_838[1]._0_1_ = 'F';
                      local_838[1]._1_1_ = ' ';
                      local_838[1]._2_1_ = 'O';
                      local_838[1]._3_1_ = 'F';
                      local_838[2]._0_1_ = ' ';
                      local_838[2]._1_1_ = 'W';
                      local_838[2]._2_1_ = 'O';
                      local_838[2]._3_1_ = 'R';
                      local_838[3]._0_1_ = 'K';
                      local_838[3]._1_1_ = ' ';
                      local_838[3]._2_1_ = 'R';
                      local_838[3]._3_1_ = 'E';
                      local_838[4]._0_1_ = 'S';
                      local_838[4]._1_1_ = 'U';
                      local_838[4]._2_1_ = 'L';
                      local_838[4]._3_1_ = 'T';
                      local_838[5]._0_1_ = ':';
                      local_838[5]._1_1_ = ' ';
                      local_838[5]._2_1_ = 't';
                      local_838[5]._3_1_ = 'r';
                      local_838[6]._0_1_ = 'u';
                      local_838[6]._1_1_ = 'e';
                      local_838[6]._2_1_ = ' ';
                      local_838[6]._3_1_ = '(';
                      local_838[7]._0_1_ = 'y';
                      local_838[7]._1_1_ = 'a';
                      local_838[7]._2_1_ = 'y';
                      local_838[7]._3_1_ = '!';
                      builtin_strncpy(local_818,"!!)",4);
                      FUN_0001dd98(7,unaff_r11,0);
                    }
                    if ((DAT_00076244 == '\0') && (DAT_000761e0 == '\0')) {
                      if (DAT_00072e70 < 2) {
                        if ((*local_a6c != 0) &&
                           (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848))
                           )) {
                          snprintf((char *)unaff_r11,0x800,"Accepted %s %s %d %s%s",acStack_9f4,
                                   *(char **)(*(int *)(local_a78 + 4) + 8),*(int *)(local_a78 + 8),
                                   "","");
                          FUN_0001dd98(7,unaff_r11,0);
                        }
                      }
                      else if ((*local_a6c != 0) &&
                              (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) ||
                               (6 < DAT_00067848)))) {
                        snprintf((char *)unaff_r11,0x800,"Accepted %s %s %d pool %d %s%s",
                                 acStack_9f4,*(char **)(*(int *)(local_a78 + 4) + 8),
                                 *(int *)(local_a78 + 8),**(int **)((int)ppVar7 + 0x104),"","");
                        FUN_0001dd98(7,unaff_r11,0);
                      }
                    }
                    FUN_00033380("accept",ppVar7);
                    if (DAT_00068b70 != 0) {
                      dVar21 = (double)VectorSignedToFloat(DAT_00068b70,(byte)(in_fpscr >> 0x16) & 3
                                                          );
                      uVar10 = in_fpscr & 0xfffffff | (uint)(dVar21 == DAT_00074f38) << 0x1e;
                      in_fpscr = uVar10 | (uint)(DAT_00074f38 <= dVar21) << 0x1d;
                      if (!(bool)((byte)(in_fpscr >> 0x1d) & 1) || SUB41(uVar10 >> 0x1e,0)) {
                        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)
                           ) {
                          snprintf((char *)unaff_r11,0x800,
                                   "Successfully mined %d accepted shares as requested and exiting."
                                   ,DAT_00068b70);
                          FUN_0001dd98(4,unaff_r11,0);
                        }
                        FUN_0002c310();
                      }
                    }
                    if (unaff_r6[0x19] == 2) {
                      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848))
                      {
                        snprintf((char *)unaff_r11,0x800,
                                 "Rejecting pool %d now accepting shares, re-enabling!",*unaff_r6);
                        FUN_0001dd98(4,unaff_r11,0);
                      }
                      if (unaff_r6[0x19] != 1) {
                        FUN_00028ff0(unaff_r6 + 0x19);
                      }
                      FUN_00031afc(0);
                    }
                    if (*(char *)((int)ppVar7 + 0x11b) != '\0') {
                      FUN_0002c5c8();
                    }
                    goto LAB_0003a7a4;
                  }
                  piVar4 = __errno_location();
                  uVar11 = 0xe15;
LAB_0003abd0:
                  pcVar6 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
                }
                else {
                  piVar4 = __errno_location();
                  uVar11 = 0xe0b;
                  pcVar6 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
                }
              }
              snprintf((char *)unaff_r11,0x800,pcVar6,*piVar4,"cgminer.c","share_result",uVar11);
              goto LAB_00039dcc;
            }
LAB_00039a34:
            iVar5 = *(int *)(iVar2 + 4);
            unaff_r11 = puVar12;
          }
joined_r0x00039cb4:
          if (iVar5 != -1) {
            DataMemoryBarrier(0xb);
            piVar4 = (int *)(iVar2 + 4);
            do {
              iVar5 = *piVar4;
              bVar20 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar20);
            *piVar4 = iVar5 + -1;
            if (iVar5 + -1 == 0) {
              FUN_000495e4(iVar2);
            }
          }
        }
        iVar2 = FUN_00021028(param_1,__haystack);
        if (iVar2 != 0) goto LAB_00039778;
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
          unaff_r11 = local_838;
          snprintf((char *)unaff_r11,0x800,"Unknown stratum msg: %s",__haystack->__size);
          FUN_0001dd98(6,unaff_r11,0);
        }
      }
      else {
LAB_00039778:
        if ((char)param_1[0xae] != '\0') {
          local_838[0] = FUN_0002d974();
          *(undefined1 *)(param_1 + 0xae) = 0;
          FUN_00033628(param_1,local_838[0]);
          unaff_r11 = local_838;
          *(undefined1 *)(local_838[0] + 0x118) = 1;
          FUN_00037ce0();
          FUN_0002a76c(unaff_r11,"cgminer.c","stratum_rthread",0x1dfa);
        }
      }
      free(__haystack);
      cVar1 = *(char *)((int)param_1 + 0x69);
    }
    if (DAT_000686f1 != 0) {
      if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7))
      goto LAB_00039b04;
      unaff_r11 = local_838;
      snprintf((char *)unaff_r11,0x800,"Stratum select failed on pool %d with value %d",*param_1,
               iVar2);
      FUN_0001dd98(7,unaff_r11,0);
    }
LAB_00039878:
    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) {
LAB_00039b04:
      if (4 < DAT_00067848) goto LAB_00039894;
    }
    else {
LAB_00039894:
      unaff_r11 = local_838;
      snprintf((char *)unaff_r11,0x800,"Stratum connection to pool %d interrupted",*param_1);
      FUN_0001dd98(5,unaff_r11,0);
    }
    param_1[0x20] = param_1[0x20] + 1;
    DAT_00072f18 = DAT_00072f18 + 1;
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x35));
    if (iVar2 != 0) {
      piVar4 = __errno_location();
      pcVar6 = "supports_resume";
      iVar18 = *piVar4;
      uVar11 = 0x1d84;
LAB_00039dac:
      __format = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
LAB_00039dc0:
      snprintf((char *)local_838,0x800,__format,iVar18,"cgminer.c",pcVar6,uVar11);
LAB_00039dcc:
      FUN_0001dd98(3,local_838,1);
                    /* WARNING: Subroutine does not return */
      FUN_0002c290(1);
    }
    iVar2 = pthread_rwlock_rdlock((pthread_rwlock_t *)(param_1 + 0x3b));
    if (iVar2 != 0) {
      piVar4 = __errno_location();
      iVar18 = *piVar4;
      __format = "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d";
      pcVar6 = "supports_resume";
      uVar11 = 0x1d84;
      goto LAB_00039dc0;
    }
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x35));
    if (iVar2 != 0) {
      piVar4 = __errno_location();
      pcVar6 = "supports_resume";
      iVar18 = *piVar4;
      uVar11 = 0x1d84;
LAB_00039e2c:
      __format = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
      goto LAB_00039dc0;
    }
    iVar5 = param_1[0xa3];
    iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x3b));
    if (iVar2 != 0) {
      piVar4 = __errno_location();
      iVar18 = *piVar4;
      __format = "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d";
      pcVar6 = "supports_resume";
      uVar11 = 0x1d86;
      goto LAB_00039dc0;
    }
    (*DAT_0006796c)();
    if ((iVar5 == 0) || (DAT_00074f94 != '\0')) {
      FUN_000328bc(param_1);
    }
    FUN_000317d4(param_1);
    piVar4 = (int *)FUN_0002fbd8();
    if (param_1 == piVar4) {
      FUN_0002c5c8();
    }
    iVar2 = FUN_00026080(param_1);
    while (iVar2 == 0) {
      FUN_00031f80(param_1);
      if (*(char *)((int)param_1 + 0x69) != '\0') {
        return 0;
      }
      FUN_0002090c(5000);
      iVar2 = FUN_00026080(param_1);
    }
  } while( true );
}

