// FUN_00065538 @ 00065538  size=108  callers=0
// program: bmminer


void FUN_00065538(void)

{
  if (DAT_00945058 != 0) {
    DAT_00945058 = 0;
    pthread_join(DAT_0094505c,(void **)0x0);
    FUN_0006851c(DAT_00945050);
    pthread_mutex_destroy((pthread_mutex_t *)&DAT_00945038);
  }
  return;
}

