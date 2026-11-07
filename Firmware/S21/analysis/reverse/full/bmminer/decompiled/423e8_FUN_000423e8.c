// FUN_000423e8 @ 000423e8  size=116  callers=1
// program: bmminer


void FUN_000423e8(pthread_rwlock_t *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char acStack_2010 [8196];
  
  iVar1 = pthread_rwlock_wrlock(param_1);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = __errno_location();
  snprintf(acStack_2010,0x2000,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar2,
           "bmminer.c",param_2,param_3);
  FUN_0004948c(3,acStack_2010,1);
  return;
}

