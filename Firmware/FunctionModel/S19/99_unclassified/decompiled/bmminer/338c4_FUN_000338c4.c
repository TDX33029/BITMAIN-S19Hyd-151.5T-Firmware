// FUN_000338c4 @ 000338c4  size=100  callers=3
// program: bmminer


void FUN_000338c4(char *param_1,int param_2)

{
  int *piVar1;
  char acStack_810 [2052];
  
  piVar1 = __errno_location();
  snprintf(acStack_810,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar1,"util.c",
           param_1,param_2);
  FUN_00032218(3,acStack_810,1);
  FUN_0002df3c(1);
  return;
}

