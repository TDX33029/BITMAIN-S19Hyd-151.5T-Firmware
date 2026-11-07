// FUN_000214d4 @ 000214d4  size=944  callers=4
// program: cgminer


bool FUN_000214d4(int *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  pthread_mutex_t *__mutex;
  char local_818 [28];
  undefined4 uStack_7fc;
  char local_7f8 [2020];
  
  if (((DAT_00072ed8 != '\0') && (DAT_000686f1 != '\0')) &&
     ((DAT_00072da0 != '\0' || ((DAT_000686f0 != '\0' || (6 < DAT_00067848)))))) {
    snprintf(local_818,0x800,"SEND: %s",param_2);
    FUN_0001dd98(7,local_818,0);
  }
  __mutex = (pthread_mutex_t *)(param_1 + 0xb4);
  iVar1 = pthread_mutex_lock(__mutex);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    snprintf(local_818,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar2,"util.c",
             "stratum_send",0x6af);
    FUN_0001dd98(3,local_818,1);
    FUN_0003c34c(1);
  }
  if (*(char *)((int)param_1 + 0x291) == '\0') {
    iVar1 = pthread_mutex_unlock(__mutex);
    if (iVar1 == 0) {
      (*DAT_0006796c)();
      goto LAB_00021610;
    }
    iVar1 = 3;
LAB_00021548:
    piVar2 = __errno_location();
    snprintf(local_818,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar2,"util.c",
             "stratum_send",0x6b5);
    FUN_0001dd98(3,local_818,1);
    FUN_0003c34c(1);
  }
  else {
    iVar1 = FUN_0001eae0(param_1,param_2,param_3);
    iVar3 = pthread_mutex_unlock(__mutex);
    if (iVar3 != 0) goto LAB_00021548;
  }
  (*DAT_0006796c)();
  if (iVar1 == 2) {
    if ((DAT_000686f1 != '\0') &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      builtin_strncpy(local_818,"Failed to send in stratum_se",0x1c);
      uStack_7fc = CONCAT13(uStack_7fc._3_1_,0x646e);
      FUN_0001dd98(7,local_818,0);
      FUN_00021370(param_1);
      return false;
    }
  }
  else {
    if (iVar1 == 3) {
LAB_00021610:
      if ((DAT_000686f1 != '\0') &&
         (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
        builtin_strncpy(local_818,"Stratum send failed due to n",0x1c);
        uStack_7fc._0_1_ = 'o';
        uStack_7fc._1_1_ = ' ';
        uStack_7fc._2_1_ = 'p';
        uStack_7fc._3_1_ = 'o';
        builtin_strncpy(local_7f8,"ol stratum_active",0x12);
        FUN_0001dd98(7,local_818,0);
      }
      return false;
    }
    if (iVar1 != 1) {
      return iVar1 == 0;
    }
    if ((DAT_000686f1 != '\0') &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (6 < DAT_00067848)))) {
      snprintf(local_818,0x800,"Write select failed on pool %d sock",*param_1);
      FUN_0001dd98(7,local_818,0);
    }
  }
  FUN_00021370(param_1);
  return false;
}

