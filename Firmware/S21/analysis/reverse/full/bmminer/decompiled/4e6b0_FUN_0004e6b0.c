// FUN_0004e6b0 @ 0004e6b0  size=216  callers=3
// program: bmminer


void FUN_0004e6b0(void)

{
  pthread_t pVar1;
  void *pvVar2;
  char acStack_2010 [8200];
  
  FUN_000193b0();
  FUN_00019470();
  FUN_00041010();
  FUN_00040f70();
  FUN_00040ed0();
  if (DAT_000c74c4 != '\0') {
    return;
  }
  FUN_00041290();
  pvVar2 = DAT_000c8b64;
  if ((DAT_000c8b64 != (void *)0x0) &&
     (pVar1 = pthread_self(), *(pthread_t *)((int)pvVar2 + 0xc) != pVar1)) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(acStack_2010,"cancel thread\n",0xf);
      FUN_0004948c(3,acStack_2010,0);
      pvVar2 = DAT_000c8b64;
    }
    FUN_0004b918(pvVar2);
    free(DAT_000c8b64);
    DAT_000c8b64 = (void *)0x0;
  }
  return;
}

