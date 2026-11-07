// FUN_0006f67c @ 0006f67c  size=596  callers=19
// program: bmminer


int FUN_0006f67c(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  char local_818 [2051];
  undefined1 local_15;
  int local_14;
  int local_10;
  byte local_a;
  byte local_9;
  
  local_9 = 0;
  local_a = 0;
  local_10 = 0;
  local_15 = 0x11;
  if ((param_3 & 1) == 0) {
    if ((param_5 & 1) == 0) {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_009451d8);
      for (local_a = 0; local_a < 4; local_a = local_a + 1) {
        for (local_9 = 0; local_9 < param_3; local_9 = local_9 + 1) {
          FUN_00062ad0(param_1,&local_15,1,param_2 + (uint)local_9,1,0);
        }
        usleep(500000);
        local_14 = param_4;
        for (local_9 = 0; local_9 < param_5; local_9 = local_9 + 1) {
          FUN_00062a08(param_1,&local_15,1,local_14 + (uint)local_9,1,0);
        }
        usleep(100000);
        local_10 = FUN_0006f1fc(param_2,param_4,param_5);
        if (local_10 == 0) break;
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_009451d8);
    }
    else {
      builtin_strncpy(local_818,"WARNING: exec_power_cmd_v2 only support even len\n",0x32);
      FUN_0004948c(3,local_818,0);
      local_10 = -1;
    }
  }
  else {
    builtin_strncpy(local_818,"WARNING: exec_power_cmd_v2 only support even len\n",0x32);
    FUN_0004948c(3,local_818,0);
    local_10 = -1;
  }
  return local_10;
}

