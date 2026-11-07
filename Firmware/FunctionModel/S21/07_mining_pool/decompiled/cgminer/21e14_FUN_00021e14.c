// FUN_00021e14 @ 00021e14  size=3540  callers=2
// program: cgminer


uint FUN_00021e14(int *param_1)

{
  bool bVar1;
  bool bVar2;
  size_t sVar3;
  int iVar4;
  void *__ptr;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  char *__s;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int local_2924 [23];
  char acStack_28c8 [160];
  char local_2828 [36];
  uint local_2804;
  char acStack_2800 [4];
  undefined4 uStack_27fc;
  undefined2 uStack_27f8;
  undefined1 local_27f6;
  char acStack_2028 [8196];
  
  FUN_0001f76c();
  iVar12 = DAT_00072dcc;
  if ((char *)param_1[0xa3] == (char *)0x0) {
    DAT_00072dcc = DAT_00072dcc + 1;
    sprintf(acStack_2028,"{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"%s/%s\"]}",
            iVar12,&DAT_0006a36c,&DAT_0006a26c);
  }
  else {
    DAT_00072dcc = DAT_00072dcc + 1;
    sprintf(acStack_2028,
            "{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": [\"%s/%s\", \"%s\"]}",iVar12
            ,&DAT_0006a36c,&DAT_0006a26c,(char *)param_1[0xa3]);
  }
  iVar12 = 0;
  bVar1 = false;
LAB_00021e90:
  sVar3 = strlen(acStack_2028);
  iVar4 = FUN_0001eae0(param_1,acStack_2028,sVar3);
  if (iVar4 != 0) goto code_r0x00021eb0;
  iVar4 = FUN_0001f2cc(param_1[0x93],0x3c);
  if (iVar4 == 0) {
    if (DAT_000686f1 == 0) goto LAB_00021ec4;
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7)) goto LAB_000225ec;
    builtin_strncpy(local_2828,"Timed out waiting for response in in",0x24);
    local_2804._0_1_ = 'i';
    local_2804._1_1_ = 't';
    local_2804._2_1_ = 'i';
    local_2804._3_1_ = 'a';
    builtin_strncpy(acStack_2800,"te_s",4);
    uStack_27fc._0_1_ = 't';
    uStack_27fc._1_1_ = 'r';
    uStack_27fc._2_1_ = 'a';
    uStack_27fc._3_1_ = 't';
    uStack_27f8 = 0x6d75;
    local_27f6 = 0;
    FUN_0001dd98(7,local_2828,0);
    goto LAB_00022268;
  }
  __ptr = (void *)FUN_00021888(param_1);
  if (__ptr == (void *)0x0) goto LAB_00022268;
  iVar12 = FUN_00047e04(__ptr,0,local_2924);
  free(__ptr);
  if (iVar12 == 0) {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
      snprintf(local_2828,0x800,"JSON decode failed(%d): %s",local_2924[0],acStack_28c8);
      FUN_0001dd98(6,local_2828,0);
    }
  }
  else {
    piVar11 = (int *)FUN_00048cac(iVar12,"result");
    piVar5 = (int *)FUN_00048cac(iVar12,"error");
    if ((piVar11 == (int *)0x0) || (*piVar11 == 7)) {
      if (piVar5 != (int *)0x0) goto LAB_0002240c;
      pcVar6 = malloc(0x11);
      if (pcVar6 != (char *)0x0) {
        builtin_strncpy(pcVar6,"(unknown reason)",0x11);
      }
    }
    else {
      if ((piVar5 == (int *)0x0) || (*piVar5 == 7)) {
        piVar5 = (int *)FUN_00049034(piVar11,0);
        if ((piVar5 != (int *)0x0) && ((*piVar5 == 1 && (iVar4 = FUN_00049018(), 0 < iVar4)))) {
          iVar14 = 0;
          do {
            piVar7 = (int *)FUN_00049034(piVar5,iVar14);
            if ((piVar7 == (int *)0x0) || (*piVar7 != 1)) break;
            pcVar6 = (char *)FUN_0001f360(piVar7,0);
            if ((pcVar6 != (char *)0x0) &&
               (iVar9 = strncasecmp(pcVar6,"mining.notify",0xd), iVar9 == 0)) {
              pcVar6 = (char *)FUN_0001f3c4(piVar7,1);
              if (pcVar6 != (char *)0x0) goto LAB_00022924;
              break;
            }
            iVar14 = iVar14 + 1;
          } while (iVar4 != iVar14);
        }
        pcVar6 = (char *)0x0;
        if ((DAT_000686f1 != 0) &&
           (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) ||
            (pcVar6 = (char *)0x0, 6 < DAT_00067848)))) {
          pcVar6 = (char *)0x0;
          builtin_strncpy(local_2828,"Failed to get sessionid in initiate_",0x24);
          local_2804._0_1_ = 's';
          local_2804._1_1_ = 't';
          local_2804._2_1_ = 'r';
          local_2804._3_1_ = 'a';
          builtin_strncpy(acStack_2800,"tum",4);
          FUN_0001dd98(7,local_2828,0);
        }
LAB_00022924:
        __s = (char *)FUN_0001f3c4(piVar11,1);
        uVar8 = FUN_0001f444(__s,"initiate_stratum",0xd9f);
        if (uVar8 != 0) {
          FUN_00049034(piVar11,2);
          iVar4 = FUN_0004943c();
          if (0xe < iVar4 - 2U) {
            if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
              builtin_strncpy(local_2828,"Failed to get valid n2size in initia",0x24);
              local_2804._0_1_ = 't';
              local_2804._1_1_ = 'e';
              local_2804._2_1_ = '_';
              local_2804._3_1_ = 's';
              builtin_strncpy(acStack_2800,"trat",4);
              uStack_27fc._0_1_ = 'u';
              uStack_27fc._1_1_ = 'm';
              uStack_27fc._2_1_ = '\0';
              FUN_0001dd98(6,local_2828,0);
            }
            free(pcVar6);
            free(__s);
            goto LAB_00022468;
          }
          if (((pcVar6 != (char *)0x0) && ((char *)param_1[0xa3] != (char *)0x0)) &&
             ((iVar14 = strcmp(pcVar6,(char *)param_1[0xa3]), iVar14 == 0 &&
              (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (4 < DAT_00067848)))))) {
            snprintf(local_2828,0x800,
                     "Pool %d successfully negotiated resume with the same session ID",*param_1);
            FUN_0001dd98(5,local_2828,0);
          }
          iVar14 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x35));
          if (iVar14 != 0) {
            FUN_0001f708("initiate_stratum",0xdb3);
          }
          iVar14 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x3b));
          if (iVar14 != 0) {
            piVar11 = __errno_location();
            snprintf(local_2828,0x800,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar11,
                     "util.c","initiate_stratum",0xdb3);
            FUN_0001dd98(3,local_2828,1);
            FUN_0003c34c(1);
          }
          free((void *)param_1[0x9d]);
          free((void *)param_1[0xa3]);
          param_1[0xa3] = (int)pcVar6;
          param_1[0x9d] = (int)__s;
          sVar3 = strlen(__s);
          param_1[0x18b] = sVar3 >> 1;
          free((void *)param_1[0x9e]);
          iVar14 = FUN_0001f8e8(param_1[0x18b],1,"util.c","initiate_stratum",0xdba);
          param_1[0x9e] = iVar14;
          FUN_0001fb7c(iVar14,param_1[0x9d],param_1[0x18b]);
          param_1[0xa2] = iVar4;
          iVar4 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x3b));
          if (iVar4 != 0) {
            piVar11 = __errno_location();
            snprintf(local_2828,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar11,
                     "util.c","initiate_stratum",0xdbd);
            FUN_0001dd98(3,local_2828,1);
            FUN_0003c34c(1);
          }
          iVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x35));
          if (iVar4 != 0) {
            piVar11 = __errno_location();
            snprintf(local_2828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar11,
                     "util.c","initiate_stratum",0xdbd);
            FUN_0001dd98(3,local_2828,1);
            FUN_0003c34c(1);
          }
          (*DAT_0006796c)();
          if (((pcVar6 != (char *)0x0) && (DAT_000686f1 != 0)) &&
             ((DAT_00072da0 != '\0' || ((DAT_000686f0 != '\0' || (6 < DAT_00067848)))))) {
            snprintf(local_2828,0x800,"Pool %d stratum session id: %s",*param_1,
                     (char *)param_1[0xa3]);
            FUN_0001dd98(7,local_2828,0);
          }
          *(undefined1 *)((int)param_1 + 0x291) = 1;
          if (param_1[0x90] == 0) {
            param_1[0x90] = param_1[0x9a];
          }
          uVar10 = (uint)DAT_00072ed8;
          param_1[0x1ca] = 0;
          param_1[0x1cb] = 0;
          param_1[0x1cc] = 0;
          param_1[0x1cd] = 0x3ff00000;
          if (((uVar10 != 0) && (uVar13 = (uint)DAT_000686f1, uVar8 = uVar10, uVar13 != 0)) &&
             ((uVar8 = uVar13, DAT_00072da0 != '\0' ||
              ((DAT_000686f0 != '\0' || (6 < DAT_00067848)))))) {
            snprintf(local_2828,0x800,
                     "Pool %d confirmed mining.subscribe with extranonce1 %s extran2size %d",
                     *param_1,(char *)param_1[0x9d],param_1[0xa2]);
            FUN_0001dd98(7,local_2828,0);
          }
          goto LAB_000221ac;
        }
        if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
          builtin_strncpy(local_2828,"Failed to get valid nonce1 in initia",0x24);
          local_2804._0_1_ = 't';
          local_2804._1_1_ = 'e';
          local_2804._2_1_ = '_';
          local_2804._3_1_ = 's';
          builtin_strncpy(acStack_2800,"trat",4);
          uStack_27fc._0_1_ = 'u';
          uStack_27fc._1_1_ = 'm';
          uStack_27fc._2_1_ = '\0';
          FUN_0001dd98(6,local_2828,0);
        }
        free(pcVar6);
        goto LAB_00022468;
      }
