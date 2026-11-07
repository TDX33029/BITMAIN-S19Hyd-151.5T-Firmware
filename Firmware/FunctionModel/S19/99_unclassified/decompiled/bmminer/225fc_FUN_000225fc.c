// FUN_000225fc @ 000225fc  size=196  callers=0
// program: bmminer


void FUN_000225fc(int param_1,uint param_2)

{
  undefined4 uVar1;
  char acStack_808 [2048];
  
  if (param_1 != 0 && param_2 < 4) {
    uVar1 = FUN_00056130(*(undefined4 *)(&DAT_0008a9b4 + param_2 * 4));
    FUN_00056774(param_1,"nonce",uVar1);
    return;
  }
  if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
    snprintf(acStack_808,0x800,"%s: input bad param\n","api_miner_chain_nonce");
    FUN_00032218(3,acStack_808,0);
  }
  return;
}

