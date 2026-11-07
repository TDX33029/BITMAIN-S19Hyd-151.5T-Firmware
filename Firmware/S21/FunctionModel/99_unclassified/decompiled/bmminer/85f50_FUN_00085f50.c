// FUN_00085f50 @ 00085f50  size=516  callers=0
// program: bmminer


int FUN_00085f50(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/zlog.c",0x1f8,"key is null or 0");
  }
  else {
    iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00a4e7dc);
    if (iVar1 == 0) {
      if (DAT_00a4e810 == 0) {
        FUN_00095b4c(2,"src/zlog.c",0x201,"never call zlog_init() or dzlog_init() before");
      }
      else {
        pvVar2 = pthread_getspecific(DAT_00a4e7fc);
        if (pvVar2 == (void *)0x0) {
          FUN_00095b4c(2,"src/zlog.c",0x207,"thread not found, maybe not use zlog_put_mdc before");
        }
        else {
          iVar1 = FUN_0008c6bc(*(undefined4 *)((int)pvVar2 + 4),param_1);
          if (iVar1 != 0) {
            iVar3 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
            if (iVar3 == 0) {
              return iVar1;
            }
            FUN_00095b4c(2,"src/zlog.c",0x213,"pthread_rwlock_unlock fail, rc=[%d]",iVar3);
            return 0;
          }
          FUN_00095b4c(2,"src/zlog.c",0x20d,"key[%s] not found in mdc",param_1);
        }
      }
      iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
      if (iVar1 != 0) {
        FUN_00095b4c(2,"src/zlog.c",0x21a,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
      }
    }
    else {
      FUN_00095b4c(2,"src/zlog.c",0x1fc,"pthread_rwlock_rdlock fail, rc[%d]",iVar1);
    }
  }
  return 0;
}

