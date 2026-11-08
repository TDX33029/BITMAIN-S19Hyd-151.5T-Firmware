// FUN_000511b8 @ 000511b8  size=496
// callers: [FUN_00050c78]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000511b8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_824 [2];
  int *local_81c;
  char local_818 [4];
  char acStack_814 [4];
  char acStack_810 [4];
  char acStack_80c [4];
  char local_808 [4];
  undefined2 uStack_804;
  undefined1 local_802;
  
  local_824[0] = param_1;
  local_81c = (int *)pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc64);
  if (local_81c == (int *)0x0) {
    iVar1 = FUN_00048c84(DAT_0050fc60,local_824,&local_81c);
    if (iVar1 == 1) {
      iVar1 = *local_81c;
      uVar4 = local_81c[1];
      if (param_3 != 0) {
        iVar2 = param_2;
        do {
          iVar3 = FUN_00050ee8();
          if (iVar3 == 0) {
            free(local_81c);
            local_818[0] = s_iic_not_ready_4_read1_00072fb4[0];
            local_818[1] = s_iic_not_ready_4_read1_00072fb4[1];
            local_818[2] = s_iic_not_ready_4_read1_00072fb4[2];
            local_818[3] = s_iic_not_ready_4_read1_00072fb4[3];
            acStack_814[0] = s_iic_not_ready_4_read1_00072fb4[4];
            acStack_814[1] = s_iic_not_ready_4_read1_00072fb4[5];
            acStack_814[2] = s_iic_not_ready_4_read1_00072fb4[6];
            acStack_814[3] = s_iic_not_ready_4_read1_00072fb4[7];
            acStack_810[0] = s_iic_not_ready_4_read1_00072fb4[8];
            acStack_810[1] = s_iic_not_ready_4_read1_00072fb4[9];
            acStack_810[2] = s_iic_not_ready_4_read1_00072fb4[10];
            acStack_810[3] = s_iic_not_ready_4_read1_00072fb4[0xb];
            acStack_80c[0] = s_iic_not_ready_4_read1_00072fb4[0xc];
            acStack_80c[1] = s_iic_not_ready_4_read1_00072fb4[0xd];
            acStack_80c[2] = s_iic_not_ready_4_read1_00072fb4[0xe];
            acStack_80c[3] = s_iic_not_ready_4_read1_00072fb4[0xf];
            local_808[0] = s_iic_not_ready_4_read1_00072fb4[0x10];
            local_808[1] = s_iic_not_ready_4_read1_00072fb4[0x11];
            local_808[2] = s_iic_not_ready_4_read1_00072fb4[0x12];
            local_808[3] = s_iic_not_ready_4_read1_00072fb4[0x13];
            uStack_804 = (undefined2)ram0x00072fc8;
            local_802 = (undefined1)((uint)ram0x00072fc8 >> 0x10);
            FUN_00032218(0,local_818,0);
            pthread_mutex_unlock(DAT_000513a8);
            return -2;
          }
          FUN_00045c40(0xc,iVar1 << 0x1a | 0x2080000U | (uVar4 >> 4) << 0x14 | (uVar4 & 0xe) << 0xf)
          ;
          iVar3 = iVar2 + 1;
          iVar2 = FUN_00050f44(iVar2);
          if (iVar2 == 0) {
            free(local_81c);
            local_818[0] = s_iic_not_ready_4_read2_00072fcc[0];
            local_818[1] = s_iic_not_ready_4_read2_00072fcc[1];
            local_818[2] = s_iic_not_ready_4_read2_00072fcc[2];
            local_818[3] = s_iic_not_ready_4_read2_00072fcc[3];
            acStack_814[0] = s_iic_not_ready_4_read2_00072fcc[4];
            acStack_814[1] = s_iic_not_ready_4_read2_00072fcc[5];
            acStack_814[2] = s_iic_not_ready_4_read2_00072fcc[6];
            acStack_814[3] = s_iic_not_ready_4_read2_00072fcc[7];
            acStack_810[0] = s_iic_not_ready_4_read2_00072fcc[8];
            acStack_810[1] = s_iic_not_ready_4_read2_00072fcc[9];
            acStack_810[2] = s_iic_not_ready_4_read2_00072fcc[10];
            acStack_810[3] = s_iic_not_ready_4_read2_00072fcc[0xb];
            acStack_80c[0] = s_iic_not_ready_4_read2_00072fcc[0xc];
            acStack_80c[1] = s_iic_not_ready_4_read2_00072fcc[0xd];
            acStack_80c[2] = s_iic_not_ready_4_read2_00072fcc[0xe];
            acStack_80c[3] = s_iic_not_ready_4_read2_00072fcc[0xf];
            local_808[0] = s_iic_not_ready_4_read2_00072fcc[0x10];
            local_808[1] = s_iic_not_ready_4_read2_00072fcc[0x11];
            local_808[2] = s_iic_not_ready_4_read2_00072fcc[0x12];
            local_808[3] = s_iic_not_ready_4_read2_00072fcc[0x13];
            uStack_804 = (undefined2)ram0x00072fe0;
            local_802 = (undefined1)((uint)ram0x00072fe0 >> 0x10);
            FUN_00032218(0,local_818,0);
            pthread_mutex_unlock(DAT_000513a8);
            return -3;
          }
          iVar2 = iVar3;
        } while (iVar3 != param_2 + param_3);
      }
      free(local_81c);
      usleep(10000);
      pthread_mutex_unlock(DAT_000513a8);
      return param_3;
    }
    snprintf(local_818,0x800,"ctx %d not inited\n",local_824[0]);
    FUN_00032218(0,local_818,0);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
    iVar1 = -2;
  }
  else {
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
    iVar1 = -1;
  }
  return iVar1;
}


