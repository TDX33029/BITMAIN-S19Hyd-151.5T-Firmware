// FUN_0001f708 @ 0001f708  size=100  callers=7
// program: cgminer


void FUN_0001f708(char *param_1,int param_2)

{
  int *piVar1;
  char acStack_810 [2052];
  
  piVar1 = __errno_location();
  snprintf(acStack_810,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar1,"util.c",
           param_1,param_2);
  FUN_0001dd98(3,acStack_810,1);
  FUN_0003c34c(1);
  return;
}

