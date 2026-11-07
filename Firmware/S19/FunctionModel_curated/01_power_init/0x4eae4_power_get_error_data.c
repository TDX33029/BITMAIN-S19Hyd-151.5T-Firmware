// FUN_0004eae4 @ 0004eae4  size=568
// callers: []

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0004eae4(int param_1,void *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 local_870;
  undefined2 local_86c;
  byte abStack_868 [4];
  undefined1 local_864 [60];
  byte local_828;
  byte local_827;
  byte local_826;
  byte local_825;
  byte local_824;
  byte local_823;
  byte local_822;
  byte local_821;
  char local_818 [4];
  char acStack_814 [4];
  char acStack_810 [4];
  char acStack_80c [4];
  char local_808 [4];
  undefined3 uStack_804;
  char cStack_801;
  char acStack_800 [4];
  undefined1 local_7fc;
  
  bVar5 = 0x61 < DAT_0050fac0;
  if (DAT_0050fac0 != 0x62) {
    bVar5 = 1 < DAT_0050fac0 - 100;
  }
  if (bVar5 && (DAT_0050fac0 != 0x62 && DAT_0050fac0 - 100 != 2)) {
    uVar4 = 0xffffffff;
  }
  else {
    local_870 = *DAT_0004ed1c;
    local_86c = (undefined2)DAT_0004ed1c[1];
    memset(abStack_868,0,0x50);
    iVar1 = FUN_0004e2c4(DAT_0050fab8,&local_870,6,abStack_868,0x4a);
    if (iVar1 != 0) {
      local_818[0] = s_Get_power_error_data_failed_00072c10[0];
      local_818[1] = s_Get_power_error_data_failed_00072c10[1];
      local_818[2] = s_Get_power_error_data_failed_00072c10[2];
      local_818[3] = s_Get_power_error_data_failed_00072c10[3];
      acStack_814[0] = s_Get_power_error_data_failed_00072c10[4];
      acStack_814[1] = s_Get_power_error_data_failed_00072c10[5];
      acStack_814[2] = s_Get_power_error_data_failed_00072c10[6];
      acStack_814[3] = s_Get_power_error_data_failed_00072c10[7];
      acStack_810[0] = s_Get_power_error_data_failed_00072c10[8];
      acStack_810[1] = s_Get_power_error_data_failed_00072c10[9];
      acStack_810[2] = s_Get_power_error_data_failed_00072c10[10];
      acStack_810[3] = s_Get_power_error_data_failed_00072c10[0xb];
      acStack_80c[0] = s_Get_power_error_data_failed_00072c10[0xc];
      acStack_80c[1] = s_Get_power_error_data_failed_00072c10[0xd];
      acStack_80c[2] = s_Get_power_error_data_failed_00072c10[0xe];
      acStack_80c[3] = s_Get_power_error_data_failed_00072c10[0xf];
      local_808[0] = s_Get_power_error_data_failed_00072c10[0x10];
      local_808[1] = s_Get_power_error_data_failed_00072c10[0x11];
      local_808[2] = s_Get_power_error_data_failed_00072c10[0x12];
      local_808[3] = s_Get_power_error_data_failed_00072c10[0x13];
      uStack_804._0_1_ = s_Get_power_error_data_failed_00072c10[0x14];
      uStack_804._1_1_ = s_Get_power_error_data_failed_00072c10[0x15];
      uStack_804._2_1_ = s_Get_power_error_data_failed_00072c10[0x16];
      cStack_801 = s_Get_power_error_data_failed_00072c10[0x17];
      acStack_800[0] = s_Get_power_error_data_failed_00072c10[0x18];
      acStack_800[1] = s_Get_power_error_data_failed_00072c10[0x19];
      acStack_800[2] = s_Get_power_error_data_failed_00072c10[0x1a];
      acStack_800[3] = s_Get_power_error_data_failed_00072c10[0x1b];
      local_7fc = (undefined1)ram0x00072c2c;
      FUN_00032218(3,local_818,0);
      return 0xffffffff;
    }
    memcpy(param_2,local_864,0x44);
    uVar4 = 0;
    if (param_1 != 0) {
      local_818[0] = s_Get_power_error_data__00072c30[0];
      local_818[1] = s_Get_power_error_data__00072c30[1];
      local_818[2] = s_Get_power_error_data__00072c30[2];
      local_818[3] = s_Get_power_error_data__00072c30[3];
      acStack_814[0] = s_Get_power_error_data__00072c30[4];
      acStack_814[1] = s_Get_power_error_data__00072c30[5];
      acStack_814[2] = s_Get_power_error_data__00072c30[6];
      acStack_814[3] = s_Get_power_error_data__00072c30[7];
      acStack_810[0] = s_Get_power_error_data__00072c30[8];
      acStack_810[1] = s_Get_power_error_data__00072c30[9];
      acStack_810[2] = s_Get_power_error_data__00072c30[10];
      acStack_810[3] = s_Get_power_error_data__00072c30[0xb];
      acStack_80c[0] = s_Get_power_error_data__00072c30[0xc];
      acStack_80c[1] = s_Get_power_error_data__00072c30[0xd];
      acStack_80c[2] = s_Get_power_error_data__00072c30[0xe];
      acStack_80c[3] = s_Get_power_error_data__00072c30[0xf];
      local_808[0] = s_Get_power_error_data__00072c30[0x10];
      local_808[1] = s_Get_power_error_data__00072c30[0x11];
      local_808[2] = s_Get_power_error_data__00072c30[0x12];
      local_808[3] = s_Get_power_error_data__00072c30[0x13];
      uStack_804 = (undefined3)ram0x00072c44;
      FUN_00032218(3,local_818,0);
      pbVar2 = abStack_868;
      iVar1 = 0;
      do {
        iVar3 = iVar1 + 0xc;
        snprintf(local_818,0x800,
                 "data[%02d-%02d]: %02x%02x%02x%02x %02x%02x%02x%02x %02x%02x%02x%02x\n",iVar1,
                 iVar1 + 0xb,(uint)pbVar2[4],(uint)pbVar2[5],(uint)pbVar2[6],(uint)pbVar2[7],
                 (uint)pbVar2[8],(uint)pbVar2[9],(uint)pbVar2[10],(uint)pbVar2[0xb],
                 (uint)pbVar2[0xc],(uint)pbVar2[0xd],(uint)pbVar2[0xe],(uint)pbVar2[0xf]);
        FUN_00032218(3,local_818,0);
        pbVar2 = pbVar2 + 0xc;
        iVar1 = iVar3;
      } while (iVar3 != 0x3c);
      snprintf(local_818,0x800,"data[60-67]: %02x%02x%02x%02x %02x%02x%02x%02x\n",(uint)local_828,
               (uint)local_827,(uint)local_826,(uint)local_825,(uint)local_824,(uint)local_823,
               (uint)local_822,(uint)local_821);
      FUN_00032218(3,local_818,0);
      return 0;
    }
  }
  return uVar4;
}


