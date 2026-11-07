// FUN_000506f8 @ 000506f8  size=772
// callers: []

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000506f8(void)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  bool bVar4;
  uint in_fpscr;
  undefined4 uVar5;
  double dVar6;
  undefined4 extraout_s1;
  double dVar7;
  undefined4 local_838;
  undefined2 local_834;
  undefined4 local_830;
  float local_82c;
  char local_810 [4];
  char acStack_80c [4];
  char acStack_808 [4];
  char acStack_804 [4];
  char local_800 [4];
  undefined2 local_7fc [2];
  char acStack_7f8 [4];
  char acStack_7f4 [4];
  undefined1 local_7f0;
  
  bVar4 = 0x61 < DAT_0050fac0;
  if (DAT_0050fac0 != 0x62) {
    bVar4 = 1 < DAT_0050fac0 - 100;
  }
  if (bVar4 && (DAT_0050fac0 != 0x62 && DAT_0050fac0 - 100 != 2)) {
    if ((DAT_0050fabc == 0) && (iVar1 = FUN_0004f1d4(), iVar1 < 0)) {
      snprintf(local_810,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
               DAT_00050a34);
      FUN_00032218(0,local_810,0);
    }
    else {
      local_830 = 0;
      local_82c = 0.0;
      local_838 = 0x304aa55;
      local_834 = 7;
      iVar1 = FUN_0004e110(DAT_0050fab8,&local_838,6,&local_830,8);
      if (iVar1 == 0) {
        uVar5 = FUN_0005063c((uint)local_82c & 0xffff);
        dVar6 = (double)CONCAT44(extraout_s1,uVar5) * DAT_00050a20;
        return (uint)(0.0 < dVar6) * (int)(longlong)dVar6;
      }
      local_810[0] = s_get_AD_conversion_N_failed_00072f14[0];
      local_810[1] = s_get_AD_conversion_N_failed_00072f14[1];
      local_810[2] = s_get_AD_conversion_N_failed_00072f14[2];
      local_810[3] = s_get_AD_conversion_N_failed_00072f14[3];
      acStack_80c[0] = s_get_AD_conversion_N_failed_00072f14[4];
      acStack_80c[1] = s_get_AD_conversion_N_failed_00072f14[5];
      acStack_80c[2] = s_get_AD_conversion_N_failed_00072f14[6];
      acStack_80c[3] = s_get_AD_conversion_N_failed_00072f14[7];
      acStack_808[0] = s_get_AD_conversion_N_failed_00072f14[8];
      acStack_808[1] = s_get_AD_conversion_N_failed_00072f14[9];
      acStack_808[2] = s_get_AD_conversion_N_failed_00072f14[10];
      acStack_808[3] = s_get_AD_conversion_N_failed_00072f14[0xb];
      acStack_804[0] = s_get_AD_conversion_N_failed_00072f14[0xc];
      acStack_804[1] = s_get_AD_conversion_N_failed_00072f14[0xd];
      acStack_804[2] = s_get_AD_conversion_N_failed_00072f14[0xe];
      acStack_804[3] = s_get_AD_conversion_N_failed_00072f14[0xf];
      local_800[0] = s_get_AD_conversion_N_failed_00072f14[0x10];
      local_800[1] = s_get_AD_conversion_N_failed_00072f14[0x11];
      local_800[2] = s_get_AD_conversion_N_failed_00072f14[0x12];
      local_800[3] = s_get_AD_conversion_N_failed_00072f14[0x13];
      local_7fc = (undefined2  [2])s_get_AD_conversion_N_failed_00072f14._20_4_;
      acStack_7f8[0] = s_get_AD_conversion_N_failed_00072f14[0x18];
      acStack_7f8[1] = s_get_AD_conversion_N_failed_00072f14[0x19];
      acStack_7f8[2] = s_get_AD_conversion_N_failed_00072f14[0x1a];
      acStack_7f8[3] = s_get_AD_conversion_N_failed_00072f14[0x1b];
      FUN_00032218(0,local_810,0);
      local_810[0] = s_can_nont_get_voltage_00072e50[0];
      local_810[1] = s_can_nont_get_voltage_00072e50[1];
      local_810[2] = s_can_nont_get_voltage_00072e50[2];
      local_810[3] = s_can_nont_get_voltage_00072e50[3];
      acStack_80c[0] = s_can_nont_get_voltage_00072e50[4];
      acStack_80c[1] = s_can_nont_get_voltage_00072e50[5];
      acStack_80c[2] = s_can_nont_get_voltage_00072e50[6];
      acStack_80c[3] = s_can_nont_get_voltage_00072e50[7];
      acStack_808[0] = s_can_nont_get_voltage_00072e50[8];
      acStack_808[1] = s_can_nont_get_voltage_00072e50[9];
      acStack_808[2] = s_can_nont_get_voltage_00072e50[10];
      acStack_808[3] = s_can_nont_get_voltage_00072e50[0xb];
      acStack_804[0] = s_can_nont_get_voltage_00072e50[0xc];
      acStack_804[1] = s_can_nont_get_voltage_00072e50[0xd];
      acStack_804[2] = s_can_nont_get_voltage_00072e50[0xe];
      acStack_804[3] = s_can_nont_get_voltage_00072e50[0xf];
      local_800[0] = s_can_nont_get_voltage_00072e50[0x10];
      local_800[1] = s_can_nont_get_voltage_00072e50[0x11];
      local_800[2] = s_can_nont_get_voltage_00072e50[0x12];
      local_800[3] = s_can_nont_get_voltage_00072e50[0x13];
      local_7fc[0] = (short)ram0x00072e64;
      FUN_00032218(0,local_810,0);
      iVar1 = -0x7ffffd00;
    }
    return iVar1;
  }
  local_838 = *DAT_00050a2c;
  local_834 = (undefined2)DAT_00050a2c[1];
  memset(&local_830,0,0x20);
  iVar1 = FUN_0004e2c4(DAT_0050fab8,&local_838,6,&local_830,10);
  if (iVar1 == 0) {
    dVar6 = (double)(local_82c * DAT_00050a28) + DAT_00050a00;
    iVar1 = (uint)(0.0 < dVar6) * (int)(longlong)dVar6;
    if (DAT_0050fac4 == '\0') {
      return iVar1;
    }
    if (DAT_0050fc40 == '\0') {
      return iVar1;
    }
    if (((DAT_0050fac0 == 0x62) ||
        (((0x61 < DAT_0050fac0 && (DAT_0050fac0 - 100 < 3)) &&
         ((DAT_0050fac0 == 0x62 || (0x61 < DAT_0050fac0)))))) &&
       ((dVar6 = (double)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3),
        dVar6 <= DAT_00050a08 && (DAT_00050a10 <= dVar6)))) {
      if (1 < DAT_0050fadc) {
        pdVar3 = DAT_00050a30;
        iVar1 = 0;
        do {
          dVar7 = *pdVar3;
          pdVar3 = pdVar3 + 1;
          iVar2 = iVar1 + 1;
          if ((dVar7 - DAT_00050a18 < dVar6) && (dVar6 < *pdVar3 + DAT_00050a18)) {
            dVar6 = (double)(&DAT_0050fb80)[iVar1] +
                    (((double)(&DAT_0050fb88)[iVar1] - (double)(&DAT_0050fb80)[iVar1]) /
                    (*pdVar3 - dVar7)) * (dVar6 - dVar7);
            return (uint)(0.0 < (float)dVar6) * (int)dVar6;
          }
          iVar1 = iVar2;
        } while (iVar2 != DAT_0050fadc + -1);
      }
      return (uint)(0.0 < (float)dVar6) * (int)dVar6;
    }
  }
  else {
    local_810[0] = s_Get_power_set_volt_value_failed_00072ef0[0];
    local_810[1] = s_Get_power_set_volt_value_failed_00072ef0[1];
    local_810[2] = s_Get_power_set_volt_value_failed_00072ef0[2];
    local_810[3] = s_Get_power_set_volt_value_failed_00072ef0[3];
    acStack_80c[0] = s_Get_power_set_volt_value_failed_00072ef0[4];
    acStack_80c[1] = s_Get_power_set_volt_value_failed_00072ef0[5];
    acStack_80c[2] = s_Get_power_set_volt_value_failed_00072ef0[6];
    acStack_80c[3] = s_Get_power_set_volt_value_failed_00072ef0[7];
    acStack_808[0] = s_Get_power_set_volt_value_failed_00072ef0[8];
    acStack_808[1] = s_Get_power_set_volt_value_failed_00072ef0[9];
    acStack_808[2] = s_Get_power_set_volt_value_failed_00072ef0[10];
    acStack_808[3] = s_Get_power_set_volt_value_failed_00072ef0[0xb];
    acStack_804[0] = s_Get_power_set_volt_value_failed_00072ef0[0xc];
    acStack_804[1] = s_Get_power_set_volt_value_failed_00072ef0[0xd];
    acStack_804[2] = s_Get_power_set_volt_value_failed_00072ef0[0xe];
    acStack_804[3] = s_Get_power_set_volt_value_failed_00072ef0[0xf];
    local_800[0] = s_Get_power_set_volt_value_failed_00072ef0[0x10];
    local_800[1] = s_Get_power_set_volt_value_failed_00072ef0[0x11];
    local_800[2] = s_Get_power_set_volt_value_failed_00072ef0[0x12];
    local_800[3] = s_Get_power_set_volt_value_failed_00072ef0[0x13];
    local_7fc = (undefined2  [2])s_Get_power_set_volt_value_failed_00072ef0._20_4_;
    acStack_7f8[0] = s_Get_power_set_volt_value_failed_00072ef0[0x18];
    acStack_7f8[1] = s_Get_power_set_volt_value_failed_00072ef0[0x19];
    acStack_7f8[2] = s_Get_power_set_volt_value_failed_00072ef0[0x1a];
    acStack_7f8[3] = s_Get_power_set_volt_value_failed_00072ef0[0x1b];
    acStack_7f4[0] = s_Get_power_set_volt_value_failed_00072ef0[0x1c];
    acStack_7f4[1] = s_Get_power_set_volt_value_failed_00072ef0[0x1d];
    acStack_7f4[2] = s_Get_power_set_volt_value_failed_00072ef0[0x1e];
    acStack_7f4[3] = s_Get_power_set_volt_value_failed_00072ef0[0x1f];
    local_7f0 = (undefined1)ram0x00072f10;
    FUN_00032218(3,local_810,0);
  }
  return 0;
}


