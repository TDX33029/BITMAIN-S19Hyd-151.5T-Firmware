// FUN_00048490 @ 00048490  size=132  callers=0
// program: bmminer


void FUN_00048490(void)

{
  int iVar1;
  char local_808 [2052];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050f93c);
  if (iVar1 != 0) {
    builtin_strncpy(local_808,"failed to api lock\n",0x14);
    FUN_00032218(0,local_808);
    return;
  }
  if (0 < DAT_00088488) {
    FUN_00048738();
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f93c);
  return;
}

