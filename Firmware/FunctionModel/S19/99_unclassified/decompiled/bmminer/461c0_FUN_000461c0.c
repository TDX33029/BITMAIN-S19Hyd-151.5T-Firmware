// FUN_000461c0 @ 000461c0  size=452  callers=0
// program: bmminer


undefined4 FUN_000461c0(int param_1)

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
    if (iVar1 != 0) {
      snprintf(local_810,0x800,"port %d already unexported, ret = %d\n",param_1,iVar1);
      FUN_00032218(1,local_810,0);
      perror("access error");
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
      return 0;
    }
    iVar1 = open64("/sys/class/gpio/unexport",1);
    if (iVar1 < 0) {
      builtin_strncpy(local_810,"Failed to open unexport for writing!\n",0x26);
      FUN_00032218(0,local_810,0);
      uVar3 = 0xfffffffe;
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
    }
    else {
      __n = snprintf(acStack_850,0x40,"%d",param_1);
      sVar2 = write(iVar1,acStack_850,__n);
      if (sVar2 < 0) {
        snprintf(local_810,0x800,"Failed to unexport gpio %d!",param_1);
        uVar3 = 0xfffffffe;
        FUN_00032218(0,local_810,0);
        close(iVar1);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
      }
      else {
        close(iVar1);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0xffffffff;
    builtin_strncpy(local_810,"failed to api lock\n",0x14);
    FUN_00032218(0,local_810);
  }
  return uVar3;
}

