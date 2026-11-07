// FUN_0005aa00 @ 0005aa00  size=548  callers=0
// program: bmminer


undefined4 FUN_0005aa00(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_000658a8(0,"src/zlog.c",0xa2,"------dzlog_init start------");
  pcVar4 = "1.2.12";
  pcVar3 = "09:48:47";
  pcVar2 = "Dec 17 2022";
  FUN_000658a8(0,"src/zlog.c",0xa4,"------compile time[%s %s], version[%s]------","Dec 17 2022",
               "09:48:47","1.2.12");
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0071a0d8);
  if (iVar1 == 0) {
    if (DAT_0071a0f8 == 0) {
      iVar1 = FUN_0005a6e0(param_1);
      if (iVar1 == 0) {
        DAT_0071a0cc = FUN_0005d880(DAT_0071a0c8,param_2,*(undefined4 *)(DAT_00b2d318 + 0x2448));
        if (DAT_0071a0cc != 0) {
          DAT_0071a0d4 = DAT_0071a0d4 + 1;
          DAT_0071a0f8 = 1;
          FUN_000658a8(0,"src/zlog.c",0xc2,"------dzlog_init success end------",pcVar2,pcVar3,pcVar4
                      );
          iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
          if (iVar1 == 0) {
            return 0;
          }
          FUN_000658a8(2,"src/zlog.c",0xc5,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
          return 0xffffffff;
        }
        FUN_000658a8(2,"src/zlog.c",0xbb,"zlog_category_table_fetch_category[%s] fail",param_2,
                     pcVar3,pcVar4);
        pcVar2 = param_2;
      }
      else {
        FUN_000658a8(2,"src/zlog.c",0xb2,"zlog_init_inner[%s] fail",param_1,pcVar3,pcVar4);
        pcVar2 = param_1;
      }
    }
    else {
      FUN_000658a8(2,"src/zlog.c",0xad,"already init, use zlog_reload pls",pcVar2,pcVar3,pcVar4);
    }
    FUN_000658a8(2,"src/zlog.c",0xca,"------dzlog_init fail end------",pcVar2,pcVar3,pcVar4);
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
    if (iVar1 != 0) {
      FUN_000658a8(2,"src/zlog.c",0xcd,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
      return 0xffffffff;
    }
  }
  else {
    FUN_000658a8(2,"src/zlog.c",0xa8,"pthread_rwlock_wrlock fail, rc[%d]",iVar1,pcVar3,pcVar4);
  }
  return 0xffffffff;
}

