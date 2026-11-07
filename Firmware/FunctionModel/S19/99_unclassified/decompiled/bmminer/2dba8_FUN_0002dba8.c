// FUN_0002dba8 @ 0002dba8  size=204  callers=1
// program: bmminer


void FUN_0002dba8(undefined4 *param_1,char *param_2,char *param_3,int param_4)

{
  void *__ptr;
  char acStack_808 [2040];
  
  __ptr = (void *)*param_1;
  if (__ptr != (void *)0x0) {
    FUN_0002db6c(__ptr);
    free(__ptr);
    *param_1 = 0;
    return;
  }
  if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 3)) {
    return;
  }
  snprintf(acStack_808,0x800,"Free work called with NULL work from %s %s:%d",param_2,param_3,param_4
          );
  FUN_00032218(3,acStack_808,0);
  return;
}

