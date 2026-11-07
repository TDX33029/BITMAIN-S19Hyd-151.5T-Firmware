// FUN_00033848 @ 00033848  size=124  callers=3
// program: bmminer


void FUN_00033848(pthread_mutex_t *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char acStack_810 [2052];
  
  iVar1 = pthread_mutex_unlock(param_1);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = __errno_location();
  snprintf(acStack_810,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar2,"util.c",
           param_2,param_3);
  FUN_00032218(3,acStack_810,1);
  FUN_0002df3c(1);
  return;
}

