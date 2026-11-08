// FUN_000513ac @ 000513ac  size=512
// callers: [FUN_00050d00]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000513ac(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int local_82c;
  undefined1 uStack_825;
  int *local_824;
  char local_820 [4];
  char acStack_81c [4];
  char acStack_818 [4];
  char acStack_814 [4];
  undefined2 local_810 [2];
  undefined2 uStack_80c;
  undefined1 local_80a;
  
  local_82c = param_1;
  local_824 = (int *)pthread_mutex_lock((pthread_mutex_t *)&DAT_0050fc64);
  if (local_824 == (int *)0x0) {
    iVar3 = FUN_00048c84(DAT_0050fc60,&local_82c,&local_824);
    piVar2 = local_824;
    if (iVar3 == 1) {
      if (param_3 != 0) {
        pbVar6 = (byte *)(param_2 + -1);
        do {
          uVar5 = piVar2[1];
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
          iVar4 = *piVar2;
          iVar3 = FUN_00050ee8();
          if (iVar3 == 0) {
            free(local_824);
            local_820[0] = s_iic_not_ready_4_write_00072ff8[0];
            local_820[1] = s_iic_not_ready_4_write_00072ff8[1];
            local_820[2] = s_iic_not_ready_4_write_00072ff8[2];
            local_820[3] = s_iic_not_ready_4_write_00072ff8[3];
            acStack_81c[0] = s_iic_not_ready_4_write_00072ff8[4];
            acStack_81c[1] = s_iic_not_ready_4_write_00072ff8[5];
            acStack_81c[2] = s_iic_not_ready_4_write_00072ff8[6];
            acStack_81c[3] = s_iic_not_ready_4_write_00072ff8[7];
            acStack_818[0] = s_iic_not_ready_4_write_00072ff8[8];
            acStack_818[1] = s_iic_not_ready_4_write_00072ff8[9];
            acStack_818[2] = s_iic_not_ready_4_write_00072ff8[10];
            acStack_818[3] = s_iic_not_ready_4_write_00072ff8[0xb];
            acStack_814[0] = s_iic_not_ready_4_write_00072ff8[0xc];
            acStack_814[1] = s_iic_not_ready_4_write_00072ff8[0xd];
            acStack_814[2] = s_iic_not_ready_4_write_00072ff8[0xe];
            acStack_814[3] = s_iic_not_ready_4_write_00072ff8[0xf];
            local_810 = (undefined2  [2])s_iic_not_ready_4_write_00072ff8._16_4_;
            uStack_80c = (undefined2)ram0x0007300c;
            local_80a = (undefined1)((uint)ram0x0007300c >> 0x10);
            FUN_00032218(0,local_820,0);
            pthread_mutex_unlock(DAT_000515ac);
            return -2;
          }
          FUN_00045c40(0xc,(uint)bVar1 | (uVar5 >> 4) << 0x14 | iVar4 << 0x1a | (uVar5 & 0xe) << 0xf
                      );
          iVar3 = FUN_00050f44(&uStack_825);
          if (iVar3 == 0) {
            local_820[0] = s_iic_write_failed_00073010[0];
            local_820[1] = s_iic_write_failed_00073010[1];
            local_820[2] = s_iic_write_failed_00073010[2];
            local_820[3] = s_iic_write_failed_00073010[3];
            acStack_81c[0] = s_iic_write_failed_00073010[4];
            acStack_81c[1] = s_iic_write_failed_00073010[5];
            acStack_81c[2] = s_iic_write_failed_00073010[6];
            acStack_81c[3] = s_iic_write_failed_00073010[7];
            acStack_818[0] = s_iic_write_failed_00073010[8];
            acStack_818[1] = s_iic_write_failed_00073010[9];
            acStack_818[2] = s_iic_write_failed_00073010[10];
            acStack_818[3] = s_iic_write_failed_00073010[0xb];
            acStack_814[0] = s_iic_write_failed_00073010[0xc];
            acStack_814[1] = s_iic_write_failed_00073010[0xd];
            acStack_814[2] = s_iic_write_failed_00073010[0xe];
            acStack_814[3] = s_iic_write_failed_00073010[0xf];
            local_810[0] = (short)ram0x00073020;
            FUN_00032218(0,local_820,0);
            free(local_824);
            pthread_mutex_unlock(DAT_000515ac);
            return -3;
          }
        } while ((byte *)(param_2 + param_3 + -1) != pbVar6);
      }
      free(local_824);
      usleep(10000);
      pthread_mutex_unlock(DAT_000515ac);
      return param_3;
    }
    snprintf(local_820,0x800,"ctx %d not inited\n",local_82c);
    FUN_00032218(0,local_820,0);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050fc64);
    iVar3 = -2;
  }
  else {
    local_820[0] = s_failed_to_i2c_lock_00072f88[0];
    local_820[1] = s_failed_to_i2c_lock_00072f88[1];
    local_820[2] = s_failed_to_i2c_lock_00072f88[2];
    local_820[3] = s_failed_to_i2c_lock_00072f88[3];
    acStack_81c[0] = s_failed_to_i2c_lock_00072f88[4];
    acStack_81c[1] = s_failed_to_i2c_lock_00072f88[5];
    acStack_81c[2] = s_failed_to_i2c_lock_00072f88[6];
    acStack_81c[3] = s_failed_to_i2c_lock_00072f88[7];
    acStack_818[0] = s_failed_to_i2c_lock_00072f88[8];
    acStack_818[1] = s_failed_to_i2c_lock_00072f88[9];
    acStack_818[2] = s_failed_to_i2c_lock_00072f88[10];
    acStack_818[3] = s_failed_to_i2c_lock_00072f88[0xb];
    acStack_814[0] = s_failed_to_i2c_lock_00072f88[0xc];
    acStack_814[1] = s_failed_to_i2c_lock_00072f88[0xd];
    acStack_814[2] = s_failed_to_i2c_lock_00072f88[0xe];
    acStack_814[3] = s_failed_to_i2c_lock_00072f88[0xf];
    local_810 = (undefined2  [2])s_failed_to_i2c_lock_00072f88._16_4_;
    FUN_00032218(0,local_820);
    iVar3 = -1;
  }
  return iVar3;
}


