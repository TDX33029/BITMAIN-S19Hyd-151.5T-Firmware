// FUN_0005b008 @ 0005b008  size=460  callers=8
// program: bmminer


int FUN_0005b008(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_000658a8(2,"src/zlog.c",0x14e,"cname is null or 0");
  }
  else {
    iVar2 = param_1;
    FUN_000658a8(0,"src/zlog.c",0x14f,"------zlog_get_category[%s] start------",param_1);
    iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0071a0d8);
    if (iVar1 == 0) {
      if (DAT_0071a0f8 == 0) {
        FUN_000658a8(2,"src/zlog.c",0x157,"never call zlog_init() or dzlog_init() before",iVar2);
      }
      else {
        iVar2 = FUN_0005d880(DAT_0071a0c8,param_1,*(undefined4 *)(DAT_00b2d318 + 0x2448));
        if (iVar2 != 0) {
          FUN_000658a8(0,"src/zlog.c",0x165,"------zlog_get_category[%s] success, end------ ",
                       param_1);
          iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
          if (iVar1 == 0) {
            return iVar2;
          }
          FUN_000658a8(2,"src/zlog.c",0x168,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
          return 0;
        }
        FUN_000658a8(2,"src/zlog.c",0x161,"zlog_category_table_fetch_category[%s] fail",param_1);
      }
      FUN_000658a8(2,"src/zlog.c",0x16d,"------zlog_get_category[%s] fail, end------ ",param_1);
      iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
      if (iVar2 != 0) {
        FUN_000658a8(2,"src/zlog.c",0x170,"pthread_rwlock_unlock fail, rc=[%d]",iVar2);
        return 0;
      }
    }
    else {
      FUN_000658a8(2,"src/zlog.c",0x152,"pthread_rwlock_wrlock fail, rc[%d]",iVar1);
    }
  }
  return 0;
}

