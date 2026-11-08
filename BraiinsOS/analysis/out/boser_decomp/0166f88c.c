// FUN_0166f88c @ 0166f88c size=156 calls_out=3 calls_in=2
// strings: 

void FUN_0166f88c(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_3 < 0) {
LAB_0166f8a4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar2,param_3);
  }
  if (param_3 == 0) {
    iVar1 = 1;
    iVar3 = 0;
  }
  else {
    uVar2 = 1;
    iVar1 = FUN_01298504(param_3,1);
    iVar3 = param_3;
    if (iVar1 == 0) goto LAB_0166f8a4;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 5) = param_5;
  *param_1 = 0x80000000;
  param_1[1] = iVar3;
  param_1[2] = iVar1;
  param_1[3] = param_3;
  param_1[4] = param_4;
  return;
}

