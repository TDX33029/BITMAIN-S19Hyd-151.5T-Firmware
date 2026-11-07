// FUN_0002ca98 @ 0002ca98  size=92  callers=3
// program: cgminer


void FUN_0002ca98(char *param_1,int param_2)

{
  int *piVar1;
  char acStack_808 [2052];
  
  piVar1 = __errno_location();
  snprintf(acStack_808,0x800,"Failed to pthread_rwlock_init errno=%d in %s %s():%d",*piVar1,
           "cgminer.c",param_1,param_2);
  FUN_0001dd98(3,acStack_808,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

