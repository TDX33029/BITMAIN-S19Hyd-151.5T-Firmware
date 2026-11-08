// FUN_01283338 @ 01283338 size=116 calls_out=3 calls_in=0
// strings: 

void FUN_01283338(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_4 < 0) {
LAB_0128334c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,param_4);
  }
  if (param_4 == 0) {
    iVar1 = 1;
    iVar2 = 0;
  }
  else {
    uVar3 = 1;
    iVar1 = FUN_01298504(param_4,1);
    iVar2 = param_4;
    if (iVar1 == 0) goto LAB_0128334c;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  FUN_01bed4e2(iVar1,param_3,param_4);
  param_1[2] = param_4;
  return;
}

