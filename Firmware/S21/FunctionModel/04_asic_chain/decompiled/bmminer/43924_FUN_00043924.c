// FUN_00043924 @ 00043924  size=432  callers=1
// program: bmminer


void FUN_00043924(int param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char acStack_2008 [8192];
  
  if ((DAT_008c702e != '\0') &&
     (((DAT_00a5d20d != '\0' || (DAT_008c702d != '\0')) || (6 < DAT_000be644)))) {
    snprintf(acStack_2008,0x2000,"%s %d: invalid nonce - HW error",
             *(char **)(*(int *)(*(int *)(param_1 + 0x24) + 4) + 8),
             *(int *)(*(int *)(param_1 + 0x24) + 8));
    FUN_0004948c(7,acStack_2008,0);
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00a5d210);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    snprintf(acStack_2008,0x2000,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar2,
             "bmminer.c","inc_hw_errors",0x5de);
    FUN_0004948c(3,acStack_2008,1);
  }
  DAT_00a5f308 = DAT_00a5f308 + 1;
  *(int *)(*(int *)(param_1 + 0x24) + 0x2c) = *(int *)(*(int *)(param_1 + 0x24) + 0x2c) + 1;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00a5d210);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    snprintf(acStack_2008,0x2000,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar2,
             "bmminer.c","inc_hw_errors",0x5e1);
    FUN_0004948c(3,acStack_2008,1);
  }
  (*DAT_000be768)();
  pcVar3 = *(code **)(*(int *)(*(int *)(param_1 + 0x24) + 4) + 0x54);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1);
  }
  return;
}

