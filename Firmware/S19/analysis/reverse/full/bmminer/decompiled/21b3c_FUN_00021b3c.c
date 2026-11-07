// FUN_00021b3c @ 00021b3c  size=192  callers=0
// program: bmminer


void FUN_00021b3c(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  char acStack_808 [2048];
  
  if (param_1 != 0 && param_2 < 4) {
    iVar1 = FUN_0001d9a4(param_2);
    uVar2 = FUN_00056130(iVar1,iVar1 >> 0x1f);
    FUN_00056774(param_1,"freq_avg",uVar2);
    return;
  }
  if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
    snprintf(acStack_808,0x800,"%s: input bad param\n","api_miner_chain_frequency");
    FUN_00032218(3,acStack_808,0);
  }
  return;
}

