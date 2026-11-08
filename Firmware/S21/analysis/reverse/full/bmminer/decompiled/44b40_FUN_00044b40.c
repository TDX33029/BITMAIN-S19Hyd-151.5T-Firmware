// FUN_00044b40 @ 00044b40  size=1272  callers=1
// program: bmminer


undefined4 FUN_00044b40(void *param_1,uint param_2)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  uint uVar2;
  int *__ptr;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  void *local_202c;
  char local_2028 [8196];
  
  __mutex = DAT_00a5f250;
  local_202c = (void *)0x0;
  if ((DAT_008c702e != '\0') &&
     (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
    snprintf(local_2028,0x2000,"%s, rec job data %p size: %d\n","bitmain_update_job_cb",param_1,
             param_2);
    FUN_0004948c(7,local_2028,0);
  }
  uVar2 = FUN_0004e8a8();
  if (uVar2 < 2) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9440);
    if ((DAT_000c945c == (void *)0x0) || (DAT_000c9458 < param_2)) {
      DAT_000c945c = realloc(DAT_000c945c,param_2);
    }
    memcpy(DAT_000c945c,param_1,param_2);
    DAT_000c9458 = param_2;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9440);
    return 0;
  }
  __ptr = calloc(1,0x748);
  iVar3 = FUN_00044854(__ptr,param_1,param_2);
  if (iVar3 == 0) {
    if ((char)__ptr[0xa4] == '\0') {
      builtin_strncpy(local_2028,"Bitmain S9 has to use stratum pools",0x24);
      FUN_0004948c(3,local_2028,1);
    }
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)((int)__mutex + 0x70));
    if (iVar3 != 0) {
      piVar4 = __errno_location();
      snprintf(local_2028,0x2000,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,
               "bmminer.c","bitmain_update_job_cb",0x99c);
      FUN_0004948c(3,local_2028,1);
    }
    iVar3 = pthread_mutex_lock(__mutex);
    if (iVar3 != 0) {
      piVar4 = __errno_location();
      snprintf(local_2028,0x2000,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,
               "bmminer.c","bitmain_update_job_cb",0x99e);
      FUN_0004948c(3,local_2028,1);
    }
    iVar3 = pthread_rwlock_wrlock((pthread_rwlock_t *)(__mutex + 1));
    if (iVar3 != 0) {
      piVar4 = __errno_location();
      snprintf(local_2028,0x2000,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,
               "bmminer.c","bitmain_update_job_cb",0x99e);
      FUN_0004948c(3,local_2028,1);
    }
    __mutex[7].__data.__lock = *__ptr;
    FUN_0005095c((int)__mutex + 0x1684,(int)__mutex + 0xf3c);
    *(undefined4 *)((int)__mutex + 0x1dd8) = *(undefined4 *)((int)__mutex + 0x1dd4);
    FUN_0005095c((int)__mutex + 0xf3c,(int)__mutex + 0x7f4);
    *(int *)((int)__mutex + 0x1dd4) = __mutex[0x13e].__data.__lock;
    FUN_0005095c((int)__mutex + 0x7f4,(int)__mutex + 0xac);
    __mutex[0x13e].__data.__lock = *(int *)((int)__mutex + 0x1dcc);
    FUN_0005095c((int)__mutex + 0xac,__ptr);
    DAT_000be4f8 = DAT_000be4f8 + 1;
    *(int *)((int)__mutex + 0x1dcc) = DAT_000be4f8;
    iVar3 = pthread_rwlock_unlock((pthread_rwlock_t *)(__mutex + 1));
    if (iVar3 != 0) {
      piVar4 = __errno_location();
      snprintf(local_2028,0x2000,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar4,
               "bmminer.c","bitmain_update_job_cb",0x9ad);
      FUN_0004948c(3,local_2028,1);
    }
    iVar3 = pthread_mutex_unlock(__mutex);
    if (iVar3 != 0) {
      piVar4 = __errno_location();
      snprintf(local_2028,0x2000,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar4,
               "bmminer.c","bitmain_update_job_cb",0x9ad);
      FUN_0004948c(3,local_2028,1);
    }
    (*DAT_000be768)();
    FUN_00050180(&local_202c,__ptr,*(undefined4 *)((int)__mutex + 0x1dcc));
    pthread_mutex_lock((pthread_mutex_t *)&DAT_00944ae8);
    FUN_00050414(local_202c);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944ae8);
    free(local_202c);
    iVar3 = pthread_mutex_unlock((pthread_mutex_t *)((int)__mutex + 0x70));
    if (iVar3 != 0) {
      piVar4 = __errno_location();
      snprintf(local_2028,0x2000,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar4,
               "bmminer.c","bitmain_update_job_cb",0x9b7);
      FUN_0004948c(3,local_2028,1);
    }
    (*DAT_000be768)();
    if (0 < __ptr[0x1af]) {
      iVar3 = 0;
      do {
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        free(*(void **)(__ptr[0xad] + iVar1));
      } while (iVar3 < __ptr[0x1af]);
    }
    free((void *)__ptr[0xad]);
    free((void *)__ptr[0x18c]);
    free((void *)__ptr[0xac]);
    free((void *)__ptr[0x9d]);
    free(__ptr);
    uVar5 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    free(__ptr);
  }
  return uVar5;
}

