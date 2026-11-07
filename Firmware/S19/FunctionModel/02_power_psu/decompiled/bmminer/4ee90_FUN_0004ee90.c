// FUN_0004ee90 @ 0004ee90  size=128  callers=2
// program: bmminer


void FUN_0004ee90(void)

{
  char local_810 [2052];
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc28);
  builtin_strncpy(local_810,"bitmain power close ===========\n",0x21);
  FUN_00032218(3,local_810,0);
  FUN_00050c08(DAT_0050fab8);
  memset(&DAT_0050fab8,0,0x170);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc28);
  return;
}

