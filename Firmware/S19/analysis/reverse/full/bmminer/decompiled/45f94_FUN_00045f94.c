// FUN_00045f94 @ 00045f94  size=172  callers=2
// program: bmminer


undefined4 FUN_00045f94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_810 [2052];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050f618);
  if (iVar1 == 0) {
    snprintf(local_810,0x40,"/sys/class/gpio/gpio%d",param_1);
    iVar1 = access(local_810,0);
    if (iVar1 == 0) {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
      return 1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
    uVar2 = 0;
  }
  else {
    builtin_strncpy(local_810,"failed to api lock\n",0x14);
    FUN_00032218(0,local_810);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

