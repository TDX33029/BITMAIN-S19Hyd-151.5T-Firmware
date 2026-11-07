// FUN_0002ffe4 @ 0002ffe4  size=180  callers=2
// program: cgminer


void FUN_0002ffe4(int *param_1)

{
  int iVar1;
  char acStack_808 [2048];
  
  iVar1 = FUN_0002cce4(param_1,(int)param_1 + 0x61);
  if (iVar1 == 0) {
    return;
  }
  if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 6)) {
    FUN_0002fe1c(param_1);
    return;
  }
  snprintf(acStack_808,0x800,"Stratum connection to pool %d resumed",*param_1);
  FUN_0001dd98(6,acStack_808,0);
  FUN_0002fe1c(param_1);
  return;
}

