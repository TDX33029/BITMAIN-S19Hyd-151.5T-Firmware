// FUN_00045c7c @ 00045c7c  size=56  callers=7
// program: bmminer


void FUN_00045c7c(void)

{
  pthread_mutex_lock((pthread_mutex_t *)&DAT_000c9614);
  DAT_00a5f350 = 0;
  DAT_00a5f354 = 0;
  DAT_00a5f358 = 0;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_000c9614);
  return;
}

