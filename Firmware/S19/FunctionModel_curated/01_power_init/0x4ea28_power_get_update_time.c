// FUN_0004ea28 @ 0004ea28  size=184
// callers: []

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0004ea28(void)

{
  int iVar1;
  bool bVar2;
  undefined4 local_830;
  undefined2 local_82c;
  undefined1 auStack_828 [4];
  undefined4 local_824;
  char local_808 [4];
  char acStack_804 [4];
  char acStack_800 [4];
  char acStack_7fc [4];
  char local_7f8 [4];
  char acStack_7f4 [4];
  char acStack_7f0 [4];
  undefined2 local_7ec;
  
  bVar2 = 0x61 < DAT_0050fac0;
  if (DAT_0050fac0 != 0x62) {
    bVar2 = 1 < DAT_0050fac0 - 100;
  }
  if (bVar2 && (DAT_0050fac0 != 0x62 && DAT_0050fac0 - 100 != 2)) {
    local_824 = 0xffffffff;
  }
  else {
    local_830 = *DAT_0004eae0;
    local_82c = (undefined2)DAT_0004eae0[1];
    memset(auStack_828,0,0x20);
    iVar1 = FUN_0004e2c4(DAT_0050fab8,&local_830,6,auStack_828,10);
    if (iVar1 != 0) {
      local_808[0] = s_Get_power_update_time_failed_00072bf0[0];
      local_808[1] = s_Get_power_update_time_failed_00072bf0[1];
      local_808[2] = s_Get_power_update_time_failed_00072bf0[2];
      local_808[3] = s_Get_power_update_time_failed_00072bf0[3];
      acStack_804[0] = s_Get_power_update_time_failed_00072bf0[4];
      acStack_804[1] = s_Get_power_update_time_failed_00072bf0[5];
      acStack_804[2] = s_Get_power_update_time_failed_00072bf0[6];
      acStack_804[3] = s_Get_power_update_time_failed_00072bf0[7];
      acStack_800[0] = s_Get_power_update_time_failed_00072bf0[8];
      acStack_800[1] = s_Get_power_update_time_failed_00072bf0[9];
      acStack_800[2] = s_Get_power_update_time_failed_00072bf0[10];
      acStack_800[3] = s_Get_power_update_time_failed_00072bf0[0xb];
      acStack_7fc[0] = s_Get_power_update_time_failed_00072bf0[0xc];
      acStack_7fc[1] = s_Get_power_update_time_failed_00072bf0[0xd];
      acStack_7fc[2] = s_Get_power_update_time_failed_00072bf0[0xe];
      acStack_7fc[3] = s_Get_power_update_time_failed_00072bf0[0xf];
      local_7f8[0] = s_Get_power_update_time_failed_00072bf0[0x10];
      local_7f8[1] = s_Get_power_update_time_failed_00072bf0[0x11];
      local_7f8[2] = s_Get_power_update_time_failed_00072bf0[0x12];
      local_7f8[3] = s_Get_power_update_time_failed_00072bf0[0x13];
      acStack_7f4[0] = s_Get_power_update_time_failed_00072bf0[0x14];
      acStack_7f4[1] = s_Get_power_update_time_failed_00072bf0[0x15];
      acStack_7f4[2] = s_Get_power_update_time_failed_00072bf0[0x16];
      acStack_7f4[3] = s_Get_power_update_time_failed_00072bf0[0x17];
      acStack_7f0[0] = s_Get_power_update_time_failed_00072bf0[0x18];
      acStack_7f0[1] = s_Get_power_update_time_failed_00072bf0[0x19];
      acStack_7f0[2] = s_Get_power_update_time_failed_00072bf0[0x1a];
      acStack_7f0[3] = s_Get_power_update_time_failed_00072bf0[0x1b];
      local_7ec = (undefined2)ram0x00072c0c;
      FUN_00032218(3,local_808,0);
      return 0xffffffff;
    }
  }
  return local_824;
}


