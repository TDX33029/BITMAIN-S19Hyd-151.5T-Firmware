// FUN_000424b8 @ 000424b8  size=92  callers=2
// program: bmminer


void FUN_000424b8(char *param_1,int param_2)

{
  int *piVar1;
  char acStack_2010 [8196];
  
  piVar1 = __errno_location();
  snprintf(acStack_2010,0x2000,"Failed to pthread_mutex_init errno=%d in %s %s():%d",*piVar1,
           "bmminer.c",param_1,param_2);
  FUN_0004948c(3,acStack_2010,1);
  return;
}

