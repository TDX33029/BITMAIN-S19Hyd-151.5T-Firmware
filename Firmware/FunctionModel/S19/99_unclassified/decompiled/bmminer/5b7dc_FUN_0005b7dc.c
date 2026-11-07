// FUN_0005b7dc @ 0005b7dc  size=276  callers=0
// program: bmminer


void FUN_0005b7dc(int param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == 0) {
    FUN_000658a8(2,"src/zlog.c",0x225,"key is null or 0");
    return;
  }
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0071a0d8);
  if (iVar1 != 0) {
    FUN_000658a8(2,"src/zlog.c",0x229,"pthread_rwlock_rdlock fail, rc[%d]",iVar1);
    return;
  }
  if (DAT_0071a0f8 == 0) {
    FUN_000658a8(2,"src/zlog.c",0x22e,"never call zlog_init() or dzlog_init() before");
  }
  else {
    pvVar2 = pthread_getspecific(DAT_0071a0c4);
    if (pvVar2 == (void *)0x0) {
      FUN_000658a8(2,"src/zlog.c",0x234,"thread not found, maybe not use zlog_put_mdc before");
    }
    else {
      FUN_0005fb4c(*(undefined4 *)((int)pvVar2 + 4),param_1);
    }
  }
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
  if (iVar1 != 0) {
    FUN_000658a8(2,"src/zlog.c",0x23d,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
  }
  return;
}

