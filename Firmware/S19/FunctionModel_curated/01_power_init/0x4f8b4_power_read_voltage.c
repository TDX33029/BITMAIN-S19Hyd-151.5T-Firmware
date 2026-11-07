// FUN_0004f8b4 @ 0004f8b4  size=372
// callers: []

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0004f8b4(void)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined4 local_820;
  undefined2 local_81c;
  undefined4 local_818;
  uint local_814;
  char local_810 [4];
  char acStack_80c [4];
  char acStack_808 [4];
  char acStack_804 [4];
  char local_800 [4];
  undefined2 local_7fc;
  
  if ((DAT_0050fabc == 0) && (iVar1 = FUN_0004f1d4(), iVar1 < 0)) {
    snprintf(local_810,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             DAT_0004fa60);
    FUN_00032218(0,local_810,0);
    uVar4 = VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = (undefined4)uVar4;
  }
  else {
    local_814 = 0;
    local_818 = 0;
    local_820 = 0x404aa55;
    local_81c = 8;
    iVar1 = FUN_0004e110(DAT_0050fab8,&local_820,6,&local_818,8);
    if (iVar1 != 0) {
      local_810[0] = s_get_sample_N_failed_00072e38[0];
      local_810[1] = s_get_sample_N_failed_00072e38[1];
      local_810[2] = s_get_sample_N_failed_00072e38[2];
      local_810[3] = s_get_sample_N_failed_00072e38[3];
      acStack_80c[0] = s_get_sample_N_failed_00072e38[4];
      acStack_80c[1] = s_get_sample_N_failed_00072e38[5];
      acStack_80c[2] = s_get_sample_N_failed_00072e38[6];
      acStack_80c[3] = s_get_sample_N_failed_00072e38[7];
      acStack_808[0] = s_get_sample_N_failed_00072e38[8];
      acStack_808[1] = s_get_sample_N_failed_00072e38[9];
      acStack_808[2] = s_get_sample_N_failed_00072e38[10];
      acStack_808[3] = s_get_sample_N_failed_00072e38[0xb];
      acStack_804[0] = s_get_sample_N_failed_00072e38[0xc];
      acStack_804[1] = s_get_sample_N_failed_00072e38[0xd];
      acStack_804[2] = s_get_sample_N_failed_00072e38[0xe];
      acStack_804[3] = s_get_sample_N_failed_00072e38[0xf];
      local_800[0] = s_get_sample_N_failed_00072e38[0x10];
      local_800[1] = s_get_sample_N_failed_00072e38[0x11];
      local_800[2] = s_get_sample_N_failed_00072e38[0x12];
      local_800[3] = s_get_sample_N_failed_00072e38[0x13];
      local_7fc = CONCAT11(local_7fc._1_1_,(char)ram0x00072e4c);
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
      local_7fc = (undefined2)ram0x00072e64;
      FUN_00032218(0,local_810,0);
      return (int)DAT_0004fa58;
    }
    switch(DAT_0050fac0) {
    case 0x71:
    case 0x75:
    case 0x76:
    case 0x77:
      dVar3 = (double)VectorSignedToFloat(local_814 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      return SUB84(dVar3 * DAT_0004fa50,0);
    default:
      return 0;
    case 0x73:
    case 0x78:
      dVar3 = (double)VectorSignedToFloat(local_814 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
      uVar2 = SUB84(dVar3 * DAT_0004fa48,0);
    }
  }
  return uVar2;
}


