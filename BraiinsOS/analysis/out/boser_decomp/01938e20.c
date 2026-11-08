// FUN_01938e20 @ 01938e20 size=132 calls_out=3 calls_in=2
// strings: 

void FUN_01938e20(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar3 = param_2[2];
  iVar2 = *param_2;
  iVar5 = param_2[1];
  if (iVar2 == -0x80000000) {
    uVar4 = 0;
    if (iVar3 < 0) {
LAB_01938e44:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,iVar3);
    }
    if (iVar3 == 0) {
      iVar1 = 1;
      iVar2 = 0;
    }
    else {
      uVar4 = 1;
      iVar1 = FUN_01298504(iVar3,1);
      iVar2 = iVar3;
      if (iVar1 == 0) goto LAB_01938e44;
    }
    FUN_01bed4e2(iVar1,iVar5,iVar3);
    iVar5 = iVar1;
  }
  *param_1 = iVar2;
  param_1[1] = iVar5;
  param_1[2] = iVar3;
  return;
}

