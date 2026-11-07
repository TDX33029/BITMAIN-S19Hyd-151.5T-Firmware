// FUN_0004546c @ 0004546c  size=484  callers=1
// program: bmminer


int FUN_0004546c(int param_1,undefined4 param_2)

{
  int iVar1;
  void *__ptr;
  int local_2014;
  char local_2010 [8196];
  
  local_2014 = param_1;
  FUN_0005ee08(&DAT_000be000,"Options for both config file and command line");
  FUN_0005ee08(&DAT_000be500,"Options for command line only");
  FUN_0005eedc(&local_2014,param_2,&DAT_000415ac);
  if (local_2014 != 1) {
    builtin_strncpy(local_2010,"Unexpected extra commandline arguments",0x27);
    FUN_0004948c(3,local_2010,1);
  }
  iVar1 = FUN_00042958();
  if (iVar1 != 0) {
    __ptr = (void *)FUN_00041d5c("/etc/cgminer.conf.factory",&DAT_000be58c,0);
    if (__ptr != (void *)0x0) {
      free(__ptr);
      return 0;
    }
    if (DAT_000c8d88 != 0) {
      FUN_00043bf0();
    }
    if (DAT_000c8d80 != (char *)0x0) {
      DAT_008c6690 = 1;
      strcpy(&DAT_008c66b8,DAT_000c8d80);
      if (DAT_000c8d84 == (char *)0x0) {
        DAT_008c6698 = 0x2b61;
        DAT_008c669a = 0;
      }
      else {
        strcpy((char *)&DAT_008c6698,DAT_000c8d84);
      }
      if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
        snprintf(local_2010,0x2000,"Log file path: %s Open flag: %s",&DAT_008c66b8,
                 (char *)&DAT_008c6698);
        FUN_0004948c(3,local_2010,0);
      }
    }
  }
  return iVar1;
}

