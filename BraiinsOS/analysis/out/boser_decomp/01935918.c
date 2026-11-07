// FUN_01935918 @ 01935918 size=140 calls_out=3 calls_in=15
// strings: 

void FUN_01935918(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*param_2 != -0x80000000) {
    iVar3 = param_2[1];
    iVar4 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = iVar3;
    param_1[2] = iVar4;
    return;
  }
  iVar3 = param_2[2];
  uVar5 = 0;
  if (iVar3 < 0) {
LAB_0193593c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar3);
  }
  iVar4 = param_2[1];
  if (iVar3 == 0) {
    iVar1 = 1;
    iVar2 = 0;
  }
  else {
    uVar5 = 1;
    iVar1 = FUN_01298504(iVar3,1);
    iVar2 = iVar3;
    if (iVar1 == 0) goto LAB_0193593c;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  FUN_01bed4e2(iVar1,iVar4,iVar3);
  param_1[2] = iVar3;
  return;
}

