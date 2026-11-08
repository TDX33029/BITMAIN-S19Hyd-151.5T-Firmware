// FUN_00046784 @ 00046784  size=320  callers=5
// program: bmminer


undefined4 FUN_00046784(int param_1,int param_2)

{
  int iVar1;
  ssize_t sVar2;
  undefined4 uVar3;
  undefined *__buf;
  char acStack_850 [64];
  char local_810 [2048];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050f618);
  if (iVar1 == 0) {
    snprintf(acStack_850,0x40,"/sys/class/gpio/gpio%d/value",param_1);
    iVar1 = open64(acStack_850,1);
    if (iVar1 < 0) {
      builtin_strncpy(local_810,"Failed to open gpio value for writing!\n",0x28);
      FUN_00032218(0,local_810,0);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
      uVar3 = 0xfffffffe;
    }
    else {
      __buf = &DAT_000715e8;
      if (param_2 != 0) {
        __buf = &DAT_000715e9;
      }
      sVar2 = write(iVar1,__buf,1);
      if (sVar2 < 0) {
        builtin_strncpy(local_810,"Failed to write value!\n",0x18);
        FUN_00032218(0,local_810,0);
        close(iVar1);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
        uVar3 = 0xfffffffd;
      }
      else {
        close(iVar1);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
        uVar3 = 0;
      }
    }
  }
  else {
    builtin_strncpy(local_810,"failed to api lock\n",0x14);
    FUN_00032218(0,local_810);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

