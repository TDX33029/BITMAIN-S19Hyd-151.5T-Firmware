// FUN_0002ca70 @ 0002ca70  size=40  callers=1
// program: cgminer


void FUN_0002ca70(pthread_mutex_t *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0002ca14(param_2,param_3);
  }
  return;
}

