// FUN_0004c524 @ 0004c524  size=124  callers=1
// program: bmminer


void FUN_0004c524(sem_t *param_1,char *param_2,char *param_3,int param_4)

{
  int param3;
  int *piVar1;
  char acStack_2018 [8196];
  
  param3 = sem_init(param_1,0,0);
  if (param3 != 0) {
    piVar1 = __errno_location();
    snprintf(acStack_2018,0x2000,"Failed to sem_init ret=%d errno=%d in %s %s():%d",param3,*piVar1,
             param_2,param_3,param_4);
    FUN_0004948c(3,acStack_2018,1);
    FUN_00043adc(1);
  }
  return;
}

