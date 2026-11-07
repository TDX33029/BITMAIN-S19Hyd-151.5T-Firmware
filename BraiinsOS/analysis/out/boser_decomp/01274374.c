// FUN_01274374 @ 01274374 size=148 calls_out=3 calls_in=1
// strings: 

void FUN_01274374(undefined1 *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (*param_2 == -0x80000000) {
    uVar1 = 0;
  }
  else {
    iVar3 = param_2[2];
    uVar4 = 0;
    if (iVar3 < 0) {
LAB_012743a0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,iVar3);
    }
    iVar5 = param_2[1];
    if (iVar3 == 0) {
      iVar2 = 1;
      iVar6 = 0;
    }
    else {
      uVar4 = 1;
      iVar2 = FUN_01298504(iVar3,1);
      iVar6 = iVar3;
      if (iVar2 == 0) goto LAB_012743a0;
    }
    FUN_01bed4e2(iVar2,iVar5,iVar3);
    *(int *)(param_1 + 4) = iVar6;
    uVar1 = 3;
    *(int *)(param_1 + 8) = iVar2;
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *param_1 = uVar1;
  return;
}

