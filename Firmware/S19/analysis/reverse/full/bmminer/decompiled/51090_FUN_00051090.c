// FUN_00051090 @ 00051090  size=292  callers=2
// program: bmminer


void FUN_00051090(int param_1)

{
  int iVar1;
  undefined4 *__ptr;
  int local_814;
  char local_810 [2048];
  
  local_814 = param_1;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc64);
  if (iVar1 != 0) {
    builtin_strncpy(local_810,"failed to i2c lock\n",0x14);
    FUN_00032218(0,local_810);
    return;
  }
  iVar1 = FUN_00048bec(DAT_0050fc60,&local_814);
  if (iVar1 == 1) {
    FUN_00048c0c(DAT_0050fc60,&local_814);
  }
  else {
    snprintf(local_810,0x800,"ctx(%d) is not inited\n",local_814);
    FUN_00032218(1,local_810,0);
  }
  __ptr = (undefined4 *)FUN_00048cf4(DAT_0050fc60);
  iVar1 = (*(code *)*__ptr)();
  if (iVar1 == 0) {
    free(__ptr);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
    DAT_0050fc5c = iVar1;
    FUN_00048cc8(DAT_0050fc60);
    DAT_0050fc60 = iVar1;
    return;
  }
  do {
    iVar1 = (*(code *)*__ptr)(__ptr);
  } while (iVar1 != 0);
  free(__ptr);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
  return;
}

