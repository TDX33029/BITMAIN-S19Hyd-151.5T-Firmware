// FUN_0002e3bc @ 0002e3bc  size=168  callers=0
// program: bmminer


void FUN_0002e3bc(int param_1)

{
  undefined4 uVar1;
  char acStack_2008 [8192];
  
  if (param_1 == 0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf(acStack_2008,0x2000,"%s: input bad json param\n","api_miner_inited");
      FUN_0004948c(3,acStack_2008,0);
      return;
    }
  }
  else {
    uVar1 = FUN_0004e8a8();
    uVar1 = FUN_00080784(uVar1,0);
    FUN_0007ec50(param_1,"inited",uVar1);
  }
  return;
}

