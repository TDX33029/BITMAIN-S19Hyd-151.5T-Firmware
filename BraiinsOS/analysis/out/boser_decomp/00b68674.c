// FUN_00b68674 @ 00b68674 size=204 calls_out=5 calls_in=2
// strings: 

void FUN_00b68674(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1[2] != 0) {
    FUN_00b68674(param_1[2],param_2);
  }
  iVar5 = *param_1;
  iVar6 = param_1[1];
  piVar3 = *(int **)*param_2;
  if (iVar5 == 0) {
    iVar7 = -0x80000000;
    iVar1 = iVar6;
  }
  else {
    uVar4 = 0;
    if (iVar6 < 0) {
LAB_00b686b0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,iVar6);
    }
    if (iVar6 == 0) {
      iVar7 = 0;
      iVar1 = 1;
    }
    else {
      uVar4 = 1;
      iVar1 = FUN_01298504(iVar6,1);
      if (iVar1 == 0) goto LAB_00b686b0;
      iVar7 = iVar6;
    }
    FUN_01bed4e2(iVar1,iVar5,iVar6);
  }
  iVar5 = piVar3[2];
  if (iVar5 == *piVar3) {
    FUN_00b68760(piVar3);
  }
  piVar2 = (int *)(piVar3[1] + iVar5 * 0xc);
  *piVar2 = iVar7;
  piVar2[1] = iVar1;
  piVar2[2] = iVar6;
  piVar3[2] = iVar5 + 1;
  return;
}

