// FUN_0003501c @ 0003501c  size=124  callers=1
// program: bmminer


void FUN_0003501c(sem_t *param_1,char *param_2,char *param_3,int param_4)

{
  int param3;
  int *piVar1;
  char acStack_818 [2052];
  
  param3 = sem_init(param_1,0,0);
  if (param3 != 0) {
    piVar1 = __errno_location();
    snprintf(acStack_818,0x800,"Failed to sem_init ret=%d errno=%d in %s %s():%d",param3,*piVar1,
             param_2,param_3,param_4);
    FUN_00032218(3,acStack_818,1);
    FUN_0002df3c(1);
  }
  return;
}

