// FUN_0001894c @ 0001894c  size=44  callers=0
// program: bmminer


void FUN_0001894c(undefined1 param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)&DAT_000bfb4c);
  DAT_000bfb64 = param_1;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_000bfb4c);
  return;
}

