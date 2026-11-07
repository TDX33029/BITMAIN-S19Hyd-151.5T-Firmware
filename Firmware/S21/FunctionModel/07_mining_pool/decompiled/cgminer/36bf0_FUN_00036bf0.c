// FUN_00036bf0 @ 00036bf0  size=4324  callers=0
// program: cgminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00036bf0(int *param_1)

{
  char cVar1;
  pthread_t __th;
  int iVar2;
  int *piVar3;
  time_t tVar4;
  uint uVar5;
  size_t sVar6;
  void *pvVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  char *pcVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  pthread_rwlock_t *__rwlock;
  char *pcVar23;
  bool bVar24;
  uint local_ca0;
  int local_c6c;
  int local_c68;
  uint local_c64;
  int local_c60;
  int iStack_c5c;
  char acStack_c58 [12];
  char acStack_c4c [16];
  char acStack_c3c [20];
  char acStack_c28 [1024];
  char local_828 [40];
  undefined4 uStack_800;
  char acStack_7fc [4];
  undefined4 local_7f8;
  undefined2 local_7f4;
  
  __th = pthread_self();
  pthread_detach(__th);
  snprintf(acStack_c4c,0x10,"%d/SStratum",*param_1);
  FUN_00022ed0(acStack_c4c);
  iVar2 = FUN_00020034();
  param_1[0xba] = iVar2;
  if (iVar2 == 0) {
    pcVar23 = " stratum_q in stratum_sthread";
    builtin_strncpy(local_828,"Failed to create",0x10);
    pcVar12 = local_828 + 0x10;
  }
  else {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
      snprintf(local_828,0x800,"in %s , pool: %d, pool_url: %s, miner_name: %s","stratum_sthread",
               *param_1,(char *)param_1[0x29],(char *)param_1[0x2b]);
      FUN_0001dd98(5,local_828,0);
      iVar2 = param_1[0xba];
    }
    cVar1 = *(char *)((int)param_1 + 0x69);
    iVar18 = 0;
    iVar19 = 0;
    iVar20 = 0;
    while( true ) {
      if (cVar1 != '\0') {
        FUN_000200f8();
        return 0;
      }
      local_c68 = FUN_000201dc(iVar2);
      if (local_c68 == 0) break;
      if (*(uint *)(local_c68 + 0x130) < 9) {
        iVar2 = *(int *)(local_c68 + 0x4c);
        iVar9 = *(int *)(local_c68 + 0x128);
        iVar14 = *(int *)(local_c68 + 300);
        local_c6c = iVar2;
        local_c60 = iVar9;
        iStack_c5c = iVar14;
        if (iVar2 == iVar18 && (iVar14 == iVar20 && iVar9 == iVar19)) {
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
            snprintf(local_828,0x800,"Filtering duplicate share to pool %d",*param_1);
            FUN_0001dd98(6,local_828,0);
          }
          FUN_0002a76c(&local_c68,"cgminer.c","stratum_sthread",0x1e3d);
        }
        else if (*(double *)(local_c68 + 0x138) < *(double *)(param_1 + 0x1ca)) {
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
            snprintf(local_828,0x800,"Filtering high hash share to pool %d",*param_1);
            FUN_0001dd98(6,local_828,0);
          }
          FUN_0002a76c(&local_c68,"cgminer.c","stratum_sthread",0x1e45);
        }
        else {
          FUN_0001fa58(acStack_c58,&local_c6c,4);
          FUN_0001fa58(acStack_c3c,&local_c60,*(undefined4 *)(local_c68 + 0x130));
          piVar3 = (int *)FUN_0001f8e8(0x34,1,"cgminer.c","stratum_sthread",0x1e4e);
          iVar18 = local_c68;
          tVar4 = time((time_t *)0x0);
          piVar3[0xb] = tVar4;
          piVar3[9] = local_c68;
          memset(acStack_c28,0,0x400);
          iVar19 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00068c64);
          if (iVar19 != 0) {
            piVar3 = __errno_location();
            iVar2 = *piVar3;
            uVar8 = 0x1e57;
            pcVar12 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
LAB_000377b8:
            snprintf(local_828,0x800,pcVar12,iVar2,"cgminer.c","stratum_sthread",uVar8);
            FUN_0001dd98(3,local_828,1);
                    /* WARNING: Subroutine does not return */
            FUN_0002c290(1);
          }
          piVar3[10] = DAT_00072dcc;
          DAT_00072dcc = DAT_00072dcc + 1;
          uVar5 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00068c64);
          if (uVar5 != 0) {
            piVar3 = __errno_location();
            iVar2 = *piVar3;
            uVar8 = 0x1e5a;
            pcVar12 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
            goto LAB_000377b8;
          }
          (*DAT_0006796c)();
          local_c64 = uVar5;
          FUN_0001fb7c(&local_c64,param_1 + 0x1c1);
          if ((char)param_1[0xa5] == '\0') {
            snprintf(acStack_c28,0x400,
                     "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}"
                     ,(char *)param_1[0x2b],*(char **)(local_c68 + 0x120),acStack_c3c,
                     *(char **)(local_c68 + 0x134),acStack_c58,piVar3[10]);
          }
          else {
            uVar5 = *(uint *)(local_c68 + 0x1bc) & ~local_c64;
            snprintf(acStack_c28,0x400,
                     "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%08x\"], \"id\": %d, \"method\": \"mining.submit\"}"
                     ,(char *)param_1[0x2b],*(char **)(local_c68 + 0x120),acStack_c3c,
                     *(char **)(local_c68 + 0x134),acStack_c58,
                     uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                     uVar5 >> 0x18,piVar3[10]);
          }
          if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
            snprintf(local_828,0x800,"Submitting share %08lx to pool %d",*(ulong *)(iVar18 + 0xd8),
                     *param_1);
            FUN_0001dd98(6,local_828,0);
          }
          while (iVar18 = piVar3[0xb], tVar4 = time((time_t *)0x0), tVar4 <= iVar18 + 0x77) {
            sVar6 = strlen(acStack_c28);
            iVar18 = FUN_000214d4(param_1,acStack_c28,sVar6);
            if (iVar18 != 0) {
              iVar18 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00068c64);
              if (iVar18 == 0) {
                piVar3[5] = (int)(piVar3 + 10);
                piVar16 = DAT_00068c7c;
                bVar24 = DAT_00068c7c == (int *)0x0;
                piVar3[6] = 4;
                uVar15 = *(byte *)(piVar3 + 10) + 0x112410d +
                         (uint)*(byte *)((int)piVar3 + 0x2b) * 0x1000000 +
                         (uint)*(byte *)((int)piVar3 + 0x2a) * 0x10000 +
                         (uint)*(byte *)((int)piVar3 + 0x29) * 0x100 ^ 0x7f76d;
                uVar10 = 0x9f49bac6 - uVar15 ^ uVar15 << 8;
                uVar5 = (-0x112410d - uVar15) - uVar10 ^ uVar10 >> 0xd;
                uVar15 = (uVar15 - uVar10) - uVar5 ^ uVar5 >> 0xc;
                uVar10 = (uVar10 - uVar5) - uVar15 ^ uVar15 << 0x10;
                uVar5 = (uVar5 - uVar15) - uVar10 ^ uVar10 >> 5;
                uVar15 = (uVar15 - uVar10) - uVar5 ^ uVar5 >> 3;
                uVar10 = (uVar10 - uVar5) - uVar15 ^ uVar15 << 10;
                uVar5 = (uVar5 - uVar15) - uVar10 ^ uVar10 >> 0xf;
                piVar3[7] = uVar5;
                if (bVar24) {
                  piVar3[2] = 0;
                  piVar3[1] = 0;
                  DAT_00068c7c = piVar3;
                  pvVar7 = malloc(0x2c);
                  *piVar3 = (int)pvVar7;
                  if (pvVar7 == (void *)0x0) goto LAB_00037cd8;
                  memset(pvVar7,0,0x2c);
                  *(int **)(*piVar3 + 0x10) = piVar3;
                  *(undefined4 *)(*piVar3 + 4) = 0x20;
                  *(undefined4 *)(*piVar3 + 8) = 5;
                  *(undefined4 *)(*piVar3 + 0x14) = 0;
                  puVar21 = (undefined4 *)*piVar3;
                  pvVar7 = malloc(0x180);
                  *puVar21 = pvVar7;
                  if (*(void **)*piVar3 == (void *)0x0) goto LAB_00037cd8;
                  memset(*(void **)*piVar3,0,0x180);
                  *(undefined4 *)(*piVar3 + 0x28) = 0xa0111fe1;
                  piVar16 = piVar3;
                }
                else {
                  iVar18 = *piVar16;
                  piVar3[2] = 0;
                  *piVar3 = iVar18;
                  piVar3[1] = *(int *)(*piVar16 + 0x10) - *(int *)(*piVar16 + 0x14);
                  *(int **)(*(int *)(*piVar16 + 0x10) + 8) = piVar3;
                  *(int **)(*piVar16 + 0x10) = piVar3;
                }
                *(int *)(*piVar16 + 0xc) = *(int *)(*piVar16 + 0xc) + 1;
                uVar5 = uVar5 & ((int *)*piVar16)[1] - 1U;
                iVar18 = uVar5 * 0xc;
                iVar19 = *(int *)*piVar16 + iVar18;
                *(int *)(iVar19 + 4) = *(int *)(iVar19 + 4) + 1;
                iVar19 = *(int *)(*(int *)*piVar16 + uVar5 * 0xc);
                piVar3[3] = 0;
                piVar3[4] = iVar19;
                iVar20 = *(int *)*piVar16;
                iVar19 = *(int *)(iVar20 + uVar5 * 0xc);
                if (iVar19 != 0) {
                  *(int **)(iVar19 + 0xc) = piVar3;
                  iVar20 = *(int *)*piVar16;
                }
                *(int **)(iVar20 + iVar18) = piVar3;
                if (((uint)((*(int *)(*(int *)*piVar16 + iVar18 + 8) + 1) * 10) <=
                     *(uint *)(*(int *)*piVar16 + iVar18 + 4)) && (*(int *)(*piVar3 + 0x24) != 1)) {
                  pvVar7 = calloc(*(int *)(*piVar3 + 4) * 0x18,1);
                  if (pvVar7 == (void *)0x0) {
LAB_00037cd8:
                    /* WARNING: Subroutine does not return */
                    exit(-1);
                  }
                  iVar18 = *piVar3;
                  *(uint *)(iVar18 + 0x18) =
                       (uint)((*(int *)(iVar18 + 4) * 2 - 1U & *(uint *)(iVar18 + 0xc)) != 0) +
                       (*(uint *)(iVar18 + 0xc) >> (*(int *)(iVar18 + 8) + 1U & 0xff));
                  *(undefined4 *)(*piVar3 + 0x1c) = 0;
                  piVar16 = (int *)*piVar3;
                  uVar5 = piVar16[1];
                  if (uVar5 != 0) {
                    iVar18 = 0;
                    local_ca0 = 0;
                    do {
                      iVar19 = *(int *)(*piVar16 + iVar18);
                      if (*(int *)(*piVar16 + iVar18) != 0) {
                        while( true ) {
                          iVar22 = *(int *)(iVar19 + 0x10);
                          uVar10 = uVar5 * 2 - 1 & *(uint *)(iVar19 + 0x1c);
                          uVar5 = *(int *)((int)pvVar7 + uVar10 * 0xc + 4) + 1;
                          *(uint *)((int)pvVar7 + uVar10 * 0xc + 4) = uVar5;
                          iVar20 = *piVar3;
                          if (*(uint *)(iVar20 + 0x18) < uVar5) {
                            *(int *)(iVar20 + 0x1c) = *(int *)(iVar20 + 0x1c) + 1;
                            uVar8 = FUN_0004a488(*(undefined4 *)((int)pvVar7 + uVar10 * 0xc + 4),
                                                 *(undefined4 *)(*piVar3 + 0x18));
                            *(undefined4 *)((int)pvVar7 + uVar10 * 0xc + 8) = uVar8;
                          }
                          *(undefined4 *)(iVar19 + 0xc) = 0;
                          *(undefined4 *)(iVar19 + 0x10) =
                               *(undefined4 *)((int)pvVar7 + uVar10 * 0xc);
                          iVar20 = *(int *)((int)pvVar7 + uVar10 * 0xc);
                          if (iVar20 != 0) {
                            *(int *)(iVar20 + 0xc) = iVar19;
                          }
                          *(int *)((int)pvVar7 + uVar10 * 0xc) = iVar19;
                          piVar16 = (int *)*piVar3;
                          if (iVar22 == 0) break;
                          uVar5 = piVar16[1];
                          iVar19 = iVar22;
                        }
                        uVar5 = piVar16[1];
                      }
                      iVar18 = iVar18 + 0xc;
                      local_ca0 = local_ca0 + 1;
                    } while (local_ca0 < uVar5);
                  }
                  free((void *)*piVar16);
                  *(int *)(*piVar3 + 4) = *(int *)(*piVar3 + 4) << 1;
                  *(int *)(*piVar3 + 8) = *(int *)(*piVar3 + 8) + 1;
                  *(void **)*piVar3 = pvVar7;
                  iVar18 = *piVar3;
                  if (*(uint *)(iVar18 + 0xc) >> 1 < *(uint *)(iVar18 + 0x1c)) {
                    iVar19 = *(int *)(iVar18 + 0x20) + 1;
                  }
                  else {
                    iVar19 = 0;
                  }
                  *(int *)(iVar18 + 0x20) = iVar19;
                  if (1 < *(uint *)(*piVar3 + 0x20)) {
                    *(undefined4 *)(*piVar3 + 0x24) = 1;
                  }
                }
                param_1[0xbb] = param_1[0xbb] + 1;
                iVar18 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00068c64);
                if (iVar18 != 0) {
                  piVar3 = __errno_location();
                  iVar2 = *piVar3;
                  uVar8 = 0x1e89;
                  pcVar12 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
                  goto LAB_000377b8;
                }
                (*DAT_0006796c)();
                iVar18 = FUN_0002cce4(param_1,param_1 + 0x18);
                if (iVar18 == 0) {
LAB_0003725c:
                  if (DAT_000686f1 != 0) {
                    if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_00037530;
LAB_00037294:
                    builtin_strncpy(local_828,"Successfully submitted, adding to stratu",0x28);
                    uStack_800._0_1_ = 'm';
                    uStack_800._1_1_ = '_';
                    uStack_800._2_1_ = 's';
                    uStack_800._3_1_ = 'h';
                    builtin_strncpy(acStack_7fc,"ares",4);
                    local_7f8._0_1_ = ' ';
                    local_7f8._1_1_ = 'd';
                    local_7f8._2_1_ = 'b';
                    local_7f8._3_1_ = '\0';
                    FUN_0001dd98(7,local_828,0);
                  }
                }
                else {
                  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
                    snprintf(local_828,0x800,"Pool %d communication resumed, submitting work",
                             *param_1);
                    FUN_0001dd98(4,local_828,0);
                    goto LAB_0003725c;
                  }
                  if (DAT_000686f1 != 0) {
LAB_00037530:
                    if (6 < DAT_00067848) goto LAB_00037294;
                  }
                }
                tVar4 = time((time_t *)0x0);
                bVar13 = DAT_000686f1;
                piVar3[0xc] = tVar4;
                if (0 < tVar4 - piVar3[0xb]) {
                  bVar13 = bVar13 | 1;
                }
                if ((bVar13 != 0) &&
                   (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)))) {
                  snprintf(local_828,0x800,"Pool %d stratum share submission lag time %d seconds",
                           *param_1,tVar4 - piVar3[0xb]);
                  FUN_0001dd98(6,local_828,0);
                }
                goto LAB_00037200;
              }
              piVar3 = __errno_location();
              iVar2 = *piVar3;
              uVar8 = 0x1e86;
              pcVar12 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
              goto LAB_000377b8;
            }
            iVar18 = FUN_0002cc78(param_1,param_1 + 0x18);
            if ((iVar18 == 0) && (iVar18 = FUN_00030008(param_1), iVar18 != 0)) {
              if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (3 < DAT_00067848)))) {
                snprintf(local_828,0x800,"Pool %d stratum share submission failure",*param_1);
                FUN_0001dd98(4,local_828,0);
              }
              DAT_00072dbc = DAT_00072dbc + 1;
              param_1[0x21] = param_1[0x21] + 1;
            }
            if (DAT_00074f94 != '\0') {
              if (DAT_000686f1 == 0) goto LAB_000379d8;
              if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7))
              goto LAB_00037970;
              builtin_strncpy(local_828,"Lowmem option prevents resubmitting stra",0x28);
              uStack_800._0_1_ = 't';
              uStack_800._1_1_ = 'u';
              uStack_800._2_1_ = 'm';
              uStack_800._3_1_ = ' ';
              builtin_strncpy(acStack_7fc,"shar",4);
              local_7f8._0_1_ = 'e';
              local_7f8._1_1_ = '\0';
              FUN_0001dd98(7,local_828,0);
              break;
            }
            iVar18 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x35));
            if (iVar18 != 0) {
              piVar3 = __errno_location();
              iVar2 = *piVar3;
              uVar8 = 0x1e9f;
              pcVar12 = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
              goto LAB_000377b8;
            }
            __rwlock = (pthread_rwlock_t *)(param_1 + 0x3b);
            iVar18 = pthread_rwlock_rdlock(__rwlock);
            if (iVar18 != 0) {
              piVar3 = __errno_location();
              iVar2 = *piVar3;
              uVar8 = 0x1e9f;
              pcVar12 = "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d";
              goto LAB_000377b8;
            }
            iVar18 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x35));
            if (iVar18 != 0) {
              piVar3 = __errno_location();
              iVar2 = *piVar3;
              uVar8 = 0x1e9f;
              pcVar12 = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
              goto LAB_000377b8;
            }
            if (((char *)param_1[0x9d] == (char *)0x0) ||
               (iVar18 = strcmp(*(char **)(local_c68 + 0x140),(char *)param_1[0x9d]), iVar18 != 0))
            {
              iVar18 = pthread_rwlock_unlock(__rwlock);
              if (iVar18 != 0) {
LAB_00037924:
                piVar3 = __errno_location();
                iVar2 = *piVar3;
                uVar8 = 0x1ea1;
                pcVar12 = "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d";
                goto LAB_000377b8;
              }
              (*DAT_0006796c)();
              if (DAT_000686f1 == 0) goto LAB_000379d8;
              if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7))
              goto LAB_00037970;
              builtin_strncpy(local_828,"No matching session id for resubmitting ",0x28);
              uStack_800._0_1_ = 's';
              uStack_800._1_1_ = 't';
              uStack_800._2_1_ = 'r';
              uStack_800._3_1_ = 'a';
              builtin_strncpy(acStack_7fc,"tum ",4);
              local_7f8._0_1_ = 's';
              local_7f8._1_1_ = 'h';
              local_7f8._2_1_ = 'a';
              local_7f8._3_1_ = 'r';
              local_7f4 = 0x65;
              FUN_0001dd98(7,local_828,0);
              break;
            }
            iVar18 = pthread_rwlock_unlock(__rwlock);
            if (iVar18 != 0) goto LAB_00037924;
            (*DAT_0006796c)();
            sleep(2);
          }
          if (DAT_000686f1 != 0) {
            if (DAT_00072da0 == '\0') {
LAB_00037970:
              if ((DAT_000686f0 == '\0') && (DAT_00067848 < 7)) goto LAB_000379d8;
            }
            builtin_strncpy(local_828,"Failed to submit stratum share, discardi",0x28);
            uStack_800._0_1_ = 'n';
            uStack_800._1_1_ = 'g';
            uStack_800._2_1_ = '\0';
            FUN_0001dd98(7,local_828,0);
          }
