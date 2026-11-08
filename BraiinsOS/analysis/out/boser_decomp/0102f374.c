// FUN_0102f374 @ 0102f374 size=124 calls_out=4 calls_in=1
// strings: 

void FUN_0102f374(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = param_2[1];
  iVar5 = param_2[2];
  iVar3 = 0;
  if (iVar5 < 0) {
LAB_0102f38c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(iVar3,iVar5);
  }
  if (iVar5 == 0) {
    iVar1 = 1;
  }
  else {
    iVar3 = 1;
    iVar1 = FUN_01298504(iVar5,1);
    if (iVar1 == 0) goto LAB_0102f38c;
    iVar3 = iVar5;
  }
  FUN_01bed4e2(iVar1,uVar4,iVar5);
  uVar2 = *param_2;
  *param_1 = iVar3;
  param_1[1] = iVar1;
  param_1[2] = iVar5;
  FUN_019bb7e0(uVar2,uVar4);
  return;
}

