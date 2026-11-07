// FUN_00084e84 @ 00084e84  size=692  callers=0
// program: bmminer


undefined4 FUN_00084e84(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_00095b4c(0,"src/zlog.c",0xa2,"------dzlog_init start------");
  pcVar4 = "1.2.12";
  pcVar3 = "17:55:49";
  pcVar2 = "Oct 16 2025";
  FUN_00095b4c(0,"src/zlog.c",0xa4,"------compile time[%s %s], version[%s]------","Oct 16 2025",
               "17:55:49","1.2.12");
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_00a4e7dc);
  if (iVar1 == 0) {
    if (DAT_00a4e810 == 0) {
      iVar1 = FUN_00084a7c(param_1);
      if (iVar1 == 0) {
        DAT_00a4e808 = FUN_00089098(DAT_00a4e800,param_2,*(undefined4 *)(DAT_012a29e4 + 0x2448));
        if (DAT_00a4e808 != 0) {
          DAT_00a4e810 = 1;
          DAT_00a4e814 = DAT_00a4e814 + 1;
          FUN_00095b4c(0,"src/zlog.c",0xc2,"------dzlog_init success end------",pcVar2,pcVar3,pcVar4
                      );
          iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
          if (iVar1 == 0) {
            return 0;
          }
          FUN_00095b4c(2,"src/zlog.c",0xc5,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
          return 0xffffffff;
        }
        FUN_00095b4c(2,"src/zlog.c",0xbb,"zlog_category_table_fetch_category[%s] fail",param_2,
                     pcVar3,pcVar4);
      }
      else {
        FUN_00095b4c(2,"src/zlog.c",0xb2,"zlog_init_inner[%s] fail",param_1,pcVar3,pcVar4);
        param_2 = param_1;
      }
    }
    else {
      FUN_00095b4c(2,"src/zlog.c",0xad,"already init, use zlog_reload pls",pcVar2,pcVar3,pcVar4);
      param_2 = pcVar2;
    }
    FUN_00095b4c(2,"src/zlog.c",0xca,"------dzlog_init fail end------",param_2,pcVar3,pcVar4);
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_00a4e7dc);
    if (iVar1 != 0) {
      FUN_00095b4c(2,"src/zlog.c",0xcd,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
    }
  }
  else {
    FUN_00095b4c(2,"src/zlog.c",0xa8,"pthread_rwlock_wrlock fail, rc[%d]",iVar1,pcVar3,pcVar4);
  }
  return 0xffffffff;
}

