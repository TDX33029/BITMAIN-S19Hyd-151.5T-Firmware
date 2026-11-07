// FUN_0002ecf8 @ 0002ecf8  size=1224  callers=1
// program: bmminer


undefined4 FUN_0002ecf8(void *param_1,uint param_2)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *local_82c;
  char local_828 [2052];
  
  __mutex = DAT_007208a8;
  local_82c = (void *)0x0;
  if ((DAT_0048d36e != '\0') &&
     (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
    snprintf(local_828,0x800,"%s, rec job data %p size: %d\n","bitmain_update_job_cb",param_1,
             param_2);
    FUN_00032218(7,local_828,0);
  }
  uVar2 = FUN_00036360();
  if (uVar2 < 2) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0008a7a8);
    if ((DAT_0008a7c4 == (void *)0x0) || (DAT_0008a7c0 < param_2)) {
      DAT_0008a7c4 = realloc(DAT_0008a7c4,param_2);
    }
    memcpy(DAT_0008a7c4,param_1,param_2);
    DAT_0008a7c0 = param_2;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a7a8);
    return 0;
  }
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)((int)__mutex + 0x70));
  if (iVar3 != 0) {
    piVar4 = __errno_location();
    snprintf(local_828,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,"bmminer.c",
             "bitmain_update_job_cb",0x8ed);
    FUN_00032218(3,local_828,1);
  }
  piVar4 = calloc(1,0x748);
  FUN_0002ea24(piVar4,param_1,param_2);
  if ((char)piVar4[0xa4] == '\0') {
    builtin_strncpy(local_828,"Bitmain S9 has to use stratum pools",0x24);
    FUN_00032218(3,local_828,1);
  }
  iVar3 = pthread_mutex_lock(__mutex);
  if (iVar3 != 0) {
    piVar5 = __errno_location();
    snprintf(local_828,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar5,"bmminer.c",
             "bitmain_update_job_cb",0x8f8);
    FUN_00032218(3,local_828,1);
  }
  iVar3 = pthread_rwlock_wrlock((pthread_rwlock_t *)(__mutex + 1));
  if (iVar3 != 0) {
    piVar5 = __errno_location();
    snprintf(local_828,0x800,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar5,"bmminer.c",
             "bitmain_update_job_cb",0x8f8);
    FUN_00032218(3,local_828,1);
  }
  __mutex[7].__data.__lock = *piVar4;
  FUN_00037cb4((int)__mutex + 0xf3c,(int)__mutex + 0x7f4);
  *(undefined4 *)((int)__mutex + 0x168c) = *(undefined4 *)((int)__mutex + 0x1688);
  FUN_00037cb4((int)__mutex + 0x7f4,(int)__mutex + 0xac);
  *(undefined4 *)((int)__mutex + 0x1688) = *(undefined4 *)((int)__mutex + 0x1684);
  FUN_00037cb4((int)__mutex + 0xac,piVar4);
  DAT_00087ac8 = DAT_00087ac8 + 1;
  *(int *)((int)__mutex + 0x1684) = DAT_00087ac8;
  iVar3 = pthread_rwlock_unlock((pthread_rwlock_t *)(__mutex + 1));
  if (iVar3 != 0) {
    piVar5 = __errno_location();
    snprintf(local_828,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar5,
             "bmminer.c","bitmain_update_job_cb",0x904);
    FUN_00032218(3,local_828,1);
  }
  iVar3 = pthread_mutex_unlock(__mutex);
  if (iVar3 != 0) {
    piVar5 = __errno_location();
    snprintf(local_828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar5,"bmminer.c"
             ,"bitmain_update_job_cb",0x904);
    FUN_00032218(3,local_828,1);
  }
  (*DAT_00087ce8)();
  FUN_000374fc(&local_82c,piVar4,*(undefined4 *)((int)__mutex + 0x1684));
  pthread_mutex_lock((pthread_mutex_t *)&DAT_005073f0);
  FUN_0003777c(local_82c);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_005073f0);
  free(local_82c);
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)((int)__mutex + 0x70));
  if (iVar3 != 0) {
    piVar5 = __errno_location();
    snprintf(local_828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar5,"bmminer.c"
             ,"bitmain_update_job_cb",0x90e);
    FUN_00032218(3,local_828,1);
  }
  (*DAT_00087ce8)();
  if (0 < piVar4[0x1af]) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      free(*(void **)(piVar4[0xad] + iVar1));
    } while (iVar3 < piVar4[0x1af]);
  }
  free((void *)piVar4[0xad]);
  free((void *)piVar4[0x18c]);
  free((void *)piVar4[0xac]);
  free((void *)piVar4[0x9d]);
  free(piVar4);
  return 0;
}

