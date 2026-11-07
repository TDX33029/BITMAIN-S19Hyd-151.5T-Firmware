// FUN_0004e718 @ 0004e718  size=220
// callers: []

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0004e718(void)

{
  int iVar1;
  bool bVar2;
  undefined4 local_830;
  undefined2 local_82c;
  undefined1 auStack_828 [4];
  undefined1 local_824;
  undefined1 local_823;
  undefined1 local_822;
  undefined1 local_821;
  undefined4 local_808;
  char acStack_804 [4];
  char acStack_800 [4];
  char acStack_7fc [4];
  char acStack_7f8 [4];
  undefined1 local_7f4;
  
  bVar2 = 0x61 < DAT_0050fac0;
  if (DAT_0050fac0 != 0x62) {
    bVar2 = 1 < DAT_0050fac0 - 100;
  }
  if (bVar2 && (DAT_0050fac0 != 0x62 && DAT_0050fac0 - 100 != 2)) {
    return DAT_0004e7f4;
  }
  local_830 = *DAT_0004e7f8;
  local_82c = (undefined2)DAT_0004e7f8[1];
  memset(auStack_828,0,0x20);
  iVar1 = FUN_0004e2c4(DAT_0050fab8,&local_830,6,auStack_828,10);
  if (iVar1 == 0) {
    local_808 = CONCAT13(local_821,CONCAT12(local_822,CONCAT11(local_823,local_824)));
    return local_808;
  }
  local_808._0_1_ = s_Get_ac_power_failed_00072b40[0];
  local_808._1_1_ = s_Get_ac_power_failed_00072b40[1];
  local_808._2_1_ = s_Get_ac_power_failed_00072b40[2];
  local_808._3_1_ = s_Get_ac_power_failed_00072b40[3];
  acStack_804[0] = s_Get_ac_power_failed_00072b40[4];
  acStack_804[1] = s_Get_ac_power_failed_00072b40[5];
  acStack_804[2] = s_Get_ac_power_failed_00072b40[6];
  acStack_804[3] = s_Get_ac_power_failed_00072b40[7];
  acStack_800[0] = s_Get_ac_power_failed_00072b40[8];
  acStack_800[1] = s_Get_ac_power_failed_00072b40[9];
  acStack_800[2] = s_Get_ac_power_failed_00072b40[10];
  acStack_800[3] = s_Get_ac_power_failed_00072b40[0xb];
  acStack_7fc[0] = s_Get_ac_power_failed_00072b40[0xc];
  acStack_7fc[1] = s_Get_ac_power_failed_00072b40[0xd];
  acStack_7fc[2] = s_Get_ac_power_failed_00072b40[0xe];
  acStack_7fc[3] = s_Get_ac_power_failed_00072b40[0xf];
  acStack_7f8[0] = s_Get_ac_power_failed_00072b40[0x10];
  acStack_7f8[1] = s_Get_ac_power_failed_00072b40[0x11];
  acStack_7f8[2] = s_Get_ac_power_failed_00072b40[0x12];
  acStack_7f8[3] = s_Get_ac_power_failed_00072b40[0x13];
  local_7f4 = (undefined1)ram0x00072b54;
  FUN_00032218(3,&local_808,0);
  return DAT_0004e7f4;
}


