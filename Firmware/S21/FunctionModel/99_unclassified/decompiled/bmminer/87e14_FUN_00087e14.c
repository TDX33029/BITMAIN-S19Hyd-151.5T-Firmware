// FUN_00087e14 @ 00087e14  size=456  callers=0
// program: bmminer


void FUN_00087e14(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_00a4e7dc);
  if (iVar1 == 0) {
    FUN_00095b4c(1,"src/zlog.c",0x3b7,"------zlog_profile start------ ");
    FUN_00095b4c(1,"src/zlog.c",0x3b8,"is init:[%d]",DAT_00a4e810);
    uVar2 = DAT_00a4e814;
    FUN_00095b4c(1,"src/zlog.c",0x3b9,"init version:[%d]",DAT_00a4e814);
    FUN_000891a4(DAT_012a29e4,1);
    FUN_0008ca14(DAT_00a4e804,1);
    FUN_00088d14(DAT_00a4e800,1);
    if (DAT_00a4e808 != 0) {
      FUN_00095b4c(1,"src/zlog.c",0x3be,"-default_category-",uVar2);
      FUN_0008832c(DAT_00a4e808,1);
    }
    FUN_00095b4c(1,"src/zlog.c",0x3c1,"------zlog_profile end------ ");
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
    if (iVar1 != 0) {
      FUN_00095b4c(2,"src/zlog.c",0x3c4,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
    }
  }
  else {
    FUN_00095b4c(2,"src/zlog.c",0x3b4,"pthread_rwlock_wrlock fail, rc[%d]",iVar1);
  }
  return;
}

