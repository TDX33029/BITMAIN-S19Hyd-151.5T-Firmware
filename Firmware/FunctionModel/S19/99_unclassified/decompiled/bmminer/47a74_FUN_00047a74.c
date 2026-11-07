// FUN_00047a74 @ 00047a74  size=324  callers=0
// program: bmminer


undefined4 FUN_00047a74(void)

{
  int iVar1;
  undefined4 *__ptr;
  int *__ptr_00;
  int local_24;
  int local_20;
  uint local_1c;
  
  prctl(0xf,&DAT_00071af4,0,0,0);
  while (DAT_0050f938 != 0) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050f93c);
    if (iVar1 == 0) {
      __ptr = (undefined4 *)FUN_00048cf4(DAT_0050f954);
      iVar1 = (*(code *)*__ptr)();
      while (iVar1 != 0) {
        __ptr_00 = (int *)(*(code *)__ptr[2])();
        iVar1 = __ptr_00[1];
        if (iVar1 == 0) {
          FUN_00046784(*(undefined4 *)**(undefined4 **)(__ptr[5] + 0x10),(char)__ptr_00[2]);
          local_24 = *__ptr_00;
          local_1c = (uint)(__ptr_00[2] != 1);
          __ptr_00[2] = local_1c;
          iVar1 = local_24;
        }
        else {
          local_24 = *__ptr_00;
          local_1c = __ptr_00[2];
        }
        local_20 = iVar1 + -200;
        __ptr_00[1] = local_20;
        (*(code *)__ptr[1])(__ptr,&local_24);
        free(__ptr_00);
        iVar1 = (*(code *)*__ptr)(__ptr);
      }
      free(__ptr);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f93c);
    }
    usleep(200000);
  }
  return 0;
}

