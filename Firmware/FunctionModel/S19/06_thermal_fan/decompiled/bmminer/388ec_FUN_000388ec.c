// FUN_000388ec @ 000388ec  size=1128  callers=2
// program: bmminer


/* WARNING: Restarted to delay deadcode elimination for space: ram */

int FUN_000388ec(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char local_811;
  char local_810 [16];
  undefined4 local_800;
  char acStack_7fc [2032];
  
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
        builtin_strncpy(local_810,"Fan check passed",0x10);
        local_800._0_1_ = '.';
        local_800._1_1_ = '\n';
        local_800._2_1_ = '\0';
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
        strncpy(&DAT_0048d3b4,pcVar1,0x1f);
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
    builtin_strncpy(local_810,"warning:power is",0x10);
    local_800._0_1_ = ' ';
    local_800._1_1_ = 'n';
    local_800._2_1_ = 'o';
    local_800._3_1_ = 't';
    builtin_strncpy(acStack_7fc," calibrated.\n",0xe);
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

