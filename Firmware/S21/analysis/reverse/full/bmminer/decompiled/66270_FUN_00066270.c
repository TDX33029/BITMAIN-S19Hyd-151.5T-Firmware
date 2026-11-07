// FUN_00066270 @ 00066270  size=168  callers=0
// program: bmminer


void FUN_00066270(void)

{
  int iVar1;
  char local_808 [2048];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00945038);
  if (iVar1 == 0) {
    if (0 < DAT_000bf388) {
      FUN_00066664(DAT_000bf388);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00945038);
  }
  else {
    builtin_strncpy(local_808,"failed to api lock\n",0x14);
    FUN_0004948c(0,local_808,0);
  }
  return;
}

