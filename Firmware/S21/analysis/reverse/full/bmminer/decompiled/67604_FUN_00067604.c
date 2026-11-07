// FUN_00067604 @ 00067604  size=920  callers=1
// program: bmminer


uint FUN_00067604(int param_1,byte *param_2,int param_3,int param_4,uint param_5,char param_6)

{
  int iVar1;
  int local_824 [2];
  char local_81c [20];
  undefined4 local_808;
  char acStack_804 [2024];
  int *local_1c;
  undefined1 uStack_15;
  int *local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_824[0] = param_1;
  if (param_3 == 1) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_009450d8);
    if (iVar1 == 0) {
      local_10 = 0;
      local_1c = (int *)0x0;
      iVar1 = FUN_000684a0(DAT_009450f0,local_824,&local_1c);
      if (iVar1 == 1) {
        local_14 = local_1c;
        for (local_c = 0; local_c < param_5; local_c = local_c + 1) {
          local_10 = *local_14 << 0x1a | ((uint)local_14[1] >> 4) << 0x14 |
                     ((uint)local_14[1] >> 1 & 7) << 0x10 | (uint)*(byte *)(param_4 + local_c);
          if (param_6 != '\0') {
            local_10 = (*param_2 + local_c) * 0x100 | local_10 | 0x1000000;
          }
          iVar1 = FUN_00066bc0();
          if (iVar1 == 0) {
            builtin_strncpy(local_81c,"iic not ready 4 writ",0x14);
            local_808 = CONCAT13(local_808._3_1_,0xa65);
            FUN_0004948c(0,local_81c,0);
            free(local_1c);
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_009450d8);
            return 0xfffffffe;
          }
          FUN_000612bc(0xc,local_10);
          usleep(10000);
          iVar1 = FUN_00066c30(&uStack_15);
          if (iVar1 == 0) {
            builtin_strncpy(local_81c,"iic write reg failed",0x14);
            local_808 = CONCAT22(local_808._2_2_,10);
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
        param_5 = 0xfffffffe;
      }
    }
    else {
      builtin_strncpy(local_81c,"failed to i2c lock\n",0x14);
      FUN_0004948c(0,local_81c,0);
      param_5 = 0xffffffff;
    }
  }
  else {
    builtin_strncpy(local_81c,"more than one byte r",0x14);
    local_808._0_1_ = 'e';
    local_808._1_1_ = 'g';
    local_808._2_1_ = ' ';
    local_808._3_1_ = 'a';
    builtin_strncpy(acStack_804,"ddress is not supported\n",0x19);
    FUN_0004948c(0,local_81c,0);
    param_5 = 0xfffffffd;
  }
  return param_5;
}

