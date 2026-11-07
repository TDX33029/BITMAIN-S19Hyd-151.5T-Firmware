// FUN_00046640 @ 00046640  size=324  callers=0
// program: bmminer


undefined4 FUN_00046640(void)

{
  int iVar1;
  undefined4 *__ptr;
  undefined4 *__ptr_00;
  undefined4 uVar2;
  byte local_29;
  undefined4 local_28;
  uint local_24;
  
  prctl(0xf,&DAT_00069c70,0,0,0);
  do {
    if (DAT_0050f630 == 0) {
      return 0;
    }
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050f5fc);
    if (iVar1 == 0) {
      __ptr = (undefined4 *)FUN_00048cf4(DAT_0050f614);
      iVar1 = (*(code *)*__ptr)();
      while (iVar1 != 0) {
        iVar1 = __ptr[5];
        __ptr_00 = (undefined4 *)(*(code *)__ptr[2])();
        uVar2 = *(undefined4 *)**(undefined4 **)(iVar1 + 0x10);
        local_29 = 0;
        iVar1 = FUN_000464d8(uVar2,&local_29);
        if (iVar1 != 0) {
          free(__ptr_00);
          break;
        }
        if (__ptr_00[1] != (uint)local_29) {
          (*(code *)*__ptr_00)(uVar2,(uint)local_29);
          local_28 = *__ptr_00;
          local_24 = (uint)local_29;
          (*(code *)__ptr[1])(__ptr,&local_28,8);
        }
        free(__ptr_00);
        iVar1 = (*(code *)*__ptr)(__ptr);
      }
      free(__ptr);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050f5fc);
    }
    usleep(200000);
  } while( true );
}

