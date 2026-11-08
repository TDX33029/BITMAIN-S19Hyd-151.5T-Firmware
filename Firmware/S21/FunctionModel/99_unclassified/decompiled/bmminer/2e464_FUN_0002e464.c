// FUN_0002e464 @ 0002e464  size=164  callers=0
// program: bmminer


void FUN_0002e464(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_2008 [8192];
  
  if (param_1 == 0) {
    if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
      snprintf(acStack_2008,0x2000,"%s: input bad json param\n","api_miner_chain_num");
      FUN_0004948c(3,acStack_2008,0);
      return;
    }
  }
  else {
    iVar1 = FUN_0002a6e0();
    uVar2 = FUN_00080784(iVar1,iVar1 >> 0x1f);
    FUN_0007ec50(param_1,"chain_num",uVar2);
  }
  return;
}

