// FUN_000337e0 @ 000337e0  size=104  callers=1
// program: bmminer


void FUN_000337e0(void *param_1,char *param_2,char *param_3,int param_4)

{
  int *piVar1;
  char acStack_818 [2052];
  
  piVar1 = __errno_location();
  snprintf(acStack_818,0x800,"Failed to sem_post errno=%d cgsem=0x%p in %s %s():%d",*piVar1,param_1,
           param_2,param_3,param_4);
  FUN_00032218(3,acStack_818,1);
  FUN_0002df3c(1);
  return;
}

