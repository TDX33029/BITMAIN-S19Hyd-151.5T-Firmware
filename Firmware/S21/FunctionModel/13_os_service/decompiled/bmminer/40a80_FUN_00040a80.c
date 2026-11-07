// FUN_00040a80 @ 00040a80  size=276  callers=0
// program: bmminer


undefined4 FUN_00040a80(void)

{
  int iVar1;
  pthread_attr_t pStack_2034;
  char local_2010 [8192];
  
  if (DAT_000c8b58 == (void *)0x0) {
    pthread_attr_init(&pStack_2034);
    pthread_attr_setstacksize(&pStack_2034,0x200000);
    DAT_000c8b58 = calloc(1,0x40);
    iVar1 = FUN_0004c5a0(DAT_000c8b58,&pStack_2034,FUN_0003d390,DAT_000c8b58);
    if (iVar1 != 0) {
      if (DAT_000be63c < 4) {
        return 0xffffffff;
      }
      builtin_strncpy(local_2010,"create thread failed\n",0x16);
      FUN_0004948c(3,local_2010,0);
      return 0xffffffff;
    }
    pthread_detach(*(pthread_t *)((int)DAT_000c8b58 + 0xc));
    if (3 < DAT_000be63c) {
      snprintf(local_2010,0x2000,"create thread %s\n","check_asic_temp_thread");
      FUN_0004948c(3,local_2010,0);
      return 0;
    }
  }
  return 0;
}

