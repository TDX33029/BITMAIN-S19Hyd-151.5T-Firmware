// FUN_00050d00 @ 00050d00  size=136
// callers: [FUN_0004bcd4, FUN_0004ca78, FUN_0004da28, FUN_0004be78, FUN_0004ce44, FUN_0004d104, FUN_0004c050, FUN_0004bad0, FUN_0004c224, FUN_0004c3f0, FUN_0004c5c0, FUN_0004c7d4]

undefined4 FUN_00050d00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char local_810 [4];
  char acStack_80c [4];
  char acStack_808 [4];
  char acStack_804 [4];
  char local_800 [2032];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc44);
  if (iVar1 == 0) {
    uVar2 = FUN_000513ac(param_1,param_2,param_3);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc44);
  }
  else {
    uVar2 = 0xfffffffc;
    local_810[0] = s_failed_to_i2c_lock_00072f88[0];
    local_810[1] = s_failed_to_i2c_lock_00072f88[1];
    local_810[2] = s_failed_to_i2c_lock_00072f88[2];
    local_810[3] = s_failed_to_i2c_lock_00072f88[3];
    acStack_80c[0] = s_failed_to_i2c_lock_00072f88[4];
    acStack_80c[1] = s_failed_to_i2c_lock_00072f88[5];
    acStack_80c[2] = s_failed_to_i2c_lock_00072f88[6];
    acStack_80c[3] = s_failed_to_i2c_lock_00072f88[7];
    acStack_808[0] = s_failed_to_i2c_lock_00072f88[8];
    acStack_808[1] = s_failed_to_i2c_lock_00072f88[9];
    acStack_808[2] = s_failed_to_i2c_lock_00072f88[10];
    acStack_808[3] = s_failed_to_i2c_lock_00072f88[0xb];
    acStack_804[0] = s_failed_to_i2c_lock_00072f88[0xc];
    acStack_804[1] = s_failed_to_i2c_lock_00072f88[0xd];
    acStack_804[2] = s_failed_to_i2c_lock_00072f88[0xe];
    acStack_804[3] = s_failed_to_i2c_lock_00072f88[0xf];
    local_800[0] = s_failed_to_i2c_lock_00072f88[0x10];
    local_800[1] = s_failed_to_i2c_lock_00072f88[0x11];
    local_800[2] = s_failed_to_i2c_lock_00072f88[0x12];
    local_800[3] = s_failed_to_i2c_lock_00072f88[0x13];
    FUN_00032218(0,local_810);
  }
  return uVar2;
}


