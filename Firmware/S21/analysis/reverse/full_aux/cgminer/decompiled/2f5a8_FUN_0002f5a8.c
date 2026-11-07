// FUN_0002f5a8 @ 0002f5a8  size=316  callers=0
// program: cgminer


void FUN_0002f5a8(void)

{
  char local_810 [2052];
  
  if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
    snprintf(local_810,0x800,"Attempting to restart %s",&DAT_00068914);
    FUN_0001dd98(4,local_810,0);
  }
  FUN_00023258(&LAB_0002fab0,0,5000);
  FUN_0002f480(1);
  if (0 < DAT_00068b1c) {
    kill(DAT_00068b1c,0xf);
    DAT_00068b1c = 0;
  }
  execv(*DAT_00068b74,DAT_00068b74);
  if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 4)) {
    return;
  }
  builtin_strncpy(local_810,"Failed to restart application",0x1e);
  FUN_0001dd98(4,local_810,0);
  return;
}

