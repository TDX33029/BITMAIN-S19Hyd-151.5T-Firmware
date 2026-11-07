// FUN_0005b1d8 @ 0005b1d8  size=460  callers=0
// program: bmminer


undefined4 FUN_0005b1d8(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_000658a8(2,"src/zlog.c",0x179,"cname is null or 0");
  }
  else {
    iVar2 = param_1;
    FUN_000658a8(0,"src/zlog.c",0x17b,"------dzlog_set_category[%s] start------",param_1);
    iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0071a0d8);
    if (iVar1 == 0) {
      if (DAT_0071a0f8 == 0) {
        FUN_000658a8(2,"src/zlog.c",0x183,"never call zlog_init() or dzlog_init() before",iVar2);
      }
      else {
        DAT_0071a0cc = FUN_0005d880(DAT_0071a0c8,param_1,*(undefined4 *)(DAT_00b2d318 + 0x2448));
        if (DAT_0071a0cc != 0) {
          FUN_000658a8(0,"src/zlog.c",400,"------dzlog_set_category[%s] end, success------ ",param_1
                      );
          iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
          if (iVar2 == 0) {
            return 0;
          }
          FUN_000658a8(2,"src/zlog.c",0x193,"pthread_rwlock_unlock fail, rc=[%d]",iVar2);
          return 0xffffffff;
        }
        FUN_000658a8(2,"src/zlog.c",0x18c,"zlog_category_table_fetch_category[%s] fail",param_1);
      }
      FUN_000658a8(2,"src/zlog.c",0x198,"------dzlog_set_category[%s] end, fail------ ",param_1);
      iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
      if (iVar2 != 0) {
        FUN_000658a8(2,"src/zlog.c",0x19b,"pthread_rwlock_unlock fail, rc=[%d]",iVar2);
        return 0xffffffff;
      }
    }
    else {
      FUN_000658a8(2,"src/zlog.c",0x17e,"pthread_rwlock_wrlock fail, rc[%d]",iVar1);
    }
  }
  return 0xffffffff;
}

