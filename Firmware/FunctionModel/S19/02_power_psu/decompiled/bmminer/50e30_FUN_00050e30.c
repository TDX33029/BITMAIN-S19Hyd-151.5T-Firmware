// FUN_00050e30 @ 00050e30  size=168  callers=3
// program: bmminer


undefined4
FUN_00050e30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  char local_818 [2048];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc44);
  if (iVar1 == 0) {
    uVar2 = FUN_00051808(param_1,param_2,param_3,param_4,param_5,param_6);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc44);
  }
  else {
    uVar2 = 0xfffffffc;
    builtin_strncpy(local_818,"failed to i2c lock\n",0x14);
    FUN_00032218(0,local_818);
  }
  return uVar2;
}

