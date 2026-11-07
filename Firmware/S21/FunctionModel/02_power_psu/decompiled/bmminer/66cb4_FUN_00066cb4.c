// FUN_00066cb4 @ 00066cb4  size=728  callers=1
// program: bmminer


uint FUN_00066cb4(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int local_81c;
  char local_818 [2048];
  int *local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_81c = param_1;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_009450d8);
  if (iVar1 == 0) {
    local_10 = 0;
    local_18 = (int *)0x0;
    iVar1 = FUN_000684a0(DAT_009450f0,&local_81c,&local_18);
    if (iVar1 == 1) {
      local_14 = local_18;
      local_10 = *local_18 << 0x1a | ((uint)local_18[1] >> 4) << 0x14 |
                 ((uint)local_18[1] >> 1 & 7) << 0x10 | 0x2080000;
      for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
        iVar1 = FUN_00066bc0();
        if (iVar1 == 0) {
          free(local_18);
          builtin_strncpy(local_818,"iic not ready 4 read1\n",0x17);
          FUN_0004948c(0,local_818,0);
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_009450d8);
          return 0xfffffffe;
        }
        FUN_000612bc(0xc,local_10);
        usleep(50000);
        iVar1 = FUN_00066c30(param_2 + local_c);
        if (iVar1 == 0) {
          free(local_18);
          builtin_strncpy(local_818,"iic not ready 4 read2\n",0x17);
          FUN_0004948c(0,local_818,0);
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_009450d8);
          return 0xfffffffd;
        }
      }
      free(local_18);
      usleep(10000);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_009450d8);
    }
    else {
      snprintf(local_818,0x800,"ctx %d not inited\n",local_81c);
      FUN_0004948c(0,local_818,0);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_009450d8);
      param_3 = 0xfffffffe;
    }
  }
  else {
    builtin_strncpy(local_818,"failed to i2c lock\n",0x14);
    FUN_0004948c(0,local_818,0);
    param_3 = 0xffffffff;
  }
  return param_3;
}

