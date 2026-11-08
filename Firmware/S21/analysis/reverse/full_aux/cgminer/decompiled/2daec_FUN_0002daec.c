// FUN_0002daec @ 0002daec  size=136  callers=0
// program: cgminer


void FUN_0002daec(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_14 [2];
  
  local_14[0] = param_2;
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x140));
  if (iVar1 == 0) {
    FUN_0002c108(param_1,local_14[0]);
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x140));
    if (iVar1 == 0) {
      (*DAT_0006796c)();
      FUN_0002a76c(local_14,"cgminer.c","work_completed",0x25d5);
      return;
    }
  }
  else {
    FUN_0002cb64("work_completed",0x25d1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002d70c("work_completed",0x25d3);
}

