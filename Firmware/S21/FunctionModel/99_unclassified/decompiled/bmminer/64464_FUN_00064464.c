// FUN_00064464 @ 00064464  size=364  callers=0
// program: bmminer


undefined4 FUN_00064464(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  char acStack_810 [2048];
  int local_10;
  undefined4 local_c;
  
  local_c = 0xfffffffb;
  if ((param_3 == (int *)0x0) || (param_4 == (undefined4 *)0x0)) {
    local_c = 0xfffffffd;
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)(&DAT_00944d38 + param_1 * 0x18));
    if (param_2 == 0) {
      local_10 = 0;
      local_c = FUN_00061240(0xf,&local_10);
      *param_3 = local_10;
      *param_4 = 4;
      snprintf(acStack_810,0x800,"uart_get_config return %d\n",*param_3);
      FUN_0004948c(3,acStack_810,0);
    }
    else {
      snprintf(acStack_810,0x800,"unknown set config type = %d\n",param_2);
      FUN_0004948c(1,acStack_810,0);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944d38 + param_1 * 0x18));
  }
  return local_c;
}

