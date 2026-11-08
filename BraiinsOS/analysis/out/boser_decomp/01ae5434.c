// FUN_01ae5434 @ 01ae5434 size=116 calls_out=3 calls_in=4
// strings: 

void FUN_01ae5434(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_3 < 0) {
LAB_01ae5448:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,param_3);
  }
  if (param_3 == 0) {
    iVar1 = 1;
    iVar2 = 0;
  }
  else {
    uVar3 = 1;
    iVar1 = FUN_01298504(param_3,1);
    iVar2 = param_3;
    if (iVar1 == 0) goto LAB_01ae5448;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  FUN_01bed4e2(iVar1,param_2,param_3);
  param_1[2] = param_3;
  return;
}

