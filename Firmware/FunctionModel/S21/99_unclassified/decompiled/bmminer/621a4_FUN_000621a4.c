// FUN_000621a4 @ 000621a4  size=484  callers=3
// program: bmminer


undefined4 FUN_000621a4(int param_1,undefined1 *param_2)

{
  int iVar1;
  ssize_t sVar2;
  undefined4 uVar3;
  char local_850 [2048];
  char local_50 [68];
  int local_c;
  
  local_50[0] = '\0';
  local_50[1] = '\0';
  local_50[2] = '\0';
  local_50[3] = '\0';
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00944cdc);
  if (iVar1 == 0) {
    snprintf(local_50 + 4,0x40,"/sys/class/gpio/gpio%d/value",param_1);
    local_c = open(local_50 + 4,0x800);
    if (local_c < 0) {
      snprintf(local_850,0x800,"Failed to open gpio %d value for reading!\n",param_1);
      FUN_0004948c(0,local_850,0);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944cdc);
      uVar3 = 0xfffffffe;
    }
    else {
      sVar2 = read(local_c,local_50,4);
      if (sVar2 < 0) {
        builtin_strncpy(local_850,"Failed to read value!\n",0x17);
        FUN_0004948c(0,local_850,0);
        close(local_c);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944cdc);
        uVar3 = 0xfffffffd;
      }
      else {
        close(local_c);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944cdc);
        iVar1 = atoi(local_50);
        *param_2 = (char)iVar1;
        uVar3 = 0;
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

