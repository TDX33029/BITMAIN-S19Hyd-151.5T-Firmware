// FUN_000464d8 @ 000464d8  size=356  callers=1
// program: bmminer


undefined4 FUN_000464d8(int param_1,undefined1 *param_2)

{
  int iVar1;
  ssize_t sVar2;
  long lVar3;
  undefined4 uVar4;
  char local_85c [68];
  char local_818 [2052];
  
  local_85c[0] = '\0';
  local_85c[1] = '\0';
  local_85c[2] = '\0';
  local_85c[3] = '\0';
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050f618);
  if (iVar1 == 0) {
    snprintf(local_85c + 4,0x40,"/sys/class/gpio/gpio%d/value",param_1);
    iVar1 = open64(local_85c + 4,0);
    if (iVar1 < 0) {
      snprintf(local_818,0x800,"Failed to open gpio %d value for reading!\n",param_1);
      uVar4 = 0xfffffffe;
      FUN_00032218(0,local_818,0);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
    }
    else {
      sVar2 = read(iVar1,local_85c,4);
      if (sVar2 < 0) {
        builtin_strncpy(local_818,"Failed to read value!\n",0x17);
        uVar4 = 0xfffffffd;
        FUN_00032218(0,local_818,0);
        close(iVar1);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
      }
      else {
        close(iVar1);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f618);
        lVar3 = strtol(local_85c,(char **)0x0,10);
        *param_2 = (char)lVar3;
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0xffffffff;
    builtin_strncpy(local_818,"failed to api lock\n",0x14);
    FUN_00032218(0,local_818,0);
  }
  return uVar4;
}

