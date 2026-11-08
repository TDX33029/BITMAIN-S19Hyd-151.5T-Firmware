// FUN_000862b8 @ 000862b8  size=304  callers=0
// program: bmminer


void FUN_000862b8(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00a4e7dc);
  if (iVar1 == 0) {
    if (DAT_00a4e810 == 0) {
      FUN_00095b4c(2,"src/zlog.c",0x24f,"never call zlog_init() or dzlog_init() before");
    }
    else {
      pvVar2 = pthread_getspecific(DAT_00a4e7fc);
      if (pvVar2 == (void *)0x0) {
        FUN_00095b4c(2,"src/zlog.c",0x255,"thread not found, maybe not use zlog_put_mdc before");
      }
      else {
        FUN_0008c690(*(undefined4 *)((int)pvVar2 + 4));
      }
    }
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
    if (iVar1 != 0) {
      FUN_00095b4c(2,"src/zlog.c",0x25e,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
    }
  }
  else {
    FUN_00095b4c(2,"src/zlog.c",0x24a,"pthread_rwlock_rdlock fail, rc[%d]",iVar1);
  }
  return;
}

