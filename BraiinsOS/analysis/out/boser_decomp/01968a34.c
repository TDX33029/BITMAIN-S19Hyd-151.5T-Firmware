// FUN_01968a34 @ 01968a34 size=128 calls_out=3 calls_in=2
// strings: 

void FUN_01968a34(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_3 < 0) {
LAB_01968a48:
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
    if (iVar1 == 0) goto LAB_01968a48;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  *(int *)(param_1 + 4) = iVar3;
  *(int *)(param_1 + 8) = iVar1;
  *(int *)(param_1 + 0xc) = param_3;
  *param_1 = 3;
  return;
}

