// FUN_01a4a8e8 @ 01a4a8e8 size=128 calls_out=3 calls_in=2
// strings: 

int * FUN_01a4a8e8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (*param_1 == -0x80000000) {
    iVar2 = param_1[2];
    uVar4 = 0;
    if (iVar2 < 0) {
LAB_01a4a90c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,iVar2);
    }
    iVar3 = param_1[1];
    if (iVar2 == 0) {
      iVar1 = 1;
      iVar5 = 0;
    }
    else {
      uVar4 = 1;
      iVar1 = FUN_01298504(iVar2,1);
      iVar5 = iVar2;
      if (iVar1 == 0) goto LAB_01a4a90c;
    }
    FUN_01bed4e2(iVar1,iVar3,iVar2);
    *param_1 = iVar5;
    param_1[1] = iVar1;
  }
  return param_1;
}

