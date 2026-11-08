// FUN_00066f8c @ 00066f8c  size=748  callers=1
// program: bmminer


uint FUN_00066f8c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int local_824 [2];
  char local_81c [16];
  undefined4 local_80c;
  undefined2 local_808;
  undefined1 local_806;
  int *local_1c;
  undefined1 uStack_15;
  int *local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_824[0] = param_1;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_009450d8);
  if (iVar1 == 0) {
    local_10 = 0;
    local_1c = (int *)0x0;
    iVar1 = FUN_000684a0(DAT_009450f0,local_824,&local_1c);
    if (iVar1 == 1) {
      local_14 = local_1c;
      for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
        local_10 = *local_14 << 0x1a | ((uint)local_14[1] >> 4) << 0x14 |
                   ((uint)local_14[1] >> 1 & 7) << 0x10 | (uint)*(byte *)(param_2 + local_c);
        iVar1 = FUN_00066bc0();
        if (iVar1 == 0) {
          free(local_1c);
          builtin_strncpy(local_81c,"iic not ready 4 ",0x10);
          local_80c._0_1_ = 'w';
          local_80c._1_1_ = 'r';
          local_80c._2_1_ = 'i';
          local_80c._3_1_ = 't';
          local_808 = 0xa65;
          local_806 = 0;
          FUN_0004948c(0,local_81c,0);
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_009450d8);
          return 0xfffffffe;
        }
        FUN_000612bc(0xc,local_10);
        usleep(10000);
        iVar1 = FUN_00066c30(&uStack_15);
        if (iVar1 == 0) {
          builtin_strncpy(local_81c,"iic write failed",0x10);
          local_80c = CONCAT22(local_80c._2_2_,10);
          FUN_0004948c(0,local_81c,0);
          free(local_1c);
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_009450d8);
          return 0xfffffffd;
        }
      }
      free(local_1c);
      usleep(10000);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_009450d8);
    }
    else {
      snprintf(local_81c,0x800,"ctx %d not inited\n",local_824[0]);
      FUN_0004948c(0,local_81c,0);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_009450d8);
      param_3 = 0xfffffffe;
    }
  }
  else {
    builtin_strncpy(local_81c,"failed to i2c lo",0x10);
    local_80c._0_1_ = 'c';
    local_80c._1_1_ = 'k';
    local_80c._2_1_ = '\n';
    local_80c._3_1_ = '\0';
    FUN_0004948c(0,local_81c,0);
    param_3 = 0xffffffff;
  }
  return param_3;
}

