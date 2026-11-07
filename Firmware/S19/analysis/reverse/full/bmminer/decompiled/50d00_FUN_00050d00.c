// FUN_00050d00 @ 00050d00  size=136  callers=12
// program: bmminer


undefined4 FUN_00050d00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char local_810 [2048];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc44);
  if (iVar1 == 0) {
    uVar2 = FUN_000513ac(param_1,param_2,param_3);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc44);
  }
  else {
    uVar2 = 0xfffffffc;
    builtin_strncpy(local_810,"failed to i2c lock\n",0x14);
    FUN_00032218(0,local_810);
  }
  return uVar2;
}

