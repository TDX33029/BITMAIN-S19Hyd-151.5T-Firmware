// FUN_0002ecbc @ 0002ecbc  size=60  callers=1
// program: bmminer


undefined4 FUN_0002ecbc(void)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0008a7a8);
  uVar1 = FUN_00035c60(DAT_0008a7c4,DAT_0008a7c0);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0008a7a8);
  return uVar1;
}

