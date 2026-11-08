// FUN_000616d4 @ 000616d4  size=140  callers=0
// program: bmminer


void FUN_000616d4(void)

{
  if (DAT_00944cd0 != 0) {
    DAT_00944cd4 = 0;
    pthread_join(DAT_00944cd8,(void **)0x0);
    pthread_mutex_destroy((pthread_mutex_t *)&DAT_00944cf4);
    FUN_0006851c(DAT_00944d0c);
    DAT_00944cd0 = 0;
    pthread_mutex_destroy((pthread_mutex_t *)&DAT_00944cdc);
  }
  return;
}

