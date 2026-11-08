// FUN_000856dc @ 000856dc  size=588  callers=10
// program: bmminer


int FUN_000856dc(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/zlog.c",0x14e,"cname is null or 0");
  }
  else {
    iVar2 = param_1;
    FUN_00095b4c(0,"src/zlog.c",0x14f,"------zlog_get_category[%s] start------",param_1);
    iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00a4e7dc);
    if (iVar1 == 0) {
      if (DAT_00a4e810 == 0) {
        FUN_00095b4c(2,"src/zlog.c",0x157,"never call zlog_init() or dzlog_init() before",iVar2);
      }
      else {
        iVar2 = FUN_00089098(DAT_00a4e800,param_1,*(undefined4 *)(DAT_012a29e4 + 0x2448));
        if (iVar2 != 0) {
          FUN_00095b4c(0,"src/zlog.c",0x165,"------zlog_get_category[%s] success, end------ ",
                       param_1);
          iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
          if (iVar1 == 0) {
            return iVar2;
          }
          FUN_00095b4c(2,"src/zlog.c",0x168,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
          return 0;
        }
        FUN_00095b4c(2,"src/zlog.c",0x161,"zlog_category_table_fetch_category[%s] fail",param_1);
      }
      FUN_00095b4c(2,"src/zlog.c",0x16d,"------zlog_get_category[%s] fail, end------ ",param_1);
      iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
      if (iVar2 != 0) {
        FUN_00095b4c(2,"src/zlog.c",0x170,"pthread_rwlock_unlock fail, rc=[%d]",iVar2);
      }
    }
    else {
      FUN_00095b4c(2,"src/zlog.c",0x152,"pthread_rwlock_wrlock fail, rc[%d]",iVar1);
    }
  }
  return 0;
}

