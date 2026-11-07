// FUN_0002dd8c @ 0002dd8c  size=424  callers=1
// program: bmminer


void FUN_0002dd8c(int param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char acStack_808 [2048];
  
  if ((DAT_0048d36e != '\0') &&
     (((DAT_0071e84c != '\0' || (DAT_0048d36d != '\0')) || (6 < DAT_00087bc4)))) {
    snprintf(acStack_808,0x800,"%s %d: invalid nonce - HW error",
             *(char **)(*(int *)(*(int *)(param_1 + 0x24) + 4) + 8),
             *(int *)(*(int *)(param_1 + 0x24) + 8));
    FUN_00032218(7,acStack_808,0);
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0072293c);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    snprintf(acStack_808,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar2,"bmminer.c"
             ,"inc_hw_errors",0x5a6);
    FUN_00032218(3,acStack_808,1);
  }
  DAT_0071c790 = DAT_0071c790 + 1;
  *(int *)(*(int *)(param_1 + 0x24) + 0x2c) = *(int *)(*(int *)(param_1 + 0x24) + 0x2c) + 1;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0072293c);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    snprintf(acStack_808,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar2,
             "bmminer.c","inc_hw_errors",0x5a9);
    FUN_00032218(3,acStack_808,1);
  }
  (*DAT_00087ce8)();
  pcVar3 = *(code **)(*(int *)(*(int *)(param_1 + 0x24) + 4) + 0x54);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1);
  }
  return;
}

