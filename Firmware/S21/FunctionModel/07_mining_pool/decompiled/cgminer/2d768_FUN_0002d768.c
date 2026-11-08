// FUN_0002d768 @ 0002d768  size=56  callers=2
// program: cgminer


void FUN_0002d768(pthread_rwlock_t *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_unlock(param_1);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002d70c(param_2,param_3);
  }
  (*DAT_0006796c)();
  return;
}

