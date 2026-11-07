// FUN_0004ada4 @ 0004ada4  size=100  callers=3
// program: bmminer


void FUN_0004ada4(char *param_1,int param_2)

{
  int *piVar1;
  char acStack_2010 [8196];
  
  piVar1 = __errno_location();
  snprintf(acStack_2010,0x2000,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar1,"util.c",
           param_1,param_2);
  FUN_0004948c(3,acStack_2010,1);
  FUN_00043adc(1);
  return;
}

