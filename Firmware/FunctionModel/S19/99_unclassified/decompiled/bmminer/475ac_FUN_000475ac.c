// FUN_000475ac @ 000475ac  size=132  callers=0
// program: bmminer


undefined4 FUN_000475ac(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  pthread_mutex_t *__mutex;
  char acStack_810 [2048];
  
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0xfffffffd;
  }
  else {
    __mutex = (pthread_mutex_t *)(param_1 * 0x18 + 0x50f638);
    pthread_mutex_lock(__mutex);
    if (param_2 == 0) {
      FUN_00045c40(0xf,*param_3);
    }
    else {
      snprintf(acStack_810,0x800,"unknown set config type = %d\n",param_2);
      FUN_00032218(1,acStack_810,0);
    }
    pthread_mutex_unlock(__mutex);
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}

