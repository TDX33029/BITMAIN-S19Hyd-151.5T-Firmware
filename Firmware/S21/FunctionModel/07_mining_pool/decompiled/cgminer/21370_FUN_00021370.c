// FUN_00021370 @ 00021370  size=352  callers=6
// program: cgminer


void FUN_00021370(int *param_1)

{
  int iVar1;
  int *piVar2;
  char acStack_810 [2052];
  
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
    snprintf(acStack_810,0x800,"Closing socket for stratum pool %d",*param_1);
    FUN_0001dd98(6,acStack_810,0);
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xb4));
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    snprintf(acStack_810,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar2,"util.c",
             "suspend_stratum",0xcf3);
    FUN_0001dd98(3,acStack_810,1);
    FUN_0003c34c(1);
  }
  FUN_0001f224(param_1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xb4));
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    snprintf(acStack_810,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar2,"util.c",
             "suspend_stratum",0xcf5);
    FUN_0001dd98(3,acStack_810,1);
    FUN_0003c34c(1);
  }
  (*DAT_0006796c)();
  return;
}

