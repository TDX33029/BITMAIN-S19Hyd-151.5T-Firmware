// FUN_0004b084 @ 0004b084  size=80  callers=0
// program: bmminer


void FUN_0004b084(uint param_1)

{
  uint local_14 [2];
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fa6c);
  usleep(50000);
  FUN_00045bc4(0x1b,local_14);
  FUN_00049eb0(local_14[0] & 0xffffffc0 | param_1 & 0x3f);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fa6c);
  return;
}

