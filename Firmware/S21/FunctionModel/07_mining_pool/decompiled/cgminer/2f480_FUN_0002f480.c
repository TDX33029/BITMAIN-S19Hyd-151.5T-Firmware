// FUN_0002f480 @ 0002f480  size=292  callers=2
// program: cgminer


void FUN_0002f480(int param_1)

{
  int iVar1;
  uint *puVar2;
  char *param4;
  uint param3;
  sysinfo local_850;
  char acStack_810 [2052];
  
  iVar1 = sysinfo(&local_850);
  if (iVar1 == 0) {
    DAT_000761e4 = local_850.uptime;
    FUN_000206d8(&DAT_00068b38);
  }
  else {
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
      puVar2 = (uint *)__errno_location();
      param3 = *puVar2;
      param4 = strerror(param3);
      snprintf(acStack_810,0x800,"Failed to get sysinfo, errno:%u, reason:%s\n",param3,param4);
      FUN_0001dd98(6,acStack_810,0);
    }
    DAT_000761e4 = time((time_t *)0x0);
    FUN_000206d8(&DAT_00068b38);
  }
  if (((param_1 == 0) && (DAT_000761e0 == '\0')) && (DAT_000686f2 != '\0')) {
    FUN_0002e0c8();
    return;
  }
  return;
}

