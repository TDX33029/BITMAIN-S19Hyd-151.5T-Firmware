// FUN_0002d7a0 @ 0002d7a0  size=168  callers=2
// program: cgminer


int FUN_0002d7a0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00076158);
  if (iVar1 == 0) {
    iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00076170);
    iVar1 = DAT_00068b34;
    if (iVar2 == 0) {
      DAT_00068b34 = DAT_00068b34 + 1;
      iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00076170);
      if (iVar2 == 0) {
        iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076158);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0002cc1c("total_work_inc",0x91e);
        }
        (*DAT_0006796c)();
        return iVar1;
      }
      goto LAB_0002d830;
    }
  }
  else {
    FUN_0002cbc0("total_work_inc",0x91c);
  }
  FUN_0002cb64("total_work_inc",0x91c);
LAB_0002d830:
                    /* WARNING: Subroutine does not return */
  FUN_0002d70c("total_work_inc",0x91e);
}

