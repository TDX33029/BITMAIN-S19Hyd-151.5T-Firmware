// FUN_00046388 @ 00046388  size=332  callers=3
// program: bmminer


undefined4 FUN_00046388(int param_1,int param_2)

{
  int iVar1;
  ssize_t sVar2;
  undefined4 uVar3;
  size_t extraout_r2;
  size_t __n;
  char *param4;
  char acStack_858 [64];
  char local_818 [2052];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050f618);
  if (iVar1 == 0) {
    snprintf(acStack_858,0x40,"/sys/class/gpio/gpio%d/direction",param_1);
    iVar1 = open64(acStack_858,1);
    if (iVar1 < 0) {
      snprintf(local_818,0x800,"Failed to open gpio %d direction for writing!\n",param_1);
      FUN_00032218(0,local_818,0);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
      uVar3 = 0xfffffffe;
    }
    else {
      __n = extraout_r2;
      if (param_2 == 0) {
        __n = 2;
      }
      param4 = "out";
      if (param_2 == 0) {
        param4 = "in";
      }
      else {
        __n = 3;
      }
      sVar2 = write(iVar1,param4,__n);
      if (sVar2 < 0) {
        snprintf(local_818,0x800,"Failed to set gpio %d direction %s !\n",param_1,param4);
        FUN_00032218(0,local_818,0);
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
    builtin_strncpy(local_818,"failed to api lock\n",0x14);
    FUN_00032218(0,local_818);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

