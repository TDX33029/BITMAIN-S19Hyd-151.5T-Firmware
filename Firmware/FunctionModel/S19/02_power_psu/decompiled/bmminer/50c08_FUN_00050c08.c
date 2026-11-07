// FUN_00050c08 @ 00050c08  size=112  callers=1
// program: bmminer


void FUN_00050c08(undefined4 param_1)

{
  int iVar1;
  char local_808 [2048];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc44);
  if (iVar1 == 0) {
    FUN_00051090(param_1);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc44);
    return;
  }
  builtin_strncpy(local_808,"failed to i2c lock\n",0x14);
  FUN_00032218(0,local_808);
  return;
}

