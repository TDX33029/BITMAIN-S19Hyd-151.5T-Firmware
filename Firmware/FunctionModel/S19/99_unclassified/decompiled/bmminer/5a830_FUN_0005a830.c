// FUN_0005a830 @ 0005a830  size=460  callers=1
// program: bmminer


undefined4 FUN_0005a830(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_000658a8(0,"src/zlog.c",0x77,"------zlog_init start------");
  pcVar4 = "1.2.12";
  pcVar3 = "09:48:47";
  pcVar2 = "Dec 17 2022";
  FUN_000658a8(0,"src/zlog.c",0x78,"------compile time[%s %s], version[%s]------","Dec 17 2022",
               "09:48:47","1.2.12");
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0071a0d8);
  if (iVar1 == 0) {
    if (DAT_0071a0f8 == 0) {
      iVar1 = FUN_0005a6e0(param_1);
      if (iVar1 == 0) {
        DAT_0071a0d4 = DAT_0071a0d4 + 1;
        DAT_0071a0f8 = 1;
        FUN_000658a8(0,"src/zlog.c",0x8e,"------zlog_init success end------",pcVar2,pcVar3,pcVar4);
        iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
        if (iVar1 == 0) {
          return 0;
        }
        FUN_000658a8(2,"src/zlog.c",0x91,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
        return 0xffffffff;
      }
      FUN_000658a8(2,"src/zlog.c",0x87,"zlog_init_inner[%s] fail",param_1,pcVar3,pcVar4);
      pcVar2 = param_1;
    }
    else {
      FUN_000658a8(2,"src/zlog.c",0x81,"already init, use zlog_reload pls",pcVar2,pcVar3,pcVar4);
    }
    FUN_000658a8(2,"src/zlog.c",0x96,"------zlog_init fail end------",pcVar2,pcVar3,pcVar4);
    iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0071a0d8);
    if (iVar1 != 0) {
      FUN_000658a8(2,"src/zlog.c",0x99,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
      return 0xffffffff;
    }
  }
  else {
    FUN_000658a8(2,"src/zlog.c",0x7c,"pthread_rwlock_wrlock fail, rc[%d]",iVar1,pcVar3,pcVar4);
  }
  return 0xffffffff;
}

