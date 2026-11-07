// FUN_000410b0 @ 000410b0  size=160  callers=0
// program: bmminer


void FUN_000410b0(void)

{
  pthread_t pVar1;
  void *pvVar2;
  char local_2010 [8196];
  
  pvVar2 = DAT_000c8b54;
  if ((DAT_000c8b54 != (void *)0x0) &&
     (pVar1 = pthread_self(), *(pthread_t *)((int)pvVar2 + 0xc) != pVar1)) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2010,"cancel thread\n",0xf);
      FUN_0004948c(3,local_2010,0);
      pvVar2 = DAT_000c8b54;
    }
    FUN_0004b918(pvVar2);
    free(DAT_000c8b54);
    DAT_000c8b54 = (void *)0x0;
  }
  return;
}

