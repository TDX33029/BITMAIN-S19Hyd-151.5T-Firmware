// FUN_0002cb1c @ 0002cb1c  size=72  callers=1
// program: cgminer


void FUN_0002cb1c(pthread_mutex_t *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002ca14(param_2,param_3);
  }
  iVar1 = pthread_rwlock_init((pthread_rwlock_t *)(param_1 + 1),(pthread_rwlockattr_t *)0x0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002ca98(param_2,param_3);
  }
  return;
}

