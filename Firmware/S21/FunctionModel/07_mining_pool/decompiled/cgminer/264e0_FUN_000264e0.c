// FUN_000264e0 @ 000264e0  size=3028  callers=3
// program: cgminer


uint FUN_000264e0(int *param_1,undefined4 param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char *__s1;
  uint uVar7;
  undefined4 uVar8;
  size_t sVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  uint in_fpscr;
  undefined4 extraout_s1;
  double param4;
  double dVar13;
  undefined8 in_stack_ffffdeb0;
  undefined8 uVar14;
  int local_2134 [23];
  char acStack_20d8 [160];
  char local_2038 [24];
  undefined4 uStack_2020;
  char acStack_201c [8168];
  
  pcVar11 = (char *)((ulonglong)in_stack_ffffdeb0 >> 0x20);
  iVar3 = FUN_00047e04(param_2,0,local_2134);
  if (iVar3 == 0) {
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 6)) {
      return 0;
    }
    snprintf(local_2038,0x800,"JSON decode failed(%d): %s",local_2134[0],acStack_20d8);
    FUN_0001dd98(6,local_2038,0);
    return 0;
  }
  iVar4 = FUN_00048cac(iVar3,"method");
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00048cac(iVar3,"error");
    piVar6 = (int *)FUN_00048cac(iVar3,"params");
    if ((piVar5 != (int *)0x0) && (*piVar5 != 7)) {
      pcVar11 = (char *)FUN_00045c20(piVar5,3);
      if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (5 < DAT_00067848)))) {
        snprintf(local_2038,0x800,"JSON-RPC method decode failed: %s",pcVar11);
        FUN_0001dd98(6,local_2038,0);
      }
      uVar12 = 0;
      free(pcVar11);
      goto LAB_00026634;
    }
    __s1 = (char *)FUN_000491e0(iVar4);
    if (__s1 != (char *)0x0) {
      iVar4 = strncasecmp(__s1,"mining.multi_version",0x14);
      if (iVar4 == 0) {
        *(undefined1 *)(param_1 + 0xa5) = 1;
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
          builtin_strncpy(local_2038,"Pool support multi versi",0x18);
          uStack_2020._0_1_ = 'o';
          uStack_2020._1_1_ = 'n';
          uStack_2020._2_1_ = '\0';
          FUN_0001dd98(6,local_2038,0);
        }
        uVar12 = 0;
        piVar5 = param_1 + 0xa7;
        while( true ) {
          uVar7 = FUN_00049018(piVar6);
          if (uVar7 <= uVar12) break;
          FUN_00049034(piVar6,uVar12);
          iVar4 = FUN_0004943c();
          *piVar5 = iVar4;
          uVar12 = uVar12 + 1;
          piVar5 = piVar5 + 1;
        }
        goto LAB_0002694c;
      }
      iVar4 = strncasecmp(__s1,"mining.notify",0xd);
      if (iVar4 == 0) {
        uVar12 = FUN_00023668(param_1,piVar6);
        if (uVar12 != 0) {
          *(undefined1 *)((int)param_1 + 0x293) = 1;
          goto LAB_00026634;
        }
      }
      else {
        iVar4 = strncasecmp(__s1,"mining.set_version_mask",0x17);
        if (iVar4 != 0) {
          iVar4 = strncasecmp(__s1,"mining.set_difficulty",0x15);
          if (iVar4 == 0) {
            FUN_00049034(piVar6);
            uVar8 = FUN_00049578();
            param4 = (double)CONCAT44(extraout_s1,uVar8);
            in_fpscr = in_fpscr & 0xfffffff;
            if (param4 != 0.0) {
              iVar4 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x35));
              if (iVar4 != 0) {
                FUN_0001f708("parse_diff",0x902);
              }
              iVar4 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x3b));
              if (iVar4 != 0) {
                piVar5 = __errno_location();
                pcVar11 = "parse_diff";
                snprintf(local_2038,0x800,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar5
                         ,"util.c","parse_diff",0x902);
                FUN_0001dd98(3,local_2038,1);
                FUN_0003c34c(1);
              }
              dVar13 = *(double *)(param_1 + 0x1ca);
              *(double *)(param_1 + 0x1ca) = param4;
              uVar12 = in_fpscr & 0xfffffff | (uint)(dVar13 < 0.0) << 0x1f |
                       (uint)(dVar13 == 0.0) << 0x1e;
              uVar7 = uVar12 | (uint)NAN(dVar13) << 0x1c;
              bVar2 = (byte)(uVar12 >> 0x18);
              if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar7 >> 0x1c) & 1)) {
                dVar13 = *(double *)(param_1 + 0x1cc);
                *(double *)(param_1 + 0x1cc) = param4;
              }
              iVar4 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x3b));
              if (iVar4 != 0) {
                piVar5 = __errno_location();
                pcVar11 = "parse_diff";
                snprintf(local_2038,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
                         *piVar5,"util.c","parse_diff",0x90f);
                FUN_0001dd98(3,local_2038,1);
                FUN_0003c34c(1);
              }
              iVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x35));
              if (iVar4 != 0) {
                piVar5 = __errno_location();
                pcVar11 = "parse_diff";
                snprintf(local_2038,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
                         *piVar5,"util.c","parse_diff",0x90f);
                FUN_0001dd98(3,local_2038,1);
                FUN_0003c34c(1);
              }
              (*DAT_0006796c)();
              if (param4 == dVar13) {
                uVar12 = (uint)DAT_000686f1;
                if ((uVar12 != 0) &&
                   (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
                  snprintf(local_2038,0x800,"Pool %d difficulty set to %f",*param_1,param4);
                  FUN_0001dd98(7,local_2038,0);
                  goto LAB_00026634;
                }
              }
              else {
                dVar13 = (double)VectorSignedToFloat((int)(longlong)param4,
                                                     (byte)((uVar7 & 0xfffffff) >> 0x16) & 3);
                if (param4 == dVar13) {
                  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
                    uVar14 = CONCAT44(pcVar11,(int)(longlong)param4);
                    iVar4 = *param_1;
                    pcVar11 = "Pool %d difficulty changed to %d";
LAB_00026a74:
                    uVar12 = 1;
                    snprintf(local_2038,0x800,pcVar11,iVar4,uVar14);
                    FUN_0001dd98(5,local_2038,0);
                    goto LAB_00026634;
                  }
                }
                else if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
                  snprintf(local_2038,0x800,"Pool %d difficulty changed to %.1f",*param_1,param4);
                  uVar12 = 1;
                  FUN_0001dd98(5,local_2038,0);
                  goto LAB_00026634;
                }
              }
