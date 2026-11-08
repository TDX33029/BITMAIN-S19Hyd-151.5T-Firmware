// FUN_0002da80 @ 0002da80  size=104  callers=1
// program: cgminer


void FUN_0002da80(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x140));
  if (iVar1 == 0) {
    FUN_0002bc14(param_1,param_2);
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x140));
    if (iVar1 == 0) {
      (*DAT_0006796c)();
      return;
    }
  }
  else {
    FUN_0002cb64("add_queued",0x2539);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002d70c("add_queued",0x253b);
}

