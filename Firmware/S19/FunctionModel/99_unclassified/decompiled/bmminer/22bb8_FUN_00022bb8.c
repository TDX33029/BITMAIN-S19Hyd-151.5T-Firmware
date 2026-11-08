// FUN_00022bb8 @ 00022bb8  size=168  callers=0
// program: bmminer


void FUN_00022bb8(int param_1)

{
  undefined4 uVar1;
  char acStack_808 [2048];
  
  if (param_1 == 0) {
    if (((DAT_0071e84c != '\0') || (DAT_0048d36d != '\0')) || (2 < DAT_00087bc4)) {
      snprintf(acStack_808,0x800,"%s: input bad json param\n","api_total_hash");
      FUN_00032218(3,acStack_808,0);
      return;
    }
  }
  else {
    uVar1 = FUN_000561b4((int)DAT_0008a7d8);
    FUN_00056774(param_1,"total_hash",uVar1);
  }
  return;
}

