// FUN_00047538 @ 00047538  size=112  callers=0
// program: bmminer


undefined4 FUN_00047538(uint param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(param_1 * 0x18 + 0x50f7b8);
  pthread_mutex_lock(__mutex);
  uVar1 = FUN_00046d24(param_1 & 0xff);
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  if (param_3 == 0) {
    pthread_mutex_unlock(__mutex);
    return 0;
  }
  uVar2 = FUN_00047044(param_1,param_2,param_3);
  pthread_mutex_unlock(__mutex);
  return uVar2;
}

