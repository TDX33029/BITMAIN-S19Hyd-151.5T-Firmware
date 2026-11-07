// FUN_0004fe60 @ 0004fe60  size=272
// callers: []

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004fe60(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
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
  undefined1 local_808;
  
  if ((DAT_0050fabc == 0) && (uVar2 = FUN_0004f1d4(), (int)uVar2 < 0)) {
    snprintf(local_820,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             DAT_0004ff70);
    FUN_00032218(0,local_820,0);
  }
  else {
    uVar1 = DAT_0050fab8;
    sVar4 = 3;
    do {
      local_828 = 0;
      local_824 = 0;
      local_830 = 0x104aa55;
      local_82c = 0x104;
      iVar3 = FUN_0004e2c4(uVar1,&local_830,6,&local_828,8);
      if (iVar3 == 0) {
        uVar2 = 0;
        if ((local_824 & 0xffff) != 0) {
          return local_824 & 0xffff;
        }
      }
      else {
        uVar2 = 0x80000300;
        local_820[0] = s_get_power_fw_ver_failed_00072ed4[0];
        local_820[1] = s_get_power_fw_ver_failed_00072ed4[1];
        local_820[2] = s_get_power_fw_ver_failed_00072ed4[2];
        local_820[3] = s_get_power_fw_ver_failed_00072ed4[3];
        acStack_81c[0] = s_get_power_fw_ver_failed_00072ed4[4];
        acStack_81c[1] = s_get_power_fw_ver_failed_00072ed4[5];
        acStack_81c[2] = s_get_power_fw_ver_failed_00072ed4[6];
        acStack_81c[3] = s_get_power_fw_ver_failed_00072ed4[7];
        acStack_818[0] = s_get_power_fw_ver_failed_00072ed4[8];
        acStack_818[1] = s_get_power_fw_ver_failed_00072ed4[9];
        acStack_818[2] = s_get_power_fw_ver_failed_00072ed4[10];
        acStack_818[3] = s_get_power_fw_ver_failed_00072ed4[0xb];
        acStack_814[0] = s_get_power_fw_ver_failed_00072ed4[0xc];
        acStack_814[1] = s_get_power_fw_ver_failed_00072ed4[0xd];
        acStack_814[2] = s_get_power_fw_ver_failed_00072ed4[0xe];
        acStack_814[3] = s_get_power_fw_ver_failed_00072ed4[0xf];
        local_810[0] = s_get_power_fw_ver_failed_00072ed4[0x10];
        local_810[1] = s_get_power_fw_ver_failed_00072ed4[0x11];
        local_810[2] = s_get_power_fw_ver_failed_00072ed4[0x12];
        local_810[3] = s_get_power_fw_ver_failed_00072ed4[0x13];
        acStack_80c[0] = s_get_power_fw_ver_failed_00072ed4[0x14];
        acStack_80c[1] = s_get_power_fw_ver_failed_00072ed4[0x15];
        acStack_80c[2] = s_get_power_fw_ver_failed_00072ed4[0x16];
        acStack_80c[3] = s_get_power_fw_ver_failed_00072ed4[0x17];
        local_808 = (undefined1)ram0x00072eec;
        FUN_00032218(0,local_820);
      }
      sVar4 = sVar4 + -1;
    } while (sVar4 != 0);
  }
  return uVar2;
}


