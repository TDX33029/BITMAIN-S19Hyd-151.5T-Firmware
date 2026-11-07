// FUN_00022798 @ 00022798  size=244  callers=0
// program: bmminer


void FUN_00022798(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 auStack_830 [32];
  char acStack_810 [2052];
  
  memset(auStack_830,0,0x20);
  if (param_1 != 0 && param_2 < 4) {
    FUN_0001b798(param_2,auStack_830,0x20);
    uVar1 = FUN_00055ee4(auStack_830);
    FUN_00056774(param_1,"sn",uVar1);
    return;
  }
  if (((DAT_0071e84c == '\0') && (DAT_0048d36d == '\0')) && (DAT_00087bc4 < 3)) {
    return;
  }
  snprintf(acStack_810,0x800,"%s: input bad param\n","api_miner_chain_sn");
  FUN_00032218(3,acStack_810,0);
  return;
}