LAB_0002240c:
      pcVar6 = (char *)FUN_00045c20(piVar5,3);
    }
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
      snprintf(local_2828,0x800,"JSON-RPC decode failed: %s",pcVar6);
      FUN_0001dd98(6,local_2828,0);
    }
    free(pcVar6);
  }
LAB_00022468:
  bVar1 = (bool)(bVar1 ^ 1);
  if (!bVar1) goto LAB_00022268;
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x35));
  if (iVar4 != 0) {
    piVar11 = __errno_location();
    snprintf(local_2828,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar11,"util.c",
             "initiate_stratum",0xdd9);
    FUN_0001dd98(3,local_2828,1);
    FUN_0003c34c(1);
  }
  iVar4 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x3b));
  if (iVar4 != 0) {
    piVar11 = __errno_location();
    snprintf(local_2828,0x800,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar11,"util.c",
             "initiate_stratum",0xdd9);
    FUN_0001dd98(3,local_2828,1);
    FUN_0003c34c(1);
  }
  free((void *)param_1[0xa3]);
  free((void *)param_1[0x9d]);
  param_1[0x9d] = 0;
  param_1[0xa3] = 0;
  iVar4 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x3b));
  if (iVar4 != 0) {
    piVar11 = __errno_location();
    snprintf(local_2828,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar11,"util.c"
             ,"initiate_stratum",0xddd);
    FUN_0001dd98(3,local_2828,1);
    FUN_0003c34c(1);
  }
  iVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x35));
  if (iVar4 != 0) {
    piVar11 = __errno_location();
    snprintf(local_2828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar11,"util.c",
             "initiate_stratum",0xddd);
    FUN_0001dd98(3,local_2828,1);
    FUN_0003c34c(1);
  }
  (*DAT_0006796c)();
  if ((DAT_000686f1 != 0) &&
     (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
    builtin_strncpy(local_2828,"Failed to resume stratum, trying afr",0x24);
    local_2804._0_1_ = 'e';
    local_2804._1_1_ = 's';
    local_2804._2_1_ = 'h';
    local_2804._3_1_ = '\0';
    FUN_0001dd98(7,local_2828,0);
  }
  if ((iVar12 != 0) && (*(int *)(iVar12 + 4) != -1)) {
    piVar11 = (int *)(iVar12 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      FUN_000495e4(iVar12);
    }
  }
  FUN_0001f76c(param_1);
  iVar4 = DAT_00072dcc;
  DAT_00072dcc = DAT_00072dcc + 1;
  sprintf(acStack_2028,"{\"id\": %d, \"method\": \"mining.subscribe\", \"params\": []}",iVar4);
  goto LAB_00021e90;
code_r0x00021eb0:
  if (DAT_000686f1 == 0) goto LAB_00021ec4;
  if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 7)) {
LAB_000225ec:
    if ((DAT_000686f0 == '\0') && (DAT_00067848 < 7)) goto LAB_00021ec4;
  }
  else {
    builtin_strncpy(local_2828,"Failed to send s in initiate_stratum",0x24);
    local_2804 = local_2804 & 0xffffff00;
    FUN_0001dd98(7,local_2828,0);
LAB_00022268:
    if (DAT_000686f1 == 0) goto LAB_00021ec4;
    if (DAT_00072da0 == '\0') goto LAB_000225ec;
  }
  builtin_strncpy(local_2828,"Initiate stratum failed",0x18);
  FUN_0001dd98(7,local_2828,0);
LAB_00021ec4:
  if (iVar12 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
LAB_000221ac:
    if (*(int *)(iVar12 + 4) != -1) {
      piVar11 = (int *)(iVar12 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar11;
        bVar1 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar1);
      *piVar11 = iVar4 + -1;
      if (iVar4 + -1 == 0) {
        FUN_000495e4(iVar12);
        return uVar8;
      }
    }
  }
  return uVar8;
}

