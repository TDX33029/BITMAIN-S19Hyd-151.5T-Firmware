// FUN_00064364 @ 00064364  size=256  callers=0
// program: bmminer


undefined4 FUN_00064364(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  char acStack_80c [2048];
  undefined4 local_c;
  
  local_c = 0xfffffffb;
  if (param_3 == (undefined4 *)0x0) {
    local_c = 0xfffffffd;
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)(&DAT_00944d38 + param_1 * 0x18));
    if (param_2 == 0) {
      FUN_000612bc(0xf,*param_3);
    }
    else {
      snprintf(acStack_80c,0x800,"unknown set config type = %d\n",param_2);
      FUN_0004948c(1,acStack_80c,0,acStack_80c,param_4);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(&DAT_00944d38 + param_1 * 0x18));
  }
  return local_c;
}

