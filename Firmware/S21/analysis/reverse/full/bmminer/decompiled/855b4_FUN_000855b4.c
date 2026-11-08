// FUN_000855b4 @ 000855b4  size=296  callers=1
// program: bmminer


void FUN_000855b4(void)

{
  int iVar1;
  
  FUN_00095b4c(0,"src/zlog.c",0x130,"------zlog_fini start------");
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00a4e7dc);
  if (iVar1 == 0) {
    if (DAT_00a4e810 == 0) {
      FUN_00095b4c(2,"src/zlog.c",0x138,"before finish, must zlog_init() or dzlog_init() fisrt");
    }
    else {
      FUN_00084968();
      DAT_00a4e810 = 0;
    }
    FUN_00095b4c(0,"src/zlog.c",0x140,"------zlog_fini end------");
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
    if (iVar1 != 0) {
      FUN_00095b4c(2,"src/zlog.c",0x143,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
    }
  }
  else {
    FUN_00095b4c(2,"src/zlog.c",0x133,"pthread_rwlock_wrlock fail, rc[%d]",iVar1);
  }
  return;
}

