// FUN_00062388 @ 00062388  size=484  callers=6
// program: bmminer


undefined4 FUN_00062388(int param_1,char param_2)

{
  int iVar1;
  ssize_t sVar2;
  undefined4 uVar3;
  char local_84c [2048];
  char acStack_4c [64];
  int local_c;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00944cdc);
  if (iVar1 == 0) {
    snprintf(acStack_4c,0x40,"/sys/class/gpio/gpio%d/value",param_1);
    local_c = open(acStack_4c,0x801);
    if (local_c < 0) {
      builtin_strncpy(local_84c,"Failed to open gpio value for writing!\n",0x28);
      FUN_0004948c(0,local_84c,0);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944cdc);
      uVar3 = 0xfffffffe;
    }
    else {
      sVar2 = write(local_c,&DAT_000a7884 + (param_2 != '\0'),1);
      if (sVar2 < 0) {
        builtin_strncpy(local_84c,"Failed to write value!\n",0x18);
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

