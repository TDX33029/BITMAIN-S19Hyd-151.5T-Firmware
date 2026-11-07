// FUN_00031f80 @ 00031f80  size=304  callers=3
// program: cgminer


void FUN_00031f80(int *param_1)

{
  int iVar1;
  int *piVar2;
  char acStack_808 [2048];
  
  iVar1 = FUN_0002cc78(param_1,(int)param_1 + 0x61);
  if (iVar1 == 0) {
    FUN_000206d8(param_1 + 0x22);
    piVar2 = (int *)FUN_0002fbd8();
    if (param_1 == piVar2) {
      if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (3 < DAT_00067848)) {
        snprintf(acStack_808,0x800,"Pool %d %s not responding!",*param_1,(char *)param_1[0x29]);
        FUN_0001dd98(4,acStack_808,0);
      }
      FUN_00031afc(0);
      return;
    }
    if (((DAT_00072da0 != '\0') || (DAT_000686f0 != '\0')) || (5 < DAT_00067848)) {
      snprintf(acStack_808,0x800,"Pool %d %s failed to return work",*param_1,(char *)param_1[0x29]);
      FUN_0001dd98(6,acStack_808,0);
      return;
    }
  }
  return;
}

