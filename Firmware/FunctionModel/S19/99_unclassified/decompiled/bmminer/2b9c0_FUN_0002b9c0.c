// FUN_0002b9c0 @ 0002b9c0  size=160  callers=0
// program: bmminer


void FUN_0002b9c0(void)

{
  pthread_t pVar1;
  void *pvVar2;
  char local_810 [2052];
  
  pvVar2 = DAT_00089fe0;
  if ((DAT_00089fe0 != (void *)0x0) &&
     (pVar1 = pthread_self(), *(pthread_t *)((int)pvVar2 + 0xc) != pVar1)) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_810,"cancel thread\n",0xf);
      FUN_00032218(3,local_810,0);
      pvVar2 = DAT_00089fe0;
    }
    FUN_0003440c(pvVar2);
    free(DAT_00089fe0);
    DAT_00089fe0 = (void *)0x0;
  }
  return;
}

