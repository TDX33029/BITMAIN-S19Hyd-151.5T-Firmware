// FUN_000660f4 @ 000660f4  size=380  callers=0
// program: bmminer


undefined4 FUN_000660f4(char param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char local_80c [2048];
  undefined4 local_c;
  
  local_c = 0xffffffff;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00945038);
  if (iVar1 == 0) {
    if (DAT_000bf388 < 0) {
      DAT_000bf388 = FUN_00066318(DAT_000bf38c);
      FUN_00066664(DAT_000bf388);
    }
    if (DAT_000bf388 < 1) {
      snprintf(local_80c,0x800,"failed to init %s\n",DAT_000bf38c);
      FUN_0004948c(0,local_80c,0);
      local_c = 0xffffffff;
    }
    else {
      local_c = FUN_0006643c(DAT_000bf388,(int)param_1,param_2,param_3);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00945038);
  }
  else {
    builtin_strncpy(local_80c,"failed to api lock\n",0x14);
    FUN_0004948c(0,local_80c,0);
    local_c = 0xfffffffc;
  }
  return local_c;
}

