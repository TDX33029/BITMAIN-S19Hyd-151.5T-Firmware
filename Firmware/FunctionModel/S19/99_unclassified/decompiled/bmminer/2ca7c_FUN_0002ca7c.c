// FUN_0002ca7c @ 0002ca7c  size=544  callers=1
// program: bmminer


int FUN_0002ca7c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char local_810 [32];
  undefined2 uStack_7f0;
  undefined1 local_7ee;
  
  iVar1 = FUN_00033a18(1,0x1c0,"bmminer.c","make_work",0x558);
  if (iVar1 == 0) {
    builtin_strncpy(local_810,"Failed to calloc work in make_wo",0x20);
    uStack_7f0 = 0x6b72;
    local_7ee = 0;
    FUN_00032218(3,local_810,1);
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0071e850);
  if (iVar2 == 0) {
    iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0071e868);
  }
  else {
    piVar4 = __errno_location();
    snprintf(local_810,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,"bmminer.c",
             "total_work_inc",0x54f);
    FUN_00032218(3,local_810,1);
    iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0071e868);
  }
  if (iVar2 != 0) {
    piVar4 = __errno_location();
    snprintf(local_810,0x800,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,"bmminer.c",
             "total_work_inc",0x54f);
    FUN_00032218(3,local_810,1);
  }
  iVar2 = DAT_0008a41c;
  DAT_0008a41c = DAT_0008a41c + 1;
  iVar3 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071e868);
  if (iVar3 != 0) {
    piVar4 = __errno_location();
    snprintf(local_810,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar4,
             "bmminer.c","total_work_inc",0x551);
    FUN_00032218(3,local_810,1);
  }
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0071e850);
  if (iVar3 != 0) {
    piVar4 = __errno_location();
    snprintf(local_810,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar4,"bmminer.c"
             ,"total_work_inc",0x551);
    FUN_00032218(3,local_810,1);
  }
  (*DAT_00087ce8)();
  *(int *)(iVar1 + 0x154) = iVar2;
  return iVar1;
}

