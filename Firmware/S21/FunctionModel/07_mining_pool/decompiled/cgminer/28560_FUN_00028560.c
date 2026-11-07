// FUN_00028560 @ 00028560  size=532  callers=0
// program: cgminer


undefined4 FUN_00028560(char *param_1)

{
  char *__fd;
  char *__format;
  bool bVar1;
  char *local_814;
  char local_810 [2052];
  
  local_814 = "";
  __fd = (char *)strtol(param_1,&local_814,10);
  bVar1 = __fd == (char *)0x0;
  if (-1 < (int)__fd) {
    bVar1 = *local_814 == '\0';
  }
  if (bVar1) {
    DAT_00068910 = fdopen((int)__fd,"a");
    if ((DAT_00068910 == (FILE *)0x0) &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)))) {
      __format = "Failed to open fd %u for share log";
LAB_0002863c:
      DAT_00068910 = (FILE *)0x0;
      snprintf(local_810,0x800,__format,__fd);
      FUN_0001dd98(3,local_810,0);
      return 0;
    }
  }
  else if ((*param_1 == '-') && (param_1[1] == '\0')) {
    DAT_00068910 = stdout;
    if ((stdout == (FILE *)0x0) &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)))) {
      builtin_strncpy(local_810,"Standard output missing for share log",0x26);
      FUN_0001dd98(3,local_810,0);
      return 0;
    }
  }
  else {
    DAT_00068910 = fopen64(param_1,"a");
    if ((DAT_00068910 == (FILE *)0x0) &&
       (((DAT_00072da0 != '\0' || (DAT_000686f0 != '\0')) || (2 < DAT_00067848)))) {
      __format = "Failed to open %s for share log";
      __fd = param_1;
      goto LAB_0002863c;
    }
  }
  return 0;
}

