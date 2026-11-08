// FUN_0007ccd0 @ 0007ccd0  size=296  callers=1
// program: bmminer


int FUN_0007ccd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0007f548();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0007c678(param_1,param_3);
    if (*(int *)(param_1 + 0x3c) != 0x5d) {
      while (*(int *)(param_1 + 0x3c) != 0) {
        iVar2 = FUN_0007cdf8(param_1,param_2,param_3);
        if ((iVar2 == 0) || (iVar2 = FUN_0007f9e4(iVar1,iVar2), iVar2 != 0)) goto LAB_0007cde0;
        FUN_0007c678(param_1,param_3);
        if (*(int *)(param_1 + 0x3c) != 0x2c) break;
        FUN_0007c678(param_1,param_3);
      }
      if (*(int *)(param_1 + 0x3c) != 0x5d) {
        FUN_0007b2bc(param_3,param_1,8,"\']\' expected");
LAB_0007cde0:
        FUN_0007b254(iVar1);
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

