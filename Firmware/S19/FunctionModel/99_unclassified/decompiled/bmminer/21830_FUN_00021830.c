// FUN_00021830 @ 00021830  size=208  callers=0
// program: bmminer


void FUN_00021830(int param_1)

{
  undefined4 uVar1;
  undefined4 local_80c;
  char acStack_808 [2048];
  
  local_80c = 0;
  if (param_1 != 0) {
    local_80c = 0x4847;
    uVar1 = FUN_00055ee4(&local_80c);
    FUN_00056774(param_1,"rate_unit",uVar1);
    return;
  }
  if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
    snprintf(acStack_808,0x800,"%s: input bad json param\n","api_miner_rate_unit");
    FUN_00032218(3,acStack_808,0);
  }
  return;
}

