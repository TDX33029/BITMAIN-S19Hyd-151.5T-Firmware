// FUN_0004e7fc @ 0004e7fc  size=352
// callers: []

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004e7fc(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 local_838;
  undefined2 local_834;
  undefined1 auStack_830 [4];
  byte local_82c;
  byte local_82b;
  byte local_82a;
  byte local_829;
  uint local_828;
  char local_810 [4];
  char acStack_80c [4];
  char acStack_808 [4];
  char acStack_804 [4];
  char local_800 [4];
  char acStack_7fc [4];
  char acStack_7f8 [4];
  undefined1 local_7f4;
  
  bVar2 = 0x61 < DAT_0050fac0;
  if (DAT_0050fac0 != 0x62) {
    bVar2 = 1 < DAT_0050fac0 - 100;
  }
  if (bVar2 && (DAT_0050fac0 != 0x62 && DAT_0050fac0 - 100 != 2)) {
    local_828 = 0xffffffff;
  }
  else {
    local_838 = *DAT_0004e95c;
    local_834 = (undefined2)DAT_0004e95c[1];
    memset(auStack_830,0,0x20);
    if (param_1 != 0) {
      local_834 = CONCAT11(0x8e,(undefined1)local_834);
      local_838 = CONCAT13(0x8e,(undefined3)local_838);
    }
    iVar1 = FUN_0004e2c4(DAT_0050fab8,&local_838,6,auStack_830,0xe);
    if (iVar1 != 0) {
      local_810[0] = s_Get_power_error_code_failed_00072b58[0];
      local_810[1] = s_Get_power_error_code_failed_00072b58[1];
      local_810[2] = s_Get_power_error_code_failed_00072b58[2];
      local_810[3] = s_Get_power_error_code_failed_00072b58[3];
      acStack_80c[0] = s_Get_power_error_code_failed_00072b58[4];
      acStack_80c[1] = s_Get_power_error_code_failed_00072b58[5];
      acStack_80c[2] = s_Get_power_error_code_failed_00072b58[6];
      acStack_80c[3] = s_Get_power_error_code_failed_00072b58[7];
      acStack_808[0] = s_Get_power_error_code_failed_00072b58[8];
      acStack_808[1] = s_Get_power_error_code_failed_00072b58[9];
      acStack_808[2] = s_Get_power_error_code_failed_00072b58[10];
      acStack_808[3] = s_Get_power_error_code_failed_00072b58[0xb];
      acStack_804[0] = s_Get_power_error_code_failed_00072b58[0xc];
      acStack_804[1] = s_Get_power_error_code_failed_00072b58[0xd];
      acStack_804[2] = s_Get_power_error_code_failed_00072b58[0xe];
      acStack_804[3] = s_Get_power_error_code_failed_00072b58[0xf];
      local_800[0] = s_Get_power_error_code_failed_00072b58[0x10];
      local_800[1] = s_Get_power_error_code_failed_00072b58[0x11];
      local_800[2] = s_Get_power_error_code_failed_00072b58[0x12];
      local_800[3] = s_Get_power_error_code_failed_00072b58[0x13];
      acStack_7fc[0] = s_Get_power_error_code_failed_00072b58[0x14];
      acStack_7fc[1] = s_Get_power_error_code_failed_00072b58[0x15];
      acStack_7fc[2] = s_Get_power_error_code_failed_00072b58[0x16];
      acStack_7fc[3] = s_Get_power_error_code_failed_00072b58[0x17];
      acStack_7f8[0] = s_Get_power_error_code_failed_00072b58[0x18];
      acStack_7f8[1] = s_Get_power_error_code_failed_00072b58[0x19];
      acStack_7f8[2] = s_Get_power_error_code_failed_00072b58[0x1a];
      acStack_7f8[3] = s_Get_power_error_code_failed_00072b58[0x1b];
      local_7f4 = (undefined1)ram0x00072b74;
      FUN_00032218(3,local_810,0);
      return 0xffffffff;
    }
    if (param_2 != 0) {
      snprintf(local_810,0x800,
               "Get power error code[4-7 8-11] %02x%02x%02x%02x %02x%02x%02x%02x, err_code:0x%08x\n"
               ,(uint)local_82c,(uint)local_82b,(uint)local_82a,(uint)local_829,local_828 & 0xff,
               local_828 >> 8 & 0xff,local_828 >> 0x10 & 0xff,local_828 >> 0x18,local_828);
      FUN_00032218(3,local_810,0);
      return local_828;
    }
  }
  return local_828;
}


