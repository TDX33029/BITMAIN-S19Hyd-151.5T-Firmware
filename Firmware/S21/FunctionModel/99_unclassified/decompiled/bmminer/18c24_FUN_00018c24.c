// FUN_00018c24 @ 00018c24  size=116  callers=3
// program: bmminer


int FUN_00018c24(int param_1,uint param_2)

{
  short sVar1;
  
  if (7 < (param_2 & 0xffff)) {
    return -1;
  }
  if (DAT_000bfb74 == 0) {
    return 0;
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_000bfabc);
  sVar1 = *(short *)(*(int *)(*(int *)(DAT_000bfab8 + param_1 * 4) + 0x10) + param_2 * 6 + 2);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_000bfabc);
  return (int)sVar1;
}

