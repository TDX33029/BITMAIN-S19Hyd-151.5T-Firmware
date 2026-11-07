// FUN_00084a30 @ 00084a30  size=76  callers=0
// program: bmminer


void FUN_00084a30(void)

{
  void *pvVar1;
  
  pvVar1 = pthread_getspecific(DAT_00a4e7fc);
  if (pvVar1 != (void *)0x0) {
    FUN_00094030(pvVar1);
  }
  return;
}

