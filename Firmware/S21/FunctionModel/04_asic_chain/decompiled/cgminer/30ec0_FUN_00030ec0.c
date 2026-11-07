// FUN_00030ec0 @ 00030ec0  size=388  callers=3
// program: cgminer


void FUN_00030ec0(int param_1)

{
  int iVar1;
  int *piVar2;
  char *__format;
  code *pcVar3;
  undefined4 uVar4;
  char acStack_808 [2048];
  
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
    snprintf(acStack_808,0x800,"%s %d: invalid nonce - HW error",
             *(char **)(*(int *)(*(int *)(param_1 + 0x24) + 4) + 8),
             *(int *)(*(int *)(param_1 + 0x24) + 8));
    FUN_0001dd98(6,acStack_808,0);
  }
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00072da4);
  if (iVar1 == 0) {
    DAT_00076070 = DAT_00076070 + 1;
    *(int *)(*(int *)(param_1 + 0x24) + 0x2c) = *(int *)(*(int *)(param_1 + 0x24) + 0x2c) + 1;
    iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00072da4);
    if (iVar1 == 0) {
      (*DAT_0006796c)();
      pcVar3 = *(code **)(*(int *)(*(int *)(param_1 + 0x24) + 4) + 0x54);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(param_1);
      }
      return;
    }
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    __format = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
    uVar4 = 0x228a;
  }
  else {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    __format = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
    uVar4 = 0x2287;
  }
  snprintf(acStack_808,0x800,__format,iVar1,"cgminer.c","inc_hw_errors",uVar4);
  FUN_0001dd98(3,acStack_808,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

