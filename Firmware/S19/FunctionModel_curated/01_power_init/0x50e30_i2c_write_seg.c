// FUN_00050e30 @ 00050e30  size=168
// callers: [FUN_00049ab4, FUN_0004e110, FUN_0004e2c4]

undefined4
FUN_00050e30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  char local_818 [4];
  char acStack_814 [4];
  char acStack_810 [4];
  char acStack_80c [4];
  char local_808 [2032];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc44);
  if (iVar1 == 0) {
    uVar2 = FUN_00051808(param_1,param_2,param_3,param_4,param_5,param_6);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc44);
  }
  else {
    uVar2 = 0xfffffffc;
    local_818[0] = s_failed_to_i2c_lock_00072f88[0];
    local_818[1] = s_failed_to_i2c_lock_00072f88[1];
    local_818[2] = s_failed_to_i2c_lock_00072f88[2];
    local_818[3] = s_failed_to_i2c_lock_00072f88[3];
    acStack_814[0] = s_failed_to_i2c_lock_00072f88[4];
    acStack_814[1] = s_failed_to_i2c_lock_00072f88[5];
    acStack_814[2] = s_failed_to_i2c_lock_00072f88[6];
    acStack_814[3] = s_failed_to_i2c_lock_00072f88[7];
    acStack_810[0] = s_failed_to_i2c_lock_00072f88[8];
    acStack_810[1] = s_failed_to_i2c_lock_00072f88[9];
    acStack_810[2] = s_failed_to_i2c_lock_00072f88[10];
    acStack_810[3] = s_failed_to_i2c_lock_00072f88[0xb];
    acStack_80c[0] = s_failed_to_i2c_lock_00072f88[0xc];
    acStack_80c[1] = s_failed_to_i2c_lock_00072f88[0xd];
    acStack_80c[2] = s_failed_to_i2c_lock_00072f88[0xe];
    acStack_80c[3] = s_failed_to_i2c_lock_00072f88[0xf];
    local_808[0] = s_failed_to_i2c_lock_00072f88[0x10];
    local_808[1] = s_failed_to_i2c_lock_00072f88[0x11];
    local_808[2] = s_failed_to_i2c_lock_00072f88[0x12];
    local_808[3] = s_failed_to_i2c_lock_00072f88[0x13];
    FUN_00032218(0,local_818);
  }
  return uVar2;
}


