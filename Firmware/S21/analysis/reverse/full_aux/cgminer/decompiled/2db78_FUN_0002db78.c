// FUN_0002db78 @ 0002db78  size=168  callers=0
// program: cgminer


int FUN_0002db78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x140));
  if (iVar1 == 0) {
    iVar1 = FUN_0002c04c(*(undefined4 *)(param_1 + 0x160),param_2,param_3,param_4,param_5,param_6);
    if (iVar1 != 0) {
      FUN_0002c108(param_1,iVar1);
    }
    iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x140));
    if (iVar2 == 0) {
      (*DAT_0006796c)();
      return iVar1;
    }
  }
  else {
    FUN_0002cb64("take_queued_work_bymidstate",0x25de);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002d70c("take_queued_work_bymidstate",0x25e2);
}

