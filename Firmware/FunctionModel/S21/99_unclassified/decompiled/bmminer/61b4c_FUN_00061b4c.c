// FUN_00061b4c @ 00061b4c  size=508  callers=3
// program: bmminer


undefined4 FUN_00061b4c(int param_1)

{
  int iVar1;
  ssize_t sVar2;
  undefined4 uVar3;
  char local_850 [2048];
  char acStack_50 [64];
  size_t local_10;
  int local_c;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00944cdc);
  if (iVar1 == 0) {
    snprintf(acStack_50,0x40,"/sys/class/gpio/gpio%d",param_1);
    iVar1 = access(acStack_50,0);
    if (iVar1 == 0) {
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944cdc);
      uVar3 = 0;
    }
    else {
      local_c = open("/sys/class/gpio/export",1);
      if (local_c < 0) {
        builtin_strncpy(local_850,"Failed to open export for writing!\n",0x24);
        FUN_0004948c(0,local_850,0);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944cdc);
        uVar3 = 0xfffffffe;
      }
      else {
        local_10 = snprintf(acStack_50,0x40,"%d",param_1);
        sVar2 = write(local_c,acStack_50,local_10);
        if (sVar2 < 0) {
          snprintf(local_850,0x800,"Failed to export gpio %d!",param_1);
          FUN_0004948c(0,local_850,0);
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
  }
  else {
    builtin_strncpy(local_850,"failed to api lock\n",0x14);
    FUN_0004948c(0,local_850,0);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

