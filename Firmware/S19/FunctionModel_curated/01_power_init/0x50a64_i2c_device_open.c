// FUN_00050a64 @ 00050a64  size=420
// callers: [FUN_0004999c, FUN_0004b97c, FUN_0004f1d4]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00050a64(int param_1)

{
  int iVar1;
  int iVar2;
  char local_818 [4];
  char acStack_814 [4];
  undefined3 uStack_810;
  char cStack_80d;
  char acStack_80c [4];
  char local_808 [4];
  undefined2 local_804;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc44);
  if (iVar1 != 0) {
    local_818[0] = s_failed_to_iic_lock_00072f30[0];
    local_818[1] = s_failed_to_iic_lock_00072f30[1];
    local_818[2] = s_failed_to_iic_lock_00072f30[2];
    local_818[3] = s_failed_to_iic_lock_00072f30[3];
    acStack_814[0] = s_failed_to_iic_lock_00072f30[4];
    acStack_814[1] = s_failed_to_iic_lock_00072f30[5];
    acStack_814[2] = s_failed_to_iic_lock_00072f30[6];
    acStack_814[3] = s_failed_to_iic_lock_00072f30[7];
    uStack_810._0_1_ = s_failed_to_iic_lock_00072f30[8];
    uStack_810._1_1_ = s_failed_to_iic_lock_00072f30[9];
    uStack_810._2_1_ = s_failed_to_iic_lock_00072f30[10];
    cStack_80d = s_failed_to_iic_lock_00072f30[0xb];
    acStack_80c[0] = s_failed_to_iic_lock_00072f30[0xc];
    acStack_80c[1] = s_failed_to_iic_lock_00072f30[0xd];
    acStack_80c[2] = s_failed_to_iic_lock_00072f30[0xe];
    acStack_80c[3] = s_failed_to_iic_lock_00072f30[0xf];
    local_808[0] = s_failed_to_iic_lock_00072f30[0x10];
    local_808[1] = s_failed_to_iic_lock_00072f30[0x11];
    local_808[2] = s_failed_to_iic_lock_00072f30[0x12];
    local_808[3] = s_failed_to_iic_lock_00072f30[0x13];
    FUN_00032218(0,local_818);
    return -4;
  }
  if (param_1 == 0) {
    iVar1 = -3;
    local_818[0] = s_bad_param_000715ec[0];
    local_818[1] = s_bad_param_000715ec[1];
    local_818[2] = s_bad_param_000715ec[2];
    local_818[3] = s_bad_param_000715ec[3];
    acStack_814[0] = s_bad_param_000715ec[4];
    acStack_814[1] = s_bad_param_000715ec[5];
    acStack_814[2] = s_bad_param_000715ec[6];
    acStack_814[3] = s_bad_param_000715ec[7];
    uStack_810 = (undefined3)ram0x000715f4;
    FUN_00032218(0,local_818,0);
  }
  else {
    iVar1 = FUN_00050fac();
    if (iVar1 < 0) {
      iVar1 = -1;
      local_818[0] = s_failed_to_i2c_init_00072f44[0];
      local_818[1] = s_failed_to_i2c_init_00072f44[1];
      local_818[2] = s_failed_to_i2c_init_00072f44[2];
      local_818[3] = s_failed_to_i2c_init_00072f44[3];
      acStack_814[0] = s_failed_to_i2c_init_00072f44[4];
      acStack_814[1] = s_failed_to_i2c_init_00072f44[5];
      acStack_814[2] = s_failed_to_i2c_init_00072f44[6];
      acStack_814[3] = s_failed_to_i2c_init_00072f44[7];
      uStack_810._0_1_ = s_failed_to_i2c_init_00072f44[8];
      uStack_810._1_1_ = s_failed_to_i2c_init_00072f44[9];
      uStack_810._2_1_ = s_failed_to_i2c_init_00072f44[10];
      cStack_80d = s_failed_to_i2c_init_00072f44[0xb];
      acStack_80c[0] = s_failed_to_i2c_init_00072f44[0xc];
      acStack_80c[1] = s_failed_to_i2c_init_00072f44[0xd];
      acStack_80c[2] = s_failed_to_i2c_init_00072f44[0xe];
      acStack_80c[3] = s_failed_to_i2c_init_00072f44[0xf];
      local_808[0] = s_failed_to_i2c_init_00072f44[0x10];
      local_808[1] = s_failed_to_i2c_init_00072f44[0x11];
      local_808[2] = s_failed_to_i2c_init_00072f44[0x12];
      local_808[3] = s_failed_to_i2c_init_00072f44[0x13];
      FUN_00032218(0,local_818,0);
    }
    else {
      iVar2 = FUN_00051b90(iVar1,*(undefined2 *)(param_1 + 4));
      if (iVar2 == 0) {
        iVar2 = FUN_00051a7c(iVar1,0x703,
                             (uint)*(byte *)(param_1 + 7) << 1 | (uint)*(byte *)(param_1 + 6) << 4);
        if (iVar2 == 0) goto LAB_00050af4;
        local_818[0] = s_failed_to_i2c_ioctl_00072f70[0];
        local_818[1] = s_failed_to_i2c_ioctl_00072f70[1];
        local_818[2] = s_failed_to_i2c_ioctl_00072f70[2];
        local_818[3] = s_failed_to_i2c_ioctl_00072f70[3];
        acStack_814[0] = s_failed_to_i2c_ioctl_00072f70[4];
        acStack_814[1] = s_failed_to_i2c_ioctl_00072f70[5];
        acStack_814[2] = s_failed_to_i2c_ioctl_00072f70[6];
        acStack_814[3] = s_failed_to_i2c_ioctl_00072f70[7];
        uStack_810._0_1_ = s_failed_to_i2c_ioctl_00072f70[8];
        uStack_810._1_1_ = s_failed_to_i2c_ioctl_00072f70[9];
        uStack_810._2_1_ = s_failed_to_i2c_ioctl_00072f70[10];
        cStack_80d = s_failed_to_i2c_ioctl_00072f70[0xb];
        acStack_80c[0] = s_failed_to_i2c_ioctl_00072f70[0xc];
        acStack_80c[1] = s_failed_to_i2c_ioctl_00072f70[0xd];
        acStack_80c[2] = s_failed_to_i2c_ioctl_00072f70[0xe];
        acStack_80c[3] = s_failed_to_i2c_ioctl_00072f70[0xf];
        local_808[0] = s_failed_to_i2c_ioctl_00072f70[0x10];
        local_808[1] = s_failed_to_i2c_ioctl_00072f70[0x11];
        local_808[2] = s_failed_to_i2c_ioctl_00072f70[0x12];
        local_808[3] = s_failed_to_i2c_ioctl_00072f70[0x13];
        local_804 = CONCAT11(local_804._1_1_,(char)ram0x00072f84);
        FUN_00032218(0,local_818,0);
      }
      else {
        local_818[0] = s_failed_to_i2c_select_00072f58[0];
        local_818[1] = s_failed_to_i2c_select_00072f58[1];
        local_818[2] = s_failed_to_i2c_select_00072f58[2];
        local_818[3] = s_failed_to_i2c_select_00072f58[3];
        acStack_814[0] = s_failed_to_i2c_select_00072f58[4];
        acStack_814[1] = s_failed_to_i2c_select_00072f58[5];
        acStack_814[2] = s_failed_to_i2c_select_00072f58[6];
        acStack_814[3] = s_failed_to_i2c_select_00072f58[7];
        uStack_810._0_1_ = s_failed_to_i2c_select_00072f58[8];
        uStack_810._1_1_ = s_failed_to_i2c_select_00072f58[9];
        uStack_810._2_1_ = s_failed_to_i2c_select_00072f58[10];
        cStack_80d = s_failed_to_i2c_select_00072f58[0xb];
        acStack_80c[0] = s_failed_to_i2c_select_00072f58[0xc];
        acStack_80c[1] = s_failed_to_i2c_select_00072f58[0xd];
        acStack_80c[2] = s_failed_to_i2c_select_00072f58[0xe];
        acStack_80c[3] = s_failed_to_i2c_select_00072f58[0xf];
        local_808[0] = s_failed_to_i2c_select_00072f58[0x10];
        local_808[1] = s_failed_to_i2c_select_00072f58[0x11];
        local_808[2] = s_failed_to_i2c_select_00072f58[0x12];
        local_808[3] = s_failed_to_i2c_select_00072f58[0x13];
        local_804 = (undefined2)ram0x00072f6c;
        FUN_00032218(0,local_818,0);
      }
      if (iVar1 == 0) {
        iVar1 = -1;
      }
      else {
        FUN_00051090(iVar1);
        iVar1 = -1;
      }
    }
  }
LAB_00050af4:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc44);
  return iVar1;
}


