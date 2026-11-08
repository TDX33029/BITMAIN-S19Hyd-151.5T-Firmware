// FUN_0002fe1c @ 0002fe1c  size=312  callers=3
// program: cgminer


void FUN_0002fe1c(int *param_1)

{
  int iVar1;
  int iVar2;
  char acStack_810 [2052];
  
  iVar1 = DAT_00068af4;
  param_1[7] = 0;
  if ((iVar1 == 0) && (iVar2 = param_1[1], iVar1 = FUN_0002fd70(), iVar2 < iVar1)) {
    if ((DAT_00072da0 != '\0') || ((DAT_000686f0 != '\0' || (3 < DAT_00067848)))) {
      snprintf(acStack_810,0x800,"Pool %d %s alive, testing stability",*param_1,
               (char *)param_1[0x29]);
      FUN_0001dd98(4,acStack_810,0);
      return;
    }
  }
  else {
    if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 6)) {
      return;
    }
    snprintf(acStack_810,0x800,"Pool %d %s alive",*param_1,(char *)param_1[0x29]);
    FUN_0001dd98(6,acStack_810,0);
  }
  return;
}

