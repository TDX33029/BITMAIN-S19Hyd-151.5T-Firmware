// FUN_00047974 @ 00047974  size=56  callers=0
// program: bmminer


undefined4 FUN_00047974(uint param_1)

{
  undefined4 uVar1;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(param_1 * 0x18 + 0x50f7b8);
  pthread_mutex_lock(__mutex);
  uVar1 = FUN_00046d24(param_1 & 0xff);
  pthread_mutex_unlock(__mutex);
  return uVar1;
}

