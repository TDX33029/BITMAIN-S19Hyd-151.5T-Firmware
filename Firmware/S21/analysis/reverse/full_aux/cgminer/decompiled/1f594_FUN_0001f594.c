// FUN_0001f594 @ 0001f594  size=124  callers=1
// program: cgminer


void FUN_0001f594(pthread_rwlock_t *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char acStack_810 [2052];
  
  iVar1 = pthread_rwlock_wrlock(param_1);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = __errno_location();
  snprintf(acStack_810,0x800,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar2,"util.c",
           param_2,param_3);
  FUN_0001dd98(3,acStack_810,1);
  FUN_0003c34c(1);
  return;
}

