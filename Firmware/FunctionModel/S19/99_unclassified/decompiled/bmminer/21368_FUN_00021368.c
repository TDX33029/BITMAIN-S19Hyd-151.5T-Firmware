// FUN_00021368 @ 00021368  size=164  callers=0
// program: bmminer


void FUN_00021368(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_808 [2048];
  
  if (param_1 == 0) {
    if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
      snprintf(acStack_808,0x800,"%s: input bad json param\n","api_miner_chain_num");
      FUN_00032218(3,acStack_808,0);
      return;
    }
  }
  else {
    iVar1 = FUN_000201c8();
    uVar2 = FUN_00056130(iVar1,iVar1 >> 0x1f);
    FUN_00056774(param_1,"chain_num",uVar2);
  }
  return;
}

