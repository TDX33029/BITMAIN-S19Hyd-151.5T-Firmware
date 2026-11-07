// FUN_00030004 @ 00030004  size=164  callers=0
// program: bmminer


void FUN_00030004(int param_1)

{
  undefined4 uVar1;
  char acStack_2008 [8192];
  
  if (param_1 == 0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf(acStack_2008,0x2000,"%s: input bad json param\n","api_miner_version");
      FUN_0004948c(3,acStack_2008,0);
      return;
    }
  }
  else {
    uVar1 = FUN_00080268(&DAT_000c9514);
    FUN_0007ec50(param_1,"miner_version",uVar1);
  }
  return;
}

