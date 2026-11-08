// FUN_000404e4 @ 000404e4  size=120  callers=1
// program: cgminer


void FUN_000404e4(int param_1)

{
  int iVar1;
  int *piVar2;
  char acStack_808 [2048];
  
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076310);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = __errno_location();
  snprintf(acStack_808,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar2,
           "socketa_api.c","cb_bitmain_api_stats",param_1);
  FUN_0001dd98(3,acStack_808,1);
  FUN_0003c34c(1);
  return;
}

