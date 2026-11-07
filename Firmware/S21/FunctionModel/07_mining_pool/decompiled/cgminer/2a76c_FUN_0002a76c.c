// FUN_0002a76c @ 0002a76c  size=204  callers=12
// program: cgminer


void FUN_0002a76c(undefined4 *param_1,char *param_2,char *param_3,int param_4)

{
  void *__ptr;
  char acStack_808 [2040];
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    FUN_0002a618(__ptr);
    free(__ptr);
    *param_1 = 0;
    return;
  }
  if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
    return;
  }
  snprintf(acStack_808,0x800,"Free work called with NULL work from %s %s:%d",param_2,param_3,param_4
          );
  FUN_0001dd98(3,acStack_808,0);
  return;
}

