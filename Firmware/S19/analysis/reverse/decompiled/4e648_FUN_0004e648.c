// FUN_0004e648 @ 0004e648  size=204
// callers: []

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004e648(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_830;
  undefined2 local_82c;
  undefined1 auStack_828 [4];
  char local_824;
  char local_808 [4];
  char acStack_804 [4];
  char acStack_800 [4];
  char acStack_7fc [4];
  char acStack_7f8 [4];
  undefined2 uStack_7f4;
  undefined1 local_7f2;
  
  bVar3 = 0x61 < DAT_0050fac0;
  if (DAT_0050fac0 != 0x62) {
    bVar3 = 1 < DAT_0050fac0 - 100;
  }
  if (bVar3 && (DAT_0050fac0 != 0x62 && DAT_0050fac0 - 100 != 2)) {
    uVar2 = 0xffffffff;
  }
  else {
    local_830 = *DAT_0004e714;
    local_82c = (undefined2)DAT_0004e714[1];
    memset(auStack_828,0,0x20);
    iVar1 = FUN_0004e2c4(DAT_0050fab8,&local_830,6,auStack_828,8);
    if (iVar1 != 0) {
      local_808[0] = s_power_0x05_cmd_failed_00072b28[0];
      local_808[1] = s_power_0x05_cmd_failed_00072b28[1];
      local_808[2] = s_power_0x05_cmd_failed_00072b28[2];
      local_808[3] = s_power_0x05_cmd_failed_00072b28[3];
      acStack_804[0] = s_power_0x05_cmd_failed_00072b28[4];
      acStack_804[1] = s_power_0x05_cmd_failed_00072b28[5];
      acStack_804[2] = s_power_0x05_cmd_failed_00072b28[6];
      acStack_804[3] = s_power_0x05_cmd_failed_00072b28[7];
      acStack_800[0] = s_power_0x05_cmd_failed_00072b28[8];
      acStack_800[1] = s_power_0x05_cmd_failed_00072b28[9];
      acStack_800[2] = s_power_0x05_cmd_failed_00072b28[10];
      acStack_800[3] = s_power_0x05_cmd_failed_00072b28[0xb];
      acStack_7fc[0] = s_power_0x05_cmd_failed_00072b28[0xc];
      acStack_7fc[1] = s_power_0x05_cmd_failed_00072b28[0xd];
      acStack_7fc[2] = s_power_0x05_cmd_failed_00072b28[0xe];
      acStack_7fc[3] = s_power_0x05_cmd_failed_00072b28[0xf];
      acStack_7f8[0] = s_power_0x05_cmd_failed_00072b28[0x10];
      acStack_7f8[1] = s_power_0x05_cmd_failed_00072b28[0x11];
      acStack_7f8[2] = s_power_0x05_cmd_failed_00072b28[0x12];
      acStack_7f8[3] = s_power_0x05_cmd_failed_00072b28[0x13];
      uStack_7f4 = (undefined2)ram0x00072b3c;
      local_7f2 = (undefined1)((uint)ram0x00072b3c >> 0x10);
      FUN_00032218(3,local_808,0);
      return 0xffffffff;
    }
    uVar2 = (uint)(local_824 == '\x01');
  }
  return uVar2;
}


