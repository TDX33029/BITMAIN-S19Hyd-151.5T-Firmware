// FUN_0004f034 @ 0004f034  size=412
// callers: [FUN_0004f1d4, FUN_0001cd50]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004f034(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_830;
  undefined2 local_82c;
  undefined4 local_828;
  uint local_824;
  char local_820 [4];
  char acStack_81c [4];
  char acStack_818 [4];
  char acStack_814 [4];
  char local_810 [4];
  char acStack_80c [4];
  undefined2 local_808 [2];
  char acStack_804 [4];
  char local_800 [4];
  char acStack_7fc [4];
  char acStack_7f8 [4];
  char acStack_7f4 [4];
  char local_7f0 [4];
  char acStack_7ec [4];
  char acStack_7e8 [4];
  undefined1 local_7e4;
  
  if ((DAT_0050fabc == 0) && (uVar2 = FUN_0004f890(), (int)uVar2 < 0)) {
    snprintf(local_820,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             DAT_0004f1d0);
    FUN_00032218(0,local_820,0);
  }
  else {
    uVar1 = DAT_0050fab8;
    local_824 = 0;
    local_828 = 0;
    local_830 = 0x204aa55;
    local_82c = 6;
    iVar3 = FUN_0004e110(DAT_0050fab8,&local_830,6,&local_828,8);
    if (iVar3 != 0) {
      local_820[0] = s_get_power_version_failed_00072d54[0];
      local_820[1] = s_get_power_version_failed_00072d54[1];
      local_820[2] = s_get_power_version_failed_00072d54[2];
      local_820[3] = s_get_power_version_failed_00072d54[3];
      acStack_81c[0] = s_get_power_version_failed_00072d54[4];
      acStack_81c[1] = s_get_power_version_failed_00072d54[5];
      acStack_81c[2] = s_get_power_version_failed_00072d54[6];
      acStack_81c[3] = s_get_power_version_failed_00072d54[7];
      acStack_818[0] = s_get_power_version_failed_00072d54[8];
      acStack_818[1] = s_get_power_version_failed_00072d54[9];
      acStack_818[2] = s_get_power_version_failed_00072d54[10];
      acStack_818[3] = s_get_power_version_failed_00072d54[0xb];
      acStack_814[0] = s_get_power_version_failed_00072d54[0xc];
      acStack_814[1] = s_get_power_version_failed_00072d54[0xd];
      acStack_814[2] = s_get_power_version_failed_00072d54[0xe];
      acStack_814[3] = s_get_power_version_failed_00072d54[0xf];
      local_810[0] = s_get_power_version_failed_00072d54[0x10];
      local_810[1] = s_get_power_version_failed_00072d54[0x11];
      local_810[2] = s_get_power_version_failed_00072d54[0x12];
      local_810[3] = s_get_power_version_failed_00072d54[0x13];
      acStack_80c[0] = s_get_power_version_failed_00072d54[0x14];
      acStack_80c[1] = s_get_power_version_failed_00072d54[0x15];
      acStack_80c[2] = s_get_power_version_failed_00072d54[0x16];
      acStack_80c[3] = s_get_power_version_failed_00072d54[0x17];
      local_808[0] = (short)ram0x00072d6c;
      FUN_00032218(0,local_820,0);
      local_820[0] = s_check_power_version_failed__use_v_00072d70[0];
      local_820[1] = s_check_power_version_failed__use_v_00072d70[1];
      local_820[2] = s_check_power_version_failed__use_v_00072d70[2];
      local_820[3] = s_check_power_version_failed__use_v_00072d70[3];
      acStack_81c[0] = s_check_power_version_failed__use_v_00072d70[4];
      acStack_81c[1] = s_check_power_version_failed__use_v_00072d70[5];
      acStack_81c[2] = s_check_power_version_failed__use_v_00072d70[6];
      acStack_81c[3] = s_check_power_version_failed__use_v_00072d70[7];
      acStack_818[0] = s_check_power_version_failed__use_v_00072d70[8];
      acStack_818[1] = s_check_power_version_failed__use_v_00072d70[9];
      acStack_818[2] = s_check_power_version_failed__use_v_00072d70[10];
      acStack_818[3] = s_check_power_version_failed__use_v_00072d70[0xb];
      acStack_814[0] = s_check_power_version_failed__use_v_00072d70[0xc];
      acStack_814[1] = s_check_power_version_failed__use_v_00072d70[0xd];
      acStack_814[2] = s_check_power_version_failed__use_v_00072d70[0xe];
      acStack_814[3] = s_check_power_version_failed__use_v_00072d70[0xf];
      local_810[0] = s_check_power_version_failed__use_v_00072d70[0x10];
      local_810[1] = s_check_power_version_failed__use_v_00072d70[0x11];
      local_810[2] = s_check_power_version_failed__use_v_00072d70[0x12];
      local_810[3] = s_check_power_version_failed__use_v_00072d70[0x13];
      acStack_80c[0] = s_check_power_version_failed__use_v_00072d70[0x14];
      acStack_80c[1] = s_check_power_version_failed__use_v_00072d70[0x15];
      acStack_80c[2] = s_check_power_version_failed__use_v_00072d70[0x16];
      acStack_80c[3] = s_check_power_version_failed__use_v_00072d70[0x17];
      local_808 = (undefined2  [2])s_check_power_version_failed__use_v_00072d70._24_4_;
      acStack_804[0] = s_check_power_version_failed__use_v_00072d70[0x1c];
      acStack_804[1] = s_check_power_version_failed__use_v_00072d70[0x1d];
      acStack_804[2] = s_check_power_version_failed__use_v_00072d70[0x1e];
      acStack_804[3] = s_check_power_version_failed__use_v_00072d70[0x1f];
      local_800[0] = s_check_power_version_failed__use_v_00072d70[0x20];
      local_800[1] = s_check_power_version_failed__use_v_00072d70[0x21];
      local_800[2] = s_check_power_version_failed__use_v_00072d70[0x22];
      local_800[3] = s_check_power_version_failed__use_v_00072d70[0x23];
      acStack_7fc[0] = s_check_power_version_failed__use_v_00072d70[0x24];
      acStack_7fc[1] = s_check_power_version_failed__use_v_00072d70[0x25];
      acStack_7fc[2] = s_check_power_version_failed__use_v_00072d70[0x26];
      acStack_7fc[3] = s_check_power_version_failed__use_v_00072d70[0x27];
      acStack_7f8[0] = s_check_power_version_failed__use_v_00072d70[0x28];
      acStack_7f8[1] = s_check_power_version_failed__use_v_00072d70[0x29];
      acStack_7f8[2] = s_check_power_version_failed__use_v_00072d70[0x2a];
      acStack_7f8[3] = s_check_power_version_failed__use_v_00072d70[0x2b];
      acStack_7f4[0] = s_check_power_version_failed__use_v_00072d70[0x2c];
      acStack_7f4[1] = s_check_power_version_failed__use_v_00072d70[0x2d];
      acStack_7f4[2] = s_check_power_version_failed__use_v_00072d70[0x2e];
      acStack_7f4[3] = s_check_power_version_failed__use_v_00072d70[0x2f];
      local_7f0[0] = s_check_power_version_failed__use_v_00072d70[0x30];
      local_7f0[1] = s_check_power_version_failed__use_v_00072d70[0x31];
      local_7f0[2] = s_check_power_version_failed__use_v_00072d70[0x32];
      local_7f0[3] = s_check_power_version_failed__use_v_00072d70[0x33];
      acStack_7ec[0] = s_check_power_version_failed__use_v_00072d70[0x34];
      acStack_7ec[1] = s_check_power_version_failed__use_v_00072d70[0x35];
      acStack_7ec[2] = s_check_power_version_failed__use_v_00072d70[0x36];
      acStack_7ec[3] = s_check_power_version_failed__use_v_00072d70[0x37];
      acStack_7e8[0] = s_check_power_version_failed__use_v_00072d70[0x38];
      acStack_7e8[1] = s_check_power_version_failed__use_v_00072d70[0x39];
      acStack_7e8[2] = s_check_power_version_failed__use_v_00072d70[0x3a];
      acStack_7e8[3] = s_check_power_version_failed__use_v_00072d70[0x3b];
      local_7e4 = (undefined1)ram0x00072dac;
      FUN_00032218(0,local_820,0);
      local_828 = 0;
      local_824 = 0;
      local_830 = 0x204aa55;
      local_82c = 0x204;
      iVar3 = FUN_0004e2c4(uVar1,&local_830,6,&local_828,8);
      if (iVar3 != 0) {
        local_820[0] = s_get_power_version_failed_00072d54[0];
        local_820[1] = s_get_power_version_failed_00072d54[1];
        local_820[2] = s_get_power_version_failed_00072d54[2];
        local_820[3] = s_get_power_version_failed_00072d54[3];
        acStack_81c[0] = s_get_power_version_failed_00072d54[4];
        acStack_81c[1] = s_get_power_version_failed_00072d54[5];
        acStack_81c[2] = s_get_power_version_failed_00072d54[6];
        acStack_81c[3] = s_get_power_version_failed_00072d54[7];
        acStack_818[0] = s_get_power_version_failed_00072d54[8];
        acStack_818[1] = s_get_power_version_failed_00072d54[9];
        acStack_818[2] = s_get_power_version_failed_00072d54[10];
        acStack_818[3] = s_get_power_version_failed_00072d54[0xb];
        acStack_814[0] = s_get_power_version_failed_00072d54[0xc];
        acStack_814[1] = s_get_power_version_failed_00072d54[0xd];
        acStack_814[2] = s_get_power_version_failed_00072d54[0xe];
        acStack_814[3] = s_get_power_version_failed_00072d54[0xf];
        local_810[0] = s_get_power_version_failed_00072d54[0x10];
        local_810[1] = s_get_power_version_failed_00072d54[0x11];
        local_810[2] = s_get_power_version_failed_00072d54[0x12];
        local_810[3] = s_get_power_version_failed_00072d54[0x13];
        acStack_80c[0] = s_get_power_version_failed_00072d54[0x14];
        acStack_80c[1] = s_get_power_version_failed_00072d54[0x15];
        acStack_80c[2] = s_get_power_version_failed_00072d54[0x16];
        acStack_80c[3] = s_get_power_version_failed_00072d54[0x17];
        local_808[0] = (short)ram0x00072d6c;
        FUN_00032218(0,local_820,0);
        return 0x80000300;
      }
    }
    uVar2 = local_824 & 0xffff;
    if (uVar2 != 0) {
      DAT_0050fac0 = uVar2;
    }
  }
  return uVar2;
}


