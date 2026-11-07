// FUN_00029c00 @ 00029c00  size=172  callers=3
// program: cgminer


void FUN_00029c00(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  char acStack_808 [2048];
  
  iVar1 = nice(10);
  if (iVar1 != 0) {
    return;
  }
  if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 6)) {
    return;
  }
  builtin_strncpy(acStack_808,"Unable to set thread to low priority",0x25);
  FUN_0001dd98(6,acStack_808,0);
                    /* WARNING: Could not recover jumptable at 0x00029bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

