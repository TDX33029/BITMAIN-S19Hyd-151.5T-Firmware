// FUN_0002c7e0 @ 0002c7e0  size=92  callers=1
// program: bmminer


void FUN_0002c7e0(char *param_1,int param_2)

{
  int *piVar1;
  char acStack_810 [2052];
  
  piVar1 = __errno_location();
  snprintf(acStack_810,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar1,
           "bmminer.c",param_1,param_2);
  FUN_00032218(3,acStack_810,1);
  return;
}

