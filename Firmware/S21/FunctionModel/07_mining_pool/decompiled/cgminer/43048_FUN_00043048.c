// FUN_00043048 @ 00043048  size=100  callers=0
// program: cgminer


void FUN_00043048(char *param_1,int param_2)

{
  int *piVar1;
  char acStack_810 [2052];
  
  piVar1 = __errno_location();
  snprintf(acStack_810,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar1,
           "driver-btm-c5_socketa.c",param_1,param_2);
  FUN_0001dd98(3,acStack_810,1);
  FUN_0003c34c(1);
  return;
}

