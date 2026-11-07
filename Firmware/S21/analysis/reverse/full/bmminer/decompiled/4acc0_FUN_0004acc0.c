// FUN_0004acc0 @ 0004acc0  size=104  callers=1
// program: bmminer


void FUN_0004acc0(void *param_1,char *param_2,char *param_3,int param_4)

{
  int *piVar1;
  char acStack_2018 [8196];
  
  piVar1 = __errno_location();
  snprintf(acStack_2018,0x2000,"Failed to sem_post errno=%d cgsem=0x%p in %s %s():%d",*piVar1,
           param_1,param_2,param_3,param_4);
  FUN_0004948c(3,acStack_2018,1);
  FUN_00043adc(1);
  return;
}

