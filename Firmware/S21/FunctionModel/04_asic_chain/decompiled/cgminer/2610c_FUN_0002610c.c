// FUN_0002610c @ 0002610c  size=976  callers=1
// program: cgminer


undefined4 FUN_0002610c(int *param_1,undefined4 param_2)

{
  char *__s;
  char *pcVar1;
  char *__s2;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  undefined1 local_a40 [16];
  char acStack_a30 [248];
  undefined1 auStack_938 [16];
  int local_928;
  int local_924;
  char acStack_920 [256];
  char acStack_820 [2052];
  
  memset(acStack_920,0,0xff);
  FUN_00049034(param_2,0);
  __s = (char *)FUN_000491e0();
  if (__s == (char *)0x0) {
    __s = (char *)param_1[0x9a];
LAB_00026190:
    FUN_00049034(param_2,1);
    iVar2 = FUN_0004943c();
    if (iVar2 == 0) {
      FUN_00049034(param_2,1);
      pcVar6 = (char *)FUN_000491e0();
      piVar7 = (int *)auStack_938;
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)param_1[0x92];
        piVar7 = (int *)auStack_938;
      }
    }
    else {
      pcVar6 = acStack_a30;
      sprintf(pcVar6,"%d",iVar2);
      piVar7 = (int *)local_a40;
    }
    *piVar7 = (int)pcVar6;
    snprintf(acStack_920,0xfe,"%s:%s",__s,(char *)*piVar7);
    iVar2 = FUN_00020a48(acStack_920,&local_928,&local_924);
    if (iVar2 != 0) {
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
        iVar2 = *param_1;
        *piVar7 = (int)acStack_920;
        snprintf(acStack_820,0x800,"Stratum reconnect requested from pool %d to %s",iVar2,
                 (char *)*piVar7);
        FUN_0001dd98(4,acStack_820,0);
      }
      FUN_000317d4(param_1);
      iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xb4));
      if (iVar2 != 0) {
        piVar5 = __errno_location();
        iVar2 = *piVar5;
        *piVar7 = (int)"util.c";
        piVar7[1] = (int)"parse_reconnect";
        piVar7[2] = 0x994;
        snprintf(acStack_820,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",iVar2,
                 (char *)*piVar7,(char *)piVar7[1],piVar7[2]);
        FUN_0001dd98(3,acStack_820,1);
        FUN_0003c34c(1);
      }
      FUN_0001f224(param_1);
      pvVar3 = (void *)param_1[0x9a];
      param_1[0x90] = local_928;
      param_1[0x9a] = local_928;
      free(pvVar3);
      pvVar3 = (void *)param_1[0x92];
      param_1[0x92] = local_924;
      free(pvVar3);
      iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xb4));
      if (iVar2 != 0) {
        piVar5 = __errno_location();
        iVar2 = *piVar5;
        *piVar7 = (int)"util.c";
        piVar7[1] = (int)"parse_reconnect";
        piVar7[2] = 0x99d;
        snprintf(acStack_820,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",iVar2,
                 (char *)*piVar7,(char *)piVar7[1],piVar7[2]);
        FUN_0001dd98(3,acStack_820,1);
        FUN_0003c34c(1);
      }
      (*DAT_0006796c)();
      uVar4 = FUN_00026080(param_1);
      return uVar4;
    }
  }
  else {
    pcVar6 = (char *)param_1[0x9a];
    pcVar1 = strchr(pcVar6,0x2e);
    if (pcVar1 == (char *)0x0) {
      if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
        return 0;
      }
      pcVar1 = "Denied stratum reconnect request for pool without domain \'%s\'";
    }
    else {
      __s2 = strchr(__s,0x2e);
      if (__s2 == (char *)0x0) {
        if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
          return 0;
        }
        pcVar1 = "Denied stratum reconnect request to url without domain \'%s\'";
        pcVar6 = __s;
      }
      else {
        iVar2 = strcmp(pcVar1,__s2);
        if (iVar2 == 0) goto LAB_00026190;
        if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
          return 0;
        }
        pcVar1 = "Denied stratum reconnect request to non-matching domain url \'%s\'";
      }
    }
    snprintf(acStack_820,0x800,pcVar1,pcVar6);
    FUN_0001dd98(3,acStack_820,0);
  }
  return 0;
}

