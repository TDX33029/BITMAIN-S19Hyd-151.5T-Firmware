// FUN_00075104 @ 00075104  size=192  callers=1
// program: bmminer


undefined4 FUN_00075104(void)

{
  char local_808 [2048];
  
  if (DAT_009451f4 != 0) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_009451d8);
    builtin_strncpy(local_808,"bitmain power close ===========\n",0x21);
    FUN_0004948c(3,local_808,0);
    FUN_00062814(DAT_009451f0);
    memset(&DAT_009451f0,0,0x178);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_009451d8);
  }
  return 0;
}

