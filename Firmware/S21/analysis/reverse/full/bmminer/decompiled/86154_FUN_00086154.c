// FUN_00086154 @ 00086154  size=356  callers=0
// program: bmminer


void FUN_00086154(int param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/zlog.c",0x225,"key is null or 0");
  }
  else {
    iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00a4e7dc);
    if (iVar1 == 0) {
      if (DAT_00a4e810 == 0) {
        FUN_00095b4c(2,"src/zlog.c",0x22e,"never call zlog_init() or dzlog_init() before");
      }
      else {
        pvVar2 = pthread_getspecific(DAT_00a4e7fc);
        if (pvVar2 == (void *)0x0) {
          FUN_00095b4c(2,"src/zlog.c",0x234,"thread not found, maybe not use zlog_put_mdc before");
        }
        else {
          FUN_0008c79c(*(undefined4 *)((int)pvVar2 + 4),param_1);
        }
      }
      iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
      if (iVar1 != 0) {
        FUN_00095b4c(2,"src/zlog.c",0x23d,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
      }
    }
    else {
      FUN_00095b4c(2,"src/zlog.c",0x229,"pthread_rwlock_rdlock fail, rc[%d]",iVar1);
    }
  }
  return;
}

