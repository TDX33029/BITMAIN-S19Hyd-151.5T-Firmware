// FUN_0004ad28 @ 0004ad28  size=124  callers=3
// program: bmminer


void FUN_0004ad28(pthread_mutex_t *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char acStack_2010 [8196];
  
  iVar1 = pthread_mutex_unlock(param_1);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = __errno_location();
  snprintf(acStack_2010,0x2000,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar2,"util.c",
           param_2,param_3);
  FUN_0004948c(3,acStack_2010,1);
  FUN_00043adc(1);
  return;
}

