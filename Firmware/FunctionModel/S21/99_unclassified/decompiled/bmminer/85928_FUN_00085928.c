// FUN_00085928 @ 00085928  size=592  callers=0
// program: bmminer


undefined4 FUN_00085928(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_00095b4c(2,"src/zlog.c",0x179,"cname is null or 0");
  }
  else {
    iVar2 = param_1;
    FUN_00095b4c(0,"src/zlog.c",0x17b,"------dzlog_set_category[%s] start------",param_1);
    iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00a4e7dc);
    if (iVar1 == 0) {
      if (DAT_00a4e810 == 0) {
        FUN_00095b4c(2,"src/zlog.c",0x183,"never call zlog_init() or dzlog_init() before",iVar2);
      }
      else {
        DAT_00a4e808 = FUN_00089098(DAT_00a4e800,param_1,*(undefined4 *)(DAT_012a29e4 + 0x2448));
        if (DAT_00a4e808 != 0) {
          FUN_00095b4c(0,"src/zlog.c",400,"------dzlog_set_category[%s] end, success------ ",param_1
                      );
          iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
          if (iVar2 == 0) {
            return 0;
          }
          FUN_00095b4c(2,"src/zlog.c",0x193,"pthread_rwlock_unlock fail, rc=[%d]",iVar2);
          return 0xffffffff;
        }
        FUN_00095b4c(2,"src/zlog.c",0x18c,"zlog_category_table_fetch_category[%s] fail",param_1);
      }
      FUN_00095b4c(2,"src/zlog.c",0x198,"------dzlog_set_category[%s] end, fail------ ",param_1);
      iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
      if (iVar2 != 0) {
        FUN_00095b4c(2,"src/zlog.c",0x19b,"pthread_rwlock_unlock fail, rc=[%d]",iVar2);
      }
    }
    else {
      FUN_00095b4c(2,"src/zlog.c",0x17e,"pthread_rwlock_wrlock fail, rc[%d]",iVar1);
    }
  }
  return 0xffffffff;
}

