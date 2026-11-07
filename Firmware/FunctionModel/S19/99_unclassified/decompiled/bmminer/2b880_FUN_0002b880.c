// FUN_0002b880 @ 0002b880  size=160  callers=1
// program: bmminer


void FUN_0002b880(void)

{
  pthread_t pVar1;
  void *pvVar2;
  char local_810 [2052];
  
  pvVar2 = DAT_00089fdc;
  if ((DAT_00089fdc != (void *)0x0) &&
     (pVar1 = pthread_self(), *(pthread_t *)((int)pvVar2 + 0xc) != pVar1)) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_810,"cancel thread\n",0xf);
      FUN_00032218(3,local_810,0);
      pvVar2 = DAT_00089fdc;
    }
    FUN_0003440c(pvVar2);
    free(DAT_00089fdc);
    DAT_00089fdc = (void *)0x0;
  }
  return;
}

