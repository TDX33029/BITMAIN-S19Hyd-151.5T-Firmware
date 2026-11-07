// FUN_0002faec @ 0002faec  size=196  callers=0
// program: bmminer


void FUN_0002faec(int param_1,uint param_2)

{
  undefined4 uVar1;
  char acStack_2008 [8192];
  
  if (param_1 != 0 && param_2 < 4) {
    uVar1 = FUN_00080784(*(int *)(&DAT_000cb678 + param_2 * 4),
                         *(int *)(&DAT_000cb678 + param_2 * 4) >> 0x1f);
    FUN_0007ec50(param_1,"nonce",uVar1);
    return;
  }
  if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
    snprintf(acStack_2008,0x2000,"%s: input bad param\n","api_miner_chain_nonce");
    FUN_0004948c(3,acStack_2008,0);
  }
  return;
}

