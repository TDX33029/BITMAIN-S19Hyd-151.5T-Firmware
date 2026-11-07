// FUN_0001cd50 @ 0001cd50  size=504
// callers: [FUN_000388ec]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0001cd50(undefined4 param_1)

{
  double dVar1;
  uint param3;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined4 extraout_s1;
  double dVar4;
  char local_830 [4];
  char acStack_82c [4];
  char acStack_828 [4];
  char acStack_824 [4];
  char local_820 [4];
  char acStack_81c [4];
  undefined2 local_818 [2];
  char acStack_814 [4];
  char acStack_810 [4];
  undefined2 local_80c;
  
  param3 = FUN_0004f034();
  DAT_000891d8 = param3;
  if (3 < DAT_00087bbc) {
    snprintf(local_830,0x800,"power type version: 0x%04x\n",param3);
    FUN_00032218(3,local_830,0);
  }
  iVar2 = FUN_00020854(param3 & 0xffff);
  if (iVar2 == 0) {
    if (3 < DAT_00087bbc) {
      local_830[0] = s_power_type_version_error_00069078[0];
      local_830[1] = s_power_type_version_error_00069078[1];
      local_830[2] = s_power_type_version_error_00069078[2];
      local_830[3] = s_power_type_version_error_00069078[3];
      acStack_82c[0] = s_power_type_version_error_00069078[4];
      acStack_82c[1] = s_power_type_version_error_00069078[5];
      acStack_82c[2] = s_power_type_version_error_00069078[6];
      acStack_82c[3] = s_power_type_version_error_00069078[7];
      acStack_828[0] = s_power_type_version_error_00069078[8];
      acStack_828[1] = s_power_type_version_error_00069078[9];
      acStack_828[2] = s_power_type_version_error_00069078[10];
      acStack_828[3] = s_power_type_version_error_00069078[0xb];
      acStack_824[0] = s_power_type_version_error_00069078[0xc];
      acStack_824[1] = s_power_type_version_error_00069078[0xd];
      acStack_824[2] = s_power_type_version_error_00069078[0xe];
      acStack_824[3] = s_power_type_version_error_00069078[0xf];
      local_820[0] = s_power_type_version_error_00069078[0x10];
      local_820[1] = s_power_type_version_error_00069078[0x11];
      local_820[2] = s_power_type_version_error_00069078[0x12];
      local_820[3] = s_power_type_version_error_00069078[0x13];
      acStack_81c[0] = s_power_type_version_error_00069078[0x14];
      acStack_81c[1] = s_power_type_version_error_00069078[0x15];
      acStack_81c[2] = s_power_type_version_error_00069078[0x16];
      acStack_81c[3] = s_power_type_version_error_00069078[0x17];
      local_818[0] = (short)ram0x00069090;
      FUN_00032218(3,local_830,0);
      return -1;
    }
  }
  else {
    if (3 < DAT_00087bbc) {
      memcpy(local_830,"Initializing the power, please wait, this may take up to 2 minutes...\n",
             0x47);
      FUN_00032218(3,local_830,0);
    }
    FUN_000479e8();
    sleep(1);
    FUN_0001cba0();
    iVar2 = FUN_0001cc60(param_1);
    if (iVar2 < 0) {
      if (DAT_00087bbc < 4) {
        return iVar2;
      }
      snprintf(local_830,0x800,"%s power iic error.\n",DAT_0001cf50);
      FUN_00032218(3,local_830,0);
      return iVar2;
    }
    FUN_000479b0();
    dVar1 = DAT_0001cf48;
    sleep(1);
    iVar2 = 3;
    dVar4 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    do {
      sleep(1);
      uVar3 = FUN_0001caa8();
      if ((dVar4 * 0.75) / dVar1 <= (double)CONCAT44(extraout_s1,uVar3)) {
        return 0;
      }
      if (3 < DAT_00087bbc) {
        local_830[0] = s_power_voltage_can_not_meet_the_t_000690f4[0];
        local_830[1] = s_power_voltage_can_not_meet_the_t_000690f4[1];
        local_830[2] = s_power_voltage_can_not_meet_the_t_000690f4[2];
        local_830[3] = s_power_voltage_can_not_meet_the_t_000690f4[3];
        acStack_82c[0] = s_power_voltage_can_not_meet_the_t_000690f4[4];
        acStack_82c[1] = s_power_voltage_can_not_meet_the_t_000690f4[5];
        acStack_82c[2] = s_power_voltage_can_not_meet_the_t_000690f4[6];
        acStack_82c[3] = s_power_voltage_can_not_meet_the_t_000690f4[7];
        acStack_828[0] = s_power_voltage_can_not_meet_the_t_000690f4[8];
        acStack_828[1] = s_power_voltage_can_not_meet_the_t_000690f4[9];
        acStack_828[2] = s_power_voltage_can_not_meet_the_t_000690f4[10];
        acStack_828[3] = s_power_voltage_can_not_meet_the_t_000690f4[0xb];
        acStack_824[0] = s_power_voltage_can_not_meet_the_t_000690f4[0xc];
        acStack_824[1] = s_power_voltage_can_not_meet_the_t_000690f4[0xd];
        acStack_824[2] = s_power_voltage_can_not_meet_the_t_000690f4[0xe];
        acStack_824[3] = s_power_voltage_can_not_meet_the_t_000690f4[0xf];
        local_820[0] = s_power_voltage_can_not_meet_the_t_000690f4[0x10];
        local_820[1] = s_power_voltage_can_not_meet_the_t_000690f4[0x11];
        local_820[2] = s_power_voltage_can_not_meet_the_t_000690f4[0x12];
        local_820[3] = s_power_voltage_can_not_meet_the_t_000690f4[0x13];
        acStack_81c[0] = s_power_voltage_can_not_meet_the_t_000690f4[0x14];
        acStack_81c[1] = s_power_voltage_can_not_meet_the_t_000690f4[0x15];
        acStack_81c[2] = s_power_voltage_can_not_meet_the_t_000690f4[0x16];
        acStack_81c[3] = s_power_voltage_can_not_meet_the_t_000690f4[0x17];
        local_818 = (undefined2  [2])s_power_voltage_can_not_meet_the_t_000690f4._24_4_;
        acStack_814[0] = s_power_voltage_can_not_meet_the_t_000690f4[0x1c];
        acStack_814[1] = s_power_voltage_can_not_meet_the_t_000690f4[0x1d];
        acStack_814[2] = s_power_voltage_can_not_meet_the_t_000690f4[0x1e];
        acStack_814[3] = s_power_voltage_can_not_meet_the_t_000690f4[0x1f];
        acStack_810[0] = s_power_voltage_can_not_meet_the_t_000690f4[0x20];
        acStack_810[1] = s_power_voltage_can_not_meet_the_t_000690f4[0x21];
        acStack_810[2] = s_power_voltage_can_not_meet_the_t_000690f4[0x22];
        acStack_810[3] = s_power_voltage_can_not_meet_the_t_000690f4[0x23];
        local_80c = (undefined2)ram0x00069118;
        FUN_00032218(3,local_830,0);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return -1;
}


