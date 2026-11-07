// FUN_0005af18 @ 0005af18  size=236  callers=1
// program: bmminer


void FUN_0005af18(void)

{
  int iVar1;
  
  FUN_000658a8(0,"src/zlog.c",0x130,"------zlog_fini start------");
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0071a0d8);
  if (iVar1 != 0) {
    FUN_000658a8(2,"src/zlog.c",0x133,"pthread_rwlock_wrlock fail, rc[%d]",iVar1);
    return;
  }
  if (DAT_0071a0f8 == 0) {
    FUN_000658a8(2,"src/zlog.c",0x138,"before finish, must zlog_init() or dzlog_init() fisrt");
  }
  else {
    FUN_0005a67c();
    DAT_0071a0f8 = 0;
  }
  FUN_000658a8(0,"src/zlog.c",0x140,"------zlog_fini end------");
  iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
  if (iVar1 != 0) {
    FUN_000658a8(2,"src/zlog.c",0x143,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
  }
  return;
}

