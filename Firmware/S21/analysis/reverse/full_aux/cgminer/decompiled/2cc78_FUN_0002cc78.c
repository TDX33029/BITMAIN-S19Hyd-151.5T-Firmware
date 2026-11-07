// FUN_0002cc78 @ 0002cc78  size=104  callers=3
// program: cgminer


undefined1 FUN_0002cc78(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xbc));
  if (iVar2 == 0) {
    uVar1 = *param_2;
    *param_2 = 1;
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xbc));
    if (iVar2 == 0) {
      (*DAT_0006796c)();
      return uVar1;
    }
  }
  else {
    FUN_0002cbc0("pool_tset",0x332);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002cc1c("pool_tset",0x337);
}

