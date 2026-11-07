// FUN_00061fa4 @ 00061fa4  size=512  callers=3
// program: bmminer


undefined4 FUN_00061fa4(int param_1,int param_2)

{
  int iVar1;
  ssize_t sVar2;
  undefined4 uVar3;
  size_t __n;
  char local_84c [2048];
  char acStack_4c [64];
  int local_c;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00944cdc);
  if (iVar1 == 0) {
    snprintf(acStack_4c,0x40,"/sys/class/gpio/gpio%d/direction",param_1);
    local_c = open(acStack_4c,1);
    if (local_c < 0) {
      snprintf(local_84c,0x800,"Failed to open gpio %d direction for writing!\n",param_1);
      FUN_0004948c(0,local_84c,0);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944cdc);
      uVar3 = 0xfffffffe;
    }
    else {
      if (param_2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = 3;
      }
      if (param_2 == 0) {
        __n = 2;
      }
      else {
        __n = 3;
      }
      sVar2 = write(local_c,&DAT_000a787c + iVar1,__n);
      if (sVar2 < 0) {
        if (param_2 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = 3;
        }
        snprintf(local_84c,0x800,"Failed to set gpio %d direction %s !\n",param_1,
                 &DAT_000a787c + iVar1);
        FUN_0004948c(0,local_84c,0);
        close(local_c);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944cdc);
        uVar3 = 0xfffffffd;
      }
      else {
        close(local_c);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944cdc);
        uVar3 = 0;
      }
    }
  }
  else {
    builtin_strncpy(local_84c,"failed to api lock\n",0x14);
    FUN_0004948c(0,local_84c,0);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

