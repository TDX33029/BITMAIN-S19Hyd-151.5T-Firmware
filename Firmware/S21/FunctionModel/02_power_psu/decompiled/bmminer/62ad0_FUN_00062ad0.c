// FUN_00062ad0 @ 00062ad0  size=200  callers=4
// program: bmminer


undefined4
FUN_00062ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  char local_808 [2048];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00944d10);
  if (iVar1 == 0) {
    uVar2 = FUN_00067604(param_1,param_2,param_3,param_4,param_5,param_6);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00944d10);
  }
  else {
    builtin_strncpy(local_808,"failed to i2c lock\n",0x14);
    FUN_0004948c(0,local_808,0);
    uVar2 = 0xfffffffc;
  }
  return uVar2;
}

