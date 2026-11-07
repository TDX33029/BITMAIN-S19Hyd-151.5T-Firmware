// FUN_012e4b04 @ 012e4b04 size=140 calls_out=3 calls_in=1
// strings: 

void FUN_012e4b04(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = param_2[2];
  iVar3 = param_2[1];
  if (*param_2 == -0x80000000) {
    *param_1 = -0x80000000;
    param_1[1] = iVar3;
  }
  else {
    uVar4 = 0;
    if (iVar2 < 0) {
LAB_012e4b34:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,iVar2);
    }
    if (iVar2 == 0) {
      iVar1 = 1;
      iVar5 = 0;
    }
    else {
      uVar4 = 1;
      iVar1 = FUN_01298504(iVar2,1);
      iVar5 = iVar2;
      if (iVar1 == 0) goto LAB_012e4b34;
    }
    FUN_01bed4e2(iVar1,iVar3,iVar2);
    *param_1 = iVar5;
    param_1[1] = iVar1;
  }
  param_1[2] = iVar2;
  return;
}

