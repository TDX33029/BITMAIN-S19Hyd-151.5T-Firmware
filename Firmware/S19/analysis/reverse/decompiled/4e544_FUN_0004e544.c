// FUN_0004e544 @ 0004e544  size=240
// callers: []

uint FUN_0004e544(void)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
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
  char acStack_7f4 [4];
  char acStack_7f0 [4];
  char acStack_7ec [2020];
  
  uVar1 = DAT_0050fac0 - 100;
  bVar5 = 0x61 < DAT_0050fac0;
  bVar3 = DAT_0050fac0 == 0x62;
  if (!bVar3) {
    bVar5 = 1 < uVar1;
  }
  bVar4 = uVar1 != 2;
  if (!bVar5 || (bVar3 || !bVar4)) {
    uVar1 = 1;
  }
  if (bVar5 && (!bVar3 && bVar4)) {
    uVar1 = 0;
  }
  if (!bVar5 || (bVar3 || !bVar4)) {
    local_830 = *DAT_0004e644;
    local_82c = (undefined2)DAT_0004e644[1];
    memset(auStack_828,0,0x20);
    iVar2 = FUN_0004e2c4(DAT_0050fab8,&local_830,6,auStack_828,10);
    if (iVar2 != 0) {
      local_808._0_1_ = s_Get_power_dc_volt_value_failed_00072b08[0];
      local_808._1_1_ = s_Get_power_dc_volt_value_failed_00072b08[1];
      local_808._2_1_ = s_Get_power_dc_volt_value_failed_00072b08[2];
      local_808._3_1_ = s_Get_power_dc_volt_value_failed_00072b08[3];
      acStack_804[0] = s_Get_power_dc_volt_value_failed_00072b08[4];
      acStack_804[1] = s_Get_power_dc_volt_value_failed_00072b08[5];
      acStack_804[2] = s_Get_power_dc_volt_value_failed_00072b08[6];
      acStack_804[3] = s_Get_power_dc_volt_value_failed_00072b08[7];
      acStack_800[0] = s_Get_power_dc_volt_value_failed_00072b08[8];
      acStack_800[1] = s_Get_power_dc_volt_value_failed_00072b08[9];
      acStack_800[2] = s_Get_power_dc_volt_value_failed_00072b08[10];
      acStack_800[3] = s_Get_power_dc_volt_value_failed_00072b08[0xb];
      acStack_7fc[0] = s_Get_power_dc_volt_value_failed_00072b08[0xc];
      acStack_7fc[1] = s_Get_power_dc_volt_value_failed_00072b08[0xd];
      acStack_7fc[2] = s_Get_power_dc_volt_value_failed_00072b08[0xe];
      acStack_7fc[3] = s_Get_power_dc_volt_value_failed_00072b08[0xf];
      acStack_7f8[0] = s_Get_power_dc_volt_value_failed_00072b08[0x10];
      acStack_7f8[1] = s_Get_power_dc_volt_value_failed_00072b08[0x11];
      acStack_7f8[2] = s_Get_power_dc_volt_value_failed_00072b08[0x12];
      acStack_7f8[3] = s_Get_power_dc_volt_value_failed_00072b08[0x13];
      acStack_7f4[0] = s_Get_power_dc_volt_value_failed_00072b08[0x14];
      acStack_7f4[1] = s_Get_power_dc_volt_value_failed_00072b08[0x15];
      acStack_7f4[2] = s_Get_power_dc_volt_value_failed_00072b08[0x16];
      acStack_7f4[3] = s_Get_power_dc_volt_value_failed_00072b08[0x17];
      acStack_7f0[0] = s_Get_power_dc_volt_value_failed_00072b08[0x18];
      acStack_7f0[1] = s_Get_power_dc_volt_value_failed_00072b08[0x19];
      acStack_7f0[2] = s_Get_power_dc_volt_value_failed_00072b08[0x1a];
      acStack_7f0[3] = s_Get_power_dc_volt_value_failed_00072b08[0x1b];
      acStack_7ec[0] = s_Get_power_dc_volt_value_failed_00072b08[0x1c];
      acStack_7ec[1] = s_Get_power_dc_volt_value_failed_00072b08[0x1d];
      acStack_7ec[2] = s_Get_power_dc_volt_value_failed_00072b08[0x1e];
      acStack_7ec[3] = s_Get_power_dc_volt_value_failed_00072b08[0x1f];
      FUN_00032218(3,&local_808,0);
      return 0;
    }
    local_808 = (float)CONCAT13(local_821,CONCAT12(local_822,CONCAT11(local_823,local_824)));
    dVar6 = (double)(local_808 * DAT_0004e640) + DAT_0004e638;
    uVar1 = (uint)(0.0 < dVar6) * (int)(longlong)dVar6;
  }
  return uVar1;
}


