// FUN_0002fbd8 @ 0002fbd8  size=160  callers=10
// program: cgminer


undefined4 FUN_0002fbd8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00076158);
  if (iVar2 == 0) {
    iVar2 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00076170);
    if (iVar2 == 0) {
      iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076158);
      uVar1 = DAT_00068b84;
      if (iVar2 == 0) {
        iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00076170);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0002d70c("current_pool",0x354);
        }
        (*DAT_0006796c)();
        return uVar1;
      }
      goto LAB_0002fc60;
    }
  }
  else {
    FUN_0002cbc0("current_pool",0x350);
  }
  FUN_0002dd20("current_pool",0x350);
LAB_0002fc60:
                    /* WARNING: Subroutine does not return */
  FUN_0002cc1c("current_pool",0x350);
}

