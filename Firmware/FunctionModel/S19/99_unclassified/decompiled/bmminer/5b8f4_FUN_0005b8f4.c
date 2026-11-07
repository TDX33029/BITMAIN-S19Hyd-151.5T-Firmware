// FUN_0005b8f4 @ 0005b8f4  size=228  callers=0
// program: bmminer


void FUN_0005b8f4(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0071a0d8);
  if (iVar1 != 0) {
    FUN_000658a8(2,"src/zlog.c",0x24a,"pthread_rwlock_rdlock fail, rc[%d]",iVar1);
    return;
  }
  if (DAT_0071a0f8 == 0) {
    FUN_000658a8(2,"src/zlog.c",0x24f,"never call zlog_init() or dzlog_init() before");
  }
  else {
    pvVar2 = pthread_getspecific(DAT_0071a0c4);
    if (pvVar2 == (void *)0x0) {
      FUN_000658a8(2,"src/zlog.c",0x255,"thread not found, maybe not use zlog_put_mdc before");
    }
    else {
      FUN_0005fac4(*(undefined4 *)((int)pvVar2 + 4));
    }
  }
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
  if (iVar1 != 0) {
    FUN_000658a8(2,"src/zlog.c",0x25e,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
  }
  return;
}

