// FUN_0002cc1c @ 0002cc1c  size=92  callers=12
// program: cgminer


void FUN_0002cc1c(char *param_1,int param_2)

{
  int *piVar1;
  char acStack_808 [2052];
  
  piVar1 = __errno_location();
  snprintf(acStack_808,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar1,"cgminer.c"
           ,param_1,param_2);
  FUN_0001dd98(3,acStack_808,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

