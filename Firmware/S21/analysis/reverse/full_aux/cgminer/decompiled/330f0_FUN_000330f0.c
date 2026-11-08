// FUN_000330f0 @ 000330f0  size=648  callers=0
// program: cgminer


undefined4 FUN_000330f0(int *param_1)

{
  char cVar1;
  int iVar2;
  pthread_t __th;
  int *piVar3;
  char *__format;
  bool bVar4;
  undefined4 uVar5;
  char acStack_810 [2052];
  
  if (*(char *)((int)param_1 + 0x6b) == '\0') {
    __th = pthread_self();
    pthread_detach(__th);
  }
  cVar1 = *(char *)((int)param_1 + 0x69);
  while( true ) {
    if (cVar1 != '\0') {
      return 0;
    }
    iVar2 = FUN_0002cd4c(param_1,0);
    if (iVar2 != 0) break;
    FUN_00031f80(param_1);
    if (*(char *)((int)param_1 + 0x6b) != '\0') {
LAB_000331e8:
      *(undefined1 *)(param_1 + 0x47) = 0;
      return 0;
    }
    sleep(0x1e);
    cVar1 = *(char *)((int)param_1 + 0x69);
  }
  FUN_0002cce4(param_1,(int)param_1 + 0x61);
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00076158);
  if (iVar2 == 0) {
    iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00076170);
    if (iVar2 == 0) {
      bVar4 = false;
      if (DAT_00068a14 == '\0') {
        DAT_00068a14 = '\x01';
        bVar4 = *param_1 != 0;
        DAT_00068b84 = param_1;
      }
      iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00076170);
      if (iVar2 == 0) {
        iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00076158);
        if (iVar2 == 0) {
          (*DAT_0006796c)();
          if ((bVar4) && (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (4 < DAT_00067848))))
          {
            snprintf(acStack_810,0x800,"Switching to pool %d %s - first alive pool",*param_1,
                     (char *)param_1[0x29]);
            FUN_0001dd98(5,acStack_810,0);
          }
          FUN_0002fe1c(param_1);
          FUN_00031afc(0);
          goto LAB_000331e8;
        }
        piVar3 = __errno_location();
        iVar2 = *piVar3;
        __format = "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d";
        uVar5 = 0x2a84;
      }
      else {
        piVar3 = __errno_location();
        iVar2 = *piVar3;
        __format = "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d";
        uVar5 = 0x2a84;
      }
    }
    else {
      piVar3 = __errno_location();
      iVar2 = *piVar3;
      __format = "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d";
      uVar5 = 0x2a76;
    }
  }
  else {
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    __format = "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d";
    uVar5 = 0x2a76;
  }
  snprintf(acStack_810,0x800,__format,iVar2,"cgminer.c","test_pool_thread",uVar5);
  FUN_0001dd98(3,acStack_810,1);
                    /* WARNING: Subroutine does not return */
  FUN_0002c290(1);
}

