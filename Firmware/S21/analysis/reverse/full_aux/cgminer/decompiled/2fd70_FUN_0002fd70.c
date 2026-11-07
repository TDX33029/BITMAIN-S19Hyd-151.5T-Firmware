// FUN_0002fd70 @ 0002fd70  size=164  callers=3
// program: cgminer


undefined4 FUN_0002fd70(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00076158);
  if (iVar1 == 0) {
    iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00076170);
    if (iVar1 == 0) {
      iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076158);
      if (iVar1 == 0) {
        uVar2 = *(undefined4 *)(DAT_00068b84 + 4);
        iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00076170);
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0002d70c("cp_prio",0x1d45);
        }
        (*DAT_0006796c)();
        return uVar2;
      }
      goto LAB_0002fdfc;
    }
  }
  else {
    FUN_0002cbc0("cp_prio",0x1d43);
  }
  FUN_0002dd20("cp_prio",0x1d43);
LAB_0002fdfc:
                    /* WARNING: Subroutine does not return */
  FUN_0002cc1c("cp_prio",0x1d43);
}

