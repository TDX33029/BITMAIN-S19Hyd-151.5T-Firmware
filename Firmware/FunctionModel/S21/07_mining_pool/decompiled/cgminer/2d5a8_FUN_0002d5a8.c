// FUN_0002d5a8 @ 0002d5a8  size=100  callers=2
// program: cgminer


void FUN_0002d5a8(void)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(DAT_00068b30);
  if (iVar1 == 0) {
    pthread_cond_signal((pthread_cond_t *)&DAT_00072e78);
    iVar1 = pthread_mutex_unlock(DAT_00068b30);
    if (iVar1 == 0) {
      (*DAT_0006796c)();
      return;
    }
  }
  else {
    FUN_0002cbc0("wake_gws",0x153b);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002cc1c("wake_gws",0x153d);
}

