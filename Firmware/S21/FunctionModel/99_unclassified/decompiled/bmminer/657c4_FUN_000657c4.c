// FUN_000657c4 @ 000657c4  size=528  callers=9
// program: bmminer


undefined4 FUN_000657c4(undefined4 param_1,int param_2)

{
  int iVar1;
  char local_810 [2048];
  int local_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  local_10 = FUN_0006508c(param_1);
  if (local_10 == 0) {
    builtin_strncpy(local_810,"unsuported gpio port\n",0x16);
    FUN_0004948c(0,local_810,0);
    local_c = 0xffffffff;
  }
  else {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00945038);
    if (iVar1 == 0) {
      if (param_2 == 1) {
        FUN_000655a4(local_10,DAT_00945050);
        local_c = FUN_00062388(local_10,0);
      }
      else if (param_2 == 0) {
        FUN_000655a4(local_10,DAT_00945050);
        local_c = FUN_00062388(local_10,1);
      }
      else if (param_2 == 2) {
        FUN_00065620(local_10,200,DAT_00945050);
      }
      else {
        builtin_strncpy(local_810,"unsuported led status\n",0x17);
        FUN_0004948c(0,local_810,0);
        local_c = 0xfffffffe;
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00945038);
    }
    else {
      builtin_strncpy(local_810,"failed to api lock\n",0x14);
      FUN_0004948c(0,local_810,0);
      local_c = 0xffffffff;
    }
  }
  return local_c;
}