LAB_000379d8:
          FUN_0002a76c(&local_c68,"cgminer.c","stratum_sthread",0x1eb0);
          free(piVar3);
          param_1[0x1e] = param_1[0x1e] + 1;
          bVar24 = 0xfffffffe < DAT_000762d8;
          DAT_000762d8 = DAT_000762d8 + 1;
          DAT_000762dc = DAT_000762dc + (uint)bVar24;
LAB_00037200:
          iVar18 = iVar2;
          iVar19 = iVar9;
          iVar20 = iVar14;
        }
      }
      else {
        if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
LAB_00037680:
          if (2 < DAT_00067848) goto LAB_00037630;
        }
        else {
          snprintf(local_828,0x800,"Pool %d asking for inappropriately long nonce2 length %d",
                   *param_1,*(uint *)(local_c68 + 0x130));
          FUN_0001dd98(3,local_828,0);
          if ((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) goto LAB_00037680;
LAB_00037630:
          builtin_strncpy(local_828,"Not attempting to submit shares",0x20);
          FUN_0001dd98(3,local_828,0);
        }
        FUN_0002a76c(&local_c68,"cgminer.c","stratum_sthread",0x1e31);
      }
      cVar1 = *(char *)((int)param_1 + 0x69);
      iVar2 = param_1[0xba];
    }
    pcVar23 = "Stratum q returned empty work";
    pcVar12 = local_828;
    local_c68 = 0;
  }
  uVar8 = *(undefined4 *)(pcVar23 + 4);
  uVar11 = *(undefined4 *)(pcVar23 + 8);
  uVar17 = *(undefined4 *)(pcVar23 + 0xc);
  *(undefined4 *)pcVar12 = *(undefined4 *)pcVar23;
  *(undefined4 *)(pcVar12 + 4) = uVar8;
  *(undefined4 *)(pcVar12 + 8) = uVar11;
  *(undefined4 *)(pcVar12 + 0xc) = uVar17;
  uVar8 = *(undefined4 *)(pcVar23 + 0x14);
  uVar11 = *(undefined4 *)(pcVar23 + 0x18);
  uVar17 = *(undefined4 *)(pcVar23 + 0x1c);
  *(undefined4 *)(pcVar12 + 0x10) = *(undefined4 *)(pcVar23 + 0x10);
  *(undefined4 *)(pcVar12 + 0x14) = uVar8;
  *(undefined4 *)(pcVar12 + 0x18) = uVar11;
  *(short *)(pcVar12 + 0x1c) = (short)uVar17;
  FUN_0001dd98(3,local_828,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

