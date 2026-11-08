// FUN_000425b4 @ 000425b4  size=544  callers=1
// program: bmminer


int FUN_000425b4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char local_2010 [32];
  undefined2 uStack_1ff0;
  undefined1 local_1fee;
  
  iVar1 = FUN_0004af04(1,0x1c0,"bmminer.c","make_work",0x590);
  if (iVar1 == 0) {
    builtin_strncpy(local_2010,"Failed to calloc work in make_wo",0x20);
    uStack_1ff0 = 0x6b72;
    local_1fee = 0;
    FUN_0004948c(3,local_2010,1);
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00a5f310);
  if (iVar2 == 0) {
    iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00a5f328);
  }
  else {
    piVar4 = __errno_location();
    snprintf(local_2010,0x2000,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,"bmminer.c"
             ,"total_work_inc",0x587);
    FUN_0004948c(3,local_2010,1);
    iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00a5f328);
  }
  if (iVar2 != 0) {
    piVar4 = __errno_location();
    snprintf(local_2010,0x2000,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,
             "bmminer.c","total_work_inc",0x587);
    FUN_0004948c(3,local_2010,1);
  }
  iVar2 = DAT_000c8fb0;
  DAT_000c8fb0 = DAT_000c8fb0 + 1;
  iVar3 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a5f328);
  if (iVar3 != 0) {
    piVar4 = __errno_location();
    snprintf(local_2010,0x2000,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar4,
             "bmminer.c","total_work_inc",0x589);
    FUN_0004948c(3,local_2010,1);
  }
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00a5f310);
  if (iVar3 != 0) {
    piVar4 = __errno_location();
    snprintf(local_2010,0x2000,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar4,
             "bmminer.c","total_work_inc",0x589);
    FUN_0004948c(3,local_2010,1);
  }
  (*DAT_000be768)();
  *(int *)(iVar1 + 0x154) = iVar2;
  return iVar1;
}

