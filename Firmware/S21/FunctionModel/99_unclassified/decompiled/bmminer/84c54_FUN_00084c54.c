// FUN_00084c54 @ 00084c54  size=560  callers=1
// program: bmminer


undefined4 FUN_00084c54(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_00095b4c(0,"src/zlog.c",0x77,"------zlog_init start------");
  pcVar4 = "1.2.12";
  pcVar3 = "17:55:49";
  pcVar2 = "Oct 16 2025";
  FUN_00095b4c(0,"src/zlog.c",0x78,"------compile time[%s %s], version[%s]------","Oct 16 2025",
               "17:55:49","1.2.12");
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00a4e7dc);
  if (iVar1 == 0) {
    if (DAT_00a4e810 == 0) {
      iVar1 = FUN_00084a7c(param_1);
      if (iVar1 == 0) {
        DAT_00a4e810 = 1;
        DAT_00a4e814 = DAT_00a4e814 + 1;
        FUN_00095b4c(0,"src/zlog.c",0x8e,"------zlog_init success end------",pcVar2,pcVar3,pcVar4);
        iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
        if (iVar1 == 0) {
          return 0;
        }
        FUN_00095b4c(2,"src/zlog.c",0x91,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
        return 0xffffffff;
      }
      FUN_00095b4c(2,"src/zlog.c",0x87,"zlog_init_inner[%s] fail",param_1,pcVar3,pcVar4);
    }
    else {
      FUN_00095b4c(2,"src/zlog.c",0x81,"already init, use zlog_reload pls",pcVar2,pcVar3,pcVar4);
      param_1 = pcVar2;
    }
    FUN_00095b4c(2,"src/zlog.c",0x96,"------zlog_init fail end------",param_1,pcVar3,pcVar4);
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
    if (iVar1 != 0) {
      FUN_00095b4c(2,"src/zlog.c",0x99,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
    }
  }
  else {
    FUN_00095b4c(2,"src/zlog.c",0x7c,"pthread_rwlock_wrlock fail, rc[%d]",iVar1,pcVar3,pcVar4);
  }
  return 0xffffffff;
}

