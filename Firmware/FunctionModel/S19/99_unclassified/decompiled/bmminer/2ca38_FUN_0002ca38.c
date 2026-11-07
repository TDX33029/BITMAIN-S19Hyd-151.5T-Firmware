// FUN_0002ca38 @ 0002ca38  size=184  callers=1
// program: bmminer


void FUN_0002ca38(pthread_mutex_t *param_1,char *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char acStack_810 [2048];
  
  iVar2 = pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  if (iVar2 != 0) {
    FUN_0002c980(param_2,param_3);
  }
  iVar2 = pthread_rwlock_init((pthread_rwlock_t *)(param_1 + 1),(pthread_rwlockattr_t *)0x0);
  if (iVar2 != 0) {
    piVar1 = __errno_location();
    snprintf(acStack_810,0x800,"Failed to pthread_rwlock_init errno=%d in %s %s():%d",*piVar1,
             "bmminer.c",param_2,param_3);
    FUN_00032218(3,acStack_810,1);
  }
  return;
}

