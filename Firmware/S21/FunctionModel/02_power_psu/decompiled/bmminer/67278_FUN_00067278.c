// FUN_00067278 @ 00067278  size=908  callers=1
// program: bmminer


uint FUN_00067278(int param_1,byte *param_2,int param_3,int param_4,uint param_5,char param_6)

{
  int iVar1;
  int local_81c;
  char local_818 [20];
  undefined4 local_804;
  char acStack_800 [2024];
  int *local_18;
  int *local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_81c = param_1;
  if ((param_3 == 1) || (param_3 == 2)) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_009450d8);
    if (iVar1 == 0) {
      local_10 = 0;
      local_18 = (int *)0x0;
      iVar1 = FUN_000684a0(DAT_009450f0,&local_81c,&local_18);
      if (iVar1 == 1) {
        local_14 = local_18;
        for (local_c = 0; local_c < param_5; local_c = local_c + 1 + param_3) {
          if (param_3 == 2) {
            local_10 = *local_14 << 0x1a | ((uint)local_14[1] >> 4) << 0x14 |
                       ((uint)local_14[1] >> 1 & 7) << 0x10 | 0x2000000;
          }
          else {
            local_10 = *local_14 << 0x1a | ((uint)local_14[1] >> 4) << 0x14 |
                       ((uint)local_14[1] >> 1 & 7) << 0x10 | 0x2080000;
          }
          if (param_6 != '\0') {
            local_10 = (*param_2 + local_c) * 0x100 | local_10 | 0x1000000;
          }
          iVar1 = FUN_00066bc0();
          if (iVar1 == 0) {
            builtin_strncpy(local_818,"iic not ready 4 read",0x14);
            local_804 = CONCAT13(local_804._3_1_,0xa31);
            FUN_0004948c(0,local_818,0);
            free(local_18);
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_009450d8);
            return 0xfffffffe;
          }
          FUN_000612bc(0xc,local_10);
          usleep(10000);
          iVar1 = FUN_00066c30(param_4 + local_c);
          if (iVar1 == 0) {
            free(local_18);
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
        param_5 = 0xfffffffe;
      }
    }
    else {
      builtin_strncpy(local_818,"failed to i2c lock\n",0x14);
      FUN_0004948c(0,local_818,0);
      param_5 = 0xffffffff;
    }
  }
  else {
    builtin_strncpy(local_818,"more than two byte r",0x14);
    local_804._0_1_ = 'e';
    local_804._1_1_ = 'g';
    local_804._2_1_ = ' ';
    local_804._3_1_ = 'd';
    builtin_strncpy(acStack_800,"ata len is not supported\n",0x1a);
    FUN_0004948c(0,local_818,0);
    param_5 = 0xfffffffd;
  }
  return param_5;
}

