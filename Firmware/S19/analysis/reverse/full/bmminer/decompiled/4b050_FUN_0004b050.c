// FUN_0004b050 @ 0004b050  size=48  callers=0
// program: bmminer


void FUN_0004b050(void)

{
  undefined1 auStack_c [4];
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa6c);
  FUN_00045bc4(0x1b,auStack_c);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa6c);
  return;
}

