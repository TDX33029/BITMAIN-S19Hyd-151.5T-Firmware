// FUN_00015dec @ 00015dec  size=488  callers=1
// program: bmminer


undefined4 FUN_00015dec(int param_1,int param_2,uint param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_819;
  char local_818 [2048];
  
  local_819 = param_4;
  if (DAT_00088820 == 0) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_818,"can not set ext mode before calibration",0x28);
      FUN_00032218(3,local_818,0);
      return 0xffffffff;
    }
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = FUN_000200ac();
    if ((iVar2 == 0) || (iVar2 = thunk_FUN_00036ad8(), iVar2 == 0)) {
      if (3 < DAT_00087bbc) {
        snprintf(local_818,0x800,"%s chain %d ,index %d not connected","set_sensor_offset",param_1,
                 param_2);
        FUN_00032218(3,local_818,0);
      }
      return 0xfffffffc;
    }
    if (param_3 < 3) {
      iVar2 = FUN_00015c70(param_1,(int)(short)*(undefined4 *)(DAT_00088824 + param_2 * 4) *
                                   (int)(short)DAT_00088820 & 0xff,(&DAT_00067e54)[param_3 * 0x10],1
                           ,&local_819);
      if (iVar2 == 0) {
        if (DAT_00087bbc < 4) {
          uVar1 = 0xfffffffd;
        }
        else {
          snprintf(local_818,0x800,"set offset failed for senser %d @ chain %d",
                   *(int *)(DAT_00088824 + param_2 * 4),param_1);
          FUN_00032218(3,local_818,0);
          uVar1 = 0xfffffffd;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else if (DAT_00087bbc < 4) {
      uVar1 = 0xfffffffe;
    }
    else {
      builtin_strncpy(local_818,"unknown supported sensor model when calibration",0x30);
      FUN_00032218(3,local_818,0);
      uVar1 = 0xfffffffe;
    }
  }
  return uVar1;
}

