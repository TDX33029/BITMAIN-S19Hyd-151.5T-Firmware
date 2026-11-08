// FUN_00062814 @ 00062814  size=156  callers=3
// program: bmminer


void FUN_00062814(undefined4 param_1)

{
  int iVar1;
  char local_80c [2048];
  undefined4 local_c;
  
  local_c = 0;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00944d10);
  if (iVar1 == 0) {
    FUN_000669ec(param_1);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944d10);
  }
  else {
    builtin_strncpy(local_80c,"failed to i2c lock\n",0x14);
    FUN_0004948c(0,local_80c,0);
  }
  return;
}