LAB_0002694c:
              uVar12 = 1;
              goto LAB_00026634;
            }
          }
          else {
            iVar4 = strncasecmp(__s1,"mining.set_extranonce",0x15);
            if (iVar4 == 0) {
              pcVar11 = (char *)FUN_0001f3c4(piVar6);
              uVar12 = FUN_0001f444(pcVar11,"parse_extranonce",0x92d);
              if (uVar12 != 0) {
                FUN_00049034(piVar6,1);
                iVar4 = FUN_0004943c();
                if (iVar4 == 0) {
                  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
                    builtin_strncpy(local_2038,"Failed to get valid n2si",0x18);
                    uStack_2020._0_1_ = 'z';
                    uStack_2020._1_1_ = 'e';
                    uStack_2020._2_1_ = ' ';
                    uStack_2020._3_1_ = 'i';
                    builtin_strncpy(acStack_201c,"n parse_extranonce",0x13);
                    FUN_0001dd98(6,local_2038,0);
                  }
                  uVar12 = 0;
                  free(pcVar11);
                  goto LAB_00026634;
                }
                iVar10 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x35));
                if (iVar10 != 0) {
                  FUN_0001f708("parse_extranonce",0x939);
                }
                iVar10 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x3b));
                if (iVar10 != 0) {
                  piVar5 = __errno_location();
                  snprintf(local_2038,0x800,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
                           *piVar5,"util.c","parse_extranonce",0x939);
                  FUN_0001dd98(3,local_2038,1);
                  FUN_0003c34c(1);
                }
                free((void *)param_1[0x9d]);
                param_1[0x9d] = (int)pcVar11;
                sVar9 = strlen(pcVar11);
                param_1[0x18b] = sVar9 >> 1;
                free((void *)param_1[0x9e]);
                iVar10 = FUN_0001f8e8(param_1[0x18b],1,"util.c","parse_extranonce",0x93e);
                param_1[0x9e] = iVar10;
                if (iVar10 == 0) {
                  snprintf(local_2038,0x800,"Failed to calloc pool->nonce1bin in %s %s():%d",
                           "util.c","parse_extranonce",0x940);
                  FUN_0001dd98(3,local_2038,1);
                  FUN_0003c34c(1);
                }
                FUN_0001fb7c(param_1[0x9e],param_1[0x9d],param_1[0x18b]);
                param_1[0xa2] = iVar4;
                iVar4 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x3b));
                if (iVar4 != 0) {
                  piVar5 = __errno_location();
                  snprintf(local_2038,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
                           *piVar5,"util.c","parse_extranonce",0x943);
                  FUN_0001dd98(3,local_2038,1);
                  FUN_0003c34c(1);
                }
                FUN_0001f68c((pthread_mutex_t *)(param_1 + 0x35),"parse_extranonce",0x943);
                (*DAT_0006796c)();
                if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)) {
                  snprintf(local_2038,0x800,"Pool %d extranonce change requested",*param_1);
                  FUN_0001dd98(5,local_2038,0);
                  goto LAB_00026634;
                }
                goto LAB_0002694c;
              }
              if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
                builtin_strncpy(local_2038,"Failed to get valid nonc",0x18);
                uStack_2020._0_1_ = 'e';
                uStack_2020._1_1_ = '1';
                uStack_2020._2_1_ = ' ';
                uStack_2020._3_1_ = 'i';
                builtin_strncpy(acStack_201c,"n parse_extranonce",0x13);
                FUN_0001dd98(6,local_2038,0);
                goto LAB_00026634;
              }
            }
            else {
              iVar4 = strncasecmp(__s1,"client.reconnect",0x10);
              if (iVar4 == 0) {
                uVar12 = FUN_0002610c(param_1,piVar6);
                goto LAB_00026634;
              }
              iVar4 = strncasecmp(__s1,"client.get_version",0x12);
              if (iVar4 == 0) {
                iVar4 = FUN_00048cac(iVar3,&DAT_0004b220);
                if (iVar4 != 0) {
                  FUN_00048cac(iVar3,&DAT_0004b220);
                  uVar8 = FUN_0004943c();
                  pcVar11 = "{\"id\": %d, \"result\": \"cgminer/1.0.0\", \"error\": null}";
LAB_000268e8:
                  sprintf(local_2038,pcVar11,uVar8);
                  sVar9 = strlen(local_2038);
                  uVar12 = FUN_000214d4(param_1,local_2038,sVar9);
                  goto LAB_00026634;
                }
              }
              else {
                iVar4 = strncasecmp(__s1,"client.show_message",0x13);
                if (iVar4 == 0) {
                  if ((piVar6 != (int *)0x0) && (*piVar6 == 1)) {
                    FUN_00049034(piVar6,0);
                    iVar4 = FUN_000491e0();
                    if (iVar4 != 0) {
                      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (4 < DAT_00067848))
                      {
                        uVar14 = CONCAT44(pcVar11,iVar4);
                        pcVar11 = "Pool %d message: %s";
                        iVar4 = *param_1;
                        goto LAB_00026a74;
                      }
                      goto LAB_0002694c;
                    }
                  }
                }
                else {
                  iVar4 = strncasecmp(__s1,"mining.ping",0xb);
                  if (iVar4 == 0) {
                    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
                      snprintf(local_2038,0x800,"Pool %d ping",*param_1);
                      FUN_0001dd98(6,local_2038,0);
                    }
                    iVar4 = FUN_00048cac(iVar3,&DAT_0004b220);
                    if (iVar4 == 0) {
                      uVar12 = 0;
                      goto LAB_00026634;
                    }
                    FUN_00048cac(iVar3,&DAT_0004b220);
                    uVar8 = FUN_0004943c();
                    pcVar11 = "{\"id\": %d, \"result\": \"pong\", \"error\": null}";
                    goto LAB_000268e8;
                  }
                }
              }
            }
          }
          goto LAB_00026630;
        }
        uVar12 = 1;
        FUN_00049034(piVar6);
        uVar8 = FUN_000491e0();
        FUN_00020de0(param_1,uVar8);
      }
      *(char *)((int)param_1 + 0x293) = (char)uVar12;
      goto LAB_00026634;
    }
  }
LAB_00026630:
  uVar12 = 0;
LAB_00026634:
  if (*(int *)(iVar3 + 4) != -1) {
    piVar5 = (int *)(iVar3 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      FUN_000495e4(iVar3);
    }
  }
  return uVar12;
}

