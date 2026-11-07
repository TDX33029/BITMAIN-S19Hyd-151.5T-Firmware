// FUN_000388ec @ 000388ec  size=1128
// callers: [FUN_0003f2d0, FUN_00039544]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_000388ec(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char local_811;
  char local_810 [4];
  char acStack_80c [4];
  char acStack_808 [4];
  char acStack_804 [4];
  undefined3 local_800;
  char cStack_7fd;
  char acStack_7fc [4];
  char acStack_7f8 [4];
  char acStack_7f4 [4];
  undefined2 local_7f0;
  
  FUN_00036b18();
  FUN_00049fac();
  pcVar1 = (char *)FUN_0001fffc();
  iVar2 = strcmp(pcVar1,"HHB28601");
  if (iVar2 != 0) {
    pcVar1 = (char *)FUN_0001fffc();
    iVar2 = strcmp(pcVar1,"HHB28602");
    if (iVar2 != 0) {
      iVar2 = FUN_0001575c(4000,1);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (3 < DAT_00087bbc) {
        local_810[0] = s_Fan_check_passed__0006f230[0];
        local_810[1] = s_Fan_check_passed__0006f230[1];
        local_810[2] = s_Fan_check_passed__0006f230[2];
        local_810[3] = s_Fan_check_passed__0006f230[3];
        acStack_80c[0] = s_Fan_check_passed__0006f230[4];
        acStack_80c[1] = s_Fan_check_passed__0006f230[5];
        acStack_80c[2] = s_Fan_check_passed__0006f230[6];
        acStack_80c[3] = s_Fan_check_passed__0006f230[7];
        acStack_808[0] = s_Fan_check_passed__0006f230[8];
        acStack_808[1] = s_Fan_check_passed__0006f230[9];
        acStack_808[2] = s_Fan_check_passed__0006f230[10];
        acStack_808[3] = s_Fan_check_passed__0006f230[0xb];
        acStack_804[0] = s_Fan_check_passed__0006f230[0xc];
        acStack_804[1] = s_Fan_check_passed__0006f230[0xd];
        acStack_804[2] = s_Fan_check_passed__0006f230[0xe];
        acStack_804[3] = s_Fan_check_passed__0006f230[0xf];
        local_800 = (undefined3)ram0x0006f240;
        FUN_00032218(3,local_810,0);
      }
    }
  }
  iVar2 = FUN_00036748();
  if (iVar2 != 0) {
    iVar3 = FUN_000201c8();
    if (iVar3 == 0) {
      return iVar2;
    }
    if (DAT_00087dec == 0) {
      return iVar2;
    }
  }
  FUN_0002b150();
  FUN_00018364();
  local_811 = '\0';
  iVar2 = FUN_0004fd58(&local_811);
  if ((iVar2 == 0) && (local_811 != '\0')) {
    FUN_00050a54(1);
    pcVar1 = (char *)FUN_0004fddc();
    if (pcVar1 != (char *)0x0) {
      if (*pcVar1 != 'N') {
        strncpy(DAT_00038d54,pcVar1,0x1f);
      }
      if (DAT_00087bbc < 4) goto LAB_000389c4;
      snprintf(local_810,0x800,"power sn:%s\n",pcVar1);
      FUN_00032218(3,local_810,0);
    }
    if (3 < DAT_00087bbc) {
      iVar2 = FUN_0004fe20();
      snprintf(local_810,0x800,"enable_power_calibration, calibration date:%d.\n",iVar2);
      FUN_00032218(3,local_810,0);
    }
  }
  else if (3 < DAT_00087bbc) {
    local_810[0] = s_warning_power_is_not_calibrated__0006f284[0];
    local_810[1] = s_warning_power_is_not_calibrated__0006f284[1];
    local_810[2] = s_warning_power_is_not_calibrated__0006f284[2];
    local_810[3] = s_warning_power_is_not_calibrated__0006f284[3];
    acStack_80c[0] = s_warning_power_is_not_calibrated__0006f284[4];
    acStack_80c[1] = s_warning_power_is_not_calibrated__0006f284[5];
    acStack_80c[2] = s_warning_power_is_not_calibrated__0006f284[6];
    acStack_80c[3] = s_warning_power_is_not_calibrated__0006f284[7];
    acStack_808[0] = s_warning_power_is_not_calibrated__0006f284[8];
    acStack_808[1] = s_warning_power_is_not_calibrated__0006f284[9];
    acStack_808[2] = s_warning_power_is_not_calibrated__0006f284[10];
    acStack_808[3] = s_warning_power_is_not_calibrated__0006f284[0xb];
    acStack_804[0] = s_warning_power_is_not_calibrated__0006f284[0xc];
    acStack_804[1] = s_warning_power_is_not_calibrated__0006f284[0xd];
    acStack_804[2] = s_warning_power_is_not_calibrated__0006f284[0xe];
    acStack_804[3] = s_warning_power_is_not_calibrated__0006f284[0xf];
    local_800._0_1_ = s_warning_power_is_not_calibrated__0006f284[0x10];
    local_800._1_1_ = s_warning_power_is_not_calibrated__0006f284[0x11];
    local_800._2_1_ = s_warning_power_is_not_calibrated__0006f284[0x12];
    cStack_7fd = s_warning_power_is_not_calibrated__0006f284[0x13];
    acStack_7fc[0] = s_warning_power_is_not_calibrated__0006f284[0x14];
    acStack_7fc[1] = s_warning_power_is_not_calibrated__0006f284[0x15];
    acStack_7fc[2] = s_warning_power_is_not_calibrated__0006f284[0x16];
    acStack_7fc[3] = s_warning_power_is_not_calibrated__0006f284[0x17];
    acStack_7f8[0] = s_warning_power_is_not_calibrated__0006f284[0x18];
    acStack_7f8[1] = s_warning_power_is_not_calibrated__0006f284[0x19];
    acStack_7f8[2] = s_warning_power_is_not_calibrated__0006f284[0x1a];
    acStack_7f8[3] = s_warning_power_is_not_calibrated__0006f284[0x1b];
    acStack_7f4[0] = s_warning_power_is_not_calibrated__0006f284[0x1c];
    acStack_7f4[1] = s_warning_power_is_not_calibrated__0006f284[0x1d];
    acStack_7f4[2] = s_warning_power_is_not_calibrated__0006f284[0x1e];
    acStack_7f4[3] = s_warning_power_is_not_calibrated__0006f284[0x1f];
    local_7f0 = (undefined2)ram0x0006f2a4;
    FUN_00032218(3,local_810,0);
  }
