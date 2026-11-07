// FUN_0007d064 @ 0007d064  size=300  callers=5
// program: bmminer


int FUN_0007d064(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_0007c678(param_1,param_3);
  if ((((param_2 & 4) == 0) && (*(int *)(param_1 + 0x3c) != 0x5b)) &&
     (*(int *)(param_1 + 0x3c) != 0x7b)) {
    FUN_0007b2bc(param_3,param_1,8,"\'[\' or \'{\' expected");
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0007cdf8(param_1,param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else if (((param_2 & 2) == 0) && (FUN_0007c678(param_1,param_3), *(int *)(param_1 + 0x3c) != 0))
    {
      FUN_0007b2bc(param_3,param_1,7,"end of file expected");
      FUN_0007b254(iVar1);
      iVar1 = 0;
    }
    else if (param_3 != 0) {
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x24);
    }
  }
  return iVar1;
}

