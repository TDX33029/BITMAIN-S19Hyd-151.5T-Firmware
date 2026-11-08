// FUN_00042570 @ 00042570  size=184  callers=1
// program: bmminer


void FUN_00042570(pthread_mutex_t *param_1,char *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char acStack_2010 [8192];
  
  iVar2 = pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  if (iVar2 != 0) {
    FUN_000424b8(param_2,param_3);
  }
  iVar2 = pthread_rwlock_init((pthread_rwlock_t *)(param_1 + 1),(pthread_rwlockattr_t *)0x0);
  if (iVar2 != 0) {
    piVar1 = __errno_location();
    snprintf(acStack_2010,0x2000,"Failed to pthread_rwlock_init errno=%d in %s %s():%d",*piVar1,
             "bmminer.c",param_2,param_3);
    FUN_0004948c(3,acStack_2010,1);
  }
  return;
}

