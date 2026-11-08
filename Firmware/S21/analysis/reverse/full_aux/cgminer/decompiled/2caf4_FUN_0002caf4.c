// FUN_0002caf4 @ 0002caf4  size=40  callers=1
// program: cgminer


void FUN_0002caf4(pthread_rwlock_t *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_init(param_1,(pthread_rwlockattr_t *)0x0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002ca98(param_2,param_3);
  }
  return;
}

