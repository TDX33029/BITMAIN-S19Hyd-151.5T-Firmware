// FUN_0001f444 @ 0001f444  size=336  callers=3
// program: cgminer


undefined1 FUN_0001f444(byte *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  byte *pbVar2;
  uint param3;
  char acStack_810 [2048];
  
  if (param_1 == (byte *)0x0) {
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
      return 0;
    }
    snprintf(acStack_810,0x800,"Null string passed to valid_hex from in %s %s():%d","util.c",param_2
             ,param_3);
  }
  else {
    sVar1 = strlen((char *)param_1);
    if (sVar1 == 0) {
      return 1;
    }
    param3 = (uint)*param_1;
    if (-1 < *(int *)(&DAT_0004c444 + param3 * 4)) {
      pbVar2 = param_1 + (sVar1 - 1);
      do {
        if (param_1 == pbVar2) {
          return 1;
        }
        param_1 = param_1 + 1;
        param3 = (uint)*param_1;
      } while (-1 < *(int *)(&DAT_0004c444 + param3 * 4));
    }
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
      return 0;
    }
    snprintf(acStack_810,0x800,"Invalid char 0x%x passed to valid_hex from in %s %s():%d",param3,
             "util.c",param_2,param_3);
  }
  FUN_0001dd98(3,acStack_810,0);
  return 0;
}

