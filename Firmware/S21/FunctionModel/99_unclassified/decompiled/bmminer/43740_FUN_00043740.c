// FUN_00043740 @ 00043740  size=204  callers=1
// program: bmminer


void FUN_00043740(undefined4 *param_1,char *param_2,char *param_3,int param_4)

{
  void *__ptr;
  char acStack_2008 [8184];
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    FUN_00043704(__ptr);
    free(__ptr);
    *param_1 = 0;
    return;
  }
  if (((DAT_00a5d20d == '\0') && (DAT_008c702d == '\0')) && (DAT_000be644 < 3)) {
    return;
  }
  snprintf(acStack_2008,0x2000,"Free work called with NULL work from %s %s:%d",param_2,param_3,
           param_4);
  FUN_0004948c(3,acStack_2008,0);
  return;
}

