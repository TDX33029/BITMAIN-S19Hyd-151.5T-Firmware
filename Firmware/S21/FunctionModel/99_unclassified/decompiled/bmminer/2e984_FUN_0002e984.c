// FUN_0002e984 @ 0002e984  size=208  callers=0
// program: bmminer


void FUN_0002e984(int param_1)

{
  undefined4 uVar1;
  undefined4 local_200c;
  char acStack_2008 [8192];
  
  local_200c = 0;
  if (param_1 != 0) {
    local_200c = 0x4847;
    uVar1 = FUN_00080268(&local_200c);
    FUN_0007ec50(param_1,"rate_unit",uVar1);
    return;
  }
  if (((DAT_00a5d20d != '\0') || (DAT_008c702d != '\0')) || (2 < DAT_000be644)) {
    snprintf(acStack_2008,0x2000,"%s: input bad json param\n","api_miner_rate_unit");
    FUN_0004948c(3,acStack_2008,0);
  }
  return;
}