LAB_000389c4:
  if (DAT_00087b89 == '\0') {
    if (0 < DAT_0048d3d4) {
      iVar2 = FUN_0001cd50();
      goto LAB_00038c38;
    }
  }
  else {
    pcVar1 = (char *)FUN_0001fffc();
    iVar2 = strcmp(pcVar1,"BHB28601");
    if (iVar2 == 0) {
      iVar2 = FUN_0001cd50(0x76c);
    }
    else {
      pcVar1 = (char *)FUN_0001fffc();
      iVar2 = strcmp(pcVar1,"HHB28601");
      if (iVar2 != 0) {
        pcVar1 = (char *)FUN_0001fffc();
        iVar2 = strcmp(pcVar1,"HHB28602");
        if (iVar2 != 0) {
          iVar2 = FUN_0001cd50(0x5dc);
          goto LAB_00038c38;
        }
      }
      iVar2 = FUN_0001cd50(0x834);
    }
LAB_00038c38:
    if (iVar2 != 0) {
      FUN_0003a9e0(0xc,0);
      FUN_00036380(9,"get power type version failed!");
      return iVar2;
    }
  }
  if (3 < DAT_00087bbc) {
    iVar2 = FUN_00018cb8();
    snprintf(local_810,0x800,"start up min temp by 75a = %d",iVar2);
    FUN_00032218(3,local_810,0);
  }
  FUN_00038228();
  DAT_00b2d224 = FUN_00018cb8();
  if (3 < DAT_00087bbc) {
    snprintf(local_810,0x800,"Bring up temperature is %d\n",DAT_00b2d224);
    FUN_00032218(3,local_810,0);
  }
  pcVar1 = (char *)FUN_0001fffc();
  iVar2 = strcmp(pcVar1,"HHB28601");
  if (iVar2 != 0) {
    pcVar1 = (char *)FUN_0001fffc();
    iVar2 = strcmp(pcVar1,"HHB28602");
    if (iVar2 != 0) goto LAB_00038a3c;
  }
  if (DAT_00b2d224 < 0x14) {
    DAT_0048d394 = 1;
    FUN_0003a9e0(9,0xff);
    FUN_00022a44(1);
    FUN_00036380(0x10,"Water temperature is too low!");
  }
LAB_00038a3c:
  FUN_0004a218();
  FUN_0004a330();
  FUN_0004a3a0();
  FUN_00034a5c(10);
  FUN_0002bb00(0x1c200);
  FUN_00034a5c(10);
  iVar2 = FUN_00037218();
  if ((iVar2 == 0) || ((iVar3 = FUN_000201c8(), iVar3 != 0 && (DAT_00087dec != 0)))) {
    FUN_0003818c();
    iVar2 = 0;
    DAT_000891ec = 0;
    DAT_000891f4 = 0;
    DAT_000891f0 = 0;
  }
  return iVar2;
}


