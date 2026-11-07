// FUN_00046044 @ 00046044  size=376  callers=3
// program: bmminer


undefined4 FUN_00046044(int param_1)

{
  int iVar1;
  size_t __n;
  ssize_t sVar2;
  undefined4 uVar3;
  char acStack_850 [64];
  char local_810 [2048];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050f618);
  if (iVar1 == 0) {
    snprintf(acStack_850,0x40,"/sys/class/gpio/gpio%d",param_1);
    iVar1 = access(acStack_850,0);
    if (iVar1 == 0) {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
      return 0;
    }
    iVar1 = open64("/sys/class/gpio/export",1);
    if (iVar1 < 0) {
      builtin_strncpy(local_810,"Failed to open export for writing!\n",0x24);
      FUN_00032218(0,local_810,0);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
      uVar3 = 0xfffffffe;
    }
    else {
      __n = snprintf(acStack_850,0x40,"%d",param_1);
      sVar2 = write(iVar1,acStack_850,__n);
      if (sVar2 < 0) {
        snprintf(local_810,0x800,"Failed to export gpio %d!",param_1);
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

