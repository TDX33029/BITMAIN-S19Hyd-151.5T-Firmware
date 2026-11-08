// FUN_000349f4 @ 000349f4  size=364  callers=0
// program: cgminer


undefined4 FUN_000349f4(void)

{
  pthread_t __th;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  __th = pthread_self();
  pthread_detach(__th);
  FUN_000346ac();
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00074fa0);
  iVar2 = DAT_00076238;
  if (iVar1 == 0) {
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00074fa0);
    if (iVar1 == 0) {
      (*DAT_0006796c)();
      if (0 < iVar2) {
        iVar1 = 0;
        do {
          iVar3 = *(int *)(DAT_00073f30 + iVar1 * 4);
          iVar4 = *(int *)(iVar3 + 0x24);
          if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) == 0)) {
            *(undefined1 *)(iVar3 + 0x3e) = 1;
            FUN_00030938(iVar4);
            iVar3 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00076028);
            if (iVar3 != 0) goto LAB_00034b24;
            (**(code **)(*(int *)(iVar4 + 4) + 0x4c))(iVar4);
            iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076028);
            if (iVar3 != 0) goto LAB_00034b30;
            (*DAT_0006796c)();
          }
          iVar1 = iVar1 + 1;
        } while (iVar2 != iVar1);
      }
      iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00074f7c);
      if (iVar2 == 0) {
        pthread_cond_broadcast((pthread_cond_t *)&DAT_000761a8);
        iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00074f7c);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0002cc1c("restart_thread",0x15a4);
        }
        (*DAT_0006796c)();
        return 0;
      }
      FUN_0002cbc0("restart_thread",0x15a2);
LAB_00034b24:
      FUN_0002cbc0("restart_thread",0x159c);
LAB_00034b30:
                    /* WARNING: Subroutine does not return */
      FUN_0002cc1c("restart_thread",0x159e);
    }
  }
  else {
    FUN_0002dd20("restart_thread",0x1587);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002d70c("restart_thread",0x1589);
}

