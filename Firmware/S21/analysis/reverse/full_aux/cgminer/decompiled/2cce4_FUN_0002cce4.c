// FUN_0002cce4 @ 0002cce4  size=100  callers=5
// program: cgminer


undefined1 FUN_0002cce4(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xbc));
  if (iVar2 == 0) {
    uVar1 = *param_2;
    *param_2 = 0;
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xbc));
    if (iVar2 == 0) {
      (*DAT_0006796c)();
      return uVar1;
    }
  }
  else {
    FUN_0002cbc0("pool_tclear",0x341);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002cc1c("pool_tclear",0x346);
}

