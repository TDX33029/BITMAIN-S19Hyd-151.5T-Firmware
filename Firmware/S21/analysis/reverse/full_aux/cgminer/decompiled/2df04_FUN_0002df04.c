// FUN_0002df04 @ 0002df04  size=176  callers=0
// program: cgminer


int FUN_0002df04(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)(param_1 + 0x140));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x160);
    if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x160), param_2 != *(int *)(iVar1 + 0x154))) {
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0x160);
        while (param_2 != *(int *)(iVar2 + 0x154)) {
          if (iVar1 == 0) goto LAB_0002df6c;
          iVar2 = iVar1;
          iVar1 = *(int *)(iVar1 + 0x160);
        }
      }
      iVar1 = iVar2;
    }
LAB_0002df6c:
    iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x140));
    if (iVar2 == 0) {
      (*DAT_0006796c)();
      return iVar1;
    }
  }
  else {
    FUN_0002dd20("find_queued_work_byid",0x2596);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002d70c("find_queued_work_byid",0x2598);
}

