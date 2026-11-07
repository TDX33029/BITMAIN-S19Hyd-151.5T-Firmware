// FUN_0002dfb8 @ 0002dfb8  size=152  callers=0
// program: cgminer


undefined4
FUN_0002dfb8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)(param_1 + 0x140));
  if (iVar1 == 0) {
    uVar2 = FUN_0002c04c(*(undefined4 *)(param_1 + 0x160),param_2,param_3,param_4,param_5,param_6);
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x140));
    if (iVar1 == 0) {
      (*DAT_0006796c)();
      return uVar2;
    }
  }
  else {
    FUN_0002dd20("find_queued_work_bymidstate",0x2567);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002d70c("find_queued_work_bymidstate",0x2569);
}

